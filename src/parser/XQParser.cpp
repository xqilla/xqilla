
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
#define REJECT_NOT_EXTENSION(where,pos)   if(!QP->_lexer->isExtensions()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }

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
     _SENSITIVE_ = 338,
     _INSENSITIVE_ = 339,
     _DIACRITICS_ = 340,
     _WITHOUT_ = 341,
     _WITHOUT_C_ = 342,
     _STEMMING_ = 343,
     _THESAURUS_ = 344,
     _STOP_ = 345,
     _WILDCARDS_ = 346,
     _ENTIRE_ = 347,
     _CONTENT_ = 348,
     _WORD_ = 349,
     _TYPE_ = 350,
     _START_ = 351,
     _END_ = 352,
     _MOST_ = 353,
     _SKIP_ = 354,
     _COPY_ = 355,
     _VALUE_ = 356,
     _WHITESPACE_ = 357,
     _PI_CONTENT_ = 358,
     _XML_COMMENT_CONTENT_ = 359,
     _EQ_ = 360,
     _NE_ = 361,
     _LT_ = 362,
     _LE_ = 363,
     _GT_ = 364,
     _GE_ = 365,
     _AT_ = 366,
     _QUOT_ATTR_CONTENT_ = 367,
     _APOS_ATTR_CONTENT_ = 368,
     _WHITESPACE_ELEMENT_CONTENT_ = 369,
     _ELEMENT_CONTENT_ = 370,
     _AT_LM_ = 371,
     _ORDERED_ = 372,
     _UNORDERED_ = 373,
     _QNAME_ = 374,
     _XMLNS_QNAME_ = 375,
     _CONSTR_QNAME_ = 376,
     _STRING_LITERAL_ = 377,
     _VARIABLE_ = 378,
     _NCNAME_COLON_STAR_ = 379,
     _STAR_COLON_NCNAME_ = 380,
     _PI_TARGET_ = 381,
     _PRAGMA_CONTENT_ = 382,
     _RETURN_ = 383,
     _FOR_ = 384,
     _IN_ = 385,
     _LET_ = 386,
     _WHERE_ = 387,
     _BY_ = 388,
     _ORDER_ = 389,
     _STABLE_ = 390,
     _ASCENDING_ = 391,
     _DESCENDING_ = 392,
     _EMPTY_ = 393,
     _GREATEST_ = 394,
     _LEAST_ = 395,
     _COLLATION_ = 396,
     _SOME_ = 397,
     _EVERY_ = 398,
     _SATISFIES_ = 399,
     _TYPESWITCH_ = 400,
     _CASE_ = 401,
     _CASE_S_ = 402,
     _AS_ = 403,
     _IF_ = 404,
     _THEN_ = 405,
     _ELSE_ = 406,
     _OR_ = 407,
     _AND_ = 408,
     _INSTANCE_ = 409,
     _OF_ = 410,
     _CASTABLE_ = 411,
     _TO_ = 412,
     _DIV_ = 413,
     _MOD_ = 414,
     _UNION_ = 415,
     _INTERSECT_ = 416,
     _EXCEPT_ = 417,
     _VALIDATE_ = 418,
     _CAST_ = 419,
     _TREAT_ = 420,
     _IS_ = 421,
     _PRESERVE_ = 422,
     _STRIP_ = 423,
     _NAMESPACE_ = 424,
     _ITEM_ = 425,
     _EXTERNAL_ = 426,
     _ENCODING_ = 427,
     _NO_PRESERVE_ = 428,
     _INHERIT_ = 429,
     _NO_INHERIT_ = 430,
     _DECLARE_ = 431,
     _CONSTRUCTION_ = 432,
     _ORDERING_ = 433,
     _DEFAULT_ = 434,
     _COPY_NAMESPACES_ = 435,
     _OPTION_ = 436,
     _XQUERY_ = 437,
     _VERSION_ = 438,
     _IMPORT_ = 439,
     _SCHEMA_ = 440,
     _MODULE_ = 441,
     _ELEMENT_ = 442,
     _FUNCTION_ = 443,
     _FUNCTION_EXT_ = 444,
     _SCORE_ = 445,
     _FTCONTAINS_ = 446,
     _WEIGHT_ = 447,
     _WINDOW_ = 448,
     _DISTANCE_ = 449,
     _OCCURS_ = 450,
     _TIMES_ = 451,
     _SAME_ = 452,
     _DIFFERENT_ = 453,
     _LOWERCASE_ = 454,
     _UPPERCASE_ = 455,
     _RELATIONSHIP_ = 456,
     _LEVELS_ = 457,
     _LANGUAGE_ = 458,
     _ANY_ = 459,
     _ALL_ = 460,
     _PHRASE_ = 461,
     _EXACTLY_ = 462,
     _FROM_ = 463,
     _WORDS_ = 464,
     _SENTENCES_ = 465,
     _PARAGRAPHS_ = 466,
     _SENTENCE_ = 467,
     _PARAGRAPH_ = 468,
     _REPLACE_ = 469,
     _MODIFY_ = 470,
     _FIRST_ = 471,
     _INSERT_ = 472,
     _BEFORE_ = 473,
     _AFTER_ = 474,
     _REVALIDATION_ = 475,
     _WITH_ = 476,
     _WITH_FT_ = 477,
     _NODES_ = 478,
     _RENAME_ = 479,
     _LAST_ = 480,
     _DELETE_ = 481,
     _INTO_ = 482,
     _UPDATING_ = 483,
     _ID_ = 484,
     _KEY_ = 485,
     _TEMPLATE_ = 486,
     _MATCHES_ = 487,
     _NAME_ = 488,
     _CALL_ = 489,
     _APPLY_ = 490,
     _TEMPLATES_ = 491,
     _MODE_ = 492,
     _FTOR_ = 493,
     _FTAND_ = 494,
     _FTNOT_ = 495,
     _XSLT_END_ELEMENT_ = 496,
     _XSLT_STYLESHEET_ = 497,
     _XSLT_TEMPLATE_ = 498,
     _XSLT_VALUE_OF_ = 499,
     _XSLT_TEXT_ = 500,
     _XSLT_APPLY_TEMPLATES_ = 501,
     _XSLT_CALL_TEMPLATE_ = 502,
     _XSLT_WITH_PARAM_ = 503,
     _XSLT_SEQUENCE_ = 504,
     _XSLT_PARAM_ = 505,
     _XSLT_FUNCTION_ = 506,
     _XSLT_CHOOSE_ = 507,
     _XSLT_WHEN_ = 508,
     _XSLT_OTHERWISE_ = 509,
     _XSLT_IF_ = 510,
     _XSLT_VARIABLE_ = 511,
     _XSLT_COMMENT_ = 512,
     _XSLT_PI_ = 513,
     _XSLT_DOCUMENT_ = 514,
     _XSLT_ATTRIBUTE_ = 515,
     _XSLT_NAMESPACE_ = 516,
     _XSLT_ELEMENT_ = 517,
     _XSLT_ANALYZE_STRING_ = 518,
     _XSLT_MATCHING_SUBSTRING_ = 519,
     _XSLT_NON_MATCHING_SUBSTRING_ = 520,
     _XSLT_COPY_OF_ = 521,
     _XSLT_COPY_ = 522,
     _XSLT_FOR_EACH_ = 523,
     _XSLT_OUTPUT_ = 524,
     _XSLT_IMPORT_SCHEMA_ = 525,
     _XSLT_VERSION_ = 526,
     _XSLT_MODE_ = 527,
     _XSLT_NAME_ = 528,
     _XSLT_DOCTYPE_PUBLIC_ = 529,
     _XSLT_DOCTYPE_SYSTEM_ = 530,
     _XSLT_ENCODING_ = 531,
     _XSLT_MEDIA_TYPE_ = 532,
     _XSLT_NORMALIZATION_FORM_ = 533,
     _XSLT_STANDALONE_ = 534,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 535,
     _XSLT_NAMESPACE_STR_ = 536,
     _XSLT_SCHEMA_LOCATION_ = 537,
     _XSLT_TUNNEL_ = 538,
     _XSLT_REQUIRED_ = 539,
     _XSLT_OVERRIDE_ = 540,
     _XSLT_COPY_NAMESPACES_ = 541,
     _XSLT_INHERIT_NAMESPACES_ = 542,
     _XSLT_BYTE_ORDER_MARK_ = 543,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 544,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 545,
     _XSLT_INDENT_ = 546,
     _XSLT_OMIT_XML_DECLARATION_ = 547,
     _XSLT_UNDECLARE_PREFIXES_ = 548,
     _XSLT_MATCH_ = 549,
     _XSLT_AS_ = 550,
     _XSLT_SELECT_ = 551,
     _XSLT_PRIORITY_ = 552,
     _XSLT_TEST_ = 553,
     _XSLT_SEPARATOR_ = 554,
     _XSLT_NAMESPACE_A_ = 555,
     _XSLT_REGEX_ = 556,
     _XSLT_FLAGS_ = 557,
     _XSLT_METHOD_ = 558,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 559,
     _XSLT_USE_CHARACTER_MAPS_ = 560,
     _XSLT_ELEMENT_NAME_ = 561,
     _XSLT_XMLNS_ATTR_ = 562,
     _XSLT_ATTR_NAME_ = 563,
     _XSLT_TEXT_NODE_ = 564,
     _XSLT_WS_TEXT_NODE_ = 565,
     _HASH_DEFAULT_ = 566,
     _HASH_ALL_ = 567,
     _HASH_CURRENT_ = 568,
     _XML_ = 569,
     _HTML_ = 570,
     _XHTML_ = 571
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
#define _SENSITIVE_ 338
#define _INSENSITIVE_ 339
#define _DIACRITICS_ 340
#define _WITHOUT_ 341
#define _WITHOUT_C_ 342
#define _STEMMING_ 343
#define _THESAURUS_ 344
#define _STOP_ 345
#define _WILDCARDS_ 346
#define _ENTIRE_ 347
#define _CONTENT_ 348
#define _WORD_ 349
#define _TYPE_ 350
#define _START_ 351
#define _END_ 352
#define _MOST_ 353
#define _SKIP_ 354
#define _COPY_ 355
#define _VALUE_ 356
#define _WHITESPACE_ 357
#define _PI_CONTENT_ 358
#define _XML_COMMENT_CONTENT_ 359
#define _EQ_ 360
#define _NE_ 361
#define _LT_ 362
#define _LE_ 363
#define _GT_ 364
#define _GE_ 365
#define _AT_ 366
#define _QUOT_ATTR_CONTENT_ 367
#define _APOS_ATTR_CONTENT_ 368
#define _WHITESPACE_ELEMENT_CONTENT_ 369
#define _ELEMENT_CONTENT_ 370
#define _AT_LM_ 371
#define _ORDERED_ 372
#define _UNORDERED_ 373
#define _QNAME_ 374
#define _XMLNS_QNAME_ 375
#define _CONSTR_QNAME_ 376
#define _STRING_LITERAL_ 377
#define _VARIABLE_ 378
#define _NCNAME_COLON_STAR_ 379
#define _STAR_COLON_NCNAME_ 380
#define _PI_TARGET_ 381
#define _PRAGMA_CONTENT_ 382
#define _RETURN_ 383
#define _FOR_ 384
#define _IN_ 385
#define _LET_ 386
#define _WHERE_ 387
#define _BY_ 388
#define _ORDER_ 389
#define _STABLE_ 390
#define _ASCENDING_ 391
#define _DESCENDING_ 392
#define _EMPTY_ 393
#define _GREATEST_ 394
#define _LEAST_ 395
#define _COLLATION_ 396
#define _SOME_ 397
#define _EVERY_ 398
#define _SATISFIES_ 399
#define _TYPESWITCH_ 400
#define _CASE_ 401
#define _CASE_S_ 402
#define _AS_ 403
#define _IF_ 404
#define _THEN_ 405
#define _ELSE_ 406
#define _OR_ 407
#define _AND_ 408
#define _INSTANCE_ 409
#define _OF_ 410
#define _CASTABLE_ 411
#define _TO_ 412
#define _DIV_ 413
#define _MOD_ 414
#define _UNION_ 415
#define _INTERSECT_ 416
#define _EXCEPT_ 417
#define _VALIDATE_ 418
#define _CAST_ 419
#define _TREAT_ 420
#define _IS_ 421
#define _PRESERVE_ 422
#define _STRIP_ 423
#define _NAMESPACE_ 424
#define _ITEM_ 425
#define _EXTERNAL_ 426
#define _ENCODING_ 427
#define _NO_PRESERVE_ 428
#define _INHERIT_ 429
#define _NO_INHERIT_ 430
#define _DECLARE_ 431
#define _CONSTRUCTION_ 432
#define _ORDERING_ 433
#define _DEFAULT_ 434
#define _COPY_NAMESPACES_ 435
#define _OPTION_ 436
#define _XQUERY_ 437
#define _VERSION_ 438
#define _IMPORT_ 439
#define _SCHEMA_ 440
#define _MODULE_ 441
#define _ELEMENT_ 442
#define _FUNCTION_ 443
#define _FUNCTION_EXT_ 444
#define _SCORE_ 445
#define _FTCONTAINS_ 446
#define _WEIGHT_ 447
#define _WINDOW_ 448
#define _DISTANCE_ 449
#define _OCCURS_ 450
#define _TIMES_ 451
#define _SAME_ 452
#define _DIFFERENT_ 453
#define _LOWERCASE_ 454
#define _UPPERCASE_ 455
#define _RELATIONSHIP_ 456
#define _LEVELS_ 457
#define _LANGUAGE_ 458
#define _ANY_ 459
#define _ALL_ 460
#define _PHRASE_ 461
#define _EXACTLY_ 462
#define _FROM_ 463
#define _WORDS_ 464
#define _SENTENCES_ 465
#define _PARAGRAPHS_ 466
#define _SENTENCE_ 467
#define _PARAGRAPH_ 468
#define _REPLACE_ 469
#define _MODIFY_ 470
#define _FIRST_ 471
#define _INSERT_ 472
#define _BEFORE_ 473
#define _AFTER_ 474
#define _REVALIDATION_ 475
#define _WITH_ 476
#define _WITH_FT_ 477
#define _NODES_ 478
#define _RENAME_ 479
#define _LAST_ 480
#define _DELETE_ 481
#define _INTO_ 482
#define _UPDATING_ 483
#define _ID_ 484
#define _KEY_ 485
#define _TEMPLATE_ 486
#define _MATCHES_ 487
#define _NAME_ 488
#define _CALL_ 489
#define _APPLY_ 490
#define _TEMPLATES_ 491
#define _MODE_ 492
#define _FTOR_ 493
#define _FTAND_ 494
#define _FTNOT_ 495
#define _XSLT_END_ELEMENT_ 496
#define _XSLT_STYLESHEET_ 497
#define _XSLT_TEMPLATE_ 498
#define _XSLT_VALUE_OF_ 499
#define _XSLT_TEXT_ 500
#define _XSLT_APPLY_TEMPLATES_ 501
#define _XSLT_CALL_TEMPLATE_ 502
#define _XSLT_WITH_PARAM_ 503
#define _XSLT_SEQUENCE_ 504
#define _XSLT_PARAM_ 505
#define _XSLT_FUNCTION_ 506
#define _XSLT_CHOOSE_ 507
#define _XSLT_WHEN_ 508
#define _XSLT_OTHERWISE_ 509
#define _XSLT_IF_ 510
#define _XSLT_VARIABLE_ 511
#define _XSLT_COMMENT_ 512
#define _XSLT_PI_ 513
#define _XSLT_DOCUMENT_ 514
#define _XSLT_ATTRIBUTE_ 515
#define _XSLT_NAMESPACE_ 516
#define _XSLT_ELEMENT_ 517
#define _XSLT_ANALYZE_STRING_ 518
#define _XSLT_MATCHING_SUBSTRING_ 519
#define _XSLT_NON_MATCHING_SUBSTRING_ 520
#define _XSLT_COPY_OF_ 521
#define _XSLT_COPY_ 522
#define _XSLT_FOR_EACH_ 523
#define _XSLT_OUTPUT_ 524
#define _XSLT_IMPORT_SCHEMA_ 525
#define _XSLT_VERSION_ 526
#define _XSLT_MODE_ 527
#define _XSLT_NAME_ 528
#define _XSLT_DOCTYPE_PUBLIC_ 529
#define _XSLT_DOCTYPE_SYSTEM_ 530
#define _XSLT_ENCODING_ 531
#define _XSLT_MEDIA_TYPE_ 532
#define _XSLT_NORMALIZATION_FORM_ 533
#define _XSLT_STANDALONE_ 534
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 535
#define _XSLT_NAMESPACE_STR_ 536
#define _XSLT_SCHEMA_LOCATION_ 537
#define _XSLT_TUNNEL_ 538
#define _XSLT_REQUIRED_ 539
#define _XSLT_OVERRIDE_ 540
#define _XSLT_COPY_NAMESPACES_ 541
#define _XSLT_INHERIT_NAMESPACES_ 542
#define _XSLT_BYTE_ORDER_MARK_ 543
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 544
#define _XSLT_INCLUDE_CONTENT_TYPE_ 545
#define _XSLT_INDENT_ 546
#define _XSLT_OMIT_XML_DECLARATION_ 547
#define _XSLT_UNDECLARE_PREFIXES_ 548
#define _XSLT_MATCH_ 549
#define _XSLT_AS_ 550
#define _XSLT_SELECT_ 551
#define _XSLT_PRIORITY_ 552
#define _XSLT_TEST_ 553
#define _XSLT_SEPARATOR_ 554
#define _XSLT_NAMESPACE_A_ 555
#define _XSLT_REGEX_ 556
#define _XSLT_FLAGS_ 557
#define _XSLT_METHOD_ 558
#define _XSLT_CDATA_SECTION_ELEMENTS_ 559
#define _XSLT_USE_CHARACTER_MAPS_ 560
#define _XSLT_ELEMENT_NAME_ 561
#define _XSLT_XMLNS_ATTR_ 562
#define _XSLT_ATTR_NAME_ 563
#define _XSLT_TEXT_NODE_ 564
#define _XSLT_WS_TEXT_NODE_ 565
#define _HASH_DEFAULT_ 566
#define _HASH_ALL_ 567
#define _HASH_CURRENT_ 568
#define _XML_ 569
#define _HTML_ 570
#define _XHTML_ 571




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
#line 1074 "../src/parser/XQParser.cpp"

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
#define YYFINAL  321
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7811

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  317
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  336
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1005
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1649

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   571

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
     315,   316
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
    1467,  1471,  1473,  1477,  1482,  1484,  1488,  1490,  1494,  1498,
    1500,  1504,  1508,  1512,  1516,  1518,  1522,  1526,  1528,  1532,
    1536,  1538,  1543,  1545,  1550,  1552,  1557,  1559,  1564,  1566,
    1569,  1572,  1574,  1576,  1578,  1580,  1585,  1591,  1597,  1601,
    1606,  1608,  1611,  1616,  1618,  1621,  1623,  1626,  1629,  1631,
    1633,  1637,  1641,  1643,  1645,  1647,  1650,  1653,  1656,  1658,
    1661,  1664,  1667,  1670,  1673,  1676,  1679,  1682,  1685,  1687,
    1690,  1692,  1695,  1698,  1701,  1704,  1707,  1709,  1711,  1713,
    1715,  1717,  1719,  1721,  1723,  1726,  1727,  1732,  1734,  1736,
    1738,  1740,  1742,  1744,  1746,  1748,  1750,  1752,  1754,  1756,
    1758,  1760,  1762,  1765,  1767,  1771,  1774,  1776,  1781,  1786,
    1790,  1795,  1799,  1801,  1803,  1805,  1807,  1809,  1811,  1817,
    1828,  1830,  1832,  1833,  1841,  1849,  1850,  1852,  1856,  1860,
    1864,  1868,  1869,  1872,  1875,  1876,  1879,  1882,  1883,  1886,
    1889,  1890,  1893,  1896,  1897,  1900,  1903,  1906,  1909,  1913,
    1914,  1916,  1920,  1922,  1925,  1927,  1929,  1931,  1933,  1935,
    1937,  1942,  1946,  1948,  1952,  1955,  1959,  1963,  1965,  1969,
    1974,  1979,  1983,  1985,  1989,  1992,  1996,  1999,  2000,  2002,
    2003,  2006,  2009,  2013,  2014,  2016,  2018,  2020,  2022,  2026,
    2028,  2030,  2032,  2034,  2036,  2038,  2040,  2042,  2044,  2046,
    2048,  2050,  2052,  2056,  2060,  2065,  2070,  2074,  2078,  2082,
    2087,  2092,  2096,  2101,  2108,  2110,  2112,  2117,  2119,  2123,
    2128,  2135,  2143,  2145,  2147,  2152,  2154,  2156,  2158,  2160,
    2162,  2166,  2167,  2170,  2171,  2174,  2178,  2180,  2184,  2186,
    2191,  2193,  2196,  2198,  2200,  2203,  2206,  2210,  2212,  2215,
    2220,  2224,  2229,  2230,  2232,  2235,  2237,  2240,  2242,  2243,
    2247,  2250,  2254,  2258,  2263,  2265,  2269,  2273,  2276,  2279,
    2282,  2285,  2288,  2290,  2292,  2294,  2296,  2298,  2300,  2303,
    2305,  2307,  2309,  2311,  2313,  2315,  2317,  2319,  2322,  2325,
    2327,  2329,  2332,  2335,  2338,  2341,  2345,  2349,  2356,  2363,
    2366,  2367,  2371,  2374,  2379,  2384,  2391,  2397,  2401,  2407,
    2408,  2411,  2414,  2418,  2420,  2424,  2427,  2430,  2433,  2436,
    2439,  2443,  2447,  2451,  2455,  2459,  2466,  2473,  2478,  2483,
    2488,  2491,  2494,  2497,  2500,  2503,  2511,  2517,  2523,  2530,
    2534,  2536,  2541,  2543,  2545,  2547,  2549,  2551,  2553,  2559,
    2567,  2576,  2587,  2594,  2603,  2604,  2607,  2610,  2614,  2615,
    2618,  2620,  2624,  2626,  2628,  2630,  2634,  2642,  2646,  2654,
    2660,  2670,  2672,  2674,  2676,  2678,  2682,  2688,  2690,  2692,
    2696,  2701,  2705,  2710,  2714,  2720,  2727,  2729,  2733,  2737,
    2739,  2741,  2743,  2745,  2747,  2749,  2751,  2753,  2755,  2757,
    2759,  2761,  2763,  2765,  2767,  2769,  2771,  2773,  2775,  2777,
    2779,  2781,  2783,  2785,  2787,  2789,  2791,  2793,  2795,  2797,
    2799,  2801,  2803,  2805,  2807,  2809,  2811,  2813,  2815,  2817,
    2819,  2821,  2823,  2825,  2827,  2829,  2831,  2833,  2835,  2837,
    2839,  2841,  2843,  2845,  2847,  2849,  2851,  2853,  2855,  2857,
    2859,  2861,  2863,  2865,  2867,  2869,  2871,  2873,  2875,  2877,
    2879,  2881,  2883,  2885,  2887,  2889,  2891,  2893,  2895,  2897,
    2899,  2901,  2903,  2905,  2907,  2909,  2911,  2913,  2915,  2917,
    2919,  2921,  2923,  2925,  2927,  2929,  2931,  2933,  2935,  2937,
    2939,  2941,  2943,  2945,  2947,  2949,  2951,  2953,  2955,  2957,
    2959,  2961,  2963,  2965,  2967,  2969,  2971,  2973,  2975,  2977,
    2979,  2981,  2983,  2985,  2987,  2989,  2991,  2993,  2995,  2997,
    2999,  3001,  3003,  3005,  3007,  3009,  3011,  3013,  3015,  3017,
    3019,  3021,  3023,  3025,  3027,  3029,  3031,  3033,  3035,  3037,
    3039,  3041,  3043,  3045,  3047,  3049,  3051,  3053,  3055,  3057,
    3059,  3061,  3063,  3065,  3067,  3069
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     318,     0,    -1,     3,   452,    -1,     4,   403,    -1,     5,
     410,    -1,     6,   414,    -1,     7,   418,    -1,     8,   319,
      -1,   320,    -1,   242,   321,   322,   241,    -1,   342,    -1,
      -1,   321,   271,    -1,   321,   280,    -1,    -1,   322,   323,
      -1,   322,   327,    -1,   322,   332,    -1,   322,   334,    -1,
     322,   336,    -1,   322,   340,    -1,   324,   329,   345,   241,
      -1,   243,    -1,   324,   294,   393,    -1,   324,   273,    -1,
     324,   297,   326,    -1,   324,   272,   325,    -1,   324,   295,
     561,    -1,    -1,   325,   119,    -1,   325,   311,    -1,   325,
     312,    -1,    52,    -1,    53,    -1,    54,    -1,   328,   329,
     345,   241,    -1,   251,    -1,   328,   273,    -1,   328,   295,
     561,    -1,   328,   285,    -1,    -1,   329,   330,    -1,   331,
     345,   241,    -1,   250,    -1,   331,   273,    -1,   331,   296,
     453,    -1,   331,   295,   561,    -1,   331,   284,    -1,   331,
     283,    -1,   333,   345,   241,    -1,   250,    -1,   333,   273,
      -1,   333,   296,   453,    -1,   333,   295,   561,    -1,   333,
     284,    -1,   333,   283,    -1,   335,   345,   241,    -1,   256,
      -1,   335,   273,    -1,   335,   296,   453,    -1,   335,   295,
     561,    -1,   337,   241,    -1,   269,    -1,   337,   273,    -1,
     337,   303,   338,    -1,   337,   288,    -1,   337,   304,   339,
      -1,   337,   274,    -1,   337,   275,    -1,   337,   276,    -1,
     337,   289,    -1,   337,   290,    -1,   337,   291,    -1,   337,
     277,    -1,   337,   278,    -1,   337,   292,    -1,   337,   279,
      -1,   337,   293,    -1,   337,   305,   339,    -1,   337,   271,
      -1,   314,    -1,   315,    -1,   316,    -1,    62,    -1,   119,
      -1,   119,    -1,   339,   119,    -1,   341,   241,    -1,   270,
      -1,   270,   281,    -1,   270,   282,    -1,   270,   281,   282,
      -1,   270,   282,   281,    -1,   306,   343,   345,   241,    -1,
      -1,   343,   308,   344,    -1,   343,   307,    -1,    -1,   344,
     451,    -1,   344,   112,    -1,    -1,   345,   350,    -1,   345,
     342,    -1,   345,   346,    -1,   347,    -1,   349,    -1,   351,
      -1,   355,    -1,   360,    -1,   364,    -1,   362,    -1,   373,
      -1,   375,    -1,   377,    -1,   379,    -1,   381,    -1,   383,
      -1,   385,    -1,   369,    -1,   387,    -1,   389,    -1,   391,
      -1,   348,   345,   241,    -1,   244,    -1,   348,   296,   453,
      -1,   348,   299,   344,    -1,   245,   350,   241,    -1,   309,
      -1,   310,    -1,   352,   354,   241,    -1,   246,    -1,   352,
     296,   453,    -1,   352,   272,   353,    -1,   119,    -1,   311,
      -1,   313,    -1,    -1,   354,   358,    -1,   356,   357,   241,
      -1,   247,    -1,   356,   273,    -1,    -1,   357,   358,    -1,
     359,   345,   241,    -1,   248,    -1,   359,   273,    -1,   359,
     296,   453,    -1,   359,   295,   561,    -1,   359,   283,    -1,
     361,   241,    -1,   249,   296,   453,    -1,   363,   345,   241,
      -1,   255,   298,   453,    -1,   252,   365,   368,   241,    -1,
     366,    -1,   365,   366,    -1,   367,   345,   241,    -1,   253,
     298,   453,    -1,    -1,   254,   345,   241,    -1,   370,   371,
     372,   241,    -1,   263,    -1,   370,   296,   453,    -1,   370,
     301,   344,    -1,   370,   302,   344,    -1,    -1,   264,   345,
     241,    -1,    -1,   265,   345,   241,    -1,   374,   345,   241,
     345,    -1,   256,    -1,   374,   273,    -1,   374,   296,   453,
      -1,   374,   295,   561,    -1,   376,   345,   241,    -1,   257,
      -1,   376,   296,   453,    -1,   378,   345,   241,    -1,   258,
      -1,   378,   273,   344,    -1,   378,   296,   453,    -1,   380,
     345,   241,    -1,   259,    -1,   382,   345,   241,    -1,   260,
      -1,   382,   273,   344,    -1,   382,   300,   344,    -1,   382,
     296,   453,    -1,   382,   299,   344,    -1,   384,   345,   241,
      -1,   261,    -1,   384,   273,   344,    -1,   384,   296,   453,
      -1,   386,   345,   241,    -1,   262,    -1,   386,   273,   344,
      -1,   386,   300,   344,    -1,   388,   241,    -1,   266,    -1,
     388,   296,   453,    -1,   388,   286,    -1,   390,   345,   241,
      -1,   267,    -1,   390,   286,    -1,   390,   287,    -1,   392,
     345,   241,    -1,   268,    -1,   392,   296,   453,    -1,   393,
      12,   394,    -1,   394,    -1,   399,    -1,    36,    -1,   396,
      -1,    36,    -1,    30,    -1,   229,    40,   397,    41,    -1,
     230,    40,   630,    33,   398,    41,    -1,   630,    -1,   521,
      -1,   519,    -1,   521,    -1,   400,    -1,   395,   400,    -1,
     396,    36,   400,    -1,   396,    30,   400,    -1,   399,    36,
     400,    -1,   399,    30,   400,    -1,   401,   402,    -1,   513,
      -1,    70,    19,   513,    -1,    55,    19,   513,    -1,    20,
     513,    -1,    -1,   517,    21,   453,    22,    -1,   419,   404,
      -1,   419,   405,    -1,   404,    -1,   405,    -1,   406,   452,
      -1,   422,   406,    -1,    -1,   406,   407,   426,    -1,   406,
     425,   426,    -1,   406,   427,   426,    -1,   406,   429,   426,
      -1,   406,   443,   426,    -1,   406,   408,   426,    -1,   406,
     633,   426,    -1,   406,   430,   426,    -1,   428,    -1,   437,
      -1,   438,    -1,   445,    -1,   432,    -1,   433,    -1,   434,
      -1,   176,   409,   652,   447,   451,    -1,   176,   409,   652,
     447,   148,   561,   451,    -1,   176,   409,   652,   447,   171,
      -1,   176,   409,   652,   447,   148,   561,   171,    -1,   188,
      -1,   189,    -1,   419,   411,    -1,   419,   412,    -1,   411,
      -1,   412,    -1,   413,   452,    -1,   422,   413,    -1,    -1,
     413,   407,   426,    -1,   413,   425,   426,    -1,   413,   427,
     426,    -1,   413,   429,   426,    -1,   413,   443,   426,    -1,
     413,   408,   426,    -1,   413,   633,   426,    -1,   413,   430,
     426,    -1,   413,   431,   426,    -1,   419,   415,    -1,   419,
     416,    -1,   415,    -1,   416,    -1,   417,   452,    -1,   422,
     417,    -1,    -1,   417,   424,   426,    -1,   417,   425,   426,
      -1,   417,   427,   426,    -1,   417,   429,   426,    -1,   417,
     443,   426,    -1,   417,   446,   426,    -1,   417,   633,   426,
      -1,   417,   430,   426,    -1,   419,   420,    -1,   419,   421,
      -1,   420,    -1,   421,    -1,   182,   183,   122,   426,    -1,
     182,   183,   122,   172,   122,   426,    -1,   423,   452,    -1,
     422,   423,    -1,   186,   169,   631,    37,   582,   426,    -1,
      -1,   423,   424,   426,    -1,   423,   425,   426,    -1,   423,
     427,   426,    -1,   423,   429,   426,    -1,   423,   443,   426,
      -1,   423,   446,   426,    -1,   423,   633,   426,    -1,   423,
     430,   426,    -1,   423,   431,   426,    -1,   428,    -1,   437,
      -1,   438,    -1,   445,    -1,   432,    -1,   433,    -1,   617,
      -1,   434,    -1,   439,    -1,   442,    -1,    50,    -1,   176,
     169,   631,    37,   582,    -1,   176,    64,   167,    -1,   176,
      64,   168,    -1,   176,   179,   187,   169,   582,    -1,   176,
     179,   409,   169,   582,    -1,   176,   181,   651,   122,    -1,
     176,    65,   600,    -1,   176,   178,   117,    -1,   176,   178,
     118,    -1,   176,   179,   134,   138,   139,    -1,   176,   179,
     134,   138,   140,    -1,   176,   180,   435,    33,   436,    -1,
     167,    -1,   173,    -1,   174,    -1,   175,    -1,   176,   179,
     141,   582,    -1,   176,    66,   582,    -1,   184,   185,   441,
     582,   440,    -1,   184,   185,   582,   440,    -1,    -1,   111,
     582,    -1,   440,    33,   582,    -1,   169,   631,    37,    -1,
     179,   187,   169,    -1,   184,   186,   169,   631,    37,   582,
     440,    -1,   184,   186,   582,   440,    -1,   176,   123,     9,
     522,   560,   444,    -1,    10,   454,    -1,   171,    -1,   176,
     177,   167,    -1,   176,   177,   168,    -1,   176,   448,   409,
     652,   447,   451,    -1,   176,   448,   409,   652,   447,   148,
     561,   451,    -1,   176,   448,   409,   652,   447,   171,    -1,
     176,   448,   409,   652,   447,   148,   561,   171,    -1,    40,
      41,    -1,    40,   449,    41,    -1,    -1,   228,    -1,   449,
      33,   450,    -1,   450,    -1,     9,   522,   560,    -1,    48,
     453,    49,    -1,   453,    -1,   453,    33,   454,    -1,   454,
      -1,   455,    -1,   473,    -1,   476,    -1,   480,    -1,   618,
      -1,   620,    -1,   623,    -1,   622,    -1,   624,    -1,   481,
      -1,   639,    -1,   640,    -1,   456,   128,   454,    -1,   457,
     466,   467,    -1,   457,   466,    -1,   457,   467,    -1,   457,
      -1,   457,   458,    -1,   457,   463,    -1,   458,    -1,   463,
      -1,   129,   459,    -1,   459,    33,   460,    -1,   460,    -1,
       9,   522,   560,   461,   462,   130,   454,    -1,    -1,   111,
       9,   522,    -1,    -1,   190,     9,   522,    -1,   131,   464,
      -1,   464,    33,   465,    -1,   465,    -1,     9,   522,   560,
      10,   454,    -1,   190,     9,   522,    10,   454,    -1,   132,
     454,    -1,   134,   133,   468,    -1,   135,   134,   133,   468,
      -1,   468,    33,   469,    -1,   469,    -1,   470,   471,   472,
      -1,   470,   471,   472,   141,   582,    -1,   454,    -1,    -1,
     136,    -1,   137,    -1,    -1,   138,   139,    -1,   138,   140,
      -1,   142,   474,   144,   454,    -1,   143,   474,   144,   454,
      -1,   474,    33,   475,    -1,   475,    -1,     9,   522,   560,
     130,   454,    -1,   145,    40,   453,    41,   477,   478,    -1,
     477,   479,    -1,   479,    -1,   179,     9,   522,   128,   454,
      -1,   179,   128,   454,    -1,   146,   561,   128,   454,    -1,
     146,     9,   522,   148,   561,   128,   454,    -1,   149,    40,
     453,    41,   150,   454,   151,   454,    -1,   481,   152,   482,
      -1,   482,    -1,   482,   153,   483,    -1,   483,    -1,   485,
      37,   485,    -1,   485,    13,   485,    -1,    -1,   485,    24,
     484,   485,    -1,   485,    14,   485,    -1,   485,    15,   485,
      -1,   485,    16,   485,    -1,   485,   105,   485,    -1,   485,
     106,   485,    -1,   485,   107,   485,    -1,   485,   108,   485,
      -1,   485,   109,   485,    -1,   485,   110,   485,    -1,   485,
     166,   485,    -1,   485,    17,   485,    -1,   485,    18,   485,
      -1,   485,    -1,   486,   191,   583,    -1,   486,   191,   583,
     616,    -1,   486,    -1,   487,   157,   487,    -1,   487,    -1,
     487,    34,   488,    -1,   487,    35,   488,    -1,   488,    -1,
     488,    11,   489,    -1,   488,   158,   489,    -1,   488,    69,
     489,    -1,   488,   159,   489,    -1,   489,    -1,   489,    12,
     490,    -1,   489,   160,   490,    -1,   490,    -1,   490,   161,
     491,    -1,   490,   162,   491,    -1,   491,    -1,   492,   154,
     155,   561,    -1,   492,    -1,   493,   165,   148,   561,    -1,
     493,    -1,   494,   156,   148,   558,    -1,   494,    -1,   495,
     164,   148,   558,    -1,   495,    -1,    35,   495,    -1,    34,
     495,    -1,   496,    -1,   497,    -1,   502,    -1,   498,    -1,
     163,    48,   453,    49,    -1,   163,    67,    48,   453,    49,
      -1,   163,    68,    48,   453,    49,    -1,   499,    48,    49,
      -1,   499,    48,   453,    49,    -1,   500,    -1,   499,   500,
      -1,    32,   534,   651,   501,    -1,   127,    -1,   102,   127,
      -1,   503,    -1,   503,   504,    -1,    30,   504,    -1,   504,
      -1,    36,    -1,   504,    36,   505,    -1,   504,    30,   505,
      -1,   505,    -1,   506,    -1,   516,    -1,   507,   517,    -1,
     510,   517,    -1,   508,   513,    -1,   509,    -1,    70,    19,
      -1,    71,    19,    -1,    55,    19,    -1,    72,    19,    -1,
      73,    19,    -1,    74,    19,    -1,    75,    19,    -1,   169,
      19,    -1,    20,   513,    -1,   513,    -1,   511,   513,    -1,
     512,    -1,    76,    19,    -1,    77,    19,    -1,    78,    19,
      -1,    79,    19,    -1,    80,    19,    -1,    39,    -1,   565,
      -1,   514,    -1,   632,    -1,   515,    -1,    11,    -1,   124,
      -1,   125,    -1,   518,   517,    -1,    -1,   517,    21,   453,
      22,    -1,   519,    -1,   521,    -1,   523,    -1,   524,    -1,
     527,    -1,   529,    -1,   525,    -1,   526,    -1,   644,    -1,
     647,    -1,   520,    -1,   630,    -1,   627,    -1,   628,    -1,
     629,    -1,     9,   522,    -1,   651,    -1,    40,   453,    41,
      -1,    40,    41,    -1,    38,    -1,   117,    48,   453,    49,
      -1,   118,    48,   453,    49,    -1,   652,    40,    41,    -1,
     652,    40,   528,    41,    -1,   528,    33,   454,    -1,   454,
      -1,   530,    -1,   546,    -1,   531,    -1,   542,    -1,   544,
      -1,    24,   532,   533,   534,    42,    -1,    24,   532,   533,
     534,    25,   541,    31,   532,   534,    26,    -1,   119,    -1,
     120,    -1,    -1,   533,   102,   119,   534,    43,   534,   535,
      -1,   533,   102,   120,   534,    43,   534,   536,    -1,    -1,
     102,    -1,    44,   537,    45,    -1,    46,   539,    47,    -1,
      44,   538,    45,    -1,    46,   540,    47,    -1,    -1,   537,
     451,    -1,   537,   112,    -1,    -1,   538,   451,    -1,   538,
     112,    -1,    -1,   539,   451,    -1,   539,   113,    -1,    -1,
     540,   451,    -1,   540,   113,    -1,    -1,   541,   530,    -1,
     541,   451,    -1,   541,   115,    -1,   541,   114,    -1,    28,
     543,    29,    -1,    -1,   104,    -1,    27,   126,   545,    -1,
     103,    -1,   102,   103,    -1,   547,    -1,   548,    -1,   551,
      -1,   553,    -1,   554,    -1,   555,    -1,    81,    48,   453,
      49,    -1,   187,   549,   550,    -1,   121,    -1,    48,   453,
      49,    -1,    48,    49,    -1,    48,   453,    49,    -1,    55,
     552,   550,    -1,   121,    -1,    48,   453,    49,    -1,    62,
      48,   453,    49,    -1,    56,    48,   453,    49,    -1,    59,
     556,   557,    -1,   121,    -1,    48,   453,    49,    -1,    48,
      49,    -1,    48,   453,    49,    -1,   564,   559,    -1,    -1,
      23,    -1,    -1,   148,   561,    -1,   563,   562,    -1,    63,
      40,    41,    -1,    -1,    11,    -1,    34,    -1,    23,    -1,
     564,    -1,   170,    40,    41,    -1,   565,    -1,   648,    -1,
     650,    -1,   632,    -1,   567,    -1,   575,    -1,   571,    -1,
     577,    -1,   573,    -1,   570,    -1,   569,    -1,   568,    -1,
     566,    -1,    58,    40,    41,    -1,    57,    40,    41,    -1,
      57,    40,   575,    41,    -1,    57,    40,   577,    41,    -1,
      62,    40,    41,    -1,    56,    40,    41,    -1,    59,    40,
      41,    -1,    59,    40,   631,    41,    -1,    59,    40,   122,
      41,    -1,    55,    40,    41,    -1,    55,    40,   572,    41,
      -1,    55,    40,   572,    33,   581,    41,    -1,   579,    -1,
      11,    -1,    60,    40,   574,    41,    -1,   579,    -1,   187,
      40,    41,    -1,   187,    40,   576,    41,    -1,   187,    40,
     576,    33,   581,    41,    -1,   187,    40,   576,    33,   581,
      23,    41,    -1,   580,    -1,    11,    -1,    61,    40,   578,
      41,    -1,   580,    -1,   632,    -1,   632,    -1,   632,    -1,
     122,    -1,   586,   585,   584,    -1,    -1,   192,   486,    -1,
      -1,   585,   597,    -1,   586,   238,   587,    -1,   587,    -1,
     587,   239,   588,    -1,   588,    -1,   588,    82,   130,   589,
      -1,   589,    -1,   240,   590,    -1,   590,    -1,   591,    -1,
     591,   600,    -1,   592,   595,    -1,    40,   583,    41,    -1,
     593,    -1,   519,   594,    -1,    48,   453,    49,   594,    -1,
     499,    48,    49,    -1,   499,    48,   583,    49,    -1,    -1,
     204,    -1,   204,    94,    -1,   205,    -1,   205,   209,    -1,
     206,    -1,    -1,   195,   596,   196,    -1,   207,   487,    -1,
     116,   140,   487,    -1,   116,    98,   487,    -1,   208,   487,
     157,   487,    -1,   117,    -1,   193,   487,   598,    -1,   194,
     596,   598,    -1,   197,   599,    -1,   198,   599,    -1,   111,
      96,    -1,   111,    97,    -1,    92,    93,    -1,   209,    -1,
     210,    -1,   211,    -1,   212,    -1,   213,    -1,   601,    -1,
     600,   601,    -1,   613,    -1,   614,    -1,   605,    -1,   604,
      -1,   602,    -1,   603,    -1,   608,    -1,   615,    -1,   147,
      84,    -1,   147,    83,    -1,   199,    -1,   200,    -1,    85,
      84,    -1,    85,    83,    -1,   222,    88,    -1,    86,    88,
      -1,   222,    89,   607,    -1,   222,    89,   179,    -1,   222,
      89,    40,   607,   606,    41,    -1,   222,    89,    40,   179,
     606,    41,    -1,    86,    89,    -1,    -1,   606,    33,   607,
      -1,   111,   582,    -1,   111,   582,   201,   630,    -1,   111,
     582,   596,   202,    -1,   111,   582,   201,   630,   596,   202,
      -1,   222,    90,   209,   610,   609,    -1,    86,    90,   209,
      -1,   222,   179,    90,   209,   609,    -1,    -1,   609,   612,
      -1,   111,   582,    -1,    40,   611,    41,    -1,   630,    -1,
     611,    33,   630,    -1,   160,   610,    -1,   162,   610,    -1,
     203,   630,    -1,   222,    91,    -1,    86,    91,    -1,   181,
     651,   122,    -1,    87,    93,   489,    -1,   176,   220,    68,
      -1,   176,   220,    67,    -1,   176,   220,    99,    -1,   619,
     454,   148,   216,   227,   454,    -1,   619,   454,   148,   225,
     227,   454,    -1,   619,   454,   227,   454,    -1,   619,   454,
     219,   454,    -1,   619,   454,   218,   454,    -1,   217,    58,
      -1,   217,   223,    -1,   621,   454,    -1,   226,    58,    -1,
     226,   223,    -1,   214,   101,   155,    58,   454,   221,   454,
      -1,   214,    58,   454,   221,   454,    -1,   224,    58,   454,
     148,   454,    -1,   100,   625,   215,   454,   128,   454,    -1,
     625,    33,   626,    -1,   626,    -1,     9,   522,    10,   454,
      -1,    52,    -1,    53,    -1,    54,    -1,   122,    -1,   651,
      -1,   651,    -1,   176,   231,   233,   651,   451,    -1,   176,
     231,   233,   651,   635,   634,   451,    -1,   176,   231,   233,
     651,   636,   232,   393,   451,    -1,   176,   231,   233,   651,
     636,   232,   393,   635,   634,   451,    -1,   176,   231,   636,
     232,   393,   451,    -1,   176,   231,   636,   232,   393,   635,
     634,   451,    -1,    -1,   148,   561,    -1,    40,    41,    -1,
      40,   449,    41,    -1,    -1,   237,   637,    -1,   638,    -1,
     637,    33,   638,    -1,   119,    -1,   311,    -1,   312,    -1,
     234,   231,   651,    -1,   234,   231,   651,   221,    40,   642,
      41,    -1,   235,   236,   454,    -1,   235,   236,   454,   221,
      40,   642,    41,    -1,   235,   236,   454,   237,   641,    -1,
     235,   236,   454,   237,   641,   221,    40,   642,    41,    -1,
     651,    -1,   311,    -1,   313,    -1,   643,    -1,   642,    33,
     643,    -1,     9,   522,   560,    10,   454,    -1,   645,    -1,
     646,    -1,   652,    51,    52,    -1,   189,   447,   560,   451,
      -1,   516,    40,    41,    -1,   516,    40,   528,    41,    -1,
     189,    40,    41,    -1,   189,    40,    41,   148,   561,    -1,
     189,    40,   649,    41,   148,   561,    -1,   561,    -1,   649,
      33,   561,    -1,    40,   563,    41,    -1,   652,    -1,    55,
      -1,    56,    -1,    57,    -1,   187,    -1,   170,    -1,   149,
      -1,    58,    -1,    59,    -1,    60,    -1,    61,    -1,    62,
      -1,   145,    -1,    63,    -1,   189,    -1,   119,    -1,    64,
      -1,    65,    -1,    66,    -1,    67,    -1,    68,    -1,    69,
      -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,
      -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,    79,
      -1,    80,    -1,    81,    -1,    82,    -1,    83,    -1,    84,
      -1,    85,    -1,    86,    -1,    88,    -1,    89,    -1,    90,
      -1,    91,    -1,    92,    -1,    93,    -1,    94,    -1,    95,
      -1,    96,    -1,    97,    -1,    98,    -1,    99,    -1,   100,
      -1,   101,    -1,   105,    -1,   106,    -1,   107,    -1,   108,
      -1,   109,    -1,   110,    -1,   111,    -1,   123,    -1,   128,
      -1,   129,    -1,   130,    -1,   131,    -1,   132,    -1,   133,
      -1,   134,    -1,   135,    -1,   136,    -1,   137,    -1,   138,
      -1,   139,    -1,   140,    -1,   141,    -1,   142,    -1,   143,
      -1,   144,    -1,   146,    -1,   148,    -1,   150,    -1,   151,
      -1,   152,    -1,   153,    -1,   154,    -1,   155,    -1,   156,
      -1,   157,    -1,   158,    -1,   159,    -1,   160,    -1,   161,
      -1,   162,    -1,   163,    -1,   164,    -1,   165,    -1,   166,
      -1,   167,    -1,   168,    -1,   169,    -1,   171,    -1,   172,
      -1,   173,    -1,   174,    -1,   175,    -1,   176,    -1,   177,
      -1,   178,    -1,   179,    -1,   180,    -1,   181,    -1,   183,
      -1,   184,    -1,   185,    -1,   188,    -1,   190,    -1,   191,
      -1,   192,    -1,   193,    -1,   194,    -1,   195,    -1,   196,
      -1,   197,    -1,   198,    -1,   199,    -1,   200,    -1,   201,
      -1,   202,    -1,   203,    -1,   204,    -1,   205,    -1,   206,
      -1,   207,    -1,   208,    -1,   209,    -1,   210,    -1,   211,
      -1,   212,    -1,   213,    -1,   214,    -1,   215,    -1,   216,
      -1,   217,    -1,   218,    -1,   219,    -1,   220,    -1,   221,
      -1,   223,    -1,   224,    -1,   225,    -1,   226,    -1,   227,
      -1,   228,    -1,   117,    -1,   118,    -1,   229,    -1,   230,
      -1,   231,    -1,   232,    -1,   233,    -1,   234,    -1,   235,
      -1,   236,    -1,   237,    -1,   238,    -1,   239,    -1,   240,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   745,   745,   747,   748,   749,   750,   752,   759,   789,
     792,   813,   815,   819,   826,   828,   829,   830,   831,   832,
     833,   837,   856,   860,   865,   872,   877,   882,   891,   894,
     900,   905,   912,   912,   912,   915,   928,   932,   939,   944,
     953,   956,   964,   991,   995,  1002,  1008,  1013,  1018,  1027,
    1051,  1055,  1062,  1067,  1072,  1077,  1088,  1106,  1110,  1117,
    1122,  1130,  1155,  1158,  1161,  1164,  1167,  1170,  1173,  1176,
    1179,  1182,  1185,  1188,  1191,  1194,  1197,  1200,  1203,  1206,
    1212,  1213,  1214,  1215,  1216,  1228,  1231,  1236,  1239,  1244,
    1249,  1257,  1265,  1276,  1287,  1290,  1297,  1307,  1310,  1315,
    1326,  1329,  1334,  1339,  1347,  1348,  1349,  1350,  1351,  1352,
    1353,  1354,  1355,  1356,  1357,  1358,  1359,  1360,  1361,  1362,
    1363,  1364,  1368,  1386,  1390,  1395,  1404,  1410,  1410,  1413,
    1433,  1437,  1442,  1450,  1455,  1459,  1467,  1470,  1478,  1491,
    1495,  1506,  1509,  1517,  1535,  1539,  1546,  1551,  1556,  1564,
    1570,  1578,  1586,  1593,  1607,  1611,  1625,  1634,  1642,  1645,
    1652,  1687,  1691,  1696,  1702,  1712,  1715,  1723,  1726,  1733,
    1751,  1755,  1762,  1767,  1775,  1793,  1797,  1805,  1827,  1831,
    1838,  1846,  1855,  1863,  1900,  1904,  1911,  1918,  1927,  1936,
    1963,  1967,  1974,  1986,  2012,  2016,  2023,  2033,  2045,  2049,
    2054,  2063,  2076,  2080,  2085,  2094,  2108,  2112,  2125,  2130,
    2142,  2146,  2154,  2167,  2175,  2188,  2195,  2209,  2209,  2212,
    2212,  2234,  2238,  2242,  2260,  2278,  2288,  2302,  2310,  2316,
    2322,  2328,  2340,  2343,  2357,  2358,  2359,  2360,  2364,  2367,
    2371,  2373,  2377,  2381,  2385,  2389,  2393,  2399,  2405,  2419,
    2420,  2421,  2422,  2423,  2424,  2425,  2431,  2435,  2439,  2443,
    2449,  2449,  2456,  2457,  2458,  2459,  2463,  2466,  2470,  2472,
    2476,  2480,  2484,  2488,  2492,  2498,  2504,  2508,  2519,  2520,
    2521,  2522,  2526,  2529,  2533,  2535,  2539,  2543,  2547,  2551,
    2555,  2561,  2567,  2578,  2579,  2580,  2581,  2586,  2591,  2613,
    2616,  2620,  2632,  2634,  2638,  2642,  2646,  2650,  2654,  2660,
    2666,  2670,  2684,  2685,  2686,  2687,  2688,  2689,  2690,  2691,
    2695,  2695,  2698,  2702,  2710,  2715,  2724,  2729,  2738,  2798,
    2806,  2811,  2820,  2825,  2834,  2844,  2848,  2856,  2860,  2868,
    2884,  2893,  2905,  2914,  2917,  2922,  2931,  2935,  2943,  2953,
    2965,  2972,  2976,  2984,  2989,  2999,  3003,  3007,  3011,  3018,
    3022,  3029,  3032,  3040,  3045,  3055,  3063,  3071,  3084,  3099,
    3106,  3107,  3108,  3109,  3110,  3111,  3112,  3113,  3114,  3115,
    3116,  3117,  3122,  3133,  3137,  3141,  3145,  3149,  3155,  3161,
    3162,  3168,  3175,  3179,  3183,  3195,  3198,  3209,  3212,  3222,
    3229,  3233,  3237,  3241,  3254,  3262,  3267,  3275,  3279,  3285,
    3292,  3307,  3324,  3327,  3331,  3339,  3347,  3351,  3360,  3368,
    3379,  3383,  3387,  3398,  3405,  3410,  3418,  3422,  3430,  3434,
    3442,  3450,  3459,  3464,  3473,  3483,  3487,  3491,  3491,  3495,
    3499,  3503,  3507,  3511,  3515,  3519,  3523,  3527,  3531,  3535,
    3539,  3543,  3548,  3552,  3556,  3561,  3565,  3570,  3574,  3578,
    3583,  3587,  3591,  3595,  3599,  3604,  3608,  3612,  3617,  3621,
    3625,  3630,  3634,  3639,  3644,  3649,  3653,  3658,  3662,  3667,
    3673,  3679,  3684,  3685,  3686,  3694,  3698,  3702,  3710,  3717,
    3726,  3726,  3730,  3750,  3751,  3759,  3760,  3766,  3787,  3791,
    3805,  3811,  3824,  3828,  3828,  3832,  3836,  3845,  3857,  3868,
    3872,  3876,  3880,  3884,  3888,  3892,  3896,  3904,  3912,  3929,
    3937,  3946,  3950,  3954,  3958,  3962,  3970,  3982,  3987,  3992,
    3999,  4004,  4011,  4018,  4029,  4039,  4042,  4053,  4054,  4055,
    4056,  4057,  4058,  4059,  4060,  4061,  4062,  4066,  4066,  4069,
    4069,  4069,  4073,  4080,  4084,  4088,  4096,  4104,  4114,  4124,
    4128,  4135,  4140,  4149,  4153,  4162,  4162,  4162,  4166,  4172,
    4181,  4181,  4186,  4189,  4198,  4209,  4209,  4214,  4218,  4225,
    4229,  4240,  4243,  4248,  4259,  4262,  4266,  4280,  4283,  4288,
    4299,  4302,  4306,  4324,  4327,  4332,  4337,  4344,  4357,  4371,
    4374,  4379,  4398,  4399,  4412,  4413,  4414,  4415,  4416,  4417,
    4422,  4430,  4438,  4442,  4450,  4454,  4463,  4470,  4474,  4482,
    4490,  4498,  4505,  4515,  4522,  4526,  4534,  4545,  4548,  4557,
    4560,  4570,  4577,  4587,  4588,  4590,  4592,  4598,  4602,  4606,
    4607,  4608,  4612,  4624,  4625,  4626,  4627,  4628,  4629,  4630,
    4631,  4632,  4637,  4645,  4649,  4654,  4663,  4671,  4679,  4683,
    4687,  4695,  4699,  4703,  4711,  4712,  4720,  4728,  4733,  4737,
    4741,  4745,  4754,  4755,  4763,  4770,  4773,  4776,  4779,  4783,
    4795,  4811,  4813,  4820,  4823,  4832,  4844,  4849,  4861,  4866,
    4870,  4875,  4880,  4885,  4886,  4895,  4900,  4904,  4910,  4914,
    4922,  4927,  4937,  4940,  4944,  4948,  4952,  4956,  4964,  4966,
    4977,  4983,  4989,  4995,  5010,  5014,  5018,  5022,  5026,  5030,
    5034,  5038,  5046,  5050,  5054,  5062,  5066,  5074,  5075,  5087,
    5088,  5089,  5090,  5091,  5092,  5093,  5094,  5102,  5106,  5110,
    5114,  5123,  5127,  5135,  5139,  5149,  5153,  5157,  5161,  5165,
    5173,  5175,  5182,  5186,  5190,  5194,  5204,  5208,  5212,  5220,
    5222,  5230,  5234,  5241,  5245,  5253,  5257,  5265,  5273,  5277,
    5285,  5292,  5300,  5305,  5310,  5322,  5326,  5330,  5334,  5338,
    5344,  5344,  5349,  5355,  5355,  5360,  5364,  5374,  5382,  5389,
    5394,  5402,  5411,  5423,  5435,  5448,  5459,  5468,  5480,  5484,
    5488,  5493,  5498,  5503,  5512,  5515,  5523,  5527,  5535,  5539,
    5547,  5552,  5561,  5565,  5569,  5577,  5581,  5589,  5593,  5597,
    5601,  5609,  5613,  5617,  5625,  5630,  5640,  5653,  5653,  5657,
    5665,  5674,  5679,  5688,  5692,  5696,  5703,  5708,  5717,  5726,
    5726,  5726,  5726,  5726,  5726,  5726,  5726,  5727,  5727,  5727,
    5727,  5727,  5727,  5728,  5732,  5732,  5732,  5732,  5732,  5732,
    5732,  5732,  5732,  5732,  5733,  5733,  5733,  5733,  5733,  5733,
    5733,  5734,  5734,  5734,  5734,  5734,  5734,  5734,  5734,  5735,
    5735,  5735,  5735,  5735,  5735,  5735,  5735,  5735,  5735,  5735,
    5736,  5736,  5736,  5736,  5736,  5736,  5736,  5736,  5736,  5736,
    5736,  5736,  5737,  5737,  5737,  5737,  5737,  5737,  5737,  5737,
    5737,  5737,  5738,  5738,  5738,  5738,  5738,  5738,  5738,  5738,
    5738,  5738,  5738,  5738,  5739,  5739,  5739,  5739,  5739,  5739,
    5739,  5739,  5739,  5739,  5739,  5739,  5740,  5740,  5740,  5740,
    5740,  5740,  5740,  5740,  5740,  5741,  5741,  5741,  5741,  5741,
    5741,  5741,  5741,  5742,  5742,  5742,  5742,  5742,  5742,  5742,
    5742,  5742,  5743,  5743,  5743,  5743,  5743,  5743,  5743,  5743,
    5743,  5744,  5744,  5744,  5744,  5744,  5744,  5744,  5744,  5744,
    5744,  5745,  5745,  5745,  5745,  5745,  5745,  5745,  5745,  5745,
    5745,  5745,  5746,  5746,  5746,  5746,  5746,  5746,  5746,  5746,
    5746,  5746,  5746,  5747,  5747,  5747
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
  "\"function\"", "\"function (ext)\"", "\"score\"", "\"ftcontains\"",
  "\"weight\"", "\"window\"", "\"distance\"", "\"occurs\"", "\"times\"",
  "\"same\"", "\"different\"", "\"lowercase\"", "\"uppercase\"",
  "\"relationship\"", "\"levels\"", "\"language\"", "\"any\"", "\"all\"",
  "\"phrase\"", "\"exactly\"", "\"from\"", "\"words\"", "\"sentences\"",
  "\"paragraphs\"", "\"sentence\"", "\"paragraph\"", "\"replace\"",
  "\"modify\"", "\"first\"", "\"insert\"", "\"before\"", "\"after\"",
  "\"revalidation\"", "\"with\"", "\"with (ft option)\"", "\"nodes\"",
  "\"rename\"", "\"last\"", "\"delete\"", "\"into\"", "\"updating\"",
  "\"id\"", "\"key\"", "\"template\"", "\"matches\"", "\"name\"",
  "\"call\"", "\"apply\"", "\"templates\"", "\"mode\"", "\"ftor\"",
  "\"ftand\"", "\"ftnot\"", "\"<XSLT end element>\"",
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
  "\"<xsl:import-schema...\"", "\"version='...'\"", "\"mode='...'\"",
  "\"name='...'\"", "\"doctype-public='...'\"", "\"doctype-system='...'\"",
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
  "TemplateArgumentList", "TemplateArgument", "FunctionRef",
  "LiteralFunctionRef", "InlineFunction", "DereferencedFunctionCall",
  "FunctionType", "FunctionTypeArguments", "ParenthesizedItemType",
  "QNameValue", "FunctionName", 0
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
     565,   566,   567,   568,   569,   570,   571
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   317,   318,   318,   318,   318,   318,   318,   319,   320,
     320,   321,   321,   321,   322,   322,   322,   322,   322,   322,
     322,   323,   324,   324,   324,   324,   324,   324,   325,   325,
     325,   325,   326,   326,   326,   327,   328,   328,   328,   328,
     329,   329,   330,   331,   331,   331,   331,   331,   331,   332,
     333,   333,   333,   333,   333,   333,   334,   335,   335,   335,
     335,   336,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     338,   338,   338,   338,   338,   339,   339,   340,   341,   341,
     341,   341,   341,   342,   343,   343,   343,   344,   344,   344,
     345,   345,   345,   345,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   347,   348,   348,   348,   349,   350,   350,   351,
     352,   352,   352,   353,   353,   353,   354,   354,   355,   356,
     356,   357,   357,   358,   359,   359,   359,   359,   359,   360,
     361,   362,   363,   364,   365,   365,   366,   367,   368,   368,
     369,   370,   370,   370,   370,   371,   371,   372,   372,   373,
     374,   374,   374,   374,   375,   376,   376,   377,   378,   378,
     378,   379,   380,   381,   382,   382,   382,   382,   382,   383,
     384,   384,   384,   385,   386,   386,   386,   387,   388,   388,
     388,   389,   390,   390,   390,   391,   392,   392,   393,   393,
     394,   394,   394,   395,   395,   396,   396,   397,   397,   398,
     398,   399,   399,   399,   399,   399,   399,   400,   401,   401,
     401,   401,   402,   402,   403,   403,   403,   403,   404,   405,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   407,
     407,   407,   407,   407,   407,   407,   408,   408,   408,   408,
     409,   409,   410,   410,   410,   410,   411,   412,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   414,   414,
     414,   414,   415,   416,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   418,   418,   418,   418,   419,   419,   420,
     421,   422,   423,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   424,   424,   424,   424,   424,   424,   424,   424,
     425,   425,   426,   427,   428,   428,   429,   429,   430,   431,
     432,   432,   433,   433,   434,   435,   435,   436,   436,   437,
     438,   439,   439,   440,   440,   440,   441,   441,   442,   442,
     443,   444,   444,   445,   445,   446,   446,   446,   446,   447,
     447,   448,   448,   449,   449,   450,   451,   452,   453,   453,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   455,   456,   456,   456,   456,   457,   457,   457,
     457,   458,   459,   459,   460,   461,   461,   462,   462,   463,
     464,   464,   465,   465,   466,   467,   467,   468,   468,   469,
     469,   470,   471,   471,   471,   472,   472,   472,   473,   473,
     474,   474,   475,   476,   477,   477,   478,   478,   479,   479,
     480,   481,   481,   482,   482,   483,   483,   484,   483,   483,
     483,   483,   483,   483,   483,   483,   483,   483,   483,   483,
     483,   483,   485,   485,   485,   486,   486,   487,   487,   487,
     488,   488,   488,   488,   488,   489,   489,   489,   490,   490,
     490,   491,   491,   492,   492,   493,   493,   494,   494,   495,
     495,   495,   496,   496,   496,   497,   497,   497,   498,   498,
     499,   499,   500,   501,   501,   502,   502,   502,   502,   503,
     504,   504,   504,   505,   505,   506,   506,   507,   507,   508,
     508,   508,   508,   508,   508,   508,   508,   509,   509,   510,
     510,   511,   511,   511,   511,   511,   512,   513,   513,   514,
     514,   515,   515,   515,   516,   517,   517,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   519,   519,   520,
     520,   520,   521,   522,   523,   523,   524,   525,   526,   527,
     527,   528,   528,   529,   529,   530,   530,   530,   531,   531,
     532,   532,   533,   533,   533,   534,   534,   535,   535,   536,
     536,   537,   537,   537,   538,   538,   538,   539,   539,   539,
     540,   540,   540,   541,   541,   541,   541,   541,   542,   543,
     543,   544,   545,   545,   546,   546,   546,   546,   546,   546,
     547,   548,   549,   549,   550,   550,   551,   552,   552,   553,
     554,   555,   556,   556,   557,   557,   558,   559,   559,   560,
     560,   561,   561,   562,   562,   562,   562,   563,   563,   563,
     563,   563,   564,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   566,   567,   567,   567,   568,   569,   570,   570,
     570,   571,   571,   571,   572,   572,   573,   574,   575,   575,
     575,   575,   576,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   584,   585,   585,   586,   586,   587,   587,   588,
     588,   589,   589,   590,   590,   591,   591,   591,   592,   592,
     593,   593,   594,   594,   594,   594,   594,   594,   595,   595,
     596,   596,   596,   596,   597,   597,   597,   597,   597,   597,
     597,   597,   598,   598,   598,   599,   599,   600,   600,   601,
     601,   601,   601,   601,   601,   601,   601,   602,   602,   602,
     602,   603,   603,   604,   604,   605,   605,   605,   605,   605,
     606,   606,   607,   607,   607,   607,   608,   608,   608,   609,
     609,   610,   610,   611,   611,   612,   612,   613,   614,   614,
     615,   616,   617,   617,   617,   618,   618,   618,   618,   618,
     619,   619,   620,   621,   621,   622,   622,   623,   624,   625,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   633,
     633,   633,   633,   633,   634,   634,   635,   635,   636,   636,
     637,   637,   638,   638,   638,   639,   639,   640,   640,   640,
     640,   641,   641,   641,   642,   642,   643,   644,   644,   645,
     646,   647,   647,   648,   648,   648,   649,   649,   650,   651,
     651,   651,   651,   651,   651,   651,   651,   651,   651,   651,
     651,   651,   651,   651,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652
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
       3,     1,     3,     4,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     4,     1,     4,     1,     4,     1,     4,     1,     2,
       2,     1,     1,     1,     1,     4,     5,     5,     3,     4,
       1,     2,     4,     1,     2,     1,     2,     2,     1,     1,
       3,     3,     1,     1,     1,     2,     2,     2,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     2,
       1,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     2,     1,     4,     4,     3,
       4,     3,     1,     1,     1,     1,     1,     1,     5,    10,
       1,     1,     0,     7,     7,     0,     1,     3,     3,     3,
       3,     0,     2,     2,     0,     2,     2,     0,     2,     2,
       0,     2,     2,     0,     2,     2,     2,     2,     3,     0,
       1,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       4,     3,     1,     3,     2,     3,     3,     1,     3,     4,
       4,     3,     1,     3,     2,     3,     2,     0,     1,     0,
       2,     2,     3,     0,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     4,     4,     3,     3,     3,     4,
       4,     3,     4,     6,     1,     1,     4,     1,     3,     4,
       6,     7,     1,     1,     4,     1,     1,     1,     1,     1,
       3,     0,     2,     0,     2,     3,     1,     3,     1,     4,
       1,     2,     1,     1,     2,     2,     3,     1,     2,     4,
       3,     4,     0,     1,     2,     1,     2,     1,     0,     3,
       2,     3,     3,     4,     1,     3,     3,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     2,     2,     2,     2,     3,     3,     6,     6,     2,
       0,     3,     2,     4,     4,     6,     5,     3,     5,     0,
       2,     2,     3,     1,     3,     2,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     6,     6,     4,     4,     4,
       2,     2,     2,     2,     2,     7,     5,     5,     6,     3,
       1,     4,     1,     1,     1,     1,     1,     1,     5,     7,
       8,    10,     6,     8,     0,     2,     2,     3,     0,     2,
       1,     3,     1,     1,     1,     3,     7,     3,     7,     5,
       9,     1,     1,     1,     1,     3,     5,     1,     1,     3,
       4,     3,     4,     3,     5,     6,     1,     3,     3,     1,
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
       0,     0,   240,   268,   284,   302,     0,     0,     0,   531,
       0,     0,     0,   599,     0,   575,     0,     0,   499,   556,
     526,     0,   792,   793,   794,   840,   841,   842,   846,   847,
     848,   849,   850,   852,   855,   856,   857,   858,   859,   860,
     861,   862,   863,   864,   865,   866,   867,   868,   869,   870,
     871,   872,   873,   874,   875,   876,   877,   878,   879,   880,
     881,   882,   883,   884,   885,   886,   887,   888,   889,   890,
     891,   892,   893,   894,   895,   896,   897,   898,   992,   993,
     854,   795,   899,   532,   533,   900,   901,   902,   903,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   851,   917,   918,   845,   919,   920,   921,   922,
     923,   924,   925,   926,   927,   928,   929,   930,   931,   932,
     933,   934,   935,   936,   937,   938,   844,   939,   940,   941,
     942,   943,   944,   945,   946,   947,   948,   949,   950,   951,
     952,   843,   953,   853,   954,   955,   956,   957,   958,   959,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   969,
     970,   971,   972,   973,   974,   975,   976,   977,   978,   979,
     980,   981,   982,   983,   984,   985,   986,   987,   988,   989,
     990,   991,   994,   995,   996,   997,   998,   999,  1000,  1001,
    1002,  1003,  1004,  1005,     2,   367,   369,   370,     0,   386,
     389,   390,   371,   372,   373,   379,   432,   434,   451,   454,
     456,   459,   464,   467,   470,   472,   474,   476,   478,   481,
     482,   484,     0,   490,   483,   495,   498,   502,   503,   535,
       0,   508,   535,     0,   520,   518,   528,   530,   504,   535,
     537,   547,   538,   539,   540,   543,   544,   541,   542,   563,
     565,   566,   567,   564,   604,   605,   606,   607,   608,   609,
     527,   651,   643,   650,   649,   648,   645,   647,   644,   646,
     374,     0,   375,     0,   377,   376,   378,   549,   550,   551,
     548,   529,   380,   381,   545,   827,   828,   546,   797,   839,
       0,     0,     3,   236,   237,     0,   240,   240,     4,   264,
     265,     0,   268,   268,     5,   280,   281,     0,   284,   284,
       6,   302,   295,   296,   302,     0,    11,    94,     7,     8,
      10,     1,   840,   841,   842,   846,   847,   848,   849,   850,
     861,   862,   863,   864,   865,   866,   867,   868,   869,   870,
     871,   872,   890,   992,   993,   901,   903,   914,   915,   851,
     845,   932,   938,   843,   853,   978,   981,   987,   989,   999,
    1000,   552,   553,   839,   840,   841,   847,   850,   843,   517,
     570,   571,   572,     0,   600,     0,   497,   576,     0,   480,
     479,   555,     0,   511,     0,     0,   617,     0,     0,     0,
       0,     0,     0,     0,   622,     0,     0,     0,     0,     0,
     509,   510,   512,   513,   514,   515,   521,   522,   523,   524,
     525,     0,     0,     0,   790,     0,     0,     0,   391,   393,
       0,     0,   399,   401,     0,     0,   421,     0,     0,     0,
       0,     0,     0,   516,     0,     0,   612,     0,     0,   629,
       0,     0,   780,   781,     0,   783,   784,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   387,   388,   384,   385,
       0,     0,     0,     0,     0,     0,     0,     0,   437,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   491,   496,     0,     0,   505,   507,
     506,   519,     0,   534,     0,   782,     0,     0,     0,     0,
     944,   951,     0,     0,     0,     0,   249,     0,     0,   253,
     254,   255,   250,   251,   320,   321,     0,   252,   238,     0,
     234,   235,   239,   944,     0,     0,     0,     0,     0,     0,
       0,     0,   266,     0,   262,   263,   267,   944,     0,     0,
       0,   312,     0,     0,   316,   317,   319,   313,   314,     0,
     315,     0,   282,   318,     0,   278,   279,   283,   293,   294,
     300,   944,     0,     0,     0,     0,     0,     0,     0,     0,
     299,     0,    14,   100,   575,     0,   602,   601,   598,     0,
     554,   665,   661,     0,   664,   676,     0,     0,   616,   657,
       0,   653,     0,     0,     0,     0,   652,   658,     0,     0,
     796,     0,     0,   621,     0,   667,     0,   675,   677,   656,
       0,     0,     0,     0,     0,     0,     0,   629,     0,   629,
       0,     0,   629,     0,     0,     0,     0,     0,     0,     0,
       0,   673,   668,     0,   672,     0,   611,     0,   359,     0,
     364,     0,     0,     0,     0,     0,   815,   817,   368,   382,
     404,     0,     0,   383,   431,   433,   436,   439,   440,   441,
     449,   450,     0,   435,   442,   443,   444,   445,   446,   447,
     448,     0,     0,     0,     0,   702,   452,   683,   686,   688,
     690,   692,   693,   708,   697,   457,   458,   455,   460,   462,
     461,   463,   465,   466,   468,   469,     0,     0,     0,     0,
     488,     0,   501,   500,     0,   831,   562,     0,     0,     0,
       0,     0,   559,     0,   829,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   260,   261,   808,     0,
       0,     0,   322,   241,   246,   242,   243,   244,   248,   245,
     247,     0,     0,     0,   269,   274,   270,   271,   272,   276,
     277,   273,   275,     0,     0,   362,     0,   285,   286,   287,
     288,   292,   289,   290,   291,   361,   361,   303,   304,   305,
     306,   310,   311,   307,   308,   309,    12,    13,     0,    96,
      97,     0,   576,     0,   603,     0,   493,   492,     0,   662,
     618,   614,     0,   620,   654,   655,   660,   659,   623,   624,
       0,   666,   674,   619,   610,     0,   789,     0,   557,   558,
     395,   392,     0,     0,   400,     0,   420,   418,   419,     0,
       0,   485,     0,     0,     0,   669,   613,   629,     0,   360,
       0,   852,   844,   853,   630,   633,   637,   639,   642,   640,
     641,     0,   830,     0,     0,     0,     0,     0,     0,   411,
     405,   408,   412,     0,   438,     0,     0,   691,     0,   703,
     705,   707,   698,     0,   453,     0,   681,     0,     0,     0,
       0,     0,     0,   739,   740,     0,     0,   694,   727,   733,
     734,   732,   731,   735,   729,   730,   736,     0,   695,   471,
     473,   475,   627,   477,   489,     0,     0,   832,     0,     0,
     779,   778,   777,   560,     0,   297,     0,   324,   325,   679,
     340,     0,     0,   353,   354,   330,   331,     0,     0,     0,
       0,   335,   336,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   343,     0,   343,   329,   773,   772,   774,     0,
       9,    22,    50,    36,    57,    62,    88,    15,    40,    16,
      40,    17,   100,    18,   100,    19,     0,    20,     0,    95,
      93,   123,     0,   130,   139,     0,     0,     0,   170,   175,
     178,   182,   184,   190,   194,   161,   198,   202,   206,   127,
     128,   102,   103,   104,   100,   105,   101,   106,   136,   107,
     141,   108,     0,   110,   100,   109,   118,   165,   111,   100,
     112,   100,   113,   100,   114,   100,   115,   100,   116,   100,
     117,   100,   119,     0,   120,   100,   121,   100,   575,   575,
     593,   568,   494,     0,   678,   615,   625,   791,     0,     0,
     397,     0,     0,     0,     0,     0,   425,     0,   486,   487,
       0,   365,   363,     0,     0,     0,     0,   634,   636,   635,
     631,     0,   786,     0,   787,     0,     0,   822,   823,   819,
     821,     0,   413,   414,   415,   406,   696,   702,   700,     0,
     704,   706,     0,   685,     0,     0,   714,     0,     0,     0,
       0,     0,   680,   684,   687,     0,   742,   741,   744,   749,
       0,   769,   738,   737,     0,   767,   743,     0,     0,   768,
       0,   728,     0,     0,     0,     0,   628,   626,   536,   561,
       0,     0,     0,     0,   629,     0,     0,   339,     0,     0,
       0,   328,   808,   812,   813,   814,   809,   810,     0,     0,
       0,     0,   343,     0,   342,     0,   349,     0,    89,    90,
      28,    24,     0,     0,     0,   100,    37,    39,     0,   100,
      51,    55,    54,     0,     0,     0,    58,     0,     0,     0,
      61,    79,    63,    67,    68,    69,    73,    74,    76,    65,
      70,    71,    72,    75,    77,     0,     0,     0,    87,    99,
      98,     0,     0,     0,   158,   154,   100,     0,     0,    97,
       0,     0,     0,     0,   140,     0,   149,     0,   100,     0,
      97,    97,   167,   171,     0,     0,     0,     0,     0,    97,
       0,     0,     0,    97,     0,    97,    97,     0,    97,     0,
       0,    97,    97,     0,   197,   200,     0,   203,   204,     0,
       0,     0,     0,     0,     0,   663,   788,     0,     0,     0,
     402,   403,   422,     0,     0,     0,   423,   424,     0,     0,
     670,   838,   632,   638,   833,   836,     0,   366,     0,     0,
       0,   824,     0,     0,   407,     0,   409,   699,   701,   771,
     721,   719,   720,   682,     0,     0,   725,   726,   717,   718,
     689,   757,   770,     0,     0,   746,   745,     0,     0,     0,
       0,   710,     0,   709,   775,   776,   298,   301,     0,   323,
     332,   333,   326,   327,   337,   338,   334,     0,   798,   804,
       0,     0,     0,   214,   213,   840,   861,   994,   995,     0,
     209,     0,   212,   210,   221,   232,   228,     0,   258,   256,
     346,   347,   341,   344,     0,     0,     0,    91,    92,    26,
      23,    27,    32,    33,    34,    25,    43,    41,   100,     0,
      38,     0,    53,    52,    49,    60,    59,    56,    83,    84,
      80,    81,    82,    64,    85,    66,    78,   126,   150,     0,
     100,   155,     0,     0,   152,   124,   125,   122,   133,   134,
     135,   132,   131,   129,   144,   137,   100,   138,   142,   151,
       0,   162,   163,   164,   100,     0,   173,   172,   100,   176,
     174,   179,   180,   177,   181,   185,   187,   188,   186,   183,
     191,   192,   189,   195,   196,   193,   199,   201,   207,   205,
     575,   575,     0,   597,   596,   595,   594,   396,     0,     0,
       0,     0,     0,     0,     0,   671,     0,     0,     0,   785,
     629,     0,   816,   818,     0,   416,   417,     0,   722,   723,
     724,   715,   716,   750,   750,   752,     0,     0,   759,   759,
     712,   711,     0,     0,   352,   350,   806,     0,     0,     0,
       0,   811,   231,     0,     0,     0,     0,     0,   802,   804,
     222,     0,     0,     0,     0,   227,     0,     0,   345,   343,
       0,   357,   355,    29,    30,    31,    44,    48,    47,     0,
       0,     0,    21,    35,    86,   157,     0,   153,   156,   145,
     148,     0,     0,     0,   166,     0,   160,   169,     0,     0,
     575,   398,   394,     0,   428,     0,   427,   430,   834,   837,
       0,     0,   825,     0,   410,     0,     0,     0,     0,     0,
     763,   761,   756,   758,   713,   351,   807,   805,   799,     0,
     230,   229,     0,   218,   217,     0,   208,     0,   224,   223,
     226,   225,     0,   259,   257,   348,     0,    46,    45,    42,
     159,   147,   146,   143,   168,   581,   587,   573,   584,   590,
     574,     0,     0,     0,   835,     0,   820,     0,   748,   747,
     753,   754,     0,   762,     0,     0,   760,   800,   804,   215,
       0,   803,     0,   358,   356,     0,     0,     0,     0,   569,
       0,   426,   826,   751,     0,   764,   765,   766,     0,     0,
     219,   220,   233,   577,   583,   582,   578,   589,   588,   579,
     586,   585,   580,   592,   591,   429,   755,   801,   216
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,   318,   319,   582,   788,   957,   958,  1349,  1355,
     959,   960,  1155,  1357,  1358,   961,   962,   963,   964,   965,
     966,  1373,  1375,   967,   968,   991,   583,   969,   791,   992,
     993,   994,   995,   996,   997,   998,  1391,  1203,   999,  1000,
    1205,  1395,  1396,  1001,  1002,  1003,  1004,  1005,  1194,  1195,
    1196,  1382,  1006,  1007,  1212,  1405,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,
    1022,  1023,  1024,  1025,  1026,  1027,  1329,  1330,  1331,  1332,
    1562,  1629,  1333,  1334,  1335,  1495,   292,   293,   294,   295,
     512,   513,   739,   298,   299,   300,   301,   304,   305,   306,
     307,   310,   296,   312,   313,   297,   315,   548,   514,   743,
     515,   516,   517,   518,   540,   519,   520,   521,   933,  1316,
     522,   523,   524,  1144,   941,   525,   526,  1475,   527,   561,
     439,   766,   649,   650,  1190,   194,   195,   196,   197,   198,
     199,   200,   418,   419,  1040,  1249,   201,   422,   423,   458,
     459,   860,   861,   862,  1074,  1276,   202,   425,   426,   203,
    1045,  1256,  1046,   204,   205,   206,   207,   672,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   797,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     498,   239,   240,   241,   242,   361,   243,   244,   245,   246,
     247,   717,   248,   249,   250,   372,   584,   378,  1587,  1590,
    1615,  1617,  1616,  1618,  1244,   251,   375,   252,   587,   253,
     254,   255,   437,   598,   256,   387,   257,   258,   259,   395,
     613,   901,  1117,   652,   844,  1060,   845,   846,   260,   261,
     262,   263,   264,   265,   266,   593,   267,   614,   268,   643,
     269,   616,   594,   617,  1033,   920,   686,  1092,   876,   687,
     688,   689,   690,   691,   692,   693,   694,   872,   898,  1115,
    1093,  1461,  1288,   887,   888,   889,   890,   891,   892,  1545,
    1296,   893,  1552,  1468,  1549,  1606,   894,   895,   896,   874,
     563,   270,   271,   272,   273,   274,   275,   276,   413,   414,
     277,   278,   279,   280,   609,   281,   529,  1479,  1319,   937,
    1136,  1137,   282,   283,  1069,  1270,  1271,   284,   285,   286,
     287,   849,  1266,   850,   288,   289
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1403
static const yytype_int16 yypact[] =
{
     974,  3160,   519,   519,   519,   519,   -86,   144,  6847, -1403,
    5436,   647,    46,   223,  4552,   284,  3392,  3392, -1403, -1403,
   -1403,  1768, -1403, -1403, -1403,   167,   291,   351,   410,   140,
     415,   438,   634, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
     472,   482,   489,   536,   584,   591,   626,   656,   677,   701,
     706,   587, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,   739,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,   689,   714,
   -1403, -1403, -1403, -1403, -1403, -1403,   777, -1403,    51, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,   801,
     801, -1403,   774, -1403, -1403,   779, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,   622,
   -1403, -1403, -1403, -1403, -1403,   856, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403,   326, -1403,   823, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,    75, -1403,
   -1403,    14, -1403, -1403, -1403, -1403, -1403,   793, -1403,    48,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403,   654,   675, -1403,
   -1403, -1403, -1403, -1403, -1403,   890, -1403, -1403,   798,   833,
   -1403, -1403, -1403, -1403, -1403,   776,   789, -1403,   784,   758,
      74,    60,    52,   771, -1403,   797,   788,   805,   794, -1403,
   -1403, -1403,   349, -1403, -1403,  4552,   475, -1403, -1403, -1403,
    5436, -1403, -1403,  5436, -1403, -1403, -1403, -1403,   926, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403,  3160, -1403,  3160, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,   498,
     804,   820, -1403, -1403, -1403,  3624,   810, -1403, -1403, -1403,
   -1403,  3856,   810, -1403, -1403, -1403, -1403,  4088,   810, -1403,
   -1403,   810, -1403, -1403, -1403,  4320, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403,   964,   967,   970,   993,  1000, -1403,
   -1403, -1403, -1403,   869, -1403,  1018,   475, -1403,  6847, -1403,
   -1403, -1403,   803, -1403,  5647,  3160, -1403,  1015,  1011,  3160,
      90,  1026,  6661,  3160, -1403,  1024,  6847,  6847,  1051,  3160,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403,  3160,  6847,    23, -1403,  3160,  3160,  6847,  1079, -1403,
    6847,  1110,  1093, -1403,  6847,   120, -1403,   132,  3160,  3160,
    3160,  1081,  1086, -1403,  5858,  3160, -1403,  1015,   310,   994,
    3160,   986, -1403, -1403,  3160, -1403, -1403,  6847,  3160,  3160,
    3160,   777,    51,  3160,  1012,  1014, -1403, -1403,   864, -1403,
    3392,  3392,  3392,  3392,  3392,  3392,  3392,  3392, -1403,  3392,
    3392,  3392,  3392,  3392,  3392,  3392,  3392,   110,  3392,  3392,
    3392,  3392,  3392,  3392,  3392,  3392,  3392,  3392,  3392,   995,
     998,  1001,  1003,  2000, -1403,   475,  4552,  4552,  1131, -1403,
    1131, -1403,  2232,  1131,   276, -1403,  2464,  1102,  1033,  6847,
     563,   835,  1106,  1106,  1106,  1106, -1403,  1106,  1106, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403,  1106, -1403, -1403,  1106,
   -1403, -1403,   666,   335,  1106,  1106,  1106,  1106,  1106,  1106,
    1106,  1106, -1403,  1106, -1403, -1403,   669,   726,  1106,  1106,
    1106, -1403,  1106,  1106, -1403, -1403, -1403, -1403, -1403,  1106,
   -1403,  1106, -1403, -1403,  1106, -1403, -1403,   672, -1403, -1403,
     682,   533,  1106,  1106,  1106,  1106,  1106,  1106,  1106,  1106,
   -1403,  1106,   263,   728,  1055,  1056, -1403, -1403, -1403,   156,
   -1403, -1403, -1403,   831, -1403, -1403,   432,  2696, -1403, -1403,
     473, -1403,   438,  1000,  1119,  1120, -1403, -1403,  1122,  1123,
   -1403,   551,  2928, -1403,  1124, -1403,  1125, -1403, -1403, -1403,
     556,   659,  1157,   739,  3160,   685,   697,   994,   777,   994,
    6847,    51,   994,   801,  3160,  3160,   836,   840,   700,  3160,
    3160, -1403, -1403,   841, -1403,   705, -1403,  6847, -1403,   843,
   -1403,  6260,  1121,   947,  1112,  1031,   954,   307, -1403, -1403,
   -1403,  3160,  1057, -1403,   789, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403,  3392, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403,   110,  3160,   499,   715,   693,  1104,   951,   953,  1113,
   -1403, -1403,   495,  1002, -1403,    60,    60,  1004,    52,    52,
      52,    52,   771,   771, -1403, -1403,  6260,  6260,  6847,  6847,
   -1403,   727, -1403, -1403,  3160, -1403, -1403,   868,   463,  3160,
    3160,  3160, -1403,   877, -1403,    31,  1161,   881,  1078,  1192,
    6847,   887,   939,   451,   665,  6847, -1403, -1403,   502,  7024,
     188,    55, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403,   563,   835,   495, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403,   335,   431, -1403,   870, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403,   865,   305, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,   374, -1403,
   -1403,   984,   941,   421, -1403,  1075, -1403, -1403,  6847, -1403,
   -1403, -1403,   740, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
     742, -1403, -1403, -1403, -1403,  3160, -1403,  1076, -1403, -1403,
    1094, -1403,  1196,  1197, -1403,  1080, -1403, -1403, -1403,  1063,
    1061, -1403,   754,   760,  6847, -1403, -1403,   994,  1203, -1403,
    6461,  1173,  1176,  1177, -1403,   623, -1403, -1403, -1403, -1403,
   -1403,  3160, -1403,  3160,  3160,  3160,  1178,  1180,  1506, -1403,
    1188, -1403,   932,  3160, -1403,  1181,   780, -1403,   152,  1129,
    1017, -1403, -1403,  1134, -1403,   110,   385,   110,  1105,   987,
     903,   991,  6847, -1403, -1403,  1115,   210,   495, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403,    44, -1403, -1403,
   -1403, -1403,  1201, -1403, -1403,   553,  3160, -1403,  1005,  1022,
   -1403, -1403, -1403, -1403,  1116, -1403,  1078, -1403, -1403, -1403,
   -1403,  6847,  1216, -1403, -1403, -1403, -1403,  1117,  1078,  1087,
    1088, -1403, -1403,  1225,  1137,  6847,   -52,  1029,   823,  6847,
    1082,  1078,  1151,  6847,  1151,   495, -1403, -1403, -1403,  7024,
   -1403, -1403, -1403, -1403, -1403, -1403,   796, -1403,   386, -1403,
    -112, -1403,   382, -1403,   262, -1403,   832, -1403,  1042,   121,
   -1403, -1403,   770, -1403, -1403,   976,  1035,   997, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403,   407, -1403, -1403, -1403,    21, -1403,
    1023, -1403,  1043, -1403, -1403, -1403, -1403,   225, -1403,   485,
   -1403,   996, -1403,    56, -1403, -1403, -1403,   353, -1403,   142,
   -1403,  -118, -1403,    62, -1403,   795, -1403,  1006,   284,   284,
   -1403, -1403, -1403,  1250, -1403, -1403, -1403, -1403,  3160,  1288,
    1108,  3160,  3160,  3160,  4765,   133, -1403,  3160, -1403, -1403,
     418, -1403, -1403,  1258,  1259,  1260,  6059, -1403, -1403, -1403,
   -1403,   782, -1403,  1083, -1403,  1294,  1294, -1403, -1403,  1084,
   -1403,  3160, -1403, -1403,  1168,  1188, -1403,   693, -1403,  1261,
   -1403, -1403,  3392,   953,  1214,   990, -1403,  3392,  3392,    44,
     871,   871, -1403, -1403,  1113,   110, -1403, -1403, -1403, -1403,
    1099, -1403, -1403, -1403,  1187, -1403, -1403,    88,  1103, -1403,
    1221, -1403,   193,  3392,  3392,  1126, -1403, -1403, -1403, -1403,
    3160,  3160,  1106,  1106,   994,  1078,   949, -1403,  1078,  1078,
     916, -1403,    17, -1403, -1403, -1403,  1280, -1403,  4995,    68,
    1278,  1147,  1151,  1078,  1284,  1281,  1284,   823,  1037,  1039,
   -1403, -1403,  4995,  6260,   931,  1071, -1403, -1403,  6260,  1071,
   -1403, -1403, -1403,  6260,  3160,  1019, -1403,  6260,  3160,  1118,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403,    27,  1205,  1205, -1403, -1403,
   -1403,  1085,  3160,  1032,   844, -1403, -1403,  3160,  3160, -1403,
    1146,   -56,  3160,   -31, -1403,   300, -1403,  7025, -1403,  3160,
   -1403, -1403,  1062, -1403,  6260,  3160,  7053,  3160,  7081, -1403,
    3160,  7109,  7137, -1403,  3160, -1403, -1403,  7165, -1403,  3160,
    7193, -1403, -1403,  7221, -1403, -1403,  3160, -1403, -1403,  7249,
    3160,  7277,  1289,  1290,   585, -1403, -1403,  6847,  1322,  1207,
   -1403, -1403, -1403,  6847,  1210,    86, -1403, -1403,  1184,  1298,
   -1403, -1403, -1403, -1403,  1193, -1403,   880, -1403,  3160,  6847,
     883, -1403,   897,  1300, -1403,   955,  1202, -1403, -1403,    52,
   -1403, -1403, -1403, -1403,    85,   816, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403,    -4,  1078, -1403, -1403,    87,  1135,  3392,
    3392,  1004,   113, -1403, -1403, -1403, -1403, -1403,    63, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403,   411, -1403,  1198,
    1128,   -52,  5436, -1403,   756,   469,  1326,  1307,  1308,   452,
   -1403,  5225,   811,   850, -1403,  1328, -1403,  6260, -1403, -1403,
   -1403, -1403,  1284, -1403,  1078,  1078,    97, -1403, -1403,   -49,
    1338, -1403, -1403, -1403, -1403, -1403, -1403, -1403,   544,  7305,
   -1403,  7333, -1403,   890, -1403, -1403,   890, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403,  1233,  1233, -1403,   890,  3160,
   -1403, -1403,  1114,  7361,   890,   890,   121, -1403, -1403, -1403,
   -1403, -1403,   890, -1403, -1403, -1403,   368, -1403, -1403, -1403,
    7389,   890,   121,   121, -1403,  1127, -1403,   890, -1403,   890,
   -1403,   121,   890, -1403, -1403,   121,   890,   121,   121, -1403,
     121,   890, -1403,   121,   121, -1403,   890, -1403,   890, -1403,
     284,   284,   647, -1403, -1403, -1403, -1403, -1403,  6847,  3160,
    1206,  3160,  6847,  3160,  3160, -1403,  6260,  6260,  1208, -1403,
     994,  1294, -1403, -1403,  1294, -1403, -1403,  1078, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403,   272,  1115,  1078, -1403, -1403,
    1004,  1004,  3392,  3160, -1403, -1403, -1403,   902,  6260,  1121,
    4995, -1403, -1403,  5436,  5436,   104,  1115,  4995, -1403,  1198,
   -1403,  5225,  5225,  5225,  5225, -1403,  1332,    42, -1403,  1151,
    6260, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,  6260,
    3160,  7417, -1403, -1403, -1403,   890,  7445, -1403, -1403, -1403,
   -1403,  6260,  3160,  7473, -1403,  7501, -1403,  1504,   616,   761,
     284, -1403, -1403,  6260, -1403,  1238, -1403, -1403, -1403, -1403,
    6260,  1359, -1403,   904, -1403,   906,   915,  1115,  1169,   919,
   -1403, -1403,   428,   428,  1004, -1403, -1403, -1403, -1403,   452,
   -1403, -1403,  1331, -1403, -1403,  1349, -1403,  1121, -1403, -1403,
   -1403, -1403,  3160, -1403, -1403,  1284,   101, -1403,   890, -1403,
   -1403, -1403,   890, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403,  1357,  1266,  3160, -1403,  3160, -1403,  1277, -1403, -1403,
      44, -1403,  1115, -1403,    87,    87, -1403, -1403,  1198, -1403,
     143, -1403,   802, -1403, -1403,   109,   260,   123,   363, -1403,
    3160, -1403, -1403, -1403,  1194, -1403, -1403, -1403,  1121,  1348,
   -1403, -1403,  1376, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403,   439, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403,   213, -1403, -1403,  1404, -1403,  -454,  -689, -1403,
   -1403, -1403, -1403,   443, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403,   206, -1403, -1403, -1403, -1403, -1403, -1403, -1403,   222,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1135,   -70, -1403, -1403,
   -1403, -1403, -1403, -1138, -1403, -1403, -1403,  1130,  1133,  1136,
    -266,  -257,  -431, -1403,  1132,  1138,  1139, -1403,  1111,  1140,
    1109, -1403,  1027,  1142,  1143,    38,  1107,  -289,  -261,  -438,
    -256,  -233,  -254,  -249,  -288,  -190,  -185,  -148, -1403, -1403,
    -141,  -137, -1403,  -940, -1403, -1403,  -223, -1403,  -128,  -286,
    -899, -1403,   103,   592,  -642,   313,   -21,  -259, -1403, -1403,
   -1403,  1223, -1403,   807, -1403, -1403,  1224, -1403,   800, -1403,
     978,   562,   361, -1403, -1403, -1403, -1403,  1337,   808, -1403,
   -1403, -1403,   393, -1403, -1403,   985,   983, -1403,    98,   359,
    -477,   635,  -450,   630,   614, -1403, -1403, -1403,  1101, -1403,
   -1403, -1403,  -441,  -209, -1403, -1403, -1403,    41,   631, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403,    -8, -1403, -1403, -1403,
    -231, -1403,  -472, -1403, -1402,  -401, -1403, -1403, -1403, -1403,
   -1403,   943, -1403,   203, -1403,    18, -1403,  -560, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403,  1020, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403,   750, -1403,  -607,  -621, -1403,   611,   424,  -613, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,  1070, -1403,
    1073, -1403,  1065,  1030,   636,  -672,  -619, -1403, -1403, -1403,
     590,   594,   373,   786, -1403, -1403, -1403,   396, -1403, -1082,
   -1403,   189,   387,   724,  -659, -1403, -1403, -1403, -1403,    16,
   -1272, -1403,    12,  -465, -1403, -1403, -1403, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403, -1403,   859,
   -1403, -1403, -1403,  -879,  -494,  -347,  -183, -1385, -1281,   355,
   -1403,   169, -1403, -1403, -1403, -1048,    37, -1403, -1403, -1403,
   -1403, -1403, -1403, -1403,     1,    20
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -537
static const yytype_int16 yytable[] =
{
     382,   500,   369,   697,  1146,   685,  1105,  1285,   503,   362,
     852,   622,   504,   494,   505,   726,   627,  1350,  1272,   629,
     820,  1464,   822,   632,   793,   825,   572,   577,   363,   579,
     363,   698,   699,   700,   701,   534,   684,   595,   847,  1139,
     536,   303,   309,   314,   535,   537,   549,   538,  1489,   595,
     618,   550,   539,   552,   573,   376,   623,  1317,   553,   574,
     420,   575,   865,  1388,   485,   851,   576,  1133,   942,   944,
    1503,   481,   442,  1473,   551,   744,   745,   746,   541,   747,
     748,   742,   551,  1563,   559,   899,   900,   618,   749,  1368,
     851,   750,   578,   847,   847,  1442,   754,   755,   756,   757,
     758,   759,   760,   761,  1567,   762,   445,  1294,   478,   479,
     767,   768,   769,     8,   770,   771,   851,   554,   543,   478,
     479,   772,   555,   773,   564,   554,   774,  1466,  1293,   482,
     555,   601,   581,   440,   777,   778,   779,   780,   781,   782,
     783,   784,    15,   785,   321,   851,  1369,   478,   479,   851,
     681,   602,     8,   633,  1633,  1231,   316,   851,   682,   556,
    1112,  1156,    22,    23,    24,   633,   557,   556,  1639,   851,
     558,   851,   373,  1157,   557,  1463,   441,   919,   558,   560,
     392,   653,  1232,  1158,    15,   655,   383,   560,   393,   657,
     658,   659,   681,  1490,   660,    22,    23,    24,  1467,  1294,
     682,  1078,  1342,   914,    22,    23,    24,   384,  1631,   685,
    1393,   685,   486,  1573,  1443,   385,  1337,  1394,   483,   484,
     317,  1634,   499,  1628,   943,   501,    81,   847,  1111,   823,
    1051,   480,    81,  1189,  1474,  1640,   922,   443,   624,  1338,
     684,   421,   684,   716,  1123,  1500,   837,   716,  1346,  1079,
     363,  1113,  1114,   363,   936,  1389,  1127,  1390,   795,  1134,
    1135,   394,  1504,  1505,   634,    81,   495,  1295,  1501,  1142,
    1472,   446,  1613,  1165,    81,  1169,   635,   603,  1608,  1044,
     534,   572,   577,   796,   579,   536,  1111,   915,   386,   535,
     537,  1299,   538,  1201,  1458,  1459,  1460,   539,  1106,  1107,
    1108,  1109,   930,  1234,   848,  1200,   549,  1636,   851,   573,
     919,   550,  1255,   552,   574,  1207,   575,  1202,   553,   647,
    1216,   576,  1218,   541,  1221,  1623,  1222,   374,  1227,  1219,
    1230,   388,  1233,  1300,   551,   949,  1239,   551,  1241,   389,
     303,  1370,  1371,  1372,   559,  1559,   309,   578,  1235,   314,
     683,   648,  1220,  1568,  1569,  1570,  1571,   939,  1236,   848,
     848,   848,   848,   543,   596,   817,   434,   940,   600,   727,
     753,   728,   611,  1637,   435,   827,   828,   554,   620,   589,
     554,    15,   555,  1548,   564,   555,   377,   581,  1112,  1110,
     621,   390,   683,   610,   625,   626,   685,   493,   363,   727,
     753,   728,   859,   685,   363,   685,  1543,   636,   637,   638,
    1642,   851,   363,   362,   645,  1228,   363,   363,   362,   556,
     647,   362,   556,  1254,   718,   362,   557,   684,   729,   557,
     558,   847,   363,   558,   684,  1265,   684,   363,  1229,   560,
     363,  1259,   560,   847,   363,  1140,  1030,   436,   656,  1145,
     391,  1034,  1476,  1309,   363,   396,  1312,  1313,   729,  1260,
     910,   911,   912,  1031,  1487,   449,  1359,   363,  1242,  1243,
    1361,  1343,   711,  1547,   730,   494,  1643,  1084,   397,  1113,
    1114,   800,   731,   732,   733,   734,   735,  1034,  1483,  1208,
    1318,   400,  1317,   848,   719,   720,  1085,  1339,   946,   947,
     851,   401,  1086,   721,   730,   496,   449,  1383,   402,   384,
     610,   497,   731,   732,   733,   734,   735,  1308,  1624,  1400,
    1124,  1209,   803,   736,   737,   764,  1210,  1211,   857,   363,
     948,    15,  1351,   765,   786,  1166,   738,  1360,   506,   681,
     847,  1397,  1362,   787,   858,   847,  1365,   682,  1394,   507,
     847,    22,    23,    24,   847,   403,  1037,  1167,  1168,  1575,
     666,   667,   668,   669,   670,   671,   738,   673,   674,   675,
     676,   677,   678,   679,   680,  1118,   802,  1087,  1088,  1089,
     879,   880,  1090,  1091,   449,   927,   449,  1550,  1604,   449,
    1605,   810,   928,  1406,  1062,  1063,  1064,   727,   753,   728,
     808,   847,  1435,   404,   859,   813,  1564,  1565,   528,    11,
     405,  1284,    12,    13,   542,   950,  1432,   951,   832,   833,
     562,    81,  1465,   685,   952,   953,  1223,   727,   580,   728,
     954,   362,  1279,   851,  1057,   411,  1301,  1302,   929,   736,
     737,  1519,   881,   955,   956,   406,  1058,  1119,   362,  1224,
     363,  1520,  1225,  1226,   684,  1160,   729,  1059,  1150,  1151,
    1585,   866,  1586,  1521,  1522,  1161,  1162,   363,  1600,  1511,
     430,   363,  1498,  1499,   398,   407,   882,  1163,  1164,   908,
    1152,  1153,   399,  1154,  1306,  1307,   729,  1488,   909,   431,
     432,  1516,   449,   905,   883,   884,   408,   848,   885,  1433,
    1434,   290,   730,  1198,  1502,   291,  1199,  1523,   814,   848,
     731,   732,   733,   734,   735,  1525,  1497,   886,   449,  1527,
     409,  -361,  -361,  1625,   847,   410,   363,   363,   363,   363,
     449,   610,   730,   449,   818,   935,   934,   415,   449,   936,
     731,   732,   733,   734,   735,  1386,   819,    15,   412,   831,
     363,   736,   737,   764,   836,   363,  1402,  1403,  1213,   938,
     449,   765,   416,   868,   738,  1411,   370,   371,  -211,  1415,
     864,  1417,  1418,   449,  1420,   449,   904,  1423,  1424,  1246,
    1214,  1215,  1250,  1251,  1252,  1544,   417,   449,  1258,  1035,
     727,  1036,   728,   449,   738,  1551,  -211,   462,   463,   464,
     465,   466,   467,  1048,  -211,  1588,   848,  1589,   468,  1049,
     424,   848,   859,   449,   428,   449,   848,  1506,   363,   429,
     848,   469,  1470,  1471,  1632,  1538,  1539,  1507,  1508,  1077,
    1061,  1267,   931,   847,   847,   449,   449,  1558,   932,  1509,
    1510,  1491,   751,  1541,   590,   763,  1437,  1492,   775,   729,
     752,   444,  1440,   752,   363,  1574,   752,  1557,   776,  1070,
     363,  1304,  1305,   438,   798,   847,   752,   848,  1450,   449,
    1528,  1529,   799,   449,   834,   433,   838,   829,   363,  1576,
    1493,   830,   835,  1104,   839,   447,  1494,   847,  1577,   470,
     471,   472,   473,   474,   475,   730,   847,   869,   870,   871,
    1581,   906,   363,   731,   732,   733,   734,   735,   847,   907,
     906,   448,  1592,  1447,  -361,  -361,  1451,  1607,   913,  1594,
     847,  1448,   362,   449,  1452,  1611,   450,   847,   460,   727,
    1451,   728,   487,   488,  1614,   838,  1132,  1451,  1453,  1597,
     610,   363,   461,  1556,   610,  1596,   764,  1598,  1597,   477,
     476,   489,  1602,   490,   765,   363,  1599,   738,   492,   363,
    1603,   491,   451,   363,   452,   453,   502,   454,   455,  1147,
    1591,   585,   586,  1635,  1638,  1641,  1644,     1,     2,     3,
       4,     5,     6,  1352,  1353,  1354,  1647,   508,   729,   509,
     848,  1098,  1099,  1100,  1101,  1554,   291,  -211,   454,   455,
    -211,  -211,  -211,  -211,   384,  -211,  -211,   388,  -211,  1449,
     392,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
     740,   741,  -211,  -211,  -211,  1458,  1459,  1460,  -211,  -211,
     302,   308,   311,   398,   730,   789,   790,  1531,   478,   479,
     434,  1535,   731,   732,   733,   734,   735,   588,   917,   918,
    -211,  -211,   599,  -211,   923,   924,   925,   926,   736,   737,
    1028,  1029,  -211,   597,   363,  -211,  -211,   606,  1072,  1073,
    1096,  1097,   612,  1170,  1102,  1103,   363,  1148,  1149,   989,
     990,  1237,  1238,  1286,  1287,   764,  1281,  1282,  1310,  1311,
    1314,  1315,   619,   765,  1455,  1456,   738,  1193,  1380,   848,
     848,   704,   705,  1171,  1496,  1172,  1173,  1174,  1175,  1176,
    1177,  1178,   628,   695,   696,   702,   703,   379,   380,   630,
    1179,  1180,  1181,  1182,  1183,  1184,   631,   712,   713,   639,
    1336,   848,   902,   902,   640,  1185,  1186,  1187,  1630,  1626,
    1627,   654,   651,  1363,  1336,   661,   707,  1366,   662,   708,
     706,   709,   714,   848,   724,   725,   742,   792,   363,   794,
     804,   805,   848,   806,   807,   811,   812,   815,   853,   851,
     854,  1378,   363,   363,   848,   856,  1384,  1385,   363,   855,
    1532,  1392,  1534,   363,  1536,  1537,   848,   363,  1401,   875,
     863,   873,   877,   848,  1407,   878,  1409,   897,   916,  1412,
     919,   921,  1032,  1416,  1038,  1039,  1041,  1042,  1421,  1044,
    1043,  1047,   647,  1054,  1555,  1426,  1055,  1056,  1065,  1428,
    1066,  1071,  1076,  1080,  1116,   970,  1081,  1082,   971,   972,
     973,   974,  1120,   975,   363,  1095,   976,    81,  1122,   977,
     978,   979,   980,   981,   982,   983,   984,   985,   362,  1121,
     986,   987,   988,  1125,   362,  1126,  1128,  1129,  1130,  1131,
    1364,  1138,  1143,   971,   972,   973,   974,   363,   975,  1141,
     362,   976,  1192,   363,   977,   978,   979,   980,   981,   982,
     983,   984,   985,  1188,  1206,   986,   987,   988,  1193,   363,
     317,  1245,  1217,   989,   990,  1197,  1204,  1247,  1248,  1261,
    1262,  1263,  1240,  1269,  1268,  1273,  1275,  1280,  1291,  1292,
    1278,  1298,  1297,  1321,  1482,  1340,  1341,  1344,  1345,  1347,
    1348,  1356,  1303,  1336,  1374,   317,  1377,  1404,   989,   990,
    1379,  1438,  1430,  1431,  1621,  1444,  1622,  1439,  1441,  1445,
    1454,  1446,   363,  1457,  1469,  1484,  1478,  1485,  1486,  -535,
    1487,   363,  1514,  1572,  1533,  1517,  1540,   363,  1515,  1367,
    1480,  1645,   971,   972,   973,   974,  1593,   975,  1526,  1595,
     976,  1601,  1609,   977,   978,   979,   980,   981,   982,   983,
     984,   985,  1610,  1619,   986,   987,   988,  1387,  1294,  1648,
     971,   972,   973,   974,  1620,   975,  1646,  -536,   976,  1159,
    1376,   977,   978,   979,   980,   981,   982,   983,   984,   985,
     320,  1398,   986,   987,   988,  1191,  1381,  1566,   567,   565,
    1477,   570,   456,   457,   317,  1075,   530,   989,   990,   531,
    1052,   824,  1274,   532,   544,   821,   663,   427,  1257,   362,
     545,   826,   546,   362,   665,   664,  1283,  1436,   566,   723,
    1530,  1053,   317,   568,   569,   989,   990,   646,   363,   903,
     604,   615,   363,   605,   644,  1083,   363,   363,  1290,   867,
    1050,  1094,  1336,  1277,  1462,  1560,  1561,   945,  1289,  1336,
    1546,  1553,   816,  1336,  1336,  1336,  1336,  1320,  1542,  1578,
    1481,     0,     0,     0,     0,     0,     0,     0,   363,     0,
     363,  1582,     0,   363,   363,     0,     0,   363,     0,     0,
       0,   363,   363,   363,   363,     0,     0,     0,     0,     0,
     363,     0,     0,     0,     0,     0,     0,     0,     0,   363,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   363,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1612,     0,   363,     0,     0,     0,     0,     0,     0,
     363,   322,   323,   324,   325,   326,   327,   328,   329,    33,
      34,    35,    36,    37,    38,    39,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,    52,    53,
      54,    55,    56,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,   342,    70,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,   343,   344,    80,     0,     0,     0,    82,
       0,     0,     0,     0,    85,   345,    87,   346,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   347,   348,
     101,   349,   103,     0,   104,   350,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   351,
     120,   121,   122,   123,   124,   352,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   353,   142,   354,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     355,   169,   170,   356,   172,   173,   174,   175,     0,   176,
     357,   178,   358,   180,   181,   182,   183,   184,   185,   186,
     359,   360,   189,   190,   191,   192,   193,     0,   971,   972,
     973,   974,     0,   975,     0,     0,   976,     0,     0,   977,
     978,   979,   980,   981,   982,   983,   984,   985,     0,     0,
     986,   987,   988,     0,     0,     0,     0,     8,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,    11,     0,     0,    12,    13,     0,    14,     0,
      15,     0,    16,    17,    18,     0,    19,    20,    21,   381,
     317,     0,     0,   989,   990,     0,     0,  1067,     0,  1068,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,     0,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,    78,    79,    80,     0,     0,
      81,    82,    83,    84,     0,     0,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,     0,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,   138,   139,   140,     0,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
       0,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,     8,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,    11,     0,     0,    12,    13,     0,
      14,     0,    15,     0,    16,    17,    18,     0,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,   710,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,    78,    79,    80,
       0,     0,    81,    82,    83,    84,     0,     0,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,     0,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,     8,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,    11,     0,     0,    12,
      13,     0,    14,     0,    15,     0,    16,    17,    18,     0,
      19,    20,    21,   715,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     0,     0,     0,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,    78,
      79,    80,     0,     0,    81,    82,    83,    84,     0,     0,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,     0,   138,   139,   140,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,     0,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,     8,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,    11,     0,
       0,    12,    13,     0,    14,     0,    15,     0,    16,    17,
      18,     0,    19,    20,    21,   722,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,    78,    79,    80,     0,     0,    81,    82,    83,    84,
       0,     0,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,     0,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,     8,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
      11,     0,     0,    12,    13,     0,    14,     0,    15,     0,
      16,    17,    18,     0,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,   801,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,    78,    79,    80,     0,     0,    81,    82,
      83,    84,     0,     0,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,     0,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,     8,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,    11,     0,     0,    12,    13,     0,    14,     0,
      15,     0,    16,    17,    18,     0,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,   809,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,     0,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,    78,    79,    80,     0,     0,
      81,    82,    83,    84,     0,     0,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,     0,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,   138,   139,   140,     0,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
       0,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,     8,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,    11,     0,     0,    12,    13,     0,
      14,     0,    15,     0,    16,    17,    18,     0,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,    78,    79,    80,
       0,     0,    81,    82,    83,    84,     0,     0,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,     0,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,     8,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,    11,     0,     0,    12,
      13,     0,    14,     0,    15,     0,    16,    17,    18,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,   342,    70,     0,     0,     0,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,    78,
      79,    80,     0,     0,    81,    82,    83,    84,     0,     0,
      85,   345,    87,   346,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   347,   348,   101,   349,   103,     0,
     104,   350,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,     0,   138,   139,   140,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   355,   169,   170,   356,
     172,   173,   174,   175,     0,   176,   357,   178,   358,   180,
     181,   182,   183,   184,   185,   186,   359,   360,   189,   190,
     191,   192,   193,     8,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,    11,     0,
       0,    12,    13,     0,    14,     0,    15,     0,    16,    17,
      18,     0,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,    78,    79,    80,     0,     0,    81,    82,    83,    84,
       0,     0,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     510,   133,   134,   135,   136,   137,     0,   138,   511,   140,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,     0,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,     8,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
      11,     0,     0,    12,    13,     0,    14,     0,    15,     0,
      16,    17,    18,     0,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,    78,    79,    80,     0,     0,    81,    82,
      83,    84,     0,     0,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,     0,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   533,   133,   134,   135,   136,   137,     0,   138,
     511,   140,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,     8,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,    11,     0,     0,    12,    13,     0,    14,     0,
      15,     0,    16,    17,    18,     0,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,     0,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,    78,    79,    80,     0,     0,
      81,    82,    83,    84,     0,     0,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,     0,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   547,   133,   134,   135,   136,   137,
       0,   138,   511,   140,     0,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
       0,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,     8,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,    11,     0,     0,    12,    13,     0,
      14,     0,    15,     0,    16,    17,    18,     0,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,    78,    79,    80,
       0,     0,    81,    82,    83,    84,     0,     0,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   571,   133,   134,   135,
     136,   137,     0,   138,   511,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,     0,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,     8,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,    11,     0,     0,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,   342,    70,     0,     0,     0,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,    78,
      79,    80,     0,     0,    81,    82,    83,    84,     0,     0,
      85,   345,    87,   346,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   347,   348,   101,   349,   103,     0,
     104,   350,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   351,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,     0,   138,   139,   140,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   355,   169,   170,   356,
     172,   173,   174,   175,  1253,   176,   357,   178,   358,   180,
     181,   182,   183,   184,   185,   186,   359,   360,   189,   190,
     191,   192,   193,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   840,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     364,   365,    27,    28,   366,    30,    31,   367,   841,    34,
      35,    36,    37,    38,    39,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,   342,    70,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,   343,   344,    80,     0,     0,     0,    82,     0,
       0,     0,     0,    85,   345,    87,   346,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   347,   348,   101,
     349,   103,     0,   104,   350,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   351,   120,
     121,   122,   123,   124,   352,   842,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   368,   142,   843,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   355,
     169,   170,   356,   172,   173,   174,   175,     0,   176,   357,
     178,   358,   180,   181,   182,   183,   184,   185,   186,   359,
     360,   189,   190,   191,   192,   193,     9,     0,     0,     0,
       0,     0,     0,     0,     0,  1322,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1323,     0,     0,     0,     0,
       0,  1324,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1325,   365,    27,    28,   366,    30,    31,   367,    33,    34,
      35,    36,    37,    38,    39,  1326,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,   342,    70,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,   343,   344,    80,     0,     0,     0,    82,    83,
      84,     0,     0,    85,   345,    87,   346,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   347,   348,   101,
     349,   103,     0,   104,   350,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   351,   120,
     121,   122,   123,   124,   352,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   368,   142,   354,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   355,
     169,   170,   356,   172,   173,   174,   175,     0,   176,   357,
     178,   358,   180,   181,  1327,  1328,   184,   185,   186,   359,
     360,   189,   190,   191,   192,   193,     9,     0,     0,     0,
       0,     0,     0,     0,     0,  1322,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1325,   365,    27,    28,   366,    30,    31,   367,    33,    34,
      35,    36,    37,    38,    39,  1326,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,   342,    70,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,   343,   344,    80,     0,     0,     0,    82,    83,
      84,     0,     0,    85,   345,    87,   346,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   347,   348,   101,
     349,   103,     0,   104,   350,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   351,   120,
     121,   122,   123,   124,   352,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   368,   142,   354,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   355,
     169,   170,   356,   172,   173,   174,   175,     9,   176,   357,
     178,   358,   180,   181,   182,   183,   184,   185,   186,   359,
     360,   189,   190,   191,   192,   193,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   364,   365,    27,    28,   366,    30,    31,   367,    33,
      34,    35,    36,    37,    38,    39,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,    52,    53,
      54,    55,    56,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,   342,    70,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,   343,   344,    80,     0,     0,     0,    82,
      83,    84,     0,     0,    85,   345,    87,   346,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   347,   348,
     101,   349,   103,     0,   104,   350,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   351,
     120,   121,   122,   123,   124,   352,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   368,   142,   354,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     355,   169,   170,   356,   172,   173,   174,   175,   591,   176,
     357,   178,   358,   180,   181,   182,   183,   184,   185,   186,
     359,   360,   189,   190,   191,   192,   193,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   592,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   322,   323,   324,   325,   326,   327,   328,   329,
      33,    34,    35,    36,    37,    38,    39,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,    52,
      53,    54,    55,    56,     0,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,   342,    70,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,   343,   344,    80,     0,     0,     0,
      82,     0,     0,     0,     0,    85,   345,    87,   346,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   347,
     348,   101,   349,   103,     0,   104,   350,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     351,   120,   121,   122,   123,   124,   352,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,     0,
     138,   139,   140,     0,   353,   142,   354,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   355,   169,   170,   356,   172,   173,   174,   175,   641,
     176,   357,   178,   358,   180,   181,   182,   183,   184,   185,
     186,   359,   360,   189,   190,   191,   192,   193,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   642,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   322,   323,   324,   325,   326,   327,   328,
     329,    33,    34,    35,    36,    37,    38,    39,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
      52,    53,    54,    55,    56,     0,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,   342,    70,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,   343,   344,    80,     0,     0,
       0,    82,     0,     0,     0,     0,    85,   345,    87,   346,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     347,   348,   101,   349,   103,     0,   104,   350,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   351,   120,   121,   122,   123,   124,   352,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,   138,   139,   140,     0,   353,   142,   354,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   355,   169,   170,   356,   172,   173,   174,   175,
       0,   176,   357,   178,   358,   180,   181,   182,   183,   184,
     185,   186,   359,   360,   189,   190,   191,   192,   193,   840,
    1264,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   364,   365,    27,    28,   366,    30,
      31,   367,   841,    34,    35,    36,    37,    38,    39,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,    52,    53,    54,    55,    56,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,   342,
      70,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,   343,   344,    80,     0,
       0,     0,    82,     0,     0,     0,     0,    85,   345,    87,
     346,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   347,   348,   101,   349,   103,     0,   104,   350,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   351,   120,   121,   122,   123,   124,   352,   842,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,   138,   139,   140,     0,   368,   142,   843,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   355,   169,   170,   356,   172,   173,   174,
     175,     0,   176,   357,   178,   358,   180,   181,   182,   183,
     184,   185,   186,   359,   360,   189,   190,   191,   192,   193,
     840,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   364,   365,    27,    28,   366,
      30,    31,   367,   841,    34,    35,    36,    37,    38,    39,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     342,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,   343,   344,    80,
       0,     0,     0,    82,     0,     0,     0,     0,    85,   345,
      87,   346,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   347,   348,   101,   349,   103,     0,   104,   350,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   351,   120,   121,   122,   123,   124,   352,
     842,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   368,   142,   843,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   355,   169,   170,   356,   172,   173,
     174,   175,     0,   176,   357,   178,   358,   180,   181,   182,
     183,   184,   185,   186,   359,   360,   189,   190,   191,   192,
     193,   840,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   364,   365,    27,    28,
     366,    30,    31,   367,    33,    34,    35,    36,    37,    38,
      39,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,    52,    53,    54,    55,    56,     0,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,   342,    70,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,   343,   344,
      80,     0,     0,     0,    82,     0,     0,     0,     0,    85,
     345,    87,   346,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   347,   348,   101,   349,   103,     0,   104,
     350,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   351,   120,   121,   122,   123,   124,
     352,   842,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,     0,   138,   139,   140,     0,   368,   142,
     843,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   355,   169,   170,   356,   172,
     173,   174,   175,     0,   176,   357,   178,   358,   180,   181,
     182,   183,   184,   185,   186,   359,   360,   189,   190,   191,
     192,   193,   607,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   322,   323,   324,   325,
     326,   327,   328,   329,    33,    34,    35,    36,    37,    38,
      39,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,    52,    53,    54,    55,    56,     0,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,   342,    70,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,   343,   344,
      80,     0,     0,   608,    82,     0,     0,     0,     0,    85,
     345,    87,   346,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   347,   348,   101,   349,   103,     0,   104,
     350,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   351,   120,   121,   122,   123,   124,
     352,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,     0,   138,   139,   140,     0,   353,   142,
     354,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   355,   169,   170,   356,   172,
     173,   174,   175,     0,   176,   357,   178,   358,   180,   181,
     182,   183,   184,   185,   186,   359,   360,   189,   190,   191,
     192,   193,   322,   323,   324,   325,   326,   327,   328,   329,
      33,    34,    35,    36,    37,    38,    39,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,    52,
      53,    54,    55,    56,     0,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,   342,    70,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,   343,   344,    80,     0,     0,     0,
      82,     0,     0,     0,     0,    85,   345,    87,   346,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   347,
     348,   101,   349,   103,     0,   104,   350,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     351,   120,   121,   122,   123,   124,   352,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,     0,
     138,   139,   140,     0,   353,   142,   354,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   355,   169,   170,   356,   172,   173,   174,   175,     0,
     176,   357,   178,   358,   180,   181,   182,   183,   184,   185,
     186,   359,   360,   189,   190,   191,   192,   193,    34,    35,
      36,    37,    38,    39,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,   342,    70,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,   343,   344,    80,     0,     0,     0,    82,     0,     0,
       0,     0,    85,   345,    87,   346,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   347,   348,   101,     0,
     103,     0,   104,     0,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   351,   120,   121,
     122,   123,   124,   352,     0,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
       0,     0,   142,     0,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   355,   169,
     170,   356,   172,   173,   174,   175,     0,   176,   357,   178,
     358,   180,   181,   182,   183,   184,   185,   186,   359,   360,
     189,   190,   191,   192,   193,     0,  1399,     0,     0,   971,
     972,   973,   974,     0,   975,     0,     0,   976,     0,     0,
     977,   978,   979,   980,   981,   982,   983,   984,   985,     0,
       0,   986,   987,   988,  1408,     0,     0,   971,   972,   973,
     974,     0,   975,     0,     0,   976,     0,     0,   977,   978,
     979,   980,   981,   982,   983,   984,   985,     0,     0,   986,
     987,   988,  1410,     0,     0,   971,   972,   973,   974,     0,
     975,   317,     0,   976,   989,   990,   977,   978,   979,   980,
     981,   982,   983,   984,   985,     0,     0,   986,   987,   988,
    1413,     0,     0,   971,   972,   973,   974,     0,   975,   317,
       0,   976,   989,   990,   977,   978,   979,   980,   981,   982,
     983,   984,   985,     0,     0,   986,   987,   988,  1414,     0,
       0,   971,   972,   973,   974,     0,   975,   317,     0,   976,
     989,   990,   977,   978,   979,   980,   981,   982,   983,   984,
     985,     0,     0,   986,   987,   988,  1419,     0,     0,   971,
     972,   973,   974,     0,   975,   317,     0,   976,   989,   990,
     977,   978,   979,   980,   981,   982,   983,   984,   985,     0,
       0,   986,   987,   988,  1422,     0,     0,   971,   972,   973,
     974,     0,   975,   317,     0,   976,   989,   990,   977,   978,
     979,   980,   981,   982,   983,   984,   985,     0,     0,   986,
     987,   988,  1425,     0,     0,   971,   972,   973,   974,     0,
     975,   317,     0,   976,   989,   990,   977,   978,   979,   980,
     981,   982,   983,   984,   985,     0,     0,   986,   987,   988,
    1427,     0,     0,   971,   972,   973,   974,     0,   975,   317,
       0,   976,   989,   990,   977,   978,   979,   980,   981,   982,
     983,   984,   985,     0,     0,   986,   987,   988,  1429,     0,
       0,   971,   972,   973,   974,     0,   975,   317,     0,   976,
     989,   990,   977,   978,   979,   980,   981,   982,   983,   984,
     985,     0,     0,   986,   987,   988,  1512,     0,     0,   971,
     972,   973,   974,     0,   975,   317,     0,   976,   989,   990,
     977,   978,   979,   980,   981,   982,   983,   984,   985,     0,
       0,   986,   987,   988,  1513,     0,     0,   971,   972,   973,
     974,     0,   975,   317,     0,   976,   989,   990,   977,   978,
     979,   980,   981,   982,   983,   984,   985,     0,     0,   986,
     987,   988,  1518,     0,     0,   971,   972,   973,   974,     0,
     975,   317,     0,   976,   989,   990,   977,   978,   979,   980,
     981,   982,   983,   984,   985,     0,     0,   986,   987,   988,
    1524,     0,     0,   971,   972,   973,   974,     0,   975,   317,
       0,   976,   989,   990,   977,   978,   979,   980,   981,   982,
     983,   984,   985,     0,     0,   986,   987,   988,  1579,     0,
       0,   971,   972,   973,   974,     0,   975,   317,     0,   976,
     989,   990,   977,   978,   979,   980,   981,   982,   983,   984,
     985,     0,     0,   986,   987,   988,  1580,     0,     0,   971,
     972,   973,   974,     0,   975,   317,     0,   976,   989,   990,
     977,   978,   979,   980,   981,   982,   983,   984,   985,     0,
       0,   986,   987,   988,  1583,     0,     0,   971,   972,   973,
     974,     0,   975,   317,     0,   976,   989,   990,   977,   978,
     979,   980,   981,   982,   983,   984,   985,     0,     0,   986,
     987,   988,  1584,     0,     0,   971,   972,   973,   974,     0,
     975,   317,     0,   976,   989,   990,   977,   978,   979,   980,
     981,   982,   983,   984,   985,     0,     0,   986,   987,   988,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   317,
       0,     0,   989,   990,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   317,     0,     0,
     989,   990
};

static const yytype_int16 yycheck[] =
{
      21,   232,    10,   480,   944,   477,   885,  1089,   239,     8,
     652,   412,   271,   222,   273,   509,   417,  1152,  1066,   420,
     627,  1293,   629,   424,   584,   632,   315,   315,     8,   315,
      10,   481,   482,   483,   484,   301,   477,   384,   651,   938,
     301,     3,     4,     5,   301,   301,   307,   301,  1329,   396,
     397,   307,   301,   307,   315,    14,    33,    40,   307,   315,
       9,   315,   681,   119,    12,    48,   315,   119,   740,   741,
     119,    11,    58,    10,   307,   513,   514,   515,   301,   517,
     518,    50,   315,  1485,   307,   706,   707,   434,   526,    62,
      48,   529,   315,   706,   707,     9,   534,   535,   536,   537,
     538,   539,   540,   541,  1489,   543,    58,   111,    34,    35,
     548,   549,   550,     9,   552,   553,    48,   307,   301,    34,
      35,   559,   307,   561,   307,   315,   564,    40,    40,    69,
     315,    41,   315,    58,   572,   573,   574,   575,   576,   577,
     578,   579,    32,   581,     0,    48,   119,    34,    35,    48,
      40,    61,     9,    33,    45,   273,   242,    48,    48,   307,
     116,   273,    52,    53,    54,    33,   307,   315,    45,    48,
     307,    48,   126,   285,   315,   179,   101,   122,   315,   307,
      40,   440,   300,   295,    32,   444,    19,   315,    48,   448,
     449,   450,    40,  1331,   453,    52,    53,    54,   111,   111,
      48,    49,  1142,   172,    52,    53,    54,    40,  1610,   681,
     241,   683,   160,   171,   128,    48,   148,   248,   158,   159,
     306,   112,   230,  1608,   169,   233,   122,   840,   887,   630,
     837,   157,   122,   112,   171,   112,   730,   223,   215,   171,
     681,   190,   683,   502,   916,   148,   647,   506,  1147,   868,
     230,   207,   208,   233,   237,   311,   928,   313,   102,   311,
     312,   121,   311,   312,   144,   122,   225,   179,   171,   941,
     157,   223,   171,   962,   122,   964,   144,   187,  1559,   146,
     546,   570,   570,   127,   570,   546,   945,   725,   121,   546,
     546,    98,   546,   272,   209,   210,   211,   546,    88,    89,
      90,    91,   733,   241,   651,   994,   567,    47,    48,   570,
     122,   567,   179,   567,   570,  1004,   570,   296,   567,     9,
    1009,   570,  1011,   546,  1013,  1597,  1015,   104,  1017,   273,
    1019,    40,  1021,   140,   567,   766,  1025,   570,  1027,    48,
     302,   314,   315,   316,   567,  1480,   308,   570,   286,   311,
     240,    41,   296,  1491,  1492,  1493,  1494,   169,   296,   706,
     707,   708,   709,   546,   385,   624,    40,   179,   389,    64,
      65,    66,   393,   113,    48,   634,   635,   567,   399,   378,
     570,    32,   567,  1465,   567,   570,   102,   570,   116,   179,
     411,    40,   240,   392,   415,   416,   868,    48,   378,    64,
      65,    66,   661,   875,   384,   877,  1454,   428,   429,   430,
      47,    48,   392,   412,   435,   273,   396,   397,   417,   567,
       9,   420,   570,  1044,   148,   424,   567,   868,   123,   570,
     567,  1044,   412,   570,   875,  1056,   877,   417,   296,   567,
     420,    23,   570,  1056,   424,   939,    25,   121,   447,   943,
      40,   798,    41,  1125,   434,    40,  1128,  1129,   123,    41,
     719,   720,   721,    42,    12,    33,  1155,   447,  1028,  1029,
    1159,  1143,   493,   201,   169,   684,   113,    92,    40,   207,
     208,    49,   177,   178,   179,   180,   181,   834,    19,   264,
    1132,    19,    40,   840,   218,   219,   111,  1139,    67,    68,
      48,    19,   117,   227,   169,    30,    33,  1196,    19,    40,
     509,    36,   177,   178,   179,   180,   181,  1124,  1600,  1208,
     921,   296,    49,   188,   189,   220,   301,   302,   221,   509,
      99,    32,  1153,   228,   271,   273,   231,  1158,    40,    40,
    1153,   241,  1163,   280,   237,  1158,  1167,    48,   248,    51,
    1163,    52,    53,    54,  1167,    19,   815,   295,   296,  1499,
     462,   463,   464,   465,   466,   467,   231,   469,   470,   471,
     472,   473,   474,   475,   476,    22,   597,   192,   193,   194,
      85,    86,   197,   198,    33,   134,    33,  1466,   160,    33,
     162,   612,   141,  1214,   853,   854,   855,    64,    65,    66,
      49,  1214,  1244,    19,   863,    49,  1485,  1486,   295,    24,
      19,  1088,    27,    28,   301,   241,    31,   243,   639,   640,
     307,   122,  1294,  1095,   250,   251,   273,    64,   315,    66,
     256,   630,  1082,    48,    11,    48,  1113,  1114,   187,   188,
     189,   273,   147,   269,   270,    19,    23,   906,   647,   296,
     630,   283,   299,   300,  1095,   273,   123,    34,   272,   273,
      44,   682,    46,   295,   296,   283,   284,   647,  1547,  1358,
      48,   651,  1344,  1345,    40,    19,   181,   295,   296,   216,
     294,   295,    48,   297,  1122,  1123,   123,  1329,   225,    67,
      68,  1380,    33,   714,   199,   200,    19,  1044,   203,   114,
     115,   182,   169,   296,  1346,   186,   299,  1396,    49,  1056,
     177,   178,   179,   180,   181,  1404,  1337,   222,    33,  1408,
      19,   188,   189,  1602,  1337,    19,   706,   707,   708,   709,
      33,   730,   169,    33,    49,   233,   735,    48,    33,   237,
     177,   178,   179,   180,   181,  1199,    49,    32,     9,    49,
     730,   188,   189,   220,    49,   735,  1210,  1211,   273,   739,
      33,   228,    48,    48,   231,  1219,   119,   120,    12,  1223,
     672,  1225,  1226,    33,  1228,    33,    49,  1231,  1232,  1038,
     295,   296,  1041,  1042,  1043,  1457,     9,    33,  1047,    49,
      64,    49,    66,    33,   231,  1467,    40,    13,    14,    15,
      16,    17,    18,    49,    48,    44,  1153,    46,    24,    49,
       9,  1158,  1071,    33,    40,    33,  1163,   273,   798,    40,
    1167,    37,  1299,  1300,    22,  1446,  1447,   283,   284,    49,
     851,    49,   167,  1446,  1447,    33,    33,  1479,   173,   295,
     296,    30,   176,  1450,    41,   176,  1247,    36,   176,   123,
     184,    58,  1253,   184,   834,  1497,   184,  1478,   176,   858,
     840,  1120,  1121,    40,    33,  1478,   184,  1214,  1269,    33,
    1430,  1431,    41,    33,    33,    19,    33,    41,   858,  1500,
      30,    41,    41,   882,    41,   231,    36,  1500,  1509,   105,
     106,   107,   108,   109,   110,   169,  1509,   204,   205,   206,
    1521,    33,   882,   177,   178,   179,   180,   181,  1521,    41,
      33,   236,  1533,    33,   188,   189,    33,  1559,    41,  1540,
    1533,    41,   921,    33,    41,  1567,   128,  1540,   152,    64,
      33,    66,   161,   162,  1576,    33,   935,    33,    41,    33,
     939,   921,   153,    41,   943,    41,   220,    41,    33,   191,
     166,   154,    33,   165,   228,   935,    41,   231,   164,   939,
      41,   156,   129,   943,   131,   132,    40,   134,   135,   949,
    1530,   102,   103,  1615,  1616,  1617,  1618,     3,     4,     5,
       6,     7,     8,    52,    53,    54,  1628,   183,   123,   169,
    1337,    88,    89,    90,    91,  1472,   186,   241,   134,   135,
     244,   245,   246,   247,    40,   249,   250,    40,   252,  1268,
      40,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     185,   186,   266,   267,   268,   209,   210,   211,   272,   273,
       3,     4,     5,    40,   169,   307,   308,  1438,    34,    35,
      40,  1442,   177,   178,   179,   180,   181,    29,   167,   168,
     294,   295,    41,   297,   167,   168,   117,   118,   188,   189,
     119,   120,   306,    48,  1044,   309,   310,    41,   136,   137,
      83,    84,    48,   241,    83,    84,  1056,   281,   282,   309,
     310,   286,   287,   212,   213,   220,    96,    97,   139,   140,
     174,   175,    41,   228,   139,   140,   231,   253,   254,  1446,
    1447,   487,   488,   271,  1335,   273,   274,   275,   276,   277,
     278,   279,    33,   478,   479,   485,   486,    16,    17,     9,
     288,   289,   290,   291,   292,   293,    33,   496,   497,    48,
    1138,  1478,   708,   709,    48,   303,   304,   305,  1610,  1604,
    1605,   155,   148,  1164,  1152,   133,   148,  1168,   134,   148,
     155,   148,    21,  1500,    52,   122,    50,   102,  1138,   103,
      41,    41,  1509,    41,    41,    41,    41,    10,   221,    48,
      58,  1192,  1152,  1153,  1521,   221,  1197,  1198,  1158,   148,
    1439,  1202,  1441,  1163,  1443,  1444,  1533,  1167,  1209,   238,
     133,    87,   239,  1540,  1215,    82,  1217,   195,    37,  1220,
     122,     9,   127,  1224,   128,   111,    10,    10,  1229,   146,
     130,   150,     9,    40,  1473,  1236,    40,    40,    40,  1240,
      40,    33,    41,    94,    23,   241,   209,    93,   244,   245,
     246,   247,   227,   249,  1214,   130,   252,   122,   122,   255,
     256,   257,   258,   259,   260,   261,   262,   263,  1247,   227,
     266,   267,   268,    37,  1253,   138,   169,   169,    33,   122,
     241,   232,   111,   244,   245,   246,   247,  1247,   249,   187,
    1269,   252,   296,  1253,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   241,   241,   266,   267,   268,   253,  1269,
     306,    41,   296,   309,   310,   298,   273,     9,   190,    41,
      41,    41,   296,     9,   221,   221,   138,    93,   209,   122,
      49,    90,   209,    33,  1322,    37,   169,    33,    37,   282,
     281,   250,   196,  1331,   119,   306,   241,   265,   309,   310,
     298,     9,    43,    43,  1593,   151,  1595,   130,   128,    41,
      40,   148,  1322,   141,   209,    19,   148,    40,    40,    21,
      12,  1331,   119,    21,   148,   241,   148,  1337,  1379,   241,
     232,  1620,   244,   245,   246,   247,   128,   249,   241,    10,
     252,   202,    41,   255,   256,   257,   258,   259,   260,   261,
     262,   263,    33,    26,   266,   267,   268,   241,   111,    41,
     244,   245,   246,   247,   128,   249,   202,    21,   252,   960,
    1187,   255,   256,   257,   258,   259,   260,   261,   262,   263,
       6,  1205,   266,   267,   268,   972,  1194,  1487,   309,   308,
    1317,   314,   199,   199,   306,   863,   296,   309,   310,   296,
     838,   631,  1071,   297,   302,   628,   458,   100,  1045,  1438,
     302,   633,   303,  1442,   461,   460,  1087,  1244,   308,   506,
    1432,   840,   306,   311,   311,   309,   310,   437,  1438,   709,
     390,   396,  1442,   390,   434,   875,  1446,  1447,  1095,   683,
     834,   877,  1480,  1077,  1285,  1483,  1484,   753,  1091,  1487,
    1464,  1469,   623,  1491,  1492,  1493,  1494,  1132,  1451,  1510,
    1321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1478,    -1,
    1480,  1522,    -1,  1483,  1484,    -1,    -1,  1487,    -1,    -1,
      -1,  1491,  1492,  1493,  1494,    -1,    -1,    -1,    -1,    -1,
    1500,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1509,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1521,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1572,    -1,  1533,    -1,    -1,    -1,    -1,    -1,    -1,
    1540,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,   105,   106,   107,   108,   109,   110,   111,    -1,    -1,
      -1,    -1,    -1,   117,   118,   119,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,   183,
     184,   185,    -1,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,    -1,   244,   245,
     246,   247,    -1,   249,    -1,    -1,   252,    -1,    -1,   255,
     256,   257,   258,   259,   260,   261,   262,   263,    -1,    -1,
     266,   267,   268,    -1,    -1,    -1,    -1,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    24,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    -1,    34,    35,    36,    -1,    38,    39,    40,    41,
     306,    -1,    -1,   309,   310,    -1,    -1,   311,    -1,   313,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,    -1,    -1,   105,   106,   107,   108,   109,   110,   111,
      -1,    -1,    -1,    -1,    -1,   117,   118,   119,    -1,    -1,
     122,   123,   124,   125,    -1,    -1,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,   183,   184,   185,    -1,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    -1,    34,    35,    36,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,    -1,    -1,   105,   106,   107,   108,   109,
     110,   111,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,
      -1,    -1,   122,   123,   124,   125,    -1,    -1,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,   183,   184,   185,    -1,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    -1,    34,    35,    36,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,    -1,   105,   106,   107,
     108,   109,   110,   111,    -1,    -1,    -1,    -1,    -1,   117,
     118,   119,    -1,    -1,   122,   123,   124,   125,    -1,    -1,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,   183,   184,   185,    -1,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    -1,    34,    35,
      36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,    -1,    -1,   105,
     106,   107,   108,   109,   110,   111,    -1,    -1,    -1,    -1,
      -1,   117,   118,   119,    -1,    -1,   122,   123,   124,   125,
      -1,    -1,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
      -1,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,   105,   106,   107,   108,   109,   110,   111,    -1,    -1,
      -1,    -1,    -1,   117,   118,   119,    -1,    -1,   122,   123,
     124,   125,    -1,    -1,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,   183,
     184,   185,    -1,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    24,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    -1,    34,    35,    36,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,    -1,    -1,   105,   106,   107,   108,   109,   110,   111,
      -1,    -1,    -1,    -1,    -1,   117,   118,   119,    -1,    -1,
     122,   123,   124,   125,    -1,    -1,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,   183,   184,   185,    -1,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    -1,    34,    35,    36,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,    -1,    -1,   105,   106,   107,   108,   109,
     110,   111,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,
      -1,    -1,   122,   123,   124,   125,    -1,    -1,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,   183,   184,   185,    -1,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    -1,    34,    35,    36,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,    -1,   105,   106,   107,
     108,   109,   110,   111,    -1,    -1,    -1,    -1,    -1,   117,
     118,   119,    -1,    -1,   122,   123,   124,   125,    -1,    -1,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,   183,   184,   185,    -1,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    -1,    34,    35,
      36,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,    -1,    -1,   105,
     106,   107,   108,   109,   110,   111,    -1,    -1,    -1,    -1,
      -1,   117,   118,   119,    -1,    -1,   122,   123,   124,   125,
      -1,    -1,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
      -1,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,   105,   106,   107,   108,   109,   110,   111,    -1,    -1,
      -1,    -1,    -1,   117,   118,   119,    -1,    -1,   122,   123,
     124,   125,    -1,    -1,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,   183,
     184,   185,    -1,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    24,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    -1,    34,    35,    36,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,    -1,    -1,   105,   106,   107,   108,   109,   110,   111,
      -1,    -1,    -1,    -1,    -1,   117,   118,   119,    -1,    -1,
     122,   123,   124,   125,    -1,    -1,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,   183,   184,   185,    -1,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    -1,    34,    35,    36,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,    -1,    -1,   105,   106,   107,   108,   109,
     110,   111,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,
      -1,    -1,   122,   123,   124,   125,    -1,    -1,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,   183,   184,   185,    -1,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,    -1,   105,   106,   107,
     108,   109,   110,   111,    -1,    -1,    -1,    -1,    -1,   117,
     118,   119,    -1,    -1,   122,   123,   124,   125,    -1,    -1,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,   183,   184,   185,    -1,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,     9,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    -1,    -1,    -1,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
      -1,    -1,   117,   118,   119,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,    -1,   183,   184,
     185,    -1,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    -1,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    -1,    -1,    -1,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
      -1,    -1,   117,   118,   119,    -1,    -1,    -1,   123,   124,
     125,    -1,    -1,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,    -1,   183,   184,
     185,    -1,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    -1,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    -1,    -1,    -1,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
      -1,    -1,   117,   118,   119,    -1,    -1,    -1,   123,   124,
     125,    -1,    -1,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,    -1,   183,   184,
     185,    -1,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    11,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,   105,   106,   107,   108,   109,   110,   111,    -1,    -1,
      -1,    -1,    -1,   117,   118,   119,    -1,    -1,    -1,   123,
     124,   125,    -1,    -1,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,   183,
     184,   185,    -1,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    11,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      -1,    -1,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,    -1,    -1,   117,   118,   119,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,    -1,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,    -1,
     183,   184,   185,    -1,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,    11,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,    -1,    -1,   105,   106,   107,   108,   109,   110,   111,
      -1,    -1,    -1,    -1,    -1,   117,   118,   119,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,   183,   184,   185,    -1,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,    -1,    -1,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,    -1,   183,   184,   185,    -1,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,    -1,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,    -1,    -1,   105,   106,   107,   108,   109,
     110,   111,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,   183,   184,   185,    -1,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,    -1,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,    -1,    -1,   117,   118,
     119,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    -1,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,    -1,   183,   184,   185,    -1,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,    -1,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,    -1,    -1,   117,   118,
     119,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    -1,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,    -1,   183,   184,   185,    -1,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      -1,    -1,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,    -1,    -1,   117,   118,   119,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,    -1,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,    -1,
     183,   184,   185,    -1,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,    -1,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,    -1,    -1,   105,
     106,   107,   108,   109,   110,   111,    -1,    -1,    -1,    -1,
      -1,   117,   118,   119,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,    -1,
     146,    -1,   148,    -1,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,    -1,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
      -1,    -1,   188,    -1,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,    -1,   241,    -1,    -1,   244,
     245,   246,   247,    -1,   249,    -1,    -1,   252,    -1,    -1,
     255,   256,   257,   258,   259,   260,   261,   262,   263,    -1,
      -1,   266,   267,   268,   241,    -1,    -1,   244,   245,   246,
     247,    -1,   249,    -1,    -1,   252,    -1,    -1,   255,   256,
     257,   258,   259,   260,   261,   262,   263,    -1,    -1,   266,
     267,   268,   241,    -1,    -1,   244,   245,   246,   247,    -1,
     249,   306,    -1,   252,   309,   310,   255,   256,   257,   258,
     259,   260,   261,   262,   263,    -1,    -1,   266,   267,   268,
     241,    -1,    -1,   244,   245,   246,   247,    -1,   249,   306,
      -1,   252,   309,   310,   255,   256,   257,   258,   259,   260,
     261,   262,   263,    -1,    -1,   266,   267,   268,   241,    -1,
      -1,   244,   245,   246,   247,    -1,   249,   306,    -1,   252,
     309,   310,   255,   256,   257,   258,   259,   260,   261,   262,
     263,    -1,    -1,   266,   267,   268,   241,    -1,    -1,   244,
     245,   246,   247,    -1,   249,   306,    -1,   252,   309,   310,
     255,   256,   257,   258,   259,   260,   261,   262,   263,    -1,
      -1,   266,   267,   268,   241,    -1,    -1,   244,   245,   246,
     247,    -1,   249,   306,    -1,   252,   309,   310,   255,   256,
     257,   258,   259,   260,   261,   262,   263,    -1,    -1,   266,
     267,   268,   241,    -1,    -1,   244,   245,   246,   247,    -1,
     249,   306,    -1,   252,   309,   310,   255,   256,   257,   258,
     259,   260,   261,   262,   263,    -1,    -1,   266,   267,   268,
     241,    -1,    -1,   244,   245,   246,   247,    -1,   249,   306,
      -1,   252,   309,   310,   255,   256,   257,   258,   259,   260,
     261,   262,   263,    -1,    -1,   266,   267,   268,   241,    -1,
      -1,   244,   245,   246,   247,    -1,   249,   306,    -1,   252,
     309,   310,   255,   256,   257,   258,   259,   260,   261,   262,
     263,    -1,    -1,   266,   267,   268,   241,    -1,    -1,   244,
     245,   246,   247,    -1,   249,   306,    -1,   252,   309,   310,
     255,   256,   257,   258,   259,   260,   261,   262,   263,    -1,
      -1,   266,   267,   268,   241,    -1,    -1,   244,   245,   246,
     247,    -1,   249,   306,    -1,   252,   309,   310,   255,   256,
     257,   258,   259,   260,   261,   262,   263,    -1,    -1,   266,
     267,   268,   241,    -1,    -1,   244,   245,   246,   247,    -1,
     249,   306,    -1,   252,   309,   310,   255,   256,   257,   258,
     259,   260,   261,   262,   263,    -1,    -1,   266,   267,   268,
     241,    -1,    -1,   244,   245,   246,   247,    -1,   249,   306,
      -1,   252,   309,   310,   255,   256,   257,   258,   259,   260,
     261,   262,   263,    -1,    -1,   266,   267,   268,   241,    -1,
      -1,   244,   245,   246,   247,    -1,   249,   306,    -1,   252,
     309,   310,   255,   256,   257,   258,   259,   260,   261,   262,
     263,    -1,    -1,   266,   267,   268,   241,    -1,    -1,   244,
     245,   246,   247,    -1,   249,   306,    -1,   252,   309,   310,
     255,   256,   257,   258,   259,   260,   261,   262,   263,    -1,
      -1,   266,   267,   268,   241,    -1,    -1,   244,   245,   246,
     247,    -1,   249,   306,    -1,   252,   309,   310,   255,   256,
     257,   258,   259,   260,   261,   262,   263,    -1,    -1,   266,
     267,   268,   241,    -1,    -1,   244,   245,   246,   247,    -1,
     249,   306,    -1,   252,   309,   310,   255,   256,   257,   258,
     259,   260,   261,   262,   263,    -1,    -1,   266,   267,   268,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   306,
      -1,    -1,   309,   310,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,
     309,   310
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,   318,     9,    11,
      20,    24,    27,    28,    30,    32,    34,    35,    36,    38,
      39,    40,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   105,   106,   107,   108,   109,   110,   111,   117,   118,
     119,   122,   123,   124,   125,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   183,   184,
     185,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   452,   453,   454,   455,   456,   457,
     458,   463,   473,   476,   480,   481,   482,   483,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   518,
     519,   520,   521,   523,   524,   525,   526,   527,   529,   530,
     531,   542,   544,   546,   547,   548,   551,   553,   554,   555,
     565,   566,   567,   568,   569,   570,   571,   573,   575,   577,
     618,   619,   620,   621,   622,   623,   624,   627,   628,   629,
     630,   632,   639,   640,   644,   645,   646,   647,   651,   652,
     182,   186,   403,   404,   405,   406,   419,   422,   410,   411,
     412,   413,   419,   422,   414,   415,   416,   417,   419,   422,
     418,   419,   420,   421,   422,   423,   242,   306,   319,   320,
     342,     0,    55,    56,    57,    58,    59,    60,    61,    62,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,   100,   117,   118,   129,   131,   142,   143,   145,
     149,   163,   169,   187,   189,   214,   217,   224,   226,   234,
     235,   522,   651,   652,    55,    56,    59,    62,   187,   513,
     119,   120,   532,   126,   104,   543,   504,   102,   534,   495,
     495,    41,   453,    19,    40,    48,   121,   552,    40,    48,
      40,    40,    40,    48,   121,   556,    40,    40,    40,    48,
      19,    19,    19,    19,    19,    19,    19,    19,    19,    19,
      19,    48,     9,   625,   626,    48,    48,     9,   459,   460,
       9,   190,   464,   465,     9,   474,   475,   474,    40,    40,
      48,    67,    68,    19,    40,    48,   121,   549,    40,   447,
      58,   101,    58,   223,    58,    58,   223,   231,   236,    33,
     128,   129,   131,   132,   134,   135,   458,   463,   466,   467,
     152,   153,    13,    14,    15,    16,    17,    18,    24,    37,
     105,   106,   107,   108,   109,   110,   166,   191,    34,    35,
     157,    11,    69,   158,   159,    12,   160,   161,   162,   154,
     165,   156,   164,    48,   500,   504,    30,    36,   517,   513,
     517,   513,    40,   517,   454,   454,    40,    51,   183,   169,
     176,   184,   407,   408,   425,   427,   428,   429,   430,   432,
     433,   434,   437,   438,   439,   442,   443,   445,   452,   633,
     404,   405,   406,   176,   407,   408,   425,   427,   429,   430,
     431,   443,   452,   633,   411,   412,   413,   176,   424,   425,
     427,   428,   429,   430,   432,   433,   434,   437,   438,   443,
     445,   446,   452,   617,   633,   415,   416,   417,   420,   421,
     423,   176,   424,   425,   427,   429,   430,   431,   443,   446,
     452,   633,   321,   343,   533,   102,   103,   545,    29,   651,
      41,    11,    41,   572,   579,   632,   453,    48,   550,    41,
     453,    41,    61,   187,   575,   577,    41,    41,   122,   631,
     651,   453,    48,   557,   574,   579,   578,   580,   632,    41,
     453,   453,   522,    33,   215,   453,   453,   522,    33,   522,
       9,    33,   522,    33,   144,   144,   453,   453,   453,    48,
      48,    11,    41,   576,   580,   453,   550,     9,    41,   449,
     450,   148,   560,   454,   155,   454,   651,   454,   454,   454,
     454,   133,   134,   467,   482,   483,   485,   485,   485,   485,
     485,   485,   484,   485,   485,   485,   485,   485,   485,   485,
     485,    40,    48,   240,   499,   519,   583,   586,   587,   588,
     589,   590,   591,   592,   593,   488,   488,   487,   489,   489,
     489,   489,   490,   490,   491,   491,   155,   148,   148,   148,
      49,   453,   505,   505,    21,    41,   454,   528,   148,   218,
     219,   227,    41,   528,    52,   122,   631,    64,    66,   123,
     169,   177,   178,   179,   180,   181,   188,   189,   231,   409,
     185,   186,    50,   426,   426,   426,   426,   426,   426,   426,
     426,   176,   184,    65,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   176,   220,   228,   448,   426,   426,   426,
     426,   426,   426,   426,   426,   176,   176,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   271,   280,   322,   307,
     308,   345,   102,   534,   103,   102,   127,   501,    33,    41,
      49,    49,   453,    49,    41,    41,    41,    41,    49,    49,
     453,    41,    41,    49,    49,    10,   626,   454,    49,    49,
     560,   460,   560,   522,   465,   560,   475,   454,   454,    41,
      41,    49,   453,   453,    33,    41,    49,   522,    33,    41,
      40,    63,   170,   189,   561,   563,   564,   565,   632,   648,
     650,    48,   451,   221,    58,   148,   221,   221,   237,   454,
     468,   469,   470,   133,   485,   583,   453,   590,    48,   204,
     205,   206,   594,    87,   616,   238,   585,   239,    82,    85,
      86,   147,   181,   199,   200,   203,   222,   600,   601,   602,
     603,   604,   605,   608,   613,   614,   615,   195,   595,   561,
     561,   558,   564,   558,    49,   453,    33,    41,   216,   225,
     454,   454,   454,    41,   172,   426,    37,   167,   168,   122,
     582,     9,   631,   167,   168,   117,   118,   134,   141,   187,
     409,   167,   173,   435,   651,   233,   237,   636,   652,   169,
     179,   441,   582,   169,   582,   600,    67,    68,    99,   409,
     241,   243,   250,   251,   256,   269,   270,   323,   324,   327,
     328,   332,   333,   334,   335,   336,   337,   340,   341,   344,
     241,   244,   245,   246,   247,   249,   252,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   266,   267,   268,   309,
     310,   342,   346,   347,   348,   349,   350,   351,   352,   355,
     356,   360,   361,   362,   363,   364,   369,   370,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   119,   120,
      25,    42,   127,   581,   632,    49,    49,   454,   128,   111,
     461,    10,    10,   130,   146,   477,   479,   150,    49,    49,
     581,   560,   450,   563,    40,    40,    40,    11,    23,    34,
     562,   453,   454,   454,   454,    40,    40,   311,   313,   641,
     651,    33,   136,   137,   471,   468,    41,    49,    49,   583,
      94,   209,    93,   587,    92,   111,   117,   192,   193,   194,
     197,   198,   584,   597,   588,   130,    83,    84,    88,    89,
      90,    91,    83,    84,   651,   630,    88,    89,    90,    91,
     179,   601,   116,   207,   208,   596,    23,   559,    22,   454,
     227,   227,   122,   582,   522,    37,   138,   582,   169,   169,
      33,   122,   651,   119,   311,   312,   637,   638,   232,   447,
     631,   187,   582,   111,   440,   631,   440,   652,   281,   282,
     272,   273,   294,   295,   297,   329,   273,   285,   295,   329,
     273,   283,   284,   295,   296,   345,   273,   295,   296,   345,
     241,   271,   273,   274,   275,   276,   277,   278,   279,   288,
     289,   290,   291,   292,   293,   303,   304,   305,   241,   112,
     451,   350,   296,   253,   365,   366,   367,   298,   296,   299,
     345,   272,   296,   354,   273,   357,   241,   345,   264,   296,
     301,   302,   371,   273,   295,   296,   345,   296,   345,   273,
     296,   345,   345,   273,   296,   299,   300,   345,   273,   296,
     345,   273,   300,   345,   241,   286,   296,   286,   287,   345,
     296,   345,   534,   534,   541,    41,   454,     9,   190,   462,
     454,   454,   454,     9,   561,   179,   478,   479,   454,    23,
      41,    41,    41,    41,    41,   561,   649,    49,   221,     9,
     642,   643,   642,   221,   469,   138,   472,   594,    49,   489,
      93,    96,    97,   486,   487,   596,   212,   213,   599,   599,
     589,   209,   122,    40,   111,   179,   607,   209,    90,    98,
     140,   487,   487,   196,   454,   454,   426,   426,   560,   582,
     139,   140,   582,   582,   174,   175,   436,    40,   451,   635,
     636,    33,    20,    30,    36,    55,    70,   229,   230,   393,
     394,   395,   396,   399,   400,   401,   513,   148,   171,   451,
      37,   169,   440,   582,    33,    37,   447,   282,   281,   325,
     393,   561,    52,    53,    54,   326,   250,   330,   331,   345,
     561,   345,   561,   453,   241,   561,   453,   241,    62,   119,
     314,   315,   316,   338,   119,   339,   339,   241,   453,   298,
     254,   366,   368,   345,   453,   453,   344,   241,   119,   311,
     313,   353,   453,   241,   248,   358,   359,   241,   358,   241,
     345,   453,   344,   344,   265,   372,   561,   453,   241,   453,
     241,   344,   453,   241,   241,   344,   453,   344,   344,   241,
     344,   453,   241,   344,   344,   241,   453,   241,   453,   241,
      43,    43,    31,   114,   115,   451,   530,   522,     9,   130,
     522,   128,     9,   128,   151,    41,   148,    33,    41,   454,
     522,    33,    41,    41,    40,   139,   140,   141,   209,   210,
     211,   598,   598,   179,   607,   582,    40,   111,   610,   209,
     487,   487,   157,    10,   171,   444,    41,   449,   148,   634,
     232,   638,   513,    19,    19,    40,    40,    12,   451,   635,
     400,    30,    36,    30,    36,   402,   517,   561,   582,   582,
     148,   171,   451,   119,   311,   312,   273,   283,   284,   295,
     296,   345,   241,   241,   119,   453,   345,   241,   241,   273,
     283,   295,   296,   345,   241,   345,   241,   345,   534,   534,
     532,   522,   454,   148,   454,   522,   454,   454,   561,   561,
     148,   560,   643,   642,   582,   606,   606,   201,   596,   611,
     630,   582,   609,   609,   487,   454,    41,   561,   451,   393,
     513,   513,   397,   521,   630,   630,   394,   634,   400,   400,
     400,   400,    21,   171,   451,   440,   561,   561,   453,   241,
     241,   561,   453,   241,   241,    44,    46,   535,    44,    46,
     536,   534,   561,   128,   561,    10,    41,    33,    41,    41,
     630,   202,    33,    41,   160,   162,   612,   451,   635,    41,
      33,   451,   453,   171,   451,   537,   539,   538,   540,    26,
     128,   454,   454,   607,   596,   630,   610,   610,   634,   398,
     519,   521,    22,    45,   112,   451,    47,   113,   451,    45,
     112,   451,    47,   113,   451,   454,   202,   451,    41
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
#line 760 "../src/parser/XQParser.y"
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
#line 790 "../src/parser/XQParser.y"
    {
  }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 793 "../src/parser/XQParser.y"
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
#line 816 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 820 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 838 "../src/parser/XQParser.y"
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
#line 857 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, 0, MEMMGR));
  }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 861 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 866 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 873 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 878 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 883 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 891 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 895 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 901 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 906 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 916 "../src/parser/XQParser.y"
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
#line 929 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, false, true, MEMMGR));
  }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 933 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 940 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 945 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 953 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 957 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 965 "../src/parser/XQParser.y"
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
#line 992 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 996 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 1003 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 1009 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 1014 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 1019 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1028 "../src/parser/XQParser.y"
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
#line 1052 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1056 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1063 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1068 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1073 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 1078 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1089 "../src/parser/XQParser.y"
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
#line 1107 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1111 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1118 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1123 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 1131 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 1156 "../src/parser/XQParser.y"
    {
  }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1159 "../src/parser/XQParser.y"
    {
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1162 "../src/parser/XQParser.y"
    {
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1165 "../src/parser/XQParser.y"
    {
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1168 "../src/parser/XQParser.y"
    {
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1171 "../src/parser/XQParser.y"
    {
  }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1174 "../src/parser/XQParser.y"
    {
  }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1177 "../src/parser/XQParser.y"
    {
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1180 "../src/parser/XQParser.y"
    {
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1183 "../src/parser/XQParser.y"
    {
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1186 "../src/parser/XQParser.y"
    {
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1189 "../src/parser/XQParser.y"
    {
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1192 "../src/parser/XQParser.y"
    {
  }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1195 "../src/parser/XQParser.y"
    {
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1198 "../src/parser/XQParser.y"
    {
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1201 "../src/parser/XQParser.y"
    {
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1204 "../src/parser/XQParser.y"
    {
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1207 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1217 "../src/parser/XQParser.y"
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
#line 1229 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1232 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1240 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1245 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1250 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1258 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1266 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1277 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1287 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1291 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1298 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1307 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1311 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1316 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1326 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1330 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1335 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1340 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1369 "../src/parser/XQParser.y"
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
#line 1387 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1391 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1396 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1405 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1414 "../src/parser/XQParser.y"
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
#line 1434 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1438 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1443 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1451 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1456 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1460 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1467 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1471 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1479 "../src/parser/XQParser.y"
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
#line 1492 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1496 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1506 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1510 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1518 "../src/parser/XQParser.y"
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
#line 1536 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1540 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1547 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1552 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1557 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1565 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1571 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1579 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1587 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1594 "../src/parser/XQParser.y"
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
#line 1608 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1612 "../src/parser/XQParser.y"
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
#line 1626 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1635 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1642 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1646 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1653 "../src/parser/XQParser.y"
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
#line 1688 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1692 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1697 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1703 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1712 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1716 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1723 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1727 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1734 "../src/parser/XQParser.y"
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
#line 1752 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), 0, 0, MEMMGR));
  }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1756 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1763 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1768 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->seqType = (yyvsp[(3) - (3)].sequenceType);
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1776 "../src/parser/XQParser.y"
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
#line 1794 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1798 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1806 "../src/parser/XQParser.y"
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
#line 1828 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1832 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1839 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1847 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1856 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1864 "../src/parser/XQParser.y"
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
#line 1901 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1905 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1912 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1919 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1928 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1937 "../src/parser/XQParser.y"
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
#line 1964 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1968 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1975 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1987 "../src/parser/XQParser.y"
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
#line 2013 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 2017 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 2024 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 2034 "../src/parser/XQParser.y"
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
#line 2046 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2050 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 2055 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2064 "../src/parser/XQParser.y"
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
#line 2077 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 2081 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 2086 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2095 "../src/parser/XQParser.y"
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
#line 2109 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 2113 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2126 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2131 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 2143 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2147 "../src/parser/XQParser.y"
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
#line 2155 "../src/parser/XQParser.y"
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
#line 2168 "../src/parser/XQParser.y"
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
#line 2176 "../src/parser/XQParser.y"
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
#line 2189 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 2196 "../src/parser/XQParser.y"
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
#line 2235 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 2239 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2243 "../src/parser/XQParser.y"
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
#line 2261 "../src/parser/XQParser.y"
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
#line 2279 "../src/parser/XQParser.y"
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
#line 2289 "../src/parser/XQParser.y"
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
#line 2303 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 2311 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 2317 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 2323 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 2329 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2340 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 2344 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 2374 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 2378 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2382 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2386 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2390 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 2394 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 2400 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 2406 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 2432 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), (yyvsp[(5) - (5)].astNode), NULL, false, true, MEMMGR));
  }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 2436 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 2440 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), NULL, NULL, false, true, MEMMGR));
  }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 2444 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), NULL, (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 2473 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 2477 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 2481 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 2485 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 2489 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 2493 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 2499 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 2505 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 2509 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 2536 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 2540 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 2544 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 2548 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2552 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2556 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2562 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2568 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2587 "../src/parser/XQParser.y"
    {
    if(!XPath2Utils::equals((yyvsp[(3) - (4)].str),sz1_0))
      yyerror((yylsp[(2) - (4)]), "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
  }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2592 "../src/parser/XQParser.y"
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
#line 2621 "../src/parser/XQParser.y"
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
#line 2635 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2639 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 2643 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2647 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2651 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 2655 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 2661 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2667 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2671 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 2703 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 2711 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 2716 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 2725 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 2730 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 2739 "../src/parser/XQParser.y"
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
#line 2799 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 2807 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 2812 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 2821 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 2826 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 2835 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 2845 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 2849 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 2857 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 2861 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 2869 "../src/parser/XQParser.y"
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
#line 2885 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 2894 "../src/parser/XQParser.y"
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
#line 2906 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 2914 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 2918 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 2923 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 2932 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 2936 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 2944 "../src/parser/XQParser.y"
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
#line 2954 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), CONTEXT, &loc);
  }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 2966 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 2973 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 2977 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 2985 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 2990 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 3000 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),WRAP((yylsp[(6) - (6)]), (yyvsp[(6) - (6)].astNode)),NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 3004 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),WRAP((yylsp[(8) - (8)]), (yyvsp[(8) - (8)].astNode)),(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 3008 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),NULL,NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 3012 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),NULL,(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 3019 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 3023 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 3029 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 3033 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 3041 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 3046 "../src/parser/XQParser.y"
    {
    XQUserFunction::ArgumentSpecs* paramList = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 3056 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQUserFunction::ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 3064 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 3072 "../src/parser/XQParser.y"
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
#line 3085 "../src/parser/XQParser.y"
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
#line 3123 "../src/parser/XQParser.y"
    {
      // Add a ContextTuple at the start
      TupleNode *tmp = setLastAncestor((yyvsp[(1) - (3)].tupleNode), WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)));

      // Add the return expression
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQReturn(tmp, (yyvsp[(3) - (3)].astNode), MEMMGR));
    }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 3134 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), setLastAncestor((yyvsp[(2) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode)));
    }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 3138 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 3142 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 3150 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 3156 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 3169 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 3176 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 3184 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 3195 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 3199 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 3209 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 3213 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 3223 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 3230 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 3238 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 3242 "../src/parser/XQParser.y"
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
#line 3255 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 3263 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 3268 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 3276 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 3286 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 3293 "../src/parser/XQParser.y"
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
#line 3308 "../src/parser/XQParser.y"
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
#line 3324 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 3328 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 3332 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3339 "../src/parser/XQParser.y"
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
#line 3348 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 3352 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 3361 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 3369 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 3380 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 3388 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 3399 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR);
  }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 3406 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].caseClauses)->push_back((yyvsp[(2) - (2)].caseClause));
    (yyval.caseClauses)=(yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3411 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses)=new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back((yyvsp[(1) - (1)].caseClause));
  }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 3419 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 3423 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 3431 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, (yyvsp[(2) - (4)].sequenceType), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 3435 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (7)].str), (yyvsp[(5) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode)));
  }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 3443 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 3451 "../src/parser/XQParser.y"
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
#line 3465 "../src/parser/XQParser.y"
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
#line 3484 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 3488 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 3491 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3492 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 3496 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 3500 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 3504 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 3508 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 3512 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 3516 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 3520 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 3524 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 3528 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 3532 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 3536 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 3540 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 3549 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) FTContains((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].ftselection), NULL, MEMMGR));
  }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 3553 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].ftselection), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 3562 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Range(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 3571 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 3575 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 3584 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 3588 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 3592 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 3596 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 3605 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 3609 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 3618 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 3622 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 3631 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQInstanceOf((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 3640 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 3650 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 3659 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 3668 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 3674 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 3695 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 3699 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 3703 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 3711 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 3718 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 3731 "../src/parser/XQParser.y"
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
#line 3752 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 3761 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 3767 "../src/parser/XQParser.y"
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
#line 3792 "../src/parser/XQParser.y"
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
#line 3806 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 3812 "../src/parser/XQParser.y"
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
#line 3833 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 3837 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addReversePredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQDocumentOrder((yyval.astNode), MEMMGR));
  }
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 3846 "../src/parser/XQParser.y"
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

  case 509:

/* Line 1455 of yacc.c  */
#line 3869 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 3873 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 3877 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 3881 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 513:

/* Line 1455 of yacc.c  */
#line 3885 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 3889 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 3893 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 3897 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 3905 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 3913 "../src/parser/XQParser.y"
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

  case 519:

/* Line 1455 of yacc.c  */
#line 3930 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 521:

/* Line 1455 of yacc.c  */
#line 3947 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 522:

/* Line 1455 of yacc.c  */
#line 3951 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 3955 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 3959 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 525:

/* Line 1455 of yacc.c  */
#line 3963 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 3971 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 3983 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 529:

/* Line 1455 of yacc.c  */
#line 3993 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 4005 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 4012 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 4019 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 4030 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 4039 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 4043 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 4074 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 4085 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 4089 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 4097 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 4105 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 4115 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 4125 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 4129 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 4136 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 4141 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 4150 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 4154 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 4167 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 4173 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 4186 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 4190 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 4199 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 4215 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 4219 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 4226 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 580:

/* Line 1455 of yacc.c  */
#line 4230 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 4240 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 582:

/* Line 1455 of yacc.c  */
#line 4244 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 4249 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 4259 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 585:

/* Line 1455 of yacc.c  */
#line 4263 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 586:

/* Line 1455 of yacc.c  */
#line 4267 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 587:

/* Line 1455 of yacc.c  */
#line 4280 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 588:

/* Line 1455 of yacc.c  */
#line 4284 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 4289 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 4299 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 4303 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 4307 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 4324 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 4328 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 4333 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 4338 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 4345 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                 SchemaSymbols::fgDT_STRING,
                                 (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
    }
  }
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 4358 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(2) - (3)].str), AnyAtomicType::STRING,
                  MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 4371 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4380 "../src/parser/XQParser.y"
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

  case 603:

/* Line 1455 of yacc.c  */
#line 4400 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 4423 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 4431 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 4439 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 4443 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 4451 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 4455 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 4464 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 4471 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 4475 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 4483 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 620:

/* Line 1455 of yacc.c  */
#line 4491 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 4499 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 4506 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(1) - (1)].str), AnyAtomicType::STRING, MEMMGR));
  }
    break;

  case 623:

/* Line 1455 of yacc.c  */
#line 4516 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 624:

/* Line 1455 of yacc.c  */
#line 4523 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 625:

/* Line 1455 of yacc.c  */
#line 4527 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 626:

/* Line 1455 of yacc.c  */
#line 4535 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 627:

/* Line 1455 of yacc.c  */
#line 4545 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 628:

/* Line 1455 of yacc.c  */
#line 4549 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 629:

/* Line 1455 of yacc.c  */
#line 4557 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 630:

/* Line 1455 of yacc.c  */
#line 4561 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 631:

/* Line 1455 of yacc.c  */
#line 4571 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 632:

/* Line 1455 of yacc.c  */
#line 4578 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 633:

/* Line 1455 of yacc.c  */
#line 4587 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 634:

/* Line 1455 of yacc.c  */
#line 4589 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 4591 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 4593 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 4599 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 4603 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 4638 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 653:

/* Line 1455 of yacc.c  */
#line 4646 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 654:

/* Line 1455 of yacc.c  */
#line 4650 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 4655 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_SCHEMA_DOCUMENT);
  }
    break;

  case 656:

/* Line 1455 of yacc.c  */
#line 4664 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 657:

/* Line 1455 of yacc.c  */
#line 4672 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 4680 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 4684 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 4688 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 4696 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 662:

/* Line 1455 of yacc.c  */
#line 4700 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 663:

/* Line 1455 of yacc.c  */
#line 4704 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 665:

/* Line 1455 of yacc.c  */
#line 4713 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 666:

/* Line 1455 of yacc.c  */
#line 4721 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 668:

/* Line 1455 of yacc.c  */
#line 4734 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 669:

/* Line 1455 of yacc.c  */
#line 4738 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 670:

/* Line 1455 of yacc.c  */
#line 4742 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 671:

/* Line 1455 of yacc.c  */
#line 4746 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 673:

/* Line 1455 of yacc.c  */
#line 4756 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 674:

/* Line 1455 of yacc.c  */
#line 4764 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 679:

/* Line 1455 of yacc.c  */
#line 4784 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 680:

/* Line 1455 of yacc.c  */
#line 4796 "../src/parser/XQParser.y"
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

  case 681:

/* Line 1455 of yacc.c  */
#line 4811 "../src/parser/XQParser.y"
    {
}
    break;

  case 682:

/* Line 1455 of yacc.c  */
#line 4814 "../src/parser/XQParser.y"
    {
}
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 4820 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 4824 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 4834 "../src/parser/XQParser.y"
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

  case 687:

/* Line 1455 of yacc.c  */
#line 4851 "../src/parser/XQParser.y"
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

  case 689:

/* Line 1455 of yacc.c  */
#line 4867 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 691:

/* Line 1455 of yacc.c  */
#line 4877 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 4887 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 4896 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 696:

/* Line 1455 of yacc.c  */
#line 4901 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 698:

/* Line 1455 of yacc.c  */
#line 4911 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 699:

/* Line 1455 of yacc.c  */
#line 4915 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 4923 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 4928 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 4937 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 703:

/* Line 1455 of yacc.c  */
#line 4941 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 4945 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 4949 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 4953 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 707:

/* Line 1455 of yacc.c  */
#line 4957 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 709:

/* Line 1455 of yacc.c  */
#line 4967 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 710:

/* Line 1455 of yacc.c  */
#line 4978 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 711:

/* Line 1455 of yacc.c  */
#line 4984 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 712:

/* Line 1455 of yacc.c  */
#line 4990 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 713:

/* Line 1455 of yacc.c  */
#line 4996 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 714:

/* Line 1455 of yacc.c  */
#line 5011 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 715:

/* Line 1455 of yacc.c  */
#line 5015 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 716:

/* Line 1455 of yacc.c  */
#line 5019 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 717:

/* Line 1455 of yacc.c  */
#line 5023 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 718:

/* Line 1455 of yacc.c  */
#line 5027 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 719:

/* Line 1455 of yacc.c  */
#line 5031 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 720:

/* Line 1455 of yacc.c  */
#line 5035 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 721:

/* Line 1455 of yacc.c  */
#line 5039 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 5047 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 5051 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 724:

/* Line 1455 of yacc.c  */
#line 5055 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 5063 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5067 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 5103 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
  }
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 5107 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
  }
    break;

  case 739:

/* Line 1455 of yacc.c  */
#line 5111 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
  }
    break;

  case 740:

/* Line 1455 of yacc.c  */
#line 5115 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
  }
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 5124 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 5128 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5136 "../src/parser/XQParser.y"
    {
    std::cerr << "with stemming" << std::endl;
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5140 "../src/parser/XQParser.y"
    {
    std::cerr << "without stemming" << std::endl;
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5150 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus" << std::endl;
  }
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 5154 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus default" << std::endl;
  }
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 5158 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus ()" << std::endl;
  }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 5162 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus (default)" << std::endl;
  }
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 5166 "../src/parser/XQParser.y"
    {
    std::cerr << "without thesaurus" << std::endl;
  }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 5173 "../src/parser/XQParser.y"
    {
  }
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 5176 "../src/parser/XQParser.y"
    {
  }
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 5183 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 5187 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 5191 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 5195 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 5205 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (5)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 5209 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 5213 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (5)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 759:

/* Line 1455 of yacc.c  */
#line 5220 "../src/parser/XQParser.y"
    {
  }
    break;

  case 760:

/* Line 1455 of yacc.c  */
#line 5223 "../src/parser/XQParser.y"
    {
  }
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 5231 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 762:

/* Line 1455 of yacc.c  */
#line 5235 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 763:

/* Line 1455 of yacc.c  */
#line 5242 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 5246 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 765:

/* Line 1455 of yacc.c  */
#line 5254 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 5258 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 5266 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 5274 "../src/parser/XQParser.y"
    {
    std::cerr << "with wildcards" << std::endl;
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5278 "../src/parser/XQParser.y"
    {
    std::cerr << "without wildcards" << std::endl;
  }
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 5286 "../src/parser/XQParser.y"
    {
}
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 5293 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5301 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 5306 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5311 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5323 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5327 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5331 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5335 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5339 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5350 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 5361 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 5365 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 5375 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5383 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5390 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5395 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5403 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5412 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5424 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5436 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE,
                  MEMMGR));
  }
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5449 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING,
                  MEMMGR));
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5460 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5469 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5481 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, 0, (yyvsp[(5) - (5)].astNode), 0, MEMMGR));
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5485 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, (yyvsp[(5) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), MEMMGR));
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5489 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), 0, (yyvsp[(8) - (8)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5494 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), (yyvsp[(8) - (10)].argSpecs), (yyvsp[(10) - (10)].astNode), (yyvsp[(9) - (10)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5499 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), 0, (yyvsp[(6) - (6)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5504 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), (yyvsp[(6) - (8)].argSpecs), (yyvsp[(8) - (8)].astNode), (yyvsp[(7) - (8)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 5512 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5516 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5524 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5528 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 5535 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 5540 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 5548 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 811:

/* Line 1455 of yacc.c  */
#line 5553 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 5562 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5566 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 5570 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 815:

/* Line 1455 of yacc.c  */
#line 5578 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 816:

/* Line 1455 of yacc.c  */
#line 5582 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 817:

/* Line 1455 of yacc.c  */
#line 5590 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 5594 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5598 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 5602 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 5610 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 5614 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 823:

/* Line 1455 of yacc.c  */
#line 5618 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 824:

/* Line 1455 of yacc.c  */
#line 5626 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 5631 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 5641 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5658 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5666 "../src/parser/XQParser.y"
    {
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(2) - (4)].argSpecs), (yyvsp[(4) - (4)].astNode), (yyvsp[(3) - (4)].sequenceType), false, false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 5675 "../src/parser/XQParser.y"
    {
    REJECT_NOT_EXTENSION(DereferencedFunctionCall, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 832:

/* Line 1455 of yacc.c  */
#line 5680 "../src/parser/XQParser.y"
    {
    REJECT_NOT_EXTENSION(DereferencedFunctionCall, (yylsp[(1) - (4)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 833:

/* Line 1455 of yacc.c  */
#line 5689 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  }
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 5693 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  }
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 5697 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  }
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 5704 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 5709 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 838:

/* Line 1455 of yacc.c  */
#line 5718 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;



/* Line 1455 of yacc.c  */
#line 11912 "../src/parser/XQParser.cpp"
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
#line 5753 "../src/parser/XQParser.y"


}  // namespace XQParser


