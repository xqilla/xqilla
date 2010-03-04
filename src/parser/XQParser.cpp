
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
     _BY_ = 390,
     _ORDER_ = 391,
     _STABLE_ = 392,
     _ASCENDING_ = 393,
     _DESCENDING_ = 394,
     _EMPTY_ = 395,
     _GREATEST_ = 396,
     _LEAST_ = 397,
     _COLLATION_ = 398,
     _SOME_ = 399,
     _EVERY_ = 400,
     _SATISFIES_ = 401,
     _TYPESWITCH_ = 402,
     _CASE_ = 403,
     _CASE_S_ = 404,
     _AS_ = 405,
     _IF_ = 406,
     _THEN_ = 407,
     _ELSE_ = 408,
     _OR_ = 409,
     _AND_ = 410,
     _INSTANCE_ = 411,
     _OF_ = 412,
     _CASTABLE_ = 413,
     _TO_ = 414,
     _DIV_ = 415,
     _MOD_ = 416,
     _UNION_ = 417,
     _INTERSECT_ = 418,
     _EXCEPT_ = 419,
     _VALIDATE_ = 420,
     _CAST_ = 421,
     _TREAT_ = 422,
     _IS_ = 423,
     _PRESERVE_ = 424,
     _STRIP_ = 425,
     _NAMESPACE_ = 426,
     _ITEM_ = 427,
     _EXTERNAL_ = 428,
     _ENCODING_ = 429,
     _NO_PRESERVE_ = 430,
     _INHERIT_ = 431,
     _NO_INHERIT_ = 432,
     _DECLARE_ = 433,
     _CONSTRUCTION_ = 434,
     _ORDERING_ = 435,
     _DEFAULT_ = 436,
     _COPY_NAMESPACES_ = 437,
     _OPTION_ = 438,
     _XQUERY_ = 439,
     _VERSION_ = 440,
     _IMPORT_ = 441,
     _SCHEMA_ = 442,
     _MODULE_ = 443,
     _ELEMENT_ = 444,
     _FUNCTION_ = 445,
     _FUNCTION_EXT_ = 446,
     _SCORE_ = 447,
     _CONTAINS_ = 448,
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
     _NODES_ = 479,
     _RENAME_ = 480,
     _LAST_ = 481,
     _DELETE_ = 482,
     _INTO_ = 483,
     _UPDATING_ = 484,
     _ID_ = 485,
     _KEY_ = 486,
     _TEMPLATE_ = 487,
     _MATCHES_ = 488,
     _NAME_ = 489,
     _CALL_ = 490,
     _APPLY_ = 491,
     _TEMPLATES_ = 492,
     _MODE_ = 493,
     _FTOR_ = 494,
     _FTAND_ = 495,
     _FTNOT_ = 496,
     _XSLT_END_ELEMENT_ = 497,
     _XSLT_STYLESHEET_ = 498,
     _XSLT_TEMPLATE_ = 499,
     _XSLT_VALUE_OF_ = 500,
     _XSLT_TEXT_ = 501,
     _XSLT_APPLY_TEMPLATES_ = 502,
     _XSLT_CALL_TEMPLATE_ = 503,
     _XSLT_WITH_PARAM_ = 504,
     _XSLT_SEQUENCE_ = 505,
     _XSLT_PARAM_ = 506,
     _XSLT_FUNCTION_ = 507,
     _XSLT_CHOOSE_ = 508,
     _XSLT_WHEN_ = 509,
     _XSLT_OTHERWISE_ = 510,
     _XSLT_IF_ = 511,
     _XSLT_VARIABLE_ = 512,
     _XSLT_COMMENT_ = 513,
     _XSLT_PI_ = 514,
     _XSLT_DOCUMENT_ = 515,
     _XSLT_ATTRIBUTE_ = 516,
     _XSLT_NAMESPACE_ = 517,
     _XSLT_ELEMENT_ = 518,
     _XSLT_ANALYZE_STRING_ = 519,
     _XSLT_MATCHING_SUBSTRING_ = 520,
     _XSLT_NON_MATCHING_SUBSTRING_ = 521,
     _XSLT_COPY_OF_ = 522,
     _XSLT_COPY_ = 523,
     _XSLT_FOR_EACH_ = 524,
     _XSLT_OUTPUT_ = 525,
     _XSLT_IMPORT_SCHEMA_ = 526,
     _XSLT_VERSION_ = 527,
     _XSLT_MODE_ = 528,
     _XSLT_NAME_ = 529,
     _XSLT_DOCTYPE_PUBLIC_ = 530,
     _XSLT_DOCTYPE_SYSTEM_ = 531,
     _XSLT_ENCODING_ = 532,
     _XSLT_MEDIA_TYPE_ = 533,
     _XSLT_NORMALIZATION_FORM_ = 534,
     _XSLT_STANDALONE_ = 535,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 536,
     _XSLT_NAMESPACE_STR_ = 537,
     _XSLT_SCHEMA_LOCATION_ = 538,
     _XSLT_TUNNEL_ = 539,
     _XSLT_REQUIRED_ = 540,
     _XSLT_OVERRIDE_ = 541,
     _XSLT_COPY_NAMESPACES_ = 542,
     _XSLT_INHERIT_NAMESPACES_ = 543,
     _XSLT_BYTE_ORDER_MARK_ = 544,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 545,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 546,
     _XSLT_INDENT_ = 547,
     _XSLT_OMIT_XML_DECLARATION_ = 548,
     _XSLT_UNDECLARE_PREFIXES_ = 549,
     _XSLT_MATCH_ = 550,
     _XSLT_AS_ = 551,
     _XSLT_SELECT_ = 552,
     _XSLT_PRIORITY_ = 553,
     _XSLT_TEST_ = 554,
     _XSLT_SEPARATOR_ = 555,
     _XSLT_NAMESPACE_A_ = 556,
     _XSLT_REGEX_ = 557,
     _XSLT_FLAGS_ = 558,
     _XSLT_METHOD_ = 559,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 560,
     _XSLT_USE_CHARACTER_MAPS_ = 561,
     _XSLT_ELEMENT_NAME_ = 562,
     _XSLT_XMLNS_ATTR_ = 563,
     _XSLT_ATTR_NAME_ = 564,
     _XSLT_TEXT_NODE_ = 565,
     _XSLT_WS_TEXT_NODE_ = 566,
     _HASH_DEFAULT_ = 567,
     _HASH_ALL_ = 568,
     _HASH_CURRENT_ = 569,
     _XML_ = 570,
     _HTML_ = 571,
     _XHTML_ = 572
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
#define _BY_ 390
#define _ORDER_ 391
#define _STABLE_ 392
#define _ASCENDING_ 393
#define _DESCENDING_ 394
#define _EMPTY_ 395
#define _GREATEST_ 396
#define _LEAST_ 397
#define _COLLATION_ 398
#define _SOME_ 399
#define _EVERY_ 400
#define _SATISFIES_ 401
#define _TYPESWITCH_ 402
#define _CASE_ 403
#define _CASE_S_ 404
#define _AS_ 405
#define _IF_ 406
#define _THEN_ 407
#define _ELSE_ 408
#define _OR_ 409
#define _AND_ 410
#define _INSTANCE_ 411
#define _OF_ 412
#define _CASTABLE_ 413
#define _TO_ 414
#define _DIV_ 415
#define _MOD_ 416
#define _UNION_ 417
#define _INTERSECT_ 418
#define _EXCEPT_ 419
#define _VALIDATE_ 420
#define _CAST_ 421
#define _TREAT_ 422
#define _IS_ 423
#define _PRESERVE_ 424
#define _STRIP_ 425
#define _NAMESPACE_ 426
#define _ITEM_ 427
#define _EXTERNAL_ 428
#define _ENCODING_ 429
#define _NO_PRESERVE_ 430
#define _INHERIT_ 431
#define _NO_INHERIT_ 432
#define _DECLARE_ 433
#define _CONSTRUCTION_ 434
#define _ORDERING_ 435
#define _DEFAULT_ 436
#define _COPY_NAMESPACES_ 437
#define _OPTION_ 438
#define _XQUERY_ 439
#define _VERSION_ 440
#define _IMPORT_ 441
#define _SCHEMA_ 442
#define _MODULE_ 443
#define _ELEMENT_ 444
#define _FUNCTION_ 445
#define _FUNCTION_EXT_ 446
#define _SCORE_ 447
#define _CONTAINS_ 448
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
#define _NODES_ 479
#define _RENAME_ 480
#define _LAST_ 481
#define _DELETE_ 482
#define _INTO_ 483
#define _UPDATING_ 484
#define _ID_ 485
#define _KEY_ 486
#define _TEMPLATE_ 487
#define _MATCHES_ 488
#define _NAME_ 489
#define _CALL_ 490
#define _APPLY_ 491
#define _TEMPLATES_ 492
#define _MODE_ 493
#define _FTOR_ 494
#define _FTAND_ 495
#define _FTNOT_ 496
#define _XSLT_END_ELEMENT_ 497
#define _XSLT_STYLESHEET_ 498
#define _XSLT_TEMPLATE_ 499
#define _XSLT_VALUE_OF_ 500
#define _XSLT_TEXT_ 501
#define _XSLT_APPLY_TEMPLATES_ 502
#define _XSLT_CALL_TEMPLATE_ 503
#define _XSLT_WITH_PARAM_ 504
#define _XSLT_SEQUENCE_ 505
#define _XSLT_PARAM_ 506
#define _XSLT_FUNCTION_ 507
#define _XSLT_CHOOSE_ 508
#define _XSLT_WHEN_ 509
#define _XSLT_OTHERWISE_ 510
#define _XSLT_IF_ 511
#define _XSLT_VARIABLE_ 512
#define _XSLT_COMMENT_ 513
#define _XSLT_PI_ 514
#define _XSLT_DOCUMENT_ 515
#define _XSLT_ATTRIBUTE_ 516
#define _XSLT_NAMESPACE_ 517
#define _XSLT_ELEMENT_ 518
#define _XSLT_ANALYZE_STRING_ 519
#define _XSLT_MATCHING_SUBSTRING_ 520
#define _XSLT_NON_MATCHING_SUBSTRING_ 521
#define _XSLT_COPY_OF_ 522
#define _XSLT_COPY_ 523
#define _XSLT_FOR_EACH_ 524
#define _XSLT_OUTPUT_ 525
#define _XSLT_IMPORT_SCHEMA_ 526
#define _XSLT_VERSION_ 527
#define _XSLT_MODE_ 528
#define _XSLT_NAME_ 529
#define _XSLT_DOCTYPE_PUBLIC_ 530
#define _XSLT_DOCTYPE_SYSTEM_ 531
#define _XSLT_ENCODING_ 532
#define _XSLT_MEDIA_TYPE_ 533
#define _XSLT_NORMALIZATION_FORM_ 534
#define _XSLT_STANDALONE_ 535
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 536
#define _XSLT_NAMESPACE_STR_ 537
#define _XSLT_SCHEMA_LOCATION_ 538
#define _XSLT_TUNNEL_ 539
#define _XSLT_REQUIRED_ 540
#define _XSLT_OVERRIDE_ 541
#define _XSLT_COPY_NAMESPACES_ 542
#define _XSLT_INHERIT_NAMESPACES_ 543
#define _XSLT_BYTE_ORDER_MARK_ 544
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 545
#define _XSLT_INCLUDE_CONTENT_TYPE_ 546
#define _XSLT_INDENT_ 547
#define _XSLT_OMIT_XML_DECLARATION_ 548
#define _XSLT_UNDECLARE_PREFIXES_ 549
#define _XSLT_MATCH_ 550
#define _XSLT_AS_ 551
#define _XSLT_SELECT_ 552
#define _XSLT_PRIORITY_ 553
#define _XSLT_TEST_ 554
#define _XSLT_SEPARATOR_ 555
#define _XSLT_NAMESPACE_A_ 556
#define _XSLT_REGEX_ 557
#define _XSLT_FLAGS_ 558
#define _XSLT_METHOD_ 559
#define _XSLT_CDATA_SECTION_ELEMENTS_ 560
#define _XSLT_USE_CHARACTER_MAPS_ 561
#define _XSLT_ELEMENT_NAME_ 562
#define _XSLT_XMLNS_ATTR_ 563
#define _XSLT_ATTR_NAME_ 564
#define _XSLT_TEXT_NODE_ 565
#define _XSLT_WS_TEXT_NODE_ 566
#define _HASH_DEFAULT_ 567
#define _HASH_ALL_ 568
#define _HASH_CURRENT_ 569
#define _XML_ 570
#define _HTML_ 571
#define _XHTML_ 572




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
#line 1077 "../src/parser/XQParser.cpp"

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
#define YYFINAL  325
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8196

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  318
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  341
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1013
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1660

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   572

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
     315,   316,   317
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
     749,   751,   753,   755,   757,   759,   761,   767,   775,   781,
     789,   791,   793,   796,   799,   801,   803,   806,   809,   810,
     814,   818,   822,   826,   830,   834,   838,   842,   846,   849,
     852,   854,   856,   859,   862,   863,   867,   871,   875,   879,
     883,   887,   891,   895,   898,   901,   903,   905,   910,   917,
     920,   923,   930,   931,   935,   939,   943,   947,   951,   955,
     959,   963,   967,   969,   971,   973,   975,   977,   979,   981,
     983,   985,   987,   989,   995,   999,  1003,  1009,  1015,  1020,
    1024,  1028,  1032,  1038,  1044,  1050,  1052,  1054,  1056,  1058,
    1063,  1067,  1073,  1078,  1079,  1082,  1086,  1090,  1094,  1102,
    1107,  1114,  1117,  1119,  1123,  1127,  1134,  1143,  1150,  1159,
    1162,  1166,  1167,  1169,  1173,  1175,  1179,  1183,  1185,  1189,
    1191,  1193,  1195,  1197,  1199,  1201,  1203,  1205,  1207,  1209,
    1211,  1213,  1215,  1219,  1221,  1224,  1227,  1229,  1231,  1233,
    1235,  1238,  1242,  1244,  1252,  1253,  1257,  1258,  1262,  1265,
    1269,  1271,  1277,  1283,  1286,  1290,  1295,  1299,  1301,  1305,
    1311,  1313,  1314,  1316,  1318,  1319,  1322,  1325,  1330,  1335,
    1339,  1341,  1347,  1354,  1357,  1359,  1365,  1369,  1374,  1382,
    1391,  1395,  1397,  1401,  1403,  1407,  1411,  1412,  1417,  1421,
    1425,  1429,  1433,  1437,  1441,  1445,  1449,  1453,  1457,  1461,
    1465,  1467,  1472,  1478,  1480,  1484,  1486,  1490,  1494,  1496,
    1500,  1504,  1508,  1512,  1514,  1518,  1522,  1524,  1528,  1532,
    1534,  1539,  1541,  1546,  1548,  1553,  1555,  1560,  1562,  1565,
    1568,  1570,  1572,  1574,  1576,  1581,  1587,  1593,  1597,  1602,
    1604,  1607,  1612,  1614,  1617,  1619,  1622,  1625,  1627,  1629,
    1633,  1637,  1639,  1641,  1643,  1645,  1647,  1649,  1654,  1656,
    1661,  1664,  1666,  1669,  1672,  1675,  1678,  1681,  1684,  1687,
    1690,  1693,  1695,  1698,  1700,  1703,  1706,  1709,  1712,  1715,
    1717,  1719,  1721,  1723,  1725,  1727,  1729,  1731,  1733,  1738,
    1740,  1742,  1744,  1746,  1748,  1750,  1752,  1754,  1756,  1758,
    1760,  1762,  1764,  1766,  1768,  1771,  1773,  1777,  1780,  1782,
    1787,  1792,  1796,  1801,  1805,  1807,  1809,  1811,  1813,  1815,
    1817,  1819,  1821,  1827,  1838,  1840,  1842,  1843,  1851,  1859,
    1860,  1862,  1866,  1870,  1874,  1878,  1879,  1882,  1885,  1886,
    1889,  1892,  1893,  1896,  1899,  1900,  1903,  1906,  1907,  1910,
    1913,  1916,  1919,  1923,  1924,  1926,  1930,  1932,  1935,  1937,
    1939,  1941,  1943,  1945,  1947,  1952,  1956,  1958,  1962,  1965,
    1969,  1973,  1975,  1979,  1984,  1989,  1993,  1995,  1999,  2002,
    2006,  2009,  2010,  2012,  2013,  2016,  2019,  2023,  2024,  2026,
    2028,  2030,  2032,  2036,  2038,  2040,  2042,  2044,  2046,  2048,
    2050,  2052,  2054,  2056,  2058,  2060,  2062,  2066,  2070,  2075,
    2080,  2084,  2088,  2092,  2097,  2102,  2106,  2111,  2118,  2120,
    2122,  2127,  2129,  2133,  2138,  2145,  2153,  2155,  2157,  2162,
    2164,  2166,  2168,  2170,  2172,  2176,  2177,  2180,  2181,  2184,
    2188,  2190,  2194,  2196,  2201,  2203,  2206,  2208,  2210,  2213,
    2216,  2220,  2222,  2225,  2230,  2234,  2239,  2240,  2242,  2245,
    2247,  2250,  2252,  2253,  2257,  2260,  2264,  2268,  2273,  2275,
    2279,  2283,  2286,  2289,  2292,  2295,  2298,  2300,  2302,  2304,
    2306,  2308,  2311,  2315,  2317,  2319,  2321,  2323,  2325,  2327,
    2329,  2331,  2334,  2337,  2339,  2341,  2344,  2347,  2349,  2352,
    2355,  2358,  2364,  2370,  2373,  2374,  2378,  2381,  2386,  2391,
    2398,  2403,  2407,  2412,  2413,  2416,  2419,  2423,  2425,  2429,
    2432,  2435,  2438,  2440,  2443,  2447,  2451,  2455,  2459,  2463,
    2470,  2477,  2482,  2487,  2492,  2495,  2498,  2501,  2504,  2507,
    2515,  2521,  2527,  2534,  2538,  2540,  2545,  2547,  2549,  2551,
    2553,  2555,  2557,  2563,  2571,  2580,  2591,  2598,  2607,  2608,
    2611,  2614,  2618,  2619,  2622,  2624,  2628,  2630,  2632,  2634,
    2638,  2646,  2650,  2658,  2664,  2674,  2676,  2678,  2680,  2682,
    2686,  2692,  2694,  2696,  2700,  2705,  2709,  2714,  2716,  2718,
    2723,  2729,  2736,  2738,  2742,  2746,  2748,  2750,  2752,  2754,
    2756,  2758,  2760,  2762,  2764,  2766,  2768,  2770,  2772,  2774,
    2776,  2778,  2780,  2782,  2784,  2786,  2788,  2790,  2792,  2794,
    2796,  2798,  2800,  2802,  2804,  2806,  2808,  2810,  2812,  2814,
    2816,  2818,  2820,  2822,  2824,  2826,  2828,  2830,  2832,  2834,
    2836,  2838,  2840,  2842,  2844,  2846,  2848,  2850,  2852,  2854,
    2856,  2858,  2860,  2862,  2864,  2866,  2868,  2870,  2872,  2874,
    2876,  2878,  2880,  2882,  2884,  2886,  2888,  2890,  2892,  2894,
    2896,  2898,  2900,  2902,  2904,  2906,  2908,  2910,  2912,  2914,
    2916,  2918,  2920,  2922,  2924,  2926,  2928,  2930,  2932,  2934,
    2936,  2938,  2940,  2942,  2944,  2946,  2948,  2950,  2952,  2954,
    2956,  2958,  2960,  2962,  2964,  2966,  2968,  2970,  2972,  2974,
    2976,  2978,  2980,  2982,  2984,  2986,  2988,  2990,  2992,  2994,
    2996,  2998,  3000,  3002,  3004,  3006,  3008,  3010,  3012,  3014,
    3016,  3018,  3020,  3022,  3024,  3026,  3028,  3030,  3032,  3034,
    3036,  3038,  3040,  3042,  3044,  3046,  3048,  3050,  3052,  3054,
    3056,  3058,  3060,  3062,  3064,  3066,  3068,  3070,  3072,  3074,
    3076,  3078,  3080,  3082
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     319,     0,    -1,     3,   453,    -1,     4,   404,    -1,     5,
     411,    -1,     6,   415,    -1,     7,   419,    -1,     8,   320,
      -1,   321,    -1,   243,   322,   323,   242,    -1,   343,    -1,
      -1,   322,   272,    -1,   322,   281,    -1,    -1,   323,   324,
      -1,   323,   328,    -1,   323,   333,    -1,   323,   335,    -1,
     323,   337,    -1,   323,   341,    -1,   325,   330,   346,   242,
      -1,   244,    -1,   325,   295,   394,    -1,   325,   274,    -1,
     325,   298,   327,    -1,   325,   273,   326,    -1,   325,   296,
     565,    -1,    -1,   326,   121,    -1,   326,   312,    -1,   326,
     313,    -1,    52,    -1,    53,    -1,    54,    -1,   329,   330,
     346,   242,    -1,   252,    -1,   329,   274,    -1,   329,   296,
     565,    -1,   329,   286,    -1,    -1,   330,   331,    -1,   332,
     346,   242,    -1,   251,    -1,   332,   274,    -1,   332,   297,
     454,    -1,   332,   296,   565,    -1,   332,   285,    -1,   332,
     284,    -1,   334,   346,   242,    -1,   251,    -1,   334,   274,
      -1,   334,   297,   454,    -1,   334,   296,   565,    -1,   334,
     285,    -1,   334,   284,    -1,   336,   346,   242,    -1,   257,
      -1,   336,   274,    -1,   336,   297,   454,    -1,   336,   296,
     565,    -1,   338,   242,    -1,   270,    -1,   338,   274,    -1,
     338,   304,   339,    -1,   338,   289,    -1,   338,   305,   340,
      -1,   338,   275,    -1,   338,   276,    -1,   338,   277,    -1,
     338,   290,    -1,   338,   291,    -1,   338,   292,    -1,   338,
     278,    -1,   338,   279,    -1,   338,   293,    -1,   338,   280,
      -1,   338,   294,    -1,   338,   306,   340,    -1,   338,   272,
      -1,   315,    -1,   316,    -1,   317,    -1,    62,    -1,   121,
      -1,   121,    -1,   340,   121,    -1,   342,   242,    -1,   271,
      -1,   271,   282,    -1,   271,   283,    -1,   271,   282,   283,
      -1,   271,   283,   282,    -1,   307,   344,   346,   242,    -1,
      -1,   344,   309,   345,    -1,   344,   308,    -1,    -1,   345,
     452,    -1,   345,   114,    -1,    -1,   346,   351,    -1,   346,
     343,    -1,   346,   347,    -1,   348,    -1,   350,    -1,   352,
      -1,   356,    -1,   361,    -1,   365,    -1,   363,    -1,   374,
      -1,   376,    -1,   378,    -1,   380,    -1,   382,    -1,   384,
      -1,   386,    -1,   370,    -1,   388,    -1,   390,    -1,   392,
      -1,   349,   346,   242,    -1,   245,    -1,   349,   297,   454,
      -1,   349,   300,   345,    -1,   246,   351,   242,    -1,   310,
      -1,   311,    -1,   353,   355,   242,    -1,   247,    -1,   353,
     297,   454,    -1,   353,   273,   354,    -1,   121,    -1,   312,
      -1,   314,    -1,    -1,   355,   359,    -1,   357,   358,   242,
      -1,   248,    -1,   357,   274,    -1,    -1,   358,   359,    -1,
     360,   346,   242,    -1,   249,    -1,   360,   274,    -1,   360,
     297,   454,    -1,   360,   296,   565,    -1,   360,   284,    -1,
     362,   242,    -1,   250,   297,   454,    -1,   364,   346,   242,
      -1,   256,   299,   454,    -1,   253,   366,   369,   242,    -1,
     367,    -1,   366,   367,    -1,   368,   346,   242,    -1,   254,
     299,   454,    -1,    -1,   255,   346,   242,    -1,   371,   372,
     373,   242,    -1,   264,    -1,   371,   297,   454,    -1,   371,
     302,   345,    -1,   371,   303,   345,    -1,    -1,   265,   346,
     242,    -1,    -1,   266,   346,   242,    -1,   375,   346,   242,
     346,    -1,   257,    -1,   375,   274,    -1,   375,   297,   454,
      -1,   375,   296,   565,    -1,   377,   346,   242,    -1,   258,
      -1,   377,   297,   454,    -1,   379,   346,   242,    -1,   259,
      -1,   379,   274,   345,    -1,   379,   297,   454,    -1,   381,
     346,   242,    -1,   260,    -1,   383,   346,   242,    -1,   261,
      -1,   383,   274,   345,    -1,   383,   301,   345,    -1,   383,
     297,   454,    -1,   383,   300,   345,    -1,   385,   346,   242,
      -1,   262,    -1,   385,   274,   345,    -1,   385,   297,   454,
      -1,   387,   346,   242,    -1,   263,    -1,   387,   274,   345,
      -1,   387,   301,   345,    -1,   389,   242,    -1,   267,    -1,
     389,   297,   454,    -1,   389,   287,    -1,   391,   346,   242,
      -1,   268,    -1,   391,   287,    -1,   391,   288,    -1,   393,
     346,   242,    -1,   269,    -1,   393,   297,   454,    -1,   394,
      12,   395,    -1,   395,    -1,   400,    -1,    36,    -1,   397,
      -1,    36,    -1,    30,    -1,   230,    40,   398,    41,    -1,
     231,    40,   634,    33,   399,    41,    -1,   634,    -1,   524,
      -1,   522,    -1,   524,    -1,   401,    -1,   396,   401,    -1,
     397,    36,   401,    -1,   397,    30,   401,    -1,   400,    36,
     401,    -1,   400,    30,   401,    -1,   402,   403,    -1,   517,
      -1,    70,    19,   517,    -1,    55,    19,   517,    -1,    20,
     517,    -1,    -1,   403,    21,   454,    22,    -1,   420,   405,
      -1,   420,   406,    -1,   405,    -1,   406,    -1,   407,   453,
      -1,   423,   407,    -1,    -1,   407,   408,   427,    -1,   407,
     426,   427,    -1,   407,   428,   427,    -1,   407,   430,   427,
      -1,   407,   444,   427,    -1,   407,   409,   427,    -1,   407,
     637,   427,    -1,   407,   431,   427,    -1,   429,    -1,   438,
      -1,   439,    -1,   446,    -1,   433,    -1,   434,    -1,   435,
      -1,   178,   410,   658,   448,   452,    -1,   178,   410,   658,
     448,   150,   565,   452,    -1,   178,   410,   658,   448,   173,
      -1,   178,   410,   658,   448,   150,   565,   173,    -1,   190,
      -1,   191,    -1,   420,   412,    -1,   420,   413,    -1,   412,
      -1,   413,    -1,   414,   453,    -1,   423,   414,    -1,    -1,
     414,   408,   427,    -1,   414,   426,   427,    -1,   414,   428,
     427,    -1,   414,   430,   427,    -1,   414,   444,   427,    -1,
     414,   409,   427,    -1,   414,   637,   427,    -1,   414,   431,
     427,    -1,   414,   432,   427,    -1,   420,   416,    -1,   420,
     417,    -1,   416,    -1,   417,    -1,   418,   453,    -1,   423,
     418,    -1,    -1,   418,   425,   427,    -1,   418,   426,   427,
      -1,   418,   428,   427,    -1,   418,   430,   427,    -1,   418,
     444,   427,    -1,   418,   447,   427,    -1,   418,   637,   427,
      -1,   418,   431,   427,    -1,   420,   421,    -1,   420,   422,
      -1,   421,    -1,   422,    -1,   184,   185,   124,   427,    -1,
     184,   185,   124,   174,   124,   427,    -1,   424,   453,    -1,
     423,   424,    -1,   188,   171,   635,    37,   586,   427,    -1,
      -1,   424,   425,   427,    -1,   424,   426,   427,    -1,   424,
     428,   427,    -1,   424,   430,   427,    -1,   424,   444,   427,
      -1,   424,   447,   427,    -1,   424,   637,   427,    -1,   424,
     431,   427,    -1,   424,   432,   427,    -1,   429,    -1,   438,
      -1,   439,    -1,   446,    -1,   433,    -1,   434,    -1,   621,
      -1,   435,    -1,   440,    -1,   443,    -1,    50,    -1,   178,
     171,   635,    37,   586,    -1,   178,    64,   169,    -1,   178,
      64,   170,    -1,   178,   181,   189,   171,   586,    -1,   178,
     181,   410,   171,   586,    -1,   178,   183,   657,   124,    -1,
     178,    65,   604,    -1,   178,   180,   119,    -1,   178,   180,
     120,    -1,   178,   181,   136,   140,   141,    -1,   178,   181,
     136,   140,   142,    -1,   178,   182,   436,    33,   437,    -1,
     169,    -1,   175,    -1,   176,    -1,   177,    -1,   178,   181,
     143,   586,    -1,   178,    66,   586,    -1,   186,   187,   442,
     586,   441,    -1,   186,   187,   586,   441,    -1,    -1,   113,
     586,    -1,   441,    33,   586,    -1,   171,   635,    37,    -1,
     181,   189,   171,    -1,   186,   188,   171,   635,    37,   586,
     441,    -1,   186,   188,   586,   441,    -1,   178,   125,     9,
     525,   564,   445,    -1,    10,   455,    -1,   173,    -1,   178,
     179,   169,    -1,   178,   179,   170,    -1,   178,   449,   410,
     658,   448,   452,    -1,   178,   449,   410,   658,   448,   150,
     565,   452,    -1,   178,   449,   410,   658,   448,   173,    -1,
     178,   449,   410,   658,   448,   150,   565,   173,    -1,    40,
      41,    -1,    40,   450,    41,    -1,    -1,   229,    -1,   450,
      33,   451,    -1,   451,    -1,     9,   525,   564,    -1,    48,
     454,    49,    -1,   454,    -1,   454,    33,   455,    -1,   455,
      -1,   456,    -1,   475,    -1,   478,    -1,   482,    -1,   622,
      -1,   624,    -1,   627,    -1,   626,    -1,   628,    -1,   483,
      -1,   643,    -1,   644,    -1,   457,   130,   455,    -1,   458,
      -1,   457,   469,    -1,   457,   459,    -1,   460,    -1,   465,
      -1,   458,    -1,   468,    -1,   131,   461,    -1,   461,    33,
     462,    -1,   462,    -1,     9,   525,   564,   463,   464,   132,
     455,    -1,    -1,   113,     9,   525,    -1,    -1,   192,     9,
     525,    -1,   133,   466,    -1,   466,    33,   467,    -1,   467,
      -1,     9,   525,   564,    10,   455,    -1,   192,     9,   525,
      10,   455,    -1,   134,   455,    -1,   136,   135,   470,    -1,
     137,   136,   135,   470,    -1,   470,    33,   471,    -1,   471,
      -1,   472,   473,   474,    -1,   472,   473,   474,   143,   586,
      -1,   455,    -1,    -1,   138,    -1,   139,    -1,    -1,   140,
     141,    -1,   140,   142,    -1,   144,   476,   146,   455,    -1,
     145,   476,   146,   455,    -1,   476,    33,   477,    -1,   477,
      -1,     9,   525,   564,   132,   455,    -1,   147,    40,   454,
      41,   479,   480,    -1,   479,   481,    -1,   481,    -1,   181,
       9,   525,   130,   455,    -1,   181,   130,   455,    -1,   148,
     565,   130,   455,    -1,   148,     9,   525,   150,   565,   130,
     455,    -1,   151,    40,   454,    41,   152,   455,   153,   455,
      -1,   483,   154,   484,    -1,   484,    -1,   484,   155,   485,
      -1,   485,    -1,   487,    37,   487,    -1,   487,    13,   487,
      -1,    -1,   487,    24,   486,   487,    -1,   487,    14,   487,
      -1,   487,    15,   487,    -1,   487,    16,   487,    -1,   487,
     107,   487,    -1,   487,   108,   487,    -1,   487,   109,   487,
      -1,   487,   110,   487,    -1,   487,   111,   487,    -1,   487,
     112,   487,    -1,   487,   168,   487,    -1,   487,    17,   487,
      -1,   487,    18,   487,    -1,   487,    -1,   488,   193,    62,
     587,    -1,   488,   193,    62,   587,   620,    -1,   488,    -1,
     489,   159,   489,    -1,   489,    -1,   489,    34,   490,    -1,
     489,    35,   490,    -1,   490,    -1,   490,    11,   491,    -1,
     490,   160,   491,    -1,   490,    69,   491,    -1,   490,   161,
     491,    -1,   491,    -1,   491,    12,   492,    -1,   491,   162,
     492,    -1,   492,    -1,   492,   163,   493,    -1,   492,   164,
     493,    -1,   493,    -1,   494,   156,   157,   565,    -1,   494,
      -1,   495,   167,   150,   565,    -1,   495,    -1,   496,   158,
     150,   562,    -1,   496,    -1,   497,   166,   150,   562,    -1,
     497,    -1,    35,   497,    -1,    34,   497,    -1,   498,    -1,
     499,    -1,   504,    -1,   500,    -1,   165,    48,   454,    49,
      -1,   165,    67,    48,   454,    49,    -1,   165,    68,    48,
     454,    49,    -1,   501,    48,    49,    -1,   501,    48,   454,
      49,    -1,   502,    -1,   501,   502,    -1,    32,   538,   657,
     503,    -1,   129,    -1,   104,   129,    -1,   505,    -1,   505,
     506,    -1,    30,   506,    -1,   506,    -1,    36,    -1,   506,
      36,   507,    -1,   506,    30,   507,    -1,   507,    -1,   508,
      -1,   520,    -1,   509,    -1,   510,    -1,   511,    -1,   509,
      21,   454,    22,    -1,   514,    -1,   510,    21,   454,    22,
      -1,   512,   517,    -1,   513,    -1,    70,    19,    -1,    71,
      19,    -1,    55,    19,    -1,    72,    19,    -1,    73,    19,
      -1,    74,    19,    -1,    75,    19,    -1,   171,    19,    -1,
      20,   517,    -1,   517,    -1,   515,   517,    -1,   516,    -1,
      76,    19,    -1,    77,    19,    -1,    78,    19,    -1,    79,
      19,    -1,    80,    19,    -1,    39,    -1,   569,    -1,   518,
      -1,   636,    -1,   519,    -1,    11,    -1,   126,    -1,   127,
      -1,   521,    -1,   520,    21,   454,    22,    -1,   651,    -1,
     522,    -1,   524,    -1,   526,    -1,   527,    -1,   530,    -1,
     533,    -1,   528,    -1,   529,    -1,   648,    -1,   523,    -1,
     634,    -1,   631,    -1,   632,    -1,   633,    -1,     9,   525,
      -1,   657,    -1,    40,   454,    41,    -1,    40,    41,    -1,
      38,    -1,   119,    48,   454,    49,    -1,   120,    48,   454,
      49,    -1,   658,    40,    41,    -1,   658,    40,   531,    41,
      -1,   531,    33,   532,    -1,   532,    -1,   455,    -1,    23,
      -1,   534,    -1,   550,    -1,   535,    -1,   546,    -1,   548,
      -1,    24,   536,   537,   538,    42,    -1,    24,   536,   537,
     538,    25,   545,    31,   536,   538,    26,    -1,   121,    -1,
     122,    -1,    -1,   537,   104,   121,   538,    43,   538,   539,
      -1,   537,   104,   122,   538,    43,   538,   540,    -1,    -1,
     104,    -1,    44,   541,    45,    -1,    46,   543,    47,    -1,
      44,   542,    45,    -1,    46,   544,    47,    -1,    -1,   541,
     452,    -1,   541,   114,    -1,    -1,   542,   452,    -1,   542,
     114,    -1,    -1,   543,   452,    -1,   543,   115,    -1,    -1,
     544,   452,    -1,   544,   115,    -1,    -1,   545,   534,    -1,
     545,   452,    -1,   545,   117,    -1,   545,   116,    -1,    28,
     547,    29,    -1,    -1,   106,    -1,    27,   128,   549,    -1,
     105,    -1,   104,   105,    -1,   551,    -1,   552,    -1,   555,
      -1,   557,    -1,   558,    -1,   559,    -1,    81,    48,   454,
      49,    -1,   189,   553,   554,    -1,   123,    -1,    48,   454,
      49,    -1,    48,    49,    -1,    48,   454,    49,    -1,    55,
     556,   554,    -1,   123,    -1,    48,   454,    49,    -1,    62,
      48,   454,    49,    -1,    56,    48,   454,    49,    -1,    59,
     560,   561,    -1,   123,    -1,    48,   454,    49,    -1,    48,
      49,    -1,    48,   454,    49,    -1,   568,   563,    -1,    -1,
      23,    -1,    -1,   150,   565,    -1,   567,   566,    -1,    63,
      40,    41,    -1,    -1,    11,    -1,    34,    -1,    23,    -1,
     568,    -1,   172,    40,    41,    -1,   569,    -1,   652,    -1,
     656,    -1,   636,    -1,   571,    -1,   579,    -1,   575,    -1,
     581,    -1,   577,    -1,   574,    -1,   573,    -1,   572,    -1,
     570,    -1,    58,    40,    41,    -1,    57,    40,    41,    -1,
      57,    40,   579,    41,    -1,    57,    40,   581,    41,    -1,
      62,    40,    41,    -1,    56,    40,    41,    -1,    59,    40,
      41,    -1,    59,    40,   635,    41,    -1,    59,    40,   124,
      41,    -1,    55,    40,    41,    -1,    55,    40,   576,    41,
      -1,    55,    40,   576,    33,   585,    41,    -1,   583,    -1,
      11,    -1,    60,    40,   578,    41,    -1,   583,    -1,   189,
      40,    41,    -1,   189,    40,   580,    41,    -1,   189,    40,
     580,    33,   585,    41,    -1,   189,    40,   580,    33,   585,
      23,    41,    -1,   584,    -1,    11,    -1,    61,    40,   582,
      41,    -1,   584,    -1,   636,    -1,   636,    -1,   636,    -1,
     124,    -1,   590,   589,   588,    -1,    -1,   194,   488,    -1,
      -1,   589,   601,    -1,   590,   239,   591,    -1,   591,    -1,
     591,   240,   592,    -1,   592,    -1,   592,    82,   132,   593,
      -1,   593,    -1,   241,   594,    -1,   594,    -1,   595,    -1,
     595,   604,    -1,   596,   599,    -1,    40,   587,    41,    -1,
     597,    -1,   522,   598,    -1,    48,   454,    49,   598,    -1,
     501,    48,    49,    -1,   501,    48,   587,    49,    -1,    -1,
     206,    -1,   206,    96,    -1,   207,    -1,   207,   211,    -1,
     208,    -1,    -1,   197,   600,   198,    -1,   209,   489,    -1,
     118,   142,   489,    -1,   118,   100,   489,    -1,   210,   489,
     159,   489,    -1,   119,    -1,   195,   489,   602,    -1,   196,
     600,   602,    -1,   199,   603,    -1,   200,   603,    -1,   113,
      98,    -1,   113,    99,    -1,    94,    95,    -1,   211,    -1,
     212,    -1,   213,    -1,   214,    -1,   215,    -1,    83,   605,
      -1,   604,    83,   605,    -1,   617,    -1,   618,    -1,   609,
      -1,   608,    -1,   606,    -1,   607,    -1,   612,    -1,   619,
      -1,   149,    86,    -1,   149,    85,    -1,   201,    -1,   202,
      -1,    87,    86,    -1,    87,    85,    -1,    90,    -1,    84,
      90,    -1,    91,   611,    -1,    91,   181,    -1,    91,    40,
     611,   610,    41,    -1,    91,    40,   181,   610,    41,    -1,
      84,    91,    -1,    -1,   610,    33,   611,    -1,   113,   586,
      -1,   113,   586,   203,   634,    -1,   113,   586,   600,   204,
      -1,   113,   586,   203,   634,   600,   204,    -1,    92,   211,
     614,   613,    -1,    84,    92,   211,    -1,    92,   211,   181,
     613,    -1,    -1,   613,   616,    -1,   113,   586,    -1,    40,
     615,    41,    -1,   634,    -1,   615,    33,   634,    -1,   162,
     614,    -1,   164,   614,    -1,   205,   634,    -1,    93,    -1,
      84,    93,    -1,   183,   657,   124,    -1,    89,    95,   491,
      -1,   178,   222,    68,    -1,   178,   222,    67,    -1,   178,
     222,   101,    -1,   623,   455,   150,   218,   228,   455,    -1,
     623,   455,   150,   226,   228,   455,    -1,   623,   455,   228,
     455,    -1,   623,   455,   221,   455,    -1,   623,   455,   220,
     455,    -1,   219,    58,    -1,   219,   224,    -1,   625,   455,
      -1,   227,    58,    -1,   227,   224,    -1,   216,   103,   157,
      58,   455,   223,   455,    -1,   216,    58,   455,   223,   455,
      -1,   225,    58,   455,   150,   455,    -1,   102,   629,   217,
     455,   130,   455,    -1,   629,    33,   630,    -1,   630,    -1,
       9,   525,    10,   455,    -1,    52,    -1,    53,    -1,    54,
      -1,   124,    -1,   657,    -1,   657,    -1,   178,   232,   234,
     657,   452,    -1,   178,   232,   234,   657,   639,   638,   452,
      -1,   178,   232,   234,   657,   640,   233,   394,   452,    -1,
     178,   232,   234,   657,   640,   233,   394,   639,   638,   452,
      -1,   178,   232,   640,   233,   394,   452,    -1,   178,   232,
     640,   233,   394,   639,   638,   452,    -1,    -1,   150,   565,
      -1,    40,    41,    -1,    40,   450,    41,    -1,    -1,   238,
     641,    -1,   642,    -1,   641,    33,   642,    -1,   121,    -1,
     312,    -1,   313,    -1,   235,   232,   657,    -1,   235,   232,
     657,   223,    40,   646,    41,    -1,   236,   237,   455,    -1,
     236,   237,   455,   223,    40,   646,    41,    -1,   236,   237,
     455,   238,   645,    -1,   236,   237,   455,   238,   645,   223,
      40,   646,    41,    -1,   657,    -1,   312,    -1,   314,    -1,
     647,    -1,   646,    33,   647,    -1,     9,   525,   564,    10,
     455,    -1,   649,    -1,   650,    -1,   658,    51,    52,    -1,
     191,   448,   564,   452,    -1,   520,    40,    41,    -1,   520,
      40,   531,    41,    -1,   653,    -1,   654,    -1,   191,    40,
      11,    41,    -1,   191,    40,    41,   150,   565,    -1,   191,
      40,   655,    41,   150,   565,    -1,   565,    -1,   655,    33,
     565,    -1,    40,   567,    41,    -1,   658,    -1,    55,    -1,
      56,    -1,    57,    -1,   189,    -1,   172,    -1,   151,    -1,
      58,    -1,    59,    -1,    60,    -1,    61,    -1,    62,    -1,
     147,    -1,    63,    -1,   191,    -1,   121,    -1,    64,    -1,
      65,    -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,
      70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,
      75,    -1,    76,    -1,    77,    -1,    78,    -1,    79,    -1,
      80,    -1,    81,    -1,    82,    -1,    85,    -1,    86,    -1,
      87,    -1,    88,    -1,    90,    -1,    91,    -1,    92,    -1,
      93,    -1,    94,    -1,    95,    -1,    96,    -1,    97,    -1,
      98,    -1,    99,    -1,   100,    -1,   101,    -1,   102,    -1,
     103,    -1,   107,    -1,   108,    -1,   109,    -1,   110,    -1,
     111,    -1,   112,    -1,   113,    -1,   125,    -1,   130,    -1,
     131,    -1,   132,    -1,   133,    -1,   134,    -1,   135,    -1,
     136,    -1,   137,    -1,   138,    -1,   139,    -1,   140,    -1,
     141,    -1,   142,    -1,   143,    -1,   144,    -1,   145,    -1,
     146,    -1,   148,    -1,   150,    -1,   152,    -1,   153,    -1,
     154,    -1,   155,    -1,   156,    -1,   157,    -1,   158,    -1,
     159,    -1,   160,    -1,   161,    -1,   162,    -1,   163,    -1,
     164,    -1,   165,    -1,   166,    -1,   167,    -1,   168,    -1,
     169,    -1,   170,    -1,   171,    -1,   173,    -1,   174,    -1,
     175,    -1,   176,    -1,   177,    -1,   178,    -1,   179,    -1,
     180,    -1,   181,    -1,   182,    -1,   183,    -1,   185,    -1,
     186,    -1,   187,    -1,   190,    -1,   192,    -1,    83,    -1,
      84,    -1,   193,    -1,   194,    -1,   195,    -1,   196,    -1,
     197,    -1,   198,    -1,   199,    -1,   200,    -1,   201,    -1,
     202,    -1,   203,    -1,   204,    -1,   205,    -1,   206,    -1,
     207,    -1,   208,    -1,   209,    -1,   210,    -1,   211,    -1,
     212,    -1,   213,    -1,   214,    -1,   215,    -1,   216,    -1,
     217,    -1,   218,    -1,   219,    -1,   220,    -1,   221,    -1,
     222,    -1,   223,    -1,   224,    -1,   225,    -1,   226,    -1,
     227,    -1,   228,    -1,   229,    -1,   119,    -1,   120,    -1,
     230,    -1,   231,    -1,   232,    -1,   233,    -1,   234,    -1,
     235,    -1,   236,    -1,   237,    -1,   238,    -1,   239,    -1,
     240,    -1,   241,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   747,   747,   749,   750,   751,   752,   754,   761,   791,
     794,   815,   817,   821,   828,   830,   831,   832,   833,   834,
     835,   839,   858,   862,   867,   874,   879,   884,   893,   896,
     902,   907,   914,   914,   914,   917,   930,   934,   941,   946,
     955,   958,   966,   993,   997,  1004,  1010,  1015,  1020,  1029,
    1053,  1057,  1064,  1069,  1074,  1079,  1090,  1108,  1112,  1119,
    1124,  1132,  1157,  1160,  1163,  1166,  1169,  1172,  1175,  1178,
    1181,  1184,  1187,  1190,  1193,  1196,  1199,  1202,  1205,  1208,
    1214,  1215,  1216,  1217,  1218,  1230,  1233,  1238,  1241,  1246,
    1251,  1259,  1267,  1278,  1289,  1292,  1299,  1309,  1312,  1317,
    1328,  1331,  1336,  1341,  1349,  1350,  1351,  1352,  1353,  1354,
    1355,  1356,  1357,  1358,  1359,  1360,  1361,  1362,  1363,  1364,
    1365,  1366,  1370,  1388,  1392,  1397,  1406,  1412,  1412,  1415,
    1435,  1439,  1444,  1452,  1457,  1461,  1469,  1472,  1480,  1493,
    1497,  1508,  1511,  1519,  1537,  1541,  1548,  1553,  1558,  1566,
    1572,  1580,  1588,  1595,  1609,  1613,  1627,  1636,  1644,  1647,
    1654,  1689,  1693,  1698,  1704,  1714,  1717,  1725,  1728,  1735,
    1753,  1757,  1764,  1769,  1777,  1795,  1799,  1807,  1829,  1833,
    1840,  1848,  1857,  1865,  1902,  1906,  1913,  1920,  1929,  1938,
    1965,  1969,  1976,  1988,  2014,  2018,  2025,  2035,  2047,  2051,
    2056,  2065,  2078,  2082,  2087,  2096,  2110,  2114,  2127,  2132,
    2144,  2148,  2156,  2169,  2177,  2190,  2197,  2211,  2211,  2214,
    2214,  2236,  2240,  2244,  2262,  2280,  2290,  2304,  2312,  2318,
    2324,  2330,  2342,  2345,  2359,  2360,  2361,  2362,  2366,  2369,
    2373,  2375,  2379,  2383,  2387,  2391,  2395,  2401,  2407,  2421,
    2422,  2423,  2424,  2425,  2426,  2427,  2433,  2437,  2441,  2445,
    2451,  2451,  2458,  2459,  2460,  2461,  2465,  2468,  2472,  2474,
    2478,  2482,  2486,  2490,  2494,  2500,  2506,  2510,  2521,  2522,
    2523,  2524,  2528,  2531,  2535,  2537,  2541,  2545,  2549,  2553,
    2557,  2563,  2569,  2580,  2581,  2582,  2583,  2588,  2593,  2615,
    2618,  2622,  2634,  2636,  2640,  2644,  2648,  2652,  2656,  2662,
    2668,  2672,  2686,  2687,  2688,  2689,  2690,  2691,  2692,  2693,
    2697,  2697,  2700,  2704,  2712,  2717,  2726,  2731,  2740,  2800,
    2808,  2813,  2822,  2827,  2836,  2846,  2850,  2858,  2862,  2870,
    2886,  2895,  2907,  2916,  2919,  2924,  2933,  2937,  2945,  2955,
    2967,  2974,  2978,  2986,  2991,  3001,  3005,  3009,  3013,  3020,
    3024,  3031,  3034,  3042,  3047,  3057,  3065,  3073,  3086,  3101,
    3108,  3109,  3110,  3111,  3112,  3113,  3114,  3115,  3116,  3117,
    3118,  3119,  3124,  3168,  3169,  3182,  3189,  3189,  3192,  3192,
    3197,  3204,  3208,  3212,  3224,  3227,  3238,  3241,  3251,  3258,
    3262,  3266,  3270,  3283,  3291,  3296,  3304,  3308,  3314,  3321,
    3336,  3353,  3356,  3360,  3368,  3376,  3380,  3389,  3397,  3408,
    3412,  3416,  3427,  3434,  3439,  3447,  3451,  3459,  3463,  3471,
    3479,  3488,  3493,  3502,  3512,  3516,  3520,  3520,  3524,  3528,
    3532,  3536,  3540,  3544,  3548,  3552,  3556,  3560,  3564,  3568,
    3572,  3577,  3581,  3585,  3590,  3594,  3599,  3603,  3607,  3612,
    3616,  3620,  3624,  3628,  3633,  3637,  3641,  3646,  3650,  3654,
    3659,  3663,  3668,  3673,  3678,  3682,  3687,  3691,  3696,  3702,
    3708,  3713,  3714,  3715,  3723,  3727,  3731,  3739,  3746,  3755,
    3755,  3759,  3779,  3780,  3788,  3789,  3795,  3816,  3820,  3834,
    3840,  3853,  3857,  3857,  3861,  3862,  3871,  3872,  3878,  3879,
    3888,  3900,  3911,  3915,  3919,  3923,  3927,  3931,  3935,  3939,
    3947,  3955,  3972,  3980,  3989,  3993,  3997,  4001,  4005,  4013,
    4025,  4030,  4035,  4042,  4047,  4054,  4061,  4073,  4074,  4078,
    4084,  4085,  4086,  4087,  4088,  4089,  4090,  4091,  4092,  4096,
    4096,  4099,  4099,  4099,  4103,  4110,  4114,  4118,  4126,  4134,
    4144,  4154,  4158,  4165,  4170,  4180,  4181,  4190,  4194,  4203,
    4203,  4203,  4207,  4213,  4222,  4222,  4227,  4230,  4239,  4250,
    4250,  4255,  4259,  4266,  4270,  4281,  4284,  4289,  4300,  4303,
    4307,  4321,  4324,  4329,  4340,  4343,  4347,  4365,  4368,  4373,
    4378,  4385,  4398,  4412,  4415,  4420,  4439,  4440,  4453,  4454,
    4455,  4456,  4457,  4458,  4463,  4471,  4479,  4483,  4491,  4495,
    4504,  4511,  4515,  4523,  4531,  4539,  4546,  4556,  4563,  4567,
    4575,  4586,  4589,  4598,  4601,  4611,  4618,  4628,  4629,  4631,
    4633,  4639,  4643,  4647,  4648,  4649,  4653,  4665,  4666,  4667,
    4668,  4669,  4670,  4671,  4672,  4673,  4678,  4686,  4690,  4695,
    4704,  4712,  4720,  4724,  4728,  4736,  4740,  4744,  4752,  4753,
    4761,  4769,  4774,  4778,  4782,  4786,  4795,  4796,  4804,  4811,
    4814,  4817,  4820,  4824,  4836,  4852,  4854,  4861,  4864,  4873,
    4885,  4890,  4902,  4907,  4911,  4916,  4921,  4926,  4927,  4936,
    4941,  4945,  4951,  4955,  4963,  4968,  4978,  4981,  4985,  4989,
    4993,  4997,  5005,  5007,  5018,  5024,  5030,  5036,  5051,  5055,
    5059,  5063,  5067,  5071,  5075,  5079,  5087,  5091,  5095,  5103,
    5107,  5115,  5116,  5128,  5129,  5130,  5131,  5132,  5133,  5134,
    5135,  5143,  5147,  5151,  5155,  5164,  5168,  5176,  5180,  5190,
    5194,  5198,  5202,  5206,  5214,  5216,  5223,  5227,  5231,  5235,
    5245,  5249,  5253,  5261,  5263,  5271,  5275,  5282,  5286,  5294,
    5298,  5306,  5314,  5318,  5326,  5333,  5341,  5346,  5351,  5363,
    5367,  5371,  5375,  5379,  5385,  5385,  5390,  5396,  5396,  5401,
    5405,  5415,  5423,  5430,  5435,  5443,  5452,  5464,  5476,  5489,
    5500,  5509,  5521,  5525,  5529,  5534,  5539,  5544,  5553,  5556,
    5564,  5568,  5576,  5580,  5588,  5593,  5602,  5606,  5610,  5618,
    5622,  5630,  5634,  5638,  5642,  5650,  5654,  5658,  5666,  5671,
    5681,  5694,  5694,  5698,  5706,  5716,  5721,  5729,  5729,  5733,
    5741,  5745,  5752,  5757,  5766,  5775,  5775,  5775,  5775,  5775,
    5775,  5775,  5775,  5776,  5776,  5776,  5776,  5776,  5776,  5777,
    5781,  5781,  5781,  5781,  5781,  5781,  5781,  5781,  5781,  5781,
    5782,  5782,  5782,  5782,  5782,  5782,  5782,  5783,  5783,  5783,
    5783,  5783,  5783,  5783,  5783,  5784,  5784,  5784,  5784,  5784,
    5784,  5784,  5784,  5784,  5784,  5784,  5785,  5785,  5785,  5785,
    5785,  5785,  5785,  5785,  5785,  5785,  5785,  5785,  5786,  5786,
    5786,  5786,  5786,  5786,  5786,  5786,  5786,  5786,  5787,  5787,
    5787,  5787,  5787,  5787,  5787,  5787,  5787,  5787,  5787,  5787,
    5788,  5788,  5788,  5788,  5788,  5788,  5788,  5788,  5788,  5788,
    5788,  5788,  5789,  5789,  5789,  5789,  5789,  5789,  5789,  5789,
    5789,  5790,  5790,  5790,  5790,  5790,  5790,  5790,  5790,  5791,
    5791,  5791,  5791,  5791,  5791,  5791,  5791,  5791,  5791,  5791,
    5792,  5792,  5792,  5792,  5792,  5792,  5792,  5792,  5792,  5793,
    5793,  5793,  5793,  5793,  5793,  5793,  5793,  5793,  5793,  5794,
    5794,  5794,  5794,  5794,  5794,  5794,  5794,  5794,  5794,  5794,
    5795,  5795,  5795,  5795,  5795,  5795,  5795,  5795,  5795,  5795,
    5795,  5796,  5796,  5796
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
  "LibraryModule_XQ", "Prolog_XQ", "Setter_XQ", "FunctionDecl_XQ",
  "FunctionKeyword", "Module_XQF", "MainModule_XQF", "LibraryModule_XQF",
  "Prolog_XQF", "Module_XQU", "MainModule_XQU", "LibraryModule_XQU",
  "Prolog_XQU", "Module", "VersionDecl", "MainModule", "LibraryModule",
  "ModuleDecl", "Prolog", "Setter", "Import", "Separator", "NamespaceDecl",
  "BoundarySpaceDecl", "DefaultNamespaceDecl", "OptionDecl",
  "FTOptionDecl", "OrderingModeDecl", "EmptyOrderDecl",
  "CopyNamespacesDecl", "PreserveMode", "InheritMode",
  "DefaultCollationDecl", "BaseURIDecl", "SchemaImport",
  "ResourceLocations", "SchemaPrefix", "ModuleImport", "VarDecl",
  "VarDeclValue", "ConstructionDecl", "FunctionDecl", "FunctionParamList",
  "FunctionDeclUpdating", "ParamList", "Param", "EnclosedExpr",
  "QueryBody", "Expr", "ExprSingle", "FLWORExpr", "FLWORTuples",
  "InitialClause", "IntermediateClause", "ForClause", "ForBindingList",
  "ForBinding", "PositionalVar", "FTScoreVar", "LetClause",
  "LetBindingList", "LetBinding", "WhereClause", "OrderByClause",
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
     565,   566,   567,   568,   569,   570,   571,   572
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   318,   319,   319,   319,   319,   319,   319,   320,   321,
     321,   322,   322,   322,   323,   323,   323,   323,   323,   323,
     323,   324,   325,   325,   325,   325,   325,   325,   326,   326,
     326,   326,   327,   327,   327,   328,   329,   329,   329,   329,
     330,   330,   331,   332,   332,   332,   332,   332,   332,   333,
     334,   334,   334,   334,   334,   334,   335,   336,   336,   336,
     336,   337,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     339,   339,   339,   339,   339,   340,   340,   341,   342,   342,
     342,   342,   342,   343,   344,   344,   344,   345,   345,   345,
     346,   346,   346,   346,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   348,   349,   349,   349,   350,   351,   351,   352,
     353,   353,   353,   354,   354,   354,   355,   355,   356,   357,
     357,   358,   358,   359,   360,   360,   360,   360,   360,   361,
     362,   363,   364,   365,   366,   366,   367,   368,   369,   369,
     370,   371,   371,   371,   371,   372,   372,   373,   373,   374,
     375,   375,   375,   375,   376,   377,   377,   378,   379,   379,
     379,   380,   381,   382,   383,   383,   383,   383,   383,   384,
     385,   385,   385,   386,   387,   387,   387,   388,   389,   389,
     389,   390,   391,   391,   391,   392,   393,   393,   394,   394,
     395,   395,   395,   396,   396,   397,   397,   398,   398,   399,
     399,   400,   400,   400,   400,   400,   400,   401,   402,   402,
     402,   402,   403,   403,   404,   404,   404,   404,   405,   406,
     407,   407,   407,   407,   407,   407,   407,   407,   407,   408,
     408,   408,   408,   408,   408,   408,   409,   409,   409,   409,
     410,   410,   411,   411,   411,   411,   412,   413,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   415,   415,
     415,   415,   416,   417,   418,   418,   418,   418,   418,   418,
     418,   418,   418,   419,   419,   419,   419,   420,   420,   421,
     422,   423,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   425,   425,   425,   425,   425,   425,   425,   425,
     426,   426,   427,   428,   429,   429,   430,   430,   431,   432,
     433,   433,   434,   434,   435,   436,   436,   437,   437,   438,
     439,   440,   440,   441,   441,   441,   442,   442,   443,   443,
     444,   445,   445,   446,   446,   447,   447,   447,   447,   448,
     448,   449,   449,   450,   450,   451,   452,   453,   454,   454,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   456,   457,   457,   457,   458,   458,   459,   459,
     460,   461,   461,   462,   463,   463,   464,   464,   465,   466,
     466,   467,   467,   468,   469,   469,   470,   470,   471,   471,
     472,   473,   473,   473,   474,   474,   474,   475,   475,   476,
     476,   477,   478,   479,   479,   480,   480,   481,   481,   482,
     483,   483,   484,   484,   485,   485,   486,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   487,   487,   487,   488,   488,   489,   489,   489,   490,
     490,   490,   490,   490,   491,   491,   491,   492,   492,   492,
     493,   493,   494,   494,   495,   495,   496,   496,   497,   497,
     497,   498,   498,   498,   499,   499,   499,   500,   500,   501,
     501,   502,   503,   503,   504,   504,   504,   504,   505,   506,
     506,   506,   507,   507,   508,   508,   509,   509,   510,   510,
     511,   511,   512,   512,   512,   512,   512,   512,   512,   512,
     513,   513,   514,   514,   515,   515,   515,   515,   515,   516,
     517,   517,   518,   518,   519,   519,   519,   520,   520,   520,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   522,
     522,   523,   523,   523,   524,   525,   526,   526,   527,   528,
     529,   530,   530,   531,   531,   532,   532,   533,   533,   534,
     534,   534,   535,   535,   536,   536,   537,   537,   537,   538,
     538,   539,   539,   540,   540,   541,   541,   541,   542,   542,
     542,   543,   543,   543,   544,   544,   544,   545,   545,   545,
     545,   545,   546,   547,   547,   548,   549,   549,   550,   550,
     550,   550,   550,   550,   551,   552,   553,   553,   554,   554,
     555,   556,   556,   557,   558,   559,   560,   560,   561,   561,
     562,   563,   563,   564,   564,   565,   565,   566,   566,   566,
     566,   567,   567,   567,   567,   567,   568,   569,   569,   569,
     569,   569,   569,   569,   569,   569,   570,   571,   571,   571,
     572,   573,   574,   574,   574,   575,   575,   575,   576,   576,
     577,   578,   579,   579,   579,   579,   580,   580,   581,   582,
     583,   584,   585,   586,   587,   588,   588,   589,   589,   590,
     590,   591,   591,   592,   592,   593,   593,   594,   594,   595,
     595,   595,   596,   596,   597,   597,   598,   598,   598,   598,
     598,   598,   599,   599,   600,   600,   600,   600,   601,   601,
     601,   601,   601,   601,   601,   601,   602,   602,   602,   603,
     603,   604,   604,   605,   605,   605,   605,   605,   605,   605,
     605,   606,   606,   606,   606,   607,   607,   608,   608,   609,
     609,   609,   609,   609,   610,   610,   611,   611,   611,   611,
     612,   612,   612,   613,   613,   614,   614,   615,   615,   616,
     616,   617,   618,   618,   619,   620,   621,   621,   621,   622,
     622,   622,   622,   622,   623,   623,   624,   625,   625,   626,
     626,   627,   628,   629,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   637,   637,   637,   637,   637,   638,   638,
     639,   639,   640,   640,   641,   641,   642,   642,   642,   643,
     643,   644,   644,   644,   644,   645,   645,   645,   646,   646,
     647,   648,   648,   649,   650,   651,   651,   652,   652,   653,
     654,   654,   655,   655,   656,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658
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
       1,     1,     1,     1,     1,     1,     5,     7,     5,     7,
       1,     1,     2,     2,     1,     1,     2,     2,     0,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     1,     2,     2,     0,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     1,     1,     4,     6,     2,
       2,     6,     0,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     3,     3,     5,     5,     4,     3,
       3,     3,     5,     5,     5,     1,     1,     1,     1,     4,
       3,     5,     4,     0,     2,     3,     3,     3,     7,     4,
       6,     2,     1,     3,     3,     6,     8,     6,     8,     2,
       3,     0,     1,     3,     1,     3,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     2,     1,     1,     1,     1,
       2,     3,     1,     7,     0,     3,     0,     3,     2,     3,
       1,     5,     5,     2,     3,     4,     3,     1,     3,     5,
       1,     0,     1,     1,     0,     2,     2,     4,     4,     3,
       1,     5,     6,     2,     1,     5,     3,     4,     7,     8,
       3,     1,     3,     1,     3,     3,     0,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     4,     5,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       4,     1,     4,     1,     4,     1,     4,     1,     2,     2,
       1,     1,     1,     1,     4,     5,     5,     3,     4,     1,
       2,     4,     1,     2,     1,     2,     2,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     4,     1,     4,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     1,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     2,     1,     4,
       4,     3,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     5,    10,     1,     1,     0,     7,     7,     0,
       1,     3,     3,     3,     3,     0,     2,     2,     0,     2,
       2,     0,     2,     2,     0,     2,     2,     0,     2,     2,
       2,     2,     3,     0,     1,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     4,     3,     1,     3,     2,     3,
       3,     1,     3,     4,     4,     3,     1,     3,     2,     3,
       2,     0,     1,     0,     2,     2,     3,     0,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     4,     4,
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
       5,     1,     1,     3,     4,     3,     4,     1,     1,     4,
       5,     6,     1,     3,     3,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   240,   268,   284,   302,     0,     0,     0,   534,
       0,     0,     0,   603,     0,   579,     0,     0,   498,   558,
     529,     0,   796,   797,   798,   846,   847,   848,   852,   853,
     854,   855,   856,   858,   861,   862,   863,   864,   865,   866,
     867,   868,   869,   870,   871,   872,   873,   874,   875,   876,
     877,   878,   879,   961,   962,   880,   881,   882,   883,   884,
     885,   886,   887,   888,   889,   890,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,   904,
    1000,  1001,   860,   799,   905,   535,   536,   906,   907,   908,
     909,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     919,   920,   921,   922,   857,   923,   924,   851,   925,   926,
     927,   928,   929,   930,   931,   932,   933,   934,   935,   936,
     937,   938,   939,   940,   941,   942,   943,   944,   850,   945,
     946,   947,   948,   949,   950,   951,   952,   953,   954,   955,
     956,   957,   958,   849,   959,   859,   960,   963,   964,   965,
     966,   967,   968,   969,   970,   971,   972,   973,   974,   975,
     976,   977,   978,   979,   980,   981,   982,   983,   984,   985,
     986,   987,   988,   989,   990,   991,   992,   993,   994,   995,
     996,   997,   998,   999,  1002,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,     2,   367,   369,   370,
       0,   383,   386,   387,   371,   372,   373,   379,   431,   433,
     450,   453,   455,   458,   463,   466,   469,   471,   473,   475,
     477,   480,   481,   483,     0,   489,   482,   494,   497,   501,
     502,   504,   505,   506,     0,   511,   508,     0,   523,   521,
     531,   533,   503,   537,   540,   549,   541,   542,   543,   546,
     547,   544,   545,   567,   569,   570,   571,   568,   608,   609,
     610,   611,   612,   613,   530,   655,   647,   654,   653,   652,
     649,   651,   648,   650,   374,     0,   375,     0,   377,   376,
     378,   551,   552,   553,   550,   532,   380,   381,   548,   831,
     832,   539,   801,   845,     0,     0,     3,   236,   237,     0,
     240,   240,     4,   264,   265,     0,   268,   268,     5,   280,
     281,     0,   284,   284,     6,   302,   295,   296,   302,     0,
      11,    94,     7,     8,    10,     1,   846,   847,   848,   852,
     853,   854,   855,   856,   867,   868,   869,   870,   871,   872,
     873,   874,   875,   876,   877,   878,   896,  1000,  1001,   907,
     909,   920,   921,   857,   851,   938,   944,   849,   859,   986,
     989,   995,   997,  1007,  1008,   554,   555,   845,   846,   847,
     853,   856,   849,   520,   574,   575,   576,     0,   604,     0,
     496,   580,     0,   479,   478,   557,     0,   514,     0,     0,
     621,     0,     0,     0,     0,     0,     0,     0,   626,     0,
       0,     0,     0,     0,   512,   513,   515,   516,   517,   518,
     524,   525,   526,   527,   528,     0,     0,     0,   794,     0,
       0,     0,   390,   392,     0,     0,   398,   400,     0,     0,
     420,     0,     0,     0,     0,     0,     0,   519,     0,     0,
     616,     0,     0,   633,     0,     0,   784,   785,     0,   787,
     788,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     388,   385,   389,   384,     0,     0,     0,     0,     0,     0,
       0,     0,   436,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   490,   495,
       0,     0,     0,     0,   510,   522,     0,     0,     0,   786,
       0,     0,     0,     0,   950,   957,     0,     0,     0,     0,
     249,     0,     0,   253,   254,   255,   250,   251,   320,   321,
       0,   252,   238,     0,   234,   235,   239,   950,     0,     0,
       0,     0,     0,     0,     0,     0,   266,     0,   262,   263,
     267,   950,     0,     0,     0,   312,     0,     0,   316,   317,
     319,   313,   314,     0,   315,     0,   282,   318,     0,   278,
     279,   283,   293,   294,   300,   950,     0,     0,     0,     0,
       0,     0,     0,     0,   299,     0,    14,   100,   579,     0,
     606,   605,   602,     0,   556,   669,   665,     0,   668,   680,
       0,     0,   620,   661,     0,   657,     0,     0,     0,     0,
     656,   662,     0,     0,   800,     0,     0,   625,     0,   671,
       0,   679,   681,   660,     0,     0,     0,     0,     0,     0,
       0,   633,     0,   633,     0,     0,   633,     0,     0,     0,
       0,     0,     0,     0,     0,   677,   672,     0,   676,     0,
     615,     0,   359,     0,   364,     0,     0,     0,     0,     0,
     819,   821,   368,   382,   403,     0,     0,   430,   432,   435,
     438,   439,   440,   448,   449,     0,   434,   441,   442,   443,
     444,   445,   446,   447,     0,   456,   457,   454,   459,   461,
     460,   462,   464,   465,   467,   468,     0,     0,     0,     0,
     487,     0,   500,   499,     0,     0,     0,   566,   835,   565,
       0,   564,     0,     0,     0,     0,   561,     0,   833,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     260,   261,   812,     0,     0,     0,   322,   241,   246,   242,
     243,   244,   248,   245,   247,     0,     0,     0,   269,   274,
     270,   271,   272,   276,   277,   273,   275,     0,     0,   362,
       0,   285,   286,   287,   288,   292,   289,   290,   291,   361,
     361,   303,   304,   305,   306,   310,   311,   307,   308,   309,
      12,    13,     0,    96,    97,     0,   580,     0,   607,     0,
     492,   491,     0,   666,   622,   618,     0,   624,   658,   659,
     664,   663,   627,   628,     0,   670,   678,   623,   614,     0,
     793,     0,   559,   560,   394,   391,     0,     0,   399,     0,
     419,   417,   418,     0,     0,   484,     0,     0,     0,   673,
     617,   633,     0,   360,     0,   858,   850,   859,   634,   637,
     641,   643,   646,   644,   837,   838,   645,     0,   834,     0,
       0,     0,     0,     0,     0,   410,   404,   407,   411,     0,
     437,     0,     0,     0,     0,   706,   451,   687,   690,   692,
     694,   696,   697,   712,   701,   470,   472,   474,   631,   476,
     488,   507,   509,   538,     0,   836,     0,     0,   783,   782,
     781,   562,     0,   297,     0,   324,   325,   683,   340,     0,
       0,   353,   354,   330,   331,     0,     0,     0,     0,   335,
     336,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,     0,   343,     0,   329,   777,   776,   778,     0,     9,
      22,    50,    36,    57,    62,    88,    15,    40,    16,    40,
      17,   100,    18,   100,    19,     0,    20,     0,    95,    93,
     123,     0,   130,   139,     0,     0,     0,   170,   175,   178,
     182,   184,   190,   194,   161,   198,   202,   206,   127,   128,
     102,   103,   104,   100,   105,   101,   106,   136,   107,   141,
     108,     0,   110,   100,   109,   118,   165,   111,   100,   112,
     100,   113,   100,   114,   100,   115,   100,   116,   100,   117,
     100,   119,     0,   120,   100,   121,   100,   579,   579,   597,
     572,   493,     0,   682,   619,   629,   795,     0,     0,   396,
       0,     0,     0,     0,     0,   424,     0,   485,   486,     0,
     365,   363,     0,     0,     0,     0,   638,   640,   639,   635,
       0,   790,     0,   791,     0,     0,   826,   827,   823,   825,
       0,   412,   413,   414,   405,     0,     0,   695,     0,   707,
     709,   711,   702,     0,   452,     0,   685,     0,     0,   698,
       0,   699,   632,   630,   563,     0,     0,     0,     0,   633,
       0,     0,   339,     0,     0,     0,   328,   812,   816,   817,
     818,   813,   814,     0,     0,     0,     0,   343,     0,   342,
       0,   349,     0,     0,   747,     0,     0,   772,     0,     0,
     743,   744,     0,   731,   737,   738,   736,   735,   739,   733,
     734,   740,     0,     0,    89,    90,    28,    24,     0,     0,
       0,   100,    37,    39,     0,   100,    51,    55,    54,     0,
       0,     0,    58,     0,     0,     0,    61,    79,    63,    67,
      68,    69,    73,    74,    76,    65,    70,    71,    72,    75,
      77,     0,     0,     0,    87,    99,    98,     0,     0,     0,
     158,   154,   100,     0,     0,    97,     0,     0,     0,     0,
     140,     0,   149,     0,   100,     0,    97,    97,   167,   171,
       0,     0,     0,     0,     0,    97,     0,     0,     0,    97,
       0,    97,    97,     0,    97,     0,     0,    97,    97,     0,
     197,   200,     0,   203,   204,     0,     0,     0,     0,     0,
       0,   667,   792,     0,     0,     0,   401,   402,   421,     0,
       0,     0,   422,   423,     0,     0,   674,   844,   636,   642,
       0,     0,   842,     0,   366,     0,     0,     0,   828,     0,
       0,   406,     0,   408,   700,   706,   704,     0,   708,   710,
       0,   689,     0,     0,   718,     0,     0,     0,     0,     0,
     684,   688,   691,     0,     0,     0,     0,     0,   779,   780,
     298,   301,     0,   323,   332,   333,   326,   327,   337,   338,
     334,     0,   802,   808,     0,     0,     0,   214,   213,   846,
     867,  1002,  1003,     0,   209,     0,   212,   210,   221,   232,
     228,     0,   258,   256,   346,   347,   341,   344,     0,     0,
     748,   753,     0,   773,   746,   745,     0,     0,   750,   749,
       0,   742,   741,     0,   771,   732,     0,    91,    92,    26,
      23,    27,    32,    33,    34,    25,    43,    41,   100,     0,
      38,     0,    53,    52,    49,    60,    59,    56,    83,    84,
      80,    81,    82,    64,    85,    66,    78,   126,   150,     0,
     100,   155,     0,     0,   152,   124,   125,   122,   133,   134,
     135,   132,   131,   129,   144,   137,   100,   138,   142,   151,
       0,   162,   163,   164,   100,     0,   173,   172,   100,   176,
     174,   179,   180,   177,   181,   185,   187,   188,   186,   183,
     191,   192,   189,   195,   196,   193,   199,   201,   207,   205,
     579,   579,     0,   601,   600,   599,   598,   395,     0,     0,
       0,     0,     0,     0,     0,   675,   839,     0,     0,     0,
     789,   633,     0,   820,   822,     0,   415,   416,     0,   703,
     705,   775,   725,   723,   724,   686,     0,     0,   729,   730,
     721,   722,   693,     0,     0,   714,     0,   713,     0,   352,
     350,   810,     0,     0,     0,     0,   815,   231,     0,     0,
       0,     0,     0,   806,   808,   222,     0,     0,     0,     0,
     227,     0,   345,   343,   761,   754,   754,   756,     0,     0,
     763,   763,   774,     0,   357,   355,    29,    30,    31,    44,
      48,    47,     0,     0,     0,    21,    35,    86,   157,     0,
     153,   156,   145,   148,     0,     0,     0,   166,     0,   160,
     169,     0,     0,   579,   397,   393,     0,   427,     0,   426,
     429,   840,   843,     0,     0,   829,     0,   409,   726,   727,
     728,   719,   720,   716,   715,     0,   351,   811,   809,   803,
       0,   230,   229,     0,   218,   217,     0,   208,     0,   224,
     223,   226,   225,     0,   259,   257,   348,     0,     0,     0,
       0,     0,   767,   765,   762,   760,     0,    46,    45,    42,
     159,   147,   146,   143,   168,   585,   591,   577,   588,   594,
     578,     0,     0,     0,   841,     0,   824,   717,   804,   808,
     215,     0,   807,     0,     0,   752,   751,   757,   758,     0,
     766,     0,     0,   764,   358,   356,     0,     0,     0,     0,
     573,     0,   425,   830,     0,     0,   219,   220,   233,   755,
       0,   768,   769,   770,   581,   587,   586,   582,   593,   592,
     583,   590,   589,   584,   596,   595,   428,   805,   216,   759
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,   322,   323,   586,   782,   936,   937,  1339,  1345,
     938,   939,  1131,  1347,  1348,   940,   941,   942,   943,   944,
     945,  1363,  1365,   946,   947,   970,   587,   948,   785,   971,
     972,   973,   974,   975,   976,   977,  1381,  1179,   978,   979,
    1181,  1385,  1386,   980,   981,   982,   983,   984,  1170,  1171,
    1172,  1372,   985,   986,  1188,  1395,   987,   988,   989,   990,
     991,   992,   993,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,  1003,  1004,  1005,  1006,  1303,  1304,  1305,  1306,
    1563,  1635,  1307,  1308,  1309,  1490,   296,   297,   298,   299,
     516,   517,   733,   302,   303,   304,   305,   308,   309,   310,
     311,   314,   300,   316,   317,   301,   319,   552,   518,   737,
     519,   520,   521,   522,   544,   523,   524,   525,   911,  1290,
     526,   527,   528,  1099,   919,   529,   530,  1470,   531,   565,
     443,   760,   653,   654,  1166,   196,   197,   198,   199,   200,
     201,   461,   202,   422,   423,  1019,  1225,   203,   426,   427,
     462,   463,   856,   857,   858,  1053,  1253,   204,   429,   430,
     205,  1024,  1232,  1025,   206,   207,   208,   209,   675,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   791,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   365,   247,   248,
     249,   250,   251,   710,   711,   252,   253,   254,   376,   588,
     382,  1597,  1600,  1626,  1628,  1627,  1629,  1220,   255,   379,
     256,   591,   257,   258,   259,   441,   602,   260,   391,   261,
     262,   263,   399,   617,   877,  1073,   656,   838,  1039,   839,
     840,   264,   265,   266,   267,   268,   269,   270,   597,   271,
     618,   272,   647,   273,   620,   598,   621,  1012,   898,   866,
    1270,  1066,   867,   868,   869,   870,   871,   872,   873,   874,
    1062,  1071,  1277,  1271,  1551,  1460,   924,  1113,  1114,  1115,
    1116,  1117,  1577,  1329,  1118,  1584,  1501,  1581,  1623,  1119,
    1120,  1121,  1064,   567,   274,   275,   276,   277,   278,   279,
     280,   417,   418,   281,   282,   283,   284,   613,   285,   533,
    1474,  1293,   915,  1091,  1092,   286,   287,  1048,  1247,  1248,
     288,   289,   290,   291,   843,   844,   845,  1243,   846,   292,
     293
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1405
static const yytype_int16 yypact[] =
{
     920,  3403,   490,   490,   490,   490,  -128,   293,  7212, -1405,
    5727,    97,   202,     7,  4801,   239,  3636,  3636, -1405, -1405,
   -1405,  2238, -1405, -1405, -1405,   449,   672,   349,   370,   344,
     387,   411,   712, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
     361,   479,   504,   611,   623,   630,   650,   703,   716,   723,
     728,   507, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405,   604, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
     553,   740, -1405, -1405, -1405, -1405, -1405, -1405,   754, -1405,
      66, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405,   791,   791, -1405,   787, -1405, -1405,   796, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405,   392, -1405, -1405, -1405, -1405, -1405,   783, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405,   417, -1405,   813, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
      81, -1405, -1405,     6, -1405, -1405, -1405, -1405, -1405,   814,
   -1405,    39, -1405, -1405, -1405, -1405, -1405, -1405, -1405,   572,
     642, -1405, -1405, -1405, -1405, -1405, -1405,   824, -1405, -1405,
     768, -1405, -1405, -1405, -1405, -1405, -1405,   727,   733, -1405,
    1032,   714,   118,   127,    70,   425, -1405,   739,   750,   778,
     789, -1405, -1405, -1405,   460, -1405, -1405,  4801,   653, -1405,
   -1405,   928,   942, -1405,  5727, -1405, -1405,  5727, -1405, -1405,
   -1405, -1405,   311, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405,  3403, -1405,  3403, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405,   510,   804,   826, -1405, -1405, -1405,  3869,
     807, -1405, -1405, -1405, -1405,  4102,   807, -1405, -1405, -1405,
   -1405,  4335,   807, -1405, -1405,   807, -1405, -1405, -1405,  4568,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,   952,   959,
     966,   968,   973, -1405, -1405, -1405, -1405,   669, -1405,   987,
     653, -1405,  7212, -1405, -1405, -1405,   715, -1405,  6189,  3403,
   -1405,   954,   985,  3403,    82,  1001,  7025,  3403, -1405,   996,
    7212,  7212,  1013,  3403, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405,  3403,  7212,    25, -1405,  3403,
    3403,  7212,  1038, -1405,  7212,  1077,  1065, -1405,  7212,    54,
   -1405,   109,  3403,  3403,  3403,  1057,  1058, -1405,  6420,  3403,
   -1405,   954,   330,   957,  3403,   951, -1405, -1405,  3403, -1405,
   -1405,  7212,  3403,  3403,  3403,   754,    66,  3403,   974,   975,
   -1405, -1405, -1405, -1405,  3636,  3636,  3636,  3636,  3636,  3636,
    3636,  3636, -1405,  3636,  3636,  3636,  3636,  3636,  3636,  3636,
    3636,  1050,  3636,  3636,  3636,  3636,  3636,  3636,  3636,  3636,
    3636,  3636,  3636,   958,   964,   967,   971,  2471, -1405,   653,
    4801,  4801,  3403,  3403, -1405, -1405,  3403,  1772,   125, -1405,
    2005,  1064,   994,  7212,   771,   705,  1072,  1072,  1072,  1072,
   -1405,  1072,  1072, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
    1072, -1405, -1405,  1072, -1405, -1405,   576,   482,  1072,  1072,
    1072,  1072,  1072,  1072,  1072,  1072, -1405,  1072, -1405, -1405,
     590,   511,  1072,  1072,  1072, -1405,  1072,  1072, -1405, -1405,
   -1405, -1405, -1405,  1072, -1405,  1072, -1405, -1405,  1072, -1405,
   -1405,   594, -1405, -1405,   599,   477,  1072,  1072,  1072,  1072,
    1072,  1072,  1072,  1072, -1405,  1072,   221,   603,  1020,  1021,
   -1405, -1405, -1405,   305, -1405, -1405, -1405,   746, -1405, -1405,
     461,  2704, -1405, -1405,   530, -1405,   411,   973,  1084,  1087,
   -1405, -1405,  1091,  1092, -1405,   563,  2937, -1405,  1093, -1405,
    1095, -1405, -1405, -1405,   582,   617,  1127,   604,  3403,   637,
     646,   957,   754,   957,  7212,    66,   957,   791,  3403,  3403,
     756,   762,   647,  3403,  3403, -1405, -1405,   780, -1405,   654,
   -1405,  7212, -1405,   790, -1405,  6622,  1090,   922,  1088,  1000,
     932,   409, -1405, -1405, -1405,  3403,  1016,   733, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405,  3636, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405,   517,   127,   127,   886,    70,    70,
      70,    70,   425,   425, -1405, -1405,  6622,  6622,  7212,  7212,
   -1405,   674, -1405, -1405,   368,   531,   545, -1405, -1405, -1405,
     799, -1405,   620,  3403,  3403,  3403, -1405,   809, -1405,    49,
    1119,   818,  1034,  1151,  7212,   821,   859,   401,   592,  7212,
   -1405, -1405,   552,  7390,   204,   154, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405,   771,   705,  1079, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405,   482,   108, -1405,
     810, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,   785,
     764, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405,   494, -1405, -1405,   820,   883,   308, -1405,  1037,
   -1405, -1405,  7212, -1405, -1405, -1405,   675, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405,   678, -1405, -1405, -1405, -1405,  3403,
   -1405,  1031, -1405, -1405,  1054, -1405,  1158,  1159, -1405,  1039,
   -1405, -1405, -1405,  1025,  1024, -1405,   682,   688,  7212, -1405,
   -1405,   957,  1168, -1405,  6824,  1141,  1145,  1147, -1405,   427,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405,  3403, -1405,  3403,
    3403,  3403,  1148,  1150,  1509, -1405,  1156, -1405,   873,  3403,
   -1405,   517,  3403,   766,   702,   732,  1103,   960,   956,  1111,
   -1405, -1405,  1079,   997, -1405, -1405, -1405, -1405,  1174, -1405,
   -1405, -1405, -1405, -1405,  3170, -1405,   976,   978, -1405, -1405,
   -1405, -1405,  1083, -1405,  1034, -1405, -1405, -1405, -1405,  7212,
    1164, -1405, -1405, -1405, -1405,  1062,  1034,  1040,  1041, -1405,
   -1405,  1170,  1085,  7212,   -67,   981,   813,  7212,  1019,  1034,
    1100,  7212,  1100,   527,  1132, -1405, -1405, -1405,  7390, -1405,
   -1405, -1405, -1405, -1405, -1405,   738, -1405,   278, -1405,   159,
   -1405,   309, -1405,   307, -1405,  7890, -1405,   977,    53, -1405,
   -1405,   718, -1405, -1405,   919,   969,   921, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405,   340, -1405, -1405, -1405,    12, -1405,   944,
   -1405,   979, -1405, -1405, -1405, -1405,   209, -1405,   347, -1405,
     925, -1405,  -117, -1405, -1405, -1405,   285, -1405,   -60, -1405,
      95, -1405,   -98, -1405,   745, -1405,   929,   239,   239, -1405,
   -1405, -1405,  1184, -1405, -1405, -1405, -1405,  3403,  1218,  1036,
    3403,  3403,  3403,  5034,   -31, -1405,  3403, -1405, -1405,   350,
   -1405, -1405,  1188,  1190,  1191,  5958, -1405, -1405, -1405, -1405,
     706, -1405,  1010, -1405,  1225,  1225, -1405, -1405,  1012, -1405,
    3403, -1405, -1405,  1096,  1156,  1196,   708, -1405,   129,  1142,
    1028, -1405, -1405,  1146, -1405,   517,   665,   517,  1108,  1132,
      98, -1405, -1405, -1405, -1405,  3403,  3403,  1072,  1072,   957,
    1034,   893, -1405,  1034,  1034,   860, -1405,     9, -1405, -1405,
   -1405,  1209, -1405,  5265,    35,  1207,  1074,  1100,  1034,  1213,
    1211,  1213,   839,   953, -1405,    46,  1043, -1405,   955,  7212,
   -1405, -1405,  1126, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405,   527,   813,   972,   970, -1405, -1405,  5265,  6622,
     906,  1009, -1405, -1405,  6622,  1009, -1405, -1405, -1405,  6622,
    3403,  1082, -1405,  6622,  3403,  1114, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405,   -15,  1130,  1130, -1405, -1405, -1405,  1023,  3403,   982,
     798, -1405, -1405,  3403,  3403, -1405,  1149,   -47,  3403,    41,
   -1405,    47, -1405,  7391, -1405,  3403, -1405, -1405,  1017, -1405,
    6622,  3403,  7419,  3403,  7447, -1405,  3403,  7475,  7503, -1405,
    3403, -1405, -1405,  7531, -1405,  3403,  7559, -1405, -1405,  7587,
   -1405, -1405,  3403, -1405, -1405,  7615,  3403,  7643,  1220,  1233,
     508, -1405, -1405,  7212,  1268,  1154, -1405, -1405, -1405,  7212,
    1152,   113, -1405, -1405,  1134,  1248, -1405, -1405, -1405, -1405,
    1249,  1143, -1405,   825, -1405,  3403,  7212,   829, -1405,   830,
    1251, -1405,   916,  1153, -1405,   732, -1405,  1243, -1405, -1405,
    3636,   956,  1199,   962, -1405,  3636,  3636,    98,   849,   849,
   -1405, -1405,  1111,   517,    73,  3636,  3636,  1097, -1405, -1405,
   -1405, -1405,    68, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405,   345, -1405,  1155,  1066,   -67,  5727, -1405,  1011,   130,
    1279,  1260,  1261,   326, -1405,  5496,   867,   879, -1405, -1405,
   -1405,  6622, -1405, -1405, -1405, -1405,  1213, -1405,  1034,  1034,
   -1405, -1405,  1099, -1405, -1405, -1405,    58,  1034, -1405, -1405,
      85, -1405, -1405,  1178, -1405, -1405,    37, -1405, -1405,   -44,
    1291, -1405, -1405, -1405, -1405, -1405, -1405, -1405,   342,  7671,
   -1405,  7699, -1405,   824, -1405, -1405,   824, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405,  1183,  1183, -1405,   824,  3403,
   -1405, -1405,  1069,  7727,   824,   824,    53, -1405, -1405, -1405,
   -1405, -1405,   824, -1405, -1405, -1405,   313, -1405, -1405, -1405,
    7755,   824,    53,    53, -1405,  1070, -1405,   824, -1405,   824,
   -1405,    53,   824, -1405, -1405,    53,   824,    53,    53, -1405,
      53,   824, -1405,    53,    53, -1405,   824, -1405,   824, -1405,
     239,   239,    97, -1405, -1405, -1405, -1405, -1405,  7212,  3403,
    1163,  3403,  7212,  3403,  3403, -1405, -1405,  6622,  6622,  1165,
   -1405,   957,  1225, -1405, -1405,  1225, -1405, -1405,  1034, -1405,
   -1405,    70, -1405, -1405, -1405, -1405,   111,   758, -1405, -1405,
   -1405, -1405, -1405,  3636,  3636,   886,   120, -1405,  3403, -1405,
   -1405, -1405,   834,  6622,  1090,  5265, -1405, -1405,  5727,  5727,
      71,  1126,  5265, -1405,  1155, -1405,  5496,  5496,  5496,  5496,
    1287,    40, -1405,  1100, -1405, -1405, -1405,   146,  1126,  1034,
   -1405, -1405, -1405,  6622, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405,  6622,  3403,  7783, -1405, -1405, -1405,   824,  7811,
   -1405, -1405, -1405, -1405,  6622,  3403,  7839, -1405,  7867, -1405,
    1507,   119,   765,   239, -1405, -1405,  6622, -1405,  1187, -1405,
   -1405, -1405, -1405,  6622,  1304, -1405,   836, -1405, -1405, -1405,
   -1405, -1405, -1405,   886,   886,  3636, -1405, -1405, -1405, -1405,
     326, -1405, -1405,  1278, -1405, -1405,  1290, -1405,  1090, -1405,
   -1405, -1405, -1405,  3403, -1405, -1405,  1213,   843,   845,  1126,
    1116,   850, -1405, -1405,   536,   536,    76, -1405,   824, -1405,
   -1405, -1405,   824, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405,  1300,  1203,  3403, -1405,  3403, -1405,   886, -1405,  1155,
   -1405,   138, -1405,   655,  1221, -1405, -1405,    98, -1405,  1126,
   -1405,   191,   191, -1405, -1405, -1405,   228,   289,   281,   300,
   -1405,  3403, -1405, -1405,  1090,  1295, -1405, -1405, -1405, -1405,
    1133, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405,   408, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405,   190, -1405, -1405,  1349, -1405,  -177,  -832, -1405,
   -1405, -1405, -1405,   406, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405,   177, -1405, -1405, -1405, -1405, -1405, -1405, -1405,   193,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1112,  -116, -1405, -1405,
   -1405, -1405, -1405, -1168, -1405, -1405, -1405,  1068,  1086,  1089,
    -269,  -268,  -433, -1405,  1059,  1063,  1080, -1405,  1067,  1073,
    1071, -1405,   980,  1104,  1105,    29,  1109,  -302,  -276,  -449,
    -259,  -260,  -240,  -193,  -288,  -258,  -209,  -171, -1405, -1405,
    -125,   -99, -1405,  -909, -1405, -1405,   -94, -1405,   -83,  -277,
    -872, -1405,   107,   556,  -652,   196,   -21,  -251, -1405, -1405,
    1200, -1405, -1405, -1405,   769, -1405, -1405, -1405, -1405,   779,
   -1405, -1405,   544,   354, -1405, -1405, -1405, -1405,  1313,   786,
   -1405, -1405, -1405,   398, -1405, -1405,   983,   961, -1405,    51,
     163,  -483,   608,  -466,   585,   601, -1405, -1405, -1405,  1078,
   -1405, -1405, -1405,  -628,  -218, -1405, -1405, -1405,    34,   596,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,    -8,
   -1405, -1405, -1405, -1405,  -639, -1405, -1404,  -413, -1405, -1405,
   -1405, -1405, -1405,   924,   546, -1405,   211, -1405,    10, -1405,
    -576, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405,   995, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405,   736, -1405,  -626,  -656, -1405,   605,
     403,  -630, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405,  1044, -1405,  1046, -1405,  1042,   999,   613,  -614,  -806,
   -1405, -1405, -1405,   378,   377,   172,   583, -1405, -1405, -1405,
     194, -1405, -1253, -1405,    -7,   182,   581,   332, -1405, -1405,
   -1405, -1405,   -41, -1308, -1405,   -40,  -518, -1405, -1405, -1405,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,
   -1405, -1405,   835, -1405, -1405, -1405, -1074,  -474,  -338,   -71,
   -1349, -1276,   376, -1405,   169, -1405, -1405, -1405, -1022,    23,
   -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405, -1405,     1,
      20
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -362
static const yytype_int16 yytable[] =
{
     386,   687,   373,   626,   848,   814,   498,   816,   631,   366,
     819,   633,   787,  1101,  1457,   636,  1340,   576,  1496,   688,
     689,   690,   691,  1249,   508,   841,   509,  1484,   367,   540,
     367,   581,   307,   313,   318,   553,   538,   539,  1334,   720,
     875,   876,   583,   577,  1094,   865,   541,  1358,   380,  1291,
     599,   555,   554,   558,  1088,  1055,   864,   847,   627,   555,
     578,   558,   599,   622,   446,   542,   841,   841,   738,   739,
     740,   556,   741,   742,  1378,   424,  1564,  1506,  1468,   579,
       8,   743,   489,   847,   744,   847,  1326,   637,   847,   748,
     749,   750,   751,   752,   753,   754,   755,   449,   756,   736,
     622,   847,   559,   761,   762,   763,  1359,   764,   765,  1141,
     559,  1145,   543,   378,   766,   320,   767,  1023,   557,   768,
     920,   922,  1432,   605,   847,  1498,   580,   771,   772,   773,
     774,   775,   776,   777,   778,  1568,   779,  1485,   485,   444,
     560,  1176,   637,   606,  1210,   482,   483,     8,   560,  1478,
    1231,  1183,   482,   483,   482,   483,  1192,  1195,  1194,  1327,
    1197,    15,  1198,  1595,  1203,  1596,  1206,  1165,  1209,   861,
     388,  1327,  1215,  1463,  1217,   925,   926,   862,  1256,   321,
    1196,    22,    23,    24,   445,  1311,   561,  1503,  1316,  1211,
      22,    23,    24,   657,   561,    83,   486,   659,  1499,  1212,
     638,   661,   662,   663,   841,  1030,   664,  1637,  1312,   927,
    1504,   545,   562,  1574,  1204,  1464,  1274,   563,   374,   375,
     562,   817,   865,   892,   865,   582,   504,  1328,   564,   505,
     447,  1498,   490,   864,   547,   864,   564,  1205,   831,  1495,
     568,  1469,   628,  1433,  1580,  1089,  1090,   914,   585,  1624,
     900,  1336,  1257,    83,   367,   639,   709,   367,   425,   709,
    1634,   499,    83,   450,  1274,  1379,  1500,  1380,  1507,  1508,
     893,   607,   576,  1644,   540,   712,   847,   484,   897,  1555,
    1078,   538,   539,  1383,  1609,  1177,   581,   487,   488,  1387,
    1384,   541,  1082,   325,   908,   553,  1384,   583,   577,  1349,
    1360,  1361,  1362,  1351,  1499,  1097,  1639,  1275,  1276,  1178,
     542,   555,   554,   558,   555,   578,   558,   842,  1569,  1570,
    1571,  1572,  1548,  1549,  1550,   921,  1650,   928,   897,   847,
     377,   556,   506,  1009,   579,   307,  1647,   847,  1482,   651,
    1373,   313,  1645,   381,   318,   713,   714,  1653,   847,  1579,
    1010,   507,  1390,   715,   651,  1275,  1276,   543,   842,   842,
     842,   842,   559,  1560,  1640,   559,  1291,  1230,   600,  1207,
     863,   652,   604,  1235,   847,   917,   615,   811,   557,  1242,
     404,   580,   624,   593,   396,   918,  1471,   821,   822,   394,
     881,  1236,   397,   841,   625,  1651,  1208,   614,   629,   630,
     560,   453,   367,   560,  1648,   841,  1565,  1566,   367,   789,
     395,   640,   641,   642,   855,  1654,   367,   366,   649,   865,
     367,   367,   366,  1546,  1582,   366,   865,   400,   865,   366,
     864,  1218,  1219,  1132,   790,  1292,   367,   864,  1036,   864,
     434,   367,  1313,  1095,   367,  1133,   561,  1100,   367,   561,
    1037,   401,   660,  1282,  1013,  1134,   545,   438,   367,   435,
     436,  1038,   888,   889,   890,   439,  1283,   398,   387,  1286,
    1287,   367,   562,  1341,  1184,   562,   701,   563,  1350,   547,
     582,   704,   705,  1352,  1317,   706,  1079,  1355,   564,   388,
    1013,   564,    15,   780,   453,   532,   842,   389,   405,   841,
     568,   546,   781,   585,   841,  1617,  1185,   566,   497,   841,
     794,  1186,  1187,   841,   614,   584,  1514,   669,   670,   671,
     672,   673,   674,   406,   676,   677,   678,   679,   680,   681,
     682,   683,    11,   367,  1396,    12,    13,   905,  1519,  1422,
     440,   721,   747,   722,   906,  1641,   721,   747,   722,    15,
     510,  1126,  1127,   882,  1526,   415,   847,   861,  1016,  1199,
     841,   511,  1528,   453,   453,   862,  1530,   883,  1425,    22,
      23,    24,   390,  1128,  1129,   721,  1130,   722,   453,   797,
     796,  1142,  1200,  1136,  1576,  1201,  1202,  1522,   491,   492,
     907,   730,   731,  1137,  1138,   804,   453,  1523,  1041,  1042,
    1043,   419,   723,  1143,  1144,  1139,  1140,   723,   855,  1524,
    1525,  1102,   802,   416,  1103,   453,  1509,  1104,  1105,  1106,
    1107,  1189,   826,   827,  1423,  1424,  1510,  1511,  1280,  1281,
     407,   807,   853,   709,   865,   366,   723,  1174,  1512,  1513,
    1175,    83,   408,  1190,  1191,   864,   498,   854,   724,   409,
     453,  1483,   366,   724,   367,  1491,   725,   726,   727,   728,
     729,   725,   726,   727,   728,   729,   808,  -361,  -361,   410,
     453,   367,   730,   731,   294,   367,  1108,  1638,   295,   453,
     453,   841,   724,   500,  1505,   842,   812,   453,   453,   501,
     725,   726,   727,   728,   729,   813,   825,   842,  1621,   758,
    1622,  -361,  -361,   830,  1492,  1493,   759,   453,   453,   732,
    1109,   453,   392,  1497,   732,   453,   367,   367,   367,   367,
     393,   453,   411,   880,  1014,   614,   860,  1015,  1110,  1111,
     912,  1027,  1112,   758,    15,   412,   929,  1028,   930,   453,
     759,   453,   413,   732,   367,   931,   932,   414,   453,   367,
    1058,   933,   402,   916,   745,  1244,   594,  1255,   863,  1262,
     403,   909,   746,   421,   934,   935,  1222,   910,   757,  1226,
    1227,  1228,   769,   589,   590,  1234,   746,   770,  1263,   792,
     746,  1541,  1542,  1456,  1264,   746,   913,   793,   420,   453,
     914,   842,  1465,  1466,  1451,   453,   842,   823,    15,   855,
     428,   842,   437,   824,   451,   842,   861,   841,   841,  1598,
    1427,  1599,   367,   828,   862,  1544,  1430,  1558,    22,    23,
      24,   829,  1559,   832,  1278,  1279,  1040,   432,   721,   747,
     722,   833,   884,  1441,  1547,   721,   433,   722,   886,  1575,
     885,  1056,   884,   841,  1531,  1532,   887,  1586,   367,   721,
     891,   722,   842,   442,   367,  1049,  1587,   453,  1438,  1265,
    1266,  1267,  1442,  1442,  1268,  1269,  1439,   832,  1591,  1442,
    1443,  1444,   448,   841,   367,  1557,  1614,  1606,  1614,   452,
    1602,   464,   841,  1619,  1615,  1583,  1616,  1604,   465,   723,
      83,  1620,   734,   735,   841,   493,   723,  1486,   454,   455,
     366,   456,   457,  1487,   458,   459,   841,   481,  1608,  1488,
     723,   783,   784,   841,  1087,  1489,  1612,   494,   614,   367,
     482,   483,   614,     1,     2,     3,     4,     5,     6,  1320,
    1321,  1322,  1323,   367,  1625,   724,   495,   367,  1059,  1060,
    1061,   367,   724,   725,   726,   727,   728,   729,  1123,   502,
     725,   726,   727,   728,   729,   496,   724,  1601,  1342,  1343,
    1344,   730,   731,   503,   725,   726,   727,   728,   729,  1548,
    1549,  1550,  1636,   842,  1646,  1649,  1652,  1655,   903,   904,
    1553,  1554,  1657,   306,   312,   315,   758,   895,   896,   512,
     901,   902,   388,   759,  1440,   295,   732,   513,  1376,   392,
     730,   731,   601,   732,  1007,  1008,   396,   758,   402,  1392,
    1393,  1051,  1052,   438,   759,  1534,   592,   732,  1401,  1538,
    1124,  1125,  1405,  -211,  1407,  1408,   603,  1410,   968,   969,
    1413,  1414,  1213,  1214,  1284,  1285,  1288,  1289,  1324,  1325,
    1331,  1332,   610,   367,   616,   466,   467,   468,   469,   470,
     471,  -211,  1169,  1370,   623,   367,   472,  1446,  1447,  -211,
    1453,  1454,   949,  1458,  1459,   950,   951,   952,   953,   473,
     954,   632,  1607,   955,   692,   693,   956,   957,   958,   959,
     960,   961,   962,   963,   964,  1310,   634,   965,   966,   967,
     685,   686,   694,   695,   383,   384,   702,   703,   635,   842,
     842,   878,   878,  1642,  1643,   643,   644,   655,   658,   665,
    1333,   666,   684,   367,   697,   696,   718,   698,   719,  1353,
    1310,   699,   736,  1356,   786,   798,   788,   321,   799,   367,
     968,   969,   800,   801,   805,   842,   806,   809,   847,   474,
     475,   476,   477,   478,   479,   849,   850,  1368,   367,   367,
     851,   859,  1374,  1375,   367,   852,   894,  1382,   897,   367,
     899,  1017,   923,   367,  1391,   842,  1011,  1018,  1020,  1021,
    1397,  1022,  1399,  1023,   842,  1402,  1026,   651,  1535,  1406,
    1537,  1033,  1539,  1540,  1411,  1034,   842,  1035,  1044,  1050,
    1045,  1416,  1063,  1068,  1070,  1418,  1067,  1072,   842,  1065,
     480,  1080,  1081,  1085,  1075,   842,  1076,  1077,  1096,  1086,
     367,  1083,  1084,  1098,  1093,  1122,  1168,  1556,  1180,  1164,
    1173,  1182,  1193,  1169,   366,  1221,  1216,  1223,  1224,  1237,
     366,  1238,  1239,  1245,  1246,  1250,  1252,  1254,  1258,  1259,
    1273,  1260,  1295,   367,  1314,  1315,  1318,   366,  1319,   367,
      83,  1364,  1338,  -211,  1330,  1337,  -211,  -211,  -211,  -211,
    1346,  -211,  -211,  1420,  -211,  1367,   367,  -211,  -211,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,  1421,  1428,  -211,  -211,
    -211,  1369,  1431,  1394,  -211,  -211,  1429,  1434,  1477,  1435,
    1436,  1445,  1450,  1437,  1452,  1467,  1448,  1310,  1479,  1475,
    1480,  1481,  1502,  1482,  1517,  1473,  -211,  -211,  1573,  -211,
    1494,  1520,  1529,  1536,  1605,  1543,   367,  1603,  -211,  1610,
    1618,  -211,  -211,  1611,  1354,   367,  1630,   950,   951,   952,
     953,   367,   954,  1631,  1327,   955,  1658,  1659,   956,   957,
     958,   959,   960,   961,   962,   963,   964,  1135,  1518,   965,
     966,   967,  1632,  1366,  1633,   324,  1357,  1167,  1388,   950,
     951,   952,   953,  1371,   954,   548,  1567,   955,   534,   549,
     956,   957,   958,   959,   960,   961,   962,   963,   964,   569,
    1656,   965,   966,   967,   571,   570,   535,   550,  1031,   321,
     536,  1377,   968,   969,   950,   951,   952,   953,  1472,   954,
     460,   815,   955,  1054,  1251,   956,   957,   958,   959,   960,
     961,   962,   963,   964,   818,   431,   965,   966,   967,   572,
     573,   321,  1233,   820,   968,   969,   668,   574,  1455,   366,
    1074,  1426,  1533,   366,   717,   879,   650,   648,   608,  1032,
     609,  1029,   619,  1261,  1272,  1462,  1057,   667,   367,  1449,
    1552,  1461,   367,  1069,  1335,  1578,   321,   367,   367,   968,
     969,  1585,   810,  1294,  1476,  1545,     0,  1310,     0,     0,
    1561,  1562,     0,     0,  1310,     0,     0,     0,  1310,  1310,
    1310,  1310,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1588,   367,     0,   367,     0,     0,   367,   367,
       0,     0,   367,     0,  1592,     0,   367,   367,   367,   367,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   367,     0,     0,     0,     0,     0,     0,
       0,     0,   367,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   367,     0,     0,     0,     0,     0,
       0,     0,  1613,     0,     0,     0,   367,     0,     0,     0,
       0,     0,     0,   367,   326,   327,   328,   329,   330,   331,
     332,   333,    33,    34,    35,    36,    37,    38,    39,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,    52,    53,    54,    55,    56,    57,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,   346,    72,     0,     0,     0,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,   347,   348,
      82,     0,     0,     0,    84,     0,     0,     0,     0,    87,
     349,    89,   350,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   351,   352,   103,   353,   105,     0,   106,
     354,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   355,   122,   123,   124,   125,   126,
     356,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,     0,   140,   141,   142,     0,   357,   144,
     358,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   359,   171,   172,   360,   174,
     175,   176,   177,   178,   361,   180,   362,   182,   183,   184,
     185,   186,   187,   188,   363,   364,   191,   192,   193,   194,
     195,     0,   950,   951,   952,   953,     0,   954,     0,     0,
     955,     0,     0,   956,   957,   958,   959,   960,   961,   962,
     963,   964,     0,     0,   965,   966,   967,     0,     0,     0,
       0,     8,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,   707,    11,     0,     0,    12,
      13,     0,    14,     0,    15,     0,    16,    17,    18,     0,
      19,    20,    21,   708,   321,     0,     0,   968,   969,     0,
       0,  1046,     0,  1047,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,     0,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,    80,    81,    82,     0,     0,    83,    84,    85,    86,
       0,     0,    87,    88,    89,    90,    91,    92,    93,    94,
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
     192,   193,   194,   195,     8,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,   707,    11,
       0,     0,    12,    13,     0,    14,     0,    15,     0,    16,
      17,    18,     0,    19,    20,    21,   716,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,     0,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,    80,    81,    82,     0,     0,    83,
      84,    85,    86,     0,     0,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,     0,
     140,   141,   142,     0,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,     8,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,    11,     0,     0,    12,    13,     0,    14,     0,
      15,     0,    16,    17,    18,     0,    19,    20,    21,   385,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,     0,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,    80,    81,    82,
       0,     0,    83,    84,    85,    86,     0,     0,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
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
       8,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,    11,     0,     0,    12,    13,
       0,    14,     0,    15,     0,    16,    17,    18,     0,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
     700,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
      80,    81,    82,     0,     0,    83,    84,    85,    86,     0,
       0,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
       0,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,     0,   140,   141,   142,     0,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,     8,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,    11,     0,
       0,    12,    13,     0,    14,     0,    15,     0,    16,    17,
      18,     0,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,   795,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     0,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     0,    80,    81,    82,     0,     0,    83,    84,
      85,    86,     0,     0,    87,    88,    89,    90,    91,    92,
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
     190,   191,   192,   193,   194,   195,     8,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
       0,    11,     0,     0,    12,    13,     0,    14,     0,    15,
       0,    16,    17,    18,     0,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,   803,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,    80,    81,    82,     0,
       0,    83,    84,    85,    86,     0,     0,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,     0,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,     0,   140,   141,   142,     0,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,     8,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,   707,    11,     0,     0,    12,    13,     0,
      14,     0,    15,     0,    16,    17,    18,     0,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,     0,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,    80,
      81,    82,     0,     0,    83,    84,    85,    86,     0,     0,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
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
     194,   195,     8,     0,     9,     0,     0,     0,     0,     0,
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
      86,     0,     0,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,     0,   140,   141,
     142,     0,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,     8,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
      11,     0,     0,    12,    13,     0,    14,     0,    15,     0,
      16,    17,    18,     0,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,     0,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,   346,    72,
       0,     0,     0,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,    80,    81,    82,     0,     0,
      83,    84,    85,    86,     0,     0,    87,   349,    89,   350,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     351,   352,   103,   353,   105,     0,   106,   354,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
       0,   140,   141,   142,     0,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   359,   171,   172,   360,   174,   175,   176,   177,
     178,   361,   180,   362,   182,   183,   184,   185,   186,   187,
     188,   363,   364,   191,   192,   193,   194,   195,     8,     0,
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
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,     0,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   514,   135,   136,
     137,   138,   139,     0,   140,   515,   142,     0,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,     8,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,    11,     0,     0,    12,
      13,     0,    14,     0,    15,     0,    16,    17,    18,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,     0,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,    80,    81,    82,     0,     0,    83,    84,    85,    86,
       0,     0,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,     0,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     537,   135,   136,   137,   138,   139,     0,   140,   515,   142,
       0,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,     8,     0,     9,     0,     0,     0,
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
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   551,   135,   136,   137,   138,   139,     0,
     140,   515,   142,     0,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,     8,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,    11,     0,     0,    12,    13,     0,    14,     0,
      15,     0,    16,    17,    18,     0,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,     0,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,    80,    81,    82,
       0,     0,    83,    84,    85,    86,     0,     0,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   575,   135,   136,   137,
     138,   139,     0,   140,   515,   142,     0,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
       8,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,    11,     0,     0,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,   346,    72,     0,     0,     0,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
      80,    81,    82,     0,     0,    83,    84,    85,    86,     0,
       0,    87,   349,    89,   350,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   351,   352,   103,   353,   105,
       0,   106,   354,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   355,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,     0,   140,   141,   142,     0,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   359,   171,   172,
     360,   174,   175,   176,   177,   178,   361,   180,   362,   182,
     183,   184,   185,   186,   187,   188,   363,   364,   191,   192,
     193,   194,   195,  1229,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   834,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   368,
     369,    27,    28,   370,    30,    31,   371,   835,    34,    35,
      36,    37,    38,    39,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,    52,    53,    54,    55,
      56,    57,    58,     0,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,   346,    72,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     0,   347,   348,    82,     0,     0,     0,    84,
       0,     0,     0,     0,    87,   349,    89,   350,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   351,   352,
     103,   353,   105,     0,   106,   354,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   355,
     122,   123,   124,   125,   126,   356,   836,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,     0,   140,
     141,   142,     0,   372,   144,   837,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     359,   171,   172,   360,   174,   175,   176,   177,   178,   361,
     180,   362,   182,   183,   184,   185,   186,   187,   188,   363,
     364,   191,   192,   193,   194,   195,     9,     0,     0,     0,
       0,     0,     0,     0,     0,  1296,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1297,     0,     0,     0,     0,
       0,  1298,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1299,   369,    27,    28,   370,    30,    31,   371,    33,    34,
      35,    36,    37,    38,    39,  1300,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,    52,    53,    54,
      55,    56,    57,    58,     0,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,   346,    72,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,   347,   348,    82,     0,     0,     0,
      84,    85,    86,     0,     0,    87,   349,    89,   350,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   351,
     352,   103,   353,   105,     0,   106,   354,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     355,   122,   123,   124,   125,   126,   356,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,     0,
     140,   141,   142,     0,   372,   144,   358,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   359,   171,   172,   360,   174,   175,   176,   177,   178,
     361,   180,   362,   182,   183,  1301,  1302,   186,   187,   188,
     363,   364,   191,   192,   193,   194,   195,     9,     0,     0,
       0,     0,     0,     0,     0,     0,  1296,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1299,   369,    27,    28,   370,    30,    31,   371,    33,
      34,    35,    36,    37,    38,    39,  1300,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,    52,    53,
      54,    55,    56,    57,    58,     0,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,   346,    72,
       0,     0,     0,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,   347,   348,    82,     0,     0,
       0,    84,    85,    86,     0,     0,    87,   349,    89,   350,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     351,   352,   103,   353,   105,     0,   106,   354,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   355,   122,   123,   124,   125,   126,   356,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
       0,   140,   141,   142,     0,   372,   144,   358,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   359,   171,   172,   360,   174,   175,   176,   177,
     178,   361,   180,   362,   182,   183,   184,   185,   186,   187,
     188,   363,   364,   191,   192,   193,   194,   195,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   368,   369,    27,    28,   370,    30,    31,   371,
      33,    34,    35,    36,    37,    38,    39,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,   346,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,   347,   348,    82,     0,
       0,     0,    84,    85,    86,     0,     0,    87,   349,    89,
     350,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   351,   352,   103,   353,   105,     0,   106,   354,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   355,   122,   123,   124,   125,   126,   356,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,     0,   140,   141,   142,     0,   372,   144,   358,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   359,   171,   172,   360,   174,   175,   176,
     177,   178,   361,   180,   362,   182,   183,   184,   185,   186,
     187,   188,   363,   364,   191,   192,   193,   194,   195,  1240,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   834,  1241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   368,   369,    27,    28,   370,    30,    31,
     371,   835,    34,    35,    36,    37,    38,    39,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
      52,    53,    54,    55,    56,    57,    58,     0,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
     346,    72,     0,     0,     0,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,   347,   348,    82,
       0,     0,     0,    84,     0,     0,     0,     0,    87,   349,
      89,   350,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   351,   352,   103,   353,   105,     0,   106,   354,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   355,   122,   123,   124,   125,   126,   356,
     836,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,     0,   140,   141,   142,     0,   372,   144,   837,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   359,   171,   172,   360,   174,   175,
     176,   177,   178,   361,   180,   362,   182,   183,   184,   185,
     186,   187,   188,   363,   364,   191,   192,   193,   194,   195,
     595,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     596,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   326,   327,   328,   329,   330,   331,
     332,   333,    33,    34,    35,    36,    37,    38,    39,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,    52,    53,    54,    55,    56,    57,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,   346,    72,     0,     0,     0,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,   347,   348,
      82,     0,     0,     0,    84,     0,     0,     0,     0,    87,
     349,    89,   350,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   351,   352,   103,   353,   105,     0,   106,
     354,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   355,   122,   123,   124,   125,   126,
     356,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,     0,   140,   141,   142,     0,   357,   144,
     358,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   359,   171,   172,   360,   174,
     175,   176,   177,   178,   361,   180,   362,   182,   183,   184,
     185,   186,   187,   188,   363,   364,   191,   192,   193,   194,
     195,   645,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   646,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   326,   327,   328,   329,   330,
     331,   332,   333,    33,    34,    35,    36,    37,    38,    39,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,    52,    53,    54,    55,    56,    57,    58,     0,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,   346,    72,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,   347,
     348,    82,     0,     0,     0,    84,     0,     0,     0,     0,
      87,   349,    89,   350,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   351,   352,   103,   353,   105,     0,
     106,   354,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   355,   122,   123,   124,   125,
     126,   356,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,     0,   140,   141,   142,     0,   357,
     144,   358,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   359,   171,   172,   360,
     174,   175,   176,   177,   178,   361,   180,   362,   182,   183,
     184,   185,   186,   187,   188,   363,   364,   191,   192,   193,
     194,   195,   834,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   368,   369,    27,
      28,   370,    30,    31,   371,   835,    34,    35,    36,    37,
      38,    39,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,    52,    53,    54,    55,    56,    57,
      58,     0,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,   346,    72,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,   347,   348,    82,     0,     0,     0,    84,     0,     0,
       0,     0,    87,   349,    89,   350,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   351,   352,   103,   353,
     105,     0,   106,   354,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   355,   122,   123,
     124,   125,   126,   356,   836,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,     0,   140,   141,   142,
       0,   372,   144,   837,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   359,   171,
     172,   360,   174,   175,   176,   177,   178,   361,   180,   362,
     182,   183,   184,   185,   186,   187,   188,   363,   364,   191,
     192,   193,   194,   195,   834,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   368,
     369,    27,    28,   370,    30,    31,   371,    33,    34,    35,
      36,    37,    38,    39,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,    52,    53,    54,    55,
      56,    57,    58,     0,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,   346,    72,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     0,   347,   348,    82,     0,     0,     0,    84,
       0,     0,     0,     0,    87,   349,    89,   350,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   351,   352,
     103,   353,   105,     0,   106,   354,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   355,
     122,   123,   124,   125,   126,   356,   836,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,     0,   140,
     141,   142,     0,   372,   144,   837,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     359,   171,   172,   360,   174,   175,   176,   177,   178,   361,
     180,   362,   182,   183,   184,   185,   186,   187,   188,   363,
     364,   191,   192,   193,   194,   195,   611,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     326,   327,   328,   329,   330,   331,   332,   333,    33,    34,
      35,    36,    37,    38,    39,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,    52,    53,    54,
      55,    56,    57,    58,     0,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,   346,    72,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,   347,   348,    82,     0,     0,   612,
      84,     0,     0,     0,     0,    87,   349,    89,   350,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   351,
     352,   103,   353,   105,     0,   106,   354,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     355,   122,   123,   124,   125,   126,   356,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,     0,
     140,   141,   142,     0,   357,   144,   358,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   359,   171,   172,   360,   174,   175,   176,   177,   178,
     361,   180,   362,   182,   183,   184,   185,   186,   187,   188,
     363,   364,   191,   192,   193,   194,   195,   326,   327,   328,
     329,   330,   331,   332,   333,    33,    34,    35,    36,    37,
      38,    39,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,    52,    53,    54,    55,    56,    57,
      58,     0,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,   346,    72,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,   347,   348,    82,     0,     0,     0,    84,     0,     0,
       0,     0,    87,   349,    89,   350,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   351,   352,   103,   353,
     105,     0,   106,   354,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   355,   122,   123,
     124,   125,   126,   356,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,     0,   140,   141,   142,
       0,   357,   144,   358,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   359,   171,
     172,   360,   174,   175,   176,   177,   178,   361,   180,   362,
     182,   183,   184,   185,   186,   187,   188,   363,   364,   191,
     192,   193,   194,   195,    34,    35,    36,    37,    38,    39,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,    52,    53,    54,    55,    56,    57,    58,     0,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,   346,    72,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,   347,
     348,    82,     0,     0,     0,    84,     0,     0,     0,     0,
      87,   349,    89,   350,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   351,   352,   103,     0,   105,     0,
     106,     0,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   355,   122,   123,   124,   125,
     126,   356,     0,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,     0,   140,   141,   142,     0,     0,
     144,     0,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   359,   171,   172,   360,
     174,   175,   176,   177,   178,   361,   180,   362,   182,   183,
     184,   185,   186,   187,   188,   363,   364,   191,   192,   193,
     194,   195,     0,  1389,     0,     0,   950,   951,   952,   953,
       0,   954,     0,     0,   955,     0,     0,   956,   957,   958,
     959,   960,   961,   962,   963,   964,     0,     0,   965,   966,
     967,  1398,     0,     0,   950,   951,   952,   953,     0,   954,
       0,     0,   955,     0,     0,   956,   957,   958,   959,   960,
     961,   962,   963,   964,     0,     0,   965,   966,   967,  1400,
       0,     0,   950,   951,   952,   953,     0,   954,   321,     0,
     955,   968,   969,   956,   957,   958,   959,   960,   961,   962,
     963,   964,     0,     0,   965,   966,   967,  1403,     0,     0,
     950,   951,   952,   953,     0,   954,   321,     0,   955,   968,
     969,   956,   957,   958,   959,   960,   961,   962,   963,   964,
       0,     0,   965,   966,   967,  1404,     0,     0,   950,   951,
     952,   953,     0,   954,   321,     0,   955,   968,   969,   956,
     957,   958,   959,   960,   961,   962,   963,   964,     0,     0,
     965,   966,   967,  1409,     0,     0,   950,   951,   952,   953,
       0,   954,   321,     0,   955,   968,   969,   956,   957,   958,
     959,   960,   961,   962,   963,   964,     0,     0,   965,   966,
     967,  1412,     0,     0,   950,   951,   952,   953,     0,   954,
     321,     0,   955,   968,   969,   956,   957,   958,   959,   960,
     961,   962,   963,   964,     0,     0,   965,   966,   967,  1415,
       0,     0,   950,   951,   952,   953,     0,   954,   321,     0,
     955,   968,   969,   956,   957,   958,   959,   960,   961,   962,
     963,   964,     0,     0,   965,   966,   967,  1417,     0,     0,
     950,   951,   952,   953,     0,   954,   321,     0,   955,   968,
     969,   956,   957,   958,   959,   960,   961,   962,   963,   964,
       0,     0,   965,   966,   967,  1419,     0,     0,   950,   951,
     952,   953,     0,   954,   321,     0,   955,   968,   969,   956,
     957,   958,   959,   960,   961,   962,   963,   964,     0,     0,
     965,   966,   967,  1515,     0,     0,   950,   951,   952,   953,
       0,   954,   321,     0,   955,   968,   969,   956,   957,   958,
     959,   960,   961,   962,   963,   964,     0,     0,   965,   966,
     967,  1516,     0,     0,   950,   951,   952,   953,     0,   954,
     321,     0,   955,   968,   969,   956,   957,   958,   959,   960,
     961,   962,   963,   964,     0,     0,   965,   966,   967,  1521,
       0,     0,   950,   951,   952,   953,     0,   954,   321,     0,
     955,   968,   969,   956,   957,   958,   959,   960,   961,   962,
     963,   964,     0,     0,   965,   966,   967,  1527,     0,     0,
     950,   951,   952,   953,     0,   954,   321,     0,   955,   968,
     969,   956,   957,   958,   959,   960,   961,   962,   963,   964,
       0,     0,   965,   966,   967,  1589,     0,     0,   950,   951,
     952,   953,     0,   954,   321,     0,   955,   968,   969,   956,
     957,   958,   959,   960,   961,   962,   963,   964,     0,     0,
     965,   966,   967,  1590,     0,     0,   950,   951,   952,   953,
       0,   954,   321,     0,   955,   968,   969,   956,   957,   958,
     959,   960,   961,   962,   963,   964,     0,     0,   965,   966,
     967,  1593,     0,     0,   950,   951,   952,   953,     0,   954,
     321,     0,   955,   968,   969,   956,   957,   958,   959,   960,
     961,   962,   963,   964,     0,     0,   965,   966,   967,  1594,
       0,     0,   950,   951,   952,   953,     0,   954,   321,     0,
     955,   968,   969,   956,   957,   958,   959,   960,   961,   962,
     963,   964,  1146,     0,   965,   966,   967,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   321,     0,     0,   968,
     969,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1147,     0,  1148,  1149,  1150,  1151,  1152,  1153,
    1154,     0,     0,     0,   321,     0,     0,   968,   969,  1155,
    1156,  1157,  1158,  1159,  1160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1161,  1162,  1163
};

static const yytype_int16 yycheck[] =
{
      21,   484,    10,   416,   656,   631,   224,   633,   421,     8,
     636,   424,   588,   922,  1267,   428,  1128,   319,  1326,   485,
     486,   487,   488,  1045,   275,   655,   277,  1303,     8,   305,
      10,   319,     3,     4,     5,   311,   305,   305,  1112,   513,
     696,   697,   319,   319,   916,   684,   305,    62,    14,    40,
     388,   311,   311,   311,   121,   861,   684,    48,    33,   319,
     319,   319,   400,   401,    58,   305,   696,   697,   517,   518,
     519,   311,   521,   522,   121,     9,  1480,   121,    10,   319,
       9,   530,    12,    48,   533,    48,    40,    33,    48,   538,
     539,   540,   541,   542,   543,   544,   545,    58,   547,    50,
     438,    48,   311,   552,   553,   554,   121,   556,   557,   941,
     319,   943,   305,   106,   563,   243,   565,   148,   311,   568,
     734,   735,     9,    41,    48,    40,   319,   576,   577,   578,
     579,   580,   581,   582,   583,  1484,   585,  1305,    11,    58,
     311,   973,    33,    61,   242,    34,    35,     9,   319,    19,
     181,   983,    34,    35,    34,    35,   988,   274,   990,   113,
     992,    32,   994,    44,   996,    46,   998,   114,  1000,    40,
      40,   113,  1004,   100,  1006,    67,    68,    48,    49,   307,
     297,    52,    53,    54,   103,   150,   311,   150,  1097,   287,
      52,    53,    54,   444,   319,   124,    69,   448,   113,   297,
     146,   452,   453,   454,   834,   831,   457,  1611,   173,   101,
     173,   305,   311,   173,   274,   142,   118,   311,   121,   122,
     319,   634,   861,   174,   863,   319,   234,   181,   311,   237,
     224,    40,   162,   861,   305,   863,   319,   297,   651,   181,
     311,   173,   217,   130,  1497,   312,   313,   238,   319,   173,
     724,  1123,  1058,   124,   234,   146,   507,   237,   192,   510,
    1609,   227,   124,   224,   118,   312,   181,   314,   312,   313,
     719,   189,   574,    45,   550,   150,    48,   159,   124,   159,
     894,   550,   550,   242,  1560,   273,   574,   160,   161,   242,
     249,   550,   906,     0,   727,   571,   249,   574,   574,  1131,
     315,   316,   317,  1135,   113,   919,  1614,   209,   210,   297,
     550,   571,   571,   571,   574,   574,   574,   655,  1486,  1487,
    1488,  1489,   211,   212,   213,   171,    45,   760,   124,    48,
     128,   571,    21,    25,   574,   306,    47,    48,    12,     9,
    1172,   312,   114,   104,   315,   220,   221,    47,    48,   203,
      42,    40,  1184,   228,     9,   209,   210,   550,   696,   697,
     698,   699,   571,  1475,  1617,   574,    40,  1023,   389,   274,
     241,    41,   393,    23,    48,   171,   397,   628,   571,  1035,
      19,   574,   403,   382,    40,   181,    41,   638,   639,    40,
      22,    41,    48,  1023,   415,   114,   301,   396,   419,   420,
     571,    33,   382,   574,   115,  1035,  1480,  1481,   388,   104,
      40,   432,   433,   434,   665,   115,   396,   416,   439,  1058,
     400,   401,   421,  1445,  1498,   424,  1065,    40,  1067,   428,
    1058,  1007,  1008,   274,   129,  1087,   416,  1065,    11,  1067,
      48,   421,  1094,   917,   424,   286,   571,   921,   428,   574,
      23,    40,   451,  1079,   792,   296,   550,    40,   438,    67,
      68,    34,   713,   714,   715,    48,  1080,   123,    19,  1083,
    1084,   451,   571,  1129,   265,   574,   497,   571,  1134,   550,
     574,   502,   503,  1139,  1098,   506,   899,  1143,   571,    40,
     828,   574,    32,   272,    33,   299,   834,    48,    19,  1129,
     571,   305,   281,   574,  1134,  1579,   297,   311,    48,  1139,
      49,   302,   303,  1143,   513,   319,  1348,   466,   467,   468,
     469,   470,   471,    19,   473,   474,   475,   476,   477,   478,
     479,   480,    24,   513,  1190,    27,    28,   136,  1370,    31,
     123,    64,    65,    66,   143,  1619,    64,    65,    66,    32,
      40,   273,   274,    22,  1386,    48,    48,    40,   809,   274,
    1190,    51,  1394,    33,    33,    48,  1398,    22,  1220,    52,
      53,    54,   123,   295,   296,    64,   298,    66,    33,    49,
     601,   274,   297,   274,  1493,   300,   301,   274,   163,   164,
     189,   190,   191,   284,   285,   616,    33,   284,   849,   850,
     851,    48,   125,   296,   297,   296,   297,   125,   859,   296,
     297,    84,    49,     9,    87,    33,   274,    90,    91,    92,
      93,   274,   643,   644,   116,   117,   284,   285,  1077,  1078,
      19,    49,   223,   884,  1273,   634,   125,   297,   296,   297,
     300,   124,    19,   296,   297,  1273,   864,   238,   171,    19,
      33,  1303,   651,   171,   634,  1311,   179,   180,   181,   182,
     183,   179,   180,   181,   182,   183,    49,   190,   191,    19,
      33,   651,   190,   191,   184,   655,   149,    22,   188,    33,
      33,  1311,   171,    30,  1336,  1023,    49,    33,    33,    36,
     179,   180,   181,   182,   183,    49,    49,  1035,   162,   222,
     164,   190,   191,    49,  1318,  1319,   229,    33,    33,   232,
     183,    33,    40,  1327,   232,    33,   696,   697,   698,   699,
      48,    33,    19,    49,    49,   724,   675,    49,   201,   202,
     729,    49,   205,   222,    32,    19,   242,    49,   244,    33,
     229,    33,    19,   232,   724,   251,   252,    19,    33,   729,
      48,   257,    40,   733,   178,    49,    41,    49,   241,    94,
      48,   169,   186,     9,   270,   271,  1017,   175,   178,  1020,
    1021,  1022,   178,   104,   105,  1026,   186,   178,   113,    33,
     186,  1437,  1438,  1266,   119,   186,   234,    41,    48,    33,
     238,  1129,  1275,  1276,  1260,    33,  1134,    41,    32,  1050,
       9,  1139,    19,    41,   232,  1143,    40,  1437,  1438,    44,
    1223,    46,   792,    33,    48,  1441,  1229,  1473,    52,    53,
      54,    41,  1474,    33,  1075,  1076,   847,    40,    64,    65,
      66,    41,    33,  1246,  1448,    64,    40,    66,   218,  1491,
      41,   862,    33,  1473,  1420,  1421,   226,  1503,   828,    64,
      41,    66,  1190,    40,   834,   854,  1512,    33,    33,   194,
     195,   196,    33,    33,   199,   200,    41,    33,  1524,    33,
      41,    41,    58,  1503,   854,    41,    33,    41,    33,   237,
    1536,   154,  1512,    33,    41,  1499,    41,  1543,   155,   125,
     124,    41,   187,   188,  1524,   156,   125,    30,   130,   131,
     899,   133,   134,    36,   136,   137,  1536,   193,  1560,    30,
     125,   308,   309,  1543,   913,    36,  1568,   167,   917,   899,
      34,    35,   921,     3,     4,     5,     6,     7,     8,    90,
      91,    92,    93,   913,  1586,   171,   158,   917,   206,   207,
     208,   921,   171,   179,   180,   181,   182,   183,   928,    21,
     179,   180,   181,   182,   183,   166,   171,  1533,    52,    53,
      54,   190,   191,    21,   179,   180,   181,   182,   183,   211,
     212,   213,  1611,  1311,  1626,  1627,  1628,  1629,   119,   120,
    1463,  1464,  1634,     3,     4,     5,   222,   169,   170,   185,
     169,   170,    40,   229,  1245,   188,   232,   171,  1175,    40,
     190,   191,    48,   232,   121,   122,    40,   222,    40,  1186,
    1187,   138,   139,    40,   229,  1428,    29,   232,  1195,  1432,
     282,   283,  1199,    12,  1201,  1202,    41,  1204,   310,   311,
    1207,  1208,   287,   288,   141,   142,   176,   177,    85,    86,
      85,    86,    41,  1023,    48,    13,    14,    15,    16,    17,
      18,    40,   254,   255,    41,  1035,    24,   141,   142,    48,
      98,    99,   242,   214,   215,   245,   246,   247,   248,    37,
     250,    33,  1555,   253,   489,   490,   256,   257,   258,   259,
     260,   261,   262,   263,   264,  1093,     9,   267,   268,   269,
     482,   483,   491,   492,    16,    17,   500,   501,    33,  1437,
    1438,   698,   699,  1621,  1622,    48,    48,   150,   157,   135,
    1109,   136,    62,  1093,   150,   157,    52,   150,   124,  1140,
    1128,   150,    50,  1144,   104,    41,   105,   307,    41,  1109,
     310,   311,    41,    41,    41,  1473,    41,    10,    48,   107,
     108,   109,   110,   111,   112,   223,    58,  1168,  1128,  1129,
     150,   135,  1173,  1174,  1134,   223,    37,  1178,   124,  1139,
       9,   130,    83,  1143,  1185,  1503,   129,   113,    10,    10,
    1191,   132,  1193,   148,  1512,  1196,   152,     9,  1429,  1200,
    1431,    40,  1433,  1434,  1205,    40,  1524,    40,    40,    33,
      40,  1212,    89,    82,   197,  1216,   240,    23,  1536,   239,
     168,    37,   140,    33,   228,  1543,   228,   124,   189,   124,
    1190,   171,   171,   113,   233,    83,   297,  1468,   274,   242,
     299,   242,   297,   254,  1223,    41,   297,     9,   192,    41,
    1229,    41,    41,   223,     9,   223,   140,    41,    96,   211,
     132,    95,    33,  1223,    37,   171,    33,  1246,    37,  1229,
     124,   121,   282,   242,   211,   283,   245,   246,   247,   248,
     251,   250,   251,    43,   253,   242,  1246,   256,   257,   258,
     259,   260,   261,   262,   263,   264,    43,     9,   267,   268,
     269,   299,   130,   266,   273,   274,   132,   153,  1296,    41,
      41,    40,    49,   150,    95,   198,   143,  1305,    19,   233,
      40,    40,   124,    12,   121,   150,   295,   296,    21,   298,
     211,   242,   242,   150,    10,   150,  1296,   130,   307,    41,
     204,   310,   311,    33,   242,  1305,    26,   245,   246,   247,
     248,  1311,   250,   130,   113,   253,    41,   204,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   939,  1369,   267,
     268,   269,  1603,  1163,  1605,     6,   242,   951,  1181,   245,
     246,   247,   248,  1170,   250,   306,  1482,   253,   300,   306,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   312,
    1631,   267,   268,   269,   313,   312,   300,   307,   832,   307,
     301,   242,   310,   311,   245,   246,   247,   248,  1291,   250,
     200,   632,   253,   859,  1050,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   635,   102,   267,   268,   269,   315,
     315,   307,  1024,   637,   310,   311,   465,   318,  1265,  1428,
     884,  1220,  1422,  1432,   510,   699,   441,   438,   394,   834,
     394,   828,   400,  1065,  1067,  1273,   863,   464,  1428,  1255,
    1457,  1269,  1432,   872,  1122,  1496,   307,  1437,  1438,   310,
     311,  1501,   627,  1087,  1295,  1442,    -1,  1475,    -1,    -1,
    1478,  1479,    -1,    -1,  1482,    -1,    -1,    -1,  1486,  1487,
    1488,  1489,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1513,  1473,    -1,  1475,    -1,    -1,  1478,  1479,
      -1,    -1,  1482,    -1,  1525,    -1,  1486,  1487,  1488,  1489,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1503,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1512,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1524,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1573,    -1,    -1,    -1,  1536,    -1,    -1,    -1,
      -1,    -1,    -1,  1543,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,   119,   120,
     121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,    -1,   185,   186,   187,    -1,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,    -1,   245,   246,   247,   248,    -1,   250,    -1,    -1,
     253,    -1,    -1,   256,   257,   258,   259,   260,   261,   262,
     263,   264,    -1,    -1,   267,   268,   269,    -1,    -1,    -1,
      -1,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    -1,    34,    35,    36,    -1,
      38,    39,    40,    41,   307,    -1,    -1,   310,   311,    -1,
      -1,   312,    -1,   314,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,   119,   120,   121,    -1,    -1,   124,   125,   126,   127,
      -1,    -1,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,    -1,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
      -1,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     9,    -1,    11,    -1,    -1,    -1,
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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
     185,   186,   187,    -1,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    24,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    -1,    34,    35,    36,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,
      -1,    -1,   124,   125,   126,   127,    -1,    -1,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,    -1,   185,   186,   187,    -1,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
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
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,    -1,   185,   186,   187,    -1,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    -1,    34,    35,
      36,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,   119,   120,   121,    -1,    -1,   124,   125,
     126,   127,    -1,    -1,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,    -1,   185,
     186,   187,    -1,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     9,    -1,    11,    -1,
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
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,    -1,   185,   186,   187,    -1,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    -1,    34,    35,    36,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,   119,
     120,   121,    -1,    -1,   124,   125,   126,   127,    -1,    -1,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,    -1,   185,   186,   187,    -1,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
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
     127,    -1,    -1,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,    -1,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,    -1,   185,   186,
     187,    -1,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,   119,   120,   121,    -1,    -1,
     124,   125,   126,   127,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
      -1,   185,   186,   187,    -1,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     9,    -1,
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
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,    -1,   185,   186,   187,    -1,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    -1,    34,    35,    36,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,   119,   120,   121,    -1,    -1,   124,   125,   126,   127,
      -1,    -1,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,    -1,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
      -1,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     9,    -1,    11,    -1,    -1,    -1,
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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
     185,   186,   187,    -1,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    24,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    -1,    34,    35,    36,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,
      -1,    -1,   124,   125,   126,   127,    -1,    -1,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,    -1,   185,   186,   187,    -1,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
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
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,    -1,   185,   186,   187,    -1,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,    -1,   185,
     186,   187,    -1,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,    11,    -1,    -1,    -1,
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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
     185,   186,   187,    -1,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,   119,   120,   121,    -1,    -1,
      -1,   125,   126,   127,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
      -1,   185,   186,   187,    -1,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,    11,    -1,
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
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,    -1,   185,   186,   187,    -1,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,    -1,   185,   186,   187,    -1,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
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
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,    -1,   185,   186,   187,    -1,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,    -1,   185,   186,   187,    -1,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,   119,   120,   121,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,    -1,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
      -1,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,    -1,   185,
     186,   187,    -1,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,   119,   120,   121,    -1,    -1,   124,
     125,    -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
     185,   186,   187,    -1,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,   119,   120,   121,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,    -1,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
      -1,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,    -1,   148,    -1,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,    -1,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,    -1,   185,   186,   187,    -1,    -1,
     190,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,    -1,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,    -1,    -1,   253,    -1,    -1,   256,   257,   258,
     259,   260,   261,   262,   263,   264,    -1,    -1,   267,   268,
     269,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
      -1,    -1,   253,    -1,    -1,   256,   257,   258,   259,   260,
     261,   262,   263,   264,    -1,    -1,   267,   268,   269,   242,
      -1,    -1,   245,   246,   247,   248,    -1,   250,   307,    -1,
     253,   310,   311,   256,   257,   258,   259,   260,   261,   262,
     263,   264,    -1,    -1,   267,   268,   269,   242,    -1,    -1,
     245,   246,   247,   248,    -1,   250,   307,    -1,   253,   310,
     311,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      -1,    -1,   267,   268,   269,   242,    -1,    -1,   245,   246,
     247,   248,    -1,   250,   307,    -1,   253,   310,   311,   256,
     257,   258,   259,   260,   261,   262,   263,   264,    -1,    -1,
     267,   268,   269,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   307,    -1,   253,   310,   311,   256,   257,   258,
     259,   260,   261,   262,   263,   264,    -1,    -1,   267,   268,
     269,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
     307,    -1,   253,   310,   311,   256,   257,   258,   259,   260,
     261,   262,   263,   264,    -1,    -1,   267,   268,   269,   242,
      -1,    -1,   245,   246,   247,   248,    -1,   250,   307,    -1,
     253,   310,   311,   256,   257,   258,   259,   260,   261,   262,
     263,   264,    -1,    -1,   267,   268,   269,   242,    -1,    -1,
     245,   246,   247,   248,    -1,   250,   307,    -1,   253,   310,
     311,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      -1,    -1,   267,   268,   269,   242,    -1,    -1,   245,   246,
     247,   248,    -1,   250,   307,    -1,   253,   310,   311,   256,
     257,   258,   259,   260,   261,   262,   263,   264,    -1,    -1,
     267,   268,   269,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   307,    -1,   253,   310,   311,   256,   257,   258,
     259,   260,   261,   262,   263,   264,    -1,    -1,   267,   268,
     269,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
     307,    -1,   253,   310,   311,   256,   257,   258,   259,   260,
     261,   262,   263,   264,    -1,    -1,   267,   268,   269,   242,
      -1,    -1,   245,   246,   247,   248,    -1,   250,   307,    -1,
     253,   310,   311,   256,   257,   258,   259,   260,   261,   262,
     263,   264,    -1,    -1,   267,   268,   269,   242,    -1,    -1,
     245,   246,   247,   248,    -1,   250,   307,    -1,   253,   310,
     311,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      -1,    -1,   267,   268,   269,   242,    -1,    -1,   245,   246,
     247,   248,    -1,   250,   307,    -1,   253,   310,   311,   256,
     257,   258,   259,   260,   261,   262,   263,   264,    -1,    -1,
     267,   268,   269,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   307,    -1,   253,   310,   311,   256,   257,   258,
     259,   260,   261,   262,   263,   264,    -1,    -1,   267,   268,
     269,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
     307,    -1,   253,   310,   311,   256,   257,   258,   259,   260,
     261,   262,   263,   264,    -1,    -1,   267,   268,   269,   242,
      -1,    -1,   245,   246,   247,   248,    -1,   250,   307,    -1,
     253,   310,   311,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   242,    -1,   267,   268,   269,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,   310,
     311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,   274,   275,   276,   277,   278,   279,
     280,    -1,    -1,    -1,   307,    -1,    -1,   310,   311,   289,
     290,   291,   292,   293,   294,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   304,   305,   306
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,   319,     9,    11,
      20,    24,    27,    28,    30,    32,    34,    35,    36,    38,
      39,    40,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   107,   108,   109,   110,   111,   112,   113,
     119,   120,   121,   124,   125,   126,   127,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     185,   186,   187,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   453,   454,   455,   456,
     457,   458,   460,   465,   475,   478,   482,   483,   484,   485,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   502,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   526,   527,   528,
     529,   530,   533,   534,   535,   546,   548,   550,   551,   552,
     555,   557,   558,   559,   569,   570,   571,   572,   573,   574,
     575,   577,   579,   581,   622,   623,   624,   625,   626,   627,
     628,   631,   632,   633,   634,   636,   643,   644,   648,   649,
     650,   651,   657,   658,   184,   188,   404,   405,   406,   407,
     420,   423,   411,   412,   413,   414,   420,   423,   415,   416,
     417,   418,   420,   423,   419,   420,   421,   422,   423,   424,
     243,   307,   320,   321,   343,     0,    55,    56,    57,    58,
      59,    60,    61,    62,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,   102,   119,   120,   131,
     133,   144,   145,   147,   151,   165,   171,   189,   191,   216,
     219,   225,   227,   235,   236,   525,   657,   658,    55,    56,
      59,    62,   189,   517,   121,   122,   536,   128,   106,   547,
     506,   104,   538,   497,   497,    41,   454,    19,    40,    48,
     123,   556,    40,    48,    40,    40,    40,    48,   123,   560,
      40,    40,    40,    48,    19,    19,    19,    19,    19,    19,
      19,    19,    19,    19,    19,    48,     9,   629,   630,    48,
      48,     9,   461,   462,     9,   192,   466,   467,     9,   476,
     477,   476,    40,    40,    48,    67,    68,    19,    40,    48,
     123,   553,    40,   448,    58,   103,    58,   224,    58,    58,
     224,   232,   237,    33,   130,   131,   133,   134,   136,   137,
     458,   459,   468,   469,   154,   155,    13,    14,    15,    16,
      17,    18,    24,    37,   107,   108,   109,   110,   111,   112,
     168,   193,    34,    35,   159,    11,    69,   160,   161,    12,
     162,   163,   164,   156,   167,   158,   166,    48,   502,   506,
      30,    36,    21,    21,   517,   517,    21,    40,   455,   455,
      40,    51,   185,   171,   178,   186,   408,   409,   426,   428,
     429,   430,   431,   433,   434,   435,   438,   439,   440,   443,
     444,   446,   453,   637,   405,   406,   407,   178,   408,   409,
     426,   428,   430,   431,   432,   444,   453,   637,   412,   413,
     414,   178,   425,   426,   428,   429,   430,   431,   433,   434,
     435,   438,   439,   444,   446,   447,   453,   621,   637,   416,
     417,   418,   421,   422,   424,   178,   425,   426,   428,   430,
     431,   432,   444,   447,   453,   637,   322,   344,   537,   104,
     105,   549,    29,   657,    41,    11,    41,   576,   583,   636,
     454,    48,   554,    41,   454,    41,    61,   189,   579,   581,
      41,    41,   124,   635,   657,   454,    48,   561,   578,   583,
     582,   584,   636,    41,   454,   454,   525,    33,   217,   454,
     454,   525,    33,   525,     9,    33,   525,    33,   146,   146,
     454,   454,   454,    48,    48,    11,    41,   580,   584,   454,
     554,     9,    41,   450,   451,   150,   564,   455,   157,   455,
     657,   455,   455,   455,   455,   135,   136,   484,   485,   487,
     487,   487,   487,   487,   487,   486,   487,   487,   487,   487,
     487,   487,   487,   487,    62,   490,   490,   489,   491,   491,
     491,   491,   492,   492,   493,   493,   157,   150,   150,   150,
      49,   454,   507,   507,   454,   454,   454,    23,    41,   455,
     531,   532,   150,   220,   221,   228,    41,   531,    52,   124,
     635,    64,    66,   125,   171,   179,   180,   181,   182,   183,
     190,   191,   232,   410,   187,   188,    50,   427,   427,   427,
     427,   427,   427,   427,   427,   178,   186,    65,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   178,   222,   229,
     449,   427,   427,   427,   427,   427,   427,   427,   427,   178,
     178,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     272,   281,   323,   308,   309,   346,   104,   538,   105,   104,
     129,   503,    33,    41,    49,    49,   454,    49,    41,    41,
      41,    41,    49,    49,   454,    41,    41,    49,    49,    10,
     630,   455,    49,    49,   564,   462,   564,   525,   467,   564,
     477,   455,   455,    41,    41,    49,   454,   454,    33,    41,
      49,   525,    33,    41,    40,    63,   172,   191,   565,   567,
     568,   569,   636,   652,   653,   654,   656,    48,   452,   223,
      58,   150,   223,   223,   238,   455,   470,   471,   472,   135,
     487,    40,    48,   241,   501,   522,   587,   590,   591,   592,
     593,   594,   595,   596,   597,   565,   565,   562,   568,   562,
      49,    22,    22,    22,    33,    41,   218,   226,   455,   455,
     455,    41,   174,   427,    37,   169,   170,   124,   586,     9,
     635,   169,   170,   119,   120,   136,   143,   189,   410,   169,
     175,   436,   657,   234,   238,   640,   658,   171,   181,   442,
     586,   171,   586,    83,   604,    67,    68,   101,   410,   242,
     244,   251,   252,   257,   270,   271,   324,   325,   328,   329,
     333,   334,   335,   336,   337,   338,   341,   342,   345,   242,
     245,   246,   247,   248,   250,   253,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   267,   268,   269,   310,   311,
     343,   347,   348,   349,   350,   351,   352,   353,   356,   357,
     361,   362,   363,   364,   365,   370,   371,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   121,   122,    25,
      42,   129,   585,   636,    49,    49,   455,   130,   113,   463,
      10,    10,   132,   148,   479,   481,   152,    49,    49,   585,
     564,   451,   567,    40,    40,    40,    11,    23,    34,   566,
     454,   455,   455,   455,    40,    40,   312,   314,   645,   657,
      33,   138,   139,   473,   470,   587,   454,   594,    48,   206,
     207,   208,   598,    89,   620,   239,   589,   240,    82,   604,
     197,   599,    23,   563,   532,   228,   228,   124,   586,   525,
      37,   140,   586,   171,   171,    33,   124,   657,   121,   312,
     313,   641,   642,   233,   448,   635,   189,   586,   113,   441,
     635,   441,    84,    87,    90,    91,    92,    93,   149,   183,
     201,   202,   205,   605,   606,   607,   608,   609,   612,   617,
     618,   619,    83,   658,   282,   283,   273,   274,   295,   296,
     298,   330,   274,   286,   296,   330,   274,   284,   285,   296,
     297,   346,   274,   296,   297,   346,   242,   272,   274,   275,
     276,   277,   278,   279,   280,   289,   290,   291,   292,   293,
     294,   304,   305,   306,   242,   114,   452,   351,   297,   254,
     366,   367,   368,   299,   297,   300,   346,   273,   297,   355,
     274,   358,   242,   346,   265,   297,   302,   303,   372,   274,
     296,   297,   346,   297,   346,   274,   297,   346,   346,   274,
     297,   300,   301,   346,   274,   297,   346,   274,   301,   346,
     242,   287,   297,   287,   288,   346,   297,   346,   538,   538,
     545,    41,   455,     9,   192,   464,   455,   455,   455,     9,
     565,   181,   480,   481,   455,    23,    41,    41,    41,    41,
      11,    41,   565,   655,    49,   223,     9,   646,   647,   646,
     223,   471,   140,   474,    41,    49,    49,   587,    96,   211,
      95,   591,    94,   113,   119,   194,   195,   196,   199,   200,
     588,   601,   592,   132,   118,   209,   210,   600,   455,   455,
     427,   427,   564,   586,   141,   142,   586,   586,   176,   177,
     437,    40,   452,   639,   640,    33,    20,    30,    36,    55,
      70,   230,   231,   394,   395,   396,   397,   400,   401,   402,
     517,   150,   173,   452,    37,   171,   441,   586,    33,    37,
      90,    91,    92,    93,    85,    86,    40,   113,   181,   611,
     211,    85,    86,   657,   634,   605,   448,   283,   282,   326,
     394,   565,    52,    53,    54,   327,   251,   331,   332,   346,
     565,   346,   565,   454,   242,   565,   454,   242,    62,   121,
     315,   316,   317,   339,   121,   340,   340,   242,   454,   299,
     255,   367,   369,   346,   454,   454,   345,   242,   121,   312,
     314,   354,   454,   242,   249,   359,   360,   242,   359,   242,
     346,   454,   345,   345,   266,   373,   565,   454,   242,   454,
     242,   345,   454,   242,   242,   345,   454,   345,   345,   242,
     345,   454,   242,   345,   345,   242,   454,   242,   454,   242,
      43,    43,    31,   116,   117,   452,   534,   525,     9,   132,
     525,   130,     9,   130,   153,    41,    41,   150,    33,    41,
     455,   525,    33,    41,    41,    40,   141,   142,   143,   598,
      49,   491,    95,    98,    99,   488,   489,   600,   214,   215,
     603,   603,   593,   100,   142,   489,   489,   198,    10,   173,
     445,    41,   450,   150,   638,   233,   642,   517,    19,    19,
      40,    40,    12,   452,   639,   401,    30,    36,    30,    36,
     403,   565,   586,   586,   211,   181,   611,   586,    40,   113,
     181,   614,   124,   150,   173,   452,   121,   312,   313,   274,
     284,   285,   296,   297,   346,   242,   242,   121,   454,   346,
     242,   242,   274,   284,   296,   297,   346,   242,   346,   242,
     346,   538,   538,   536,   525,   455,   150,   455,   525,   455,
     455,   565,   565,   150,   564,   647,   646,   586,   211,   212,
     213,   602,   602,   489,   489,   159,   455,    41,   565,   452,
     394,   517,   517,   398,   524,   634,   634,   395,   638,   401,
     401,   401,   401,    21,   173,   452,   441,   610,   610,   203,
     600,   615,   634,   586,   613,   613,   565,   565,   454,   242,
     242,   565,   454,   242,   242,    44,    46,   539,    44,    46,
     540,   538,   565,   130,   565,    10,    41,   489,   452,   639,
      41,    33,   452,   454,    33,    41,    41,   634,   204,    33,
      41,   162,   164,   616,   173,   452,   541,   543,   542,   544,
      26,   130,   455,   455,   638,   399,   522,   524,    22,   611,
     600,   634,   614,   614,    45,   114,   452,    47,   115,   452,
      45,   114,   452,    47,   115,   452,   455,   452,    41,   204
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
#line 762 "../src/parser/XQParser.y"
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
#line 792 "../src/parser/XQParser.y"
    {
  }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 795 "../src/parser/XQParser.y"
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
#line 818 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 822 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 840 "../src/parser/XQParser.y"
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
#line 859 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, 0, MEMMGR));
  }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 863 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 868 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 875 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 880 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 885 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 893 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 897 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 903 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 908 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 918 "../src/parser/XQParser.y"
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
#line 931 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, false, true, MEMMGR));
  }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 935 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 942 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 947 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 955 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 959 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 967 "../src/parser/XQParser.y"
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
#line 994 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 998 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 1005 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 1011 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 1016 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 1021 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1030 "../src/parser/XQParser.y"
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
#line 1054 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1058 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1065 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1070 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1075 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 1080 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1091 "../src/parser/XQParser.y"
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
#line 1109 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1113 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1120 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1125 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 1133 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 1158 "../src/parser/XQParser.y"
    {
  }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1161 "../src/parser/XQParser.y"
    {
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1164 "../src/parser/XQParser.y"
    {
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1167 "../src/parser/XQParser.y"
    {
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1170 "../src/parser/XQParser.y"
    {
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1173 "../src/parser/XQParser.y"
    {
  }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1176 "../src/parser/XQParser.y"
    {
  }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1179 "../src/parser/XQParser.y"
    {
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1182 "../src/parser/XQParser.y"
    {
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1185 "../src/parser/XQParser.y"
    {
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1188 "../src/parser/XQParser.y"
    {
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1191 "../src/parser/XQParser.y"
    {
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1194 "../src/parser/XQParser.y"
    {
  }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1197 "../src/parser/XQParser.y"
    {
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1200 "../src/parser/XQParser.y"
    {
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1203 "../src/parser/XQParser.y"
    {
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1206 "../src/parser/XQParser.y"
    {
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1209 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1219 "../src/parser/XQParser.y"
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
#line 1231 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1234 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1242 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1247 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1252 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1260 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1268 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1279 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1289 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1293 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1300 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1309 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1313 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1318 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1328 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1332 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1337 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1342 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1371 "../src/parser/XQParser.y"
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
#line 1389 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1393 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1398 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1407 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1416 "../src/parser/XQParser.y"
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
#line 1436 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1440 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1445 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1453 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1458 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1462 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1469 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1473 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1481 "../src/parser/XQParser.y"
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
#line 1494 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1498 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1508 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1512 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1520 "../src/parser/XQParser.y"
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
#line 1538 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1542 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1549 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1554 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1559 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1567 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1573 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1581 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1589 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1596 "../src/parser/XQParser.y"
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
#line 1610 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1614 "../src/parser/XQParser.y"
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
#line 1628 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1637 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1644 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1648 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1655 "../src/parser/XQParser.y"
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
#line 1690 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1694 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1699 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1705 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1714 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1718 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1725 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1729 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1736 "../src/parser/XQParser.y"
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
#line 1754 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), 0, 0, MEMMGR));
  }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1758 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1765 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1770 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->seqType = (yyvsp[(3) - (3)].sequenceType);
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1778 "../src/parser/XQParser.y"
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
#line 1796 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1800 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1808 "../src/parser/XQParser.y"
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
#line 1830 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1834 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1841 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1849 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1858 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1866 "../src/parser/XQParser.y"
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
#line 1903 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1907 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1914 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1921 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1930 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1939 "../src/parser/XQParser.y"
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
#line 1966 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1970 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1977 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1989 "../src/parser/XQParser.y"
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
#line 2015 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 2019 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 2026 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 2036 "../src/parser/XQParser.y"
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
#line 2048 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2052 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 2057 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2066 "../src/parser/XQParser.y"
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
#line 2079 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 2083 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 2088 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2097 "../src/parser/XQParser.y"
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
#line 2111 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 2115 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2128 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2133 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 2145 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2149 "../src/parser/XQParser.y"
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
#line 2157 "../src/parser/XQParser.y"
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
#line 2170 "../src/parser/XQParser.y"
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
#line 2178 "../src/parser/XQParser.y"
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
#line 2191 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 2198 "../src/parser/XQParser.y"
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
#line 2237 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 2241 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2245 "../src/parser/XQParser.y"
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
#line 2263 "../src/parser/XQParser.y"
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
#line 2281 "../src/parser/XQParser.y"
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
#line 2291 "../src/parser/XQParser.y"
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
#line 2305 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 2313 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 2319 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 2325 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 2331 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2342 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 2346 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 2376 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 2380 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2384 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2388 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2392 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 2396 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 2402 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 2408 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 2434 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), (yyvsp[(5) - (5)].astNode), NULL, false, true, MEMMGR));
  }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 2438 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 2442 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), NULL, NULL, false, true, MEMMGR));
  }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 2446 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), NULL, (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 2475 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 2479 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 2483 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 2487 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 2491 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 2495 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 2501 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 2507 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 2511 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 2538 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 2542 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 2546 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 2550 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2554 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2558 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2564 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2570 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2589 "../src/parser/XQParser.y"
    {
    if(!XPath2Utils::equals((yyvsp[(3) - (4)].str),sz1_0))
      yyerror((yylsp[(2) - (4)]), "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
  }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2594 "../src/parser/XQParser.y"
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

  case 301:

/* Line 1455 of yacc.c  */
#line 2623 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 2637 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2641 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 2645 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2649 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2653 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 2657 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 2663 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2669 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2673 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 2705 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 2713 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 2718 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 2727 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 2732 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 2741 "../src/parser/XQParser.y"
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

  case 329:

/* Line 1455 of yacc.c  */
#line 2801 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 2809 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 2814 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 2823 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 2828 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 2837 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 2847 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 2851 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 2859 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 2863 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 2871 "../src/parser/XQParser.y"
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

  case 340:

/* Line 1455 of yacc.c  */
#line 2887 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 2896 "../src/parser/XQParser.y"
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

  case 342:

/* Line 1455 of yacc.c  */
#line 2908 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 2916 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 2920 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 2925 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 2934 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 2938 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 2946 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), CONTEXT, &loc);
  }
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 2956 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), CONTEXT, &loc);
  }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 2968 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 2975 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 2979 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 2987 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 2992 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 3002 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),WRAP((yylsp[(6) - (6)]), (yyvsp[(6) - (6)].astNode)),NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 3006 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),WRAP((yylsp[(8) - (8)]), (yyvsp[(8) - (8)].astNode)),(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 3010 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),NULL,NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 3014 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),NULL,(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 3021 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 3025 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 3031 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 3035 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 3043 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 3048 "../src/parser/XQParser.y"
    {
    XQUserFunction::ArgumentSpecs* paramList = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 3058 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQUserFunction::ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 3066 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 3074 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 3087 "../src/parser/XQParser.y"
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

  case 382:

/* Line 1455 of yacc.c  */
#line 3125 "../src/parser/XQParser.y"
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

  case 384:

/* Line 1455 of yacc.c  */
#line 3170 "../src/parser/XQParser.y"
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

  case 385:

/* Line 1455 of yacc.c  */
#line 3183 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 3198 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 3205 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 3213 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 3224 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 3228 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 3238 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 3242 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 3252 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 3259 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 3267 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 3271 "../src/parser/XQParser.y"
    {
    ASTNode *literal = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  X("0"), AnyAtomicType::DECIMAL,
                  MEMMGR));
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(3) - (5)].str), literal, MEMMGR));
  }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 3284 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 3292 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 3297 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 3305 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 3315 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 3322 "../src/parser/XQParser.y"
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

  case 410:

/* Line 1455 of yacc.c  */
#line 3337 "../src/parser/XQParser.y"
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

  case 411:

/* Line 1455 of yacc.c  */
#line 3353 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 3357 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 3361 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 3368 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3377 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 3381 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 3390 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 3398 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 3409 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 3417 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 3428 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR);
  }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 3435 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].caseClauses)->push_back((yyvsp[(2) - (2)].caseClause));
    (yyval.caseClauses)=(yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 3440 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses)=new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back((yyvsp[(1) - (1)].caseClause));
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3448 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 3452 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 3460 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, (yyvsp[(2) - (4)].sequenceType), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 3464 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (7)].str), (yyvsp[(5) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode)));
  }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 3472 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 3480 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == Or::name) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 3494 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == And::name) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 3513 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 3517 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 3520 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 3521 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3525 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 3529 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 3533 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 3537 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 3541 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 3545 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 3549 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 3553 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 3557 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 3561 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 3565 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 3569 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 3578 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 3582 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 3591 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Range(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 3600 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 3604 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 3613 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 3617 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 3621 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 3625 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 3634 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 3638 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 3647 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 3651 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 3660 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQInstanceOf((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 3669 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 3679 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 3688 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 3697 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 3703 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 3724 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 3728 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 3732 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 3740 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 3747 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 3760 "../src/parser/XQParser.y"
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

  case 493:

/* Line 1455 of yacc.c  */
#line 3781 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 3790 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 3796 "../src/parser/XQParser.y"
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

  case 498:

/* Line 1455 of yacc.c  */
#line 3821 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 3835 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 3841 "../src/parser/XQParser.y"
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

  case 505:

/* Line 1455 of yacc.c  */
#line 3863 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 3873 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 3880 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 3889 "../src/parser/XQParser.y"
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

  case 512:

/* Line 1455 of yacc.c  */
#line 3912 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 513:

/* Line 1455 of yacc.c  */
#line 3916 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 3920 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 3924 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 3928 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 3932 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 3936 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 3940 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 3948 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 521:

/* Line 1455 of yacc.c  */
#line 3956 "../src/parser/XQParser.y"
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

  case 522:

/* Line 1455 of yacc.c  */
#line 3973 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 3990 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 525:

/* Line 1455 of yacc.c  */
#line 3994 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 3998 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 4002 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 528:

/* Line 1455 of yacc.c  */
#line 4006 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 529:

/* Line 1455 of yacc.c  */
#line 4014 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 4026 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 4036 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 4048 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 4055 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 4062 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 4075 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 4104 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 4115 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 4119 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 4127 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 4135 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 4145 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 4155 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 4159 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 4166 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 4171 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 4182 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 4191 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 4195 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 4208 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 4214 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 4227 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 4231 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 4240 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 4256 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 582:

/* Line 1455 of yacc.c  */
#line 4260 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 4267 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 4271 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 585:

/* Line 1455 of yacc.c  */
#line 4281 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 586:

/* Line 1455 of yacc.c  */
#line 4285 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 587:

/* Line 1455 of yacc.c  */
#line 4290 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 588:

/* Line 1455 of yacc.c  */
#line 4300 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 4304 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 4308 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 4321 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 4325 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 4330 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 4340 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 4344 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 4348 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 4365 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 4369 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 4374 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 4379 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4386 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                 SchemaSymbols::fgDT_STRING,
                                 (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
    }
  }
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 4399 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(2) - (3)].str), AnyAtomicType::STRING,
                  MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 4412 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 4421 "../src/parser/XQParser.y"
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

  case 607:

/* Line 1455 of yacc.c  */
#line 4441 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 4464 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 4472 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 4480 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 4484 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 4492 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 4496 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 620:

/* Line 1455 of yacc.c  */
#line 4505 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 4512 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 4516 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 623:

/* Line 1455 of yacc.c  */
#line 4524 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 624:

/* Line 1455 of yacc.c  */
#line 4532 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 625:

/* Line 1455 of yacc.c  */
#line 4540 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 626:

/* Line 1455 of yacc.c  */
#line 4547 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(1) - (1)].str), AnyAtomicType::STRING, MEMMGR));
  }
    break;

  case 627:

/* Line 1455 of yacc.c  */
#line 4557 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 628:

/* Line 1455 of yacc.c  */
#line 4564 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 629:

/* Line 1455 of yacc.c  */
#line 4568 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 630:

/* Line 1455 of yacc.c  */
#line 4576 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 631:

/* Line 1455 of yacc.c  */
#line 4586 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 632:

/* Line 1455 of yacc.c  */
#line 4590 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 633:

/* Line 1455 of yacc.c  */
#line 4598 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 634:

/* Line 1455 of yacc.c  */
#line 4602 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 4612 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 4619 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 4628 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 4630 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 4632 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 4634 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4640 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4644 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 656:

/* Line 1455 of yacc.c  */
#line 4679 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 657:

/* Line 1455 of yacc.c  */
#line 4687 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 4691 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 4696 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_SCHEMA_DOCUMENT);
  }
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 4705 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 4713 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 662:

/* Line 1455 of yacc.c  */
#line 4721 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 663:

/* Line 1455 of yacc.c  */
#line 4725 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 664:

/* Line 1455 of yacc.c  */
#line 4729 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 665:

/* Line 1455 of yacc.c  */
#line 4737 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 666:

/* Line 1455 of yacc.c  */
#line 4741 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 667:

/* Line 1455 of yacc.c  */
#line 4745 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 669:

/* Line 1455 of yacc.c  */
#line 4754 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 670:

/* Line 1455 of yacc.c  */
#line 4762 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 672:

/* Line 1455 of yacc.c  */
#line 4775 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 673:

/* Line 1455 of yacc.c  */
#line 4779 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 674:

/* Line 1455 of yacc.c  */
#line 4783 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 675:

/* Line 1455 of yacc.c  */
#line 4787 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 677:

/* Line 1455 of yacc.c  */
#line 4797 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 678:

/* Line 1455 of yacc.c  */
#line 4805 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 4825 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 4837 "../src/parser/XQParser.y"
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

  case 685:

/* Line 1455 of yacc.c  */
#line 4852 "../src/parser/XQParser.y"
    {
}
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 4855 "../src/parser/XQParser.y"
    {
}
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 4861 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 4865 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 4875 "../src/parser/XQParser.y"
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

  case 691:

/* Line 1455 of yacc.c  */
#line 4892 "../src/parser/XQParser.y"
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

  case 693:

/* Line 1455 of yacc.c  */
#line 4908 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 4918 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 698:

/* Line 1455 of yacc.c  */
#line 4928 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 699:

/* Line 1455 of yacc.c  */
#line 4937 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 4942 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 4952 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 703:

/* Line 1455 of yacc.c  */
#line 4956 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 4964 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 4969 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 4978 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 707:

/* Line 1455 of yacc.c  */
#line 4982 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 708:

/* Line 1455 of yacc.c  */
#line 4986 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 709:

/* Line 1455 of yacc.c  */
#line 4990 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 710:

/* Line 1455 of yacc.c  */
#line 4994 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 711:

/* Line 1455 of yacc.c  */
#line 4998 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 713:

/* Line 1455 of yacc.c  */
#line 5008 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 714:

/* Line 1455 of yacc.c  */
#line 5019 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 715:

/* Line 1455 of yacc.c  */
#line 5025 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 716:

/* Line 1455 of yacc.c  */
#line 5031 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 717:

/* Line 1455 of yacc.c  */
#line 5037 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 718:

/* Line 1455 of yacc.c  */
#line 5052 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 719:

/* Line 1455 of yacc.c  */
#line 5056 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 720:

/* Line 1455 of yacc.c  */
#line 5060 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 721:

/* Line 1455 of yacc.c  */
#line 5064 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 5068 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 5072 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 724:

/* Line 1455 of yacc.c  */
#line 5076 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 5080 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5088 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 5092 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 5096 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 5104 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5108 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 5144 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
  }
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 5148 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5152 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5156 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5165 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 5169 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 5177 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 5181 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 5191 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 5195 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 5199 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 5203 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 5207 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 5214 "../src/parser/XQParser.y"
    {
  }
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 5217 "../src/parser/XQParser.y"
    {
  }
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 5224 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 5228 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 5232 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 759:

/* Line 1455 of yacc.c  */
#line 5236 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 760:

/* Line 1455 of yacc.c  */
#line 5246 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 5250 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 762:

/* Line 1455 of yacc.c  */
#line 5254 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 763:

/* Line 1455 of yacc.c  */
#line 5261 "../src/parser/XQParser.y"
    {
  }
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 5264 "../src/parser/XQParser.y"
    {
  }
    break;

  case 765:

/* Line 1455 of yacc.c  */
#line 5272 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 5276 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 5283 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 5287 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5295 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 5299 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 5307 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5315 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 5319 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5327 "../src/parser/XQParser.y"
    {
}
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5334 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5342 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5347 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5352 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5364 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5368 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5372 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5376 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5380 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 5391 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5402 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5406 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5416 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5424 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5431 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5436 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5444 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5453 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5465 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5477 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE,
                  MEMMGR));
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5490 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING,
                  MEMMGR));
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5501 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5510 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5522 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, 0, (yyvsp[(5) - (5)].astNode), 0, MEMMGR));
  }
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5526 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, (yyvsp[(5) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), MEMMGR));
  }
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 5530 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), 0, (yyvsp[(8) - (8)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5535 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), (yyvsp[(8) - (10)].argSpecs), (yyvsp[(10) - (10)].astNode), (yyvsp[(9) - (10)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5540 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), 0, (yyvsp[(6) - (6)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5545 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), (yyvsp[(6) - (8)].argSpecs), (yyvsp[(8) - (8)].astNode), (yyvsp[(7) - (8)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 5553 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 5557 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 5565 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 811:

/* Line 1455 of yacc.c  */
#line 5569 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 5576 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5581 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 5589 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 815:

/* Line 1455 of yacc.c  */
#line 5594 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 816:

/* Line 1455 of yacc.c  */
#line 5603 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 817:

/* Line 1455 of yacc.c  */
#line 5607 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 5611 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5619 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 5623 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 5631 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 5635 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 823:

/* Line 1455 of yacc.c  */
#line 5639 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 824:

/* Line 1455 of yacc.c  */
#line 5643 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 5651 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 5655 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 5659 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 5667 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5672 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5682 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 833:

/* Line 1455 of yacc.c  */
#line 5699 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 5707 "../src/parser/XQParser.y"
    {
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(2) - (4)].argSpecs), (yyvsp[(4) - (4)].astNode), (yyvsp[(3) - (4)].sequenceType), false, false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 5717 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 5722 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (4)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 839:

/* Line 1455 of yacc.c  */
#line 5734 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  }
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 5742 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  }
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 5746 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  }
    break;

  case 842:

/* Line 1455 of yacc.c  */
#line 5753 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  }
    break;

  case 843:

/* Line 1455 of yacc.c  */
#line 5758 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 844:

/* Line 1455 of yacc.c  */
#line 5767 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;



/* Line 1455 of yacc.c  */
#line 12011 "../src/parser/XQParser.cpp"
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
#line 5802 "../src/parser/XQParser.y"


}  // namespace XQParser


