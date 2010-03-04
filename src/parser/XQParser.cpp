
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
#line 388 "../src/parser/XQParser.cpp"

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
     _XSLT_END_ELEMENT_ = 498,
     _XSLT_STYLESHEET_ = 499,
     _XSLT_TEMPLATE_ = 500,
     _XSLT_VALUE_OF_ = 501,
     _XSLT_TEXT_ = 502,
     _XSLT_APPLY_TEMPLATES_ = 503,
     _XSLT_CALL_TEMPLATE_ = 504,
     _XSLT_WITH_PARAM_ = 505,
     _XSLT_SEQUENCE_ = 506,
     _XSLT_PARAM_ = 507,
     _XSLT_FUNCTION_ = 508,
     _XSLT_CHOOSE_ = 509,
     _XSLT_WHEN_ = 510,
     _XSLT_OTHERWISE_ = 511,
     _XSLT_IF_ = 512,
     _XSLT_VARIABLE_ = 513,
     _XSLT_COMMENT_ = 514,
     _XSLT_PI_ = 515,
     _XSLT_DOCUMENT_ = 516,
     _XSLT_ATTRIBUTE_ = 517,
     _XSLT_NAMESPACE_ = 518,
     _XSLT_ELEMENT_ = 519,
     _XSLT_ANALYZE_STRING_ = 520,
     _XSLT_MATCHING_SUBSTRING_ = 521,
     _XSLT_NON_MATCHING_SUBSTRING_ = 522,
     _XSLT_COPY_OF_ = 523,
     _XSLT_COPY_ = 524,
     _XSLT_FOR_EACH_ = 525,
     _XSLT_OUTPUT_ = 526,
     _XSLT_IMPORT_SCHEMA_ = 527,
     _XSLT_VERSION_ = 528,
     _XSLT_MODE_ = 529,
     _XSLT_NAME_ = 530,
     _XSLT_DOCTYPE_PUBLIC_ = 531,
     _XSLT_DOCTYPE_SYSTEM_ = 532,
     _XSLT_ENCODING_ = 533,
     _XSLT_MEDIA_TYPE_ = 534,
     _XSLT_NORMALIZATION_FORM_ = 535,
     _XSLT_STANDALONE_ = 536,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 537,
     _XSLT_NAMESPACE_STR_ = 538,
     _XSLT_SCHEMA_LOCATION_ = 539,
     _XSLT_TUNNEL_ = 540,
     _XSLT_REQUIRED_ = 541,
     _XSLT_OVERRIDE_ = 542,
     _XSLT_COPY_NAMESPACES_ = 543,
     _XSLT_INHERIT_NAMESPACES_ = 544,
     _XSLT_BYTE_ORDER_MARK_ = 545,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 546,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 547,
     _XSLT_INDENT_ = 548,
     _XSLT_OMIT_XML_DECLARATION_ = 549,
     _XSLT_UNDECLARE_PREFIXES_ = 550,
     _XSLT_MATCH_ = 551,
     _XSLT_AS_ = 552,
     _XSLT_SELECT_ = 553,
     _XSLT_PRIORITY_ = 554,
     _XSLT_TEST_ = 555,
     _XSLT_SEPARATOR_ = 556,
     _XSLT_NAMESPACE_A_ = 557,
     _XSLT_REGEX_ = 558,
     _XSLT_FLAGS_ = 559,
     _XSLT_METHOD_ = 560,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 561,
     _XSLT_USE_CHARACTER_MAPS_ = 562,
     _XSLT_ELEMENT_NAME_ = 563,
     _XSLT_XMLNS_ATTR_ = 564,
     _XSLT_ATTR_NAME_ = 565,
     _XSLT_TEXT_NODE_ = 566,
     _XSLT_WS_TEXT_NODE_ = 567,
     _HASH_DEFAULT_ = 568,
     _HASH_ALL_ = 569,
     _HASH_CURRENT_ = 570,
     _XML_ = 571,
     _HTML_ = 572,
     _XHTML_ = 573
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
#define _XSLT_END_ELEMENT_ 498
#define _XSLT_STYLESHEET_ 499
#define _XSLT_TEMPLATE_ 500
#define _XSLT_VALUE_OF_ 501
#define _XSLT_TEXT_ 502
#define _XSLT_APPLY_TEMPLATES_ 503
#define _XSLT_CALL_TEMPLATE_ 504
#define _XSLT_WITH_PARAM_ 505
#define _XSLT_SEQUENCE_ 506
#define _XSLT_PARAM_ 507
#define _XSLT_FUNCTION_ 508
#define _XSLT_CHOOSE_ 509
#define _XSLT_WHEN_ 510
#define _XSLT_OTHERWISE_ 511
#define _XSLT_IF_ 512
#define _XSLT_VARIABLE_ 513
#define _XSLT_COMMENT_ 514
#define _XSLT_PI_ 515
#define _XSLT_DOCUMENT_ 516
#define _XSLT_ATTRIBUTE_ 517
#define _XSLT_NAMESPACE_ 518
#define _XSLT_ELEMENT_ 519
#define _XSLT_ANALYZE_STRING_ 520
#define _XSLT_MATCHING_SUBSTRING_ 521
#define _XSLT_NON_MATCHING_SUBSTRING_ 522
#define _XSLT_COPY_OF_ 523
#define _XSLT_COPY_ 524
#define _XSLT_FOR_EACH_ 525
#define _XSLT_OUTPUT_ 526
#define _XSLT_IMPORT_SCHEMA_ 527
#define _XSLT_VERSION_ 528
#define _XSLT_MODE_ 529
#define _XSLT_NAME_ 530
#define _XSLT_DOCTYPE_PUBLIC_ 531
#define _XSLT_DOCTYPE_SYSTEM_ 532
#define _XSLT_ENCODING_ 533
#define _XSLT_MEDIA_TYPE_ 534
#define _XSLT_NORMALIZATION_FORM_ 535
#define _XSLT_STANDALONE_ 536
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 537
#define _XSLT_NAMESPACE_STR_ 538
#define _XSLT_SCHEMA_LOCATION_ 539
#define _XSLT_TUNNEL_ 540
#define _XSLT_REQUIRED_ 541
#define _XSLT_OVERRIDE_ 542
#define _XSLT_COPY_NAMESPACES_ 543
#define _XSLT_INHERIT_NAMESPACES_ 544
#define _XSLT_BYTE_ORDER_MARK_ 545
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 546
#define _XSLT_INCLUDE_CONTENT_TYPE_ 547
#define _XSLT_INDENT_ 548
#define _XSLT_OMIT_XML_DECLARATION_ 549
#define _XSLT_UNDECLARE_PREFIXES_ 550
#define _XSLT_MATCH_ 551
#define _XSLT_AS_ 552
#define _XSLT_SELECT_ 553
#define _XSLT_PRIORITY_ 554
#define _XSLT_TEST_ 555
#define _XSLT_SEPARATOR_ 556
#define _XSLT_NAMESPACE_A_ 557
#define _XSLT_REGEX_ 558
#define _XSLT_FLAGS_ 559
#define _XSLT_METHOD_ 560
#define _XSLT_CDATA_SECTION_ELEMENTS_ 561
#define _XSLT_USE_CHARACTER_MAPS_ 562
#define _XSLT_ELEMENT_NAME_ 563
#define _XSLT_XMLNS_ATTR_ 564
#define _XSLT_ATTR_NAME_ 565
#define _XSLT_TEXT_NODE_ 566
#define _XSLT_WS_TEXT_NODE_ 567
#define _HASH_DEFAULT_ 568
#define _HASH_ALL_ 569
#define _HASH_CURRENT_ 570
#define _XML_ 571
#define _HTML_ 572
#define _XHTML_ 573




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
#line 1080 "../src/parser/XQParser.cpp"

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
#define YYLAST   8244

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  319
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  342
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1015
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1664

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   573

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
     315,   316,   317,   318
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
    1235,  1237,  1240,  1244,  1246,  1254,  1255,  1259,  1260,  1264,
    1267,  1271,  1273,  1279,  1285,  1288,  1292,  1296,  1301,  1305,
    1307,  1311,  1317,  1319,  1320,  1322,  1324,  1325,  1328,  1331,
    1336,  1341,  1345,  1347,  1353,  1360,  1363,  1365,  1371,  1375,
    1380,  1388,  1397,  1401,  1403,  1407,  1409,  1413,  1417,  1418,
    1423,  1427,  1431,  1435,  1439,  1443,  1447,  1451,  1455,  1459,
    1463,  1467,  1471,  1473,  1478,  1484,  1486,  1490,  1492,  1496,
    1500,  1502,  1506,  1510,  1514,  1518,  1520,  1524,  1528,  1530,
    1534,  1538,  1540,  1545,  1547,  1552,  1554,  1559,  1561,  1566,
    1568,  1571,  1574,  1576,  1578,  1580,  1582,  1587,  1593,  1599,
    1603,  1608,  1610,  1613,  1618,  1620,  1623,  1625,  1628,  1631,
    1633,  1635,  1639,  1643,  1645,  1647,  1649,  1651,  1653,  1655,
    1660,  1662,  1667,  1670,  1672,  1675,  1678,  1681,  1684,  1687,
    1690,  1693,  1696,  1699,  1701,  1704,  1706,  1709,  1712,  1715,
    1718,  1721,  1723,  1725,  1727,  1729,  1731,  1733,  1735,  1737,
    1739,  1744,  1746,  1748,  1750,  1752,  1754,  1756,  1758,  1760,
    1762,  1764,  1766,  1768,  1770,  1772,  1774,  1777,  1779,  1783,
    1786,  1788,  1793,  1798,  1802,  1807,  1811,  1813,  1815,  1817,
    1819,  1821,  1823,  1825,  1827,  1833,  1844,  1846,  1848,  1849,
    1857,  1865,  1866,  1868,  1872,  1876,  1880,  1884,  1885,  1888,
    1891,  1892,  1895,  1898,  1899,  1902,  1905,  1906,  1909,  1912,
    1913,  1916,  1919,  1922,  1925,  1929,  1930,  1932,  1936,  1938,
    1941,  1943,  1945,  1947,  1949,  1951,  1953,  1958,  1962,  1964,
    1968,  1971,  1975,  1979,  1981,  1985,  1990,  1995,  1999,  2001,
    2005,  2008,  2012,  2015,  2016,  2018,  2019,  2022,  2025,  2029,
    2030,  2032,  2034,  2036,  2038,  2042,  2044,  2046,  2048,  2050,
    2052,  2054,  2056,  2058,  2060,  2062,  2064,  2066,  2068,  2072,
    2076,  2081,  2086,  2090,  2094,  2098,  2103,  2108,  2112,  2117,
    2124,  2126,  2128,  2133,  2135,  2139,  2144,  2151,  2159,  2161,
    2163,  2168,  2170,  2172,  2174,  2176,  2178,  2182,  2183,  2186,
    2187,  2190,  2194,  2196,  2200,  2202,  2207,  2209,  2212,  2214,
    2216,  2219,  2222,  2226,  2228,  2231,  2236,  2240,  2245,  2246,
    2248,  2251,  2253,  2256,  2258,  2259,  2263,  2266,  2270,  2274,
    2279,  2281,  2285,  2289,  2292,  2295,  2298,  2301,  2304,  2306,
    2308,  2310,  2312,  2314,  2317,  2321,  2323,  2325,  2327,  2329,
    2331,  2333,  2335,  2337,  2340,  2343,  2345,  2347,  2350,  2353,
    2355,  2358,  2361,  2364,  2370,  2376,  2379,  2380,  2384,  2387,
    2392,  2397,  2404,  2409,  2413,  2418,  2419,  2422,  2425,  2429,
    2431,  2435,  2438,  2441,  2444,  2446,  2449,  2453,  2457,  2461,
    2465,  2469,  2476,  2483,  2488,  2493,  2498,  2501,  2504,  2507,
    2510,  2513,  2521,  2527,  2533,  2540,  2544,  2546,  2551,  2553,
    2555,  2557,  2559,  2561,  2563,  2569,  2577,  2586,  2597,  2604,
    2613,  2614,  2617,  2620,  2624,  2625,  2628,  2630,  2634,  2636,
    2638,  2640,  2644,  2652,  2656,  2664,  2670,  2680,  2682,  2684,
    2686,  2688,  2692,  2698,  2700,  2702,  2706,  2711,  2715,  2720,
    2722,  2724,  2729,  2735,  2742,  2744,  2748,  2752,  2754,  2756,
    2758,  2760,  2762,  2764,  2766,  2768,  2770,  2772,  2774,  2776,
    2778,  2780,  2782,  2784,  2786,  2788,  2790,  2792,  2794,  2796,
    2798,  2800,  2802,  2804,  2806,  2808,  2810,  2812,  2814,  2816,
    2818,  2820,  2822,  2824,  2826,  2828,  2830,  2832,  2834,  2836,
    2838,  2840,  2842,  2844,  2846,  2848,  2850,  2852,  2854,  2856,
    2858,  2860,  2862,  2864,  2866,  2868,  2870,  2872,  2874,  2876,
    2878,  2880,  2882,  2884,  2886,  2888,  2890,  2892,  2894,  2896,
    2898,  2900,  2902,  2904,  2906,  2908,  2910,  2912,  2914,  2916,
    2918,  2920,  2922,  2924,  2926,  2928,  2930,  2932,  2934,  2936,
    2938,  2940,  2942,  2944,  2946,  2948,  2950,  2952,  2954,  2956,
    2958,  2960,  2962,  2964,  2966,  2968,  2970,  2972,  2974,  2976,
    2978,  2980,  2982,  2984,  2986,  2988,  2990,  2992,  2994,  2996,
    2998,  3000,  3002,  3004,  3006,  3008,  3010,  3012,  3014,  3016,
    3018,  3020,  3022,  3024,  3026,  3028,  3030,  3032,  3034,  3036,
    3038,  3040,  3042,  3044,  3046,  3048,  3050,  3052,  3054,  3056,
    3058,  3060,  3062,  3064,  3066,  3068,  3070,  3072,  3074,  3076,
    3078,  3080,  3082,  3084,  3086,  3088
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     320,     0,    -1,     3,   454,    -1,     4,   405,    -1,     5,
     412,    -1,     6,   416,    -1,     7,   420,    -1,     8,   321,
      -1,   322,    -1,   244,   323,   324,   243,    -1,   344,    -1,
      -1,   323,   273,    -1,   323,   282,    -1,    -1,   324,   325,
      -1,   324,   329,    -1,   324,   334,    -1,   324,   336,    -1,
     324,   338,    -1,   324,   342,    -1,   326,   331,   347,   243,
      -1,   245,    -1,   326,   296,   395,    -1,   326,   275,    -1,
     326,   299,   328,    -1,   326,   274,   327,    -1,   326,   297,
     567,    -1,    -1,   327,   121,    -1,   327,   313,    -1,   327,
     314,    -1,    52,    -1,    53,    -1,    54,    -1,   330,   331,
     347,   243,    -1,   253,    -1,   330,   275,    -1,   330,   297,
     567,    -1,   330,   287,    -1,    -1,   331,   332,    -1,   333,
     347,   243,    -1,   252,    -1,   333,   275,    -1,   333,   298,
     455,    -1,   333,   297,   567,    -1,   333,   286,    -1,   333,
     285,    -1,   335,   347,   243,    -1,   252,    -1,   335,   275,
      -1,   335,   298,   455,    -1,   335,   297,   567,    -1,   335,
     286,    -1,   335,   285,    -1,   337,   347,   243,    -1,   258,
      -1,   337,   275,    -1,   337,   298,   455,    -1,   337,   297,
     567,    -1,   339,   243,    -1,   271,    -1,   339,   275,    -1,
     339,   305,   340,    -1,   339,   290,    -1,   339,   306,   341,
      -1,   339,   276,    -1,   339,   277,    -1,   339,   278,    -1,
     339,   291,    -1,   339,   292,    -1,   339,   293,    -1,   339,
     279,    -1,   339,   280,    -1,   339,   294,    -1,   339,   281,
      -1,   339,   295,    -1,   339,   307,   341,    -1,   339,   273,
      -1,   316,    -1,   317,    -1,   318,    -1,    62,    -1,   121,
      -1,   121,    -1,   341,   121,    -1,   343,   243,    -1,   272,
      -1,   272,   283,    -1,   272,   284,    -1,   272,   283,   284,
      -1,   272,   284,   283,    -1,   308,   345,   347,   243,    -1,
      -1,   345,   310,   346,    -1,   345,   309,    -1,    -1,   346,
     453,    -1,   346,   114,    -1,    -1,   347,   352,    -1,   347,
     344,    -1,   347,   348,    -1,   349,    -1,   351,    -1,   353,
      -1,   357,    -1,   362,    -1,   366,    -1,   364,    -1,   375,
      -1,   377,    -1,   379,    -1,   381,    -1,   383,    -1,   385,
      -1,   387,    -1,   371,    -1,   389,    -1,   391,    -1,   393,
      -1,   350,   347,   243,    -1,   246,    -1,   350,   298,   455,
      -1,   350,   301,   346,    -1,   247,   352,   243,    -1,   311,
      -1,   312,    -1,   354,   356,   243,    -1,   248,    -1,   354,
     298,   455,    -1,   354,   274,   355,    -1,   121,    -1,   313,
      -1,   315,    -1,    -1,   356,   360,    -1,   358,   359,   243,
      -1,   249,    -1,   358,   275,    -1,    -1,   359,   360,    -1,
     361,   347,   243,    -1,   250,    -1,   361,   275,    -1,   361,
     298,   455,    -1,   361,   297,   567,    -1,   361,   285,    -1,
     363,   243,    -1,   251,   298,   455,    -1,   365,   347,   243,
      -1,   257,   300,   455,    -1,   254,   367,   370,   243,    -1,
     368,    -1,   367,   368,    -1,   369,   347,   243,    -1,   255,
     300,   455,    -1,    -1,   256,   347,   243,    -1,   372,   373,
     374,   243,    -1,   265,    -1,   372,   298,   455,    -1,   372,
     303,   346,    -1,   372,   304,   346,    -1,    -1,   266,   347,
     243,    -1,    -1,   267,   347,   243,    -1,   376,   347,   243,
     347,    -1,   258,    -1,   376,   275,    -1,   376,   298,   455,
      -1,   376,   297,   567,    -1,   378,   347,   243,    -1,   259,
      -1,   378,   298,   455,    -1,   380,   347,   243,    -1,   260,
      -1,   380,   275,   346,    -1,   380,   298,   455,    -1,   382,
     347,   243,    -1,   261,    -1,   384,   347,   243,    -1,   262,
      -1,   384,   275,   346,    -1,   384,   302,   346,    -1,   384,
     298,   455,    -1,   384,   301,   346,    -1,   386,   347,   243,
      -1,   263,    -1,   386,   275,   346,    -1,   386,   298,   455,
      -1,   388,   347,   243,    -1,   264,    -1,   388,   275,   346,
      -1,   388,   302,   346,    -1,   390,   243,    -1,   268,    -1,
     390,   298,   455,    -1,   390,   288,    -1,   392,   347,   243,
      -1,   269,    -1,   392,   288,    -1,   392,   289,    -1,   394,
     347,   243,    -1,   270,    -1,   394,   298,   455,    -1,   395,
      12,   396,    -1,   396,    -1,   401,    -1,    36,    -1,   398,
      -1,    36,    -1,    30,    -1,   231,    40,   399,    41,    -1,
     232,    40,   636,    33,   400,    41,    -1,   636,    -1,   526,
      -1,   524,    -1,   526,    -1,   402,    -1,   397,   402,    -1,
     398,    36,   402,    -1,   398,    30,   402,    -1,   401,    36,
     402,    -1,   401,    30,   402,    -1,   403,   404,    -1,   519,
      -1,    70,    19,   519,    -1,    55,    19,   519,    -1,    20,
     519,    -1,    -1,   404,    21,   455,    22,    -1,   421,   406,
      -1,   421,   407,    -1,   406,    -1,   407,    -1,   408,   454,
      -1,   424,   408,    -1,    -1,   408,   409,   428,    -1,   408,
     427,   428,    -1,   408,   429,   428,    -1,   408,   431,   428,
      -1,   408,   445,   428,    -1,   408,   410,   428,    -1,   408,
     639,   428,    -1,   408,   432,   428,    -1,   430,    -1,   439,
      -1,   440,    -1,   447,    -1,   434,    -1,   435,    -1,   436,
      -1,   179,   411,   660,   449,   453,    -1,   179,   411,   660,
     449,   151,   567,   453,    -1,   179,   411,   660,   449,   174,
      -1,   179,   411,   660,   449,   151,   567,   174,    -1,   191,
      -1,   192,    -1,   421,   413,    -1,   421,   414,    -1,   413,
      -1,   414,    -1,   415,   454,    -1,   424,   415,    -1,    -1,
     415,   409,   428,    -1,   415,   427,   428,    -1,   415,   429,
     428,    -1,   415,   431,   428,    -1,   415,   445,   428,    -1,
     415,   410,   428,    -1,   415,   639,   428,    -1,   415,   432,
     428,    -1,   415,   433,   428,    -1,   421,   417,    -1,   421,
     418,    -1,   417,    -1,   418,    -1,   419,   454,    -1,   424,
     419,    -1,    -1,   419,   426,   428,    -1,   419,   427,   428,
      -1,   419,   429,   428,    -1,   419,   431,   428,    -1,   419,
     445,   428,    -1,   419,   448,   428,    -1,   419,   639,   428,
      -1,   419,   432,   428,    -1,   421,   422,    -1,   421,   423,
      -1,   422,    -1,   423,    -1,   185,   186,   124,   428,    -1,
     185,   186,   124,   175,   124,   428,    -1,   425,   454,    -1,
     424,   425,    -1,   189,   172,   637,    37,   588,   428,    -1,
      -1,   425,   426,   428,    -1,   425,   427,   428,    -1,   425,
     429,   428,    -1,   425,   431,   428,    -1,   425,   445,   428,
      -1,   425,   448,   428,    -1,   425,   639,   428,    -1,   425,
     432,   428,    -1,   425,   433,   428,    -1,   430,    -1,   439,
      -1,   440,    -1,   447,    -1,   434,    -1,   435,    -1,   623,
      -1,   436,    -1,   441,    -1,   444,    -1,    50,    -1,   179,
     172,   637,    37,   588,    -1,   179,    64,   170,    -1,   179,
      64,   171,    -1,   179,   182,   190,   172,   588,    -1,   179,
     182,   411,   172,   588,    -1,   179,   184,   659,   124,    -1,
     179,    65,   606,    -1,   179,   181,   119,    -1,   179,   181,
     120,    -1,   179,   182,   137,   141,   142,    -1,   179,   182,
     137,   141,   143,    -1,   179,   183,   437,    33,   438,    -1,
     170,    -1,   176,    -1,   177,    -1,   178,    -1,   179,   182,
     144,   588,    -1,   179,    66,   588,    -1,   187,   188,   443,
     588,   442,    -1,   187,   188,   588,   442,    -1,    -1,   113,
     588,    -1,   442,    33,   588,    -1,   172,   637,    37,    -1,
     182,   190,   172,    -1,   187,   189,   172,   637,    37,   588,
     442,    -1,   187,   189,   588,   442,    -1,   179,   125,     9,
     527,   566,   446,    -1,    10,   456,    -1,   174,    -1,   179,
     180,   170,    -1,   179,   180,   171,    -1,   179,   450,   411,
     660,   449,   453,    -1,   179,   450,   411,   660,   449,   151,
     567,   453,    -1,   179,   450,   411,   660,   449,   174,    -1,
     179,   450,   411,   660,   449,   151,   567,   174,    -1,    40,
      41,    -1,    40,   451,    41,    -1,    -1,   230,    -1,   451,
      33,   452,    -1,   452,    -1,     9,   527,   566,    -1,    48,
     455,    49,    -1,   455,    -1,   455,    33,   456,    -1,   456,
      -1,   457,    -1,   477,    -1,   480,    -1,   484,    -1,   624,
      -1,   626,    -1,   629,    -1,   628,    -1,   630,    -1,   485,
      -1,   645,    -1,   646,    -1,   458,   130,   456,    -1,   459,
      -1,   458,   471,    -1,   458,   460,    -1,   461,    -1,   466,
      -1,   459,    -1,   469,    -1,   470,    -1,   131,   462,    -1,
     462,    33,   463,    -1,   463,    -1,     9,   527,   566,   464,
     465,   132,   456,    -1,    -1,   113,     9,   527,    -1,    -1,
     193,     9,   527,    -1,   133,   467,    -1,   467,    33,   468,
      -1,   468,    -1,     9,   527,   566,    10,   456,    -1,   193,
       9,   527,    10,   456,    -1,   134,   456,    -1,   135,     9,
     527,    -1,   137,   136,   472,    -1,   138,   137,   136,   472,
      -1,   472,    33,   473,    -1,   473,    -1,   474,   475,   476,
      -1,   474,   475,   476,   144,   588,    -1,   456,    -1,    -1,
     139,    -1,   140,    -1,    -1,   141,   142,    -1,   141,   143,
      -1,   145,   478,   147,   456,    -1,   146,   478,   147,   456,
      -1,   478,    33,   479,    -1,   479,    -1,     9,   527,   566,
     132,   456,    -1,   148,    40,   455,    41,   481,   482,    -1,
     481,   483,    -1,   483,    -1,   182,     9,   527,   130,   456,
      -1,   182,   130,   456,    -1,   149,   567,   130,   456,    -1,
     149,     9,   527,   151,   567,   130,   456,    -1,   152,    40,
     455,    41,   153,   456,   154,   456,    -1,   485,   155,   486,
      -1,   486,    -1,   486,   156,   487,    -1,   487,    -1,   489,
      37,   489,    -1,   489,    13,   489,    -1,    -1,   489,    24,
     488,   489,    -1,   489,    14,   489,    -1,   489,    15,   489,
      -1,   489,    16,   489,    -1,   489,   107,   489,    -1,   489,
     108,   489,    -1,   489,   109,   489,    -1,   489,   110,   489,
      -1,   489,   111,   489,    -1,   489,   112,   489,    -1,   489,
     169,   489,    -1,   489,    17,   489,    -1,   489,    18,   489,
      -1,   489,    -1,   490,   194,    62,   589,    -1,   490,   194,
      62,   589,   622,    -1,   490,    -1,   491,   160,   491,    -1,
     491,    -1,   491,    34,   492,    -1,   491,    35,   492,    -1,
     492,    -1,   492,    11,   493,    -1,   492,   161,   493,    -1,
     492,    69,   493,    -1,   492,   162,   493,    -1,   493,    -1,
     493,    12,   494,    -1,   493,   163,   494,    -1,   494,    -1,
     494,   164,   495,    -1,   494,   165,   495,    -1,   495,    -1,
     496,   157,   158,   567,    -1,   496,    -1,   497,   168,   151,
     567,    -1,   497,    -1,   498,   159,   151,   564,    -1,   498,
      -1,   499,   167,   151,   564,    -1,   499,    -1,    35,   499,
      -1,    34,   499,    -1,   500,    -1,   501,    -1,   506,    -1,
     502,    -1,   166,    48,   455,    49,    -1,   166,    67,    48,
     455,    49,    -1,   166,    68,    48,   455,    49,    -1,   503,
      48,    49,    -1,   503,    48,   455,    49,    -1,   504,    -1,
     503,   504,    -1,    32,   540,   659,   505,    -1,   129,    -1,
     104,   129,    -1,   507,    -1,   507,   508,    -1,    30,   508,
      -1,   508,    -1,    36,    -1,   508,    36,   509,    -1,   508,
      30,   509,    -1,   509,    -1,   510,    -1,   522,    -1,   511,
      -1,   512,    -1,   513,    -1,   511,    21,   455,    22,    -1,
     516,    -1,   512,    21,   455,    22,    -1,   514,   519,    -1,
     515,    -1,    70,    19,    -1,    71,    19,    -1,    55,    19,
      -1,    72,    19,    -1,    73,    19,    -1,    74,    19,    -1,
      75,    19,    -1,   172,    19,    -1,    20,   519,    -1,   519,
      -1,   517,   519,    -1,   518,    -1,    76,    19,    -1,    77,
      19,    -1,    78,    19,    -1,    79,    19,    -1,    80,    19,
      -1,    39,    -1,   571,    -1,   520,    -1,   638,    -1,   521,
      -1,    11,    -1,   126,    -1,   127,    -1,   523,    -1,   522,
      21,   455,    22,    -1,   653,    -1,   524,    -1,   526,    -1,
     528,    -1,   529,    -1,   532,    -1,   535,    -1,   530,    -1,
     531,    -1,   650,    -1,   525,    -1,   636,    -1,   633,    -1,
     634,    -1,   635,    -1,     9,   527,    -1,   659,    -1,    40,
     455,    41,    -1,    40,    41,    -1,    38,    -1,   119,    48,
     455,    49,    -1,   120,    48,   455,    49,    -1,   660,    40,
      41,    -1,   660,    40,   533,    41,    -1,   533,    33,   534,
      -1,   534,    -1,   456,    -1,    23,    -1,   536,    -1,   552,
      -1,   537,    -1,   548,    -1,   550,    -1,    24,   538,   539,
     540,    42,    -1,    24,   538,   539,   540,    25,   547,    31,
     538,   540,    26,    -1,   121,    -1,   122,    -1,    -1,   539,
     104,   121,   540,    43,   540,   541,    -1,   539,   104,   122,
     540,    43,   540,   542,    -1,    -1,   104,    -1,    44,   543,
      45,    -1,    46,   545,    47,    -1,    44,   544,    45,    -1,
      46,   546,    47,    -1,    -1,   543,   453,    -1,   543,   114,
      -1,    -1,   544,   453,    -1,   544,   114,    -1,    -1,   545,
     453,    -1,   545,   115,    -1,    -1,   546,   453,    -1,   546,
     115,    -1,    -1,   547,   536,    -1,   547,   453,    -1,   547,
     117,    -1,   547,   116,    -1,    28,   549,    29,    -1,    -1,
     106,    -1,    27,   128,   551,    -1,   105,    -1,   104,   105,
      -1,   553,    -1,   554,    -1,   557,    -1,   559,    -1,   560,
      -1,   561,    -1,    81,    48,   455,    49,    -1,   190,   555,
     556,    -1,   123,    -1,    48,   455,    49,    -1,    48,    49,
      -1,    48,   455,    49,    -1,    55,   558,   556,    -1,   123,
      -1,    48,   455,    49,    -1,    62,    48,   455,    49,    -1,
      56,    48,   455,    49,    -1,    59,   562,   563,    -1,   123,
      -1,    48,   455,    49,    -1,    48,    49,    -1,    48,   455,
      49,    -1,   570,   565,    -1,    -1,    23,    -1,    -1,   151,
     567,    -1,   569,   568,    -1,    63,    40,    41,    -1,    -1,
      11,    -1,    34,    -1,    23,    -1,   570,    -1,   173,    40,
      41,    -1,   571,    -1,   654,    -1,   658,    -1,   638,    -1,
     573,    -1,   581,    -1,   577,    -1,   583,    -1,   579,    -1,
     576,    -1,   575,    -1,   574,    -1,   572,    -1,    58,    40,
      41,    -1,    57,    40,    41,    -1,    57,    40,   581,    41,
      -1,    57,    40,   583,    41,    -1,    62,    40,    41,    -1,
      56,    40,    41,    -1,    59,    40,    41,    -1,    59,    40,
     637,    41,    -1,    59,    40,   124,    41,    -1,    55,    40,
      41,    -1,    55,    40,   578,    41,    -1,    55,    40,   578,
      33,   587,    41,    -1,   585,    -1,    11,    -1,    60,    40,
     580,    41,    -1,   585,    -1,   190,    40,    41,    -1,   190,
      40,   582,    41,    -1,   190,    40,   582,    33,   587,    41,
      -1,   190,    40,   582,    33,   587,    23,    41,    -1,   586,
      -1,    11,    -1,    61,    40,   584,    41,    -1,   586,    -1,
     638,    -1,   638,    -1,   638,    -1,   124,    -1,   592,   591,
     590,    -1,    -1,   195,   490,    -1,    -1,   591,   603,    -1,
     592,   240,   593,    -1,   593,    -1,   593,   241,   594,    -1,
     594,    -1,   594,    82,   132,   595,    -1,   595,    -1,   242,
     596,    -1,   596,    -1,   597,    -1,   597,   606,    -1,   598,
     601,    -1,    40,   589,    41,    -1,   599,    -1,   524,   600,
      -1,    48,   455,    49,   600,    -1,   503,    48,    49,    -1,
     503,    48,   589,    49,    -1,    -1,   207,    -1,   207,    96,
      -1,   208,    -1,   208,   212,    -1,   209,    -1,    -1,   198,
     602,   199,    -1,   210,   491,    -1,   118,   143,   491,    -1,
     118,   100,   491,    -1,   211,   491,   160,   491,    -1,   119,
      -1,   196,   491,   604,    -1,   197,   602,   604,    -1,   200,
     605,    -1,   201,   605,    -1,   113,    98,    -1,   113,    99,
      -1,    94,    95,    -1,   212,    -1,   213,    -1,   214,    -1,
     215,    -1,   216,    -1,    83,   607,    -1,   606,    83,   607,
      -1,   619,    -1,   620,    -1,   611,    -1,   610,    -1,   608,
      -1,   609,    -1,   614,    -1,   621,    -1,   150,    86,    -1,
     150,    85,    -1,   202,    -1,   203,    -1,    87,    86,    -1,
      87,    85,    -1,    90,    -1,    84,    90,    -1,    91,   613,
      -1,    91,   182,    -1,    91,    40,   613,   612,    41,    -1,
      91,    40,   182,   612,    41,    -1,    84,    91,    -1,    -1,
     612,    33,   613,    -1,   113,   588,    -1,   113,   588,   204,
     636,    -1,   113,   588,   602,   205,    -1,   113,   588,   204,
     636,   602,   205,    -1,    92,   212,   616,   615,    -1,    84,
      92,   212,    -1,    92,   212,   182,   615,    -1,    -1,   615,
     618,    -1,   113,   588,    -1,    40,   617,    41,    -1,   636,
      -1,   617,    33,   636,    -1,   163,   616,    -1,   165,   616,
      -1,   206,   636,    -1,    93,    -1,    84,    93,    -1,   184,
     659,   124,    -1,    89,    95,   493,    -1,   179,   223,    68,
      -1,   179,   223,    67,    -1,   179,   223,   101,    -1,   625,
     456,   151,   219,   229,   456,    -1,   625,   456,   151,   227,
     229,   456,    -1,   625,   456,   229,   456,    -1,   625,   456,
     222,   456,    -1,   625,   456,   221,   456,    -1,   220,    58,
      -1,   220,   225,    -1,   627,   456,    -1,   228,    58,    -1,
     228,   225,    -1,   217,   103,   158,    58,   456,   224,   456,
      -1,   217,    58,   456,   224,   456,    -1,   226,    58,   456,
     151,   456,    -1,   102,   631,   218,   456,   130,   456,    -1,
     631,    33,   632,    -1,   632,    -1,     9,   527,    10,   456,
      -1,    52,    -1,    53,    -1,    54,    -1,   124,    -1,   659,
      -1,   659,    -1,   179,   233,   235,   659,   453,    -1,   179,
     233,   235,   659,   641,   640,   453,    -1,   179,   233,   235,
     659,   642,   234,   395,   453,    -1,   179,   233,   235,   659,
     642,   234,   395,   641,   640,   453,    -1,   179,   233,   642,
     234,   395,   453,    -1,   179,   233,   642,   234,   395,   641,
     640,   453,    -1,    -1,   151,   567,    -1,    40,    41,    -1,
      40,   451,    41,    -1,    -1,   239,   643,    -1,   644,    -1,
     643,    33,   644,    -1,   121,    -1,   313,    -1,   314,    -1,
     236,   233,   659,    -1,   236,   233,   659,   224,    40,   648,
      41,    -1,   237,   238,   456,    -1,   237,   238,   456,   224,
      40,   648,    41,    -1,   237,   238,   456,   239,   647,    -1,
     237,   238,   456,   239,   647,   224,    40,   648,    41,    -1,
     659,    -1,   313,    -1,   315,    -1,   649,    -1,   648,    33,
     649,    -1,     9,   527,   566,    10,   456,    -1,   651,    -1,
     652,    -1,   660,    51,    52,    -1,   192,   449,   566,   453,
      -1,   522,    40,    41,    -1,   522,    40,   533,    41,    -1,
     655,    -1,   656,    -1,   192,    40,    11,    41,    -1,   192,
      40,    41,   151,   567,    -1,   192,    40,   657,    41,   151,
     567,    -1,   567,    -1,   657,    33,   567,    -1,    40,   569,
      41,    -1,   660,    -1,    55,    -1,    56,    -1,    57,    -1,
     190,    -1,   173,    -1,   152,    -1,    58,    -1,    59,    -1,
      60,    -1,    61,    -1,    62,    -1,   148,    -1,    63,    -1,
     192,    -1,   121,    -1,    64,    -1,    65,    -1,    66,    -1,
      67,    -1,    68,    -1,    69,    -1,    70,    -1,    71,    -1,
      72,    -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,
      77,    -1,    78,    -1,    79,    -1,    80,    -1,    81,    -1,
      82,    -1,    85,    -1,    86,    -1,    87,    -1,    88,    -1,
      90,    -1,    91,    -1,    92,    -1,    93,    -1,    94,    -1,
      95,    -1,    96,    -1,    97,    -1,    98,    -1,    99,    -1,
     100,    -1,   101,    -1,   102,    -1,   103,    -1,   107,    -1,
     108,    -1,   109,    -1,   110,    -1,   111,    -1,   112,    -1,
     113,    -1,   125,    -1,   130,    -1,   131,    -1,   132,    -1,
     133,    -1,   134,    -1,   136,    -1,   137,    -1,   138,    -1,
     139,    -1,   140,    -1,   141,    -1,   142,    -1,   143,    -1,
     144,    -1,   145,    -1,   146,    -1,   147,    -1,   149,    -1,
     151,    -1,   153,    -1,   154,    -1,   155,    -1,   156,    -1,
     157,    -1,   158,    -1,   159,    -1,   160,    -1,   161,    -1,
     162,    -1,   163,    -1,   164,    -1,   165,    -1,   166,    -1,
     167,    -1,   168,    -1,   169,    -1,   170,    -1,   171,    -1,
     172,    -1,   174,    -1,   175,    -1,   176,    -1,   177,    -1,
     178,    -1,   179,    -1,   180,    -1,   181,    -1,   182,    -1,
     183,    -1,   184,    -1,   186,    -1,   187,    -1,   188,    -1,
     191,    -1,   193,    -1,    83,    -1,    84,    -1,   194,    -1,
     195,    -1,   196,    -1,   197,    -1,   198,    -1,   199,    -1,
     200,    -1,   201,    -1,   202,    -1,   203,    -1,   204,    -1,
     205,    -1,   206,    -1,   207,    -1,   208,    -1,   209,    -1,
     210,    -1,   211,    -1,   212,    -1,   213,    -1,   214,    -1,
     215,    -1,   216,    -1,   217,    -1,   218,    -1,   219,    -1,
     220,    -1,   221,    -1,   222,    -1,   223,    -1,   224,    -1,
     225,    -1,   226,    -1,   227,    -1,   228,    -1,   229,    -1,
     230,    -1,   119,    -1,   120,    -1,   231,    -1,   232,    -1,
     233,    -1,   234,    -1,   235,    -1,   236,    -1,   237,    -1,
     238,    -1,   239,    -1,   240,    -1,   241,    -1,   242,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   749,   749,   751,   752,   753,   754,   756,   763,   793,
     796,   817,   819,   823,   830,   832,   833,   834,   835,   836,
     837,   841,   860,   864,   869,   876,   881,   886,   895,   898,
     904,   909,   916,   916,   916,   919,   932,   936,   943,   948,
     957,   960,   968,   995,   999,  1006,  1012,  1017,  1022,  1031,
    1055,  1059,  1066,  1071,  1076,  1081,  1092,  1110,  1114,  1121,
    1126,  1134,  1159,  1162,  1165,  1168,  1171,  1174,  1177,  1180,
    1183,  1186,  1189,  1192,  1195,  1198,  1201,  1204,  1207,  1210,
    1216,  1217,  1218,  1219,  1220,  1232,  1235,  1240,  1243,  1248,
    1253,  1261,  1269,  1280,  1291,  1294,  1301,  1311,  1314,  1319,
    1330,  1333,  1338,  1343,  1351,  1352,  1353,  1354,  1355,  1356,
    1357,  1358,  1359,  1360,  1361,  1362,  1363,  1364,  1365,  1366,
    1367,  1368,  1372,  1390,  1394,  1399,  1408,  1414,  1414,  1417,
    1437,  1441,  1446,  1454,  1459,  1463,  1471,  1474,  1482,  1495,
    1499,  1510,  1513,  1521,  1539,  1543,  1550,  1555,  1560,  1568,
    1574,  1582,  1590,  1597,  1611,  1615,  1629,  1638,  1646,  1649,
    1656,  1691,  1695,  1700,  1706,  1716,  1719,  1727,  1730,  1737,
    1755,  1759,  1766,  1771,  1779,  1797,  1801,  1809,  1831,  1835,
    1842,  1850,  1859,  1867,  1904,  1908,  1915,  1922,  1931,  1940,
    1967,  1971,  1978,  1990,  2016,  2020,  2027,  2037,  2049,  2053,
    2058,  2067,  2080,  2084,  2089,  2098,  2112,  2116,  2129,  2134,
    2146,  2150,  2158,  2171,  2179,  2192,  2199,  2213,  2213,  2216,
    2216,  2238,  2242,  2246,  2264,  2282,  2292,  2306,  2314,  2320,
    2326,  2332,  2344,  2347,  2361,  2362,  2363,  2364,  2368,  2371,
    2375,  2377,  2381,  2385,  2389,  2393,  2397,  2403,  2409,  2423,
    2424,  2425,  2426,  2427,  2428,  2429,  2435,  2439,  2443,  2447,
    2453,  2453,  2460,  2461,  2462,  2463,  2467,  2470,  2474,  2476,
    2480,  2484,  2488,  2492,  2496,  2502,  2508,  2512,  2523,  2524,
    2525,  2526,  2530,  2533,  2537,  2539,  2543,  2547,  2551,  2555,
    2559,  2565,  2571,  2582,  2583,  2584,  2585,  2590,  2595,  2617,
    2620,  2624,  2636,  2638,  2642,  2646,  2650,  2654,  2658,  2664,
    2670,  2674,  2688,  2689,  2690,  2691,  2692,  2693,  2694,  2695,
    2699,  2699,  2702,  2706,  2714,  2719,  2728,  2733,  2742,  2802,
    2810,  2815,  2824,  2829,  2838,  2848,  2852,  2860,  2864,  2872,
    2888,  2897,  2909,  2918,  2921,  2926,  2935,  2939,  2947,  2957,
    2969,  2976,  2980,  2988,  2993,  3003,  3007,  3011,  3015,  3022,
    3026,  3033,  3036,  3044,  3049,  3059,  3067,  3075,  3088,  3103,
    3110,  3111,  3112,  3113,  3114,  3115,  3116,  3117,  3118,  3119,
    3120,  3121,  3126,  3170,  3171,  3184,  3191,  3191,  3194,  3194,
    3194,  3199,  3206,  3210,  3214,  3226,  3229,  3240,  3243,  3253,
    3260,  3264,  3268,  3272,  3285,  3293,  3301,  3306,  3314,  3318,
    3324,  3331,  3346,  3363,  3366,  3370,  3378,  3386,  3390,  3399,
    3407,  3418,  3422,  3426,  3437,  3444,  3449,  3457,  3461,  3469,
    3473,  3481,  3489,  3498,  3503,  3512,  3522,  3526,  3530,  3530,
    3534,  3538,  3542,  3546,  3550,  3554,  3558,  3562,  3566,  3570,
    3574,  3578,  3582,  3587,  3591,  3595,  3600,  3604,  3609,  3613,
    3617,  3622,  3626,  3630,  3634,  3638,  3643,  3647,  3651,  3656,
    3660,  3664,  3669,  3673,  3678,  3683,  3688,  3692,  3697,  3701,
    3706,  3712,  3718,  3723,  3724,  3725,  3733,  3737,  3741,  3749,
    3756,  3765,  3765,  3769,  3789,  3790,  3798,  3799,  3805,  3826,
    3830,  3844,  3850,  3863,  3867,  3867,  3871,  3872,  3881,  3882,
    3888,  3889,  3898,  3910,  3921,  3925,  3929,  3933,  3937,  3941,
    3945,  3949,  3957,  3965,  3982,  3990,  3999,  4003,  4007,  4011,
    4015,  4023,  4035,  4040,  4045,  4052,  4057,  4064,  4071,  4083,
    4084,  4088,  4094,  4095,  4096,  4097,  4098,  4099,  4100,  4101,
    4102,  4106,  4106,  4109,  4109,  4109,  4113,  4120,  4124,  4128,
    4136,  4144,  4154,  4164,  4168,  4175,  4180,  4190,  4191,  4200,
    4204,  4213,  4213,  4213,  4217,  4223,  4232,  4232,  4237,  4240,
    4249,  4260,  4260,  4265,  4269,  4276,  4280,  4291,  4294,  4299,
    4310,  4313,  4317,  4331,  4334,  4339,  4350,  4353,  4357,  4375,
    4378,  4383,  4388,  4395,  4408,  4422,  4425,  4430,  4449,  4450,
    4463,  4464,  4465,  4466,  4467,  4468,  4473,  4481,  4489,  4493,
    4501,  4505,  4514,  4521,  4525,  4533,  4541,  4549,  4556,  4566,
    4573,  4577,  4585,  4596,  4599,  4608,  4611,  4621,  4628,  4638,
    4639,  4641,  4643,  4649,  4653,  4657,  4658,  4659,  4663,  4675,
    4676,  4677,  4678,  4679,  4680,  4681,  4682,  4683,  4688,  4696,
    4700,  4705,  4714,  4722,  4730,  4734,  4738,  4746,  4750,  4754,
    4762,  4763,  4771,  4779,  4784,  4788,  4792,  4796,  4805,  4806,
    4814,  4821,  4824,  4827,  4830,  4834,  4846,  4862,  4864,  4871,
    4874,  4883,  4895,  4900,  4912,  4917,  4921,  4926,  4931,  4936,
    4937,  4946,  4951,  4955,  4961,  4965,  4973,  4978,  4988,  4991,
    4995,  4999,  5003,  5007,  5015,  5017,  5028,  5034,  5040,  5046,
    5061,  5065,  5069,  5073,  5077,  5081,  5085,  5089,  5097,  5101,
    5105,  5113,  5117,  5125,  5126,  5138,  5139,  5140,  5141,  5142,
    5143,  5144,  5145,  5153,  5157,  5161,  5165,  5174,  5178,  5186,
    5190,  5200,  5204,  5208,  5212,  5216,  5224,  5226,  5233,  5237,
    5241,  5245,  5255,  5259,  5263,  5271,  5273,  5281,  5285,  5292,
    5296,  5304,  5308,  5316,  5324,  5328,  5336,  5343,  5351,  5356,
    5361,  5373,  5377,  5381,  5385,  5389,  5395,  5395,  5400,  5406,
    5406,  5411,  5415,  5425,  5433,  5440,  5445,  5453,  5462,  5474,
    5486,  5499,  5510,  5519,  5531,  5535,  5539,  5544,  5549,  5554,
    5563,  5566,  5574,  5578,  5586,  5590,  5598,  5603,  5612,  5616,
    5620,  5628,  5632,  5640,  5644,  5648,  5652,  5660,  5664,  5668,
    5676,  5681,  5691,  5704,  5704,  5708,  5716,  5726,  5731,  5739,
    5739,  5743,  5751,  5755,  5762,  5767,  5776,  5785,  5785,  5785,
    5785,  5785,  5785,  5785,  5785,  5786,  5786,  5786,  5786,  5786,
    5786,  5787,  5791,  5791,  5791,  5791,  5791,  5791,  5791,  5791,
    5791,  5791,  5792,  5792,  5792,  5792,  5792,  5792,  5792,  5793,
    5793,  5793,  5793,  5793,  5793,  5793,  5793,  5794,  5794,  5794,
    5794,  5794,  5794,  5794,  5794,  5794,  5794,  5794,  5795,  5795,
    5795,  5795,  5795,  5795,  5795,  5795,  5795,  5795,  5795,  5795,
    5796,  5796,  5796,  5796,  5796,  5796,  5796,  5796,  5796,  5796,
    5797,  5797,  5797,  5797,  5797,  5797,  5797,  5797,  5797,  5797,
    5797,  5797,  5798,  5798,  5798,  5798,  5798,  5798,  5798,  5798,
    5798,  5798,  5798,  5798,  5799,  5799,  5799,  5799,  5799,  5799,
    5799,  5799,  5799,  5800,  5800,  5800,  5800,  5800,  5800,  5800,
    5800,  5801,  5801,  5801,  5801,  5801,  5801,  5801,  5801,  5801,
    5801,  5801,  5802,  5802,  5802,  5802,  5802,  5802,  5802,  5802,
    5802,  5803,  5803,  5803,  5803,  5803,  5803,  5803,  5803,  5803,
    5803,  5804,  5804,  5804,  5804,  5804,  5804,  5804,  5804,  5804,
    5804,  5804,  5805,  5805,  5805,  5805,  5805,  5805,  5805,  5805,
    5805,  5805,  5805,  5806,  5806,  5806
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
  "LetBindingList", "LetBinding", "WhereClause", "CountClause",
  "OrderByClause", "OrderSpecList", "OrderSpec", "OrderExpr",
  "OrderDirection", "EmptyHandling", "QuantifiedExpr",
  "QuantifyBindingList", "QuantifyBinding", "TypeswitchExpr",
  "CaseClauseList", "DefaultCase", "CaseClause", "IfExpr", "OrExpr",
  "AndExpr", "ComparisonExpr", "$@1", "FTContainsExpr", "RangeExpr",
  "AdditiveExpr", "MultiplicativeExpr", "UnionExpr", "IntersectExceptExpr",
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
     565,   566,   567,   568,   569,   570,   571,   572,   573
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   319,   320,   320,   320,   320,   320,   320,   321,   322,
     322,   323,   323,   323,   324,   324,   324,   324,   324,   324,
     324,   325,   326,   326,   326,   326,   326,   326,   327,   327,
     327,   327,   328,   328,   328,   329,   330,   330,   330,   330,
     331,   331,   332,   333,   333,   333,   333,   333,   333,   334,
     335,   335,   335,   335,   335,   335,   336,   337,   337,   337,
     337,   338,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     340,   340,   340,   340,   340,   341,   341,   342,   343,   343,
     343,   343,   343,   344,   345,   345,   345,   346,   346,   346,
     347,   347,   347,   347,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   349,   350,   350,   350,   351,   352,   352,   353,
     354,   354,   354,   355,   355,   355,   356,   356,   357,   358,
     358,   359,   359,   360,   361,   361,   361,   361,   361,   362,
     363,   364,   365,   366,   367,   367,   368,   369,   370,   370,
     371,   372,   372,   372,   372,   373,   373,   374,   374,   375,
     376,   376,   376,   376,   377,   378,   378,   379,   380,   380,
     380,   381,   382,   383,   384,   384,   384,   384,   384,   385,
     386,   386,   386,   387,   388,   388,   388,   389,   390,   390,
     390,   391,   392,   392,   392,   393,   394,   394,   395,   395,
     396,   396,   396,   397,   397,   398,   398,   399,   399,   400,
     400,   401,   401,   401,   401,   401,   401,   402,   403,   403,
     403,   403,   404,   404,   405,   405,   405,   405,   406,   407,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   409,
     409,   409,   409,   409,   409,   409,   410,   410,   410,   410,
     411,   411,   412,   412,   412,   412,   413,   414,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   416,   416,
     416,   416,   417,   418,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   420,   420,   420,   420,   421,   421,   422,
     423,   424,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   426,   426,   426,   426,   426,   426,   426,   426,
     427,   427,   428,   429,   430,   430,   431,   431,   432,   433,
     434,   434,   435,   435,   436,   437,   437,   438,   438,   439,
     440,   441,   441,   442,   442,   442,   443,   443,   444,   444,
     445,   446,   446,   447,   447,   448,   448,   448,   448,   449,
     449,   450,   450,   451,   451,   452,   453,   454,   455,   455,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   457,   458,   458,   458,   459,   459,   460,   460,
     460,   461,   462,   462,   463,   464,   464,   465,   465,   466,
     467,   467,   468,   468,   469,   470,   471,   471,   472,   472,
     473,   473,   474,   475,   475,   475,   476,   476,   476,   477,
     477,   478,   478,   479,   480,   481,   481,   482,   482,   483,
     483,   484,   485,   485,   486,   486,   487,   487,   488,   487,
     487,   487,   487,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   487,   489,   489,   489,   490,   490,   491,   491,
     491,   492,   492,   492,   492,   492,   493,   493,   493,   494,
     494,   494,   495,   495,   496,   496,   497,   497,   498,   498,
     499,   499,   499,   500,   500,   500,   501,   501,   501,   502,
     502,   503,   503,   504,   505,   505,   506,   506,   506,   506,
     507,   508,   508,   508,   509,   509,   510,   510,   511,   511,
     512,   512,   513,   513,   514,   514,   514,   514,   514,   514,
     514,   514,   515,   515,   516,   516,   517,   517,   517,   517,
     517,   518,   519,   519,   520,   520,   521,   521,   521,   522,
     522,   522,   523,   523,   523,   523,   523,   523,   523,   523,
     523,   524,   524,   525,   525,   525,   526,   527,   528,   528,
     529,   530,   531,   532,   532,   533,   533,   534,   534,   535,
     535,   536,   536,   536,   537,   537,   538,   538,   539,   539,
     539,   540,   540,   541,   541,   542,   542,   543,   543,   543,
     544,   544,   544,   545,   545,   545,   546,   546,   546,   547,
     547,   547,   547,   547,   548,   549,   549,   550,   551,   551,
     552,   552,   552,   552,   552,   552,   553,   554,   555,   555,
     556,   556,   557,   558,   558,   559,   560,   561,   562,   562,
     563,   563,   564,   565,   565,   566,   566,   567,   567,   568,
     568,   568,   568,   569,   569,   569,   569,   569,   570,   571,
     571,   571,   571,   571,   571,   571,   571,   571,   572,   573,
     573,   573,   574,   575,   576,   576,   576,   577,   577,   577,
     578,   578,   579,   580,   581,   581,   581,   581,   582,   582,
     583,   584,   585,   586,   587,   588,   589,   590,   590,   591,
     591,   592,   592,   593,   593,   594,   594,   595,   595,   596,
     596,   597,   597,   597,   598,   598,   599,   599,   600,   600,
     600,   600,   600,   600,   601,   601,   602,   602,   602,   602,
     603,   603,   603,   603,   603,   603,   603,   603,   604,   604,
     604,   605,   605,   606,   606,   607,   607,   607,   607,   607,
     607,   607,   607,   608,   608,   608,   608,   609,   609,   610,
     610,   611,   611,   611,   611,   611,   612,   612,   613,   613,
     613,   613,   614,   614,   614,   615,   615,   616,   616,   617,
     617,   618,   618,   619,   620,   620,   621,   622,   623,   623,
     623,   624,   624,   624,   624,   624,   625,   625,   626,   627,
     627,   628,   628,   629,   630,   631,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   639,   639,   639,   639,   639,
     640,   640,   641,   641,   642,   642,   643,   643,   644,   644,
     644,   645,   645,   646,   646,   646,   646,   647,   647,   647,
     648,   648,   649,   650,   650,   651,   652,   653,   653,   654,
     654,   655,   656,   656,   657,   657,   658,   659,   659,   659,
     659,   659,   659,   659,   659,   659,   659,   659,   659,   659,
     659,   659,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660
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
       1,     2,     3,     1,     7,     0,     3,     0,     3,     2,
       3,     1,     5,     5,     2,     3,     3,     4,     3,     1,
       3,     5,     1,     0,     1,     1,     0,     2,     2,     4,
       4,     3,     1,     5,     6,     2,     1,     5,     3,     4,
       7,     8,     3,     1,     3,     1,     3,     3,     0,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     4,     5,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     4,     1,     4,     1,     4,     1,     4,     1,
       2,     2,     1,     1,     1,     1,     4,     5,     5,     3,
       4,     1,     2,     4,     1,     2,     1,     2,     2,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     4,
       1,     4,     2,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     1,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     2,
       1,     4,     4,     3,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     5,    10,     1,     1,     0,     7,
       7,     0,     1,     3,     3,     3,     3,     0,     2,     2,
       0,     2,     2,     0,     2,     2,     0,     2,     2,     0,
       2,     2,     2,     2,     3,     0,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     4,     3,     1,     3,
       2,     3,     3,     1,     3,     4,     4,     3,     1,     3,
       2,     3,     2,     0,     1,     0,     2,     2,     3,     0,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       4,     4,     3,     3,     3,     4,     4,     3,     4,     6,
       1,     1,     4,     1,     3,     4,     6,     7,     1,     1,
       4,     1,     1,     1,     1,     1,     3,     0,     2,     0,
       2,     3,     1,     3,     1,     4,     1,     2,     1,     1,
       2,     2,     3,     1,     2,     4,     3,     4,     0,     1,
       2,     1,     2,     1,     0,     3,     2,     3,     3,     4,
       1,     3,     3,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     2,     2,     1,
       2,     2,     2,     5,     5,     2,     0,     3,     2,     4,
       4,     6,     4,     3,     4,     0,     2,     2,     3,     1,
       3,     2,     2,     2,     1,     2,     3,     3,     3,     3,
       3,     6,     6,     4,     4,     4,     2,     2,     2,     2,
       2,     7,     5,     5,     6,     3,     1,     4,     1,     1,
       1,     1,     1,     1,     5,     7,     8,    10,     6,     8,
       0,     2,     2,     3,     0,     2,     1,     3,     1,     1,
       1,     3,     7,     3,     7,     5,     9,     1,     1,     1,
       1,     3,     5,     1,     1,     3,     4,     3,     4,     1,
       1,     4,     5,     6,     1,     3,     3,     1,     1,     1,
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
       0,     0,   240,   268,   284,   302,     0,     0,     0,   536,
       0,     0,     0,   605,     0,   581,     0,     0,   500,   560,
     531,     0,   798,   799,   800,   848,   849,   850,   854,   855,
     856,   857,   858,   860,   863,   864,   865,   866,   867,   868,
     869,   870,   871,   872,   873,   874,   875,   876,   877,   878,
     879,   880,   881,   963,   964,   882,   883,   884,   885,   886,
     887,   888,   889,   890,   891,   892,   893,   894,   895,   896,
     897,   898,   899,   900,   901,   902,   903,   904,   905,   906,
    1002,  1003,   862,   801,   907,   537,   538,   908,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   918,   919,   920,
     921,   922,   923,   924,   859,   925,   926,   853,   927,   928,
     929,   930,   931,   932,   933,   934,   935,   936,   937,   938,
     939,   940,   941,   942,   943,   944,   945,   946,   852,   947,
     948,   949,   950,   951,   952,   953,   954,   955,   956,   957,
     958,   959,   960,   851,   961,   861,   962,   965,   966,   967,
     968,   969,   970,   971,   972,   973,   974,   975,   976,   977,
     978,   979,   980,   981,   982,   983,   984,   985,   986,   987,
     988,   989,   990,   991,   992,   993,   994,   995,   996,   997,
     998,   999,  1000,  1001,  1004,  1005,  1006,  1007,  1008,  1009,
    1010,  1011,  1012,  1013,  1014,  1015,     2,   367,   369,   370,
       0,   383,   386,   387,   371,   372,   373,   379,   433,   435,
     452,   455,   457,   460,   465,   468,   471,   473,   475,   477,
     479,   482,   483,   485,     0,   491,   484,   496,   499,   503,
     504,   506,   507,   508,     0,   513,   510,     0,   525,   523,
     533,   535,   505,   539,   542,   551,   543,   544,   545,   548,
     549,   546,   547,   569,   571,   572,   573,   570,   610,   611,
     612,   613,   614,   615,   532,   657,   649,   656,   655,   654,
     651,   653,   650,   652,   374,     0,   375,     0,   377,   376,
     378,   553,   554,   555,   552,   534,   380,   381,   550,   833,
     834,   541,   803,   847,     0,     0,     3,   236,   237,     0,
     240,   240,     4,   264,   265,     0,   268,   268,     5,   280,
     281,     0,   284,   284,     6,   302,   295,   296,   302,     0,
      11,    94,     7,     8,    10,     1,   848,   849,   850,   854,
     855,   856,   857,   858,   869,   870,   871,   872,   873,   874,
     875,   876,   877,   878,   879,   880,   898,  1002,  1003,   909,
     911,   922,   923,   859,   853,   940,   946,   851,   861,   988,
     991,   997,   999,  1009,  1010,   556,   557,   847,   848,   849,
     855,   858,   851,   522,   576,   577,   578,     0,   606,     0,
     498,   582,     0,   481,   480,   559,     0,   516,     0,     0,
     623,     0,     0,     0,     0,     0,     0,     0,   628,     0,
       0,     0,     0,     0,   514,   515,   517,   518,   519,   520,
     526,   527,   528,   529,   530,     0,     0,     0,   796,     0,
       0,     0,   391,   393,     0,     0,   399,   401,     0,     0,
     422,     0,     0,     0,     0,     0,     0,   521,     0,     0,
     618,     0,     0,   635,     0,     0,   786,   787,     0,   789,
     790,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   388,   385,   389,   390,   384,     0,     0,     0,     0,
       0,     0,     0,     0,   438,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     492,   497,     0,     0,     0,     0,   512,   524,     0,     0,
       0,   788,     0,     0,     0,     0,   952,   959,     0,     0,
       0,     0,   249,     0,     0,   253,   254,   255,   250,   251,
     320,   321,     0,   252,   238,     0,   234,   235,   239,   952,
       0,     0,     0,     0,     0,     0,     0,     0,   266,     0,
     262,   263,   267,   952,     0,     0,     0,   312,     0,     0,
     316,   317,   319,   313,   314,     0,   315,     0,   282,   318,
       0,   278,   279,   283,   293,   294,   300,   952,     0,     0,
       0,     0,     0,     0,     0,     0,   299,     0,    14,   100,
     581,     0,   608,   607,   604,     0,   558,   671,   667,     0,
     670,   682,     0,     0,   622,   663,     0,   659,     0,     0,
       0,     0,   658,   664,     0,     0,   802,     0,     0,   627,
       0,   673,     0,   681,   683,   662,     0,     0,     0,     0,
       0,     0,     0,   635,     0,   635,     0,     0,   635,     0,
       0,     0,     0,     0,     0,     0,     0,   679,   674,     0,
     678,     0,   617,     0,   359,     0,   364,     0,     0,     0,
       0,     0,   821,   823,   368,   382,   404,     0,     0,     0,
     432,   434,   437,   440,   441,   442,   450,   451,     0,   436,
     443,   444,   445,   446,   447,   448,   449,     0,   458,   459,
     456,   461,   463,   462,   464,   466,   467,   469,   470,     0,
       0,     0,     0,   489,     0,   502,   501,     0,     0,     0,
     568,   837,   567,     0,   566,     0,     0,     0,     0,   563,
       0,   835,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   260,   261,   814,     0,     0,     0,   322,
     241,   246,   242,   243,   244,   248,   245,   247,     0,     0,
       0,   269,   274,   270,   271,   272,   276,   277,   273,   275,
       0,     0,   362,     0,   285,   286,   287,   288,   292,   289,
     290,   291,   361,   361,   303,   304,   305,   306,   310,   311,
     307,   308,   309,    12,    13,     0,    96,    97,     0,   582,
       0,   609,     0,   494,   493,     0,   668,   624,   620,     0,
     626,   660,   661,   666,   665,   629,   630,     0,   672,   680,
     625,   616,     0,   795,     0,   561,   562,   395,   392,     0,
       0,   400,     0,   421,   419,   420,     0,     0,   486,     0,
       0,     0,   675,   619,   635,     0,   360,     0,   860,   852,
     861,   636,   639,   643,   645,   648,   646,   839,   840,   647,
       0,   836,     0,     0,     0,     0,     0,     0,   405,   412,
     406,   409,   413,     0,   439,     0,     0,     0,     0,   708,
     453,   689,   692,   694,   696,   698,   699,   714,   703,   472,
     474,   476,   633,   478,   490,   509,   511,   540,     0,   838,
       0,     0,   785,   784,   783,   564,     0,   297,     0,   324,
     325,   685,   340,     0,     0,   353,   354,   330,   331,     0,
       0,     0,     0,   335,   336,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,     0,   343,     0,   329,   779,
     778,   780,     0,     9,    22,    50,    36,    57,    62,    88,
      15,    40,    16,    40,    17,   100,    18,   100,    19,     0,
      20,     0,    95,    93,   123,     0,   130,   139,     0,     0,
       0,   170,   175,   178,   182,   184,   190,   194,   161,   198,
     202,   206,   127,   128,   102,   103,   104,   100,   105,   101,
     106,   136,   107,   141,   108,     0,   110,   100,   109,   118,
     165,   111,   100,   112,   100,   113,   100,   114,   100,   115,
     100,   116,   100,   117,   100,   119,     0,   120,   100,   121,
     100,   581,   581,   599,   574,   495,     0,   684,   621,   631,
     797,     0,     0,   397,     0,     0,     0,     0,     0,   426,
       0,   487,   488,     0,   365,   363,     0,     0,     0,     0,
     640,   642,   641,   637,     0,   792,     0,   793,     0,     0,
     828,   829,   825,   827,     0,   414,   415,   416,   407,     0,
       0,   697,     0,   709,   711,   713,   704,     0,   454,     0,
     687,     0,     0,   700,     0,   701,   634,   632,   565,     0,
       0,     0,     0,   635,     0,     0,   339,     0,     0,     0,
     328,   814,   818,   819,   820,   815,   816,     0,     0,     0,
       0,   343,     0,   342,     0,   349,     0,     0,   749,     0,
       0,   774,     0,     0,   745,   746,     0,   733,   739,   740,
     738,   737,   741,   735,   736,   742,     0,     0,    89,    90,
      28,    24,     0,     0,     0,   100,    37,    39,     0,   100,
      51,    55,    54,     0,     0,     0,    58,     0,     0,     0,
      61,    79,    63,    67,    68,    69,    73,    74,    76,    65,
      70,    71,    72,    75,    77,     0,     0,     0,    87,    99,
      98,     0,     0,     0,   158,   154,   100,     0,     0,    97,
       0,     0,     0,     0,   140,     0,   149,     0,   100,     0,
      97,    97,   167,   171,     0,     0,     0,     0,     0,    97,
       0,     0,     0,    97,     0,    97,    97,     0,    97,     0,
       0,    97,    97,     0,   197,   200,     0,   203,   204,     0,
       0,     0,     0,     0,     0,   669,   794,     0,     0,     0,
     402,   403,   423,     0,     0,     0,   424,   425,     0,     0,
     676,   846,   638,   644,     0,     0,   844,     0,   366,     0,
       0,     0,   830,     0,     0,   408,     0,   410,   702,   708,
     706,     0,   710,   712,     0,   691,     0,     0,   720,     0,
       0,     0,     0,     0,   686,   690,   693,     0,     0,     0,
       0,     0,   781,   782,   298,   301,     0,   323,   332,   333,
     326,   327,   337,   338,   334,     0,   804,   810,     0,     0,
       0,   214,   213,   848,   869,  1004,  1005,     0,   209,     0,
     212,   210,   221,   232,   228,     0,   258,   256,   346,   347,
     341,   344,     0,     0,   750,   755,     0,   775,   748,   747,
       0,     0,   752,   751,     0,   744,   743,     0,   773,   734,
       0,    91,    92,    26,    23,    27,    32,    33,    34,    25,
      43,    41,   100,     0,    38,     0,    53,    52,    49,    60,
      59,    56,    83,    84,    80,    81,    82,    64,    85,    66,
      78,   126,   150,     0,   100,   155,     0,     0,   152,   124,
     125,   122,   133,   134,   135,   132,   131,   129,   144,   137,
     100,   138,   142,   151,     0,   162,   163,   164,   100,     0,
     173,   172,   100,   176,   174,   179,   180,   177,   181,   185,
     187,   188,   186,   183,   191,   192,   189,   195,   196,   193,
     199,   201,   207,   205,   581,   581,     0,   603,   602,   601,
     600,   396,     0,     0,     0,     0,     0,     0,     0,   677,
     841,     0,     0,     0,   791,   635,     0,   822,   824,     0,
     417,   418,     0,   705,   707,   777,   727,   725,   726,   688,
       0,     0,   731,   732,   723,   724,   695,     0,     0,   716,
       0,   715,     0,   352,   350,   812,     0,     0,     0,     0,
     817,   231,     0,     0,     0,     0,     0,   808,   810,   222,
       0,     0,     0,     0,   227,     0,   345,   343,   763,   756,
     756,   758,     0,     0,   765,   765,   776,     0,   357,   355,
      29,    30,    31,    44,    48,    47,     0,     0,     0,    21,
      35,    86,   157,     0,   153,   156,   145,   148,     0,     0,
       0,   166,     0,   160,   169,     0,     0,   581,   398,   394,
       0,   429,     0,   428,   431,   842,   845,     0,     0,   831,
       0,   411,   728,   729,   730,   721,   722,   718,   717,     0,
     351,   813,   811,   805,     0,   230,   229,     0,   218,   217,
       0,   208,     0,   224,   223,   226,   225,     0,   259,   257,
     348,     0,     0,     0,     0,     0,   769,   767,   764,   762,
       0,    46,    45,    42,   159,   147,   146,   143,   168,   587,
     593,   579,   590,   596,   580,     0,     0,     0,   843,     0,
     826,   719,   806,   810,   215,     0,   809,     0,     0,   754,
     753,   759,   760,     0,   768,     0,     0,   766,   358,   356,
       0,     0,     0,     0,   575,     0,   427,   832,     0,     0,
     219,   220,   233,   757,     0,   770,   771,   772,   583,   589,
     588,   584,   595,   594,   585,   592,   591,   586,   598,   597,
     430,   807,   216,   761
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,   322,   323,   588,   785,   940,   941,  1343,  1349,
     942,   943,  1135,  1351,  1352,   944,   945,   946,   947,   948,
     949,  1367,  1369,   950,   951,   974,   589,   952,   788,   975,
     976,   977,   978,   979,   980,   981,  1385,  1183,   982,   983,
    1185,  1389,  1390,   984,   985,   986,   987,   988,  1174,  1175,
    1176,  1376,   989,   990,  1192,  1399,   991,   992,   993,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,  1307,  1308,  1309,  1310,
    1567,  1639,  1311,  1312,  1313,  1494,   296,   297,   298,   299,
     518,   519,   736,   302,   303,   304,   305,   308,   309,   310,
     311,   314,   300,   316,   317,   301,   319,   554,   520,   740,
     521,   522,   523,   524,   546,   525,   526,   527,   915,  1294,
     528,   529,   530,  1103,   923,   531,   532,  1474,   533,   567,
     443,   763,   655,   656,  1170,   196,   197,   198,   199,   200,
     201,   462,   202,   422,   423,  1023,  1229,   203,   426,   427,
     463,   464,   465,   860,   861,   862,  1057,  1257,   204,   429,
     430,   205,  1028,  1236,  1029,   206,   207,   208,   209,   678,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   794,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   365,   247,
     248,   249,   250,   251,   713,   714,   252,   253,   254,   376,
     590,   382,  1601,  1604,  1630,  1632,  1631,  1633,  1224,   255,
     379,   256,   593,   257,   258,   259,   441,   604,   260,   391,
     261,   262,   263,   399,   619,   881,  1077,   658,   841,  1043,
     842,   843,   264,   265,   266,   267,   268,   269,   270,   599,
     271,   620,   272,   649,   273,   622,   600,   623,  1016,   902,
     870,  1274,  1070,   871,   872,   873,   874,   875,   876,   877,
     878,  1066,  1075,  1281,  1275,  1555,  1464,   928,  1117,  1118,
    1119,  1120,  1121,  1581,  1333,  1122,  1588,  1505,  1585,  1627,
    1123,  1124,  1125,  1068,   569,   274,   275,   276,   277,   278,
     279,   280,   417,   418,   281,   282,   283,   284,   615,   285,
     535,  1478,  1297,   919,  1095,  1096,   286,   287,  1052,  1251,
    1252,   288,   289,   290,   291,   846,   847,   848,  1247,   849,
     292,   293
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1421
static const yytype_int16 yypact[] =
{
     956,  3404,   542,   542,   542,   542,  -144,    96,  7230, -1421,
    5738,   243,    54,    81,  4808,   138,  3638,  3638, -1421, -1421,
   -1421,  2234, -1421, -1421, -1421,   449,   592,   251,   283,    95,
     524,   555,   613, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
     445,   505,   646,   661,   683,   722,   731,   755,   770,   773,
     818,   585, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421,   605, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
     707,   804, -1421, -1421, -1421, -1421, -1421, -1421,   839, -1421,
      41, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421,   846,   846, -1421,   836, -1421, -1421,   841, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421,   428, -1421, -1421, -1421, -1421, -1421,   897, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421,   154, -1421,   885, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
      73, -1421, -1421,     2, -1421, -1421, -1421, -1421, -1421,   871,
   -1421,     3, -1421, -1421, -1421, -1421, -1421, -1421, -1421,   669,
     699, -1421, -1421, -1421, -1421, -1421, -1421,   898, -1421, -1421,
     810, -1421, -1421, -1421, -1421, -1421, -1421,   787,   790, -1421,
    1192,   771,    69,    90,    59,   650, -1421,   814,   834,   824,
     821, -1421, -1421, -1421,   356, -1421, -1421,  4808,   742, -1421,
   -1421,   976,   994, -1421,  5738, -1421, -1421,  5738, -1421, -1421,
   -1421, -1421,   495, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421,  3404, -1421,  3404, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421,   415,   831,   851, -1421, -1421, -1421,  3872,
     838, -1421, -1421, -1421, -1421,  4106,   838, -1421, -1421, -1421,
   -1421,  4340,   838, -1421, -1421,   838, -1421, -1421, -1421,  4574,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,   993,  1005,
    1010,  1015,  1017, -1421, -1421, -1421, -1421,   800, -1421,  1042,
     742, -1421,  7230, -1421, -1421, -1421,   424, -1421,  6202,  3404,
   -1421,  1029,  1039,  3404,    77,  1047,  7042,  3404, -1421,  1054,
    7230,  7230,  1062,  3404, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421,  3404,  7230,    13, -1421,  3404,
    3404,  7230,  1072, -1421,  7230,  1097,  1074, -1421,  7230,    72,
   -1421,   124,  3404,  3404,  3404,  1060,  1063, -1421,  6434,  3404,
   -1421,  1029,   158,   944,  3404,   954, -1421, -1421,  3404, -1421,
   -1421,  7230,  3404,  3404,  3404,   839,    41,  3404,  1101,   978,
     984, -1421, -1421, -1421, -1421, -1421,  3638,  3638,  3638,  3638,
    3638,  3638,  3638,  3638, -1421,  3638,  3638,  3638,  3638,  3638,
    3638,  3638,  3638,  1051,  3638,  3638,  3638,  3638,  3638,  3638,
    3638,  3638,  3638,  3638,  3638,   957,   966,   971,   975,  2468,
   -1421,   742,  4808,  4808,  3404,  3404, -1421, -1421,  3404,  1766,
     123, -1421,  2000,  1073,  1004,  7230,   848,   745,  1079,  1079,
    1079,  1079, -1421,  1079,  1079, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421,  1079, -1421, -1421,  1079, -1421, -1421,   574,   705,
    1079,  1079,  1079,  1079,  1079,  1079,  1079,  1079, -1421,  1079,
   -1421, -1421,   579,   688,  1079,  1079,  1079, -1421,  1079,  1079,
   -1421, -1421, -1421, -1421, -1421,  1079, -1421,  1079, -1421, -1421,
    1079, -1421, -1421,   581, -1421, -1421,   588,   446,  1079,  1079,
    1079,  1079,  1079,  1079,  1079,  1079, -1421,  1079,   417,   671,
    1026,  1027, -1421, -1421, -1421,   200, -1421, -1421, -1421,   743,
   -1421, -1421,   457,  2702, -1421, -1421,   484, -1421,   555,  1017,
    1090,  1092, -1421, -1421,  1094,  1095, -1421,   497,  2936, -1421,
    1096, -1421,  1100, -1421, -1421, -1421,   532,   566,  1128,   605,
    3404,   571,   638,   944,   839,   944,  7230,    41,   944,   846,
    3404,  3404,   750,   752,   640,  3404,  3404, -1421, -1421,   765,
   -1421,   645, -1421,  7230, -1421,   768, -1421,  6637,  1098,   918,
    1085,   996,   920,   178, -1421, -1421, -1421,  7230,  3404,  1012,
     790, -1421, -1421, -1421, -1421, -1421, -1421, -1421,  3638, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421,   131,    90,    90,
     952,    59,    59,    59,    59,   650,   650, -1421, -1421,  6637,
    6637,  7230,  7230, -1421,   655, -1421, -1421,   534,   572,   617,
   -1421, -1421, -1421,   778, -1421,   597,  3404,  3404,  3404, -1421,
     793, -1421,    39,  1112,   820,  1028,  1144,  7230,   829,   894,
     361,   603,  7230, -1421, -1421,   586,  7409,   203,   194, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,   848,   745,
    1077, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
     705,   435, -1421,   844, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421,   886,   826, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421,   575, -1421, -1421,  1002,   916,
     536, -1421,  1033, -1421, -1421,  7230, -1421, -1421, -1421,   667,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421,   693, -1421, -1421,
   -1421, -1421,  3404, -1421,  1025, -1421, -1421,  1045, -1421,  1155,
    1156, -1421,  1031, -1421, -1421, -1421,  1018,  1016, -1421,   695,
     696,  7230, -1421, -1421,   944,  1161, -1421,  6840,  1131,  1132,
    1135, -1421,   319, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
    3404, -1421,  3404,  3404,  3404,  1137,  1138,  1502, -1421, -1421,
    1147, -1421,   902,  3404, -1421,   131,  3404,   614,   615,   658,
    1093,   941,   943,  1104, -1421, -1421,  1077,   989, -1421, -1421,
   -1421, -1421,  1167, -1421, -1421, -1421, -1421, -1421,  3170, -1421,
     963,   967, -1421, -1421, -1421, -1421,  1076, -1421,  1028, -1421,
   -1421, -1421, -1421,  7230,  1165, -1421, -1421, -1421, -1421,  1057,
    1028,  1040,  1041, -1421, -1421,  1170,  1087,  7230,   -41,   981,
     885,  7230,  1024,  1028,  1105,  7230,  1105,   672,  1134, -1421,
   -1421, -1421,  7409, -1421, -1421, -1421, -1421, -1421, -1421,   760,
   -1421,   360, -1421,   299, -1421,   400, -1421,   217, -1421,  7937,
   -1421,   982,    30, -1421, -1421,   736, -1421, -1421,   921,   965,
     922, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421,   394, -1421, -1421,
   -1421,    10, -1421,   946, -1421,   983, -1421, -1421, -1421, -1421,
     318, -1421,   315, -1421,   925, -1421,   -12, -1421, -1421, -1421,
     184, -1421,    76, -1421,    65, -1421,  -126, -1421,   763, -1421,
     926,   138,   138, -1421, -1421, -1421,  1186, -1421, -1421, -1421,
   -1421,  3404,  1221,  1038,  3404,  3404,  3404,  5042,    29, -1421,
    3404, -1421, -1421,   430, -1421, -1421,  1194,  1195,  1196,  5970,
   -1421, -1421, -1421, -1421,   697, -1421,  1009, -1421,  1230,  1230,
   -1421, -1421,  1019, -1421,  3404, -1421, -1421,  1103,  1147,  1200,
     700, -1421,   121,  1146,  1034, -1421, -1421,  1152, -1421,   131,
     406,   131,  1122,  1134,    83, -1421, -1421, -1421, -1421,  3404,
    3404,  1079,  1079,   944,  1028,   911, -1421,  1028,  1028,   883,
   -1421,     8, -1421, -1421, -1421,  1219, -1421,  5274,    82,  1231,
    1102,  1105,  1028,  1225,  1232,  1225,   864,   977, -1421,    80,
    1061, -1421,   979,  7230, -1421, -1421,  1151, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421,   672,   885,   992,   995,
   -1421, -1421,  5274,  6637,   915,  1030, -1421, -1421,  6637,  1030,
   -1421, -1421, -1421,  6637,  3404,  1086, -1421,  6637,  3404,  1153,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421,    44,  1158,  1158, -1421, -1421,
   -1421,  1037,  3404,   985,   817, -1421, -1421,  3404,  3404, -1421,
    7410,   -77,  3404,  -110, -1421,   350, -1421,  7438, -1421,  3404,
   -1421, -1421,  1014, -1421,  6637,  3404,  7466,  3404,  7494, -1421,
    3404,  7522,  7550, -1421,  3404, -1421, -1421,  7578, -1421,  3404,
    7606, -1421, -1421,  7634, -1421, -1421,  3404, -1421, -1421,  7662,
    3404,  7690,  1234,  1240,   535, -1421, -1421,  7230,  1275,  1154,
   -1421, -1421, -1421,  7230,  1157,   130, -1421, -1421,  1136,  1247,
   -1421, -1421, -1421, -1421,  1248,  1140, -1421,   798, -1421,  3404,
    7230,   809, -1421,   816,  1252, -1421,   932,  1149, -1421,   658,
   -1421,  1245, -1421, -1421,  3638,   943,  1201,   980, -1421,  3638,
    3638,    83,   867,   867, -1421, -1421,  1104,   131,   -28,  3638,
    3638,  1099, -1421, -1421, -1421, -1421,    63, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421,   171, -1421,  1160,  1071,   -41,
    5738, -1421,   280,   206,  1276,  1257,  1266,   427, -1421,  5506,
     758,   769, -1421, -1421, -1421,  6637, -1421, -1421, -1421, -1421,
    1225, -1421,  1028,  1028, -1421, -1421,  1106, -1421, -1421, -1421,
      23,  1028, -1421, -1421,    84, -1421, -1421,  1184, -1421, -1421,
     108, -1421, -1421,   -38,  1297, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421,   450,  7718, -1421,  7746, -1421,   898, -1421, -1421,
     898, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,  1191,
    1191, -1421,   898,  3404, -1421, -1421,  1078,  7774,   898,   898,
      30, -1421, -1421, -1421, -1421, -1421,   898, -1421, -1421, -1421,
     272, -1421, -1421, -1421,  7802,   898,    30,    30, -1421,  1080,
   -1421,   898, -1421,   898, -1421,    30,   898, -1421, -1421,    30,
     898,    30,    30, -1421,    30,   898, -1421,    30,    30, -1421,
     898, -1421,   898, -1421,   138,   138,   243, -1421, -1421, -1421,
   -1421, -1421,  7230,  3404,  1164,  3404,  7230,  3404,  3404, -1421,
   -1421,  6637,  6637,  1166, -1421,   944,  1230, -1421, -1421,  1230,
   -1421, -1421,  1028, -1421, -1421,    59, -1421, -1421, -1421, -1421,
     157,   762, -1421, -1421, -1421, -1421, -1421,  3638,  3638,   952,
      94, -1421,  3404, -1421, -1421, -1421,   860,  6637,  1098,  5274,
   -1421, -1421,  5738,  5738,    66,  1151,  5274, -1421,  1160, -1421,
    5506,  5506,  5506,  5506,  1298,    33, -1421,  1105, -1421, -1421,
   -1421,   297,  1151,  1028, -1421, -1421, -1421,  6637, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421,  6637,  3404,  7830, -1421,
   -1421, -1421,   898,  7858, -1421, -1421, -1421, -1421,  6637,  3404,
    7886, -1421,  7914, -1421,  1120,   386,   815,   138, -1421, -1421,
    6637, -1421,  1190, -1421, -1421, -1421, -1421,  6637,  1314, -1421,
     862, -1421, -1421, -1421, -1421, -1421, -1421,   952,   952,  3638,
   -1421, -1421, -1421, -1421,   427, -1421, -1421,  1284, -1421, -1421,
    1293, -1421,  1098, -1421, -1421, -1421, -1421,  3404, -1421, -1421,
    1225,   866,   876,  1151,  1123,   882, -1421, -1421,   735,   735,
      46, -1421,   898, -1421, -1421, -1421,   898, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421,  1304,  1208,  3404, -1421,  3404,
   -1421,   952, -1421,  1160, -1421,   397, -1421,   718,  1218, -1421,
   -1421,    83, -1421,  1151, -1421,   126,   126, -1421, -1421, -1421,
     110,   285,   277,   301, -1421,  3404, -1421, -1421,  1098,  1300,
   -1421, -1421, -1421, -1421,  1148, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421,   396, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421,   175, -1421, -1421,  1351, -1421,  -187,  -697, -1421,
   -1421, -1421, -1421,   403, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421,   174, -1421, -1421, -1421, -1421, -1421, -1421, -1421,   186,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1125,  -124, -1421, -1421,
   -1421, -1421, -1421, -1113, -1421, -1421, -1421,  1064,  1070,  1091,
    -273,  -267,  -428, -1421,  1066,  1067,  1068, -1421,  1081,  1083,
    1107, -1421,   974,  1088,  1109,    31,  1058,  -307,  -264,  -433,
    -252,  -295,  -242,  -237,  -289,  -257,  -192,  -151, -1421, -1421,
    -130,  -113, -1421,  -924, -1421, -1421,  -235, -1421,   -96,  -280,
    -878, -1421,    91,   552,  -637,   312,   -21,  -244, -1421, -1421,
    1205, -1421, -1421, -1421,   772, -1421, -1421, -1421, -1421,   782,
   -1421, -1421, -1421,   545,   355, -1421, -1421, -1421, -1421,  1323,
     788, -1421, -1421, -1421,   398, -1421, -1421,   964,   962, -1421,
     242,   164,  -483,   600,  -461,   595,   596, -1421, -1421, -1421,
    1075, -1421, -1421, -1421,  -635,  -223, -1421, -1421, -1421,    26,
     591, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
      27, -1421, -1421, -1421, -1421,  -679, -1421, -1420,  -410, -1421,
   -1421, -1421, -1421, -1421,   923,   546, -1421,   212, -1421,    12,
   -1421,  -571, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421,   999, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421,   740, -1421,  -613,  -558, -1421,
     607,   395,  -634, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421,  1052, -1421,  1053, -1421,  1050,  1007,   620,  -640,
    -822, -1421, -1421, -1421,   383,   382,   177,   589, -1421, -1421,
   -1421,   196, -1421, -1266, -1421,    -4,   185,   583,   334, -1421,
   -1421, -1421, -1421,   -37, -1320, -1421,   -43,  -525, -1421, -1421,
   -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
   -1421, -1421, -1421,   837, -1421, -1421, -1421, -1065,  -511,  -343,
    -226, -1396, -1258,   376, -1421,   169, -1421, -1421, -1421, -1040,
      24, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421, -1421,
       5,     7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -362
static const yytype_int16 yytable[] =
{
     386,   500,  1105,   690,   723,  1461,   628,  1344,   869,  1253,
    1500,   633,   578,   366,   635,   367,   557,   367,   638,   790,
     817,   851,   819,   844,   557,   822,   691,   692,   693,   694,
     583,   510,   540,   511,   307,   313,   318,   373,   541,   585,
     380,   542,  1098,  1059,  1382,   601,   629,   555,  1295,  1488,
     424,  1338,   868,   543,   560,   579,   850,   601,   624,   556,
     446,   449,   560,   544,  1568,   844,   844,   580,   545,   558,
     547,   491,  1467,  1472,   559,     8,   565,   581,   850,   549,
    1092,   850,   582,  1510,   584,   570,   741,   742,   743,   739,
     744,   745,  1572,   587,   850,   624,   325,   924,   926,   746,
     320,   487,   747,   484,   485,   639,  1362,   751,   752,   753,
     754,   755,   756,   757,   758,  1468,   759,  1214,   607,   561,
    1330,   764,   765,   766,  1502,   767,   768,   561,   484,   485,
     850,   444,   769,  1387,   770,   396,  1331,   771,   608,  1436,
    1388,   879,   880,   397,  1169,   774,   775,   776,   777,   778,
     779,   780,   781,    15,   782,  1648,   850,   639,   850,   488,
     562,   865,  1215,    15,   321,  1363,  1502,   653,   562,   866,
    1260,   865,  1216,    22,    23,    24,   445,  1320,  1027,   866,
     653,   563,   377,    22,    23,    24,   869,   378,   869,   563,
      83,   484,   485,  1331,   438,  1641,  1489,  1503,   564,   654,
     659,  1278,   439,   844,   661,  1499,   564,  1578,   663,   664,
     665,  1235,  1475,   666,   896,   566,   904,  1638,   398,   640,
    1628,  1034,   492,   566,  1649,  1482,   820,   447,   450,   486,
     868,   630,   868,  1315,   425,  1584,  1383,  1473,  1384,  1503,
    1261,   367,   381,   834,   367,    83,   388,   918,  1145,  1340,
    1149,   489,   490,   501,  1559,    83,  1316,   858,  1082,  1507,
    1437,   506,  1332,  1199,   507,   712,  1504,   609,   712,   578,
    1086,   641,  1093,  1094,   715,  1511,  1512,   440,   557,   540,
    1180,   557,  1508,  1101,  1181,   541,  1200,   583,   542,   897,
    1187,   394,  -211,  1279,  1280,  1196,   585,  1198,  1643,  1201,
     543,  1202,   912,  1207,   792,  1210,  1613,  1213,  1182,   555,
     544,  1219,   579,  1221,   845,   545,   560,   547,   901,   560,
    -211,   556,  1654,   395,   580,   850,   549,   901,  -211,   793,
    1040,   558,  1651,   850,   581,   932,   559,   307,   565,   582,
    1211,   584,  1041,   313,   716,   717,   318,   570,  1657,   850,
     587,  1208,   718,  1042,  1564,  1644,   845,   845,   845,   845,
    1364,  1365,  1366,   867,   374,   375,   925,  1212,   602,  1552,
    1553,  1554,   606,   867,  1209,   921,   617,  1573,  1574,  1575,
    1576,   561,   626,   869,   561,   922,   814,   595,    15,   367,
     869,  1655,   869,   844,   627,   367,   824,   825,   631,   632,
    1652,   616,   856,   367,   499,   844,     8,   367,   367,  1550,
    1099,   642,   643,   644,  1104,  1278,  1658,   857,   651,  1569,
    1570,   366,   562,   367,   859,   562,   366,   868,   367,   366,
    1599,   367,  1600,   366,   868,   367,   868,  1586,  1353,  1486,
    1222,  1223,  1355,   563,  1287,   367,   563,  1290,  1291,    22,
      23,    24,  1017,  1239,  1296,   512,   662,   453,   367,  1203,
     564,  1317,  1321,   564,   404,   596,   513,  1295,   387,  1234,
    1286,  1240,   892,   893,   894,   850,   434,   566,   704,  1377,
     566,  1246,  1204,   707,   708,  1205,  1206,   709,  1017,   388,
     453,  1394,  1146,  1083,   845,   435,   436,   389,   909,   844,
    1266,  1583,   929,   930,   844,   910,   797,  1279,  1280,   844,
     724,   750,   725,   844,  1147,  1148,   508,   453,  1621,  1267,
     616,    83,   367,  -211,   405,  1268,  -211,  -211,  -211,  -211,
     453,  -211,  -211,   800,  -211,   509,   931,  -211,  -211,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,   805,  1526,  -211,  -211,
    -211,   911,   733,   734,  -211,  -211,   885,  1527,  1645,    11,
     844,  1013,    12,    13,   400,   453,  1426,   453,  1020,  1528,
    1529,   726,   390,  1580,  1136,  1345,  -211,  -211,  1014,  -211,
    1354,   810,   799,   850,  1188,  1356,  1137,  1429,  -211,  1359,
    1193,  -211,  -211,  1391,   886,   401,  1138,   807,   869,   453,
    1388,  1269,  1270,  1271,   453,   453,  1272,  1273,  1045,  1046,
    1047,   534,  1194,  1195,   416,   811,  1189,   548,   727,   859,
     815,  1190,  1191,   568,   829,   830,   728,   729,   730,   731,
     732,   586,   392,   415,  1130,  1131,  1400,  -361,  -361,   887,
     393,   366,   868,   367,   712,   500,    15,    15,  1284,  1285,
     453,  1427,  1428,   402,   865,  1518,  1132,  1133,   366,  1134,
     367,   403,   866,  1062,   367,   406,    22,    23,    24,   761,
    1487,   453,   366,   453,   367,  1140,   762,  1523,   453,   735,
     407,   844,  1496,  1497,   845,  1141,  1142,   816,   453,   828,
     783,  1501,  1178,  1530,   833,  1179,   845,  1143,  1144,   784,
     453,  1532,   408,  1509,   884,  1534,   367,   367,   367,   367,
     672,   673,   674,   675,   676,   677,  1018,   679,   680,   681,
     682,   683,   684,   685,   686,  1513,   453,   294,   453,   453,
     453,   295,   616,   453,   367,  1514,  1515,   916,    83,   367,
    1642,   409,  1019,   920,  1031,  1032,  1248,  1516,  1517,  1259,
     410,   453,   724,   748,   725,   419,  1106,  1495,   760,  1107,
     772,   749,  1108,  1109,  1110,  1111,   749,   773,   749,   724,
     750,   725,   502,   913,   411,   749,   795,  1226,   503,   914,
    1230,  1231,  1232,   453,   796,   453,  1238,  1460,  1490,   412,
     845,   826,   413,   827,  1491,   845,  1469,  1470,   831,  1492,
     845,   835,   367,  1455,   845,  1493,   832,   844,   844,   836,
     859,   888,  1551,   726,   493,   494,   890,  1431,   933,   889,
     934,   917,  1112,  1434,   891,   918,   888,   935,   936,  1044,
     726,  1442,  1548,   937,   895,  1282,  1283,   414,   367,  1443,
    1445,  1563,  1446,   844,   367,  1060,   938,   939,   421,  1446,
    1447,   845,   420,  1535,  1536,   428,  1113,  1448,  1579,  1602,
     727,  1603,  1053,  1587,   367,  1063,  1064,  1065,   728,   729,
     730,   731,   732,   844,  1114,  1115,   432,   727,  1116,  -361,
    -361,   433,   844,  1545,  1546,   728,   729,   730,   731,   732,
     724,   750,   725,   835,   844,  1446,   733,   734,  1625,  1618,
    1626,  1561,   451,  1610,   591,   592,   844,  1619,   366,  1618,
     367,   761,   724,   844,   725,  1623,   437,  1620,   762,  1562,
     864,   735,  1091,  1624,   367,   442,   616,  1612,   367,   448,
     616,   453,   367,   737,   738,  1616,  1640,   452,   735,  1127,
     454,   455,   466,   456,   457,   458,   467,   459,   460,  1590,
     724,   726,   725,  1629,  1324,  1325,  1326,  1327,  1591,     1,
       2,     3,     4,     5,     6,   483,  1605,  1346,  1347,  1348,
    1595,   495,   845,   726,  1552,  1553,  1554,   306,   312,   315,
     786,   787,  1606,   497,  1557,  1558,   484,   485,   498,  1608,
     899,   900,  1380,  1650,  1653,  1656,  1659,   504,   727,   905,
     906,  1661,   496,  1396,  1397,  1444,   728,   729,   730,   731,
     732,   726,  1405,   907,   908,   505,  1409,   514,  1411,  1412,
     727,  1414,  1538,   515,  1417,  1418,  1542,   295,   728,   729,
     730,   731,   732,   388,   367,   733,   734,  1011,  1012,   733,
     734,  1055,  1056,  1128,  1129,   392,   367,   972,   973,   761,
     396,  1217,  1218,  1288,  1289,   402,   762,   438,   727,   735,
    1292,  1293,  1328,  1329,  1335,  1336,   728,   729,   730,   731,
     732,   594,  1173,  1374,  1450,  1451,  1611,   603,  1457,  1458,
     605,   735,  1462,  1463,   688,   689,   695,   696,   612,   697,
     698,   383,   384,   705,   706,   657,   882,   882,   845,   845,
    1646,  1647,   618,   625,   367,   634,   636,   637,   645,   761,
     667,   646,   660,   687,   668,   699,   762,   700,  1337,   735,
     367,   669,   701,  1357,  1314,   721,   702,  1360,   722,   739,
     789,   801,   791,   802,   845,   803,   804,   808,   812,   367,
     367,   809,   852,   853,   855,   367,   850,   854,   863,   898,
     367,  1372,   901,   903,   367,  1021,  1378,  1379,  1022,  1314,
     927,  1386,  1015,  1026,   845,  1024,  1025,  1027,  1395,  1030,
     653,  1037,  1038,   845,  1401,  1039,  1403,  1048,  1049,  1406,
    1054,  1069,  1067,  1410,  1071,   845,  1072,  1074,  1415,  1539,
    1076,  1541,  1079,  1543,  1544,  1420,  1080,   845,  1085,  1422,
    1081,   367,  1084,  1089,   845,   468,   469,   470,   471,   472,
     473,  1090,  1087,  1088,  1100,  1097,   474,  1126,  1102,  1172,
    1173,  1184,  1177,  1197,  1220,  1168,  1186,  1225,  1560,   475,
    1227,  1228,   366,  1249,   367,  1241,  1242,  1243,   366,  1250,
     367,  1258,  1262,  1254,  1256,   953,  1263,  1264,   954,   955,
     956,   957,  1299,   958,  1277,   366,   959,   367,  1322,   960,
     961,   962,   963,   964,   965,   966,   967,   968,  1318,  1323,
     969,   970,   971,  1334,  1319,    83,  1341,  1424,  1342,  1368,
    1371,  1398,  1350,  1425,  1432,  1373,  1433,  1435,  1439,  1440,
    1438,  1441,  1449,  1452,  1454,  1483,  1456,  1484,  1471,   476,
     477,   478,   479,   480,   481,  1479,  1485,   367,  1506,  1486,
     321,  1477,  1521,   972,   973,  1540,   367,  1547,  1498,  1577,
    1607,  1524,   367,  1533,  1609,  1614,  1615,  1481,  1622,  1358,
    1634,  1331,   954,   955,   956,   957,  1314,   958,  1635,  1139,
     959,  1662,  1370,   960,   961,   962,   963,   964,   965,   966,
     967,   968,  1522,  1663,   969,   970,   971,   324,  1171,  1392,
    1375,   482,  1571,  1636,   536,  1637,   954,   955,   956,   957,
     537,   958,   550,   551,   959,   552,   576,   960,   961,   962,
     963,   964,   965,   966,   967,   968,  1476,  1035,   969,   970,
     971,  1660,   538,   571,   321,   572,  1361,   972,   973,   954,
     955,   956,   957,   574,   958,   461,   818,   959,  1058,  1255,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   821,
     573,   969,   970,   971,   575,   431,  1237,   823,   321,   671,
     670,   972,   973,  1459,  1078,   720,  1430,   366,  1537,   367,
     652,   366,   883,   367,  1036,   650,   610,   611,   367,   367,
     621,  1033,  1265,  1276,  1466,  1453,  1061,  1556,  1465,  1073,
    1339,   321,  1589,  1582,   972,   973,   813,  1298,  1480,     0,
    1549,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   367,     0,   367,     0,     0,   367,
     367,     0,     0,   367,     0,     0,  1592,   367,   367,   367,
     367,     0,     0,     0,     0,     0,  1314,     0,  1596,  1565,
    1566,     0,     0,  1314,   367,     0,     0,  1314,  1314,  1314,
    1314,     0,     0,   367,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   367,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   367,     0,     0,
       0,     0,     0,     0,   367,     0,  1617,   326,   327,   328,
     329,   330,   331,   332,   333,    33,    34,    35,    36,    37,
      38,    39,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,    52,    53,    54,    55,    56,    57,
      58,     0,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,   346,    72,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,   347,   348,    82,     0,     0,     0,    84,     0,     0,
       0,     0,    87,   349,    89,   350,    91,     0,    92,    93,
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
     191,   192,   193,   194,   195,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,   710,
      11,     0,     0,    12,    13,     0,    14,     0,    15,     0,
      16,    17,    18,     0,    19,    20,    21,   711,     0,     0,
       0,     0,     0,     0,     0,  1050,     0,  1051,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,     0,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,    80,    81,    82,     0,     0,
      83,    84,    85,    86,     0,     0,    87,    88,    89,    90,
      91,     0,    92,    93,    94,    95,    96,    97,    98,    99,
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
      10,     0,     0,   710,    11,     0,     0,    12,    13,     0,
      14,     0,    15,     0,    16,    17,    18,     0,    19,    20,
      21,   719,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,     0,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,    80,
      81,    82,     0,     0,    83,    84,    85,    86,     0,     0,
      87,    88,    89,    90,    91,     0,    92,    93,    94,    95,
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
      18,     0,    19,    20,    21,   385,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     0,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     0,    80,    81,    82,     0,     0,    83,    84,
      85,    86,     0,     0,    87,    88,    89,    90,    91,     0,
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
       0,     0,     0,     0,     0,     0,     0,   703,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,     0,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,    80,    81,    82,
       0,     0,    83,    84,    85,    86,     0,     0,    87,    88,
      89,    90,    91,     0,    92,    93,    94,    95,    96,    97,
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
       0,   798,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,     0,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,    80,    81,    82,     0,     0,    83,    84,    85,    86,
       0,     0,    87,    88,    89,    90,    91,     0,    92,    93,
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
       0,     0,     0,     0,     0,   806,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,     0,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,    80,    81,    82,     0,     0,
      83,    84,    85,    86,     0,     0,    87,    88,    89,    90,
      91,     0,    92,    93,    94,    95,    96,    97,    98,    99,
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
      10,     0,     0,   710,    11,     0,     0,    12,    13,     0,
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
      87,    88,    89,    90,    91,     0,    92,    93,    94,    95,
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
      85,    86,     0,     0,    87,    88,    89,    90,    91,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,     0,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
     346,    72,     0,     0,     0,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,    80,    81,    82,
       0,     0,    83,    84,    85,    86,     0,     0,    87,   349,
      89,   350,    91,     0,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   351,   352,   103,   353,   105,     0,   106,
     354,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,     0,   140,   141,   142,     0,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   359,   171,   172,   360,   174,
     175,   176,   177,   178,   361,   180,   362,   182,   183,   184,
     185,   186,   187,   188,   363,   364,   191,   192,   193,   194,
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
       0,     0,    87,    88,    89,    90,    91,     0,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   516,   135,   136,   137,   138,   139,     0,   140,   517,
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
      91,     0,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,     0,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   539,   135,   136,   137,   138,
     139,     0,   140,   517,   142,     0,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,     8,
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
      87,    88,    89,    90,    91,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
       0,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   553,
     135,   136,   137,   138,   139,     0,   140,   517,   142,     0,
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
      85,    86,     0,     0,    87,    88,    89,    90,    91,     0,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   577,   135,   136,   137,   138,   139,     0,
     140,   517,   142,     0,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,     8,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,    11,     0,     0,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,     0,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
     346,    72,     0,     0,     0,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,    80,    81,    82,
       0,     0,    83,    84,    85,    86,     0,     0,    87,   349,
      89,   350,    91,     0,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   351,   352,   103,   353,   105,     0,   106,
     354,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   355,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,     0,   140,   141,   142,     0,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   359,   171,   172,   360,   174,
     175,   176,   177,   178,   361,   180,   362,   182,   183,   184,
     185,   186,   187,   188,   363,   364,   191,   192,   193,   194,
     195,  1233,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   837,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   368,   369,    27,
      28,   370,    30,    31,   371,   838,    34,    35,    36,    37,
      38,    39,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,    52,    53,    54,    55,    56,    57,
      58,     0,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,   346,    72,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,   347,   348,    82,     0,     0,     0,    84,     0,     0,
       0,     0,    87,   349,    89,   350,    91,     0,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   351,   352,   103,
     353,   105,     0,   106,   354,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   355,   122,
     123,   124,   125,   126,   356,   839,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,     0,   140,   141,
     142,     0,   372,   144,   840,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   359,
     171,   172,   360,   174,   175,   176,   177,   178,   361,   180,
     362,   182,   183,   184,   185,   186,   187,   188,   363,   364,
     191,   192,   193,   194,   195,     9,     0,     0,     0,     0,
       0,     0,     0,     0,  1300,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1301,     0,     0,     0,     0,     0,
    1302,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1303,
     369,    27,    28,   370,    30,    31,   371,    33,    34,    35,
      36,    37,    38,    39,  1304,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,    52,    53,    54,    55,
      56,    57,    58,     0,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,   346,    72,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     0,   347,   348,    82,     0,     0,     0,    84,
      85,    86,     0,     0,    87,   349,    89,   350,    91,     0,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   351,
     352,   103,   353,   105,     0,   106,   354,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     355,   122,   123,   124,   125,   126,   356,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,     0,
     140,   141,   142,     0,   372,   144,   358,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   359,   171,   172,   360,   174,   175,   176,   177,   178,
     361,   180,   362,   182,   183,  1305,  1306,   186,   187,   188,
     363,   364,   191,   192,   193,   194,   195,     9,     0,     0,
       0,     0,     0,     0,     0,     0,  1300,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1303,   369,    27,    28,   370,    30,    31,   371,    33,
      34,    35,    36,    37,    38,    39,  1304,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,    52,    53,
      54,    55,    56,    57,    58,     0,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,   346,    72,
       0,     0,     0,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,   347,   348,    82,     0,     0,
       0,    84,    85,    86,     0,     0,    87,   349,    89,   350,
      91,     0,    92,    93,    94,    95,    96,    97,    98,    99,
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
      89,   350,    91,     0,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   351,   352,   103,   353,   105,     0,   106,
     354,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   355,   122,   123,   124,   125,   126,
     356,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,     0,   140,   141,   142,     0,   372,   144,
     358,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   359,   171,   172,   360,   174,
     175,   176,   177,   178,   361,   180,   362,   182,   183,   184,
     185,   186,   187,   188,   363,   364,   191,   192,   193,   194,
     195,  1244,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     837,  1245,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   368,   369,    27,    28,   370,
      30,    31,   371,   838,    34,    35,    36,    37,    38,    39,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,    52,    53,    54,    55,    56,    57,    58,     0,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,   346,    72,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,   347,
     348,    82,     0,     0,     0,    84,     0,     0,     0,     0,
      87,   349,    89,   350,    91,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   351,   352,   103,   353,   105,
       0,   106,   354,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   355,   122,   123,   124,
     125,   126,   356,   839,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,     0,   140,   141,   142,     0,
     372,   144,   840,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   359,   171,   172,
     360,   174,   175,   176,   177,   178,   361,   180,   362,   182,
     183,   184,   185,   186,   187,   188,   363,   364,   191,   192,
     193,   194,   195,   597,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   598,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   326,   327,   328,
     329,   330,   331,   332,   333,    33,    34,    35,    36,    37,
      38,    39,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,    52,    53,    54,    55,    56,    57,
      58,     0,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,   346,    72,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,   347,   348,    82,     0,     0,     0,    84,     0,     0,
       0,     0,    87,   349,    89,   350,    91,     0,    92,    93,
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
     191,   192,   193,   194,   195,   647,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   648,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   326,
     327,   328,   329,   330,   331,   332,   333,    33,    34,    35,
      36,    37,    38,    39,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,    52,    53,    54,    55,
      56,    57,    58,     0,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,   346,    72,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     0,   347,   348,    82,     0,     0,     0,    84,
       0,     0,     0,     0,    87,   349,    89,   350,    91,     0,
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
     363,   364,   191,   192,   193,   194,   195,   837,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   368,   369,    27,    28,   370,    30,    31,   371,
     838,    34,    35,    36,    37,    38,    39,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,   346,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,   347,   348,    82,     0,
       0,     0,    84,     0,     0,     0,     0,    87,   349,    89,
     350,    91,     0,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   351,   352,   103,   353,   105,     0,   106,   354,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   355,   122,   123,   124,   125,   126,   356,
     839,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,     0,   140,   141,   142,     0,   372,   144,   840,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   359,   171,   172,   360,   174,   175,
     176,   177,   178,   361,   180,   362,   182,   183,   184,   185,
     186,   187,   188,   363,   364,   191,   192,   193,   194,   195,
     837,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   368,   369,    27,    28,   370,
      30,    31,   371,    33,    34,    35,    36,    37,    38,    39,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,    52,    53,    54,    55,    56,    57,    58,     0,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,   346,    72,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,   347,
     348,    82,     0,     0,     0,    84,     0,     0,     0,     0,
      87,   349,    89,   350,    91,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   351,   352,   103,   353,   105,
       0,   106,   354,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   355,   122,   123,   124,
     125,   126,   356,   839,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,     0,   140,   141,   142,     0,
     372,   144,   840,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   359,   171,   172,
     360,   174,   175,   176,   177,   178,   361,   180,   362,   182,
     183,   184,   185,   186,   187,   188,   363,   364,   191,   192,
     193,   194,   195,   613,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   326,   327,   328,
     329,   330,   331,   332,   333,    33,    34,    35,    36,    37,
      38,    39,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,    52,    53,    54,    55,    56,    57,
      58,     0,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,   346,    72,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,   347,   348,    82,     0,     0,   614,    84,     0,     0,
       0,     0,    87,   349,    89,   350,    91,     0,    92,    93,
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
     191,   192,   193,   194,   195,   326,   327,   328,   329,   330,
     331,   332,   333,    33,    34,    35,    36,    37,    38,    39,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,    52,    53,    54,    55,    56,    57,    58,     0,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,   346,    72,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,   347,
     348,    82,     0,     0,     0,    84,     0,     0,     0,     0,
      87,   349,    89,   350,    91,     0,    92,    93,    94,    95,
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
     193,   194,   195,    34,    35,    36,    37,    38,    39,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,    52,    53,    54,    55,    56,    57,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,   346,    72,     0,     0,     0,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,   347,   348,
      82,     0,     0,     0,    84,     0,     0,     0,     0,    87,
     349,    89,   350,    91,     0,    92,    93,    94,    95,    96,
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
     194,   195,     0,  1381,     0,     0,   954,   955,   956,   957,
       0,   958,     0,     0,   959,     0,     0,   960,   961,   962,
     963,   964,   965,   966,   967,   968,     0,     0,   969,   970,
     971,  1393,     0,     0,   954,   955,   956,   957,     0,   958,
       0,     0,   959,     0,     0,   960,   961,   962,   963,   964,
     965,   966,   967,   968,     0,     0,   969,   970,   971,  1402,
       0,     0,   954,   955,   956,   957,     0,   958,   321,     0,
     959,   972,   973,   960,   961,   962,   963,   964,   965,   966,
     967,   968,     0,     0,   969,   970,   971,  1404,     0,     0,
     954,   955,   956,   957,     0,   958,   321,     0,   959,   972,
     973,   960,   961,   962,   963,   964,   965,   966,   967,   968,
       0,     0,   969,   970,   971,  1407,     0,     0,   954,   955,
     956,   957,     0,   958,   321,     0,   959,   972,   973,   960,
     961,   962,   963,   964,   965,   966,   967,   968,     0,     0,
     969,   970,   971,  1408,     0,     0,   954,   955,   956,   957,
       0,   958,   321,     0,   959,   972,   973,   960,   961,   962,
     963,   964,   965,   966,   967,   968,     0,     0,   969,   970,
     971,  1413,     0,     0,   954,   955,   956,   957,     0,   958,
     321,     0,   959,   972,   973,   960,   961,   962,   963,   964,
     965,   966,   967,   968,     0,     0,   969,   970,   971,  1416,
       0,     0,   954,   955,   956,   957,     0,   958,   321,     0,
     959,   972,   973,   960,   961,   962,   963,   964,   965,   966,
     967,   968,     0,     0,   969,   970,   971,  1419,     0,     0,
     954,   955,   956,   957,     0,   958,   321,     0,   959,   972,
     973,   960,   961,   962,   963,   964,   965,   966,   967,   968,
       0,     0,   969,   970,   971,  1421,     0,     0,   954,   955,
     956,   957,     0,   958,   321,     0,   959,   972,   973,   960,
     961,   962,   963,   964,   965,   966,   967,   968,     0,     0,
     969,   970,   971,  1423,     0,     0,   954,   955,   956,   957,
       0,   958,   321,     0,   959,   972,   973,   960,   961,   962,
     963,   964,   965,   966,   967,   968,     0,     0,   969,   970,
     971,  1519,     0,     0,   954,   955,   956,   957,     0,   958,
     321,     0,   959,   972,   973,   960,   961,   962,   963,   964,
     965,   966,   967,   968,     0,     0,   969,   970,   971,  1520,
       0,     0,   954,   955,   956,   957,     0,   958,   321,     0,
     959,   972,   973,   960,   961,   962,   963,   964,   965,   966,
     967,   968,     0,     0,   969,   970,   971,  1525,     0,     0,
     954,   955,   956,   957,     0,   958,   321,     0,   959,   972,
     973,   960,   961,   962,   963,   964,   965,   966,   967,   968,
       0,     0,   969,   970,   971,  1531,     0,     0,   954,   955,
     956,   957,     0,   958,   321,     0,   959,   972,   973,   960,
     961,   962,   963,   964,   965,   966,   967,   968,     0,     0,
     969,   970,   971,  1593,     0,     0,   954,   955,   956,   957,
       0,   958,   321,     0,   959,   972,   973,   960,   961,   962,
     963,   964,   965,   966,   967,   968,     0,     0,   969,   970,
     971,  1594,     0,     0,   954,   955,   956,   957,     0,   958,
     321,     0,   959,   972,   973,   960,   961,   962,   963,   964,
     965,   966,   967,   968,     0,     0,   969,   970,   971,  1597,
       0,     0,   954,   955,   956,   957,     0,   958,   321,     0,
     959,   972,   973,   960,   961,   962,   963,   964,   965,   966,
     967,   968,     0,     0,   969,   970,   971,  1598,     0,     0,
     954,   955,   956,   957,     0,   958,   321,     0,   959,   972,
     973,   960,   961,   962,   963,   964,   965,   966,   967,   968,
    1150,     0,   969,   970,   971,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   321,     0,     0,   972,   973,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1151,     0,  1152,  1153,  1154,  1155,  1156,  1157,  1158,     0,
       0,     0,   321,     0,     0,   972,   973,  1159,  1160,  1161,
    1162,  1163,  1164,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1165,  1166,  1167
};

static const yytype_int16 yycheck[] =
{
      21,   224,   926,   486,   515,  1271,   416,  1132,   687,  1049,
    1330,   421,   319,     8,   424,     8,   311,    10,   428,   590,
     633,   658,   635,   657,   319,   638,   487,   488,   489,   490,
     319,   275,   305,   277,     3,     4,     5,    10,   305,   319,
      14,   305,   920,   865,   121,   388,    33,   311,    40,  1307,
       9,  1116,   687,   305,   311,   319,    48,   400,   401,   311,
      58,    58,   319,   305,  1484,   699,   700,   319,   305,   311,
     305,    12,   100,    10,   311,     9,   311,   319,    48,   305,
     121,    48,   319,   121,   319,   311,   519,   520,   521,    50,
     523,   524,  1488,   319,    48,   438,     0,   737,   738,   532,
     244,    11,   535,    34,    35,    33,    62,   540,   541,   542,
     543,   544,   545,   546,   547,   143,   549,   243,    41,   311,
      40,   554,   555,   556,    40,   558,   559,   319,    34,    35,
      48,    58,   565,   243,   567,    40,   113,   570,    61,     9,
     250,   699,   700,    48,   114,   578,   579,   580,   581,   582,
     583,   584,   585,    32,   587,    45,    48,    33,    48,    69,
     311,    40,   288,    32,   308,   121,    40,     9,   319,    48,
      49,    40,   298,    52,    53,    54,   103,  1101,   149,    48,
       9,   311,   128,    52,    53,    54,   865,   106,   867,   319,
     124,    34,    35,   113,    40,  1615,  1309,   113,   311,    41,
     444,   118,    48,   837,   448,   182,   319,   174,   452,   453,
     454,   182,    41,   457,   175,   311,   727,  1613,   123,   147,
     174,   834,   163,   319,   114,    19,   636,   225,   225,   160,
     865,   218,   867,   151,   193,  1501,   313,   174,   315,   113,
    1062,   234,   104,   653,   237,   124,    40,   239,   945,  1127,
     947,   161,   162,   227,   160,   124,   174,   667,   898,   151,
     130,   234,   182,   275,   237,   509,   182,   190,   512,   576,
     910,   147,   313,   314,   151,   313,   314,   123,   573,   552,
     977,   576,   174,   923,   274,   552,   298,   576,   552,   722,
     987,    40,    12,   210,   211,   992,   576,   994,  1618,   996,
     552,   998,   730,  1000,   104,  1002,  1564,  1004,   298,   573,
     552,  1008,   576,  1010,   657,   552,   573,   552,   124,   576,
      40,   573,    45,    40,   576,    48,   552,   124,    48,   129,
      11,   573,    47,    48,   576,   763,   573,   306,   573,   576,
     275,   576,    23,   312,   221,   222,   315,   573,    47,    48,
     576,   275,   229,    34,  1479,  1621,   699,   700,   701,   702,
     316,   317,   318,   242,   121,   122,   172,   302,   389,   212,
     213,   214,   393,   242,   298,   172,   397,  1490,  1491,  1492,
    1493,   573,   403,  1062,   576,   182,   630,   382,    32,   382,
    1069,   114,  1071,  1027,   415,   388,   640,   641,   419,   420,
     115,   396,   224,   396,    48,  1039,     9,   400,   401,  1449,
     921,   432,   433,   434,   925,   118,   115,   239,   439,  1484,
    1485,   416,   573,   416,   668,   576,   421,  1062,   421,   424,
      44,   424,    46,   428,  1069,   428,  1071,  1502,  1135,    12,
    1011,  1012,  1139,   573,  1084,   438,   576,  1087,  1088,    52,
      53,    54,   795,    23,  1091,    40,   451,    33,   451,   275,
     573,  1098,  1102,   576,    19,    41,    51,    40,    19,  1027,
    1083,    41,   716,   717,   718,    48,    48,   573,   499,  1176,
     576,  1039,   298,   504,   505,   301,   302,   508,   831,    40,
      33,  1188,   275,   903,   837,    67,    68,    48,   137,  1133,
      94,   204,    67,    68,  1138,   144,    49,   210,   211,  1143,
      64,    65,    66,  1147,   297,   298,    21,    33,  1583,   113,
     515,   124,   515,   243,    19,   119,   246,   247,   248,   249,
      33,   251,   252,    49,   254,    40,   101,   257,   258,   259,
     260,   261,   262,   263,   264,   265,    49,   275,   268,   269,
     270,   190,   191,   192,   274,   275,    22,   285,  1623,    24,
    1194,    25,    27,    28,    40,    33,    31,    33,   812,   297,
     298,   125,   123,  1497,   275,  1133,   296,   297,    42,   299,
    1138,    49,   603,    48,   266,  1143,   287,  1224,   308,  1147,
     275,   311,   312,   243,    22,    40,   297,   618,  1277,    33,
     250,   195,   196,   197,    33,    33,   200,   201,   852,   853,
     854,   299,   297,   298,     9,    49,   298,   305,   172,   863,
      49,   303,   304,   311,   645,   646,   180,   181,   182,   183,
     184,   319,    40,    48,   274,   275,  1194,   191,   192,    22,
      48,   636,  1277,   636,   888,   868,    32,    32,  1081,  1082,
      33,   116,   117,    40,    40,  1352,   296,   297,   653,   299,
     653,    48,    48,    48,   657,    19,    52,    53,    54,   223,
    1307,    33,   667,    33,   667,   275,   230,  1374,    33,   233,
      19,  1315,  1322,  1323,  1027,   285,   286,    49,    33,    49,
     273,  1331,   298,  1390,    49,   301,  1039,   297,   298,   282,
      33,  1398,    19,  1340,    49,  1402,   699,   700,   701,   702,
     468,   469,   470,   471,   472,   473,    49,   475,   476,   477,
     478,   479,   480,   481,   482,   275,    33,   185,    33,    33,
      33,   189,   727,    33,   727,   285,   286,   732,   124,   732,
      22,    19,    49,   736,    49,    49,    49,   297,   298,    49,
      19,    33,    64,   179,    66,    48,    84,  1315,   179,    87,
     179,   187,    90,    91,    92,    93,   187,   179,   187,    64,
      65,    66,    30,   170,    19,   187,    33,  1021,    36,   176,
    1024,  1025,  1026,    33,    41,    33,  1030,  1270,    30,    19,
    1133,    41,    19,    41,    36,  1138,  1279,  1280,    33,    30,
    1143,    33,   795,  1264,  1147,    36,    41,  1441,  1442,    41,
    1054,    33,  1452,   125,   164,   165,   219,  1227,   243,    41,
     245,   235,   150,  1233,   227,   239,    33,   252,   253,   850,
     125,    33,  1445,   258,    41,  1079,  1080,    19,   831,    41,
    1250,  1478,    33,  1477,   837,   866,   271,   272,     9,    33,
      41,  1194,    48,  1424,  1425,     9,   184,    41,  1495,    44,
     172,    46,   857,  1503,   857,   207,   208,   209,   180,   181,
     182,   183,   184,  1507,   202,   203,    40,   172,   206,   191,
     192,    40,  1516,  1441,  1442,   180,   181,   182,   183,   184,
      64,    65,    66,    33,  1528,    33,   191,   192,   163,    33,
     165,    41,   233,    41,   104,   105,  1540,    41,   903,    33,
     903,   223,    64,  1547,    66,    33,    19,    41,   230,  1477,
     678,   233,   917,    41,   917,    40,   921,  1564,   921,    58,
     925,    33,   925,   188,   189,  1572,  1615,   238,   233,   932,
     130,   131,   155,   133,   134,   135,   156,   137,   138,  1507,
      64,   125,    66,  1590,    90,    91,    92,    93,  1516,     3,
       4,     5,     6,     7,     8,   194,  1537,    52,    53,    54,
    1528,   157,  1315,   125,   212,   213,   214,     3,     4,     5,
     309,   310,  1540,   159,  1467,  1468,    34,    35,   167,  1547,
     170,   171,  1179,  1630,  1631,  1632,  1633,    21,   172,   170,
     171,  1638,   168,  1190,  1191,  1249,   180,   181,   182,   183,
     184,   125,  1199,   119,   120,    21,  1203,   186,  1205,  1206,
     172,  1208,  1432,   172,  1211,  1212,  1436,   189,   180,   181,
     182,   183,   184,    40,  1027,   191,   192,   121,   122,   191,
     192,   139,   140,   283,   284,    40,  1039,   311,   312,   223,
      40,   288,   289,   142,   143,    40,   230,    40,   172,   233,
     177,   178,    85,    86,    85,    86,   180,   181,   182,   183,
     184,    29,   255,   256,   142,   143,  1559,    48,    98,    99,
      41,   233,   215,   216,   484,   485,   491,   492,    41,   493,
     494,    16,    17,   502,   503,   151,   701,   702,  1441,  1442,
    1625,  1626,    48,    41,  1097,    33,     9,    33,    48,   223,
       9,    48,   158,    62,   136,   158,   230,   151,  1113,   233,
    1113,   137,   151,  1144,  1097,    52,   151,  1148,   124,    50,
     104,    41,   105,    41,  1477,    41,    41,    41,    10,  1132,
    1133,    41,   224,    58,   224,  1138,    48,   151,   136,    37,
    1143,  1172,   124,     9,  1147,   130,  1177,  1178,   113,  1132,
      83,  1182,   129,   132,  1507,    10,    10,   149,  1189,   153,
       9,    40,    40,  1516,  1195,    40,  1197,    40,    40,  1200,
      33,   240,    89,  1204,   241,  1528,    82,   198,  1209,  1433,
      23,  1435,   229,  1437,  1438,  1216,   229,  1540,   141,  1220,
     124,  1194,    37,    33,  1547,    13,    14,    15,    16,    17,
      18,   124,   172,   172,   190,   234,    24,    83,   113,   298,
     255,   275,   300,   298,   298,   243,   243,    41,  1472,    37,
       9,   193,  1227,   224,  1227,    41,    41,    41,  1233,     9,
    1233,    41,    96,   224,   141,   243,   212,    95,   246,   247,
     248,   249,    33,   251,   132,  1250,   254,  1250,    33,   257,
     258,   259,   260,   261,   262,   263,   264,   265,    37,    37,
     268,   269,   270,   212,   172,   124,   284,    43,   283,   121,
     243,   267,   252,    43,     9,   300,   132,   130,    41,    41,
     154,   151,    40,   144,    49,    19,    95,    40,   199,   107,
     108,   109,   110,   111,   112,   234,    40,  1300,   124,    12,
     308,   151,   121,   311,   312,   151,  1309,   151,   212,    21,
     130,   243,  1315,   243,    10,    41,    33,  1300,   205,   243,
      26,   113,   246,   247,   248,   249,  1309,   251,   130,   943,
     254,    41,  1167,   257,   258,   259,   260,   261,   262,   263,
     264,   265,  1373,   205,   268,   269,   270,     6,   955,  1185,
    1174,   169,  1486,  1607,   300,  1609,   246,   247,   248,   249,
     300,   251,   306,   306,   254,   307,   318,   257,   258,   259,
     260,   261,   262,   263,   264,   265,  1295,   835,   268,   269,
     270,  1635,   301,   312,   308,   312,   243,   311,   312,   246,
     247,   248,   249,   315,   251,   200,   634,   254,   863,  1054,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   637,
     313,   268,   269,   270,   315,   102,  1028,   639,   308,   467,
     466,   311,   312,  1269,   888,   512,  1224,  1432,  1426,  1432,
     441,  1436,   702,  1436,   837,   438,   394,   394,  1441,  1442,
     400,   831,  1069,  1071,  1277,  1259,   867,  1461,  1273,   876,
    1126,   308,  1505,  1500,   311,   312,   629,  1091,  1299,    -1,
    1446,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1477,    -1,  1479,    -1,    -1,  1482,
    1483,    -1,    -1,  1486,    -1,    -1,  1517,  1490,  1491,  1492,
    1493,    -1,    -1,    -1,    -1,    -1,  1479,    -1,  1529,  1482,
    1483,    -1,    -1,  1486,  1507,    -1,    -1,  1490,  1491,  1492,
    1493,    -1,    -1,  1516,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1528,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1540,    -1,    -1,
      -1,    -1,    -1,    -1,  1547,    -1,  1577,    55,    56,    57,
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
     238,   239,   240,   241,   242,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    36,    -1,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   313,    -1,   315,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,   119,   120,   121,    -1,    -1,
     124,   125,   126,   127,    -1,    -1,   130,   131,   132,   133,
     134,    -1,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    -1,   186,   187,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    -1,    34,    35,    36,    -1,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,   119,
     120,   121,    -1,    -1,   124,   125,   126,   127,    -1,    -1,
     130,   131,   132,   133,   134,    -1,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,   186,   187,   188,    -1,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    -1,    34,    35,
      36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,   119,   120,   121,    -1,    -1,   124,   125,
     126,   127,    -1,    -1,   130,   131,   132,   133,   134,    -1,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
     186,   187,   188,    -1,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,     9,    -1,    11,
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
     132,   133,   134,    -1,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    -1,   186,   187,   188,    -1,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
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
     238,   239,   240,   241,   242,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,   119,   120,   121,    -1,    -1,
     124,   125,   126,   127,    -1,    -1,   130,   131,   132,   133,
     134,    -1,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    -1,   186,   187,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,     9,
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
     130,   131,   132,   133,   134,    -1,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,   186,   187,   188,    -1,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,     9,    -1,    11,    -1,    -1,    -1,    -1,
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
     126,   127,    -1,    -1,   130,   131,   132,   133,   134,    -1,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
     186,   187,   188,    -1,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,     9,    -1,    11,
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
     132,   133,   134,    -1,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    -1,   186,   187,   188,    -1,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
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
     238,   239,   240,   241,   242,     9,    -1,    11,    -1,    -1,
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
     134,    -1,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    -1,   186,   187,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,     9,
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
     130,   131,   132,   133,   134,    -1,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,   186,   187,   188,    -1,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,     9,    -1,    11,    -1,    -1,    -1,    -1,
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
     126,   127,    -1,    -1,   130,   131,   132,   133,   134,    -1,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
     186,   187,   188,    -1,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    24,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,
      -1,    -1,   124,   125,   126,   127,    -1,    -1,   130,   131,
     132,   133,   134,    -1,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    -1,   186,   187,   188,    -1,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     238,   239,   240,   241,   242,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,
     126,   127,    -1,    -1,   130,   131,   132,   133,   134,    -1,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
     186,   187,   188,    -1,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,    11,    -1,    -1,
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
     134,    -1,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    -1,   186,   187,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,    11,
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
     132,   133,   134,    -1,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    -1,   186,   187,   188,    -1,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
     130,   131,   132,   133,   134,    -1,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,   186,   187,   188,    -1,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
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
     238,   239,   240,   241,   242,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,    -1,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
     186,   187,   188,    -1,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
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
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
     130,   131,   132,   133,   134,    -1,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,   186,   187,   188,    -1,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,   119,   120,   121,    -1,    -1,   124,   125,    -1,    -1,
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
     238,   239,   240,   241,   242,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
     130,   131,   132,   133,   134,    -1,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,   186,   187,   188,    -1,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,   119,   120,
     121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,
     131,   132,   133,   134,    -1,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,    -1,   149,    -1,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,    -1,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,    -1,   186,   187,   188,    -1,    -1,
     191,    -1,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,    -1,   243,    -1,    -1,   246,   247,   248,   249,
      -1,   251,    -1,    -1,   254,    -1,    -1,   257,   258,   259,
     260,   261,   262,   263,   264,   265,    -1,    -1,   268,   269,
     270,   243,    -1,    -1,   246,   247,   248,   249,    -1,   251,
      -1,    -1,   254,    -1,    -1,   257,   258,   259,   260,   261,
     262,   263,   264,   265,    -1,    -1,   268,   269,   270,   243,
      -1,    -1,   246,   247,   248,   249,    -1,   251,   308,    -1,
     254,   311,   312,   257,   258,   259,   260,   261,   262,   263,
     264,   265,    -1,    -1,   268,   269,   270,   243,    -1,    -1,
     246,   247,   248,   249,    -1,   251,   308,    -1,   254,   311,
     312,   257,   258,   259,   260,   261,   262,   263,   264,   265,
      -1,    -1,   268,   269,   270,   243,    -1,    -1,   246,   247,
     248,   249,    -1,   251,   308,    -1,   254,   311,   312,   257,
     258,   259,   260,   261,   262,   263,   264,   265,    -1,    -1,
     268,   269,   270,   243,    -1,    -1,   246,   247,   248,   249,
      -1,   251,   308,    -1,   254,   311,   312,   257,   258,   259,
     260,   261,   262,   263,   264,   265,    -1,    -1,   268,   269,
     270,   243,    -1,    -1,   246,   247,   248,   249,    -1,   251,
     308,    -1,   254,   311,   312,   257,   258,   259,   260,   261,
     262,   263,   264,   265,    -1,    -1,   268,   269,   270,   243,
      -1,    -1,   246,   247,   248,   249,    -1,   251,   308,    -1,
     254,   311,   312,   257,   258,   259,   260,   261,   262,   263,
     264,   265,    -1,    -1,   268,   269,   270,   243,    -1,    -1,
     246,   247,   248,   249,    -1,   251,   308,    -1,   254,   311,
     312,   257,   258,   259,   260,   261,   262,   263,   264,   265,
      -1,    -1,   268,   269,   270,   243,    -1,    -1,   246,   247,
     248,   249,    -1,   251,   308,    -1,   254,   311,   312,   257,
     258,   259,   260,   261,   262,   263,   264,   265,    -1,    -1,
     268,   269,   270,   243,    -1,    -1,   246,   247,   248,   249,
      -1,   251,   308,    -1,   254,   311,   312,   257,   258,   259,
     260,   261,   262,   263,   264,   265,    -1,    -1,   268,   269,
     270,   243,    -1,    -1,   246,   247,   248,   249,    -1,   251,
     308,    -1,   254,   311,   312,   257,   258,   259,   260,   261,
     262,   263,   264,   265,    -1,    -1,   268,   269,   270,   243,
      -1,    -1,   246,   247,   248,   249,    -1,   251,   308,    -1,
     254,   311,   312,   257,   258,   259,   260,   261,   262,   263,
     264,   265,    -1,    -1,   268,   269,   270,   243,    -1,    -1,
     246,   247,   248,   249,    -1,   251,   308,    -1,   254,   311,
     312,   257,   258,   259,   260,   261,   262,   263,   264,   265,
      -1,    -1,   268,   269,   270,   243,    -1,    -1,   246,   247,
     248,   249,    -1,   251,   308,    -1,   254,   311,   312,   257,
     258,   259,   260,   261,   262,   263,   264,   265,    -1,    -1,
     268,   269,   270,   243,    -1,    -1,   246,   247,   248,   249,
      -1,   251,   308,    -1,   254,   311,   312,   257,   258,   259,
     260,   261,   262,   263,   264,   265,    -1,    -1,   268,   269,
     270,   243,    -1,    -1,   246,   247,   248,   249,    -1,   251,
     308,    -1,   254,   311,   312,   257,   258,   259,   260,   261,
     262,   263,   264,   265,    -1,    -1,   268,   269,   270,   243,
      -1,    -1,   246,   247,   248,   249,    -1,   251,   308,    -1,
     254,   311,   312,   257,   258,   259,   260,   261,   262,   263,
     264,   265,    -1,    -1,   268,   269,   270,   243,    -1,    -1,
     246,   247,   248,   249,    -1,   251,   308,    -1,   254,   311,
     312,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     243,    -1,   268,   269,   270,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    -1,    -1,   311,   312,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     273,    -1,   275,   276,   277,   278,   279,   280,   281,    -1,
      -1,    -1,   308,    -1,    -1,   311,   312,   290,   291,   292,
     293,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,   306,   307
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,   320,     9,    11,
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
     237,   238,   239,   240,   241,   242,   454,   455,   456,   457,
     458,   459,   461,   466,   477,   480,   484,   485,   486,   487,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   528,   529,   530,
     531,   532,   535,   536,   537,   548,   550,   552,   553,   554,
     557,   559,   560,   561,   571,   572,   573,   574,   575,   576,
     577,   579,   581,   583,   624,   625,   626,   627,   628,   629,
     630,   633,   634,   635,   636,   638,   645,   646,   650,   651,
     652,   653,   659,   660,   185,   189,   405,   406,   407,   408,
     421,   424,   412,   413,   414,   415,   421,   424,   416,   417,
     418,   419,   421,   424,   420,   421,   422,   423,   424,   425,
     244,   308,   321,   322,   344,     0,    55,    56,    57,    58,
      59,    60,    61,    62,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,   102,   119,   120,   131,
     133,   145,   146,   148,   152,   166,   172,   190,   192,   217,
     220,   226,   228,   236,   237,   527,   659,   660,    55,    56,
      59,    62,   190,   519,   121,   122,   538,   128,   106,   549,
     508,   104,   540,   499,   499,    41,   455,    19,    40,    48,
     123,   558,    40,    48,    40,    40,    40,    48,   123,   562,
      40,    40,    40,    48,    19,    19,    19,    19,    19,    19,
      19,    19,    19,    19,    19,    48,     9,   631,   632,    48,
      48,     9,   462,   463,     9,   193,   467,   468,     9,   478,
     479,   478,    40,    40,    48,    67,    68,    19,    40,    48,
     123,   555,    40,   449,    58,   103,    58,   225,    58,    58,
     225,   233,   238,    33,   130,   131,   133,   134,   135,   137,
     138,   459,   460,   469,   470,   471,   155,   156,    13,    14,
      15,    16,    17,    18,    24,    37,   107,   108,   109,   110,
     111,   112,   169,   194,    34,    35,   160,    11,    69,   161,
     162,    12,   163,   164,   165,   157,   168,   159,   167,    48,
     504,   508,    30,    36,    21,    21,   519,   519,    21,    40,
     456,   456,    40,    51,   186,   172,   179,   187,   409,   410,
     427,   429,   430,   431,   432,   434,   435,   436,   439,   440,
     441,   444,   445,   447,   454,   639,   406,   407,   408,   179,
     409,   410,   427,   429,   431,   432,   433,   445,   454,   639,
     413,   414,   415,   179,   426,   427,   429,   430,   431,   432,
     434,   435,   436,   439,   440,   445,   447,   448,   454,   623,
     639,   417,   418,   419,   422,   423,   425,   179,   426,   427,
     429,   431,   432,   433,   445,   448,   454,   639,   323,   345,
     539,   104,   105,   551,    29,   659,    41,    11,    41,   578,
     585,   638,   455,    48,   556,    41,   455,    41,    61,   190,
     581,   583,    41,    41,   124,   637,   659,   455,    48,   563,
     580,   585,   584,   586,   638,    41,   455,   455,   527,    33,
     218,   455,   455,   527,    33,   527,     9,    33,   527,    33,
     147,   147,   455,   455,   455,    48,    48,    11,    41,   582,
     586,   455,   556,     9,    41,   451,   452,   151,   566,   456,
     158,   456,   659,   456,   456,   456,   456,     9,   136,   137,
     486,   487,   489,   489,   489,   489,   489,   489,   488,   489,
     489,   489,   489,   489,   489,   489,   489,    62,   492,   492,
     491,   493,   493,   493,   493,   494,   494,   495,   495,   158,
     151,   151,   151,    49,   455,   509,   509,   455,   455,   455,
      23,    41,   456,   533,   534,   151,   221,   222,   229,    41,
     533,    52,   124,   637,    64,    66,   125,   172,   180,   181,
     182,   183,   184,   191,   192,   233,   411,   188,   189,    50,
     428,   428,   428,   428,   428,   428,   428,   428,   179,   187,
      65,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     179,   223,   230,   450,   428,   428,   428,   428,   428,   428,
     428,   428,   179,   179,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   273,   282,   324,   309,   310,   347,   104,
     540,   105,   104,   129,   505,    33,    41,    49,    49,   455,
      49,    41,    41,    41,    41,    49,    49,   455,    41,    41,
      49,    49,    10,   632,   456,    49,    49,   566,   463,   566,
     527,   468,   566,   479,   456,   456,    41,    41,    49,   455,
     455,    33,    41,    49,   527,    33,    41,    40,    63,   173,
     192,   567,   569,   570,   571,   638,   654,   655,   656,   658,
      48,   453,   224,    58,   151,   224,   224,   239,   527,   456,
     472,   473,   474,   136,   489,    40,    48,   242,   503,   524,
     589,   592,   593,   594,   595,   596,   597,   598,   599,   567,
     567,   564,   570,   564,    49,    22,    22,    22,    33,    41,
     219,   227,   456,   456,   456,    41,   175,   428,    37,   170,
     171,   124,   588,     9,   637,   170,   171,   119,   120,   137,
     144,   190,   411,   170,   176,   437,   659,   235,   239,   642,
     660,   172,   182,   443,   588,   172,   588,    83,   606,    67,
      68,   101,   411,   243,   245,   252,   253,   258,   271,   272,
     325,   326,   329,   330,   334,   335,   336,   337,   338,   339,
     342,   343,   346,   243,   246,   247,   248,   249,   251,   254,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   268,
     269,   270,   311,   312,   344,   348,   349,   350,   351,   352,
     353,   354,   357,   358,   362,   363,   364,   365,   366,   371,
     372,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   121,   122,    25,    42,   129,   587,   638,    49,    49,
     456,   130,   113,   464,    10,    10,   132,   149,   481,   483,
     153,    49,    49,   587,   566,   452,   569,    40,    40,    40,
      11,    23,    34,   568,   455,   456,   456,   456,    40,    40,
     313,   315,   647,   659,    33,   139,   140,   475,   472,   589,
     455,   596,    48,   207,   208,   209,   600,    89,   622,   240,
     591,   241,    82,   606,   198,   601,    23,   565,   534,   229,
     229,   124,   588,   527,    37,   141,   588,   172,   172,    33,
     124,   659,   121,   313,   314,   643,   644,   234,   449,   637,
     190,   588,   113,   442,   637,   442,    84,    87,    90,    91,
      92,    93,   150,   184,   202,   203,   206,   607,   608,   609,
     610,   611,   614,   619,   620,   621,    83,   660,   283,   284,
     274,   275,   296,   297,   299,   331,   275,   287,   297,   331,
     275,   285,   286,   297,   298,   347,   275,   297,   298,   347,
     243,   273,   275,   276,   277,   278,   279,   280,   281,   290,
     291,   292,   293,   294,   295,   305,   306,   307,   243,   114,
     453,   352,   298,   255,   367,   368,   369,   300,   298,   301,
     347,   274,   298,   356,   275,   359,   243,   347,   266,   298,
     303,   304,   373,   275,   297,   298,   347,   298,   347,   275,
     298,   347,   347,   275,   298,   301,   302,   347,   275,   298,
     347,   275,   302,   347,   243,   288,   298,   288,   289,   347,
     298,   347,   540,   540,   547,    41,   456,     9,   193,   465,
     456,   456,   456,     9,   567,   182,   482,   483,   456,    23,
      41,    41,    41,    41,    11,    41,   567,   657,    49,   224,
       9,   648,   649,   648,   224,   473,   141,   476,    41,    49,
      49,   589,    96,   212,    95,   593,    94,   113,   119,   195,
     196,   197,   200,   201,   590,   603,   594,   132,   118,   210,
     211,   602,   456,   456,   428,   428,   566,   588,   142,   143,
     588,   588,   177,   178,   438,    40,   453,   641,   642,    33,
      20,    30,    36,    55,    70,   231,   232,   395,   396,   397,
     398,   401,   402,   403,   519,   151,   174,   453,    37,   172,
     442,   588,    33,    37,    90,    91,    92,    93,    85,    86,
      40,   113,   182,   613,   212,    85,    86,   659,   636,   607,
     449,   284,   283,   327,   395,   567,    52,    53,    54,   328,
     252,   332,   333,   347,   567,   347,   567,   455,   243,   567,
     455,   243,    62,   121,   316,   317,   318,   340,   121,   341,
     341,   243,   455,   300,   256,   368,   370,   347,   455,   455,
     346,   243,   121,   313,   315,   355,   455,   243,   250,   360,
     361,   243,   360,   243,   347,   455,   346,   346,   267,   374,
     567,   455,   243,   455,   243,   346,   455,   243,   243,   346,
     455,   346,   346,   243,   346,   455,   243,   346,   346,   243,
     455,   243,   455,   243,    43,    43,    31,   116,   117,   453,
     536,   527,     9,   132,   527,   130,     9,   130,   154,    41,
      41,   151,    33,    41,   456,   527,    33,    41,    41,    40,
     142,   143,   144,   600,    49,   493,    95,    98,    99,   490,
     491,   602,   215,   216,   605,   605,   595,   100,   143,   491,
     491,   199,    10,   174,   446,    41,   451,   151,   640,   234,
     644,   519,    19,    19,    40,    40,    12,   453,   641,   402,
      30,    36,    30,    36,   404,   567,   588,   588,   212,   182,
     613,   588,    40,   113,   182,   616,   124,   151,   174,   453,
     121,   313,   314,   275,   285,   286,   297,   298,   347,   243,
     243,   121,   455,   347,   243,   243,   275,   285,   297,   298,
     347,   243,   347,   243,   347,   540,   540,   538,   527,   456,
     151,   456,   527,   456,   456,   567,   567,   151,   566,   649,
     648,   588,   212,   213,   214,   604,   604,   491,   491,   160,
     456,    41,   567,   453,   395,   519,   519,   399,   526,   636,
     636,   396,   640,   402,   402,   402,   402,    21,   174,   453,
     442,   612,   612,   204,   602,   617,   636,   588,   615,   615,
     567,   567,   455,   243,   243,   567,   455,   243,   243,    44,
      46,   541,    44,    46,   542,   540,   567,   130,   567,    10,
      41,   491,   453,   641,    41,    33,   453,   455,    33,    41,
      41,   636,   205,    33,    41,   163,   165,   618,   174,   453,
     543,   545,   544,   546,    26,   130,   456,   456,   640,   400,
     524,   526,    22,   613,   602,   636,   616,   616,    45,   114,
     453,    47,   115,   453,    45,   114,   453,    47,   115,   453,
     456,   453,    41,   205
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
#line 764 "../src/parser/XQParser.y"
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
#line 794 "../src/parser/XQParser.y"
    {
  }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 797 "../src/parser/XQParser.y"
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
#line 820 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 824 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 842 "../src/parser/XQParser.y"
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
#line 861 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, 0, MEMMGR));
  }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 865 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 870 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 877 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 882 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 887 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 895 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 899 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 905 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 910 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 920 "../src/parser/XQParser.y"
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
#line 933 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, false, true, MEMMGR));
  }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 937 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 944 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 949 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 957 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 961 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 969 "../src/parser/XQParser.y"
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
#line 996 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 1000 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 1007 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 1013 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 1018 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 1023 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1032 "../src/parser/XQParser.y"
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
#line 1056 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1060 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1067 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1072 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1077 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 1082 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1093 "../src/parser/XQParser.y"
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
#line 1111 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1115 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1122 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1127 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 1135 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 1160 "../src/parser/XQParser.y"
    {
  }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1163 "../src/parser/XQParser.y"
    {
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1166 "../src/parser/XQParser.y"
    {
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1169 "../src/parser/XQParser.y"
    {
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1172 "../src/parser/XQParser.y"
    {
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1175 "../src/parser/XQParser.y"
    {
  }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1178 "../src/parser/XQParser.y"
    {
  }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1181 "../src/parser/XQParser.y"
    {
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1184 "../src/parser/XQParser.y"
    {
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1187 "../src/parser/XQParser.y"
    {
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1190 "../src/parser/XQParser.y"
    {
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1193 "../src/parser/XQParser.y"
    {
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1196 "../src/parser/XQParser.y"
    {
  }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1199 "../src/parser/XQParser.y"
    {
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1202 "../src/parser/XQParser.y"
    {
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1205 "../src/parser/XQParser.y"
    {
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1208 "../src/parser/XQParser.y"
    {
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1211 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1221 "../src/parser/XQParser.y"
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
#line 1233 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1236 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1244 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1249 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1254 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1262 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1270 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1281 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1291 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1295 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1302 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1311 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1315 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1320 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1330 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1334 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1339 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1344 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1373 "../src/parser/XQParser.y"
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
#line 1391 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1395 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1400 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1409 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1418 "../src/parser/XQParser.y"
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
#line 1438 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1442 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1447 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1455 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1460 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1464 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1471 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1475 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1483 "../src/parser/XQParser.y"
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
#line 1496 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1500 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1510 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1514 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1522 "../src/parser/XQParser.y"
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
#line 1540 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1544 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1551 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1556 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1561 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1569 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1575 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1583 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1591 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1598 "../src/parser/XQParser.y"
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
#line 1612 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1616 "../src/parser/XQParser.y"
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
#line 1630 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1639 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1646 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1650 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1657 "../src/parser/XQParser.y"
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
#line 1692 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1696 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1701 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1707 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1716 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1720 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1727 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1731 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1738 "../src/parser/XQParser.y"
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
#line 1756 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), 0, 0, MEMMGR));
  }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1760 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1767 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1772 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->seqType = (yyvsp[(3) - (3)].sequenceType);
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1780 "../src/parser/XQParser.y"
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
#line 1798 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1802 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1810 "../src/parser/XQParser.y"
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
#line 1832 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1836 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1843 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1851 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1860 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1868 "../src/parser/XQParser.y"
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
#line 1905 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1909 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1916 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1923 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1932 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1941 "../src/parser/XQParser.y"
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
#line 1968 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1972 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1979 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1991 "../src/parser/XQParser.y"
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
#line 2017 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 2021 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 2028 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 2038 "../src/parser/XQParser.y"
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
#line 2050 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2054 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 2059 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2068 "../src/parser/XQParser.y"
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
#line 2081 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 2085 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 2090 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2099 "../src/parser/XQParser.y"
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
#line 2113 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 2117 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2130 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2135 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 2147 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2151 "../src/parser/XQParser.y"
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
#line 2159 "../src/parser/XQParser.y"
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
#line 2172 "../src/parser/XQParser.y"
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
#line 2180 "../src/parser/XQParser.y"
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
#line 2193 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 2200 "../src/parser/XQParser.y"
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
#line 2239 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 2243 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2247 "../src/parser/XQParser.y"
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
#line 2265 "../src/parser/XQParser.y"
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
#line 2283 "../src/parser/XQParser.y"
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
#line 2293 "../src/parser/XQParser.y"
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
#line 2307 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 2315 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 2321 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 2327 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 2333 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2344 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 2348 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 2378 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 2382 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2386 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2390 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2394 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 2398 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 2404 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 2410 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 2436 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), (yyvsp[(5) - (5)].astNode), NULL, false, true, MEMMGR));
  }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 2440 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 2444 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), NULL, NULL, false, true, MEMMGR));
  }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 2448 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), NULL, (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 2477 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 2481 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 2485 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 2489 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 2493 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 2497 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 2503 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 2509 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 2513 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 2540 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 2544 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 2548 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 2552 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2556 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2560 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2566 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2572 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2591 "../src/parser/XQParser.y"
    {
    if(!XPath2Utils::equals((yyvsp[(3) - (4)].str),sz1_0))
      yyerror((yylsp[(2) - (4)]), "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
  }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2596 "../src/parser/XQParser.y"
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
#line 2625 "../src/parser/XQParser.y"
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
#line 2639 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2643 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 2647 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2651 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2655 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 2659 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 2665 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2671 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2675 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 2707 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 2715 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 2720 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 2729 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 2734 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 2743 "../src/parser/XQParser.y"
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
#line 2803 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 2811 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 2816 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 2825 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 2830 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 2839 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 2849 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 2853 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 2861 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 2865 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 2873 "../src/parser/XQParser.y"
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
#line 2889 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 2898 "../src/parser/XQParser.y"
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
#line 2910 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 2918 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 2922 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 2927 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 2936 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 2940 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 2948 "../src/parser/XQParser.y"
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
#line 2958 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), CONTEXT, &loc);
  }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 2970 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 2977 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 2981 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 2989 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 2994 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 3004 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),WRAP((yylsp[(6) - (6)]), (yyvsp[(6) - (6)].astNode)),NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 3008 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),WRAP((yylsp[(8) - (8)]), (yyvsp[(8) - (8)].astNode)),(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 3012 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),NULL,NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 3016 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),NULL,(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 3023 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 3027 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 3033 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 3037 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 3045 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 3050 "../src/parser/XQParser.y"
    {
    XQUserFunction::ArgumentSpecs* paramList = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 3060 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQUserFunction::ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 3068 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 3076 "../src/parser/XQParser.y"
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
#line 3089 "../src/parser/XQParser.y"
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
#line 3127 "../src/parser/XQParser.y"
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
#line 3172 "../src/parser/XQParser.y"
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
#line 3185 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 3200 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 3207 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 3215 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 3226 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 3230 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 3240 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 3244 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 3254 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 3261 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 3269 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 3273 "../src/parser/XQParser.y"
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
#line 3286 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 3294 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) CountTuple(0, (yyvsp[(3) - (3)].str), MEMMGR));
  }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 3302 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 3307 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 3315 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 3325 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 3332 "../src/parser/XQParser.y"
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

  case 412:

/* Line 1455 of yacc.c  */
#line 3347 "../src/parser/XQParser.y"
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

  case 413:

/* Line 1455 of yacc.c  */
#line 3363 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 3367 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3371 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 3378 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 3387 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 3391 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 3400 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 3408 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 3419 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 3427 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 3438 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR);
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3445 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].caseClauses)->push_back((yyvsp[(2) - (2)].caseClause));
    (yyval.caseClauses)=(yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 3450 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses)=new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back((yyvsp[(1) - (1)].caseClause));
  }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 3458 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 3462 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 3470 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, (yyvsp[(2) - (4)].sequenceType), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 3474 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (7)].str), (yyvsp[(5) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode)));
  }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 3482 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 3490 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == Or::name) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 3504 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == And::name) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 3523 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 3527 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3530 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 3531 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 3535 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 3539 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 3543 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 3547 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 3551 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 3555 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 3559 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 3563 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 3567 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 3571 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 3575 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 3579 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 3588 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 3592 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 3601 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Range(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 3610 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 3614 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 3623 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 3627 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 3631 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 3635 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 3644 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 3648 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 3657 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 3661 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 3670 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQInstanceOf((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 3679 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 3689 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 3698 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 3707 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 3713 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 3734 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 3738 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 3742 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 3750 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 3757 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 3770 "../src/parser/XQParser.y"
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

  case 495:

/* Line 1455 of yacc.c  */
#line 3791 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 3800 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 3806 "../src/parser/XQParser.y"
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

  case 500:

/* Line 1455 of yacc.c  */
#line 3831 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 3845 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 3851 "../src/parser/XQParser.y"
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

  case 507:

/* Line 1455 of yacc.c  */
#line 3873 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 3883 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 3890 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 3899 "../src/parser/XQParser.y"
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

  case 514:

/* Line 1455 of yacc.c  */
#line 3922 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 3926 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 3930 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 3934 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 3938 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 3942 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 3946 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 521:

/* Line 1455 of yacc.c  */
#line 3950 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 522:

/* Line 1455 of yacc.c  */
#line 3958 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 3966 "../src/parser/XQParser.y"
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

  case 524:

/* Line 1455 of yacc.c  */
#line 3983 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 4000 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 4004 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 528:

/* Line 1455 of yacc.c  */
#line 4008 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 529:

/* Line 1455 of yacc.c  */
#line 4012 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 4016 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 4024 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 4036 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 4046 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 4058 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 4065 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 4072 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 4085 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 4114 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 4125 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 4129 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 4137 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 4145 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 4155 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 4165 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 4169 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 4176 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 4181 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 4192 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 4201 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 4205 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 4218 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 4224 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 4237 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 4241 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 580:

/* Line 1455 of yacc.c  */
#line 4250 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 4266 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 4270 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 585:

/* Line 1455 of yacc.c  */
#line 4277 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 586:

/* Line 1455 of yacc.c  */
#line 4281 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 587:

/* Line 1455 of yacc.c  */
#line 4291 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 588:

/* Line 1455 of yacc.c  */
#line 4295 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 4300 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 4310 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 4314 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 4318 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 4331 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 4335 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 4340 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 4350 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 4354 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 4358 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 4375 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 4379 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4384 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 4389 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 4396 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                 SchemaSymbols::fgDT_STRING,
                                 (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
    }
  }
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 4409 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(2) - (3)].str), AnyAtomicType::STRING,
                  MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 4422 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 4431 "../src/parser/XQParser.y"
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

  case 609:

/* Line 1455 of yacc.c  */
#line 4451 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 4474 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 4482 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 4490 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 4494 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 620:

/* Line 1455 of yacc.c  */
#line 4502 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 4506 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 4515 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 623:

/* Line 1455 of yacc.c  */
#line 4522 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 624:

/* Line 1455 of yacc.c  */
#line 4526 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 625:

/* Line 1455 of yacc.c  */
#line 4534 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 626:

/* Line 1455 of yacc.c  */
#line 4542 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 627:

/* Line 1455 of yacc.c  */
#line 4550 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 628:

/* Line 1455 of yacc.c  */
#line 4557 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(1) - (1)].str), AnyAtomicType::STRING, MEMMGR));
  }
    break;

  case 629:

/* Line 1455 of yacc.c  */
#line 4567 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 630:

/* Line 1455 of yacc.c  */
#line 4574 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 631:

/* Line 1455 of yacc.c  */
#line 4578 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 632:

/* Line 1455 of yacc.c  */
#line 4586 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 633:

/* Line 1455 of yacc.c  */
#line 4596 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 634:

/* Line 1455 of yacc.c  */
#line 4600 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 4608 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 4612 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 4622 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 4629 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 4638 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 4640 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4642 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4644 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 4650 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 4654 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 4689 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 4697 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 4701 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 4706 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_SCHEMA_DOCUMENT);
  }
    break;

  case 662:

/* Line 1455 of yacc.c  */
#line 4715 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 663:

/* Line 1455 of yacc.c  */
#line 4723 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 664:

/* Line 1455 of yacc.c  */
#line 4731 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 665:

/* Line 1455 of yacc.c  */
#line 4735 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 666:

/* Line 1455 of yacc.c  */
#line 4739 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 667:

/* Line 1455 of yacc.c  */
#line 4747 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 668:

/* Line 1455 of yacc.c  */
#line 4751 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 669:

/* Line 1455 of yacc.c  */
#line 4755 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 671:

/* Line 1455 of yacc.c  */
#line 4764 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 672:

/* Line 1455 of yacc.c  */
#line 4772 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 674:

/* Line 1455 of yacc.c  */
#line 4785 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 675:

/* Line 1455 of yacc.c  */
#line 4789 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 676:

/* Line 1455 of yacc.c  */
#line 4793 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 677:

/* Line 1455 of yacc.c  */
#line 4797 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 679:

/* Line 1455 of yacc.c  */
#line 4807 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 680:

/* Line 1455 of yacc.c  */
#line 4815 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 4835 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 4847 "../src/parser/XQParser.y"
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

  case 687:

/* Line 1455 of yacc.c  */
#line 4862 "../src/parser/XQParser.y"
    {
}
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 4865 "../src/parser/XQParser.y"
    {
}
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 4871 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 4875 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 691:

/* Line 1455 of yacc.c  */
#line 4885 "../src/parser/XQParser.y"
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

  case 693:

/* Line 1455 of yacc.c  */
#line 4902 "../src/parser/XQParser.y"
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

  case 695:

/* Line 1455 of yacc.c  */
#line 4918 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 697:

/* Line 1455 of yacc.c  */
#line 4928 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 4938 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 4947 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 4952 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 4962 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 4966 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 4974 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 707:

/* Line 1455 of yacc.c  */
#line 4979 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 708:

/* Line 1455 of yacc.c  */
#line 4988 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 709:

/* Line 1455 of yacc.c  */
#line 4992 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 710:

/* Line 1455 of yacc.c  */
#line 4996 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 711:

/* Line 1455 of yacc.c  */
#line 5000 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 712:

/* Line 1455 of yacc.c  */
#line 5004 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 713:

/* Line 1455 of yacc.c  */
#line 5008 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 715:

/* Line 1455 of yacc.c  */
#line 5018 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 716:

/* Line 1455 of yacc.c  */
#line 5029 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 717:

/* Line 1455 of yacc.c  */
#line 5035 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 718:

/* Line 1455 of yacc.c  */
#line 5041 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 719:

/* Line 1455 of yacc.c  */
#line 5047 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 720:

/* Line 1455 of yacc.c  */
#line 5062 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 721:

/* Line 1455 of yacc.c  */
#line 5066 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 5070 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 5074 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 724:

/* Line 1455 of yacc.c  */
#line 5078 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 5082 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5086 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 5090 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 5098 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 5102 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5106 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 5114 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 5118 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5154 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5158 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5162 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
  }
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 5166 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
  }
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 5175 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 5179 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 5187 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 5191 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 5201 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 5205 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 5209 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 5213 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 5217 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 5224 "../src/parser/XQParser.y"
    {
  }
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 5227 "../src/parser/XQParser.y"
    {
  }
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 5234 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 759:

/* Line 1455 of yacc.c  */
#line 5238 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 760:

/* Line 1455 of yacc.c  */
#line 5242 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 5246 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 762:

/* Line 1455 of yacc.c  */
#line 5256 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 763:

/* Line 1455 of yacc.c  */
#line 5260 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 5264 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 765:

/* Line 1455 of yacc.c  */
#line 5271 "../src/parser/XQParser.y"
    {
  }
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 5274 "../src/parser/XQParser.y"
    {
  }
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 5282 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 5286 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5293 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 5297 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 5305 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5309 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 5317 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5325 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5329 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5337 "../src/parser/XQParser.y"
    {
}
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5344 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5352 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5357 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5362 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5374 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5378 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5382 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 5386 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 5390 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5401 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5412 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5416 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5426 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5434 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5441 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5446 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5454 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5463 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5475 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5487 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE,
                  MEMMGR));
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5500 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING,
                  MEMMGR));
  }
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5511 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5520 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 5532 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, 0, (yyvsp[(5) - (5)].astNode), 0, MEMMGR));
  }
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5536 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, (yyvsp[(5) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), MEMMGR));
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5540 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), 0, (yyvsp[(8) - (8)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5545 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), (yyvsp[(8) - (10)].argSpecs), (yyvsp[(10) - (10)].astNode), (yyvsp[(9) - (10)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 5550 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), 0, (yyvsp[(6) - (6)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 5555 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), (yyvsp[(6) - (8)].argSpecs), (yyvsp[(8) - (8)].astNode), (yyvsp[(7) - (8)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 5563 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 811:

/* Line 1455 of yacc.c  */
#line 5567 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 5575 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5579 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 5586 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 815:

/* Line 1455 of yacc.c  */
#line 5591 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 816:

/* Line 1455 of yacc.c  */
#line 5599 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 817:

/* Line 1455 of yacc.c  */
#line 5604 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 5613 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5617 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 5621 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 5629 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 5633 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 823:

/* Line 1455 of yacc.c  */
#line 5641 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 824:

/* Line 1455 of yacc.c  */
#line 5645 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 5649 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 5653 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 5661 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 5665 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5669 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5677 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 5682 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 832:

/* Line 1455 of yacc.c  */
#line 5692 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 5709 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 5717 "../src/parser/XQParser.y"
    {
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(2) - (4)].argSpecs), (yyvsp[(4) - (4)].astNode), (yyvsp[(3) - (4)].sequenceType), false, false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 5727 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 838:

/* Line 1455 of yacc.c  */
#line 5732 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (4)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 5744 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  }
    break;

  case 842:

/* Line 1455 of yacc.c  */
#line 5752 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  }
    break;

  case 843:

/* Line 1455 of yacc.c  */
#line 5756 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  }
    break;

  case 844:

/* Line 1455 of yacc.c  */
#line 5763 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  }
    break;

  case 845:

/* Line 1455 of yacc.c  */
#line 5768 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 846:

/* Line 1455 of yacc.c  */
#line 5777 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;



/* Line 1455 of yacc.c  */
#line 12037 "../src/parser/XQParser.cpp"
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
#line 5812 "../src/parser/XQParser.y"


}  // namespace XQParser


