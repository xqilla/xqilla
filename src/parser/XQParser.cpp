
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
#line 386 "../src/parser/XQParser.cpp"

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
#line 1076 "../src/parser/XQParser.cpp"

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
#define YYLAST   8207

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  318
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  340
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1014
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1661

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
    1211,  1213,  1215,  1219,  1223,  1226,  1229,  1231,  1234,  1237,
    1239,  1241,  1244,  1248,  1250,  1258,  1259,  1263,  1264,  1268,
    1271,  1275,  1277,  1283,  1289,  1292,  1296,  1301,  1305,  1307,
    1311,  1317,  1319,  1320,  1322,  1324,  1325,  1328,  1331,  1336,
    1341,  1345,  1347,  1353,  1360,  1363,  1365,  1371,  1375,  1380,
    1388,  1397,  1401,  1403,  1407,  1409,  1413,  1417,  1418,  1423,
    1427,  1431,  1435,  1439,  1443,  1447,  1451,  1455,  1459,  1463,
    1467,  1471,  1473,  1478,  1484,  1486,  1490,  1492,  1496,  1500,
    1502,  1506,  1510,  1514,  1518,  1520,  1524,  1528,  1530,  1534,
    1538,  1540,  1545,  1547,  1552,  1554,  1559,  1561,  1566,  1568,
    1571,  1574,  1576,  1578,  1580,  1582,  1587,  1593,  1599,  1603,
    1608,  1610,  1613,  1618,  1620,  1623,  1625,  1628,  1631,  1633,
    1635,  1639,  1643,  1645,  1647,  1649,  1651,  1653,  1655,  1660,
    1662,  1667,  1670,  1672,  1675,  1678,  1681,  1684,  1687,  1690,
    1693,  1696,  1699,  1701,  1704,  1706,  1709,  1712,  1715,  1718,
    1721,  1723,  1725,  1727,  1729,  1731,  1733,  1735,  1737,  1739,
    1744,  1746,  1748,  1750,  1752,  1754,  1756,  1758,  1760,  1762,
    1764,  1766,  1768,  1770,  1772,  1774,  1777,  1779,  1783,  1786,
    1788,  1793,  1798,  1802,  1807,  1811,  1813,  1815,  1817,  1819,
    1821,  1823,  1825,  1827,  1833,  1844,  1846,  1848,  1849,  1857,
    1865,  1866,  1868,  1872,  1876,  1880,  1884,  1885,  1888,  1891,
    1892,  1895,  1898,  1899,  1902,  1905,  1906,  1909,  1912,  1913,
    1916,  1919,  1922,  1925,  1929,  1930,  1932,  1936,  1938,  1941,
    1943,  1945,  1947,  1949,  1951,  1953,  1958,  1962,  1964,  1968,
    1971,  1975,  1979,  1981,  1985,  1990,  1995,  1999,  2001,  2005,
    2008,  2012,  2015,  2016,  2018,  2019,  2022,  2025,  2029,  2030,
    2032,  2034,  2036,  2038,  2042,  2044,  2046,  2048,  2050,  2052,
    2054,  2056,  2058,  2060,  2062,  2064,  2066,  2068,  2072,  2076,
    2081,  2086,  2090,  2094,  2098,  2103,  2108,  2112,  2117,  2124,
    2126,  2128,  2133,  2135,  2139,  2144,  2151,  2159,  2161,  2163,
    2168,  2170,  2172,  2174,  2176,  2178,  2182,  2183,  2186,  2187,
    2190,  2194,  2196,  2200,  2202,  2207,  2209,  2212,  2214,  2216,
    2219,  2222,  2226,  2228,  2231,  2236,  2240,  2245,  2246,  2248,
    2251,  2253,  2256,  2258,  2259,  2263,  2266,  2270,  2274,  2279,
    2281,  2285,  2289,  2292,  2295,  2298,  2301,  2304,  2306,  2308,
    2310,  2312,  2314,  2317,  2321,  2323,  2325,  2327,  2329,  2331,
    2333,  2335,  2337,  2340,  2343,  2345,  2347,  2350,  2353,  2355,
    2358,  2361,  2364,  2370,  2376,  2379,  2380,  2384,  2387,  2392,
    2397,  2404,  2409,  2413,  2418,  2419,  2422,  2425,  2429,  2431,
    2435,  2438,  2441,  2444,  2446,  2449,  2453,  2457,  2461,  2465,
    2469,  2476,  2483,  2488,  2493,  2498,  2501,  2504,  2507,  2510,
    2513,  2521,  2527,  2533,  2540,  2544,  2546,  2551,  2553,  2555,
    2557,  2559,  2561,  2563,  2569,  2577,  2586,  2597,  2604,  2613,
    2614,  2617,  2620,  2624,  2625,  2628,  2630,  2634,  2636,  2638,
    2640,  2644,  2652,  2656,  2664,  2670,  2680,  2682,  2684,  2686,
    2688,  2692,  2698,  2700,  2702,  2706,  2711,  2715,  2720,  2722,
    2724,  2729,  2735,  2742,  2744,  2748,  2752,  2754,  2756,  2758,
    2760,  2762,  2764,  2766,  2768,  2770,  2772,  2774,  2776,  2778,
    2780,  2782,  2784,  2786,  2788,  2790,  2792,  2794,  2796,  2798,
    2800,  2802,  2804,  2806,  2808,  2810,  2812,  2814,  2816,  2818,
    2820,  2822,  2824,  2826,  2828,  2830,  2832,  2834,  2836,  2838,
    2840,  2842,  2844,  2846,  2848,  2850,  2852,  2854,  2856,  2858,
    2860,  2862,  2864,  2866,  2868,  2870,  2872,  2874,  2876,  2878,
    2880,  2882,  2884,  2886,  2888,  2890,  2892,  2894,  2896,  2898,
    2900,  2902,  2904,  2906,  2908,  2910,  2912,  2914,  2916,  2918,
    2920,  2922,  2924,  2926,  2928,  2930,  2932,  2934,  2936,  2938,
    2940,  2942,  2944,  2946,  2948,  2950,  2952,  2954,  2956,  2958,
    2960,  2962,  2964,  2966,  2968,  2970,  2972,  2974,  2976,  2978,
    2980,  2982,  2984,  2986,  2988,  2990,  2992,  2994,  2996,  2998,
    3000,  3002,  3004,  3006,  3008,  3010,  3012,  3014,  3016,  3018,
    3020,  3022,  3024,  3026,  3028,  3030,  3032,  3034,  3036,  3038,
    3040,  3042,  3044,  3046,  3048,  3050,  3052,  3054,  3056,  3058,
    3060,  3062,  3064,  3066,  3068,  3070,  3072,  3074,  3076,  3078,
    3080,  3082,  3084,  3086,  3088
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
     564,    -1,    -1,   326,   121,    -1,   326,   312,    -1,   326,
     313,    -1,    52,    -1,    53,    -1,    54,    -1,   329,   330,
     346,   242,    -1,   252,    -1,   329,   274,    -1,   329,   296,
     564,    -1,   329,   286,    -1,    -1,   330,   331,    -1,   332,
     346,   242,    -1,   251,    -1,   332,   274,    -1,   332,   297,
     454,    -1,   332,   296,   564,    -1,   332,   285,    -1,   332,
     284,    -1,   334,   346,   242,    -1,   251,    -1,   334,   274,
      -1,   334,   297,   454,    -1,   334,   296,   564,    -1,   334,
     285,    -1,   334,   284,    -1,   336,   346,   242,    -1,   257,
      -1,   336,   274,    -1,   336,   297,   454,    -1,   336,   296,
     564,    -1,   338,   242,    -1,   270,    -1,   338,   274,    -1,
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
     297,   454,    -1,   360,   296,   564,    -1,   360,   284,    -1,
     362,   242,    -1,   250,   297,   454,    -1,   364,   346,   242,
      -1,   256,   299,   454,    -1,   253,   366,   369,   242,    -1,
     367,    -1,   366,   367,    -1,   368,   346,   242,    -1,   254,
     299,   454,    -1,    -1,   255,   346,   242,    -1,   371,   372,
     373,   242,    -1,   264,    -1,   371,   297,   454,    -1,   371,
     302,   345,    -1,   371,   303,   345,    -1,    -1,   265,   346,
     242,    -1,    -1,   266,   346,   242,    -1,   375,   346,   242,
     346,    -1,   257,    -1,   375,   274,    -1,   375,   297,   454,
      -1,   375,   296,   564,    -1,   377,   346,   242,    -1,   258,
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
     231,    40,   633,    33,   399,    41,    -1,   633,    -1,   523,
      -1,   521,    -1,   523,    -1,   401,    -1,   396,   401,    -1,
     397,    36,   401,    -1,   397,    30,   401,    -1,   400,    36,
     401,    -1,   400,    30,   401,    -1,   402,   403,    -1,   516,
      -1,    70,    19,   516,    -1,    55,    19,   516,    -1,    20,
     516,    -1,    -1,   403,    21,   454,    22,    -1,   420,   405,
      -1,   420,   406,    -1,   405,    -1,   406,    -1,   407,   453,
      -1,   423,   407,    -1,    -1,   407,   408,   427,    -1,   407,
     426,   427,    -1,   407,   428,   427,    -1,   407,   430,   427,
      -1,   407,   444,   427,    -1,   407,   409,   427,    -1,   407,
     636,   427,    -1,   407,   431,   427,    -1,   429,    -1,   438,
      -1,   439,    -1,   446,    -1,   433,    -1,   434,    -1,   435,
      -1,   178,   410,   657,   448,   452,    -1,   178,   410,   657,
     448,   150,   564,   452,    -1,   178,   410,   657,   448,   173,
      -1,   178,   410,   657,   448,   150,   564,   173,    -1,   190,
      -1,   191,    -1,   420,   412,    -1,   420,   413,    -1,   412,
      -1,   413,    -1,   414,   453,    -1,   423,   414,    -1,    -1,
     414,   408,   427,    -1,   414,   426,   427,    -1,   414,   428,
     427,    -1,   414,   430,   427,    -1,   414,   444,   427,    -1,
     414,   409,   427,    -1,   414,   636,   427,    -1,   414,   431,
     427,    -1,   414,   432,   427,    -1,   420,   416,    -1,   420,
     417,    -1,   416,    -1,   417,    -1,   418,   453,    -1,   423,
     418,    -1,    -1,   418,   425,   427,    -1,   418,   426,   427,
      -1,   418,   428,   427,    -1,   418,   430,   427,    -1,   418,
     444,   427,    -1,   418,   447,   427,    -1,   418,   636,   427,
      -1,   418,   431,   427,    -1,   420,   421,    -1,   420,   422,
      -1,   421,    -1,   422,    -1,   184,   185,   124,   427,    -1,
     184,   185,   124,   174,   124,   427,    -1,   424,   453,    -1,
     423,   424,    -1,   188,   171,   634,    37,   585,   427,    -1,
      -1,   424,   425,   427,    -1,   424,   426,   427,    -1,   424,
     428,   427,    -1,   424,   430,   427,    -1,   424,   444,   427,
      -1,   424,   447,   427,    -1,   424,   636,   427,    -1,   424,
     431,   427,    -1,   424,   432,   427,    -1,   429,    -1,   438,
      -1,   439,    -1,   446,    -1,   433,    -1,   434,    -1,   620,
      -1,   435,    -1,   440,    -1,   443,    -1,    50,    -1,   178,
     171,   634,    37,   585,    -1,   178,    64,   169,    -1,   178,
      64,   170,    -1,   178,   181,   189,   171,   585,    -1,   178,
     181,   410,   171,   585,    -1,   178,   183,   656,   124,    -1,
     178,    65,   603,    -1,   178,   180,   119,    -1,   178,   180,
     120,    -1,   178,   181,   136,   140,   141,    -1,   178,   181,
     136,   140,   142,    -1,   178,   182,   436,    33,   437,    -1,
     169,    -1,   175,    -1,   176,    -1,   177,    -1,   178,   181,
     143,   585,    -1,   178,    66,   585,    -1,   186,   187,   442,
     585,   441,    -1,   186,   187,   585,   441,    -1,    -1,   113,
     585,    -1,   441,    33,   585,    -1,   171,   634,    37,    -1,
     181,   189,   171,    -1,   186,   188,   171,   634,    37,   585,
     441,    -1,   186,   188,   585,   441,    -1,   178,   125,     9,
     524,   563,   445,    -1,    10,   455,    -1,   173,    -1,   178,
     179,   169,    -1,   178,   179,   170,    -1,   178,   449,   410,
     657,   448,   452,    -1,   178,   449,   410,   657,   448,   150,
     564,   452,    -1,   178,   449,   410,   657,   448,   173,    -1,
     178,   449,   410,   657,   448,   150,   564,   173,    -1,    40,
      41,    -1,    40,   450,    41,    -1,    -1,   229,    -1,   450,
      33,   451,    -1,   451,    -1,     9,   524,   563,    -1,    48,
     454,    49,    -1,   454,    -1,   454,    33,   455,    -1,   455,
      -1,   456,    -1,   474,    -1,   477,    -1,   481,    -1,   621,
      -1,   623,    -1,   626,    -1,   625,    -1,   627,    -1,   482,
      -1,   642,    -1,   643,    -1,   457,   130,   455,    -1,   458,
     467,   468,    -1,   458,   467,    -1,   458,   468,    -1,   458,
      -1,   458,   459,    -1,   458,   464,    -1,   459,    -1,   464,
      -1,   131,   460,    -1,   460,    33,   461,    -1,   461,    -1,
       9,   524,   563,   462,   463,   132,   455,    -1,    -1,   113,
       9,   524,    -1,    -1,   192,     9,   524,    -1,   133,   465,
      -1,   465,    33,   466,    -1,   466,    -1,     9,   524,   563,
      10,   455,    -1,   192,     9,   524,    10,   455,    -1,   134,
     455,    -1,   136,   135,   469,    -1,   137,   136,   135,   469,
      -1,   469,    33,   470,    -1,   470,    -1,   471,   472,   473,
      -1,   471,   472,   473,   143,   585,    -1,   455,    -1,    -1,
     138,    -1,   139,    -1,    -1,   140,   141,    -1,   140,   142,
      -1,   144,   475,   146,   455,    -1,   145,   475,   146,   455,
      -1,   475,    33,   476,    -1,   476,    -1,     9,   524,   563,
     132,   455,    -1,   147,    40,   454,    41,   478,   479,    -1,
     478,   480,    -1,   480,    -1,   181,     9,   524,   130,   455,
      -1,   181,   130,   455,    -1,   148,   564,   130,   455,    -1,
     148,     9,   524,   150,   564,   130,   455,    -1,   151,    40,
     454,    41,   152,   455,   153,   455,    -1,   482,   154,   483,
      -1,   483,    -1,   483,   155,   484,    -1,   484,    -1,   486,
      37,   486,    -1,   486,    13,   486,    -1,    -1,   486,    24,
     485,   486,    -1,   486,    14,   486,    -1,   486,    15,   486,
      -1,   486,    16,   486,    -1,   486,   107,   486,    -1,   486,
     108,   486,    -1,   486,   109,   486,    -1,   486,   110,   486,
      -1,   486,   111,   486,    -1,   486,   112,   486,    -1,   486,
     168,   486,    -1,   486,    17,   486,    -1,   486,    18,   486,
      -1,   486,    -1,   487,   193,    62,   586,    -1,   487,   193,
      62,   586,   619,    -1,   487,    -1,   488,   159,   488,    -1,
     488,    -1,   488,    34,   489,    -1,   488,    35,   489,    -1,
     489,    -1,   489,    11,   490,    -1,   489,   160,   490,    -1,
     489,    69,   490,    -1,   489,   161,   490,    -1,   490,    -1,
     490,    12,   491,    -1,   490,   162,   491,    -1,   491,    -1,
     491,   163,   492,    -1,   491,   164,   492,    -1,   492,    -1,
     493,   156,   157,   564,    -1,   493,    -1,   494,   167,   150,
     564,    -1,   494,    -1,   495,   158,   150,   561,    -1,   495,
      -1,   496,   166,   150,   561,    -1,   496,    -1,    35,   496,
      -1,    34,   496,    -1,   497,    -1,   498,    -1,   503,    -1,
     499,    -1,   165,    48,   454,    49,    -1,   165,    67,    48,
     454,    49,    -1,   165,    68,    48,   454,    49,    -1,   500,
      48,    49,    -1,   500,    48,   454,    49,    -1,   501,    -1,
     500,   501,    -1,    32,   537,   656,   502,    -1,   129,    -1,
     104,   129,    -1,   504,    -1,   504,   505,    -1,    30,   505,
      -1,   505,    -1,    36,    -1,   505,    36,   506,    -1,   505,
      30,   506,    -1,   506,    -1,   507,    -1,   519,    -1,   508,
      -1,   509,    -1,   510,    -1,   508,    21,   454,    22,    -1,
     513,    -1,   509,    21,   454,    22,    -1,   511,   516,    -1,
     512,    -1,    70,    19,    -1,    71,    19,    -1,    55,    19,
      -1,    72,    19,    -1,    73,    19,    -1,    74,    19,    -1,
      75,    19,    -1,   171,    19,    -1,    20,   516,    -1,   516,
      -1,   514,   516,    -1,   515,    -1,    76,    19,    -1,    77,
      19,    -1,    78,    19,    -1,    79,    19,    -1,    80,    19,
      -1,    39,    -1,   568,    -1,   517,    -1,   635,    -1,   518,
      -1,    11,    -1,   126,    -1,   127,    -1,   520,    -1,   519,
      21,   454,    22,    -1,   650,    -1,   521,    -1,   523,    -1,
     525,    -1,   526,    -1,   529,    -1,   532,    -1,   527,    -1,
     528,    -1,   647,    -1,   522,    -1,   633,    -1,   630,    -1,
     631,    -1,   632,    -1,     9,   524,    -1,   656,    -1,    40,
     454,    41,    -1,    40,    41,    -1,    38,    -1,   119,    48,
     454,    49,    -1,   120,    48,   454,    49,    -1,   657,    40,
      41,    -1,   657,    40,   530,    41,    -1,   530,    33,   531,
      -1,   531,    -1,   455,    -1,    23,    -1,   533,    -1,   549,
      -1,   534,    -1,   545,    -1,   547,    -1,    24,   535,   536,
     537,    42,    -1,    24,   535,   536,   537,    25,   544,    31,
     535,   537,    26,    -1,   121,    -1,   122,    -1,    -1,   536,
     104,   121,   537,    43,   537,   538,    -1,   536,   104,   122,
     537,    43,   537,   539,    -1,    -1,   104,    -1,    44,   540,
      45,    -1,    46,   542,    47,    -1,    44,   541,    45,    -1,
      46,   543,    47,    -1,    -1,   540,   452,    -1,   540,   114,
      -1,    -1,   541,   452,    -1,   541,   114,    -1,    -1,   542,
     452,    -1,   542,   115,    -1,    -1,   543,   452,    -1,   543,
     115,    -1,    -1,   544,   533,    -1,   544,   452,    -1,   544,
     117,    -1,   544,   116,    -1,    28,   546,    29,    -1,    -1,
     106,    -1,    27,   128,   548,    -1,   105,    -1,   104,   105,
      -1,   550,    -1,   551,    -1,   554,    -1,   556,    -1,   557,
      -1,   558,    -1,    81,    48,   454,    49,    -1,   189,   552,
     553,    -1,   123,    -1,    48,   454,    49,    -1,    48,    49,
      -1,    48,   454,    49,    -1,    55,   555,   553,    -1,   123,
      -1,    48,   454,    49,    -1,    62,    48,   454,    49,    -1,
      56,    48,   454,    49,    -1,    59,   559,   560,    -1,   123,
      -1,    48,   454,    49,    -1,    48,    49,    -1,    48,   454,
      49,    -1,   567,   562,    -1,    -1,    23,    -1,    -1,   150,
     564,    -1,   566,   565,    -1,    63,    40,    41,    -1,    -1,
      11,    -1,    34,    -1,    23,    -1,   567,    -1,   172,    40,
      41,    -1,   568,    -1,   651,    -1,   655,    -1,   635,    -1,
     570,    -1,   578,    -1,   574,    -1,   580,    -1,   576,    -1,
     573,    -1,   572,    -1,   571,    -1,   569,    -1,    58,    40,
      41,    -1,    57,    40,    41,    -1,    57,    40,   578,    41,
      -1,    57,    40,   580,    41,    -1,    62,    40,    41,    -1,
      56,    40,    41,    -1,    59,    40,    41,    -1,    59,    40,
     634,    41,    -1,    59,    40,   124,    41,    -1,    55,    40,
      41,    -1,    55,    40,   575,    41,    -1,    55,    40,   575,
      33,   584,    41,    -1,   582,    -1,    11,    -1,    60,    40,
     577,    41,    -1,   582,    -1,   189,    40,    41,    -1,   189,
      40,   579,    41,    -1,   189,    40,   579,    33,   584,    41,
      -1,   189,    40,   579,    33,   584,    23,    41,    -1,   583,
      -1,    11,    -1,    61,    40,   581,    41,    -1,   583,    -1,
     635,    -1,   635,    -1,   635,    -1,   124,    -1,   589,   588,
     587,    -1,    -1,   194,   487,    -1,    -1,   588,   600,    -1,
     589,   239,   590,    -1,   590,    -1,   590,   240,   591,    -1,
     591,    -1,   591,    82,   132,   592,    -1,   592,    -1,   241,
     593,    -1,   593,    -1,   594,    -1,   594,   603,    -1,   595,
     598,    -1,    40,   586,    41,    -1,   596,    -1,   521,   597,
      -1,    48,   454,    49,   597,    -1,   500,    48,    49,    -1,
     500,    48,   586,    49,    -1,    -1,   206,    -1,   206,    96,
      -1,   207,    -1,   207,   211,    -1,   208,    -1,    -1,   197,
     599,   198,    -1,   209,   488,    -1,   118,   142,   488,    -1,
     118,   100,   488,    -1,   210,   488,   159,   488,    -1,   119,
      -1,   195,   488,   601,    -1,   196,   599,   601,    -1,   199,
     602,    -1,   200,   602,    -1,   113,    98,    -1,   113,    99,
      -1,    94,    95,    -1,   211,    -1,   212,    -1,   213,    -1,
     214,    -1,   215,    -1,    83,   604,    -1,   603,    83,   604,
      -1,   616,    -1,   617,    -1,   608,    -1,   607,    -1,   605,
      -1,   606,    -1,   611,    -1,   618,    -1,   149,    86,    -1,
     149,    85,    -1,   201,    -1,   202,    -1,    87,    86,    -1,
      87,    85,    -1,    90,    -1,    84,    90,    -1,    91,   610,
      -1,    91,   181,    -1,    91,    40,   610,   609,    41,    -1,
      91,    40,   181,   609,    41,    -1,    84,    91,    -1,    -1,
     609,    33,   610,    -1,   113,   585,    -1,   113,   585,   203,
     633,    -1,   113,   585,   599,   204,    -1,   113,   585,   203,
     633,   599,   204,    -1,    92,   211,   613,   612,    -1,    84,
      92,   211,    -1,    92,   211,   181,   612,    -1,    -1,   612,
     615,    -1,   113,   585,    -1,    40,   614,    41,    -1,   633,
      -1,   614,    33,   633,    -1,   162,   613,    -1,   164,   613,
      -1,   205,   633,    -1,    93,    -1,    84,    93,    -1,   183,
     656,   124,    -1,    89,    95,   490,    -1,   178,   222,    68,
      -1,   178,   222,    67,    -1,   178,   222,   101,    -1,   622,
     455,   150,   218,   228,   455,    -1,   622,   455,   150,   226,
     228,   455,    -1,   622,   455,   228,   455,    -1,   622,   455,
     221,   455,    -1,   622,   455,   220,   455,    -1,   219,    58,
      -1,   219,   224,    -1,   624,   455,    -1,   227,    58,    -1,
     227,   224,    -1,   216,   103,   157,    58,   455,   223,   455,
      -1,   216,    58,   455,   223,   455,    -1,   225,    58,   455,
     150,   455,    -1,   102,   628,   217,   455,   130,   455,    -1,
     628,    33,   629,    -1,   629,    -1,     9,   524,    10,   455,
      -1,    52,    -1,    53,    -1,    54,    -1,   124,    -1,   656,
      -1,   656,    -1,   178,   232,   234,   656,   452,    -1,   178,
     232,   234,   656,   638,   637,   452,    -1,   178,   232,   234,
     656,   639,   233,   394,   452,    -1,   178,   232,   234,   656,
     639,   233,   394,   638,   637,   452,    -1,   178,   232,   639,
     233,   394,   452,    -1,   178,   232,   639,   233,   394,   638,
     637,   452,    -1,    -1,   150,   564,    -1,    40,    41,    -1,
      40,   450,    41,    -1,    -1,   238,   640,    -1,   641,    -1,
     640,    33,   641,    -1,   121,    -1,   312,    -1,   313,    -1,
     235,   232,   656,    -1,   235,   232,   656,   223,    40,   645,
      41,    -1,   236,   237,   455,    -1,   236,   237,   455,   223,
      40,   645,    41,    -1,   236,   237,   455,   238,   644,    -1,
     236,   237,   455,   238,   644,   223,    40,   645,    41,    -1,
     656,    -1,   312,    -1,   314,    -1,   646,    -1,   645,    33,
     646,    -1,     9,   524,   563,    10,   455,    -1,   648,    -1,
     649,    -1,   657,    51,    52,    -1,   191,   448,   563,   452,
      -1,   519,    40,    41,    -1,   519,    40,   530,    41,    -1,
     652,    -1,   653,    -1,   191,    40,    11,    41,    -1,   191,
      40,    41,   150,   564,    -1,   191,    40,   654,    41,   150,
     564,    -1,   564,    -1,   654,    33,   564,    -1,    40,   566,
      41,    -1,   657,    -1,    55,    -1,    56,    -1,    57,    -1,
     189,    -1,   172,    -1,   151,    -1,    58,    -1,    59,    -1,
      60,    -1,    61,    -1,    62,    -1,   147,    -1,    63,    -1,
     191,    -1,   121,    -1,    64,    -1,    65,    -1,    66,    -1,
      67,    -1,    68,    -1,    69,    -1,    70,    -1,    71,    -1,
      72,    -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,
      77,    -1,    78,    -1,    79,    -1,    80,    -1,    81,    -1,
      82,    -1,    85,    -1,    86,    -1,    87,    -1,    88,    -1,
      90,    -1,    91,    -1,    92,    -1,    93,    -1,    94,    -1,
      95,    -1,    96,    -1,    97,    -1,    98,    -1,    99,    -1,
     100,    -1,   101,    -1,   102,    -1,   103,    -1,   107,    -1,
     108,    -1,   109,    -1,   110,    -1,   111,    -1,   112,    -1,
     113,    -1,   125,    -1,   130,    -1,   131,    -1,   132,    -1,
     133,    -1,   134,    -1,   135,    -1,   136,    -1,   137,    -1,
     138,    -1,   139,    -1,   140,    -1,   141,    -1,   142,    -1,
     143,    -1,   144,    -1,   145,    -1,   146,    -1,   148,    -1,
     150,    -1,   152,    -1,   153,    -1,   154,    -1,   155,    -1,
     156,    -1,   157,    -1,   158,    -1,   159,    -1,   160,    -1,
     161,    -1,   162,    -1,   163,    -1,   164,    -1,   165,    -1,
     166,    -1,   167,    -1,   168,    -1,   169,    -1,   170,    -1,
     171,    -1,   173,    -1,   174,    -1,   175,    -1,   176,    -1,
     177,    -1,   178,    -1,   179,    -1,   180,    -1,   181,    -1,
     182,    -1,   183,    -1,   185,    -1,   186,    -1,   187,    -1,
     190,    -1,   192,    -1,    83,    -1,    84,    -1,   193,    -1,
     194,    -1,   195,    -1,   196,    -1,   197,    -1,   198,    -1,
     199,    -1,   200,    -1,   201,    -1,   202,    -1,   203,    -1,
     204,    -1,   205,    -1,   206,    -1,   207,    -1,   208,    -1,
     209,    -1,   210,    -1,   211,    -1,   212,    -1,   213,    -1,
     214,    -1,   215,    -1,   216,    -1,   217,    -1,   218,    -1,
     219,    -1,   220,    -1,   221,    -1,   222,    -1,   223,    -1,
     224,    -1,   225,    -1,   226,    -1,   227,    -1,   228,    -1,
     229,    -1,   119,    -1,   120,    -1,   230,    -1,   231,    -1,
     232,    -1,   233,    -1,   234,    -1,   235,    -1,   236,    -1,
     237,    -1,   238,    -1,   239,    -1,   240,    -1,   241,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   746,   746,   748,   749,   750,   751,   753,   760,   790,
     793,   814,   816,   820,   827,   829,   830,   831,   832,   833,
     834,   838,   857,   861,   866,   873,   878,   883,   892,   895,
     901,   906,   913,   913,   913,   916,   929,   933,   940,   945,
     954,   957,   965,   992,   996,  1003,  1009,  1014,  1019,  1028,
    1052,  1056,  1063,  1068,  1073,  1078,  1089,  1107,  1111,  1118,
    1123,  1131,  1156,  1159,  1162,  1165,  1168,  1171,  1174,  1177,
    1180,  1183,  1186,  1189,  1192,  1195,  1198,  1201,  1204,  1207,
    1213,  1214,  1215,  1216,  1217,  1229,  1232,  1237,  1240,  1245,
    1250,  1258,  1266,  1277,  1288,  1291,  1298,  1308,  1311,  1316,
    1327,  1330,  1335,  1340,  1348,  1349,  1350,  1351,  1352,  1353,
    1354,  1355,  1356,  1357,  1358,  1359,  1360,  1361,  1362,  1363,
    1364,  1365,  1369,  1387,  1391,  1396,  1405,  1411,  1411,  1414,
    1434,  1438,  1443,  1451,  1456,  1460,  1468,  1471,  1479,  1492,
    1496,  1507,  1510,  1518,  1536,  1540,  1547,  1552,  1557,  1565,
    1571,  1579,  1587,  1594,  1608,  1612,  1626,  1635,  1643,  1646,
    1653,  1688,  1692,  1697,  1703,  1713,  1716,  1724,  1727,  1734,
    1752,  1756,  1763,  1768,  1776,  1794,  1798,  1806,  1828,  1832,
    1839,  1847,  1856,  1864,  1901,  1905,  1912,  1919,  1928,  1937,
    1964,  1968,  1975,  1987,  2013,  2017,  2024,  2034,  2046,  2050,
    2055,  2064,  2077,  2081,  2086,  2095,  2109,  2113,  2126,  2131,
    2143,  2147,  2155,  2168,  2176,  2189,  2196,  2210,  2210,  2213,
    2213,  2235,  2239,  2243,  2261,  2279,  2289,  2303,  2311,  2317,
    2323,  2329,  2341,  2344,  2358,  2359,  2360,  2361,  2365,  2368,
    2372,  2374,  2378,  2382,  2386,  2390,  2394,  2400,  2406,  2420,
    2421,  2422,  2423,  2424,  2425,  2426,  2432,  2436,  2440,  2444,
    2450,  2450,  2457,  2458,  2459,  2460,  2464,  2467,  2471,  2473,
    2477,  2481,  2485,  2489,  2493,  2499,  2505,  2509,  2520,  2521,
    2522,  2523,  2527,  2530,  2534,  2536,  2540,  2544,  2548,  2552,
    2556,  2562,  2568,  2579,  2580,  2581,  2582,  2587,  2592,  2614,
    2617,  2621,  2633,  2635,  2639,  2643,  2647,  2651,  2655,  2661,
    2667,  2671,  2685,  2686,  2687,  2688,  2689,  2690,  2691,  2692,
    2696,  2696,  2699,  2703,  2711,  2716,  2725,  2730,  2739,  2799,
    2807,  2812,  2821,  2826,  2835,  2845,  2849,  2857,  2861,  2869,
    2885,  2894,  2906,  2915,  2918,  2923,  2932,  2936,  2944,  2954,
    2966,  2973,  2977,  2985,  2990,  3000,  3004,  3008,  3012,  3019,
    3023,  3030,  3033,  3041,  3046,  3056,  3064,  3072,  3085,  3100,
    3107,  3108,  3109,  3110,  3111,  3112,  3113,  3114,  3115,  3116,
    3117,  3118,  3123,  3134,  3138,  3142,  3146,  3150,  3156,  3162,
    3163,  3169,  3176,  3180,  3184,  3196,  3199,  3210,  3213,  3223,
    3230,  3234,  3238,  3242,  3255,  3263,  3268,  3276,  3280,  3286,
    3293,  3308,  3325,  3328,  3332,  3340,  3348,  3352,  3361,  3369,
    3380,  3384,  3388,  3399,  3406,  3411,  3419,  3423,  3431,  3435,
    3443,  3451,  3460,  3465,  3474,  3484,  3488,  3492,  3492,  3496,
    3500,  3504,  3508,  3512,  3516,  3520,  3524,  3528,  3532,  3536,
    3540,  3544,  3549,  3553,  3557,  3562,  3566,  3571,  3575,  3579,
    3584,  3588,  3592,  3596,  3600,  3605,  3609,  3613,  3618,  3622,
    3626,  3631,  3635,  3640,  3645,  3650,  3654,  3659,  3663,  3668,
    3674,  3680,  3685,  3686,  3687,  3695,  3699,  3703,  3711,  3718,
    3727,  3727,  3731,  3751,  3752,  3760,  3761,  3767,  3788,  3792,
    3806,  3812,  3825,  3829,  3829,  3833,  3834,  3843,  3844,  3850,
    3851,  3860,  3872,  3883,  3887,  3891,  3895,  3899,  3903,  3907,
    3911,  3919,  3927,  3944,  3952,  3961,  3965,  3969,  3973,  3977,
    3985,  3997,  4002,  4007,  4014,  4019,  4026,  4033,  4045,  4046,
    4050,  4056,  4057,  4058,  4059,  4060,  4061,  4062,  4063,  4064,
    4068,  4068,  4071,  4071,  4071,  4075,  4082,  4086,  4090,  4098,
    4106,  4116,  4126,  4130,  4137,  4142,  4152,  4153,  4162,  4166,
    4175,  4175,  4175,  4179,  4185,  4194,  4194,  4199,  4202,  4211,
    4222,  4222,  4227,  4231,  4238,  4242,  4253,  4256,  4261,  4272,
    4275,  4279,  4293,  4296,  4301,  4312,  4315,  4319,  4337,  4340,
    4345,  4350,  4357,  4370,  4384,  4387,  4392,  4411,  4412,  4425,
    4426,  4427,  4428,  4429,  4430,  4435,  4443,  4451,  4455,  4463,
    4467,  4476,  4483,  4487,  4495,  4503,  4511,  4518,  4528,  4535,
    4539,  4547,  4558,  4561,  4570,  4573,  4583,  4590,  4600,  4601,
    4603,  4605,  4611,  4615,  4619,  4620,  4621,  4625,  4637,  4638,
    4639,  4640,  4641,  4642,  4643,  4644,  4645,  4650,  4658,  4662,
    4667,  4676,  4684,  4692,  4696,  4700,  4708,  4712,  4716,  4724,
    4725,  4733,  4741,  4746,  4750,  4754,  4758,  4767,  4768,  4776,
    4783,  4786,  4789,  4792,  4796,  4808,  4824,  4826,  4833,  4836,
    4845,  4857,  4862,  4874,  4879,  4883,  4888,  4893,  4898,  4899,
    4908,  4913,  4917,  4923,  4927,  4935,  4940,  4950,  4953,  4957,
    4961,  4965,  4969,  4977,  4979,  4990,  4996,  5002,  5008,  5023,
    5027,  5031,  5035,  5039,  5043,  5047,  5051,  5059,  5063,  5067,
    5075,  5079,  5087,  5088,  5100,  5101,  5102,  5103,  5104,  5105,
    5106,  5107,  5115,  5119,  5123,  5127,  5136,  5140,  5148,  5152,
    5162,  5166,  5170,  5174,  5178,  5186,  5188,  5195,  5199,  5203,
    5207,  5217,  5221,  5225,  5233,  5235,  5243,  5247,  5254,  5258,
    5266,  5270,  5278,  5286,  5290,  5298,  5305,  5313,  5318,  5323,
    5335,  5339,  5343,  5347,  5351,  5357,  5357,  5362,  5368,  5368,
    5373,  5377,  5387,  5395,  5402,  5407,  5415,  5424,  5436,  5448,
    5461,  5472,  5481,  5493,  5497,  5501,  5506,  5511,  5516,  5525,
    5528,  5536,  5540,  5548,  5552,  5560,  5565,  5574,  5578,  5582,
    5590,  5594,  5602,  5606,  5610,  5614,  5622,  5626,  5630,  5638,
    5643,  5653,  5666,  5666,  5670,  5678,  5688,  5693,  5701,  5701,
    5705,  5713,  5717,  5724,  5729,  5738,  5747,  5747,  5747,  5747,
    5747,  5747,  5747,  5747,  5748,  5748,  5748,  5748,  5748,  5748,
    5749,  5753,  5753,  5753,  5753,  5753,  5753,  5753,  5753,  5753,
    5753,  5754,  5754,  5754,  5754,  5754,  5754,  5754,  5755,  5755,
    5755,  5755,  5755,  5755,  5755,  5755,  5756,  5756,  5756,  5756,
    5756,  5756,  5756,  5756,  5756,  5756,  5756,  5757,  5757,  5757,
    5757,  5757,  5757,  5757,  5757,  5757,  5757,  5757,  5757,  5758,
    5758,  5758,  5758,  5758,  5758,  5758,  5758,  5758,  5758,  5759,
    5759,  5759,  5759,  5759,  5759,  5759,  5759,  5759,  5759,  5759,
    5759,  5760,  5760,  5760,  5760,  5760,  5760,  5760,  5760,  5760,
    5760,  5760,  5760,  5761,  5761,  5761,  5761,  5761,  5761,  5761,
    5761,  5761,  5762,  5762,  5762,  5762,  5762,  5762,  5762,  5762,
    5763,  5763,  5763,  5763,  5763,  5763,  5763,  5763,  5763,  5763,
    5763,  5764,  5764,  5764,  5764,  5764,  5764,  5764,  5764,  5764,
    5765,  5765,  5765,  5765,  5765,  5765,  5765,  5765,  5765,  5765,
    5766,  5766,  5766,  5766,  5766,  5766,  5766,  5766,  5766,  5766,
    5766,  5767,  5767,  5767,  5767,  5767,  5767,  5767,  5767,  5767,
    5767,  5767,  5768,  5768,  5768
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
  "FlworExprForLetList", "ForClause", "ForBindingList", "ForBinding",
  "PositionalVar", "FTScoreVar", "LetClause", "LetBindingList",
  "LetBinding", "WhereClause", "OrderByClause", "OrderSpecList",
  "OrderSpec", "OrderExpr", "OrderDirection", "EmptyHandling",
  "QuantifiedExpr", "QuantifyBindingList", "QuantifyBinding",
  "TypeswitchExpr", "CaseClauseList", "DefaultCase", "CaseClause",
  "IfExpr", "OrExpr", "AndExpr", "ComparisonExpr", "$@1", "FTContainsExpr",
  "RangeExpr", "AdditiveExpr", "MultiplicativeExpr", "UnionExpr",
  "IntersectExceptExpr", "InstanceofExpr", "TreatExpr", "CastableExpr",
  "CastExpr", "UnaryExpr", "ValueExpr", "ValidateExpr", "ExtensionExpr",
  "PragmaList", "Pragma", "PragmaContents", "PathExpr", "LeadingSlash",
  "RelativePathExpr", "StepExpr", "AxisStep", "ForwardStepPredicateList",
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
     455,   455,   456,   457,   457,   457,   457,   458,   458,   458,
     458,   459,   460,   460,   461,   462,   462,   463,   463,   464,
     465,   465,   466,   466,   467,   468,   468,   469,   469,   470,
     470,   471,   472,   472,   472,   473,   473,   473,   474,   474,
     475,   475,   476,   477,   478,   478,   479,   479,   480,   480,
     481,   482,   482,   483,   483,   484,   484,   485,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   486,   486,   486,   487,   487,   488,   488,   488,
     489,   489,   489,   489,   489,   490,   490,   490,   491,   491,
     491,   492,   492,   493,   493,   494,   494,   495,   495,   496,
     496,   496,   497,   497,   497,   498,   498,   498,   499,   499,
     500,   500,   501,   502,   502,   503,   503,   503,   503,   504,
     505,   505,   505,   506,   506,   507,   507,   508,   508,   509,
     509,   510,   510,   511,   511,   511,   511,   511,   511,   511,
     511,   512,   512,   513,   513,   514,   514,   514,   514,   514,
     515,   516,   516,   517,   517,   518,   518,   518,   519,   519,
     519,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     521,   521,   522,   522,   522,   523,   524,   525,   525,   526,
     527,   528,   529,   529,   530,   530,   531,   531,   532,   532,
     533,   533,   533,   534,   534,   535,   535,   536,   536,   536,
     537,   537,   538,   538,   539,   539,   540,   540,   540,   541,
     541,   541,   542,   542,   542,   543,   543,   543,   544,   544,
     544,   544,   544,   545,   546,   546,   547,   548,   548,   549,
     549,   549,   549,   549,   549,   550,   551,   552,   552,   553,
     553,   554,   555,   555,   556,   557,   558,   559,   559,   560,
     560,   561,   562,   562,   563,   563,   564,   564,   565,   565,
     565,   565,   566,   566,   566,   566,   566,   567,   568,   568,
     568,   568,   568,   568,   568,   568,   568,   569,   570,   570,
     570,   571,   572,   573,   573,   573,   574,   574,   574,   575,
     575,   576,   577,   578,   578,   578,   578,   579,   579,   580,
     581,   582,   583,   584,   585,   586,   587,   587,   588,   588,
     589,   589,   590,   590,   591,   591,   592,   592,   593,   593,
     594,   594,   594,   595,   595,   596,   596,   597,   597,   597,
     597,   597,   597,   598,   598,   599,   599,   599,   599,   600,
     600,   600,   600,   600,   600,   600,   600,   601,   601,   601,
     602,   602,   603,   603,   604,   604,   604,   604,   604,   604,
     604,   604,   605,   605,   605,   605,   606,   606,   607,   607,
     608,   608,   608,   608,   608,   609,   609,   610,   610,   610,
     610,   611,   611,   611,   612,   612,   613,   613,   614,   614,
     615,   615,   616,   617,   617,   618,   619,   620,   620,   620,
     621,   621,   621,   621,   621,   622,   622,   623,   624,   624,
     625,   625,   626,   627,   628,   628,   629,   630,   631,   632,
     633,   634,   635,   636,   636,   636,   636,   636,   636,   637,
     637,   638,   638,   639,   639,   640,   640,   641,   641,   641,
     642,   642,   643,   643,   643,   643,   644,   644,   644,   645,
     645,   646,   647,   647,   648,   649,   650,   650,   651,   651,
     652,   653,   653,   654,   654,   655,   656,   656,   656,   656,
     656,   656,   656,   656,   656,   656,   656,   656,   656,   656,
     656,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   657,   657,   657
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
       1,     1,     3,     3,     2,     2,     1,     2,     2,     1,
       1,     2,     3,     1,     7,     0,     3,     0,     3,     2,
       3,     1,     5,     5,     2,     3,     4,     3,     1,     3,
       5,     1,     0,     1,     1,     0,     2,     2,     4,     4,
       3,     1,     5,     6,     2,     1,     5,     3,     4,     7,
       8,     3,     1,     3,     1,     3,     3,     0,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     4,     5,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     4,     1,     4,     1,     4,     1,     4,     1,     2,
       2,     1,     1,     1,     1,     4,     5,     5,     3,     4,
       1,     2,     4,     1,     2,     1,     2,     2,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     4,     1,
       4,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     1,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     2,     1,
       4,     4,     3,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     5,    10,     1,     1,     0,     7,     7,
       0,     1,     3,     3,     3,     3,     0,     2,     2,     0,
       2,     2,     0,     2,     2,     0,     2,     2,     0,     2,
       2,     2,     2,     3,     0,     1,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     4,     3,     1,     3,     2,
       3,     3,     1,     3,     4,     4,     3,     1,     3,     2,
       3,     2,     0,     1,     0,     2,     2,     3,     0,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     4,
       4,     3,     3,     3,     4,     4,     3,     4,     6,     1,
       1,     4,     1,     3,     4,     6,     7,     1,     1,     4,
       1,     1,     1,     1,     1,     3,     0,     2,     0,     2,
       3,     1,     3,     1,     4,     1,     2,     1,     1,     2,
       2,     3,     1,     2,     4,     3,     4,     0,     1,     2,
       1,     2,     1,     0,     3,     2,     3,     3,     4,     1,
       3,     3,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     2,     2,     1,     2,
       2,     2,     5,     5,     2,     0,     3,     2,     4,     4,
       6,     4,     3,     4,     0,     2,     2,     3,     1,     3,
       2,     2,     2,     1,     2,     3,     3,     3,     3,     3,
       6,     6,     4,     4,     4,     2,     2,     2,     2,     2,
       7,     5,     5,     6,     3,     1,     4,     1,     1,     1,
       1,     1,     1,     5,     7,     8,    10,     6,     8,     0,
       2,     2,     3,     0,     2,     1,     3,     1,     1,     1,
       3,     7,     3,     7,     5,     9,     1,     1,     1,     1,
       3,     5,     1,     1,     3,     4,     3,     4,     1,     1,
       4,     5,     6,     1,     3,     3,     1,     1,     1,     1,
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
       0,     0,   240,   268,   284,   302,     0,     0,     0,   535,
       0,     0,     0,   604,     0,   580,     0,     0,   499,   559,
     530,     0,   797,   798,   799,   847,   848,   849,   853,   854,
     855,   856,   857,   859,   862,   863,   864,   865,   866,   867,
     868,   869,   870,   871,   872,   873,   874,   875,   876,   877,
     878,   879,   880,   962,   963,   881,   882,   883,   884,   885,
     886,   887,   888,   889,   890,   891,   892,   893,   894,   895,
     896,   897,   898,   899,   900,   901,   902,   903,   904,   905,
    1001,  1002,   861,   800,   906,   536,   537,   907,   908,   909,
     910,   911,   912,   913,   914,   915,   916,   917,   918,   919,
     920,   921,   922,   923,   858,   924,   925,   852,   926,   927,
     928,   929,   930,   931,   932,   933,   934,   935,   936,   937,
     938,   939,   940,   941,   942,   943,   944,   945,   851,   946,
     947,   948,   949,   950,   951,   952,   953,   954,   955,   956,
     957,   958,   959,   850,   960,   860,   961,   964,   965,   966,
     967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
     977,   978,   979,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1014,     2,   367,   369,   370,
       0,   386,   389,   390,   371,   372,   373,   379,   432,   434,
     451,   454,   456,   459,   464,   467,   470,   472,   474,   476,
     478,   481,   482,   484,     0,   490,   483,   495,   498,   502,
     503,   505,   506,   507,     0,   512,   509,     0,   524,   522,
     532,   534,   504,   538,   541,   550,   542,   543,   544,   547,
     548,   545,   546,   568,   570,   571,   572,   569,   609,   610,
     611,   612,   613,   614,   531,   656,   648,   655,   654,   653,
     650,   652,   649,   651,   374,     0,   375,     0,   377,   376,
     378,   552,   553,   554,   551,   533,   380,   381,   549,   832,
     833,   540,   802,   846,     0,     0,     3,   236,   237,     0,
     240,   240,     4,   264,   265,     0,   268,   268,     5,   280,
     281,     0,   284,   284,     6,   302,   295,   296,   302,     0,
      11,    94,     7,     8,    10,     1,   847,   848,   849,   853,
     854,   855,   856,   857,   868,   869,   870,   871,   872,   873,
     874,   875,   876,   877,   878,   879,   897,  1001,  1002,   908,
     910,   921,   922,   858,   852,   939,   945,   850,   860,   987,
     990,   996,   998,  1008,  1009,   555,   556,   846,   847,   848,
     854,   857,   850,   521,   575,   576,   577,     0,   605,     0,
     497,   581,     0,   480,   479,   558,     0,   515,     0,     0,
     622,     0,     0,     0,     0,     0,     0,     0,   627,     0,
       0,     0,     0,     0,   513,   514,   516,   517,   518,   519,
     525,   526,   527,   528,   529,     0,     0,     0,   795,     0,
       0,     0,   391,   393,     0,     0,   399,   401,     0,     0,
     421,     0,     0,     0,     0,     0,     0,   520,     0,     0,
     617,     0,     0,   634,     0,     0,   785,   786,     0,   788,
     789,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     387,   388,   384,   385,     0,     0,     0,     0,     0,     0,
       0,     0,   437,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   491,   496,
       0,     0,     0,     0,   511,   523,     0,     0,     0,   787,
       0,     0,     0,     0,   951,   958,     0,     0,     0,     0,
     249,     0,     0,   253,   254,   255,   250,   251,   320,   321,
       0,   252,   238,     0,   234,   235,   239,   951,     0,     0,
       0,     0,     0,     0,     0,     0,   266,     0,   262,   263,
     267,   951,     0,     0,     0,   312,     0,     0,   316,   317,
     319,   313,   314,     0,   315,     0,   282,   318,     0,   278,
     279,   283,   293,   294,   300,   951,     0,     0,     0,     0,
       0,     0,     0,     0,   299,     0,    14,   100,   580,     0,
     607,   606,   603,     0,   557,   670,   666,     0,   669,   681,
       0,     0,   621,   662,     0,   658,     0,     0,     0,     0,
     657,   663,     0,     0,   801,     0,     0,   626,     0,   672,
       0,   680,   682,   661,     0,     0,     0,     0,     0,     0,
       0,   634,     0,   634,     0,     0,   634,     0,     0,     0,
       0,     0,     0,     0,     0,   678,   673,     0,   677,     0,
     616,     0,   359,     0,   364,     0,     0,     0,     0,     0,
     820,   822,   368,   382,   404,     0,     0,   383,   431,   433,
     436,   439,   440,   441,   449,   450,     0,   435,   442,   443,
     444,   445,   446,   447,   448,     0,   457,   458,   455,   460,
     462,   461,   463,   465,   466,   468,   469,     0,     0,     0,
       0,   488,     0,   501,   500,     0,     0,     0,   567,   836,
     566,     0,   565,     0,     0,     0,     0,   562,     0,   834,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   260,   261,   813,     0,     0,     0,   322,   241,   246,
     242,   243,   244,   248,   245,   247,     0,     0,     0,   269,
     274,   270,   271,   272,   276,   277,   273,   275,     0,     0,
     362,     0,   285,   286,   287,   288,   292,   289,   290,   291,
     361,   361,   303,   304,   305,   306,   310,   311,   307,   308,
     309,    12,    13,     0,    96,    97,     0,   581,     0,   608,
       0,   493,   492,     0,   667,   623,   619,     0,   625,   659,
     660,   665,   664,   628,   629,     0,   671,   679,   624,   615,
       0,   794,     0,   560,   561,   395,   392,     0,     0,   400,
       0,   420,   418,   419,     0,     0,   485,     0,     0,     0,
     674,   618,   634,     0,   360,     0,   859,   851,   860,   635,
     638,   642,   644,   647,   645,   838,   839,   646,     0,   835,
       0,     0,     0,     0,     0,     0,   411,   405,   408,   412,
       0,   438,     0,     0,     0,     0,   707,   452,   688,   691,
     693,   695,   697,   698,   713,   702,   471,   473,   475,   632,
     477,   489,   508,   510,   539,     0,   837,     0,     0,   784,
     783,   782,   563,     0,   297,     0,   324,   325,   684,   340,
       0,     0,   353,   354,   330,   331,     0,     0,     0,     0,
     335,   336,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   343,     0,   343,     0,   329,   778,   777,   779,     0,
       9,    22,    50,    36,    57,    62,    88,    15,    40,    16,
      40,    17,   100,    18,   100,    19,     0,    20,     0,    95,
      93,   123,     0,   130,   139,     0,     0,     0,   170,   175,
     178,   182,   184,   190,   194,   161,   198,   202,   206,   127,
     128,   102,   103,   104,   100,   105,   101,   106,   136,   107,
     141,   108,     0,   110,   100,   109,   118,   165,   111,   100,
     112,   100,   113,   100,   114,   100,   115,   100,   116,   100,
     117,   100,   119,     0,   120,   100,   121,   100,   580,   580,
     598,   573,   494,     0,   683,   620,   630,   796,     0,     0,
     397,     0,     0,     0,     0,     0,   425,     0,   486,   487,
       0,   365,   363,     0,     0,     0,     0,   639,   641,   640,
     636,     0,   791,     0,   792,     0,     0,   827,   828,   824,
     826,     0,   413,   414,   415,   406,     0,     0,   696,     0,
     708,   710,   712,   703,     0,   453,     0,   686,     0,     0,
     699,     0,   700,   633,   631,   564,     0,     0,     0,     0,
     634,     0,     0,   339,     0,     0,     0,   328,   813,   817,
     818,   819,   814,   815,     0,     0,     0,     0,   343,     0,
     342,     0,   349,     0,     0,   748,     0,     0,   773,     0,
       0,   744,   745,     0,   732,   738,   739,   737,   736,   740,
     734,   735,   741,     0,     0,    89,    90,    28,    24,     0,
       0,     0,   100,    37,    39,     0,   100,    51,    55,    54,
       0,     0,     0,    58,     0,     0,     0,    61,    79,    63,
      67,    68,    69,    73,    74,    76,    65,    70,    71,    72,
      75,    77,     0,     0,     0,    87,    99,    98,     0,     0,
       0,   158,   154,   100,     0,     0,    97,     0,     0,     0,
       0,   140,     0,   149,     0,   100,     0,    97,    97,   167,
     171,     0,     0,     0,     0,     0,    97,     0,     0,     0,
      97,     0,    97,    97,     0,    97,     0,     0,    97,    97,
       0,   197,   200,     0,   203,   204,     0,     0,     0,     0,
       0,     0,   668,   793,     0,     0,     0,   402,   403,   422,
       0,     0,     0,   423,   424,     0,     0,   675,   845,   637,
     643,     0,     0,   843,     0,   366,     0,     0,     0,   829,
       0,     0,   407,     0,   409,   701,   707,   705,     0,   709,
     711,     0,   690,     0,     0,   719,     0,     0,     0,     0,
       0,   685,   689,   692,     0,     0,     0,     0,     0,   780,
     781,   298,   301,     0,   323,   332,   333,   326,   327,   337,
     338,   334,     0,   803,   809,     0,     0,     0,   214,   213,
     847,   868,  1003,  1004,     0,   209,     0,   212,   210,   221,
     232,   228,     0,   258,   256,   346,   347,   341,   344,     0,
       0,   749,   754,     0,   774,   747,   746,     0,     0,   751,
     750,     0,   743,   742,     0,   772,   733,     0,    91,    92,
      26,    23,    27,    32,    33,    34,    25,    43,    41,   100,
       0,    38,     0,    53,    52,    49,    60,    59,    56,    83,
      84,    80,    81,    82,    64,    85,    66,    78,   126,   150,
       0,   100,   155,     0,     0,   152,   124,   125,   122,   133,
     134,   135,   132,   131,   129,   144,   137,   100,   138,   142,
     151,     0,   162,   163,   164,   100,     0,   173,   172,   100,
     176,   174,   179,   180,   177,   181,   185,   187,   188,   186,
     183,   191,   192,   189,   195,   196,   193,   199,   201,   207,
     205,   580,   580,     0,   602,   601,   600,   599,   396,     0,
       0,     0,     0,     0,     0,     0,   676,   840,     0,     0,
       0,   790,   634,     0,   821,   823,     0,   416,   417,     0,
     704,   706,   776,   726,   724,   725,   687,     0,     0,   730,
     731,   722,   723,   694,     0,     0,   715,     0,   714,     0,
     352,   350,   811,     0,     0,     0,     0,   816,   231,     0,
       0,     0,     0,     0,   807,   809,   222,     0,     0,     0,
       0,   227,     0,   345,   343,   762,   755,   755,   757,     0,
       0,   764,   764,   775,     0,   357,   355,    29,    30,    31,
      44,    48,    47,     0,     0,     0,    21,    35,    86,   157,
       0,   153,   156,   145,   148,     0,     0,     0,   166,     0,
     160,   169,     0,     0,   580,   398,   394,     0,   428,     0,
     427,   430,   841,   844,     0,     0,   830,     0,   410,   727,
     728,   729,   720,   721,   717,   716,     0,   351,   812,   810,
     804,     0,   230,   229,     0,   218,   217,     0,   208,     0,
     224,   223,   226,   225,     0,   259,   257,   348,     0,     0,
       0,     0,     0,   768,   766,   763,   761,     0,    46,    45,
      42,   159,   147,   146,   143,   168,   586,   592,   578,   589,
     595,   579,     0,     0,     0,   842,     0,   825,   718,   805,
     809,   215,     0,   808,     0,     0,   753,   752,   758,   759,
       0,   767,     0,     0,   765,   358,   356,     0,     0,     0,
       0,   574,     0,   426,   831,     0,     0,   219,   220,   233,
     756,     0,   769,   770,   771,   582,   588,   587,   583,   594,
     593,   584,   591,   590,   585,   597,   596,   429,   806,   216,
     760
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,   322,   323,   586,   783,   937,   938,  1340,  1346,
     939,   940,  1132,  1348,  1349,   941,   942,   943,   944,   945,
     946,  1364,  1366,   947,   948,   971,   587,   949,   786,   972,
     973,   974,   975,   976,   977,   978,  1382,  1180,   979,   980,
    1182,  1386,  1387,   981,   982,   983,   984,   985,  1171,  1172,
    1173,  1373,   986,   987,  1189,  1396,   988,   989,   990,   991,
     992,   993,   994,   995,   996,   997,   998,   999,  1000,  1001,
    1002,  1003,  1004,  1005,  1006,  1007,  1304,  1305,  1306,  1307,
    1564,  1636,  1308,  1309,  1310,  1491,   296,   297,   298,   299,
     516,   517,   734,   302,   303,   304,   305,   308,   309,   310,
     311,   314,   300,   316,   317,   301,   319,   552,   518,   738,
     519,   520,   521,   522,   544,   523,   524,   525,   912,  1291,
     526,   527,   528,  1100,   920,   529,   530,  1471,   531,   565,
     443,   761,   653,   654,  1167,   196,   197,   198,   199,   200,
     201,   202,   422,   423,  1020,  1226,   203,   426,   427,   462,
     463,   857,   858,   859,  1054,  1254,   204,   429,   430,   205,
    1025,  1233,  1026,   206,   207,   208,   209,   676,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   792,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   365,   247,   248,   249,
     250,   251,   711,   712,   252,   253,   254,   376,   588,   382,
    1598,  1601,  1627,  1629,  1628,  1630,  1221,   255,   379,   256,
     591,   257,   258,   259,   441,   602,   260,   391,   261,   262,
     263,   399,   617,   878,  1074,   656,   839,  1040,   840,   841,
     264,   265,   266,   267,   268,   269,   270,   597,   271,   618,
     272,   647,   273,   620,   598,   621,  1013,   899,   867,  1271,
    1067,   868,   869,   870,   871,   872,   873,   874,   875,  1063,
    1072,  1278,  1272,  1552,  1461,   925,  1114,  1115,  1116,  1117,
    1118,  1578,  1330,  1119,  1585,  1502,  1582,  1624,  1120,  1121,
    1122,  1065,   567,   274,   275,   276,   277,   278,   279,   280,
     417,   418,   281,   282,   283,   284,   613,   285,   533,  1475,
    1294,   916,  1092,  1093,   286,   287,  1049,  1248,  1249,   288,
     289,   290,   291,   844,   845,   846,  1244,   847,   292,   293
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1371
static const yytype_int16 yypact[] =
{
     892,  3404,   111,   111,   111,   111,    28,   167,  7213, -1371,
    5728,   362,    83,   217,  4802,   256,  3637,  3637, -1371, -1371,
   -1371,  2239, -1371, -1371, -1371,   413,   537,   405,   448,   188,
     515,   546,   695, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
     479,   501,   600,   612,   617,   622,   682,   719,   732,   737,
     747,   345, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371,   646, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
     620,   742, -1371, -1371, -1371, -1371, -1371, -1371,   769, -1371,
      80, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371,   790,   790, -1371,   618, -1371, -1371,   823, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371,   535, -1371, -1371, -1371, -1371, -1371,   802, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371,   228, -1371,   838, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
      91, -1371, -1371,    29, -1371, -1371, -1371, -1371, -1371,   744,
   -1371,    34, -1371, -1371, -1371, -1371, -1371, -1371, -1371,   577,
     654, -1371, -1371, -1371, -1371, -1371, -1371,   860, -1371, -1371,
     772,   795, -1371, -1371, -1371, -1371, -1371,   767,   758, -1371,
    1025,   734,   151,    62,    79,   561, -1371,   777,   768,   779,
     793, -1371, -1371, -1371,   458, -1371, -1371,  4802,   133, -1371,
   -1371,   904,   926, -1371,  5728, -1371, -1371,  5728, -1371, -1371,
   -1371, -1371,   473, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371,  3404, -1371,  3404, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371,   122,   814,   797, -1371, -1371, -1371,  3870,
     819, -1371, -1371, -1371, -1371,  4103,   819, -1371, -1371, -1371,
   -1371,  4336,   819, -1371, -1371,   819, -1371, -1371, -1371,  4569,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,   970,   975,
     979,  1014,  1017, -1371, -1371, -1371, -1371,   784, -1371,  1032,
     133, -1371,  7213, -1371, -1371, -1371,   714, -1371,  6190,  3404,
   -1371,  1023,  1035,  3404,    74,  1036,  7026,  3404, -1371,  1030,
    7213,  7213,  1039,  3404, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371,  3404,  7213,    38, -1371,  3404,
    3404,  7213,  1048, -1371,  7213,  1074,  1051, -1371,  7213,   115,
   -1371,   119,  3404,  3404,  3404,  1046,  1050, -1371,  6421,  3404,
   -1371,  1023,   328,   949,  3404,   943, -1371, -1371,  3404, -1371,
   -1371,  7213,  3404,  3404,  3404,   769,    80,  3404,   962,   965,
   -1371, -1371,   773, -1371,  3637,  3637,  3637,  3637,  3637,  3637,
    3637,  3637, -1371,  3637,  3637,  3637,  3637,  3637,  3637,  3637,
    3637,  1047,  3637,  3637,  3637,  3637,  3637,  3637,  3637,  3637,
    3637,  3637,  3637,   951,   960,   963,   966,  2472, -1371,   133,
    4802,  4802,  3404,  3404, -1371, -1371,  3404,  1773,   234, -1371,
    2006,  1060,   991,  7213,   821,   730,  1072,  1072,  1072,  1072,
   -1371,  1072,  1072, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
    1072, -1371, -1371,  1072, -1371, -1371,   349,   578,  1072,  1072,
    1072,  1072,  1072,  1072,  1072,  1072, -1371,  1072, -1371, -1371,
     603,   505,  1072,  1072,  1072, -1371,  1072,  1072, -1371, -1371,
   -1371, -1371, -1371,  1072, -1371,  1072, -1371, -1371,  1072, -1371,
   -1371,   605, -1371, -1371,   610,   435,  1072,  1072,  1072,  1072,
    1072,  1072,  1072,  1072, -1371,  1072,   179,   636,  1019,  1020,
   -1371, -1371, -1371,   223, -1371, -1371, -1371,   762, -1371, -1371,
     491,  2705, -1371, -1371,   521, -1371,   546,  1017,  1085,  1086,
   -1371, -1371,  1087,  1088, -1371,   571,  2938, -1371,  1097, -1371,
    1098, -1371, -1371, -1371,   579,   580,  1130,   646,  3404,   591,
     633,   949,   769,   949,  7213,    80,   949,   790,  3404,  3404,
     771,   781,   645,  3404,  3404, -1371, -1371,   782, -1371,   657,
   -1371,  7213, -1371,   783, -1371,  6623,  1093,   919,  1089,   993,
     921,   177, -1371, -1371, -1371,  3404,  1010, -1371,   758, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371,  3637, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371,   192,    62,    62,   916,    79,
      79,    79,    79,   561,   561, -1371, -1371,  6623,  6623,  7213,
    7213, -1371,   658, -1371, -1371,   368,   551,   565, -1371, -1371,
   -1371,   787, -1371,   626,  3404,  3404,  3404, -1371,   824, -1371,
      56,  1109,   804,  1027,  1143,  7213,   810,   865,   376,   554,
    7213, -1371, -1371,   652,  7391,   193,   221, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371,   821,   730,  1073, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,   578,   436,
   -1371,   796, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
     850,   480, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371,   337, -1371, -1371,  1083,   872,   311, -1371,
    1028, -1371, -1371,  7213, -1371, -1371, -1371,   659, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371,   666, -1371, -1371, -1371, -1371,
    3404, -1371,  1029, -1371, -1371,  1053, -1371,  1152,  1157, -1371,
    1037, -1371, -1371, -1371,  1024,  1016, -1371,   667,   672,  7213,
   -1371, -1371,   949,  1165, -1371,  6825,  1135,  1137,  1138, -1371,
     408, -1371, -1371, -1371, -1371, -1371, -1371, -1371,  3404, -1371,
    3404,  3404,  3404,  1146,  1147,  1510, -1371,  1155, -1371,   859,
    3404, -1371,   192,  3404,   509,   696,   639,  1100,   952,   950,
    1113, -1371, -1371,  1073,  1000, -1371, -1371, -1371, -1371,  1175,
   -1371, -1371, -1371, -1371, -1371,  3171, -1371,   971,   972, -1371,
   -1371, -1371, -1371,  1078, -1371,  1027, -1371, -1371, -1371, -1371,
    7213,  1166, -1371, -1371, -1371, -1371,  1064,  1027,  1034,  1038,
   -1371, -1371,  1173,  1084,  7213,   -46,   974,   838,  7213,  1021,
    1027,  1099,  7213,  1099,   649,  1131, -1371, -1371, -1371,  7391,
   -1371, -1371, -1371, -1371, -1371, -1371,   723, -1371,   374, -1371,
     282, -1371,   478, -1371,   235, -1371,   813, -1371,   977,   172,
   -1371, -1371,   698, -1371, -1371,   918,   959,   917, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371,   356, -1371, -1371, -1371,    98, -1371,
     946, -1371,   980, -1371, -1371, -1371, -1371,   250, -1371,   254,
   -1371,   920, -1371,    84, -1371, -1371, -1371,   173, -1371,   183,
   -1371,  -124, -1371,    88, -1371,   726, -1371,   924,   256,   256,
   -1371, -1371, -1371,  1182, -1371, -1371, -1371, -1371,  3404,  1215,
    1040,  3404,  3404,  3404,  5035,    10, -1371,  3404, -1371, -1371,
     148, -1371, -1371,  1185,  1186,  1187,  5959, -1371, -1371, -1371,
   -1371,   697, -1371,  1006, -1371,  1221,  1221, -1371, -1371,  1011,
   -1371,  3404, -1371, -1371,  1095,  1155,  1192,   699, -1371,   164,
    1140,  1026, -1371, -1371,  1144, -1371,   192,   397,   192,  1106,
    1131,   -10, -1371, -1371, -1371, -1371,  3404,  3404,  1072,  1072,
     949,  1027,   876, -1371,  1027,  1027,   846, -1371,    22, -1371,
   -1371, -1371,  1207, -1371,  5266,   135,  1204,  1071,  1099,  1027,
    1210,  1208,  1210,   815,   940, -1371,    11,  1041, -1371,   942,
    7213, -1371, -1371,  1122, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371,   649,   838,   964,   967, -1371, -1371,  5266,
    6623,   887,  1002, -1371, -1371,  6623,  1002, -1371, -1371, -1371,
    6623,  3404,  1115, -1371,  6623,  3404,  1150, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371,    26,  1134,  1134, -1371, -1371, -1371,  1009,  3404,
     957,   780, -1371, -1371,  3404,  3404, -1371,  7392,   -75,  3404,
     281, -1371,   431, -1371,  7420, -1371,  3404, -1371, -1371,   995,
   -1371,  6623,  3404,  7448,  3404,  7476, -1371,  3404,  7504,  7532,
   -1371,  3404, -1371, -1371,  7560, -1371,  3404,  7588, -1371, -1371,
    7616, -1371, -1371,  3404, -1371, -1371,  7644,  3404,  7672,  1223,
    1234,   494, -1371, -1371,  7213,  1255,  1151, -1371, -1371, -1371,
    7213,  1148,   118, -1371, -1371,  1129,  1243, -1371, -1371, -1371,
   -1371,  1246,  1141, -1371,   825, -1371,  3404,  7213,   826, -1371,
     827,  1248, -1371,   895,  1149, -1371,   639, -1371,  1241, -1371,
   -1371,  3637,   950,  1198,   947, -1371,  3637,  3637,   -10,   833,
     833, -1371, -1371,  1113,   192,    33,  3637,  3637,  1096, -1371,
   -1371, -1371, -1371,    37, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371,   339, -1371,  1145,  1063,   -46,  5728, -1371,  1012,
     321,  1278,  1259,  1260,   398, -1371,  5497,   674,   847, -1371,
   -1371, -1371,  6623, -1371, -1371, -1371, -1371,  1210, -1371,  1027,
    1027, -1371, -1371,  1090, -1371, -1371, -1371,     9,  1027, -1371,
   -1371,    44, -1371, -1371,  1178, -1371, -1371,   147, -1371, -1371,
     -38,  1291, -1371, -1371, -1371, -1371, -1371, -1371, -1371,   534,
    7700, -1371,  7728, -1371,   860, -1371, -1371,   860, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371,  1183,  1183, -1371,   860,
    3404, -1371, -1371,  1067,  7756,   860,   860,   172, -1371, -1371,
   -1371, -1371, -1371,   860, -1371, -1371, -1371,   353, -1371, -1371,
   -1371,  7784,   860,   172,   172, -1371,  1069, -1371,   860, -1371,
     860, -1371,   172,   860, -1371, -1371,   172,   860,   172,   172,
   -1371,   172,   860, -1371,   172,   172, -1371,   860, -1371,   860,
   -1371,   256,   256,   362, -1371, -1371, -1371, -1371, -1371,  7213,
    3404,  1156,  3404,  7213,  3404,  3404, -1371, -1371,  6623,  6623,
    1162, -1371,   949,  1221, -1371, -1371,  1221, -1371, -1371,  1027,
   -1371, -1371,    79, -1371, -1371, -1371, -1371,   121,   759, -1371,
   -1371, -1371, -1371, -1371,  3637,  3637,   916,   180, -1371,  3404,
   -1371, -1371, -1371,   828,  6623,  1093,  5266, -1371, -1371,  5728,
    5728,    63,  1122,  5266, -1371,  1145, -1371,  5497,  5497,  5497,
    5497,  1284,    96, -1371,  1099, -1371, -1371, -1371,   286,  1122,
    1027, -1371, -1371, -1371,  6623, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371,  6623,  3404,  7812, -1371, -1371, -1371,   860,
    7840, -1371, -1371, -1371, -1371,  6623,  3404,  7868, -1371,  7896,
   -1371,  1508,   205,   789,   256, -1371, -1371,  6623, -1371,  1184,
   -1371, -1371, -1371, -1371,  6623,  1303, -1371,   829, -1371, -1371,
   -1371, -1371, -1371, -1371,   916,   916,  3637, -1371, -1371, -1371,
   -1371,   398, -1371, -1371,  1274, -1371, -1371,  1283, -1371,  1093,
   -1371, -1371, -1371, -1371,  3404, -1371, -1371,  1210,   831,   841,
    1122,  1114,   843, -1371, -1371,   717,   717,   105, -1371,   860,
   -1371, -1371, -1371,   860, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371,  1294,  1191,  3404, -1371,  3404, -1371,   916, -1371,
    1145, -1371,   155, -1371,   599,  1211, -1371, -1371,   -10, -1371,
    1122, -1371,    92,    92, -1371, -1371, -1371,   424,   112,   460,
     319, -1371,  3404, -1371, -1371,  1093,  1286, -1371, -1371, -1371,
   -1371,  1133, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371,   394, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371,   171, -1371, -1371,  1332, -1371,  -423,  -823, -1371,
   -1371, -1371, -1371,   396, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371,   174, -1371, -1371, -1371, -1371, -1371, -1371, -1371,   187,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1117,  -129, -1371, -1371,
   -1371, -1371, -1371, -1197, -1371, -1371, -1371,  1059,  1066,  1068,
    -280,  -263,  -563, -1371,  1058,  1061,  1079, -1371,  1075,  1076,
    1057, -1371,   973,  1065,  1070,    32,  1081,  -297,  -267,  -440,
    -256,  -290,  -252,  -245,  -292,  -271,  -250,  -243, -1371, -1371,
    -201,  -165, -1371,  -919, -1371, -1371,  -225, -1371,  -131,  -278,
    -874, -1371,    97,   558,  -639,   378,   -21,  -251, -1371, -1371,
   -1371,  1200, -1371,   770, -1371, -1371,  1203, -1371,   785, -1371,
     953,   545,   365, -1371, -1371, -1371, -1371,  1319,   786, -1371,
   -1371, -1371,   399, -1371, -1371,   968,   976, -1371,   487,   161,
    -483,   568,  -454,   569,   572, -1371, -1371, -1371,  1049, -1371,
   -1371, -1371,  -600,  -219, -1371, -1371, -1371,    25,   567, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,    -8, -1371,
   -1371, -1371, -1371,  -629, -1371, -1370,  -413, -1371, -1371, -1371,
   -1371, -1371,   923,   543, -1371,   208, -1371,     8, -1371,  -582,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371,   994, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371,   736, -1371,  -613,  -633, -1371,   602,   370,
    -601, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
    1044, -1371,  1045, -1371,  1042,  1005,   611,  -606,  -812, -1371,
   -1371, -1371,   379,   380,   170,   582, -1371, -1371, -1371,   191,
   -1371, -1255, -1371,    -7,   182,   581,   327, -1371, -1371, -1371,
   -1371,   -42, -1313, -1371,   -40,  -548, -1371, -1371, -1371, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,
   -1371,   836, -1371, -1371, -1371, -1103,  -494,  -343,  -185, -1304,
   -1288,   377, -1371,   160, -1371, -1371, -1371, -1039,    21, -1371,
   -1371, -1371, -1371, -1371, -1371, -1371, -1371, -1371,     1,    20
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -362
static const yytype_int16 yytable[] =
{
     386,   688,   373,   626,  1102,   498,   788,  1250,   631,   366,
    1335,   633,  1341,  1458,  1497,   636,  1485,   849,   815,   721,
     817,   555,   576,   820,   508,   538,   509,   581,   367,   555,
     367,   689,   690,   691,   692,   307,   313,   318,   540,   380,
     558,   583,   539,  1095,   553,   599,  1379,  1469,   558,   541,
    1056,  1327,   577,   542,   842,   554,   866,   599,   622,   556,
     543,   559,  1292,   578,   876,   877,   557,   579,   560,   559,
     848,   627,     8,   485,   580,  1089,   560,   739,   740,   741,
     545,   742,   743,  1507,  1499,   865,   563,   446,  1359,   424,
     744,   489,   449,   745,   582,   622,   842,   842,   749,   750,
     751,   752,   753,   754,   755,   756,   737,   757,  1275,  1486,
     561,  1565,   762,   763,   764,   605,   765,   766,   561,  1142,
     547,  1146,  1328,   767,  1328,   768,   568,  1433,   769,   921,
     923,   486,  1499,  1464,   585,   606,   772,   773,   774,   775,
     776,   777,   778,   779,   848,   780,   562,  1360,   637,   444,
    1208,  1177,   637,   848,   562,   482,   483,  1500,  1024,  1648,
     848,  1184,   510,   500,     8,   909,  1193,   325,  1195,   501,
    1198,  1236,  1199,   511,  1204,  1465,  1207,  1209,  1210,  1317,
     564,  1569,  1216,   848,  1218,   482,   483,    83,   564,  1237,
    1496,  1232,  1329,   657,   445,   848,    15,   659,   929,  1276,
    1277,   661,   662,   663,   862,  1500,   664,    22,    23,    24,
    1470,   377,   863,  1257,   482,   483,    22,    23,    24,  1031,
     848,   818,   487,   488,    15,  1501,   504,  1649,   396,   505,
     893,   901,   862,   866,   842,   866,   397,  1380,   832,  1381,
     863,   490,  1638,  1581,    22,    23,    24,  1258,  1434,  1596,
    1337,  1597,   499,   447,   367,   628,   710,   367,   450,   710,
     915,   638,   865,   607,   865,   639,  1090,  1091,   438,  1575,
     538,   320,   425,  1610,  1508,  1509,   439,   576,  1625,    83,
     894,   555,   581,   540,   555,  1312,  1166,   539,    83,  1079,
    1570,  1571,  1572,  1573,   541,   294,   583,  1504,   542,   295,
     558,  1083,  1640,   558,   553,   543,  1635,   577,  1313,  1350,
     484,   398,   843,  1352,  1098,   554,    83,   898,   578,   556,
    1505,   559,   579,   378,   559,   545,   557,   790,   560,   580,
    1211,   560,  1549,  1550,  1551,   321,  1010,   651,   307,  1556,
    1479,  1361,  1362,  1363,   313,   898,   563,   318,   651,   582,
    1374,   440,   791,  1011,   843,   843,   843,   843,  1196,  1561,
     381,   388,  1391,  1641,   918,   547,  1654,   848,   600,   652,
     561,  1178,   604,   561,   919,  1212,   615,   812,  1566,  1567,
    1472,  1197,   624,   593,   713,  1213,   568,   822,   823,   585,
     882,  1231,   922,   415,   625,  1179,  1583,   614,   629,   630,
     854,   453,   367,  1243,  1275,   864,   562,  1547,   367,   562,
    1483,   640,   641,   642,   856,   855,   367,   366,   649,  1037,
     367,   367,   366,   842,  1096,   366,  1219,  1220,  1101,   366,
     866,  1038,   387,   864,  1655,   842,   367,   866,  1292,   866,
     564,   367,  1039,   564,   367,   394,   848,  1200,   367,  1293,
    1014,   781,   660,   388,   714,   715,  1314,  1205,   367,   865,
     782,   389,   716,   889,   890,   891,   865,  1283,   865,  1645,
    1201,   367,   848,  1202,  1203,  1284,   702,  1618,  1287,  1288,
    1206,   705,   706,   374,   375,   707,  1014,  1080,   395,  1580,
      15,  1263,   843,  1318,   506,  1276,  1277,  1342,   404,   722,
     748,   723,  1351,   926,   927,  1651,   497,  1353,   848,  1143,
    1264,  1356,   906,   507,   614,  1185,  1265,  1642,    11,   907,
     405,    12,    13,  1384,   453,  1423,  1515,   746,  1190,   842,
    1385,  1144,  1145,   367,   842,   747,   390,   928,  1646,   842,
     795,    15,   848,   842,   722,   748,   723,  1186,  1520,   862,
    1191,  1192,  1187,  1188,   453,   400,  1133,   863,  1397,  1017,
     724,    22,    23,    24,  1527,   908,   731,   732,  1134,   722,
     798,   723,  1529,   883,  1652,  1577,  1531,   392,  1135,   930,
     797,   931,  1426,   434,   453,   393,   401,   884,   932,   933,
     842,  1266,  1267,  1268,   934,   805,  1269,  1270,   453,  1042,
    1043,  1044,   435,   436,   453,   724,   725,   935,   936,   856,
    1424,  1425,   453,   453,   726,   727,   728,   729,   730,   406,
     803,  1639,   827,   828,   453,  -361,  -361,  1523,   808,   809,
     724,   407,   453,    83,   710,   366,   408,  1524,  1281,  1282,
     813,   409,   722,   748,   723,   866,   498,  1127,  1128,  1525,
    1526,   725,   366,  1175,   367,   416,  1176,   759,   432,   726,
     727,   728,   729,   730,   760,  1484,   453,   733,   419,  1129,
    1130,   367,  1131,  1388,   865,   367,   725,   532,   453,  1492,
    1385,   843,   814,   546,   726,   727,   728,   729,   730,   566,
     453,   453,   453,   843,   826,  -361,  -361,   584,  1506,   453,
     453,   410,   759,   724,  1487,   453,   831,   881,  1015,   760,
    1488,   842,   733,  1493,  1494,  1016,  1028,   367,   367,   367,
     367,  1029,  1498,   910,   491,   492,   614,   759,    15,   911,
     453,   913,   453,  1103,   760,   402,  1104,   733,   411,  1105,
    1106,  1107,  1108,   403,  1059,   367,  1245,   453,  1256,   725,
     367,   412,  1137,  1377,   917,   594,   413,   726,   727,   728,
     729,   730,  1138,  1139,  1393,  1394,   414,  1223,   731,   732,
    1227,  1228,  1229,  1402,  1140,  1141,  1235,  1406,   421,  1408,
    1409,   758,  1411,   770,  1457,  1414,  1415,   843,   771,   747,
     420,   747,   843,  1466,  1467,   793,   747,   843,  1109,   428,
     856,   843,   448,   794,   453,  1542,  1543,  1452,  1510,   451,
     733,  1428,   824,   367,   453,   829,   833,  1431,  1511,  1512,
     885,   437,   825,   830,   834,  1279,  1280,  1041,   886,  1545,
    1513,  1514,  1110,  1599,  1442,  1600,  1560,   842,   842,  1532,
    1533,  1559,  1057,  1548,   887,  1060,  1061,  1062,   843,   367,
    1111,  1112,   888,  1576,  1113,   367,  1050,   885,  1439,  1443,
    1443,   833,  1443,   433,  1615,   892,  1440,  1444,  1445,  1558,
    1607,  1587,  1616,   842,  1615,   367,  1620,  1489,   442,  1622,
    1588,  1623,  1617,  1490,  1621,   722,   914,   723,   589,   590,
     915,   452,  1592,   453,  1584,     1,     2,     3,     4,     5,
       6,   366,   454,   842,  1603,  1321,  1322,  1323,  1324,   458,
     459,  1605,   842,   465,   722,  1088,   723,   735,   736,   614,
     367,   464,  1609,   614,   842,   502,   455,   481,   456,   457,
    1613,   458,   459,   493,   367,   494,   842,   495,   367,  1343,
    1344,  1345,   367,   842,   784,   785,   724,   503,  1626,  1124,
     482,   483,  1602,   670,   671,   672,   673,   674,   675,   496,
     677,   678,   679,   680,   681,   682,   683,   684,   513,   843,
    1549,  1550,  1551,   896,   897,   724,   306,   312,   315,   902,
     903,  1554,  1555,  1637,   904,   905,   731,   732,  1647,  1650,
    1653,  1656,   725,  1008,  1009,  1441,  1658,  1052,  1053,   512,
     726,   727,   728,   729,   730,  1125,  1126,   295,   969,   970,
     388,   731,   732,  1214,  1215,   392,  1535,  1285,  1286,   396,
    1539,   725,  1289,  1290,  -211,  1325,  1326,  1332,  1333,   726,
     727,   728,   729,   730,  1170,  1371,  1447,  1448,   466,   467,
     468,   469,   470,   471,   367,  1454,  1455,  1459,  1460,   472,
     686,   687,  -211,   733,   402,  1147,   367,   438,   693,   694,
    -211,   592,   473,   695,   696,   383,   384,   703,   704,   879,
     879,   601,   759,  1608,  1643,  1644,   603,   610,   616,   760,
     623,   632,   733,   634,   635,  1148,  1311,  1149,  1150,  1151,
    1152,  1153,  1154,  1155,   643,   843,   843,   665,   644,   655,
     658,   666,  1156,  1157,  1158,  1159,  1160,  1161,   697,   685,
     698,  1334,   719,   699,   367,   720,   700,  1162,  1163,  1164,
    1354,  1311,   737,   787,  1357,   789,   799,   800,   801,   802,
     367,   843,   474,   475,   476,   477,   478,   479,   806,   807,
     810,   848,   850,   852,   853,   860,   895,   851,  1369,   367,
     367,   898,   900,  1375,  1376,   367,   924,  1012,  1383,  1018,
     367,   843,  1021,   861,   367,  1392,  1019,  1022,  1027,  1023,
     843,  1398,  1024,  1400,   651,  1034,  1403,  1035,  1036,  1536,
    1407,  1538,   843,  1540,  1541,  1412,  1045,  1046,  1051,  1064,
    1068,  1066,  1417,   480,   843,  1069,  1419,  1071,  1073,  1076,
    1077,   843,  1078,  1081,  1082,  1084,  1086,  1094,  1087,  1085,
    1097,   367,  1099,  1170,  1123,  1169,  1174,  1194,  1557,  1165,
    1181,  1217,  1183,  1222,  1224,   366,  1238,  1239,  1240,  1246,
    1247,   366,  1225,  1255,  1251,  1253,  1259,  1260,  1274,  1261,
    1296,  1315,  1316,  1319,   367,  1320,    83,  1338,   366,  1339,
     367,  1368,  1331,  1347,  -211,  1365,  1370,  -211,  -211,  -211,
    -211,  1395,  -211,  -211,  1429,  -211,  1421,   367,  -211,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,  -211,  1422,  1432,  -211,
    -211,  -211,  1435,  1430,  1436,  -211,  -211,  1437,  1446,  1478,
    1451,  1438,  1449,  1453,  1468,  1474,  1476,  1480,  1311,  1481,
    1482,  1495,  1503,  1483,  1518,  1574,  1537,  -211,  -211,  1521,
    -211,  1530,  1544,  1606,  1604,  1611,  1612,   367,  1619,  -211,
    1631,  1632,  -211,  -211,  1328,   950,   367,  1659,   951,   952,
     953,   954,   367,   955,  1136,  1367,   956,  1660,   324,   957,
     958,   959,   960,   961,   962,   963,   964,   965,  1168,  1519,
     966,   967,   968,  1633,  1568,  1634,  1389,  1355,  1372,   534,
     951,   952,   953,   954,   548,   955,   535,   549,   956,   536,
     571,   957,   958,   959,   960,   961,   962,   963,   964,   965,
     572,  1657,   966,   967,   968,   573,   550,   569,   570,  1473,
     321,  1032,  1358,   969,   970,   951,   952,   953,   954,   574,
     955,   460,   816,   956,   461,  1055,   957,   958,   959,   960,
     961,   962,   963,   964,   965,   667,  1252,   966,   967,   968,
     819,   431,   321,   821,  1234,   969,   970,  1456,  1075,  1427,
     366,  1534,   668,   718,   366,   650,   880,  1033,   608,   609,
    1030,   669,   619,   648,  1463,  1262,  1058,  1450,  1273,   367,
    1336,  1553,  1462,   367,  1070,  1579,  1477,   321,   367,   367,
     969,   970,  1586,   811,  1546,  1295,     0,     0,  1311,     0,
       0,  1562,  1563,     0,     0,  1311,     0,     0,     0,  1311,
    1311,  1311,  1311,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1589,   367,     0,   367,     0,     0,   367,
     367,     0,     0,   367,     0,  1593,     0,   367,   367,   367,
     367,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   367,     0,     0,     0,     0,     0,
       0,     0,     0,   367,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   367,     0,     0,     0,     0,
       0,     0,     0,  1614,     0,     0,     0,   367,     0,     0,
       0,     0,     0,     0,   367,   326,   327,   328,   329,   330,
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
     194,   195,     0,   951,   952,   953,   954,     0,   955,     0,
       0,   956,     0,     0,   957,   958,   959,   960,   961,   962,
     963,   964,   965,     0,     0,   966,   967,   968,     0,     0,
       0,     0,     8,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,   708,    11,     0,     0,
      12,    13,     0,    14,     0,    15,     0,    16,    17,    18,
       0,    19,    20,    21,   709,   321,     0,     0,   969,   970,
       0,     0,  1047,     0,  1048,    22,    23,    24,    25,    26,
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
       0,     0,     0,     0,     0,     0,    10,     0,     0,   708,
      11,     0,     0,    12,    13,     0,    14,     0,    15,     0,
      16,    17,    18,     0,    19,    20,    21,   717,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,     0,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,    80,    81,    82,     0,     0,
      83,    84,    85,    86,     0,     0,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,     0,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
       0,   140,   141,   142,     0,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,     8,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,    11,     0,     0,    12,    13,     0,    14,
       0,    15,     0,    16,    17,    18,     0,    19,    20,    21,
     385,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,     0,   140,   141,   142,     0,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,     8,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,    11,     0,     0,    12,
      13,     0,    14,     0,    15,     0,    16,    17,    18,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,   701,     0,     0,    22,    23,    24,    25,    26,    27,
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
       0,     0,     0,     0,     0,    10,     0,     0,     0,    11,
       0,     0,    12,    13,     0,    14,     0,    15,     0,    16,
      17,    18,     0,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,   796,     0,     0,    22,    23,    24,
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
      15,     0,    16,    17,    18,     0,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,   804,     0,     0,
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
       0,    10,     0,     0,   708,    11,     0,     0,    12,    13,
       0,    14,     0,    15,     0,    16,    17,    18,     0,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
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
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,   346,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,    80,    81,    82,     0,
       0,    83,    84,    85,    86,     0,     0,    87,   349,    89,
     350,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   351,   352,   103,   353,   105,     0,   106,   354,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,     0,   140,   141,   142,     0,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   359,   171,   172,   360,   174,   175,   176,
     177,   178,   361,   180,   362,   182,   183,   184,   185,   186,
     187,   188,   363,   364,   191,   192,   193,   194,   195,     8,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,    11,     0,     0,    12,    13,     0,
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
     126,   127,   128,   129,   130,   131,   132,   133,   514,   135,
     136,   137,   138,   139,     0,   140,   515,   142,     0,   143,
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
     133,   537,   135,   136,   137,   138,   139,     0,   140,   515,
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
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,    80,    81,    82,     0,     0,
      83,    84,    85,    86,     0,     0,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,     0,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   551,   135,   136,   137,   138,   139,
       0,   140,   515,   142,     0,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,     8,     0,
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
     127,   128,   129,   130,   131,   132,   133,   575,   135,   136,
     137,   138,   139,     0,   140,   515,   142,     0,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,     8,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,    11,     0,     0,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,     0,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,   346,    72,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,    80,    81,    82,     0,     0,    83,    84,    85,    86,
       0,     0,    87,   349,    89,   350,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   351,   352,   103,   353,
     105,     0,   106,   354,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   355,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,     0,   140,   141,   142,
       0,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   359,   171,
     172,   360,   174,   175,   176,   177,   178,   361,   180,   362,
     182,   183,   184,   185,   186,   187,   188,   363,   364,   191,
     192,   193,   194,   195,  1230,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   835,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     368,   369,    27,    28,   370,    30,    31,   371,   836,    34,
      35,    36,    37,    38,    39,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,    52,    53,    54,
      55,    56,    57,    58,     0,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,   346,    72,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,   347,   348,    82,     0,     0,     0,
      84,     0,     0,     0,     0,    87,   349,    89,   350,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   351,
     352,   103,   353,   105,     0,   106,   354,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     355,   122,   123,   124,   125,   126,   356,   837,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,     0,
     140,   141,   142,     0,   372,   144,   838,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   359,   171,   172,   360,   174,   175,   176,   177,   178,
     361,   180,   362,   182,   183,   184,   185,   186,   187,   188,
     363,   364,   191,   192,   193,   194,   195,     9,     0,     0,
       0,     0,     0,     0,     0,     0,  1297,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1298,     0,     0,     0,
       0,     0,  1299,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1300,   369,    27,    28,   370,    30,    31,   371,    33,
      34,    35,    36,    37,    38,    39,  1301,   335,   336,   337,
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
     178,   361,   180,   362,   182,   183,  1302,  1303,   186,   187,
     188,   363,   364,   191,   192,   193,   194,   195,     9,     0,
       0,     0,     0,     0,     0,     0,     0,  1297,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1300,   369,    27,    28,   370,    30,    31,   371,
      33,    34,    35,    36,    37,    38,    39,  1301,   335,   336,
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
     187,   188,   363,   364,   191,   192,   193,   194,   195,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   368,   369,    27,    28,   370,    30,    31,
     371,    33,    34,    35,    36,    37,    38,    39,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
      52,    53,    54,    55,    56,    57,    58,     0,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
     346,    72,     0,     0,     0,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,   347,   348,    82,
       0,     0,     0,    84,    85,    86,     0,     0,    87,   349,
      89,   350,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   351,   352,   103,   353,   105,     0,   106,   354,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   355,   122,   123,   124,   125,   126,   356,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,     0,   140,   141,   142,     0,   372,   144,   358,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   359,   171,   172,   360,   174,   175,
     176,   177,   178,   361,   180,   362,   182,   183,   184,   185,
     186,   187,   188,   363,   364,   191,   192,   193,   194,   195,
    1241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   835,
    1242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   368,   369,    27,    28,   370,    30,
      31,   371,   836,    34,    35,    36,    37,    38,    39,   334,
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
     356,   837,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,     0,   140,   141,   142,     0,   372,   144,
     838,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   359,   171,   172,   360,   174,
     175,   176,   177,   178,   361,   180,   362,   182,   183,   184,
     185,   186,   187,   188,   363,   364,   191,   192,   193,   194,
     195,   595,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   596,     0,     0,     0,     0,     0,     0,     0,     0,
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
     194,   195,   645,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   646,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   326,   327,   328,   329,
     330,   331,   332,   333,    33,    34,    35,    36,    37,    38,
      39,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,    52,    53,    54,    55,    56,    57,    58,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,   346,    72,     0,     0,     0,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
     347,   348,    82,     0,     0,     0,    84,     0,     0,     0,
       0,    87,   349,    89,   350,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   351,   352,   103,   353,   105,
       0,   106,   354,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   355,   122,   123,   124,
     125,   126,   356,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,     0,   140,   141,   142,     0,
     357,   144,   358,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   359,   171,   172,
     360,   174,   175,   176,   177,   178,   361,   180,   362,   182,
     183,   184,   185,   186,   187,   188,   363,   364,   191,   192,
     193,   194,   195,   835,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   368,   369,
      27,    28,   370,    30,    31,   371,   836,    34,    35,    36,
      37,    38,    39,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,    52,    53,    54,    55,    56,
      57,    58,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   346,    72,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,     0,   347,   348,    82,     0,     0,     0,    84,     0,
       0,     0,     0,    87,   349,    89,   350,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   351,   352,   103,
     353,   105,     0,   106,   354,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   355,   122,
     123,   124,   125,   126,   356,   837,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,     0,   140,   141,
     142,     0,   372,   144,   838,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   359,
     171,   172,   360,   174,   175,   176,   177,   178,   361,   180,
     362,   182,   183,   184,   185,   186,   187,   188,   363,   364,
     191,   192,   193,   194,   195,   835,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     368,   369,    27,    28,   370,    30,    31,   371,    33,    34,
      35,    36,    37,    38,    39,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,    52,    53,    54,
      55,    56,    57,    58,     0,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,   346,    72,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,   347,   348,    82,     0,     0,     0,
      84,     0,     0,     0,     0,    87,   349,    89,   350,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   351,
     352,   103,   353,   105,     0,   106,   354,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     355,   122,   123,   124,   125,   126,   356,   837,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,     0,
     140,   141,   142,     0,   372,   144,   838,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   359,   171,   172,   360,   174,   175,   176,   177,   178,
     361,   180,   362,   182,   183,   184,   185,   186,   187,   188,
     363,   364,   191,   192,   193,   194,   195,   611,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   326,   327,   328,   329,   330,   331,   332,   333,    33,
      34,    35,    36,    37,    38,    39,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,    52,    53,
      54,    55,    56,    57,    58,     0,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,   346,    72,
       0,     0,     0,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,   347,   348,    82,     0,     0,
     612,    84,     0,     0,     0,     0,    87,   349,    89,   350,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     351,   352,   103,   353,   105,     0,   106,   354,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   355,   122,   123,   124,   125,   126,   356,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
       0,   140,   141,   142,     0,   357,   144,   358,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   359,   171,   172,   360,   174,   175,   176,   177,
     178,   361,   180,   362,   182,   183,   184,   185,   186,   187,
     188,   363,   364,   191,   192,   193,   194,   195,   326,   327,
     328,   329,   330,   331,   332,   333,    33,    34,    35,    36,
      37,    38,    39,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,    52,    53,    54,    55,    56,
      57,    58,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   346,    72,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,     0,   347,   348,    82,     0,     0,     0,    84,     0,
       0,     0,     0,    87,   349,    89,   350,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   351,   352,   103,
     353,   105,     0,   106,   354,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   355,   122,
     123,   124,   125,   126,   356,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,     0,   140,   141,
     142,     0,   357,   144,   358,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   359,
     171,   172,   360,   174,   175,   176,   177,   178,   361,   180,
     362,   182,   183,   184,   185,   186,   187,   188,   363,   364,
     191,   192,   193,   194,   195,    34,    35,    36,    37,    38,
      39,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,    52,    53,    54,    55,    56,    57,    58,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,   346,    72,     0,     0,     0,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
     347,   348,    82,     0,     0,     0,    84,     0,     0,     0,
       0,    87,   349,    89,   350,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   351,   352,   103,     0,   105,
       0,   106,     0,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   355,   122,   123,   124,
     125,   126,   356,     0,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,     0,   140,   141,   142,     0,
       0,   144,     0,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   359,   171,   172,
     360,   174,   175,   176,   177,   178,   361,   180,   362,   182,
     183,   184,   185,   186,   187,   188,   363,   364,   191,   192,
     193,   194,   195,     0,  1378,     0,     0,   951,   952,   953,
     954,     0,   955,     0,     0,   956,     0,     0,   957,   958,
     959,   960,   961,   962,   963,   964,   965,     0,     0,   966,
     967,   968,  1390,     0,     0,   951,   952,   953,   954,     0,
     955,     0,     0,   956,     0,     0,   957,   958,   959,   960,
     961,   962,   963,   964,   965,     0,     0,   966,   967,   968,
    1399,     0,     0,   951,   952,   953,   954,     0,   955,   321,
       0,   956,   969,   970,   957,   958,   959,   960,   961,   962,
     963,   964,   965,     0,     0,   966,   967,   968,  1401,     0,
       0,   951,   952,   953,   954,     0,   955,   321,     0,   956,
     969,   970,   957,   958,   959,   960,   961,   962,   963,   964,
     965,     0,     0,   966,   967,   968,  1404,     0,     0,   951,
     952,   953,   954,     0,   955,   321,     0,   956,   969,   970,
     957,   958,   959,   960,   961,   962,   963,   964,   965,     0,
       0,   966,   967,   968,  1405,     0,     0,   951,   952,   953,
     954,     0,   955,   321,     0,   956,   969,   970,   957,   958,
     959,   960,   961,   962,   963,   964,   965,     0,     0,   966,
     967,   968,  1410,     0,     0,   951,   952,   953,   954,     0,
     955,   321,     0,   956,   969,   970,   957,   958,   959,   960,
     961,   962,   963,   964,   965,     0,     0,   966,   967,   968,
    1413,     0,     0,   951,   952,   953,   954,     0,   955,   321,
       0,   956,   969,   970,   957,   958,   959,   960,   961,   962,
     963,   964,   965,     0,     0,   966,   967,   968,  1416,     0,
       0,   951,   952,   953,   954,     0,   955,   321,     0,   956,
     969,   970,   957,   958,   959,   960,   961,   962,   963,   964,
     965,     0,     0,   966,   967,   968,  1418,     0,     0,   951,
     952,   953,   954,     0,   955,   321,     0,   956,   969,   970,
     957,   958,   959,   960,   961,   962,   963,   964,   965,     0,
       0,   966,   967,   968,  1420,     0,     0,   951,   952,   953,
     954,     0,   955,   321,     0,   956,   969,   970,   957,   958,
     959,   960,   961,   962,   963,   964,   965,     0,     0,   966,
     967,   968,  1516,     0,     0,   951,   952,   953,   954,     0,
     955,   321,     0,   956,   969,   970,   957,   958,   959,   960,
     961,   962,   963,   964,   965,     0,     0,   966,   967,   968,
    1517,     0,     0,   951,   952,   953,   954,     0,   955,   321,
       0,   956,   969,   970,   957,   958,   959,   960,   961,   962,
     963,   964,   965,     0,     0,   966,   967,   968,  1522,     0,
       0,   951,   952,   953,   954,     0,   955,   321,     0,   956,
     969,   970,   957,   958,   959,   960,   961,   962,   963,   964,
     965,     0,     0,   966,   967,   968,  1528,     0,     0,   951,
     952,   953,   954,     0,   955,   321,     0,   956,   969,   970,
     957,   958,   959,   960,   961,   962,   963,   964,   965,     0,
       0,   966,   967,   968,  1590,     0,     0,   951,   952,   953,
     954,     0,   955,   321,     0,   956,   969,   970,   957,   958,
     959,   960,   961,   962,   963,   964,   965,     0,     0,   966,
     967,   968,  1591,     0,     0,   951,   952,   953,   954,     0,
     955,   321,     0,   956,   969,   970,   957,   958,   959,   960,
     961,   962,   963,   964,   965,     0,     0,   966,   967,   968,
    1594,     0,     0,   951,   952,   953,   954,     0,   955,   321,
       0,   956,   969,   970,   957,   958,   959,   960,   961,   962,
     963,   964,   965,     0,     0,   966,   967,   968,  1595,     0,
       0,   951,   952,   953,   954,     0,   955,   321,     0,   956,
     969,   970,   957,   958,   959,   960,   961,   962,   963,   964,
     965,     0,     0,   966,   967,   968,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   321,     0,     0,   969,   970,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   321,     0,     0,   969,   970
};

static const yytype_int16 yycheck[] =
{
      21,   484,    10,   416,   923,   224,   588,  1046,   421,     8,
    1113,   424,  1129,  1268,  1327,   428,  1304,   656,   631,   513,
     633,   311,   319,   636,   275,   305,   277,   319,     8,   319,
      10,   485,   486,   487,   488,     3,     4,     5,   305,    14,
     311,   319,   305,   917,   311,   388,   121,    10,   319,   305,
     862,    40,   319,   305,   655,   311,   685,   400,   401,   311,
     305,   311,    40,   319,   697,   698,   311,   319,   311,   319,
      48,    33,     9,    11,   319,   121,   319,   517,   518,   519,
     305,   521,   522,   121,    40,   685,   311,    58,    62,     9,
     530,    12,    58,   533,   319,   438,   697,   698,   538,   539,
     540,   541,   542,   543,   544,   545,    50,   547,   118,  1306,
     311,  1481,   552,   553,   554,    41,   556,   557,   319,   942,
     305,   944,   113,   563,   113,   565,   311,     9,   568,   735,
     736,    69,    40,   100,   319,    61,   576,   577,   578,   579,
     580,   581,   582,   583,    48,   585,   311,   121,    33,    58,
     274,   974,    33,    48,   319,    34,    35,   113,   148,    47,
      48,   984,    40,    30,     9,   728,   989,     0,   991,    36,
     993,    23,   995,    51,   997,   142,   999,   301,  1001,  1098,
     311,  1485,  1005,    48,  1007,    34,    35,   124,   319,    41,
     181,   181,   181,   444,   103,    48,    32,   448,   761,   209,
     210,   452,   453,   454,    40,   113,   457,    52,    53,    54,
     173,   128,    48,    49,    34,    35,    52,    53,    54,   832,
      48,   634,   160,   161,    32,   181,   234,   115,    40,   237,
     174,   725,    40,   862,   835,   864,    48,   312,   651,   314,
      48,   162,  1612,  1498,    52,    53,    54,  1059,   130,    44,
    1124,    46,   227,   224,   234,   217,   507,   237,   224,   510,
     238,   146,   862,   189,   864,   146,   312,   313,    40,   173,
     550,   243,   192,  1561,   312,   313,    48,   574,   173,   124,
     720,   571,   574,   550,   574,   150,   114,   550,   124,   895,
    1487,  1488,  1489,  1490,   550,   184,   574,   150,   550,   188,
     571,   907,  1615,   574,   571,   550,  1610,   574,   173,  1132,
     159,   123,   655,  1136,   920,   571,   124,   124,   574,   571,
     173,   571,   574,   106,   574,   550,   571,   104,   571,   574,
     242,   574,   211,   212,   213,   307,    25,     9,   306,   159,
      19,   315,   316,   317,   312,   124,   571,   315,     9,   574,
    1173,   123,   129,    42,   697,   698,   699,   700,   274,  1476,
     104,    40,  1185,  1618,   171,   550,    47,    48,   389,    41,
     571,   273,   393,   574,   181,   287,   397,   628,  1481,  1482,
      41,   297,   403,   382,   150,   297,   571,   638,   639,   574,
      22,  1024,   171,    48,   415,   297,  1499,   396,   419,   420,
     223,    33,   382,  1036,   118,   241,   571,  1446,   388,   574,
      12,   432,   433,   434,   665,   238,   396,   416,   439,    11,
     400,   401,   421,  1024,   918,   424,  1008,  1009,   922,   428,
    1059,    23,    19,   241,   115,  1036,   416,  1066,    40,  1068,
     571,   421,    34,   574,   424,    40,    48,   274,   428,  1088,
     793,   272,   451,    40,   220,   221,  1095,   274,   438,  1059,
     281,    48,   228,   714,   715,   716,  1066,  1080,  1068,    45,
     297,   451,    48,   300,   301,  1081,   497,  1580,  1084,  1085,
     297,   502,   503,   121,   122,   506,   829,   900,    40,   203,
      32,    94,   835,  1099,    21,   209,   210,  1130,    19,    64,
      65,    66,  1135,    67,    68,    45,    48,  1140,    48,   274,
     113,  1144,   136,    40,   513,   265,   119,  1620,    24,   143,
      19,    27,    28,   242,    33,    31,  1349,   178,   274,  1130,
     249,   296,   297,   513,  1135,   186,   123,   101,   114,  1140,
      49,    32,    48,  1144,    64,    65,    66,   297,  1371,    40,
     296,   297,   302,   303,    33,    40,   274,    48,  1191,   810,
     125,    52,    53,    54,  1387,   189,   190,   191,   286,    64,
      49,    66,  1395,    22,   114,  1494,  1399,    40,   296,   242,
     601,   244,  1221,    48,    33,    48,    40,    22,   251,   252,
    1191,   194,   195,   196,   257,   616,   199,   200,    33,   850,
     851,   852,    67,    68,    33,   125,   171,   270,   271,   860,
     116,   117,    33,    33,   179,   180,   181,   182,   183,    19,
      49,    22,   643,   644,    33,   190,   191,   274,    49,    49,
     125,    19,    33,   124,   885,   634,    19,   284,  1078,  1079,
      49,    19,    64,    65,    66,  1274,   865,   273,   274,   296,
     297,   171,   651,   297,   634,     9,   300,   222,    40,   179,
     180,   181,   182,   183,   229,  1304,    33,   232,    48,   295,
     296,   651,   298,   242,  1274,   655,   171,   299,    33,  1312,
     249,  1024,    49,   305,   179,   180,   181,   182,   183,   311,
      33,    33,    33,  1036,    49,   190,   191,   319,  1337,    33,
      33,    19,   222,   125,    30,    33,    49,    49,    49,   229,
      36,  1312,   232,  1319,  1320,    49,    49,   697,   698,   699,
     700,    49,  1328,   169,   163,   164,   725,   222,    32,   175,
      33,   730,    33,    84,   229,    40,    87,   232,    19,    90,
      91,    92,    93,    48,    48,   725,    49,    33,    49,   171,
     730,    19,   274,  1176,   734,    41,    19,   179,   180,   181,
     182,   183,   284,   285,  1187,  1188,    19,  1018,   190,   191,
    1021,  1022,  1023,  1196,   296,   297,  1027,  1200,     9,  1202,
    1203,   178,  1205,   178,  1267,  1208,  1209,  1130,   178,   186,
      48,   186,  1135,  1276,  1277,    33,   186,  1140,   149,     9,
    1051,  1144,    58,    41,    33,  1438,  1439,  1261,   274,   232,
     232,  1224,    41,   793,    33,    33,    33,  1230,   284,   285,
      33,    19,    41,    41,    41,  1076,  1077,   848,    41,  1442,
     296,   297,   183,    44,  1247,    46,  1475,  1438,  1439,  1421,
    1422,  1474,   863,  1449,   218,   206,   207,   208,  1191,   829,
     201,   202,   226,  1492,   205,   835,   855,    33,    33,    33,
      33,    33,    33,    40,    33,    41,    41,    41,    41,    41,
      41,  1504,    41,  1474,    33,   855,    33,    30,    40,   162,
    1513,   164,    41,    36,    41,    64,   234,    66,   104,   105,
     238,   237,  1525,    33,  1500,     3,     4,     5,     6,     7,
       8,   900,   130,  1504,  1537,    90,    91,    92,    93,   136,
     137,  1544,  1513,   155,    64,   914,    66,   187,   188,   918,
     900,   154,  1561,   922,  1525,    21,   131,   193,   133,   134,
    1569,   136,   137,   156,   914,   167,  1537,   158,   918,    52,
      53,    54,   922,  1544,   308,   309,   125,    21,  1587,   929,
      34,    35,  1534,   466,   467,   468,   469,   470,   471,   166,
     473,   474,   475,   476,   477,   478,   479,   480,   171,  1312,
     211,   212,   213,   169,   170,   125,     3,     4,     5,   169,
     170,  1464,  1465,  1612,   119,   120,   190,   191,  1627,  1628,
    1629,  1630,   171,   121,   122,  1246,  1635,   138,   139,   185,
     179,   180,   181,   182,   183,   282,   283,   188,   310,   311,
      40,   190,   191,   287,   288,    40,  1429,   141,   142,    40,
    1433,   171,   176,   177,    12,    85,    86,    85,    86,   179,
     180,   181,   182,   183,   254,   255,   141,   142,    13,    14,
      15,    16,    17,    18,  1024,    98,    99,   214,   215,    24,
     482,   483,    40,   232,    40,   242,  1036,    40,   489,   490,
      48,    29,    37,   491,   492,    16,    17,   500,   501,   699,
     700,    48,   222,  1556,  1622,  1623,    41,    41,    48,   229,
      41,    33,   232,     9,    33,   272,  1094,   274,   275,   276,
     277,   278,   279,   280,    48,  1438,  1439,   135,    48,   150,
     157,   136,   289,   290,   291,   292,   293,   294,   157,    62,
     150,  1110,    52,   150,  1094,   124,   150,   304,   305,   306,
    1141,  1129,    50,   104,  1145,   105,    41,    41,    41,    41,
    1110,  1474,   107,   108,   109,   110,   111,   112,    41,    41,
      10,    48,   223,   150,   223,   135,    37,    58,  1169,  1129,
    1130,   124,     9,  1174,  1175,  1135,    83,   129,  1179,   130,
    1140,  1504,    10,   676,  1144,  1186,   113,    10,   152,   132,
    1513,  1192,   148,  1194,     9,    40,  1197,    40,    40,  1430,
    1201,  1432,  1525,  1434,  1435,  1206,    40,    40,    33,    89,
     240,   239,  1213,   168,  1537,    82,  1217,   197,    23,   228,
     228,  1544,   124,    37,   140,   171,    33,   233,   124,   171,
     189,  1191,   113,   254,    83,   297,   299,   297,  1469,   242,
     274,   297,   242,    41,     9,  1224,    41,    41,    41,   223,
       9,  1230,   192,    41,   223,   140,    96,   211,   132,    95,
      33,    37,   171,    33,  1224,    37,   124,   283,  1247,   282,
    1230,   242,   211,   251,   242,   121,   299,   245,   246,   247,
     248,   266,   250,   251,     9,   253,    43,  1247,   256,   257,
     258,   259,   260,   261,   262,   263,   264,    43,   130,   267,
     268,   269,   153,   132,    41,   273,   274,    41,    40,  1297,
      49,   150,   143,    95,   198,   150,   233,    19,  1306,    40,
      40,   211,   124,    12,   121,    21,   150,   295,   296,   242,
     298,   242,   150,    10,   130,    41,    33,  1297,   204,   307,
      26,   130,   310,   311,   113,   242,  1306,    41,   245,   246,
     247,   248,  1312,   250,   940,  1164,   253,   204,     6,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   952,  1370,
     267,   268,   269,  1604,  1483,  1606,  1182,   242,  1171,   300,
     245,   246,   247,   248,   306,   250,   300,   306,   253,   301,
     313,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     315,  1632,   267,   268,   269,   315,   307,   312,   312,  1292,
     307,   833,   242,   310,   311,   245,   246,   247,   248,   318,
     250,   201,   632,   253,   201,   860,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   462,  1051,   267,   268,   269,
     635,   102,   307,   637,  1025,   310,   311,  1266,   885,  1221,
    1429,  1423,   464,   510,  1433,   441,   700,   835,   394,   394,
     829,   465,   400,   438,  1274,  1066,   864,  1256,  1068,  1429,
    1123,  1458,  1270,  1433,   873,  1497,  1296,   307,  1438,  1439,
     310,   311,  1502,   627,  1443,  1088,    -1,    -1,  1476,    -1,
      -1,  1479,  1480,    -1,    -1,  1483,    -1,    -1,    -1,  1487,
    1488,  1489,  1490,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1514,  1474,    -1,  1476,    -1,    -1,  1479,
    1480,    -1,    -1,  1483,    -1,  1526,    -1,  1487,  1488,  1489,
    1490,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1504,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1513,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1525,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1574,    -1,    -1,    -1,  1537,    -1,    -1,
      -1,    -1,    -1,    -1,  1544,    55,    56,    57,    58,    59,
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
     240,   241,    -1,   245,   246,   247,   248,    -1,   250,    -1,
      -1,   253,    -1,    -1,   256,   257,   258,   259,   260,   261,
     262,   263,   264,    -1,    -1,   267,   268,   269,    -1,    -1,
      -1,    -1,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      -1,    38,    39,    40,    41,   307,    -1,    -1,   310,   311,
      -1,    -1,   312,    -1,   314,    52,    53,    54,    55,    56,
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
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    36,    -1,    38,    39,    40,    41,    -1,    -1,
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
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    49,    -1,    -1,    52,    53,    54,    55,    56,    57,
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
      -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    53,    54,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
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
      -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,
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
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
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
      20,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,
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
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     238,   239,   240,   241,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,
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
     235,   236,   237,   238,   239,   240,   241,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,
      -1,    -1,    -1,   125,   126,   127,    -1,    -1,   130,   131,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
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
     240,   241,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
     119,   120,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,
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
     239,   240,   241,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,   130,   131,   132,   133,   134,   135,   136,
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
     237,   238,   239,   240,   241,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,
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
     235,   236,   237,   238,   239,   240,   241,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,   119,   120,   121,    -1,    -1,
     124,   125,    -1,    -1,    -1,    -1,   130,   131,   132,   133,
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
     234,   235,   236,   237,   238,   239,   240,   241,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,   130,   131,   132,   133,   134,   135,   136,
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
     237,   238,   239,   240,   241,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
     119,   120,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    -1,   148,
      -1,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,    -1,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,    -1,   185,   186,   187,    -1,
      -1,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,    -1,   242,    -1,    -1,   245,   246,   247,
     248,    -1,   250,    -1,    -1,   253,    -1,    -1,   256,   257,
     258,   259,   260,   261,   262,   263,   264,    -1,    -1,   267,
     268,   269,   242,    -1,    -1,   245,   246,   247,   248,    -1,
     250,    -1,    -1,   253,    -1,    -1,   256,   257,   258,   259,
     260,   261,   262,   263,   264,    -1,    -1,   267,   268,   269,
     242,    -1,    -1,   245,   246,   247,   248,    -1,   250,   307,
      -1,   253,   310,   311,   256,   257,   258,   259,   260,   261,
     262,   263,   264,    -1,    -1,   267,   268,   269,   242,    -1,
      -1,   245,   246,   247,   248,    -1,   250,   307,    -1,   253,
     310,   311,   256,   257,   258,   259,   260,   261,   262,   263,
     264,    -1,    -1,   267,   268,   269,   242,    -1,    -1,   245,
     246,   247,   248,    -1,   250,   307,    -1,   253,   310,   311,
     256,   257,   258,   259,   260,   261,   262,   263,   264,    -1,
      -1,   267,   268,   269,   242,    -1,    -1,   245,   246,   247,
     248,    -1,   250,   307,    -1,   253,   310,   311,   256,   257,
     258,   259,   260,   261,   262,   263,   264,    -1,    -1,   267,
     268,   269,   242,    -1,    -1,   245,   246,   247,   248,    -1,
     250,   307,    -1,   253,   310,   311,   256,   257,   258,   259,
     260,   261,   262,   263,   264,    -1,    -1,   267,   268,   269,
     242,    -1,    -1,   245,   246,   247,   248,    -1,   250,   307,
      -1,   253,   310,   311,   256,   257,   258,   259,   260,   261,
     262,   263,   264,    -1,    -1,   267,   268,   269,   242,    -1,
      -1,   245,   246,   247,   248,    -1,   250,   307,    -1,   253,
     310,   311,   256,   257,   258,   259,   260,   261,   262,   263,
     264,    -1,    -1,   267,   268,   269,   242,    -1,    -1,   245,
     246,   247,   248,    -1,   250,   307,    -1,   253,   310,   311,
     256,   257,   258,   259,   260,   261,   262,   263,   264,    -1,
      -1,   267,   268,   269,   242,    -1,    -1,   245,   246,   247,
     248,    -1,   250,   307,    -1,   253,   310,   311,   256,   257,
     258,   259,   260,   261,   262,   263,   264,    -1,    -1,   267,
     268,   269,   242,    -1,    -1,   245,   246,   247,   248,    -1,
     250,   307,    -1,   253,   310,   311,   256,   257,   258,   259,
     260,   261,   262,   263,   264,    -1,    -1,   267,   268,   269,
     242,    -1,    -1,   245,   246,   247,   248,    -1,   250,   307,
      -1,   253,   310,   311,   256,   257,   258,   259,   260,   261,
     262,   263,   264,    -1,    -1,   267,   268,   269,   242,    -1,
      -1,   245,   246,   247,   248,    -1,   250,   307,    -1,   253,
     310,   311,   256,   257,   258,   259,   260,   261,   262,   263,
     264,    -1,    -1,   267,   268,   269,   242,    -1,    -1,   245,
     246,   247,   248,    -1,   250,   307,    -1,   253,   310,   311,
     256,   257,   258,   259,   260,   261,   262,   263,   264,    -1,
      -1,   267,   268,   269,   242,    -1,    -1,   245,   246,   247,
     248,    -1,   250,   307,    -1,   253,   310,   311,   256,   257,
     258,   259,   260,   261,   262,   263,   264,    -1,    -1,   267,
     268,   269,   242,    -1,    -1,   245,   246,   247,   248,    -1,
     250,   307,    -1,   253,   310,   311,   256,   257,   258,   259,
     260,   261,   262,   263,   264,    -1,    -1,   267,   268,   269,
     242,    -1,    -1,   245,   246,   247,   248,    -1,   250,   307,
      -1,   253,   310,   311,   256,   257,   258,   259,   260,   261,
     262,   263,   264,    -1,    -1,   267,   268,   269,   242,    -1,
      -1,   245,   246,   247,   248,    -1,   250,   307,    -1,   253,
     310,   311,   256,   257,   258,   259,   260,   261,   262,   263,
     264,    -1,    -1,   267,   268,   269,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,   310,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   307,    -1,    -1,   310,   311
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
     457,   458,   459,   464,   474,   477,   481,   482,   483,   484,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   525,   526,   527,
     528,   529,   532,   533,   534,   545,   547,   549,   550,   551,
     554,   556,   557,   558,   568,   569,   570,   571,   572,   573,
     574,   576,   578,   580,   621,   622,   623,   624,   625,   626,
     627,   630,   631,   632,   633,   635,   642,   643,   647,   648,
     649,   650,   656,   657,   184,   188,   404,   405,   406,   407,
     420,   423,   411,   412,   413,   414,   420,   423,   415,   416,
     417,   418,   420,   423,   419,   420,   421,   422,   423,   424,
     243,   307,   320,   321,   343,     0,    55,    56,    57,    58,
      59,    60,    61,    62,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,   102,   119,   120,   131,
     133,   144,   145,   147,   151,   165,   171,   189,   191,   216,
     219,   225,   227,   235,   236,   524,   656,   657,    55,    56,
      59,    62,   189,   516,   121,   122,   535,   128,   106,   546,
     505,   104,   537,   496,   496,    41,   454,    19,    40,    48,
     123,   555,    40,    48,    40,    40,    40,    48,   123,   559,
      40,    40,    40,    48,    19,    19,    19,    19,    19,    19,
      19,    19,    19,    19,    19,    48,     9,   628,   629,    48,
      48,     9,   460,   461,     9,   192,   465,   466,     9,   475,
     476,   475,    40,    40,    48,    67,    68,    19,    40,    48,
     123,   552,    40,   448,    58,   103,    58,   224,    58,    58,
     224,   232,   237,    33,   130,   131,   133,   134,   136,   137,
     459,   464,   467,   468,   154,   155,    13,    14,    15,    16,
      17,    18,    24,    37,   107,   108,   109,   110,   111,   112,
     168,   193,    34,    35,   159,    11,    69,   160,   161,    12,
     162,   163,   164,   156,   167,   158,   166,    48,   501,   505,
      30,    36,    21,    21,   516,   516,    21,    40,   455,   455,
      40,    51,   185,   171,   178,   186,   408,   409,   426,   428,
     429,   430,   431,   433,   434,   435,   438,   439,   440,   443,
     444,   446,   453,   636,   405,   406,   407,   178,   408,   409,
     426,   428,   430,   431,   432,   444,   453,   636,   412,   413,
     414,   178,   425,   426,   428,   429,   430,   431,   433,   434,
     435,   438,   439,   444,   446,   447,   453,   620,   636,   416,
     417,   418,   421,   422,   424,   178,   425,   426,   428,   430,
     431,   432,   444,   447,   453,   636,   322,   344,   536,   104,
     105,   548,    29,   656,    41,    11,    41,   575,   582,   635,
     454,    48,   553,    41,   454,    41,    61,   189,   578,   580,
      41,    41,   124,   634,   656,   454,    48,   560,   577,   582,
     581,   583,   635,    41,   454,   454,   524,    33,   217,   454,
     454,   524,    33,   524,     9,    33,   524,    33,   146,   146,
     454,   454,   454,    48,    48,    11,    41,   579,   583,   454,
     553,     9,    41,   450,   451,   150,   563,   455,   157,   455,
     656,   455,   455,   455,   455,   135,   136,   468,   483,   484,
     486,   486,   486,   486,   486,   486,   485,   486,   486,   486,
     486,   486,   486,   486,   486,    62,   489,   489,   488,   490,
     490,   490,   490,   491,   491,   492,   492,   157,   150,   150,
     150,    49,   454,   506,   506,   454,   454,   454,    23,    41,
     455,   530,   531,   150,   220,   221,   228,    41,   530,    52,
     124,   634,    64,    66,   125,   171,   179,   180,   181,   182,
     183,   190,   191,   232,   410,   187,   188,    50,   427,   427,
     427,   427,   427,   427,   427,   427,   178,   186,    65,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   178,   222,
     229,   449,   427,   427,   427,   427,   427,   427,   427,   427,
     178,   178,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   272,   281,   323,   308,   309,   346,   104,   537,   105,
     104,   129,   502,    33,    41,    49,    49,   454,    49,    41,
      41,    41,    41,    49,    49,   454,    41,    41,    49,    49,
      10,   629,   455,    49,    49,   563,   461,   563,   524,   466,
     563,   476,   455,   455,    41,    41,    49,   454,   454,    33,
      41,    49,   524,    33,    41,    40,    63,   172,   191,   564,
     566,   567,   568,   635,   651,   652,   653,   655,    48,   452,
     223,    58,   150,   223,   223,   238,   455,   469,   470,   471,
     135,   486,    40,    48,   241,   500,   521,   586,   589,   590,
     591,   592,   593,   594,   595,   596,   564,   564,   561,   567,
     561,    49,    22,    22,    22,    33,    41,   218,   226,   455,
     455,   455,    41,   174,   427,    37,   169,   170,   124,   585,
       9,   634,   169,   170,   119,   120,   136,   143,   189,   410,
     169,   175,   436,   656,   234,   238,   639,   657,   171,   181,
     442,   585,   171,   585,    83,   603,    67,    68,   101,   410,
     242,   244,   251,   252,   257,   270,   271,   324,   325,   328,
     329,   333,   334,   335,   336,   337,   338,   341,   342,   345,
     242,   245,   246,   247,   248,   250,   253,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   267,   268,   269,   310,
     311,   343,   347,   348,   349,   350,   351,   352,   353,   356,
     357,   361,   362,   363,   364,   365,   370,   371,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   121,   122,
      25,    42,   129,   584,   635,    49,    49,   455,   130,   113,
     462,    10,    10,   132,   148,   478,   480,   152,    49,    49,
     584,   563,   451,   566,    40,    40,    40,    11,    23,    34,
     565,   454,   455,   455,   455,    40,    40,   312,   314,   644,
     656,    33,   138,   139,   472,   469,   586,   454,   593,    48,
     206,   207,   208,   597,    89,   619,   239,   588,   240,    82,
     603,   197,   598,    23,   562,   531,   228,   228,   124,   585,
     524,    37,   140,   585,   171,   171,    33,   124,   656,   121,
     312,   313,   640,   641,   233,   448,   634,   189,   585,   113,
     441,   634,   441,    84,    87,    90,    91,    92,    93,   149,
     183,   201,   202,   205,   604,   605,   606,   607,   608,   611,
     616,   617,   618,    83,   657,   282,   283,   273,   274,   295,
     296,   298,   330,   274,   286,   296,   330,   274,   284,   285,
     296,   297,   346,   274,   296,   297,   346,   242,   272,   274,
     275,   276,   277,   278,   279,   280,   289,   290,   291,   292,
     293,   294,   304,   305,   306,   242,   114,   452,   351,   297,
     254,   366,   367,   368,   299,   297,   300,   346,   273,   297,
     355,   274,   358,   242,   346,   265,   297,   302,   303,   372,
     274,   296,   297,   346,   297,   346,   274,   297,   346,   346,
     274,   297,   300,   301,   346,   274,   297,   346,   274,   301,
     346,   242,   287,   297,   287,   288,   346,   297,   346,   537,
     537,   544,    41,   455,     9,   192,   463,   455,   455,   455,
       9,   564,   181,   479,   480,   455,    23,    41,    41,    41,
      41,    11,    41,   564,   654,    49,   223,     9,   645,   646,
     645,   223,   470,   140,   473,    41,    49,    49,   586,    96,
     211,    95,   590,    94,   113,   119,   194,   195,   196,   199,
     200,   587,   600,   591,   132,   118,   209,   210,   599,   455,
     455,   427,   427,   563,   585,   141,   142,   585,   585,   176,
     177,   437,    40,   452,   638,   639,    33,    20,    30,    36,
      55,    70,   230,   231,   394,   395,   396,   397,   400,   401,
     402,   516,   150,   173,   452,    37,   171,   441,   585,    33,
      37,    90,    91,    92,    93,    85,    86,    40,   113,   181,
     610,   211,    85,    86,   656,   633,   604,   448,   283,   282,
     326,   394,   564,    52,    53,    54,   327,   251,   331,   332,
     346,   564,   346,   564,   454,   242,   564,   454,   242,    62,
     121,   315,   316,   317,   339,   121,   340,   340,   242,   454,
     299,   255,   367,   369,   346,   454,   454,   345,   242,   121,
     312,   314,   354,   454,   242,   249,   359,   360,   242,   359,
     242,   346,   454,   345,   345,   266,   373,   564,   454,   242,
     454,   242,   345,   454,   242,   242,   345,   454,   345,   345,
     242,   345,   454,   242,   345,   345,   242,   454,   242,   454,
     242,    43,    43,    31,   116,   117,   452,   533,   524,     9,
     132,   524,   130,     9,   130,   153,    41,    41,   150,    33,
      41,   455,   524,    33,    41,    41,    40,   141,   142,   143,
     597,    49,   490,    95,    98,    99,   487,   488,   599,   214,
     215,   602,   602,   592,   100,   142,   488,   488,   198,    10,
     173,   445,    41,   450,   150,   637,   233,   641,   516,    19,
      19,    40,    40,    12,   452,   638,   401,    30,    36,    30,
      36,   403,   564,   585,   585,   211,   181,   610,   585,    40,
     113,   181,   613,   124,   150,   173,   452,   121,   312,   313,
     274,   284,   285,   296,   297,   346,   242,   242,   121,   454,
     346,   242,   242,   274,   284,   296,   297,   346,   242,   346,
     242,   346,   537,   537,   535,   524,   455,   150,   455,   524,
     455,   455,   564,   564,   150,   563,   646,   645,   585,   211,
     212,   213,   601,   601,   488,   488,   159,   455,    41,   564,
     452,   394,   516,   516,   398,   523,   633,   633,   395,   637,
     401,   401,   401,   401,    21,   173,   452,   441,   609,   609,
     203,   599,   614,   633,   585,   612,   612,   564,   564,   454,
     242,   242,   564,   454,   242,   242,    44,    46,   538,    44,
      46,   539,   537,   564,   130,   564,    10,    41,   488,   452,
     638,    41,    33,   452,   454,    33,    41,    41,   633,   204,
      33,    41,   162,   164,   615,   173,   452,   540,   542,   541,
     543,    26,   130,   455,   455,   637,   399,   521,   523,    22,
     610,   599,   633,   613,   613,    45,   114,   452,    47,   115,
     452,    45,   114,   452,    47,   115,   452,   455,   452,    41,
     204
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
#line 761 "../src/parser/XQParser.y"
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
#line 791 "../src/parser/XQParser.y"
    {
  }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 794 "../src/parser/XQParser.y"
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
#line 817 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 821 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 839 "../src/parser/XQParser.y"
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
#line 858 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, 0, MEMMGR));
  }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 862 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 867 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 874 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 879 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 884 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 892 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 896 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 902 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 907 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 917 "../src/parser/XQParser.y"
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
#line 930 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, false, true, MEMMGR));
  }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 934 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 941 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 946 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 954 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 958 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 966 "../src/parser/XQParser.y"
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
#line 993 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 997 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 1004 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 1010 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 1015 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 1020 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1029 "../src/parser/XQParser.y"
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
#line 1053 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1057 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1064 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1069 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1074 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 1079 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1090 "../src/parser/XQParser.y"
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
#line 1108 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1112 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1119 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1124 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 1132 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 1157 "../src/parser/XQParser.y"
    {
  }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1160 "../src/parser/XQParser.y"
    {
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1163 "../src/parser/XQParser.y"
    {
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1166 "../src/parser/XQParser.y"
    {
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1169 "../src/parser/XQParser.y"
    {
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1172 "../src/parser/XQParser.y"
    {
  }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1175 "../src/parser/XQParser.y"
    {
  }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1178 "../src/parser/XQParser.y"
    {
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1181 "../src/parser/XQParser.y"
    {
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1184 "../src/parser/XQParser.y"
    {
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1187 "../src/parser/XQParser.y"
    {
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1190 "../src/parser/XQParser.y"
    {
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1193 "../src/parser/XQParser.y"
    {
  }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1196 "../src/parser/XQParser.y"
    {
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1199 "../src/parser/XQParser.y"
    {
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1202 "../src/parser/XQParser.y"
    {
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1205 "../src/parser/XQParser.y"
    {
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1208 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1218 "../src/parser/XQParser.y"
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
#line 1230 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1233 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1241 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1246 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1251 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1259 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1267 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1278 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1288 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1292 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1299 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1308 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1312 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1317 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1327 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1331 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1336 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1341 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1370 "../src/parser/XQParser.y"
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
#line 1388 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1392 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1397 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1406 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1415 "../src/parser/XQParser.y"
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
#line 1435 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1439 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1444 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1452 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1457 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1461 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1468 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1472 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1480 "../src/parser/XQParser.y"
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
#line 1493 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1497 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1507 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1511 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1519 "../src/parser/XQParser.y"
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
#line 1537 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1541 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1548 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1553 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1558 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1566 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1572 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1580 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1588 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1595 "../src/parser/XQParser.y"
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
#line 1609 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1613 "../src/parser/XQParser.y"
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
#line 1627 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1636 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1643 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1647 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1654 "../src/parser/XQParser.y"
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
#line 1689 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1693 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1698 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1704 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1713 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1717 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1724 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1728 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1735 "../src/parser/XQParser.y"
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
#line 1753 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), 0, 0, MEMMGR));
  }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1757 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1764 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1769 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->seqType = (yyvsp[(3) - (3)].sequenceType);
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1777 "../src/parser/XQParser.y"
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
#line 1795 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1799 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1807 "../src/parser/XQParser.y"
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
#line 1829 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1833 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1840 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1848 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1857 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1865 "../src/parser/XQParser.y"
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
#line 1902 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1906 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1913 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1920 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1929 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1938 "../src/parser/XQParser.y"
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
#line 1965 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1969 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1976 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1988 "../src/parser/XQParser.y"
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
#line 2014 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 2018 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 2025 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 2035 "../src/parser/XQParser.y"
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
#line 2047 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2051 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 2056 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2065 "../src/parser/XQParser.y"
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
#line 2078 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 2082 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 2087 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2096 "../src/parser/XQParser.y"
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
#line 2110 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 2114 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2127 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2132 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 2144 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2148 "../src/parser/XQParser.y"
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
#line 2156 "../src/parser/XQParser.y"
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
#line 2169 "../src/parser/XQParser.y"
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
#line 2177 "../src/parser/XQParser.y"
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
#line 2190 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 2197 "../src/parser/XQParser.y"
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
#line 2236 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 2240 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2244 "../src/parser/XQParser.y"
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
#line 2262 "../src/parser/XQParser.y"
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
#line 2280 "../src/parser/XQParser.y"
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
#line 2290 "../src/parser/XQParser.y"
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
#line 2304 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 2312 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 2318 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 2324 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 2330 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2341 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 2345 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 2375 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 2379 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2383 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2387 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2391 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 2395 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 2401 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 2407 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 2433 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), (yyvsp[(5) - (5)].astNode), NULL, false, true, MEMMGR));
  }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 2437 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 2441 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), NULL, NULL, false, true, MEMMGR));
  }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 2445 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), NULL, (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 2474 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 2478 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 2482 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 2486 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 2490 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 2494 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 2500 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 2506 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 2510 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 2537 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 2541 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 2545 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 2549 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2553 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2557 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2563 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2569 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2588 "../src/parser/XQParser.y"
    {
    if(!XPath2Utils::equals((yyvsp[(3) - (4)].str),sz1_0))
      yyerror((yylsp[(2) - (4)]), "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
  }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2593 "../src/parser/XQParser.y"
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
#line 2622 "../src/parser/XQParser.y"
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
#line 2636 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2640 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 2644 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2648 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2652 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 2656 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 2662 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2668 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2672 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 2704 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 2712 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 2717 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 2726 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 2731 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 328:

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

  case 329:

/* Line 1455 of yacc.c  */
#line 2800 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 2808 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 2813 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 2822 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 2827 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 2836 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 2846 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 2850 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 2858 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 2862 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 339:

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

  case 340:

/* Line 1455 of yacc.c  */
#line 2886 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 341:

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

  case 342:

/* Line 1455 of yacc.c  */
#line 2907 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 2915 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 2919 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 2924 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 2933 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 2937 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 348:

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

  case 349:

/* Line 1455 of yacc.c  */
#line 2955 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), CONTEXT, &loc);
  }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 2967 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 2974 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 2978 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 2986 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 2991 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 3001 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),WRAP((yylsp[(6) - (6)]), (yyvsp[(6) - (6)].astNode)),NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 3005 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),WRAP((yylsp[(8) - (8)]), (yyvsp[(8) - (8)].astNode)),(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 3009 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),NULL,NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 3013 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),NULL,(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 3020 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 3024 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 3030 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 3034 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 3042 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 3047 "../src/parser/XQParser.y"
    {
    XQUserFunction::ArgumentSpecs* paramList = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 3057 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQUserFunction::ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 3065 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 3073 "../src/parser/XQParser.y"
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
#line 3086 "../src/parser/XQParser.y"
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
#line 3124 "../src/parser/XQParser.y"
    {
      // Add a ContextTuple at the start
      TupleNode *tmp = setLastAncestor((yyvsp[(1) - (3)].tupleNode), WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)));

      // Add the return expression
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQReturn(tmp, (yyvsp[(3) - (3)].astNode), MEMMGR));
    }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 3135 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), setLastAncestor((yyvsp[(2) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode)));
    }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 3139 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 3143 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 3151 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 3157 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 3170 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 3177 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 3185 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 3196 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 3200 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 3210 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 3214 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 3224 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 3231 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 3239 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 3243 "../src/parser/XQParser.y"
    {
    ASTNode *literal = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  X("0"), AnyAtomicType::DECIMAL,
                  MEMMGR));
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(3) - (5)].str), literal, MEMMGR));
  }
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 3256 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 3264 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 3269 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 3277 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 3287 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 3294 "../src/parser/XQParser.y"
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

  case 411:

/* Line 1455 of yacc.c  */
#line 3309 "../src/parser/XQParser.y"
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

  case 412:

/* Line 1455 of yacc.c  */
#line 3325 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 3329 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 3333 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3340 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 3349 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 3353 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 3362 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 3370 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 3381 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 3389 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 3400 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR);
  }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 3407 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].caseClauses)->push_back((yyvsp[(2) - (2)].caseClause));
    (yyval.caseClauses)=(yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3412 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses)=new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back((yyvsp[(1) - (1)].caseClause));
  }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 3420 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 3424 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 3432 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, (yyvsp[(2) - (4)].sequenceType), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 3436 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (7)].str), (yyvsp[(5) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode)));
  }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 3444 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 3452 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == Or::name) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 3466 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == And::name) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 3485 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 3489 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 3492 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3493 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 3497 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 3501 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 3505 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 3509 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 3513 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 3517 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 3521 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 3525 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 3529 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 3533 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 3537 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 3541 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 3550 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 3554 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 3563 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Range(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 3572 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 3576 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 3585 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 3589 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 3593 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 3597 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 3606 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 3610 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 3619 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 3623 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 3632 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQInstanceOf((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 3641 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 3651 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 3660 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 3669 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 3675 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 3696 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 3700 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 3704 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 3712 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 3719 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 3732 "../src/parser/XQParser.y"
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

  case 494:

/* Line 1455 of yacc.c  */
#line 3753 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 3762 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 3768 "../src/parser/XQParser.y"
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

  case 499:

/* Line 1455 of yacc.c  */
#line 3793 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 3807 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 3813 "../src/parser/XQParser.y"
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

  case 506:

/* Line 1455 of yacc.c  */
#line 3835 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 3845 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 3852 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 3861 "../src/parser/XQParser.y"
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

  case 513:

/* Line 1455 of yacc.c  */
#line 3884 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 3888 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 3892 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 3896 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 3900 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 3904 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 3908 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 3912 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 521:

/* Line 1455 of yacc.c  */
#line 3920 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 522:

/* Line 1455 of yacc.c  */
#line 3928 "../src/parser/XQParser.y"
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

  case 523:

/* Line 1455 of yacc.c  */
#line 3945 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 525:

/* Line 1455 of yacc.c  */
#line 3962 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 3966 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 3970 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 528:

/* Line 1455 of yacc.c  */
#line 3974 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 529:

/* Line 1455 of yacc.c  */
#line 3978 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 3986 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 3998 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 4008 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 4020 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 4027 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 4034 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 4047 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 4076 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 4087 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 4091 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 4099 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 4107 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 4117 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 4127 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 4131 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 4138 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 4143 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 4154 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 4163 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 4167 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 4180 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 4186 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 4199 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 4203 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 4212 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 582:

/* Line 1455 of yacc.c  */
#line 4228 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 4232 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 4239 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 585:

/* Line 1455 of yacc.c  */
#line 4243 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 586:

/* Line 1455 of yacc.c  */
#line 4253 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 587:

/* Line 1455 of yacc.c  */
#line 4257 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 588:

/* Line 1455 of yacc.c  */
#line 4262 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 4272 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 4276 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 4280 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 4293 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 4297 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 4302 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 4312 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 4316 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 4320 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 4337 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 4341 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 4346 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4351 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 4358 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                 SchemaSymbols::fgDT_STRING,
                                 (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
    }
  }
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 4371 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(2) - (3)].str), AnyAtomicType::STRING,
                  MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 4384 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 4393 "../src/parser/XQParser.y"
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

  case 608:

/* Line 1455 of yacc.c  */
#line 4413 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 4436 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 4444 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 4452 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 4456 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 4464 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 620:

/* Line 1455 of yacc.c  */
#line 4468 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 4477 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 4484 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 623:

/* Line 1455 of yacc.c  */
#line 4488 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 624:

/* Line 1455 of yacc.c  */
#line 4496 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 625:

/* Line 1455 of yacc.c  */
#line 4504 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 626:

/* Line 1455 of yacc.c  */
#line 4512 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 627:

/* Line 1455 of yacc.c  */
#line 4519 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(1) - (1)].str), AnyAtomicType::STRING, MEMMGR));
  }
    break;

  case 628:

/* Line 1455 of yacc.c  */
#line 4529 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 629:

/* Line 1455 of yacc.c  */
#line 4536 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 630:

/* Line 1455 of yacc.c  */
#line 4540 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 631:

/* Line 1455 of yacc.c  */
#line 4548 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 632:

/* Line 1455 of yacc.c  */
#line 4558 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 633:

/* Line 1455 of yacc.c  */
#line 4562 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 634:

/* Line 1455 of yacc.c  */
#line 4570 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 4574 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 4584 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 4591 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 4600 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 4602 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 4604 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4606 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4612 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 4616 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 657:

/* Line 1455 of yacc.c  */
#line 4651 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 4659 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 4663 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 4668 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_SCHEMA_DOCUMENT);
  }
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 4677 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 662:

/* Line 1455 of yacc.c  */
#line 4685 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 663:

/* Line 1455 of yacc.c  */
#line 4693 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 664:

/* Line 1455 of yacc.c  */
#line 4697 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 665:

/* Line 1455 of yacc.c  */
#line 4701 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 666:

/* Line 1455 of yacc.c  */
#line 4709 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 667:

/* Line 1455 of yacc.c  */
#line 4713 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 668:

/* Line 1455 of yacc.c  */
#line 4717 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 670:

/* Line 1455 of yacc.c  */
#line 4726 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 671:

/* Line 1455 of yacc.c  */
#line 4734 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 673:

/* Line 1455 of yacc.c  */
#line 4747 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 674:

/* Line 1455 of yacc.c  */
#line 4751 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 675:

/* Line 1455 of yacc.c  */
#line 4755 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 676:

/* Line 1455 of yacc.c  */
#line 4759 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 678:

/* Line 1455 of yacc.c  */
#line 4769 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 679:

/* Line 1455 of yacc.c  */
#line 4777 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 4797 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 4809 "../src/parser/XQParser.y"
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

  case 686:

/* Line 1455 of yacc.c  */
#line 4824 "../src/parser/XQParser.y"
    {
}
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 4827 "../src/parser/XQParser.y"
    {
}
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 4833 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 4837 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 4847 "../src/parser/XQParser.y"
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

  case 692:

/* Line 1455 of yacc.c  */
#line 4864 "../src/parser/XQParser.y"
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

  case 694:

/* Line 1455 of yacc.c  */
#line 4880 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 696:

/* Line 1455 of yacc.c  */
#line 4890 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 699:

/* Line 1455 of yacc.c  */
#line 4900 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 4909 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 4914 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 703:

/* Line 1455 of yacc.c  */
#line 4924 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 4928 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 4936 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 4941 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 707:

/* Line 1455 of yacc.c  */
#line 4950 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 708:

/* Line 1455 of yacc.c  */
#line 4954 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 709:

/* Line 1455 of yacc.c  */
#line 4958 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 710:

/* Line 1455 of yacc.c  */
#line 4962 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 711:

/* Line 1455 of yacc.c  */
#line 4966 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 712:

/* Line 1455 of yacc.c  */
#line 4970 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 714:

/* Line 1455 of yacc.c  */
#line 4980 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 715:

/* Line 1455 of yacc.c  */
#line 4991 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 716:

/* Line 1455 of yacc.c  */
#line 4997 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 717:

/* Line 1455 of yacc.c  */
#line 5003 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 718:

/* Line 1455 of yacc.c  */
#line 5009 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 719:

/* Line 1455 of yacc.c  */
#line 5024 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 720:

/* Line 1455 of yacc.c  */
#line 5028 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 721:

/* Line 1455 of yacc.c  */
#line 5032 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 5036 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 5040 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 724:

/* Line 1455 of yacc.c  */
#line 5044 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 5048 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5052 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 5060 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 5064 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 5068 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5076 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 5080 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 5116 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5120 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5124 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5128 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
  }
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 5137 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 5141 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 5149 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 5153 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 5163 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 5167 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 5171 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 5175 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 5179 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 5186 "../src/parser/XQParser.y"
    {
  }
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 5189 "../src/parser/XQParser.y"
    {
  }
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 5196 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 5200 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 759:

/* Line 1455 of yacc.c  */
#line 5204 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 760:

/* Line 1455 of yacc.c  */
#line 5208 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 5218 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 762:

/* Line 1455 of yacc.c  */
#line 5222 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 763:

/* Line 1455 of yacc.c  */
#line 5226 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 5233 "../src/parser/XQParser.y"
    {
  }
    break;

  case 765:

/* Line 1455 of yacc.c  */
#line 5236 "../src/parser/XQParser.y"
    {
  }
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 5244 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 5248 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 5255 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5259 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 5267 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 5271 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5279 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 5287 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5291 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5299 "../src/parser/XQParser.y"
    {
}
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5306 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5314 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5319 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5324 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5336 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5340 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5344 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5348 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 5352 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 5363 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5374 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5378 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5388 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5396 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5403 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5408 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5416 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5425 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5437 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5449 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE,
                  MEMMGR));
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5462 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING,
                  MEMMGR));
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5473 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5482 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5494 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, 0, (yyvsp[(5) - (5)].astNode), 0, MEMMGR));
  }
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 5498 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, (yyvsp[(5) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), MEMMGR));
  }
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5502 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), 0, (yyvsp[(8) - (8)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5507 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), (yyvsp[(8) - (10)].argSpecs), (yyvsp[(10) - (10)].astNode), (yyvsp[(9) - (10)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5512 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), 0, (yyvsp[(6) - (6)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 5517 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), (yyvsp[(6) - (8)].argSpecs), (yyvsp[(8) - (8)].astNode), (yyvsp[(7) - (8)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 5525 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 5529 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 811:

/* Line 1455 of yacc.c  */
#line 5537 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 5541 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5548 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 5553 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 815:

/* Line 1455 of yacc.c  */
#line 5561 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 816:

/* Line 1455 of yacc.c  */
#line 5566 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 817:

/* Line 1455 of yacc.c  */
#line 5575 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 5579 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5583 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 5591 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 5595 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 5603 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 823:

/* Line 1455 of yacc.c  */
#line 5607 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 824:

/* Line 1455 of yacc.c  */
#line 5611 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 5615 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 5623 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 5627 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 5631 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5639 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5644 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 5654 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 5671 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 5679 "../src/parser/XQParser.y"
    {
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(2) - (4)].argSpecs), (yyvsp[(4) - (4)].astNode), (yyvsp[(3) - (4)].sequenceType), false, false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 5689 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 5694 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (4)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 5706 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  }
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 5714 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  }
    break;

  case 842:

/* Line 1455 of yacc.c  */
#line 5718 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  }
    break;

  case 843:

/* Line 1455 of yacc.c  */
#line 5725 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  }
    break;

  case 844:

/* Line 1455 of yacc.c  */
#line 5730 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 845:

/* Line 1455 of yacc.c  */
#line 5739 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;



/* Line 1455 of yacc.c  */
#line 12002 "../src/parser/XQParser.cpp"
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
#line 5774 "../src/parser/XQParser.y"


}  // namespace XQParser


