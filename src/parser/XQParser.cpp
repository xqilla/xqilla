
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
#include <xqilla/functions/FunctionExists.hpp>
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
#line 1094 "../src/parser/XQParser.cpp"

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
#define YYLAST   8466

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  326
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  354
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1037
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1704

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
    1371,  1373,  1379,  1386,  1389,  1391,  1397,  1401,  1406,  1414,
    1423,  1427,  1429,  1433,  1435,  1439,  1443,  1444,  1449,  1453,
    1457,  1461,  1465,  1469,  1473,  1477,  1481,  1485,  1489,  1493,
    1497,  1499,  1504,  1510,  1512,  1516,  1518,  1522,  1526,  1528,
    1532,  1536,  1540,  1544,  1546,  1550,  1554,  1556,  1560,  1564,
    1566,  1571,  1573,  1578,  1580,  1585,  1587,  1592,  1594,  1597,
    1600,  1602,  1604,  1606,  1608,  1613,  1619,  1625,  1629,  1634,
    1636,  1639,  1644,  1646,  1649,  1651,  1654,  1657,  1659,  1661,
    1665,  1669,  1671,  1673,  1675,  1677,  1679,  1681,  1686,  1688,
    1693,  1696,  1698,  1701,  1704,  1707,  1710,  1713,  1716,  1719,
    1722,  1725,  1727,  1730,  1732,  1735,  1738,  1741,  1744,  1747,
    1749,  1751,  1753,  1755,  1757,  1759,  1761,  1763,  1765,  1770,
    1772,  1774,  1776,  1778,  1780,  1782,  1784,  1786,  1788,  1790,
    1792,  1794,  1796,  1798,  1800,  1803,  1805,  1809,  1812,  1814,
    1819,  1824,  1828,  1833,  1837,  1839,  1841,  1843,  1845,  1847,
    1849,  1851,  1853,  1859,  1870,  1872,  1874,  1875,  1883,  1891,
    1892,  1894,  1898,  1902,  1906,  1910,  1911,  1914,  1917,  1918,
    1921,  1924,  1925,  1928,  1931,  1932,  1935,  1938,  1939,  1942,
    1945,  1948,  1951,  1955,  1956,  1958,  1962,  1964,  1967,  1969,
    1971,  1973,  1975,  1977,  1979,  1984,  1988,  1990,  1994,  1997,
    2001,  2005,  2007,  2011,  2016,  2021,  2025,  2027,  2031,  2034,
    2038,  2041,  2042,  2044,  2045,  2048,  2051,  2055,  2056,  2058,
    2060,  2062,  2064,  2068,  2070,  2072,  2074,  2076,  2078,  2080,
    2082,  2084,  2086,  2088,  2090,  2092,  2094,  2098,  2102,  2107,
    2112,  2116,  2120,  2124,  2129,  2134,  2138,  2143,  2150,  2152,
    2154,  2159,  2161,  2165,  2170,  2177,  2185,  2187,  2189,  2194,
    2196,  2198,  2200,  2202,  2204,  2208,  2209,  2212,  2213,  2216,
    2220,  2222,  2226,  2228,  2233,  2235,  2238,  2240,  2242,  2245,
    2248,  2252,  2254,  2257,  2262,  2266,  2271,  2272,  2274,  2277,
    2279,  2282,  2284,  2285,  2289,  2292,  2296,  2300,  2305,  2307,
    2311,  2315,  2318,  2321,  2324,  2327,  2330,  2332,  2334,  2336,
    2338,  2340,  2343,  2347,  2349,  2351,  2353,  2355,  2357,  2359,
    2361,  2363,  2366,  2369,  2371,  2373,  2376,  2379,  2381,  2384,
    2387,  2390,  2396,  2402,  2405,  2406,  2410,  2413,  2418,  2423,
    2430,  2435,  2439,  2444,  2445,  2448,  2451,  2455,  2457,  2461,
    2464,  2467,  2470,  2472,  2475,  2479,  2483,  2487,  2491,  2495,
    2502,  2509,  2514,  2519,  2524,  2527,  2530,  2533,  2536,  2539,
    2547,  2553,  2559,  2566,  2570,  2572,  2577,  2579,  2581,  2583,
    2585,  2587,  2589,  2595,  2603,  2612,  2623,  2630,  2639,  2640,
    2643,  2646,  2650,  2651,  2654,  2656,  2660,  2662,  2664,  2666,
    2670,  2678,  2682,  2690,  2696,  2706,  2708,  2710,  2712,  2714,
    2718,  2724,  2726,  2728,  2732,  2737,  2741,  2746,  2748,  2750,
    2755,  2761,  2768,  2770,  2774,  2778,  2780,  2782,  2784,  2786,
    2788,  2790,  2792,  2794,  2796,  2798,  2800,  2802,  2804,  2806,
    2808,  2810,  2812,  2814,  2816,  2818,  2820,  2822,  2824,  2826,
    2828,  2830,  2832,  2834,  2836,  2838,  2840,  2842,  2844,  2846,
    2848,  2850,  2852,  2854,  2856,  2858,  2860,  2862,  2864,  2866,
    2868,  2870,  2872,  2874,  2876,  2878,  2880,  2882,  2884,  2886,
    2888,  2890,  2892,  2894,  2896,  2898,  2900,  2902,  2904,  2906,
    2908,  2910,  2912,  2914,  2916,  2918,  2920,  2922,  2924,  2926,
    2928,  2930,  2932,  2934,  2936,  2938,  2940,  2942,  2944,  2946,
    2948,  2950,  2952,  2954,  2956,  2958,  2960,  2962,  2964,  2966,
    2968,  2970,  2972,  2974,  2976,  2978,  2980,  2982,  2984,  2986,
    2988,  2990,  2992,  2994,  2996,  2998,  3000,  3002,  3004,  3006,
    3008,  3010,  3012,  3014,  3016,  3018,  3020,  3022,  3024,  3026,
    3028,  3030,  3032,  3034,  3036,  3038,  3040,  3042,  3044,  3046,
    3048,  3050,  3052,  3054,  3056,  3058,  3060,  3062,  3064,  3066,
    3068,  3070,  3072,  3074,  3076,  3078,  3080,  3082,  3084,  3086,
    3088,  3090,  3092,  3094,  3096,  3098,  3100,  3102,  3104,  3106,
    3108,  3110,  3112,  3114,  3116,  3118,  3120,  3122
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     327,     0,    -1,     3,   473,    -1,     4,   419,    -1,     5,
     424,    -1,     6,   428,    -1,     7,   432,    -1,     8,   335,
      -1,     9,   328,    -1,    10,   331,    -1,    11,   330,    -1,
     182,   466,   463,   679,   464,   469,   472,   329,    -1,    -1,
     442,    -1,   466,   464,   469,    -1,   332,   333,    -1,   192,
     175,   656,    40,   607,   442,    -1,    -1,   333,   334,    -1,
     182,   466,   463,   679,   464,   469,   472,   442,    -1,   336,
      -1,   251,   337,   338,   250,    -1,   358,    -1,    -1,   337,
     280,    -1,   337,   289,    -1,    -1,   338,   339,    -1,   338,
     343,    -1,   338,   348,    -1,   338,   350,    -1,   338,   352,
      -1,   338,   356,    -1,   340,   345,   361,   250,    -1,   252,
      -1,   340,   303,   409,    -1,   340,   282,    -1,   340,   306,
     342,    -1,   340,   281,   341,    -1,   340,   304,   586,    -1,
      -1,   341,   124,    -1,   341,   320,    -1,   341,   321,    -1,
      55,    -1,    56,    -1,    57,    -1,   344,   345,   361,   250,
      -1,   260,    -1,   344,   282,    -1,   344,   304,   586,    -1,
     344,   294,    -1,    -1,   345,   346,    -1,   347,   361,   250,
      -1,   259,    -1,   347,   282,    -1,   347,   305,   474,    -1,
     347,   304,   586,    -1,   347,   293,    -1,   347,   292,    -1,
     349,   361,   250,    -1,   259,    -1,   349,   282,    -1,   349,
     305,   474,    -1,   349,   304,   586,    -1,   349,   293,    -1,
     349,   292,    -1,   351,   361,   250,    -1,   265,    -1,   351,
     282,    -1,   351,   305,   474,    -1,   351,   304,   586,    -1,
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
      -1,   375,   304,   586,    -1,   375,   292,    -1,   377,   250,
      -1,   258,   305,   474,    -1,   379,   361,   250,    -1,   264,
     307,   474,    -1,   261,   381,   384,   250,    -1,   382,    -1,
     381,   382,    -1,   383,   361,   250,    -1,   262,   307,   474,
      -1,    -1,   263,   361,   250,    -1,   386,   387,   388,   250,
      -1,   272,    -1,   386,   305,   474,    -1,   386,   310,   360,
      -1,   386,   311,   360,    -1,    -1,   273,   361,   250,    -1,
      -1,   274,   361,   250,    -1,   390,   361,   250,   361,    -1,
     265,    -1,   390,   282,    -1,   390,   305,   474,    -1,   390,
     304,   586,    -1,   392,   361,   250,    -1,   266,    -1,   392,
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
     655,    36,   414,    44,    -1,   655,    -1,   545,    -1,   543,
      -1,   545,    -1,   416,    -1,   411,   416,    -1,   412,    39,
     416,    -1,   412,    33,   416,    -1,   415,    39,   416,    -1,
     415,    33,   416,    -1,   417,   418,    -1,   538,    -1,    73,
      22,   538,    -1,    58,    22,   538,    -1,    23,   538,    -1,
      -1,   418,    24,   474,    25,    -1,   433,   420,    -1,   433,
     421,    -1,   420,    -1,   421,    -1,   422,   473,    -1,   438,
     422,    -1,    -1,   422,   423,   442,    -1,   422,   441,   442,
      -1,   422,   443,   442,    -1,   422,   445,   442,    -1,   422,
     459,   442,    -1,   422,   462,   442,    -1,   422,   658,   442,
      -1,   422,   446,   442,    -1,   444,    -1,   453,    -1,   454,
      -1,   461,    -1,   448,    -1,   449,    -1,   450,    -1,   433,
     425,    -1,   433,   426,    -1,   425,    -1,   426,    -1,   427,
     473,    -1,   438,   427,    -1,    -1,   427,   423,   442,    -1,
     427,   441,   442,    -1,   427,   443,   442,    -1,   427,   445,
     442,    -1,   427,   459,   442,    -1,   427,   462,   442,    -1,
     427,   658,   442,    -1,   427,   446,   442,    -1,   427,   447,
     442,    -1,   433,   429,    -1,   433,   430,    -1,   429,    -1,
     430,    -1,   431,   473,    -1,   438,   431,    -1,    -1,   431,
     440,   442,    -1,   431,   441,   442,    -1,   431,   443,   442,
      -1,   431,   445,   442,    -1,   431,   459,   442,    -1,   431,
     462,   442,    -1,   431,   658,   442,    -1,   431,   446,   442,
      -1,   433,   436,    -1,   433,   437,    -1,   436,    -1,   437,
      -1,   188,   434,   442,    -1,   188,   434,   435,   442,    -1,
     188,   435,   442,    -1,   189,   127,    -1,   178,   127,    -1,
     439,   473,    -1,   438,   439,    -1,   192,   175,   656,    40,
     607,   442,    -1,    -1,   439,   440,   442,    -1,   439,   441,
     442,    -1,   439,   443,   442,    -1,   439,   445,   442,    -1,
     439,   459,   442,    -1,   439,   462,   442,    -1,   439,   658,
     442,    -1,   439,   446,   442,    -1,   439,   447,   442,    -1,
     444,    -1,   453,    -1,   454,    -1,   461,    -1,   448,    -1,
     449,    -1,   642,    -1,   450,    -1,   455,    -1,   458,    -1,
      53,    -1,   182,   175,   656,    40,   607,    -1,   182,    67,
     173,    -1,   182,    67,   174,    -1,   182,   185,   193,   175,
     607,    -1,   182,   185,   463,   175,   607,    -1,   182,   187,
     678,   127,    -1,   182,    68,   625,    -1,   182,   184,   122,
      -1,   182,   184,   123,    -1,   182,   185,   140,   144,   145,
      -1,   182,   185,   140,   144,   146,    -1,   182,   186,   451,
      36,   452,    -1,   173,    -1,   179,    -1,   180,    -1,   181,
      -1,   182,   185,   147,   607,    -1,   182,    69,   607,    -1,
     190,   191,   457,   607,   456,    -1,   190,   191,   607,   456,
      -1,    -1,   116,   607,    -1,   456,    36,   607,    -1,   175,
     656,    40,    -1,   185,   193,   175,    -1,   190,   192,   175,
     656,    40,   607,   456,    -1,   190,   192,   607,   456,    -1,
     182,   128,    12,   546,   585,   460,    -1,    13,   475,    -1,
     177,    -1,   182,   183,   173,    -1,   182,   183,   174,    -1,
     182,   466,   463,   679,   464,   469,   465,    -1,   194,    -1,
     195,    -1,    43,    44,    -1,    43,   470,    44,    -1,   472,
      -1,   177,    -1,    -1,   466,   467,    -1,   466,   468,    -1,
     466,   233,    -1,   246,    -1,   247,    -1,   248,    -1,   249,
      -1,    -1,   154,   586,    -1,   470,    36,   471,    -1,   471,
      -1,    12,   546,   585,    -1,    51,   474,    52,    -1,   474,
      -1,   474,    36,   475,    -1,   475,    -1,   476,    -1,   496,
      -1,   499,    -1,   503,    -1,   643,    -1,   645,    -1,   648,
      -1,   647,    -1,   649,    -1,   504,    -1,   664,    -1,   665,
      -1,   477,   133,   475,    -1,   478,    -1,   477,   490,    -1,
     477,   479,    -1,   480,    -1,   485,    -1,   478,    -1,   488,
      -1,   489,    -1,   134,   481,    -1,   481,    36,   482,    -1,
     482,    -1,    12,   546,   585,   483,   484,   135,   475,    -1,
      -1,   116,    12,   546,    -1,    -1,   196,    12,   546,    -1,
     136,   486,    -1,   486,    36,   487,    -1,   487,    -1,    12,
     546,   585,    13,   475,    -1,   196,    12,   546,    13,   475,
      -1,   137,   475,    -1,   138,    12,   546,    -1,   140,   139,
     491,    -1,   141,   140,   139,   491,    -1,   491,    36,   492,
      -1,   492,    -1,   493,   494,   495,    -1,   493,   494,   495,
     147,   607,    -1,   475,    -1,    -1,   142,    -1,   143,    -1,
      -1,   144,   145,    -1,   144,   146,    -1,   148,   497,   150,
     475,    -1,   149,   497,   150,   475,    -1,   497,    36,   498,
      -1,   498,    -1,    12,   546,   585,   135,   475,    -1,   151,
      43,   474,    44,   500,   501,    -1,   500,   502,    -1,   502,
      -1,   185,    12,   546,   133,   475,    -1,   185,   133,   475,
      -1,   152,   586,   133,   475,    -1,   152,    12,   546,   154,
     586,   133,   475,    -1,   155,    43,   474,    44,   156,   475,
     157,   475,    -1,   504,   158,   505,    -1,   505,    -1,   505,
     159,   506,    -1,   506,    -1,   508,    40,   508,    -1,   508,
      16,   508,    -1,    -1,   508,    27,   507,   508,    -1,   508,
      17,   508,    -1,   508,    18,   508,    -1,   508,    19,   508,
      -1,   508,   110,   508,    -1,   508,   111,   508,    -1,   508,
     112,   508,    -1,   508,   113,   508,    -1,   508,   114,   508,
      -1,   508,   115,   508,    -1,   508,   172,   508,    -1,   508,
      20,   508,    -1,   508,    21,   508,    -1,   508,    -1,   509,
     197,    65,   608,    -1,   509,   197,    65,   608,   641,    -1,
     509,    -1,   510,   163,   510,    -1,   510,    -1,   510,    37,
     511,    -1,   510,    38,   511,    -1,   511,    -1,   511,    14,
     512,    -1,   511,   164,   512,    -1,   511,    72,   512,    -1,
     511,   165,   512,    -1,   512,    -1,   512,    15,   513,    -1,
     512,   166,   513,    -1,   513,    -1,   513,   167,   514,    -1,
     513,   168,   514,    -1,   514,    -1,   515,   160,   161,   586,
      -1,   515,    -1,   516,   171,   154,   586,    -1,   516,    -1,
     517,   162,   154,   583,    -1,   517,    -1,   518,   170,   154,
     583,    -1,   518,    -1,    38,   518,    -1,    37,   518,    -1,
     519,    -1,   520,    -1,   525,    -1,   521,    -1,   169,    51,
     474,    52,    -1,   169,    70,    51,   474,    52,    -1,   169,
      71,    51,   474,    52,    -1,   522,    51,    52,    -1,   522,
      51,   474,    52,    -1,   523,    -1,   522,   523,    -1,    35,
     559,   678,   524,    -1,   132,    -1,   107,   132,    -1,   526,
      -1,   526,   527,    -1,    33,   527,    -1,   527,    -1,    39,
      -1,   527,    39,   528,    -1,   527,    33,   528,    -1,   528,
      -1,   529,    -1,   541,    -1,   530,    -1,   531,    -1,   532,
      -1,   530,    24,   474,    25,    -1,   535,    -1,   531,    24,
     474,    25,    -1,   533,   538,    -1,   534,    -1,    73,    22,
      -1,    74,    22,    -1,    58,    22,    -1,    75,    22,    -1,
      76,    22,    -1,    77,    22,    -1,    78,    22,    -1,   175,
      22,    -1,    23,   538,    -1,   538,    -1,   536,   538,    -1,
     537,    -1,    79,    22,    -1,    80,    22,    -1,    81,    22,
      -1,    82,    22,    -1,    83,    22,    -1,    42,    -1,   590,
      -1,   539,    -1,   657,    -1,   540,    -1,    14,    -1,   129,
      -1,   130,    -1,   542,    -1,   541,    24,   474,    25,    -1,
     672,    -1,   543,    -1,   545,    -1,   547,    -1,   548,    -1,
     551,    -1,   554,    -1,   549,    -1,   550,    -1,   669,    -1,
     544,    -1,   655,    -1,   652,    -1,   653,    -1,   654,    -1,
      12,   546,    -1,   678,    -1,    43,   474,    44,    -1,    43,
      44,    -1,    41,    -1,   122,    51,   474,    52,    -1,   123,
      51,   474,    52,    -1,   679,    43,    44,    -1,   679,    43,
     552,    44,    -1,   552,    36,   553,    -1,   553,    -1,   475,
      -1,    26,    -1,   555,    -1,   571,    -1,   556,    -1,   567,
      -1,   569,    -1,    27,   557,   558,   559,    45,    -1,    27,
     557,   558,   559,    28,   566,    34,   557,   559,    29,    -1,
     124,    -1,   125,    -1,    -1,   558,   107,   124,   559,    46,
     559,   560,    -1,   558,   107,   125,   559,    46,   559,   561,
      -1,    -1,   107,    -1,    47,   562,    48,    -1,    49,   564,
      50,    -1,    47,   563,    48,    -1,    49,   565,    50,    -1,
      -1,   562,   472,    -1,   562,   117,    -1,    -1,   563,   472,
      -1,   563,   117,    -1,    -1,   564,   472,    -1,   564,   118,
      -1,    -1,   565,   472,    -1,   565,   118,    -1,    -1,   566,
     555,    -1,   566,   472,    -1,   566,   120,    -1,   566,   119,
      -1,    31,   568,    32,    -1,    -1,   109,    -1,    30,   131,
     570,    -1,   108,    -1,   107,   108,    -1,   572,    -1,   573,
      -1,   576,    -1,   578,    -1,   579,    -1,   580,    -1,    84,
      51,   474,    52,    -1,   193,   574,   575,    -1,   126,    -1,
      51,   474,    52,    -1,    51,    52,    -1,    51,   474,    52,
      -1,    58,   577,   575,    -1,   126,    -1,    51,   474,    52,
      -1,    65,    51,   474,    52,    -1,    59,    51,   474,    52,
      -1,    62,   581,   582,    -1,   126,    -1,    51,   474,    52,
      -1,    51,    52,    -1,    51,   474,    52,    -1,   589,   584,
      -1,    -1,    26,    -1,    -1,   154,   586,    -1,   588,   587,
      -1,    66,    43,    44,    -1,    -1,    14,    -1,    37,    -1,
      26,    -1,   589,    -1,   176,    43,    44,    -1,   590,    -1,
     673,    -1,   677,    -1,   657,    -1,   592,    -1,   600,    -1,
     596,    -1,   602,    -1,   598,    -1,   595,    -1,   594,    -1,
     593,    -1,   591,    -1,    61,    43,    44,    -1,    60,    43,
      44,    -1,    60,    43,   600,    44,    -1,    60,    43,   602,
      44,    -1,    65,    43,    44,    -1,    59,    43,    44,    -1,
      62,    43,    44,    -1,    62,    43,   656,    44,    -1,    62,
      43,   127,    44,    -1,    58,    43,    44,    -1,    58,    43,
     597,    44,    -1,    58,    43,   597,    36,   606,    44,    -1,
     604,    -1,    14,    -1,    63,    43,   599,    44,    -1,   604,
      -1,   193,    43,    44,    -1,   193,    43,   601,    44,    -1,
     193,    43,   601,    36,   606,    44,    -1,   193,    43,   601,
      36,   606,    26,    44,    -1,   605,    -1,    14,    -1,    64,
      43,   603,    44,    -1,   605,    -1,   657,    -1,   657,    -1,
     657,    -1,   127,    -1,   611,   610,   609,    -1,    -1,   198,
     509,    -1,    -1,   610,   622,    -1,   611,   243,   612,    -1,
     612,    -1,   612,   244,   613,    -1,   613,    -1,   613,    85,
     135,   614,    -1,   614,    -1,   245,   615,    -1,   615,    -1,
     616,    -1,   616,   625,    -1,   617,   620,    -1,    43,   608,
      44,    -1,   618,    -1,   543,   619,    -1,    51,   474,    52,
     619,    -1,   522,    51,    52,    -1,   522,    51,   608,    52,
      -1,    -1,   210,    -1,   210,    99,    -1,   211,    -1,   211,
     215,    -1,   212,    -1,    -1,   201,   621,   202,    -1,   213,
     510,    -1,   121,   146,   510,    -1,   121,   103,   510,    -1,
     214,   510,   163,   510,    -1,   122,    -1,   199,   510,   623,
      -1,   200,   621,   623,    -1,   203,   624,    -1,   204,   624,
      -1,   116,   101,    -1,   116,   102,    -1,    97,    98,    -1,
     215,    -1,   216,    -1,   217,    -1,   218,    -1,   219,    -1,
      86,   626,    -1,   625,    86,   626,    -1,   638,    -1,   639,
      -1,   630,    -1,   629,    -1,   627,    -1,   628,    -1,   633,
      -1,   640,    -1,   153,    89,    -1,   153,    88,    -1,   205,
      -1,   206,    -1,    90,    89,    -1,    90,    88,    -1,    93,
      -1,    87,    93,    -1,    94,   632,    -1,    94,   185,    -1,
      94,    43,   632,   631,    44,    -1,    94,    43,   185,   631,
      44,    -1,    87,    94,    -1,    -1,   631,    36,   632,    -1,
     116,   607,    -1,   116,   607,   207,   655,    -1,   116,   607,
     621,   208,    -1,   116,   607,   207,   655,   621,   208,    -1,
      95,   215,   635,   634,    -1,    87,    95,   215,    -1,    95,
     215,   185,   634,    -1,    -1,   634,   637,    -1,   116,   607,
      -1,    43,   636,    44,    -1,   655,    -1,   636,    36,   655,
      -1,   166,   635,    -1,   168,   635,    -1,   209,   655,    -1,
      96,    -1,    87,    96,    -1,   187,   678,   127,    -1,    92,
      98,   512,    -1,   182,   226,    71,    -1,   182,   226,    70,
      -1,   182,   226,   104,    -1,   644,   475,   154,   222,   232,
     475,    -1,   644,   475,   154,   230,   232,   475,    -1,   644,
     475,   232,   475,    -1,   644,   475,   225,   475,    -1,   644,
     475,   224,   475,    -1,   223,    61,    -1,   223,   228,    -1,
     646,   475,    -1,   231,    61,    -1,   231,   228,    -1,   220,
     106,   161,    61,   475,   227,   475,    -1,   220,    61,   475,
     227,   475,    -1,   229,    61,   475,   154,   475,    -1,   105,
     650,   221,   475,   133,   475,    -1,   650,    36,   651,    -1,
     651,    -1,    12,   546,    13,   475,    -1,    55,    -1,    56,
      -1,    57,    -1,   127,    -1,   678,    -1,   678,    -1,   182,
     236,   238,   678,   472,    -1,   182,   236,   238,   678,   660,
     659,   472,    -1,   182,   236,   238,   678,   661,   237,   409,
     472,    -1,   182,   236,   238,   678,   661,   237,   409,   660,
     659,   472,    -1,   182,   236,   661,   237,   409,   472,    -1,
     182,   236,   661,   237,   409,   660,   659,   472,    -1,    -1,
     154,   586,    -1,    43,    44,    -1,    43,   470,    44,    -1,
      -1,   242,   662,    -1,   663,    -1,   662,    36,   663,    -1,
     124,    -1,   320,    -1,   321,    -1,   239,   236,   678,    -1,
     239,   236,   678,   227,    43,   667,    44,    -1,   240,   241,
     475,    -1,   240,   241,   475,   227,    43,   667,    44,    -1,
     240,   241,   475,   242,   666,    -1,   240,   241,   475,   242,
     666,   227,    43,   667,    44,    -1,   678,    -1,   320,    -1,
     322,    -1,   668,    -1,   667,    36,   668,    -1,    12,   546,
     585,    13,   475,    -1,   670,    -1,   671,    -1,   679,    54,
      55,    -1,   195,   464,   585,   472,    -1,   541,    43,    44,
      -1,   541,    43,   552,    44,    -1,   674,    -1,   675,    -1,
     195,    43,    14,    44,    -1,   195,    43,    44,   154,   586,
      -1,   195,    43,   676,    44,   154,   586,    -1,   586,    -1,
     676,    36,   586,    -1,    43,   588,    44,    -1,   679,    -1,
      58,    -1,    59,    -1,    60,    -1,   193,    -1,   176,    -1,
     155,    -1,    61,    -1,    62,    -1,    63,    -1,    64,    -1,
      65,    -1,   151,    -1,    66,    -1,   195,    -1,   124,    -1,
      67,    -1,    68,    -1,    69,    -1,    70,    -1,    71,    -1,
      72,    -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,
      77,    -1,    78,    -1,    79,    -1,    80,    -1,    81,    -1,
      82,    -1,    83,    -1,    84,    -1,    85,    -1,    88,    -1,
      89,    -1,    90,    -1,    91,    -1,    93,    -1,    94,    -1,
      95,    -1,    96,    -1,    97,    -1,    98,    -1,    99,    -1,
     100,    -1,   101,    -1,   102,    -1,   103,    -1,   104,    -1,
     105,    -1,   106,    -1,   110,    -1,   111,    -1,   112,    -1,
     113,    -1,   114,    -1,   115,    -1,   116,    -1,   128,    -1,
     133,    -1,   134,    -1,   135,    -1,   136,    -1,   137,    -1,
     139,    -1,   140,    -1,   141,    -1,   142,    -1,   143,    -1,
     144,    -1,   145,    -1,   146,    -1,   147,    -1,   148,    -1,
     149,    -1,   150,    -1,   152,    -1,   154,    -1,   156,    -1,
     157,    -1,   158,    -1,   159,    -1,   160,    -1,   161,    -1,
     162,    -1,   163,    -1,   164,    -1,   165,    -1,   166,    -1,
     167,    -1,   168,    -1,   169,    -1,   170,    -1,   171,    -1,
     172,    -1,   173,    -1,   174,    -1,   175,    -1,   177,    -1,
     178,    -1,   179,    -1,   180,    -1,   181,    -1,   182,    -1,
     183,    -1,   184,    -1,   185,    -1,   186,    -1,   187,    -1,
     189,    -1,   190,    -1,   191,    -1,   194,    -1,   196,    -1,
      86,    -1,    87,    -1,   197,    -1,   198,    -1,   199,    -1,
     200,    -1,   201,    -1,   202,    -1,   203,    -1,   204,    -1,
     205,    -1,   206,    -1,   207,    -1,   208,    -1,   209,    -1,
     210,    -1,   211,    -1,   212,    -1,   213,    -1,   214,    -1,
     215,    -1,   216,    -1,   217,    -1,   218,    -1,   219,    -1,
     220,    -1,   221,    -1,   222,    -1,   223,    -1,   224,    -1,
     225,    -1,   226,    -1,   227,    -1,   228,    -1,   229,    -1,
     230,    -1,   231,    -1,   232,    -1,   233,    -1,   122,    -1,
     123,    -1,   234,    -1,   235,    -1,   236,    -1,   237,    -1,
     238,    -1,   239,    -1,   240,    -1,   241,    -1,   242,    -1,
     243,    -1,   244,    -1,   245,    -1,   246,    -1,   247,    -1,
     248,    -1,   249,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   756,   756,   758,   759,   760,   761,   763,   765,   766,
     767,   771,   779,   779,   782,   791,   802,   840,   843,   849,
     885,   915,   918,   940,   942,   946,   953,   955,   956,   957,
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
    3589,  3593,  3604,  3611,  3616,  3624,  3628,  3636,  3640,  3648,
    3656,  3665,  3670,  3679,  3689,  3693,  3697,  3697,  3701,  3705,
    3709,  3713,  3717,  3721,  3725,  3729,  3733,  3737,  3741,  3745,
    3749,  3754,  3758,  3762,  3767,  3774,  3779,  3783,  3787,  3792,
    3796,  3800,  3804,  3808,  3813,  3817,  3821,  3826,  3830,  3834,
    3839,  3856,  3861,  3866,  3871,  3875,  3880,  3884,  3889,  3895,
    3901,  3906,  3907,  3908,  3916,  3920,  3924,  3932,  3939,  3948,
    3948,  3952,  3972,  3973,  3981,  3982,  3988,  4009,  4013,  4027,
    4033,  4046,  4050,  4050,  4054,  4055,  4064,  4065,  4071,  4072,
    4081,  4093,  4104,  4108,  4112,  4116,  4120,  4124,  4128,  4132,
    4140,  4148,  4165,  4173,  4182,  4186,  4190,  4194,  4198,  4206,
    4218,  4223,  4228,  4235,  4240,  4247,  4254,  4266,  4267,  4271,
    4277,  4278,  4279,  4280,  4281,  4282,  4283,  4284,  4285,  4289,
    4289,  4292,  4292,  4292,  4296,  4303,  4307,  4311,  4319,  4327,
    4337,  4347,  4351,  4374,  4379,  4389,  4390,  4399,  4403,  4412,
    4412,  4412,  4416,  4422,  4431,  4431,  4436,  4439,  4448,  4459,
    4459,  4464,  4468,  4475,  4479,  4490,  4493,  4498,  4509,  4512,
    4516,  4530,  4533,  4538,  4549,  4552,  4556,  4574,  4577,  4582,
    4587,  4594,  4607,  4621,  4624,  4629,  4648,  4649,  4662,  4663,
    4664,  4665,  4666,  4667,  4672,  4680,  4688,  4692,  4700,  4704,
    4713,  4720,  4724,  4732,  4740,  4748,  4755,  4765,  4772,  4776,
    4784,  4795,  4798,  4807,  4810,  4820,  4827,  4837,  4838,  4840,
    4842,  4848,  4852,  4856,  4857,  4858,  4862,  4874,  4875,  4876,
    4877,  4878,  4879,  4880,  4881,  4882,  4887,  4895,  4899,  4904,
    4913,  4921,  4929,  4933,  4937,  4945,  4949,  4953,  4961,  4962,
    4970,  4978,  4983,  4987,  4991,  4995,  5004,  5005,  5013,  5020,
    5023,  5026,  5029,  5033,  5045,  5061,  5063,  5070,  5073,  5082,
    5094,  5099,  5111,  5116,  5120,  5125,  5130,  5135,  5136,  5145,
    5150,  5154,  5160,  5164,  5172,  5177,  5187,  5190,  5194,  5198,
    5202,  5206,  5214,  5216,  5227,  5233,  5239,  5245,  5260,  5264,
    5268,  5272,  5276,  5280,  5284,  5288,  5296,  5300,  5304,  5312,
    5316,  5324,  5325,  5337,  5338,  5339,  5340,  5341,  5342,  5343,
    5344,  5352,  5356,  5360,  5364,  5373,  5377,  5385,  5389,  5399,
    5403,  5407,  5411,  5415,  5423,  5425,  5432,  5436,  5440,  5444,
    5454,  5458,  5462,  5470,  5472,  5480,  5484,  5491,  5495,  5503,
    5507,  5515,  5523,  5527,  5535,  5542,  5550,  5555,  5560,  5572,
    5576,  5580,  5584,  5588,  5594,  5594,  5599,  5605,  5605,  5610,
    5614,  5624,  5632,  5639,  5644,  5652,  5661,  5673,  5685,  5698,
    5709,  5718,  5730,  5735,  5740,  5746,  5752,  5758,  5768,  5771,
    5779,  5783,  5791,  5795,  5803,  5808,  5817,  5821,  5825,  5833,
    5837,  5845,  5849,  5853,  5857,  5865,  5869,  5873,  5881,  5886,
    5896,  5909,  5909,  5913,  5921,  5932,  5937,  5961,  5961,  5965,
    5973,  5977,  5984,  5989,  5998,  6007,  6007,  6007,  6007,  6007,
    6007,  6007,  6007,  6008,  6008,  6008,  6008,  6008,  6008,  6009,
    6013,  6013,  6013,  6013,  6013,  6013,  6013,  6013,  6013,  6013,
    6014,  6014,  6014,  6014,  6014,  6014,  6014,  6015,  6015,  6015,
    6015,  6015,  6015,  6015,  6015,  6016,  6016,  6016,  6016,  6016,
    6016,  6016,  6016,  6016,  6016,  6016,  6017,  6017,  6017,  6017,
    6017,  6017,  6017,  6017,  6017,  6017,  6017,  6017,  6018,  6018,
    6018,  6018,  6018,  6018,  6018,  6018,  6018,  6018,  6019,  6019,
    6019,  6019,  6019,  6019,  6019,  6019,  6019,  6019,  6019,  6019,
    6020,  6020,  6020,  6020,  6020,  6020,  6020,  6020,  6020,  6020,
    6020,  6020,  6021,  6021,  6021,  6021,  6021,  6021,  6021,  6021,
    6021,  6022,  6022,  6022,  6022,  6022,  6022,  6022,  6022,  6023,
    6023,  6023,  6023,  6023,  6023,  6023,  6023,  6023,  6023,  6023,
    6024,  6024,  6024,  6024,  6024,  6024,  6024,  6024,  6024,  6025,
    6025,  6025,  6025,  6025,  6025,  6025,  6025,  6025,  6025,  6026,
    6026,  6026,  6026,  6026,  6026,  6026,  6026,  6026,  6026,  6026,
    6027,  6027,  6027,  6027,  6027,  6027,  6027,  6027,  6027,  6027,
    6027,  6028,  6028,  6028,  6028,  6028,  6028,  6028
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
     497,   498,   499,   500,   500,   501,   501,   502,   502,   503,
     504,   504,   505,   505,   506,   506,   507,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   508,   508,   508,   509,   509,   510,   510,   510,   511,
     511,   511,   511,   511,   512,   512,   512,   513,   513,   513,
     514,   514,   515,   515,   516,   516,   517,   517,   518,   518,
     518,   519,   519,   519,   520,   520,   520,   521,   521,   522,
     522,   523,   524,   524,   525,   525,   525,   525,   526,   527,
     527,   527,   528,   528,   529,   529,   530,   530,   531,   531,
     532,   532,   533,   533,   533,   533,   533,   533,   533,   533,
     534,   534,   535,   535,   536,   536,   536,   536,   536,   537,
     538,   538,   539,   539,   540,   540,   540,   541,   541,   541,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   543,
     543,   544,   544,   544,   545,   546,   547,   547,   548,   549,
     550,   551,   551,   552,   552,   553,   553,   554,   554,   555,
     555,   555,   556,   556,   557,   557,   558,   558,   558,   559,
     559,   560,   560,   561,   561,   562,   562,   562,   563,   563,
     563,   564,   564,   564,   565,   565,   565,   566,   566,   566,
     566,   566,   567,   568,   568,   569,   570,   570,   571,   571,
     571,   571,   571,   571,   572,   573,   574,   574,   575,   575,
     576,   577,   577,   578,   579,   580,   581,   581,   582,   582,
     583,   584,   584,   585,   585,   586,   586,   587,   587,   587,
     587,   588,   588,   588,   588,   588,   589,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   591,   592,   592,   592,
     593,   594,   595,   595,   595,   596,   596,   596,   597,   597,
     598,   599,   600,   600,   600,   600,   601,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   609,   610,   610,   611,
     611,   612,   612,   613,   613,   614,   614,   615,   615,   616,
     616,   616,   617,   617,   618,   618,   619,   619,   619,   619,
     619,   619,   620,   620,   621,   621,   621,   621,   622,   622,
     622,   622,   622,   622,   622,   622,   623,   623,   623,   624,
     624,   625,   625,   626,   626,   626,   626,   626,   626,   626,
     626,   627,   627,   627,   627,   628,   628,   629,   629,   630,
     630,   630,   630,   630,   631,   631,   632,   632,   632,   632,
     633,   633,   633,   634,   634,   635,   635,   636,   636,   637,
     637,   638,   639,   639,   640,   641,   642,   642,   642,   643,
     643,   643,   643,   643,   644,   644,   645,   646,   646,   647,
     647,   648,   649,   650,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   658,   658,   658,   658,   658,   659,   659,
     660,   660,   661,   661,   662,   662,   663,   663,   663,   664,
     664,   665,   665,   665,   665,   666,   666,   666,   667,   667,
     668,   669,   669,   670,   671,   672,   672,   673,   673,   674,
     675,   675,   676,   676,   677,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     679,   679,   679,   679,   679,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   679,   679,   679
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
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   252,   274,   290,   311,     0,     0,     0,   371,
       0,     0,   554,     0,     0,     0,   623,     0,   599,     0,
       0,   518,   578,   549,     0,   816,   817,   818,   866,   867,
     868,   872,   873,   874,   875,   876,   878,   881,   882,   883,
     884,   885,   886,   887,   888,   889,   890,   891,   892,   893,
     894,   895,   896,   897,   898,   899,   981,   982,   900,   901,
     902,   903,   904,   905,   906,   907,   908,   909,   910,   911,
     912,   913,   914,   915,   916,   917,   918,   919,   920,   921,
     922,   923,   924,  1020,  1021,   880,   819,   925,   555,   556,
     926,   927,   928,   929,   930,   931,   932,   933,   934,   935,
     936,   937,   938,   939,   940,   941,   942,   877,   943,   944,
     871,   945,   946,   947,   948,   949,   950,   951,   952,   953,
     954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     964,   870,   965,   966,   967,   968,   969,   970,   971,   972,
     973,   974,   975,   976,   977,   978,   869,   979,   879,   980,
     983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,   997,   998,   999,  1000,  1001,  1002,
    1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,
    1013,  1014,  1015,  1016,  1017,  1018,  1019,  1022,  1023,  1024,
    1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,
    1035,  1036,  1037,     2,   385,   387,   388,     0,   401,   404,
     405,   389,   390,   391,   397,   451,   453,   470,   473,   475,
     478,   483,   486,   489,   491,   493,   495,   497,   500,   501,
     503,     0,   509,   502,   514,   517,   521,   522,   524,   525,
     526,     0,   531,   528,     0,   543,   541,   551,   553,   523,
     557,   560,   569,   561,   562,   563,   566,   567,   564,   565,
     587,   589,   590,   591,   588,   628,   629,   630,   631,   632,
     633,   550,   675,   667,   674,   673,   672,   669,   671,   668,
     670,   392,     0,   393,     0,   395,   394,   396,   571,   572,
     573,   570,   552,   398,   399,   568,   851,   852,   559,   821,
     865,     0,     0,     3,   248,   249,     0,   252,   252,     4,
     270,   271,     0,   274,   274,     5,   286,   287,     0,   290,
     290,     6,   311,   301,   302,   311,     0,    23,   106,     7,
      20,    22,   371,     8,     0,     9,    17,    10,     0,     1,
     866,   867,   868,   872,   873,   874,   875,   876,   887,   888,
     889,   890,   891,   892,   893,   894,   895,   896,   897,   898,
     916,  1020,  1021,   927,   929,   940,   941,   877,   871,   958,
     964,   869,   879,  1006,  1009,  1015,  1017,  1027,  1028,   574,
     575,   865,   866,   867,   873,   876,   869,   540,   594,   595,
     596,     0,   624,     0,   516,   600,     0,   499,   498,   577,
       0,   534,     0,     0,   641,     0,     0,     0,     0,     0,
       0,     0,   646,     0,     0,     0,     0,     0,   532,   533,
     535,   536,   537,   538,   544,   545,   546,   547,   548,     0,
       0,     0,   814,     0,     0,     0,   409,   411,     0,     0,
     417,   419,     0,     0,   440,     0,     0,     0,     0,     0,
       0,   539,     0,     0,   636,     0,     0,   653,     0,     0,
     804,   805,     0,   807,   808,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   406,   403,   407,   408,   402,
       0,     0,     0,     0,     0,     0,     0,     0,   456,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   510,   515,     0,     0,     0,     0,
     530,   542,     0,     0,     0,   806,     0,     0,     0,     0,
       0,     0,     0,   970,   977,     0,     0,     0,   261,     0,
       0,   265,   266,   267,   262,   263,   329,   330,     0,   264,
       0,   250,     0,   246,   247,   251,   970,     0,     0,     0,
       0,     0,     0,     0,     0,   272,     0,   268,   269,   273,
     970,     0,     0,     0,   321,     0,     0,   325,   326,   328,
     322,   323,     0,   324,     0,   288,   327,     0,   284,   285,
     289,   299,   300,   309,   970,     0,     0,     0,     0,     0,
       0,     0,     0,   308,     0,    26,   112,     0,     0,    15,
     374,   375,   376,   377,   378,   379,   372,   373,   599,     0,
     626,   625,   622,     0,   576,   689,   685,     0,   688,   700,
       0,     0,   640,   681,     0,   677,     0,     0,     0,     0,
     676,   682,     0,     0,   820,     0,     0,   645,     0,   691,
       0,   699,   701,   680,     0,     0,     0,     0,     0,     0,
       0,   653,     0,   653,     0,     0,   653,     0,     0,     0,
       0,     0,     0,     0,     0,   697,   692,     0,   696,     0,
     635,     0,   367,     0,   382,     0,     0,     0,     0,     0,
     839,   841,   386,   400,   422,     0,     0,     0,   450,   452,
     455,   458,   459,   460,   468,   469,     0,   454,   461,   462,
     463,   464,   465,   466,   467,     0,   476,   477,   474,   479,
     481,   480,   482,   484,   485,   487,   488,     0,     0,     0,
       0,   507,     0,   520,   519,     0,     0,     0,   586,   855,
     585,     0,   584,     0,     0,     0,     0,   581,     0,   853,
     307,   306,   331,     0,   303,   305,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   832,     0,     0,     0,
     253,   254,   255,   256,   260,   257,   258,   259,   371,     0,
       0,   275,   276,   277,   278,   282,   283,   279,   280,   281,
     371,     0,   291,   292,   293,   294,   298,   295,   296,   297,
     371,   371,   312,   313,   314,   315,   319,   320,   316,   317,
     318,    24,    25,     0,   108,   109,     0,   365,   366,     0,
       0,   371,    18,     0,    14,   600,     0,   627,     0,   512,
     511,     0,   686,   642,   638,     0,   644,   678,   679,   684,
     683,   647,   648,     0,   690,   698,   643,   634,     0,   813,
       0,   579,   580,   413,   410,     0,     0,   418,     0,   439,
     437,   438,     0,     0,   504,     0,     0,     0,   693,   637,
     653,     0,   368,     0,   878,   870,   879,   654,   657,   661,
     663,   666,   664,   857,   858,   665,     0,   854,     0,     0,
       0,     0,     0,     0,   423,   430,   424,   427,   431,     0,
     457,     0,     0,     0,     0,   726,   471,   707,   710,   712,
     714,   716,   717,   732,   721,   490,   492,   494,   651,   496,
     508,   527,   529,   558,     0,   856,     0,     0,   803,   802,
     801,   582,   304,     0,   333,   334,   703,   349,     0,     0,
     362,   363,   339,   340,     0,     0,     0,     0,   344,   345,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   352,
       0,   352,     0,   338,   797,   796,   798,    21,    34,    62,
      48,    69,    74,   100,    27,    52,    28,    52,    29,   112,
      30,   112,    31,     0,    32,     0,   107,   105,   135,     0,
     142,   151,     0,     0,     0,   182,   187,   190,   194,   196,
     202,   206,   173,   210,   214,   218,   139,   140,   114,   115,
     116,   112,   117,   113,   118,   148,   119,   153,   120,     0,
     122,   112,   121,   130,   177,   123,   112,   124,   112,   125,
     112,   126,   112,   127,   112,   128,   112,   129,   112,   131,
       0,   132,   112,   133,   112,     0,     0,     0,   380,   599,
     599,   617,   592,   513,     0,   702,   639,   649,   815,     0,
       0,   415,     0,     0,     0,     0,     0,   444,     0,   505,
     506,     0,   383,   381,     0,     0,     0,     0,   658,   660,
     659,   655,     0,   810,     0,   811,     0,     0,   846,   847,
     843,   845,     0,   432,   433,   434,   425,     0,     0,   715,
       0,   727,   729,   731,   722,     0,   472,     0,   705,     0,
       0,   718,     0,   719,   652,   650,   583,     0,     0,     0,
     653,     0,     0,   348,     0,     0,     0,   337,   832,   836,
     837,   838,   833,   834,     0,     0,     0,     0,   352,     0,
     351,     0,   358,     0,     0,   767,     0,     0,   792,     0,
       0,   763,   764,     0,   751,   757,   758,   756,   755,   759,
     753,   754,   760,     0,   101,   102,    40,    36,     0,     0,
       0,   112,    49,    51,     0,   112,    63,    67,    66,     0,
       0,     0,    70,     0,     0,     0,    73,    91,    75,    79,
      80,    81,    85,    86,    88,    77,    82,    83,    84,    87,
      89,     0,     0,     0,    99,   111,   110,     0,     0,     0,
     170,   166,   112,     0,     0,   109,     0,     0,     0,     0,
     152,     0,   161,     0,   112,     0,   109,   109,   179,   183,
       0,     0,     0,     0,     0,   109,     0,     0,     0,   109,
       0,   109,   109,     0,   109,     0,     0,   109,   109,     0,
     209,   212,     0,   215,   216,     0,     0,     0,   379,     0,
       0,     0,     0,     0,   687,   812,     0,     0,     0,   420,
     421,   441,     0,     0,     0,   442,   443,     0,     0,   694,
     864,   656,   662,     0,     0,   862,     0,   384,     0,     0,
       0,   848,     0,     0,   426,     0,   428,   720,   726,   724,
       0,   728,   730,     0,   709,     0,     0,   738,     0,     0,
       0,     0,     0,   704,   708,   711,     0,     0,     0,     0,
       0,   799,   800,   310,     0,   332,   341,   342,   335,   336,
     346,   347,   343,     0,   822,   828,     0,     0,     0,   226,
     225,   866,   887,  1022,  1023,     0,   221,     0,   224,   222,
     233,   244,   240,   379,   355,   356,   350,   353,     0,     0,
     768,   773,     0,   793,   766,   765,     0,     0,   770,   769,
       0,   762,   761,     0,   791,   752,   103,   104,    38,    35,
      39,    44,    45,    46,    37,    55,    53,   112,     0,    50,
       0,    65,    64,    61,    72,    71,    68,    95,    96,    92,
      93,    94,    76,    97,    78,    90,   138,   162,     0,   112,
     167,     0,     0,   164,   136,   137,   134,   145,   146,   147,
     144,   143,   141,   156,   149,   112,   150,   154,   163,     0,
     174,   175,   176,   112,     0,   185,   184,   112,   188,   186,
     191,   192,   189,   193,   197,   199,   200,   198,   195,   203,
     204,   201,   207,   208,   205,   211,   213,   219,   217,     0,
      16,     0,   599,   599,     0,   621,   620,   619,   618,   414,
       0,     0,     0,     0,     0,     0,     0,   695,   859,     0,
       0,     0,   809,   653,     0,   840,   842,     0,   435,   436,
       0,   723,   725,   795,   745,   743,   744,   706,     0,     0,
     749,   750,   741,   742,   713,     0,     0,   734,     0,   733,
       0,   361,   359,   830,     0,     0,     0,     0,   835,   243,
       0,     0,     0,     0,     0,   826,   828,   234,     0,     0,
       0,     0,   239,     0,   354,   352,   781,   774,   774,   776,
       0,     0,   783,   783,   794,    41,    42,    43,    56,    60,
      59,     0,     0,     0,    33,    47,    98,   169,     0,   165,
     168,   157,   160,     0,     0,     0,   178,     0,   172,   181,
      12,   379,     0,     0,   599,   416,   412,     0,   447,     0,
     446,   449,   860,   863,     0,     0,   849,     0,   429,   746,
     747,   748,   739,   740,   736,   735,     0,   360,   831,   829,
     823,     0,   242,   241,     0,   230,   229,     0,   220,     0,
     236,   235,   238,   237,     0,   370,   364,   369,   357,     0,
       0,     0,     0,     0,   787,   785,   782,   780,    58,    57,
      54,   171,   159,   158,   155,   180,    11,    13,     0,   605,
     611,   597,   608,   614,   598,     0,     0,     0,   861,     0,
     844,   737,   824,   828,   227,     0,   827,     0,     0,   772,
     771,   777,   778,     0,   786,     0,     0,   784,     0,     0,
       0,     0,     0,   593,     0,   445,   850,     0,     0,   231,
     232,   245,   775,     0,   788,   789,   790,    19,   601,   607,
     606,   602,   613,   612,   603,   610,   609,   604,   616,   615,
     448,   825,   228,   779
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,   333,  1636,   337,   335,   336,   609,   822,   329,
     330,   605,   813,   974,   975,  1378,  1384,   976,   977,  1171,
    1386,  1387,   978,   979,   980,   981,   982,   983,  1402,  1404,
     984,   985,  1008,   606,   986,   816,  1009,  1010,  1011,  1012,
    1013,  1014,  1015,  1420,  1219,  1016,  1017,  1221,  1424,  1425,
    1018,  1019,  1020,  1021,  1022,  1210,  1211,  1212,  1411,  1023,
    1024,  1228,  1434,  1025,  1026,  1027,  1028,  1029,  1030,  1031,
    1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,
    1042,  1043,  1044,  1345,  1346,  1347,  1348,  1604,  1678,  1349,
    1350,  1351,  1532,   303,   304,   305,   306,   535,   309,   310,
     311,   312,   315,   316,   317,   318,   321,   307,   530,   531,
     323,   324,   308,   326,   571,   536,   754,   537,   538,   539,
     540,   562,   541,   542,   543,   950,  1332,   544,   545,   546,
    1140,   958,   547,   548,  1512,   549,   550,   819,   457,  1616,
     767,   616,   617,   824,   683,   684,  1206,   203,   204,   205,
     206,   207,   208,   476,   209,   436,   437,  1061,  1268,   210,
     440,   441,   477,   478,   479,   896,   897,   898,  1095,  1296,
     211,   443,   444,   212,  1066,  1275,  1067,   213,   214,   215,
     216,   706,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   830,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     379,   254,   255,   256,   257,   258,   741,   742,   259,   260,
     261,   390,   618,   396,  1641,  1644,  1669,  1671,  1670,  1672,
    1263,   262,   393,   263,   621,   264,   265,   266,   455,   632,
     267,   405,   268,   269,   270,   413,   647,   917,  1115,   686,
     877,  1081,   878,   879,   271,   272,   273,   274,   275,   276,
     277,   627,   278,   648,   279,   677,   280,   650,   628,   651,
    1054,   937,   906,  1313,  1108,   907,   908,   909,   910,   911,
     912,   913,   914,  1104,  1113,  1320,  1314,  1592,  1502,   963,
    1154,  1155,  1156,  1157,  1158,  1619,  1369,  1159,  1626,  1543,
    1623,  1667,  1160,  1161,  1162,  1106,   586,   281,   282,   283,
     284,   285,   286,   287,   431,   432,   288,   289,   290,   291,
     643,   292,   552,  1516,  1335,   954,  1132,  1133,   293,   294,
    1090,  1290,  1291,   295,   296,   297,   298,   882,   883,   884,
    1286,   885,   299,   300
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1427
static const yytype_int16 yypact[] =
{
    1009,  3481,   -44,   -44,   -44,   -44,  -112,    -8,     8, -1427,
     277,  7375, -1427,  5855,   548,   194,   242,  4909,   251,  3719,
    3719, -1427, -1427, -1427,  2291, -1427, -1427, -1427,   167,   500,
     360,   459,   114,   494,   498,   536, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427,   369,   525,   564,   586,   620,   632,   641,
     679,   717,   784,   810,   514, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427,   544, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427,   635,   692, -1427, -1427, -1427, -1427, -1427,
   -1427,   874, -1427,    59, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427,   905,   905, -1427,   840, -1427, -1427,
     877, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427,   305, -1427, -1427, -1427, -1427, -1427,
     900, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427,   145, -1427,   891, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427,   105, -1427, -1427,    23, -1427, -1427, -1427,
   -1427, -1427,   783, -1427,    32, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427,   619,   702, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427,   910, -1427, -1427,   890, -1427, -1427,
   -1427, -1427, -1427, -1427,   798,   808, -1427,   964,   774,   103,
      77,    86,   654, -1427,   828,   826,   859,   855, -1427, -1427,
   -1427,   395, -1427, -1427,  4909,   429, -1427, -1427,  1005,  1032,
   -1427,  5855, -1427, -1427,  5855, -1427, -1427, -1427, -1427,   383,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427,  3481, -1427,  3481, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
     326,   526,   908, -1427, -1427, -1427,  3957,   873, -1427, -1427,
   -1427, -1427,  4195,   873, -1427, -1427, -1427, -1427,  4433,   873,
   -1427, -1427,   873, -1427, -1427, -1427,  4671, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427,   909, -1427, -1427, -1427,   267, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427,  1042,  1043,  1045,  1046,  1047, -1427, -1427, -1427,
   -1427,   781, -1427,  1059,   429, -1427,  7375, -1427, -1427, -1427,
     749, -1427,  6327,  3481, -1427,  1041,  1052,  3481,    87,  1053,
    7183,  3481, -1427,  1054,  7375,  7375,  1060,  3481, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,  3481,
    7375,    58, -1427,  3481,  3481,  7375,  1057, -1427,  7375,  1086,
    1067, -1427,  7375,   109, -1427,   125,  3481,  3481,  3481,  1058,
    1061, -1427,  6563,  3481, -1427,  1041,   180,   954,  3481,   949,
   -1427, -1427,  3481, -1427, -1427,  7375,  3481,  3481,  3481,   874,
      59,  3481,  1099,   974,   980, -1427, -1427, -1427, -1427, -1427,
    3719,  3719,  3719,  3719,  3719,  3719,  3719,  3719, -1427,  3719,
    3719,  3719,  3719,  3719,  3719,  3719,  3719,  1056,  3719,  3719,
    3719,  3719,  3719,  3719,  3719,  3719,  3719,  3719,  3719,   961,
     960,   975,   976,  2529, -1427,   429,  4909,  4909,  3481,  3481,
   -1427, -1427,  3481,  1815,   304, -1427,  2053,  1070,  1001,  1004,
      70,  1079,  7375,  1202,   580,  1079,  1079,  1079, -1427,  1079,
    1079, -1427, -1427, -1427, -1427, -1427, -1427, -1427,  1079, -1427,
    1079, -1427,  1079, -1427, -1427,   623,   932,  1079,  1079,  1079,
    1079,  1079,  1079,  1079,  1079, -1427,  1079, -1427, -1427,   626,
    1196,  1079,  1079,  1079, -1427,  1079,  1079, -1427, -1427, -1427,
   -1427, -1427,  1079, -1427,  1079, -1427, -1427,  1079, -1427, -1427,
     627, -1427, -1427,   643,   505,  1079,  1079,  1079,  1079,  1079,
    1079,  1079,  1079, -1427,  1079,   115,   608,   648,  7375,   951,
   -1427, -1427, -1427, -1427, -1427,   983, -1427, -1427,  1027,  1030,
   -1427, -1427, -1427,    65, -1427, -1427, -1427,   790, -1427, -1427,
     454,  2767, -1427, -1427,   468, -1427,   498,  1047,  1095,  1096,
   -1427, -1427,  1097,  1098, -1427,   487,  3005, -1427,  1100, -1427,
    1101, -1427, -1427, -1427,   508,   519,  1130,   544,  3481,   565,
     584,   954,   874,   954,  7375,    59,   954,   905,  3481,  3481,
     791,   795,   587,  3481,  3481, -1427, -1427,   801, -1427,   670,
   -1427,  7375, -1427,   802, -1427,  6770,  1102,   919,  1089,   993,
     925,    92, -1427, -1427, -1427,  7375,  3481,  1015,   808, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427,  3719, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427,    78,    77,    77,   894,    86,
      86,    86,    86,   654,   654, -1427, -1427,  6770,  6770,  7375,
    7375, -1427,   673, -1427, -1427,   680,   756,   765, -1427, -1427,
   -1427,   805, -1427,   631,  3481,  3481,  3481, -1427,   821, -1427,
   -1427, -1427, -1427,  1079, -1427, -1427,  1115,   775,  1031,  1147,
    7375,   778,   864,   501,   293,  7375,   681,   648,   289,    33,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,   743,   580,
    1075, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
     728,   124, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
     481,   543, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427,   316, -1427, -1427,  7559, -1427, -1427,  7558,
    1122, -1427, -1427,  6770, -1427,   871,   271, -1427,  1034, -1427,
   -1427,  7375, -1427, -1427, -1427,   683, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427,   698, -1427, -1427, -1427, -1427,  3481, -1427,
    1036, -1427, -1427,  1048, -1427,  1150,  1157, -1427,  1037, -1427,
   -1427, -1427,  1021,  1018, -1427,   712,   721,  7375, -1427, -1427,
     954,  1163, -1427,  6977,  1133,  1134,  1139, -1427,   176, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427,  3481, -1427,  3481,  3481,
    3481,  1144,  1145,  1547, -1427, -1427,  1156, -1427,   860,  3481,
   -1427,    78,  3481,   534,   732,   417,  1103,   950,   955,  1113,
   -1427, -1427,  1075,  1002, -1427, -1427, -1427, -1427,  1179, -1427,
   -1427, -1427, -1427, -1427,  3243, -1427,   970,   978, -1427, -1427,
   -1427, -1427, -1427,  1031, -1427, -1427, -1427, -1427,  7375,  1166,
   -1427, -1427, -1427, -1427,  1064,  1031,  1038,  1039, -1427, -1427,
    1175,  1088,  7375,   -58,   982,  7558,  7375,  1024,  1031,  1104,
    7375,  1104,   550,  1136, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427,   715, -1427,   315, -1427,   214, -1427,   365,
   -1427,   348, -1427,  1176, -1427,   973,    67, -1427, -1427,   690,
   -1427, -1427,   920,   962,   922, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427,   499, -1427, -1427, -1427,    39, -1427,   944, -1427,   977,
   -1427, -1427, -1427, -1427,   273, -1427,   378, -1427,   926, -1427,
      95, -1427, -1427, -1427,    81, -1427,   120, -1427,   -59, -1427,
     227, -1427,   737, -1427,   928,   891,  1031,   648, -1427,   251,
     251, -1427, -1427, -1427,  1186, -1427, -1427, -1427, -1427,  3481,
    1222,  1040,  3481,  3481,  3481,  5147,    30, -1427,  3481, -1427,
   -1427,   268, -1427, -1427,  1191,  1193,  1194,  6091, -1427, -1427,
   -1427, -1427,   734, -1427,  1012, -1427,  1228,  1228, -1427, -1427,
    1014, -1427,  3481, -1427, -1427,  1105,  1156,  1198,   748, -1427,
     112,  1146,  1028, -1427, -1427,  1148, -1427,    78,   562,    78,
    1109,  1136,   101, -1427, -1427, -1427, -1427,  3481,  3481,  1079,
     954,  1031,   889, -1427,  1031,  1031,   862, -1427,    56, -1427,
   -1427, -1427,  1212, -1427,  5383,   891,  1210,  1076,  1104,  1031,
    1216,  1213,  1216,   812,   948, -1427,    82,  1051, -1427,   956,
    7375, -1427, -1427,  1127, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427,   550,   965,   967, -1427, -1427,  5383,  6770,
     882,   996, -1427, -1427,  6770,   996, -1427, -1427, -1427,  6770,
    3481,  7587, -1427,  6770,  3481,  7615, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427,   -16,  1135,  1135, -1427, -1427, -1427,  1008,  3481,   966,
     787, -1427, -1427,  3481,  3481, -1427,  7643,   -34,  3481,   492,
   -1427,   659, -1427,  7671, -1427,  3481, -1427, -1427,   986, -1427,
    6770,  3481,  7699,  3481,  7727, -1427,  3481,  7755,  7783, -1427,
    3481, -1427, -1427,  7811, -1427,  3481,  7839, -1427, -1427,  7867,
   -1427, -1427,  3481, -1427, -1427,  7895,  3481,  7923,   983,  1079,
    7558,  1215,  1221,   604, -1427, -1427,  7375,  1250,  1137, -1427,
   -1427, -1427,  7375,  1141,   140, -1427, -1427,  1111,  1231, -1427,
   -1427, -1427, -1427,  1232,  1124, -1427,   822, -1427,  3481,  7375,
     831, -1427,   832,  1236, -1427,   907,  1138, -1427,   417, -1427,
    1229, -1427, -1427,  3719,   955,  1182,   953, -1427,  3719,  3719,
     101,   839,   839, -1427, -1427,  1113,    78,    53,  3719,  3719,
    1080, -1427, -1427, -1427,    76, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427,   299, -1427,  1132,  1055,   -58,  5855, -1427,
    1044,   398,  1262,  1245,  1247,   331, -1427,  5619,   466,   478,
   -1427, -1427, -1427,   983, -1427, -1427,  1216, -1427,  1031,  1031,
   -1427, -1427,  1078, -1427, -1427, -1427,    21,  1031, -1427, -1427,
     100, -1427, -1427,  1164, -1427, -1427, -1427, -1427,   -20,  1280,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427,   428,  7951, -1427,
    7979, -1427,   910, -1427, -1427,   910, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427,  1172,  1172, -1427,   910,  3481, -1427,
   -1427,  1068,  8007,   910,   910,    67, -1427, -1427, -1427, -1427,
   -1427,   910, -1427, -1427, -1427,   311, -1427, -1427, -1427,  8035,
     910,    67,    67, -1427,  1072, -1427,   910, -1427,   910, -1427,
      67,   910, -1427, -1427,    67,   910,    67,    67, -1427,    67,
     910, -1427,    67,    67, -1427,   910, -1427,   910, -1427,  1102,
   -1427,   891,   251,   251,   548, -1427, -1427, -1427, -1427, -1427,
    7375,  3481,  1153,  3481,  7375,  3481,  3481, -1427, -1427,  6770,
    6770,  1169, -1427,   954,  1228, -1427, -1427,  1228, -1427, -1427,
    1031, -1427, -1427,    86, -1427, -1427, -1427, -1427,   149,   725,
   -1427, -1427, -1427, -1427, -1427,  3719,  3719,   894,   121, -1427,
    3481, -1427, -1427, -1427,   833,  6770,  1102,  5383, -1427, -1427,
    5855,  5855,    98,  1127,  5383, -1427,  1132, -1427,  5619,  5619,
    5619,  5619,  1277,    55, -1427,  1104, -1427, -1427, -1427,   278,
    1127,  1031, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427,  6770,  3481,  8063, -1427, -1427, -1427,   910,  8091, -1427,
   -1427, -1427, -1427,  6770,  3481,  8119, -1427,  8147, -1427,  1545,
    1079,   983,   275,   664,   251, -1427, -1427,  6770, -1427,  1171,
   -1427, -1427, -1427, -1427,  6770,  1304, -1427,   838, -1427, -1427,
   -1427, -1427, -1427, -1427,   894,   894,  3719, -1427, -1427, -1427,
   -1427,   331, -1427, -1427,  1284, -1427, -1427,  1293, -1427,  1102,
   -1427, -1427, -1427, -1427,  3481, -1427, -1427, -1427,  1216,   843,
     856,  1127,  1123,   857, -1427, -1427,   704,   704, -1427,   910,
   -1427, -1427, -1427,   910, -1427, -1427, -1427, -1427,  1102, -1427,
   -1427, -1427, -1427, -1427, -1427,  1303,  1200,  3481, -1427,  3481,
   -1427,   894, -1427,  1132, -1427,   164, -1427,   766,  1218, -1427,
   -1427,   101, -1427,  1127, -1427,   110,   110, -1427,  1079,   127,
     474,   129,   484, -1427,  3481, -1427, -1427,  1102,  1291, -1427,
   -1427, -1427, -1427,  1129, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,   361,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,   136,
   -1427, -1427,  1334, -1427,  -282,  -906, -1427, -1427, -1427, -1427,
     352, -1427, -1427, -1427, -1427, -1427, -1427, -1427,   122, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427,   132, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1149,  -180, -1427, -1427, -1427, -1427, -1427,
   -1176, -1427, -1427, -1427,  1050,  1062,  1065,  -248, -1427,  1033,
    1063,  1035, -1427,  1026,  1073,  1074, -1427,   971, -1427,   823,
    1029,  1071,    93,  1077,  -290,  -209,  -519,   -83,  -231,   -81,
     -48,  -289,  -176,  -172,  -156, -1427, -1427,  -145,  -133, -1427,
    -955, -1427, -1427,   -36, -1427,  -117,   -31,  -675,  -337, -1427,
      -6, -1427, -1427, -1226,    19,   483,  -631,   462,   -24,   -70,
   -1427, -1427,  1149, -1427, -1427, -1427,   696, -1427, -1427, -1427,
   -1427,   695, -1427, -1427, -1427,   467,   269, -1427, -1427, -1427,
   -1427,  1260,   700, -1427, -1427, -1427,   302, -1427, -1427,   892,
     893, -1427,  -154,    62,  -495,   563,  -443,   558,   559, -1427,
   -1427, -1427,  1049, -1427, -1427, -1427,  -629,  -227, -1427, -1427,
   -1427,    34,   554, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427,   -11, -1427, -1427, -1427, -1427,  -665, -1427, -1406,
    -368, -1427, -1427, -1427, -1427, -1427,   849,   471, -1427,   135,
   -1427,   -86, -1427,  -611, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,   945,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427,   669, -1427,  -653,
    -704, -1427,   531,   343,  -616, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427,   999, -1427,  1000, -1427,   995,   958,
     545,  -754,  -853, -1427, -1427, -1427,   306,   307,    99,   511,
   -1427, -1427, -1427,   113, -1427, -1283, -1427,   -82,   106,   507,
     257, -1427, -1427, -1427, -1427,  -115, -1341, -1427,  -122,  -585,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427,   767, -1427, -1427, -1427, -1039,
    -506,  -380,   -29, -1426, -1299,   297, -1427,    90, -1427, -1427,
   -1427, -1076,   -56, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427,    -2,    17
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -372
static const yytype_int16 yytable[] =
{
     400,   615,   387,   338,   514,   718,  1142,   826,   853,   380,
     855,  1292,   755,   858,   959,   961,   770,   771,   772,  1379,
     773,   774,   629,   915,   916,  1538,   756,  1499,   381,   775,
     381,   776,  1459,   777,   629,   652,   595,   600,   781,   782,
     783,   784,   785,   786,   787,   788,  1526,   789,  1097,  1397,
     905,   394,   792,   793,   794,   887,   795,   796,   719,   720,
     721,   722,   656,   797,   557,   798,  1129,   661,   799,   880,
     663,   438,   652,  1181,   666,  1185,   802,   803,   804,   805,
     806,   807,   808,   809,   460,   810,   904,   574,   947,  1510,
    1417,   501,   955,   463,   657,   574,   314,   320,   325,  1333,
    1609,   505,   820,   558,  1545,  1216,   886,   886,  1398,   572,
      11,   880,   880,    18,  1374,  1223,  1605,   596,   886,  1048,
    1232,   901,  1234,   752,  1237,  1366,  1238,  1533,  1243,   902,
    1246,   635,  1249,    25,    26,    27,  1255,  1367,  1257,   327,
     498,   499,   577,  1540,   301,   667,   578,    18,   302,   502,
     577,   636,  1474,  1540,   578,   901,  1505,   410,   498,   499,
     936,   667,   579,   902,  1299,   411,   458,    25,    26,    27,
     579,  1527,   828,   580,   332,  1688,    11,  1694,   886,  1119,
     886,   580,  1065,  1356,  1205,   581,   498,   499,   452,   401,
    1078,  1123,   681,   581,   964,   965,   453,   829,  1367,  1506,
     334,   583,  1079,   328,  1138,    86,  1537,   880,   960,   583,
     402,   459,   524,  1080,   525,  1274,  1541,  1072,   403,    25,
      26,    27,  1317,  1247,   682,    86,  1541,  1677,   966,   559,
     520,   560,  1615,   521,   932,   573,   905,   575,   905,    86,
     412,   503,   504,   597,  1689,   598,  1695,  1300,   528,  1680,
    1248,   461,   506,  1511,   939,   439,  1622,   880,   381,   668,
     464,   381,  1130,  1131,   561,  1388,   500,  1368,   515,  1390,
     576,   454,   904,  1475,   904,   669,   563,   339,   599,   658,
     637,   564,   582,   566,  1596,  1542,  1418,   584,  1419,   587,
     601,    86,  1259,   404,  1278,   602,   856,   604,   953,  1051,
    1546,  1547,  1653,   595,   600,   881,  1412,  1399,  1400,  1401,
     456,   681,  1279,   870,  1318,  1319,  1052,  1682,  1429,   892,
    1217,   557,  1639,   903,  1640,   391,   607,   894,   700,   701,
     702,   703,   704,   705,   893,   707,   708,   709,   710,   711,
     712,   713,   714,  1513,  1218,  1638,  1524,   881,   881,   881,
     881,   392,  1610,  1611,  1612,  1613,   448,   903,   395,   574,
     558,  1273,   574,  1239,  1589,  1590,  1591,  1325,  1601,   526,
    1328,  1329,  1260,  1285,  1333,   449,   450,  1235,  1683,   630,
     527,   572,   886,   634,   596,  1357,  1240,   645,   687,  1241,
    1242,   418,   689,   654,   623,   811,   691,   692,   693,  1317,
    1236,   694,  1244,   408,   812,   655,   314,   522,   644,   659,
     660,  1587,   320,   381,   577,   325,   936,   577,   578,   381,
    1520,   578,   670,   671,   672,  1245,   523,   381,   380,   679,
      18,   381,   381,   380,   579,   905,   380,   579,  1261,  1262,
     380,   402,   905,   881,   905,   580,   513,   381,   580,   880,
    1136,  1055,   381,   740,  1141,   381,   740,   581,   743,   381,
     581,   880,   516,   690,   956,  1380,   948,  1324,   517,   381,
    1389,   904,   949,   583,   957,  1391,   583,  1250,   904,  1394,
     904,  1553,   381,  1606,  1607,  1621,   559,  1055,   560,   732,
     467,  1318,  1319,   881,   735,   736,  1172,  1334,   737,  1528,
     610,  1624,   409,  1558,   467,  1529,   833,   573,  1173,   575,
     597,  1530,   598,   611,   612,   613,   614,  1531,  1174,  1565,
     836,   561,  1251,   467,  1691,   886,  1435,  1567,   744,   745,
     644,  1569,  1252,   563,  1697,   886,   746,   414,   564,   841,
     566,   415,   576,   406,   467,   599,  1224,   419,   757,   381,
     758,   407,   900,   880,   582,   467,   430,   601,   880,   584,
     846,   587,   602,   880,   604,   429,   967,   880,   968,    18,
    1120,   847,   757,   780,   758,   969,   970,   901,  1225,   416,
    1618,   971,  1661,  1226,  1227,   902,   420,   417,   850,    25,
      26,    27,  1692,  1561,   972,   973,  1166,  1167,   860,   861,
    1323,   467,  1698,  1562,  1534,  1535,   644,   835,   421,   759,
     757,   780,   758,  1539,   880,  1563,  1564,   851,  1168,  1169,
     467,  1170,   843,   467,  1684,   381,   895,  1101,  1102,  1103,
    1182,    14,  1467,   759,    15,    16,   852,  1143,  1464,   864,
    1144,   944,   422,  1145,  1146,  1147,  1148,  1176,   945,   865,
     866,   905,  1183,  1184,   423,   886,   760,  1177,  1178,  1305,
    1229,    86,   380,   424,   761,   762,   763,   764,   765,  1179,
    1180,   759,   388,   389,   928,   929,   930,   514,  1306,   380,
     760,   381,  1230,  1231,  1307,   881,   433,   904,   761,   762,
     763,   764,   765,   380,   946,   817,   818,   881,   381,  -371,
    -371,   425,   381,  1149,   528,   921,   467,   791,  1258,   467,
    1548,  1642,   381,  1643,  1525,   529,   467,   766,   760,   467,
    1549,  1550,   869,  1465,  1466,   920,   761,   762,   763,   764,
     765,   791,  1551,  1552,   467,  1056,  1588,  1150,  -371,   426,
    1460,   766,  1422,   434,   381,   381,   381,   381,   467,  1423,
    1057,  -371,  -371,  -371,  -371,  1151,  1152,   467,   644,  1153,
    1308,  1309,  1310,   951,  1069,  1311,  1312,    18,   551,   791,
     467,   768,   769,  1070,   565,  1582,  1583,   381,  1058,   766,
     585,   922,   381,  1100,   467,   467,  1287,  1625,   603,   881,
     923,  1681,   467,   624,   881,   757,   780,   758,  1353,   881,
    1298,   467,   467,   881,  1214,   778,   427,  1215,   790,   800,
     757,  1599,   758,   779,  1498,  1047,   779,   779,  1083,  1084,
    1085,   507,   508,  1507,  1508,   801,   831,   467,  1570,   895,
    1585,   467,   428,   779,   832,   862,  1045,   867,   871,   863,
     381,   924,   817,   818,   462,   868,   872,  1628,   381,   925,
     881,  1572,  1573,   926,   740,   465,   759,   924,  1480,  1632,
    1493,   927,  1082,   880,   880,   931,  1481,  1484,  1484,   871,
    1665,   759,  1666,  1646,  1484,  1485,  1486,  1598,  1098,  1658,
    1648,   610,  1650,   446,   381,  1600,   435,  1659,   619,   620,
     381,  1091,  1658,  1663,   611,   612,   613,   614,  1469,   880,
    1660,  1664,  1617,   760,  1472,  1360,  1361,  1362,  1363,  1426,
     381,   761,   762,   763,   764,   765,  1423,   442,   760,   952,
     447,  1483,   451,   953,   814,   815,   761,   762,   763,   764,
     765,   498,   499,  1415,   456,   880,   380,  1381,  1382,  1383,
    1589,  1590,  1591,   466,  1431,  1432,   467,   880,   934,   935,
    1128,   940,   941,  1440,   644,   381,   480,  1444,   644,  1446,
    1447,   880,  1449,  1645,   766,  1452,  1453,   481,   880,   381,
    1652,   497,  1135,   381,   313,   319,   322,   381,  1656,   766,
     482,   483,   484,   485,   486,   487,   942,   943,   509,  1265,
    1679,   488,  1269,  1270,  1271,  1049,  1050,   510,  1277,   757,
     780,   758,  1093,  1094,   489,  1164,  1165,  1668,  1006,  1007,
    1594,  1595,     1,     2,     3,     4,     5,     6,     7,     8,
       9,   511,   895,   468,   469,   512,   470,   471,   472,   518,
     473,   474,  1253,  1254,  1326,  1327,  1364,  1365,  1690,  1693,
    1696,  1699,  1330,  1331,  1371,  1372,  1701,  1321,  1322,  1209,
    1409,  1637,  1488,  1489,  1495,  1496,   519,  1500,  1501,  -223,
     759,   716,   717,   723,   724,   302,   725,   726,   397,   398,
     733,   734,   918,   918,   490,   491,   492,   493,   494,   495,
    1685,  1686,   381,   532,   608,   402,   406,  -223,   410,   416,
     452,   622,   631,   662,   381,  -223,   633,   640,   664,   881,
     881,  1651,  1575,   665,   653,   646,  1579,   760,   685,   673,
     688,   695,   674,   696,   728,   761,   762,   763,   764,   765,
     697,   715,   727,  1352,  1571,   749,  -371,  -371,   750,   729,
     730,   751,   752,   821,   825,   881,   496,   823,   827,   837,
     838,   839,   840,   848,   844,   845,   888,   890,  1373,  1687,
     889,   381,   891,   886,   899,   933,  1392,  1352,   936,   938,
    1395,   962,  1046,  1062,  1060,  -371,  1053,   381,   766,  1059,
    1063,   881,  1064,  1065,  1068,   681,  1075,  1076,  -371,  -371,
    -371,  -371,  1077,   881,  1407,   381,   381,  1086,  1087,  1413,
    1414,   381,  1092,  1107,  1421,  1105,   381,   881,  1110,  1109,
     381,  1430,  1117,  1112,   881,  1114,  1121,  1436,  1122,  1438,
    1118,  1126,  1441,  1124,  1125,  1127,  1445,  1137,  1482,  1134,
    1139,  1450,  1163,  1204,  1209,  1208,  1220,  1222,  1455,  1213,
    1264,  1233,  1457,  1256,  1266,  1280,  1267,  1281,  1282,  1288,
    1289,  1293,  1297,  1302,  1316,  1301,  1303,   381,  1337,  1295,
    1354,  1355,  1358,  1359,    86,  1385,  1376,  1377,  1406,  1403,
    1433,  1462,  1470,   757,   380,   758,  1370,  1463,  1476,   757,
     380,   758,  1471,  1408,  1473,  1477,  1478,  1461,  1479,  1487,
    1494,  1492,  1509,   381,  1521,  1490,  1515,   380,  1522,   381,
    1523,  1544,  1517,  1536,  -223,  1524,  1556,  -223,  -223,  -223,
    -223,  1614,  -223,  -223,  1647,  -223,   381,  1577,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  1649,  1559,  -223,
    -223,  -223,  1568,  1584,   759,  -223,  -223,  1519,  1654,  1655,
     759,  1662,  1673,  1674,  1367,  1702,  1352,  1703,  1175,  1405,
     331,  1207,  1410,  1427,  1608,   588,   567,  -223,  -223,   569,
    -223,   591,  1514,   753,  1073,   381,   475,   553,   854,  -223,
     857,  1294,  -223,  -223,   381,   445,  1096,   859,  1276,   554,
    1497,   760,   698,   555,   699,   748,   568,   760,  1574,   761,
     762,   763,   764,   765,  1557,   761,   762,   763,   764,   765,
    -371,  -371,   589,   592,   590,  1116,  -371,  -371,  1468,   919,
     680,  1576,   593,  1578,  1074,  1580,  1581,   638,   639,   649,
     678,  1491,  1071,  1304,  1099,  1504,  1315,  1593,  1503,  1111,
    1375,  1627,   791,  1620,   849,  1336,  1186,  1518,  1586,  -371,
       0,     0,   766,     0,     0,  -371,     0,     0,   766,     0,
    1597,     0,  -371,  -371,  -371,  -371,     0,     0,  -371,  -371,
    -371,  -371,     0,     0,     0,     0,  1187,     0,  1188,  1189,
    1190,  1191,  1192,  1193,  1194,     0,     0,     0,   380,     0,
       0,     0,   380,  1195,  1196,  1197,  1198,  1199,  1200,     0,
       0,     0,     0,     0,     0,     0,     0,   381,  1201,  1202,
    1203,   381,     0,     0,     0,     0,   381,   381,     0,     0,
       0,     0,     0,     0,     0,     0,  1352,     0,     0,  1602,
    1603,     0,     0,  1352,     0,     0,     0,  1352,  1352,  1352,
    1352,     0,     0,     0,     0,     0,     0,     0,  1629,     0,
       0,     0,   381,     0,   381,     0,     0,   381,   381,     0,
    1633,   381,     0,     0,     0,   381,   381,   381,   381,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   381,     0,
       0,     0,     0,     0,     0,     0,     0,  1675,     0,  1676,
     381,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1657,     0,     0,     0,   381,     0,     0,     0,     0,     0,
       0,   381,     0,     0,  1700,   340,   341,   342,   343,   344,
     345,   346,   347,    36,    37,    38,    39,    40,    41,    42,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,    55,    56,    57,    58,    59,    60,    61,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,   360,    75,     0,     0,     0,    76,    77,    78,
      79,    80,    81,    82,     0,     0,     0,     0,     0,   361,
     362,    85,     0,     0,     0,    87,     0,     0,     0,     0,
      90,   363,    92,   364,    94,     0,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   365,   366,   106,   367,   108,
       0,   109,   368,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   369,   125,   126,   127,
     128,   129,   370,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,     0,   143,   144,   145,     0,
     371,   147,   372,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   373,   174,   175,
     374,   177,   178,   179,   180,   181,   375,   183,   376,   185,
     186,   187,   188,   189,   190,   191,   377,   378,   194,   195,
     196,   197,   198,   199,   200,   201,   202,     0,   988,   989,
     990,   991,     0,   992,     0,     0,   993,     0,     0,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,     0,     0,
    1003,  1004,  1005,     0,     0,     0,     0,    11,     0,    12,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,   738,    14,     0,     0,    15,    16,     0,    17,     0,
      18,     0,    19,    20,    21,     0,    22,    23,    24,   739,
     328,     0,     0,  1006,  1007,     0,     0,  1088,     0,  1089,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,     0,     0,     0,    76,    77,    78,    79,    80,
      81,    82,     0,     0,     0,     0,     0,    83,    84,    85,
       0,     0,    86,    87,    88,    89,     0,     0,    90,    91,
      92,    93,    94,     0,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     0,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,     0,   143,   144,   145,     0,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,    11,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,   738,
      14,     0,     0,    15,    16,     0,    17,     0,    18,     0,
      19,    20,    21,     0,    22,    23,    24,   747,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
       0,     0,     0,     0,     0,    83,    84,    85,     0,     0,
      86,    87,    88,    89,     0,     0,    90,    91,    92,    93,
      94,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,     0,   143,   144,   145,     0,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,    11,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     0,     0,     0,    14,     0,
       0,    15,    16,     0,    17,     0,    18,     0,    19,    20,
      21,     0,    22,    23,    24,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,     0,     0,
       0,    76,    77,    78,    79,    80,    81,    82,     0,     0,
       0,     0,     0,    83,    84,    85,     0,     0,    86,    87,
      88,    89,     0,     0,    90,    91,    92,    93,    94,     0,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,     0,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,     0,
     143,   144,   145,     0,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    11,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,     0,    14,     0,     0,    15,
      16,     0,    17,     0,    18,     0,    19,    20,    21,     0,
      22,    23,    24,     0,     0,     0,     0,     0,     0,     0,
       0,   731,     0,     0,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,     0,     0,     0,    76,
      77,    78,    79,    80,    81,    82,     0,     0,     0,     0,
       0,    83,    84,    85,     0,     0,    86,    87,    88,    89,
       0,     0,    90,    91,    92,    93,    94,     0,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,     0,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,     0,   143,   144,
     145,     0,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,    11,
       0,    12,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     0,     0,     0,    14,     0,     0,    15,    16,     0,
      17,     0,    18,     0,    19,    20,    21,     0,    22,    23,
      24,     0,     0,     0,     0,     0,     0,     0,     0,   834,
       0,     0,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,     0,     0,     0,    76,    77,    78,
      79,    80,    81,    82,     0,     0,     0,     0,     0,    83,
      84,    85,     0,     0,    86,    87,    88,    89,     0,     0,
      90,    91,    92,    93,    94,     0,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,     0,   143,   144,   145,     0,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,    11,     0,    12,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,    14,     0,     0,    15,    16,     0,    17,     0,
      18,     0,    19,    20,    21,     0,    22,    23,    24,     0,
       0,     0,     0,     0,     0,     0,     0,   842,     0,     0,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,     0,     0,     0,    76,    77,    78,    79,    80,
      81,    82,     0,     0,     0,     0,     0,    83,    84,    85,
       0,     0,    86,    87,    88,    89,     0,     0,    90,    91,
      92,    93,    94,     0,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     0,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,     0,   143,   144,   145,     0,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,    11,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,   738,
      14,     0,     0,    15,    16,     0,    17,     0,    18,     0,
      19,    20,    21,     0,    22,    23,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
       0,     0,     0,     0,     0,    83,    84,    85,     0,     0,
      86,    87,    88,    89,     0,     0,    90,    91,    92,    93,
      94,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,     0,   143,   144,   145,     0,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,    11,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     0,     0,     0,    14,     0,
       0,    15,    16,     0,    17,     0,    18,     0,    19,    20,
      21,     0,    22,    23,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,     0,     0,
       0,    76,    77,    78,    79,    80,    81,    82,     0,     0,
       0,     0,     0,    83,    84,    85,     0,     0,    86,    87,
      88,    89,     0,     0,    90,    91,    92,    93,    94,     0,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,     0,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,     0,
     143,   144,   145,     0,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    11,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,     0,    14,     0,     0,    15,
      16,     0,    17,     0,    18,     0,    19,    20,    21,     0,
      22,    23,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,   360,    75,     0,     0,     0,    76,
      77,    78,    79,    80,    81,    82,     0,     0,     0,     0,
       0,    83,    84,    85,     0,     0,    86,    87,    88,    89,
       0,     0,    90,   363,    92,   364,    94,     0,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   365,   366,   106,
     367,   108,     0,   109,   368,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,     0,   143,   144,
     145,     0,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   373,
     174,   175,   374,   177,   178,   179,   180,   181,   375,   183,
     376,   185,   186,   187,   188,   189,   190,   191,   377,   378,
     194,   195,   196,   197,   198,   199,   200,   201,   202,    11,
       0,    12,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     0,     0,     0,    14,     0,     0,    15,    16,     0,
      17,     0,    18,     0,    19,    20,    21,     0,    22,    23,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,     0,     0,     0,    76,    77,    78,
      79,    80,    81,    82,     0,     0,     0,     0,     0,    83,
      84,    85,     0,     0,    86,    87,    88,    89,     0,     0,
      90,    91,    92,    93,    94,     0,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   533,
     138,   139,   140,   141,   142,     0,   143,   534,   145,     0,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,    11,     0,    12,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,    14,     0,     0,    15,    16,     0,    17,     0,
      18,     0,    19,    20,    21,     0,    22,    23,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,     0,     0,     0,    76,    77,    78,    79,    80,
      81,    82,     0,     0,     0,     0,     0,    83,    84,    85,
       0,     0,    86,    87,    88,    89,     0,     0,    90,    91,
      92,    93,    94,     0,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     0,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   556,   138,   139,
     140,   141,   142,     0,   143,   534,   145,     0,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,    11,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,     0,
      14,     0,     0,    15,    16,     0,    17,     0,    18,     0,
      19,    20,    21,     0,    22,    23,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
       0,     0,     0,     0,     0,    83,    84,    85,     0,     0,
      86,    87,    88,    89,     0,     0,    90,    91,    92,    93,
      94,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   570,   138,   139,   140,   141,
     142,     0,   143,   534,   145,     0,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,    11,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     0,     0,     0,    14,     0,
       0,    15,    16,     0,    17,     0,    18,     0,    19,    20,
      21,     0,    22,    23,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,     0,     0,
       0,    76,    77,    78,    79,    80,    81,    82,     0,     0,
       0,     0,     0,    83,    84,    85,     0,     0,    86,    87,
      88,    89,     0,     0,    90,    91,    92,    93,    94,     0,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,     0,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   594,   138,   139,   140,   141,   142,     0,
     143,   534,   145,     0,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    11,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,     0,    14,     0,     0,    15,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,   360,    75,     0,     0,     0,    76,
      77,    78,    79,    80,    81,    82,     0,     0,     0,     0,
       0,    83,    84,    85,     0,     0,    86,    87,    88,    89,
       0,     0,    90,   363,    92,   364,    94,     0,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   365,   366,   106,
     367,   108,     0,   109,   368,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   369,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,     0,   143,   144,
     145,     0,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   373,
     174,   175,   374,   177,   178,   179,   180,   181,   375,   183,
     376,   185,   186,   187,   188,   189,   190,   191,   377,   378,
     194,   195,   196,   197,   198,   199,   200,   201,   202,  1272,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     873,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   382,   383,    30,    31,   384,
      33,    34,   385,   874,    37,    38,    39,    40,    41,    42,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,    55,    56,    57,    58,    59,    60,    61,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,   360,    75,     0,     0,     0,    76,    77,    78,
      79,    80,    81,    82,     0,     0,     0,     0,     0,   361,
     362,    85,     0,     0,     0,    87,     0,     0,     0,     0,
      90,   363,    92,   364,    94,     0,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   365,   366,   106,   367,   108,
       0,   109,   368,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   369,   125,   126,   127,
     128,   129,   370,   875,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,     0,   143,   144,   145,     0,
     386,   147,   876,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   373,   174,   175,
     374,   177,   178,   179,   180,   181,   375,   183,   376,   185,
     186,   187,   188,   189,   190,   191,   377,   378,   194,   195,
     196,   197,   198,   199,   200,   201,   202,    12,     0,     0,
       0,     0,     0,     0,     0,     0,  1338,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1339,     0,     0,     0,
       0,     0,  1340,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1341,   383,    30,    31,   384,    33,    34,   385,    36,
      37,    38,    39,    40,    41,    42,  1342,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,    55,    56,
      57,    58,    59,    60,    61,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,   360,    75,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
       0,     0,     0,     0,     0,   361,   362,    85,     0,     0,
       0,    87,    88,    89,     0,     0,    90,   363,    92,   364,
      94,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   365,   366,   106,   367,   108,     0,   109,   368,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   369,   125,   126,   127,   128,   129,   370,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,     0,   143,   144,   145,     0,   386,   147,   372,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   373,   174,   175,   374,   177,   178,   179,
     180,   181,   375,   183,   376,   185,   186,  1343,  1344,   189,
     190,   191,   377,   378,   194,   195,   196,   197,   198,   199,
     200,   201,   202,    12,     0,     0,     0,     0,     0,     0,
       0,     0,  1338,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1341,   383,    30,
      31,   384,    33,    34,   385,    36,    37,    38,    39,    40,
      41,    42,  1342,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,    55,    56,    57,    58,    59,    60,
      61,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,   360,    75,     0,     0,     0,    76,
      77,    78,    79,    80,    81,    82,     0,     0,     0,     0,
       0,   361,   362,    85,     0,     0,     0,    87,    88,    89,
       0,     0,    90,   363,    92,   364,    94,     0,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   365,   366,   106,
     367,   108,     0,   109,   368,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   369,   125,
     126,   127,   128,   129,   370,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,     0,   143,   144,
     145,     0,   386,   147,   372,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   373,
     174,   175,   374,   177,   178,   179,   180,   181,   375,   183,
     376,   185,   186,   187,   188,   189,   190,   191,   377,   378,
     194,   195,   196,   197,   198,   199,   200,   201,   202,    12,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   382,   383,    30,    31,   384,    33,    34,
     385,    36,    37,    38,    39,    40,    41,    42,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
      55,    56,    57,    58,    59,    60,    61,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
     360,    75,     0,     0,     0,    76,    77,    78,    79,    80,
      81,    82,     0,     0,     0,     0,     0,   361,   362,    85,
       0,     0,     0,    87,    88,    89,     0,     0,    90,   363,
      92,   364,    94,     0,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   365,   366,   106,   367,   108,     0,   109,
     368,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   369,   125,   126,   127,   128,   129,
     370,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,     0,   143,   144,   145,     0,   386,   147,
     372,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   373,   174,   175,   374,   177,
     178,   179,   180,   181,   375,   183,   376,   185,   186,   187,
     188,   189,   190,   191,   377,   378,   194,   195,   196,   197,
     198,   199,   200,   201,   202,  1283,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   873,  1284,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   382,
     383,    30,    31,   384,    33,    34,   385,   874,    37,    38,
      39,    40,    41,    42,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,    55,    56,    57,    58,
      59,    60,    61,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,   360,    75,     0,     0,
       0,    76,    77,    78,    79,    80,    81,    82,     0,     0,
       0,     0,     0,   361,   362,    85,     0,     0,     0,    87,
       0,     0,     0,     0,    90,   363,    92,   364,    94,     0,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   365,
     366,   106,   367,   108,     0,   109,   368,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     369,   125,   126,   127,   128,   129,   370,   875,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,     0,
     143,   144,   145,     0,   386,   147,   876,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   373,   174,   175,   374,   177,   178,   179,   180,   181,
     375,   183,   376,   185,   186,   187,   188,   189,   190,   191,
     377,   378,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   625,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   626,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,   343,   344,
     345,   346,   347,    36,    37,    38,    39,    40,    41,    42,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,    55,    56,    57,    58,    59,    60,    61,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,   360,    75,     0,     0,     0,    76,    77,    78,
      79,    80,    81,    82,     0,     0,     0,     0,     0,   361,
     362,    85,     0,     0,     0,    87,     0,     0,     0,     0,
      90,   363,    92,   364,    94,     0,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   365,   366,   106,   367,   108,
       0,   109,   368,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   369,   125,   126,   127,
     128,   129,   370,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,     0,   143,   144,   145,     0,
     371,   147,   372,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   373,   174,   175,
     374,   177,   178,   179,   180,   181,   375,   183,   376,   185,
     186,   187,   188,   189,   190,   191,   377,   378,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   675,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   676,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,   345,   346,   347,    36,
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
     122,   123,   369,   125,   126,   127,   128,   129,   370,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,     0,   143,   144,   145,     0,   371,   147,   372,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   373,   174,   175,   374,   177,   178,   179,
     180,   181,   375,   183,   376,   185,   186,   187,   188,   189,
     190,   191,   377,   378,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   873,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   382,   383,
      30,    31,   384,    33,    34,   385,   874,    37,    38,    39,
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
     873,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   382,   383,    30,    31,   384,
      33,    34,   385,    36,    37,    38,    39,    40,    41,    42,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,    55,    56,    57,    58,    59,    60,    61,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,   360,    75,     0,     0,     0,    76,    77,    78,
      79,    80,    81,    82,     0,     0,     0,     0,     0,   361,
     362,    85,     0,     0,     0,    87,     0,     0,     0,     0,
      90,   363,    92,   364,    94,     0,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   365,   366,   106,   367,   108,
       0,   109,   368,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   369,   125,   126,   127,
     128,   129,   370,   875,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,     0,   143,   144,   145,     0,
     386,   147,   876,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   373,   174,   175,
     374,   177,   178,   179,   180,   181,   375,   183,   376,   185,
     186,   187,   188,   189,   190,   191,   377,   378,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   641,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,   345,   346,   347,    36,
      37,    38,    39,    40,    41,    42,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,    55,    56,
      57,    58,    59,    60,    61,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,   360,    75,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
       0,     0,     0,     0,     0,   361,   362,    85,     0,     0,
     642,    87,     0,     0,     0,     0,    90,   363,    92,   364,
      94,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   365,   366,   106,   367,   108,     0,   109,   368,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   369,   125,   126,   127,   128,   129,   370,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,     0,   143,   144,   145,     0,   371,   147,   372,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   373,   174,   175,   374,   177,   178,   179,
     180,   181,   375,   183,   376,   185,   186,   187,   188,   189,
     190,   191,   377,   378,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   340,   341,   342,   343,   344,   345,   346,
     347,    36,    37,    38,    39,    40,    41,    42,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
      55,    56,    57,    58,    59,    60,    61,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
     360,    75,     0,     0,     0,    76,    77,    78,    79,    80,
      81,    82,     0,     0,     0,     0,     0,   361,   362,    85,
       0,     0,     0,    87,     0,     0,     0,     0,    90,   363,
      92,   364,    94,     0,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   365,   366,   106,   367,   108,     0,   109,
     368,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   369,   125,   126,   127,   128,   129,
     370,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,     0,   143,   144,   145,     0,   371,   147,
     372,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   373,   174,   175,   374,   177,
     178,   179,   180,   181,   375,   183,   376,   185,   186,   187,
     188,   189,   190,   191,   377,   378,   194,   195,   196,   197,
     198,   199,   200,   201,   202,    37,    38,    39,    40,    41,
      42,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,    55,    56,    57,    58,    59,    60,    61,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,   360,    75,     0,     0,     0,    76,    77,
      78,    79,    80,    81,    82,     0,     0,     0,     0,     0,
     361,   362,    85,     0,     0,     0,    87,     0,     0,     0,
       0,    90,   363,    92,   364,    94,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   365,   366,   106,     0,
     108,     0,   109,     0,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   369,   125,   126,
     127,   128,   129,   370,     0,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,     0,   143,   144,   145,
       0,     0,   147,     0,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   373,   174,
     175,   374,   177,   178,   179,   180,   181,   375,   183,   376,
     185,   186,   187,   188,   189,   190,   191,   377,   378,   194,
     195,   196,   197,   198,   199,   200,   201,   202,     0,   987,
       0,     0,   988,   989,   990,   991,     0,   992,     0,     0,
     993,     0,     0,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,     0,     0,  1003,  1004,  1005,  1393,     0,     0,
     988,   989,   990,   991,     0,   992,     0,     0,   993,     0,
       0,   994,   995,   996,   997,   998,   999,  1000,  1001,  1002,
       0,     0,  1003,  1004,  1005,  1396,     0,     0,   988,   989,
     990,   991,     0,   992,   328,     0,   993,  1006,  1007,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,     0,     0,
    1003,  1004,  1005,  1416,     0,     0,   988,   989,   990,   991,
       0,   992,   328,     0,   993,  1006,  1007,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,     0,     0,  1003,  1004,
    1005,  1428,     0,     0,   988,   989,   990,   991,     0,   992,
     328,     0,   993,  1006,  1007,   994,   995,   996,   997,   998,
     999,  1000,  1001,  1002,     0,     0,  1003,  1004,  1005,  1437,
       0,     0,   988,   989,   990,   991,     0,   992,   328,     0,
     993,  1006,  1007,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,     0,     0,  1003,  1004,  1005,  1439,     0,     0,
     988,   989,   990,   991,     0,   992,   328,     0,   993,  1006,
    1007,   994,   995,   996,   997,   998,   999,  1000,  1001,  1002,
       0,     0,  1003,  1004,  1005,  1442,     0,     0,   988,   989,
     990,   991,     0,   992,   328,     0,   993,  1006,  1007,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,     0,     0,
    1003,  1004,  1005,  1443,     0,     0,   988,   989,   990,   991,
       0,   992,   328,     0,   993,  1006,  1007,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,     0,     0,  1003,  1004,
    1005,  1448,     0,     0,   988,   989,   990,   991,     0,   992,
     328,     0,   993,  1006,  1007,   994,   995,   996,   997,   998,
     999,  1000,  1001,  1002,     0,     0,  1003,  1004,  1005,  1451,
       0,     0,   988,   989,   990,   991,     0,   992,   328,     0,
     993,  1006,  1007,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,     0,     0,  1003,  1004,  1005,  1454,     0,     0,
     988,   989,   990,   991,     0,   992,   328,     0,   993,  1006,
    1007,   994,   995,   996,   997,   998,   999,  1000,  1001,  1002,
       0,     0,  1003,  1004,  1005,  1456,     0,     0,   988,   989,
     990,   991,     0,   992,   328,     0,   993,  1006,  1007,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,     0,     0,
    1003,  1004,  1005,  1458,     0,     0,   988,   989,   990,   991,
       0,   992,   328,     0,   993,  1006,  1007,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,     0,     0,  1003,  1004,
    1005,  1554,     0,     0,   988,   989,   990,   991,     0,   992,
     328,     0,   993,  1006,  1007,   994,   995,   996,   997,   998,
     999,  1000,  1001,  1002,     0,     0,  1003,  1004,  1005,  1555,
       0,     0,   988,   989,   990,   991,     0,   992,   328,     0,
     993,  1006,  1007,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,     0,     0,  1003,  1004,  1005,  1560,     0,     0,
     988,   989,   990,   991,     0,   992,   328,     0,   993,  1006,
    1007,   994,   995,   996,   997,   998,   999,  1000,  1001,  1002,
       0,     0,  1003,  1004,  1005,  1566,     0,     0,   988,   989,
     990,   991,     0,   992,   328,     0,   993,  1006,  1007,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,     0,     0,
    1003,  1004,  1005,  1630,     0,     0,   988,   989,   990,   991,
       0,   992,   328,     0,   993,  1006,  1007,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,     0,     0,  1003,  1004,
    1005,  1631,     0,     0,   988,   989,   990,   991,     0,   992,
     328,     0,   993,  1006,  1007,   994,   995,   996,   997,   998,
     999,  1000,  1001,  1002,     0,     0,  1003,  1004,  1005,  1634,
       0,     0,   988,   989,   990,   991,     0,   992,   328,     0,
     993,  1006,  1007,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,     0,     0,  1003,  1004,  1005,  1635,     0,     0,
     988,   989,   990,   991,     0,   992,   328,     0,   993,  1006,
    1007,   994,   995,   996,   997,   998,   999,  1000,  1001,  1002,
       0,     0,  1003,  1004,  1005,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   328,     0,     0,  1006,  1007,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   328,     0,     0,  1006,  1007
};

static const yytype_int16 yycheck[] =
{
      24,   338,    13,     9,   231,   500,   961,   618,   661,    11,
     663,  1087,   531,   666,   768,   769,   535,   536,   537,  1168,
     539,   540,   402,   727,   728,  1366,   532,  1310,    11,   548,
      13,   550,  1258,   552,   414,   415,   326,   326,   557,   558,
     559,   560,   561,   562,   563,   564,  1345,   566,   901,    65,
     715,    17,   571,   572,   573,   686,   575,   576,   501,   502,
     503,   504,   430,   582,   312,   584,   124,   435,   587,   685,
     438,    12,   452,   979,   442,   981,   595,   596,   597,   598,
     599,   600,   601,   602,    61,   604,   715,   318,   763,    13,
     124,    14,   767,    61,    36,   326,     3,     4,     5,    43,
    1526,    15,   608,   312,   124,  1011,    51,    51,   124,   318,
      12,   727,   728,    35,  1153,  1021,  1522,   326,    51,   823,
    1026,    43,  1028,    53,  1030,    43,  1032,  1353,  1034,    51,
    1036,    44,  1038,    55,    56,    57,  1042,   116,  1044,   251,
      37,    38,   318,    43,   188,    36,   318,    35,   192,    72,
     326,    64,    12,    43,   326,    43,   103,    43,    37,    38,
     127,    36,   318,    51,    52,    51,    61,    55,    56,    57,
     326,  1347,   107,   318,   182,    48,    12,    48,    51,   933,
      51,   326,   152,  1138,   117,   318,    37,    38,    43,    22,
      14,   945,    12,   326,    70,    71,    51,   132,   116,   146,
     192,   318,    26,   315,   958,   127,   185,   823,   175,   326,
      43,   106,   282,    37,   284,   185,   116,   870,    51,    55,
      56,    57,   121,   282,    44,   127,   116,  1653,   104,   312,
     241,   312,   177,   244,   753,   318,   901,   318,   903,   127,
     126,   164,   165,   326,   117,   326,   117,  1100,   178,  1655,
     309,   228,   166,   177,   760,   196,  1539,   873,   241,   150,
     228,   244,   320,   321,   312,  1171,   163,   185,   234,  1175,
     318,   126,   901,   133,   903,   150,   312,     0,   326,   221,
     193,   312,   318,   312,   163,   185,   320,   318,   322,   318,
     326,   127,  1046,   126,    26,   326,   664,   326,   242,    28,
     320,   321,  1601,   593,   593,   685,  1212,   323,   324,   325,
      43,    12,    44,   681,   213,   214,    45,  1658,  1224,   227,
     281,   569,    47,   245,    49,   131,   332,   695,   482,   483,
     484,   485,   486,   487,   242,   489,   490,   491,   492,   493,
     494,   495,   496,    44,   305,  1571,    15,   727,   728,   729,
     730,   109,  1528,  1529,  1530,  1531,    51,   245,   107,   590,
     569,  1065,   593,   282,   215,   216,   217,  1121,  1517,    43,
    1124,  1125,  1047,  1077,    43,    70,    71,   282,  1661,   403,
      54,   590,    51,   407,   593,  1139,   305,   411,   458,   308,
     309,    22,   462,   417,   396,   280,   466,   467,   468,   121,
     305,   471,   282,    43,   289,   429,   313,    24,   410,   433,
     434,  1487,   319,   396,   590,   322,   127,   593,   590,   402,
      22,   593,   446,   447,   448,   305,    43,   410,   430,   453,
      35,   414,   415,   435,   590,  1100,   438,   593,  1049,  1050,
     442,    43,  1107,   823,  1109,   590,    51,   430,   593,  1065,
     956,   831,   435,   523,   960,   438,   526,   590,   154,   442,
     593,  1077,    33,   465,   175,  1169,   173,  1120,    39,   452,
    1174,  1100,   179,   590,   185,  1179,   593,   250,  1107,  1183,
    1109,  1387,   465,  1522,  1523,   207,   569,   867,   569,   513,
      36,   213,   214,   873,   518,   519,   282,  1128,   522,    33,
     233,  1540,    43,  1409,    36,    39,    52,   590,   294,   590,
     593,    33,   593,   246,   247,   248,   249,    39,   304,  1425,
      52,   569,   295,    36,    50,    51,  1230,  1433,   224,   225,
     532,  1437,   305,   569,    50,    51,   232,    43,   569,    52,
     569,    43,   590,    43,    36,   593,   273,    22,    67,   532,
      69,    51,   706,  1169,   590,    36,    12,   593,  1174,   590,
      52,   590,   593,  1179,   593,    51,   250,  1183,   252,    35,
     938,    52,    67,    68,    69,   259,   260,    43,   305,    43,
    1535,   265,  1621,   310,   311,    51,    22,    51,   658,    55,
      56,    57,   118,   282,   278,   279,   281,   282,   668,   669,
    1119,    36,   118,   292,  1358,  1359,   608,   631,    22,   128,
      67,    68,    69,  1367,  1230,   304,   305,    52,   303,   304,
      36,   306,   646,    36,  1663,   608,   696,   210,   211,   212,
     282,    27,  1263,   128,    30,    31,    52,    87,    34,    52,
      90,   140,    22,    93,    94,    95,    96,   282,   147,   673,
     674,  1316,   304,   305,    22,    51,   175,   292,   293,    97,
     282,   127,   664,    22,   183,   184,   185,   186,   187,   304,
     305,   128,   124,   125,   744,   745,   746,   904,   116,   681,
     175,   664,   304,   305,   122,  1065,    51,  1316,   183,   184,
     185,   186,   187,   695,   193,   194,   195,  1077,   681,   194,
     195,    22,   685,   153,   178,    25,    36,   226,  1045,    36,
     282,    47,   695,    49,  1345,   189,    36,   236,   175,    36,
     292,   293,    52,   119,   120,    52,   183,   184,   185,   186,
     187,   226,   304,   305,    36,    52,  1490,   187,   233,    22,
    1259,   236,   250,    51,   727,   728,   729,   730,    36,   257,
      52,   246,   247,   248,   249,   205,   206,    36,   760,   209,
     198,   199,   200,   765,    52,   203,   204,    35,   306,   226,
      36,   191,   192,    52,   312,  1479,  1480,   760,   848,   236,
     318,    25,   765,    51,    36,    36,    52,  1541,   326,  1169,
      25,    25,    36,    44,  1174,    67,    68,    69,  1135,  1179,
      52,    36,    36,  1183,   305,   182,    22,   308,   182,   182,
      67,  1515,    69,   190,  1309,   821,   190,   190,   888,   889,
     890,   167,   168,  1318,  1319,   182,    36,    36,  1459,   899,
    1483,    36,    22,   190,    44,    44,   819,    36,    36,    44,
     823,    36,   194,   195,    61,    44,    44,  1551,   831,    44,
    1230,  1462,  1463,   222,   924,   236,   128,    36,    36,  1563,
    1303,   230,   886,  1479,  1480,    44,    44,    36,    36,    36,
     166,   128,   168,  1577,    36,    44,    44,    44,   902,    36,
    1584,   233,    44,    43,   867,  1516,    12,    44,   107,   108,
     873,   893,    36,    36,   246,   247,   248,   249,  1266,  1515,
      44,    44,  1533,   175,  1272,    93,    94,    95,    96,   250,
     893,   183,   184,   185,   186,   187,   257,    12,   175,   238,
      43,  1289,    22,   242,   316,   317,   183,   184,   185,   186,
     187,    37,    38,  1215,    43,  1551,   938,    55,    56,    57,
     215,   216,   217,   241,  1226,  1227,    36,  1563,   173,   174,
     952,   173,   174,  1235,   956,   938,   158,  1239,   960,  1241,
    1242,  1577,  1244,  1574,   236,  1247,  1248,   159,  1584,   952,
    1601,   197,   955,   956,     3,     4,     5,   960,  1609,   236,
      16,    17,    18,    19,    20,    21,   122,   123,   160,  1059,
    1655,    27,  1062,  1063,  1064,   124,   125,   171,  1068,    67,
      68,    69,   142,   143,    40,   290,   291,  1638,   318,   319,
    1505,  1506,     3,     4,     5,     6,     7,     8,     9,    10,
      11,   162,  1092,   133,   134,   170,   136,   137,   138,    24,
     140,   141,   295,   296,   145,   146,    88,    89,  1669,  1670,
    1671,  1672,   180,   181,    88,    89,  1677,  1117,  1118,   262,
     263,  1570,   145,   146,   101,   102,    24,   218,   219,    15,
     128,   498,   499,   505,   506,   192,   507,   508,    19,    20,
     516,   517,   729,   730,   110,   111,   112,   113,   114,   115,
    1665,  1666,  1065,   175,   175,    43,    43,    43,    43,    43,
      43,    32,    51,    36,  1077,    51,    44,    44,    12,  1479,
    1480,  1596,  1470,    36,    44,    51,  1474,   175,   154,    51,
     161,    12,    51,   139,   154,   183,   184,   185,   186,   187,
     140,    65,   161,  1134,  1461,    55,   194,   195,   127,   154,
     154,   127,    53,   182,   107,  1515,   172,   154,   108,    44,
      44,    44,    44,    13,    44,    44,   227,   154,  1150,  1668,
      61,  1134,   227,    51,   139,    40,  1180,  1168,   127,    12,
    1184,    86,    40,    13,   116,   233,   132,  1150,   236,   133,
      13,  1551,   135,   152,   156,    12,    43,    43,   246,   247,
     248,   249,    43,  1563,  1208,  1168,  1169,    43,    43,  1213,
    1214,  1174,    36,   243,  1218,    92,  1179,  1577,    85,   244,
    1183,  1225,   232,   201,  1584,    26,    40,  1231,   144,  1233,
     232,    36,  1236,   175,   175,   127,  1240,   193,  1288,   237,
     116,  1245,    86,   250,   262,   305,   282,   250,  1252,   307,
      44,   305,  1256,   305,    12,    44,   196,    44,    44,   227,
      12,   227,    44,   215,   135,    99,    98,  1230,    36,   144,
      40,   175,    36,    40,   127,   259,   291,   290,   250,   124,
     274,    46,    12,    67,  1266,    69,   215,    46,   157,    67,
    1272,    69,   135,   307,   133,    44,    44,  1260,   154,    43,
      98,    52,   202,  1266,    22,   147,   154,  1289,    43,  1272,
      43,   127,   237,   215,   250,    15,   124,   253,   254,   255,
     256,    24,   258,   259,   133,   261,  1289,   154,   264,   265,
     266,   267,   268,   269,   270,   271,   272,    13,   250,   275,
     276,   277,   250,   154,   128,   281,   282,  1338,    44,    36,
     128,   208,    29,   133,   116,    44,  1347,   208,   977,  1203,
       6,   989,  1210,  1221,  1524,   319,   313,   303,   304,   314,
     306,   322,  1333,   530,   871,  1338,   207,   307,   662,   315,
     665,  1092,   318,   319,  1347,   105,   899,   667,  1066,   307,
    1308,   175,   480,   308,   481,   526,   313,   175,  1464,   183,
     184,   185,   186,   187,  1408,   183,   184,   185,   186,   187,
     194,   195,   319,   322,   320,   924,   194,   195,  1263,   730,
     455,  1471,   325,  1473,   873,  1475,  1476,   408,   408,   414,
     452,  1298,   867,  1107,   903,  1316,  1109,  1499,  1312,   912,
    1163,  1543,   226,  1538,   657,  1128,   250,  1337,  1484,   233,
      -1,    -1,   236,    -1,    -1,   233,    -1,    -1,   236,    -1,
    1510,    -1,   246,   247,   248,   249,    -1,    -1,   246,   247,
     248,   249,    -1,    -1,    -1,    -1,   280,    -1,   282,   283,
     284,   285,   286,   287,   288,    -1,    -1,    -1,  1470,    -1,
      -1,    -1,  1474,   297,   298,   299,   300,   301,   302,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1470,   312,   313,
     314,  1474,    -1,    -1,    -1,    -1,  1479,  1480,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1517,    -1,    -1,  1520,
    1521,    -1,    -1,  1524,    -1,    -1,    -1,  1528,  1529,  1530,
    1531,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1552,    -1,
      -1,    -1,  1515,    -1,  1517,    -1,    -1,  1520,  1521,    -1,
    1564,  1524,    -1,    -1,    -1,  1528,  1529,  1530,  1531,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1551,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1647,    -1,  1649,
    1563,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1614,    -1,    -1,    -1,  1577,    -1,    -1,    -1,    -1,    -1,
      -1,  1584,    -1,    -1,  1674,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,   122,
     123,   124,    -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,
     133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      -1,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,    -1,   189,   190,   191,    -1,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    -1,   253,   254,
     255,   256,    -1,   258,    -1,    -1,   261,    -1,    -1,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    -1,    -1,
     275,   276,   277,    -1,    -1,    -1,    -1,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    -1,    33,    -1,
      35,    -1,    37,    38,    39,    -1,    41,    42,    43,    44,
     315,    -1,    -1,   318,   319,    -1,    -1,   320,    -1,   322,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,    -1,   127,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    -1,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,    -1,   189,   190,   191,    -1,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,
      37,    38,    39,    -1,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,    -1,    -1,
     127,   128,   129,   130,    -1,    -1,   133,   134,   135,   136,
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
     247,   248,   249,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,
      -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,   110,   111,   112,   113,   114,   115,   116,    -1,    -1,
      -1,    -1,    -1,   122,   123,   124,    -1,    -1,   127,   128,
     129,   130,    -1,    -1,   133,   134,   135,   136,   137,    -1,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    -1,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,    -1,
     189,   190,   191,    -1,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    30,
      31,    -1,    33,    -1,    35,    -1,    37,    38,    39,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,   110,
     111,   112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,    -1,    -1,   127,   128,   129,   130,
      -1,    -1,   133,   134,   135,   136,   137,    -1,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,    -1,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,    -1,   189,   190,
     191,    -1,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,
      33,    -1,    35,    -1,    37,    38,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,   122,
     123,   124,    -1,    -1,   127,   128,   129,   130,    -1,    -1,
     133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      -1,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,    -1,   189,   190,   191,    -1,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    30,    31,    -1,    33,    -1,
      35,    -1,    37,    38,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,    -1,   127,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    -1,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,    -1,   189,   190,   191,    -1,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,
      37,    38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,    -1,    -1,
     127,   128,   129,   130,    -1,    -1,   133,   134,   135,   136,
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
     247,   248,   249,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,
      -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,    38,
      39,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,   110,   111,   112,   113,   114,   115,   116,    -1,    -1,
      -1,    -1,    -1,   122,   123,   124,    -1,    -1,   127,   128,
     129,   130,    -1,    -1,   133,   134,   135,   136,   137,    -1,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    -1,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,    -1,
     189,   190,   191,    -1,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    30,
      31,    -1,    33,    -1,    35,    -1,    37,    38,    39,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,   110,
     111,   112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,    -1,    -1,   127,   128,   129,   130,
      -1,    -1,   133,   134,   135,   136,   137,    -1,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,    -1,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,    -1,   189,   190,
     191,    -1,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,
      33,    -1,    35,    -1,    37,    38,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,   122,
     123,   124,    -1,    -1,   127,   128,   129,   130,    -1,    -1,
     133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      -1,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,    -1,   189,   190,   191,    -1,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    30,    31,    -1,    33,    -1,
      35,    -1,    37,    38,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,    -1,   127,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    -1,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,    -1,   189,   190,   191,    -1,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,
      37,    38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,    -1,    -1,
     127,   128,   129,   130,    -1,    -1,   133,   134,   135,   136,
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
     247,   248,   249,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,
      -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,    38,
      39,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,   110,   111,   112,   113,   114,   115,   116,    -1,    -1,
      -1,    -1,    -1,   122,   123,   124,    -1,    -1,   127,   128,
     129,   130,    -1,    -1,   133,   134,   135,   136,   137,    -1,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    -1,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,    -1,
     189,   190,   191,    -1,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,   110,
     111,   112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,    -1,    -1,   127,   128,   129,   130,
      -1,    -1,   133,   134,   135,   136,   137,    -1,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,    -1,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,    -1,   189,   190,
     191,    -1,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,   122,
     123,   124,    -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,
     133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      -1,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,    -1,   189,   190,   191,    -1,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,    -1,    -1,
      -1,   128,   129,   130,    -1,    -1,   133,   134,   135,   136,
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
     247,   248,   249,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,   110,
     111,   112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,    -1,    -1,    -1,   128,   129,   130,
      -1,    -1,   133,   134,   135,   136,   137,    -1,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,    -1,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,    -1,   189,   190,
     191,    -1,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,    -1,    -1,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    -1,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,    -1,   189,   190,   191,    -1,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,   110,   111,   112,   113,   114,   115,   116,    -1,    -1,
      -1,    -1,    -1,   122,   123,   124,    -1,    -1,    -1,   128,
      -1,    -1,    -1,    -1,   133,   134,   135,   136,   137,    -1,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    -1,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,    -1,
     189,   190,   191,    -1,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,   122,
     123,   124,    -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,
     133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      -1,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,    -1,   189,   190,   191,    -1,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
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
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,   122,
     123,   124,    -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,
     133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      -1,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,    -1,   189,   190,   191,    -1,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,    -1,    -1,
     127,   128,    -1,    -1,    -1,    -1,   133,   134,   135,   136,
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
     247,   248,   249,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,   133,   134,
     135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    -1,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,    -1,   189,   190,   191,    -1,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,    -1,   110,   111,
     112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,    -1,    -1,    -1,   128,    -1,    -1,    -1,
      -1,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,    -1,
     152,    -1,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,   189,   190,   191,
      -1,    -1,   194,    -1,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   250,
      -1,    -1,   253,   254,   255,   256,    -1,   258,    -1,    -1,
     261,    -1,    -1,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,   275,   276,   277,   250,    -1,    -1,
     253,   254,   255,   256,    -1,   258,    -1,    -1,   261,    -1,
      -1,   264,   265,   266,   267,   268,   269,   270,   271,   272,
      -1,    -1,   275,   276,   277,   250,    -1,    -1,   253,   254,
     255,   256,    -1,   258,   315,    -1,   261,   318,   319,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    -1,    -1,
     275,   276,   277,   250,    -1,    -1,   253,   254,   255,   256,
      -1,   258,   315,    -1,   261,   318,   319,   264,   265,   266,
     267,   268,   269,   270,   271,   272,    -1,    -1,   275,   276,
     277,   250,    -1,    -1,   253,   254,   255,   256,    -1,   258,
     315,    -1,   261,   318,   319,   264,   265,   266,   267,   268,
     269,   270,   271,   272,    -1,    -1,   275,   276,   277,   250,
      -1,    -1,   253,   254,   255,   256,    -1,   258,   315,    -1,
     261,   318,   319,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,   275,   276,   277,   250,    -1,    -1,
     253,   254,   255,   256,    -1,   258,   315,    -1,   261,   318,
     319,   264,   265,   266,   267,   268,   269,   270,   271,   272,
      -1,    -1,   275,   276,   277,   250,    -1,    -1,   253,   254,
     255,   256,    -1,   258,   315,    -1,   261,   318,   319,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    -1,    -1,
     275,   276,   277,   250,    -1,    -1,   253,   254,   255,   256,
      -1,   258,   315,    -1,   261,   318,   319,   264,   265,   266,
     267,   268,   269,   270,   271,   272,    -1,    -1,   275,   276,
     277,   250,    -1,    -1,   253,   254,   255,   256,    -1,   258,
     315,    -1,   261,   318,   319,   264,   265,   266,   267,   268,
     269,   270,   271,   272,    -1,    -1,   275,   276,   277,   250,
      -1,    -1,   253,   254,   255,   256,    -1,   258,   315,    -1,
     261,   318,   319,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,   275,   276,   277,   250,    -1,    -1,
     253,   254,   255,   256,    -1,   258,   315,    -1,   261,   318,
     319,   264,   265,   266,   267,   268,   269,   270,   271,   272,
      -1,    -1,   275,   276,   277,   250,    -1,    -1,   253,   254,
     255,   256,    -1,   258,   315,    -1,   261,   318,   319,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    -1,    -1,
     275,   276,   277,   250,    -1,    -1,   253,   254,   255,   256,
      -1,   258,   315,    -1,   261,   318,   319,   264,   265,   266,
     267,   268,   269,   270,   271,   272,    -1,    -1,   275,   276,
     277,   250,    -1,    -1,   253,   254,   255,   256,    -1,   258,
     315,    -1,   261,   318,   319,   264,   265,   266,   267,   268,
     269,   270,   271,   272,    -1,    -1,   275,   276,   277,   250,
      -1,    -1,   253,   254,   255,   256,    -1,   258,   315,    -1,
     261,   318,   319,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,   275,   276,   277,   250,    -1,    -1,
     253,   254,   255,   256,    -1,   258,   315,    -1,   261,   318,
     319,   264,   265,   266,   267,   268,   269,   270,   271,   272,
      -1,    -1,   275,   276,   277,   250,    -1,    -1,   253,   254,
     255,   256,    -1,   258,   315,    -1,   261,   318,   319,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    -1,    -1,
     275,   276,   277,   250,    -1,    -1,   253,   254,   255,   256,
      -1,   258,   315,    -1,   261,   318,   319,   264,   265,   266,
     267,   268,   269,   270,   271,   272,    -1,    -1,   275,   276,
     277,   250,    -1,    -1,   253,   254,   255,   256,    -1,   258,
     315,    -1,   261,   318,   319,   264,   265,   266,   267,   268,
     269,   270,   271,   272,    -1,    -1,   275,   276,   277,   250,
      -1,    -1,   253,   254,   255,   256,    -1,   258,   315,    -1,
     261,   318,   319,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,   275,   276,   277,   250,    -1,    -1,
     253,   254,   255,   256,    -1,   258,   315,    -1,   261,   318,
     319,   264,   265,   266,   267,   268,   269,   270,   271,   272,
      -1,    -1,   275,   276,   277,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   315,    -1,    -1,   318,   319,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   315,    -1,    -1,   318,   319
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
     485,   496,   499,   503,   504,   505,   506,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   547,   548,   549,   550,   551,   554,
     555,   556,   567,   569,   571,   572,   573,   576,   578,   579,
     580,   590,   591,   592,   593,   594,   595,   596,   598,   600,
     602,   643,   644,   645,   646,   647,   648,   649,   652,   653,
     654,   655,   657,   664,   665,   669,   670,   671,   672,   678,
     679,   188,   192,   419,   420,   421,   422,   433,   438,   424,
     425,   426,   427,   433,   438,   428,   429,   430,   431,   433,
     438,   432,   433,   436,   437,   438,   439,   251,   315,   335,
     336,   358,   182,   328,   192,   331,   332,   330,   466,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
     105,   122,   123,   134,   136,   148,   149,   151,   155,   169,
     175,   193,   195,   220,   223,   229,   231,   239,   240,   546,
     678,   679,    58,    59,    62,    65,   193,   538,   124,   125,
     557,   131,   109,   568,   527,   107,   559,   518,   518,    44,
     474,    22,    43,    51,   126,   577,    43,    51,    43,    43,
      43,    51,   126,   581,    43,    43,    43,    51,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    51,
      12,   650,   651,    51,    51,    12,   481,   482,    12,   196,
     486,   487,    12,   497,   498,   497,    43,    43,    51,    70,
      71,    22,    43,    51,   126,   574,    43,   464,    61,   106,
      61,   228,    61,    61,   228,   236,   241,    36,   133,   134,
     136,   137,   138,   140,   141,   478,   479,   488,   489,   490,
     158,   159,    16,    17,    18,    19,    20,    21,    27,    40,
     110,   111,   112,   113,   114,   115,   172,   197,    37,    38,
     163,    14,    72,   164,   165,    15,   166,   167,   168,   160,
     171,   162,   170,    51,   523,   527,    33,    39,    24,    24,
     538,   538,    24,    43,   475,   475,    43,    54,   178,   189,
     434,   435,   175,   182,   190,   423,   441,   443,   444,   445,
     446,   448,   449,   450,   453,   454,   455,   458,   459,   461,
     462,   473,   658,   420,   421,   422,   182,   423,   441,   443,
     445,   446,   447,   459,   462,   473,   658,   425,   426,   427,
     182,   440,   441,   443,   444,   445,   446,   448,   449,   450,
     453,   454,   459,   461,   462,   473,   642,   658,   429,   430,
     431,   436,   437,   439,   182,   440,   441,   443,   445,   446,
     447,   459,   462,   473,   658,   337,   359,   466,   175,   333,
     233,   246,   247,   248,   249,   464,   467,   468,   558,   107,
     108,   570,    32,   678,    44,    14,    44,   597,   604,   657,
     474,    51,   575,    44,   474,    44,    64,   193,   600,   602,
      44,    44,   127,   656,   678,   474,    51,   582,   599,   604,
     603,   605,   657,    44,   474,   474,   546,    36,   221,   474,
     474,   546,    36,   546,    12,    36,   546,    36,   150,   150,
     474,   474,   474,    51,    51,    14,    44,   601,   605,   474,
     575,    12,    44,   470,   471,   154,   585,   475,   161,   475,
     678,   475,   475,   475,   475,    12,   139,   140,   505,   506,
     508,   508,   508,   508,   508,   508,   507,   508,   508,   508,
     508,   508,   508,   508,   508,    65,   511,   511,   510,   512,
     512,   512,   512,   513,   513,   514,   514,   161,   154,   154,
     154,    52,   474,   528,   528,   474,   474,   474,    26,    44,
     475,   552,   553,   154,   224,   225,   232,    44,   552,    55,
     127,   127,    53,   435,   442,   442,   656,    67,    69,   128,
     175,   183,   184,   185,   186,   187,   236,   466,   191,   192,
     442,   442,   442,   442,   442,   442,   442,   442,   182,   190,
      68,   442,   442,   442,   442,   442,   442,   442,   442,   442,
     182,   226,   442,   442,   442,   442,   442,   442,   442,   442,
     182,   182,   442,   442,   442,   442,   442,   442,   442,   442,
     442,   280,   289,   338,   316,   317,   361,   194,   195,   463,
     656,   182,   334,   154,   469,   107,   559,   108,   107,   132,
     524,    36,    44,    52,    52,   474,    52,    44,    44,    44,
      44,    52,    52,   474,    44,    44,    52,    52,    13,   651,
     475,    52,    52,   585,   482,   585,   546,   487,   585,   498,
     475,   475,    44,    44,    52,   474,   474,    36,    44,    52,
     546,    36,    44,    43,    66,   176,   195,   586,   588,   589,
     590,   657,   673,   674,   675,   677,    51,   472,   227,    61,
     154,   227,   227,   242,   546,   475,   491,   492,   493,   139,
     508,    43,    51,   245,   522,   543,   608,   611,   612,   613,
     614,   615,   616,   617,   618,   586,   586,   583,   589,   583,
      52,    25,    25,    25,    36,    44,   222,   230,   475,   475,
     475,    44,   442,    40,   173,   174,   127,   607,    12,   656,
     173,   174,   122,   123,   140,   147,   193,   463,   173,   179,
     451,   678,   238,   242,   661,   463,   175,   185,   457,   607,
     175,   607,    86,   625,    70,    71,   104,   250,   252,   259,
     260,   265,   278,   279,   339,   340,   343,   344,   348,   349,
     350,   351,   352,   353,   356,   357,   360,   250,   253,   254,
     255,   256,   258,   261,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   275,   276,   277,   318,   319,   358,   362,
     363,   364,   365,   366,   367,   368,   371,   372,   376,   377,
     378,   379,   380,   385,   386,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   679,    40,   466,   586,   124,
     125,    28,    45,   132,   606,   657,    52,    52,   475,   133,
     116,   483,    13,    13,   135,   152,   500,   502,   156,    52,
      52,   606,   585,   471,   588,    43,    43,    43,    14,    26,
      37,   587,   474,   475,   475,   475,    43,    43,   320,   322,
     666,   678,    36,   142,   143,   494,   491,   608,   474,   615,
      51,   210,   211,   212,   619,    92,   641,   243,   610,   244,
      85,   625,   201,   620,    26,   584,   553,   232,   232,   607,
     546,    40,   144,   607,   175,   175,    36,   127,   678,   124,
     320,   321,   662,   663,   237,   679,   656,   193,   607,   116,
     456,   656,   456,    87,    90,    93,    94,    95,    96,   153,
     187,   205,   206,   209,   626,   627,   628,   629,   630,   633,
     638,   639,   640,    86,   290,   291,   281,   282,   303,   304,
     306,   345,   282,   294,   304,   345,   282,   292,   293,   304,
     305,   361,   282,   304,   305,   361,   250,   280,   282,   283,
     284,   285,   286,   287,   288,   297,   298,   299,   300,   301,
     302,   312,   313,   314,   250,   117,   472,   366,   305,   262,
     381,   382,   383,   307,   305,   308,   361,   281,   305,   370,
     282,   373,   250,   361,   273,   305,   310,   311,   387,   282,
     304,   305,   361,   305,   361,   282,   305,   361,   361,   282,
     305,   308,   309,   361,   282,   305,   361,   282,   309,   361,
     250,   295,   305,   295,   296,   361,   305,   361,   464,   607,
     463,   559,   559,   566,    44,   475,    12,   196,   484,   475,
     475,   475,    12,   586,   185,   501,   502,   475,    26,    44,
      44,    44,    44,    14,    44,   586,   676,    52,   227,    12,
     667,   668,   667,   227,   492,   144,   495,    44,    52,    52,
     608,    99,   215,    98,   612,    97,   116,   122,   198,   199,
     200,   203,   204,   609,   622,   613,   135,   121,   213,   214,
     621,   475,   475,   442,   585,   607,   145,   146,   607,   607,
     180,   181,   452,    43,   472,   660,   661,    36,    23,    33,
      39,    58,    73,   234,   235,   409,   410,   411,   412,   415,
     416,   417,   538,   464,    40,   175,   456,   607,    36,    40,
      93,    94,    95,    96,    88,    89,    43,   116,   185,   632,
     215,    88,    89,   678,   655,   626,   291,   290,   341,   409,
     586,    55,    56,    57,   342,   259,   346,   347,   361,   586,
     361,   586,   474,   250,   586,   474,   250,    65,   124,   323,
     324,   325,   354,   124,   355,   355,   250,   474,   307,   263,
     382,   384,   361,   474,   474,   360,   250,   124,   320,   322,
     369,   474,   250,   257,   374,   375,   250,   374,   250,   361,
     474,   360,   360,   274,   388,   586,   474,   250,   474,   250,
     360,   474,   250,   250,   360,   474,   360,   360,   250,   360,
     474,   250,   360,   360,   250,   474,   250,   474,   250,   469,
     442,   679,    46,    46,    34,   119,   120,   472,   555,   546,
      12,   135,   546,   133,    12,   133,   157,    44,    44,   154,
      36,    44,   475,   546,    36,    44,    44,    43,   145,   146,
     147,   619,    52,   512,    98,   101,   102,   509,   510,   621,
     218,   219,   624,   624,   614,   103,   146,   510,   510,   202,
      13,   177,   460,    44,   470,   154,   659,   237,   663,   538,
      22,    22,    43,    43,    15,   472,   660,   416,    33,    39,
      33,    39,   418,   469,   607,   607,   215,   185,   632,   607,
      43,   116,   185,   635,   127,   124,   320,   321,   282,   292,
     293,   304,   305,   361,   250,   250,   124,   474,   361,   250,
     250,   282,   292,   304,   305,   361,   250,   361,   250,   361,
     472,   464,   559,   559,   557,   546,   475,   154,   475,   546,
     475,   475,   586,   586,   154,   585,   668,   667,   607,   215,
     216,   217,   623,   623,   510,   510,   163,   475,    44,   586,
     472,   409,   538,   538,   413,   545,   655,   655,   410,   659,
     416,   416,   416,   416,    24,   177,   465,   472,   456,   631,
     631,   207,   621,   636,   655,   607,   634,   634,   586,   474,
     250,   250,   586,   474,   250,   250,   329,   442,   469,    47,
      49,   560,    47,    49,   561,   559,   586,   133,   586,    13,
      44,   510,   472,   660,    44,    36,   472,   474,    36,    44,
      44,   655,   208,    36,    44,   166,   168,   637,   472,   562,
     564,   563,   565,    29,   133,   475,   475,   659,   414,   543,
     545,    25,   632,   621,   655,   635,   635,   442,    48,   117,
     472,    50,   118,   472,    48,   117,   472,    50,   118,   472,
     475,   472,    44,   208
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

    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    args.push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQVariable(XQillaFunction::XMLChFunctionURI, var_name, MEMMGR)));
    FunctionExists *exists = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionExists(args, MEMMGR));

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
    (yyvsp[(1) - (2)].caseClauses)->push_back((yyvsp[(2) - (2)].caseClause));
    (yyval.caseClauses)=(yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 3617 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses)=new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back((yyvsp[(1) - (1)].caseClause));
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
    (yyval.caseClause) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, (yyvsp[(2) - (4)].sequenceType), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 3641 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (7)].str), (yyvsp[(5) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode)));
  }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 3649 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 3657 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == Or::name) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 3671 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == And::name) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 3690 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 3694 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 3697 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 3698 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 3702 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 3706 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 3710 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 3714 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 3718 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 3722 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 3726 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 3730 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 3734 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 3738 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 3742 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 3746 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 3755 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 3759 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 3768 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionCall(0, BuiltInModules::core.uri, MEMMGR->getPooledString("to"), args, MEMMGR));
  }
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 3780 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 3784 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 3793 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 3797 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 3801 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 3805 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 3814 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 3818 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 3827 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 3831 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 3840 "../src/parser/XQParser.y"
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

  case 492:

/* Line 1455 of yacc.c  */
#line 3862 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 3872 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 3881 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 3890 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 3896 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 504:

/* Line 1455 of yacc.c  */
#line 3917 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 3921 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 3925 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 3933 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 3940 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 3953 "../src/parser/XQParser.y"
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

  case 513:

/* Line 1455 of yacc.c  */
#line 3974 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 3983 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 3989 "../src/parser/XQParser.y"
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

  case 518:

/* Line 1455 of yacc.c  */
#line 4014 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 4028 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 4034 "../src/parser/XQParser.y"
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

  case 525:

/* Line 1455 of yacc.c  */
#line 4056 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 4066 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 529:

/* Line 1455 of yacc.c  */
#line 4073 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 4082 "../src/parser/XQParser.y"
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

  case 532:

/* Line 1455 of yacc.c  */
#line 4105 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 4109 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 4113 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 4117 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 4121 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 4125 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 4129 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 4133 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 4141 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 4149 "../src/parser/XQParser.y"
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

  case 542:

/* Line 1455 of yacc.c  */
#line 4166 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 4183 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 4187 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 546:

/* Line 1455 of yacc.c  */
#line 4191 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 4195 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 548:

/* Line 1455 of yacc.c  */
#line 4199 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 4207 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }
    break;

  case 550:

/* Line 1455 of yacc.c  */
#line 4219 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 4229 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 4241 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 4248 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 4255 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 4268 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 4297 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 4308 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 4312 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 4320 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 4328 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 580:

/* Line 1455 of yacc.c  */
#line 4338 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 4348 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 582:

/* Line 1455 of yacc.c  */
#line 4352 "../src/parser/XQParser.y"
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

  case 583:

/* Line 1455 of yacc.c  */
#line 4375 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 4380 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 586:

/* Line 1455 of yacc.c  */
#line 4391 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 587:

/* Line 1455 of yacc.c  */
#line 4400 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 588:

/* Line 1455 of yacc.c  */
#line 4404 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 4417 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 4423 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 4436 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 4440 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 4449 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4465 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 4469 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 4476 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 4480 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 4490 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 4494 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 4499 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 4509 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 4513 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 4517 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 4530 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 4534 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 4539 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 4549 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 4553 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 4557 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 4574 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 4578 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 4583 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 620:

/* Line 1455 of yacc.c  */
#line 4588 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 4595 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                 SchemaSymbols::fgDT_STRING,
                                 (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
    }
  }
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 4608 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(2) - (3)].str), AnyAtomicType::STRING,
                  MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 623:

/* Line 1455 of yacc.c  */
#line 4621 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 625:

/* Line 1455 of yacc.c  */
#line 4630 "../src/parser/XQParser.y"
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

  case 627:

/* Line 1455 of yacc.c  */
#line 4650 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 634:

/* Line 1455 of yacc.c  */
#line 4673 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 4681 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 4689 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 4693 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 4701 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 4705 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 4714 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4721 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4725 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 4733 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 4741 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 4749 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 646:

/* Line 1455 of yacc.c  */
#line 4756 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(1) - (1)].str), AnyAtomicType::STRING, MEMMGR));
  }
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 4766 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 648:

/* Line 1455 of yacc.c  */
#line 4773 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 4777 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 4785 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 651:

/* Line 1455 of yacc.c  */
#line 4795 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 4799 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 653:

/* Line 1455 of yacc.c  */
#line 4807 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 654:

/* Line 1455 of yacc.c  */
#line 4811 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 4821 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 656:

/* Line 1455 of yacc.c  */
#line 4828 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 657:

/* Line 1455 of yacc.c  */
#line 4837 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 4839 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 4841 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 4843 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 4849 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 662:

/* Line 1455 of yacc.c  */
#line 4853 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 676:

/* Line 1455 of yacc.c  */
#line 4888 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 677:

/* Line 1455 of yacc.c  */
#line 4896 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 678:

/* Line 1455 of yacc.c  */
#line 4900 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 679:

/* Line 1455 of yacc.c  */
#line 4905 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_SCHEMA_DOCUMENT);
  }
    break;

  case 680:

/* Line 1455 of yacc.c  */
#line 4914 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 681:

/* Line 1455 of yacc.c  */
#line 4922 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 682:

/* Line 1455 of yacc.c  */
#line 4930 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 4934 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 4938 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 4946 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 4950 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 4954 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 4963 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 4971 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 692:

/* Line 1455 of yacc.c  */
#line 4984 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 693:

/* Line 1455 of yacc.c  */
#line 4988 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 4992 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 4996 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 697:

/* Line 1455 of yacc.c  */
#line 5006 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 698:

/* Line 1455 of yacc.c  */
#line 5014 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 703:

/* Line 1455 of yacc.c  */
#line 5034 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 5046 "../src/parser/XQParser.y"
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

  case 705:

/* Line 1455 of yacc.c  */
#line 5061 "../src/parser/XQParser.y"
    {
}
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 5064 "../src/parser/XQParser.y"
    {
}
    break;

  case 707:

/* Line 1455 of yacc.c  */
#line 5070 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 708:

/* Line 1455 of yacc.c  */
#line 5074 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 709:

/* Line 1455 of yacc.c  */
#line 5084 "../src/parser/XQParser.y"
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

  case 711:

/* Line 1455 of yacc.c  */
#line 5101 "../src/parser/XQParser.y"
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

  case 713:

/* Line 1455 of yacc.c  */
#line 5117 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 715:

/* Line 1455 of yacc.c  */
#line 5127 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 718:

/* Line 1455 of yacc.c  */
#line 5137 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 719:

/* Line 1455 of yacc.c  */
#line 5146 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 720:

/* Line 1455 of yacc.c  */
#line 5151 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 5161 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 5165 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 724:

/* Line 1455 of yacc.c  */
#line 5173 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 5178 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5187 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 5191 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 5195 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 5199 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5203 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 5207 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 5217 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 5228 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 735:

/* Line 1455 of yacc.c  */
#line 5234 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 5240 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 5246 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 5261 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 739:

/* Line 1455 of yacc.c  */
#line 5265 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 740:

/* Line 1455 of yacc.c  */
#line 5269 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 5273 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 5277 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5281 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5285 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5289 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 5297 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 5301 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 5305 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 5313 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 5317 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 5353 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
  }
    break;

  case 762:

/* Line 1455 of yacc.c  */
#line 5357 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
  }
    break;

  case 763:

/* Line 1455 of yacc.c  */
#line 5361 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
  }
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 5365 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
  }
    break;

  case 765:

/* Line 1455 of yacc.c  */
#line 5374 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 5378 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 5386 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 5390 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5400 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 5404 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 5408 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5412 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 5416 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5423 "../src/parser/XQParser.y"
    {
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5426 "../src/parser/XQParser.y"
    {
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5433 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5437 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5441 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5445 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5455 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5459 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5463 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5470 "../src/parser/XQParser.y"
    {
  }
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 5473 "../src/parser/XQParser.y"
    {
  }
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 5481 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 5485 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 5492 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5496 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5504 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5508 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5516 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5524 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5528 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5536 "../src/parser/XQParser.y"
    {
}
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5543 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5551 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5556 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5561 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5573 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5577 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5581 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5585 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5589 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5600 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 5611 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 5615 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 811:

/* Line 1455 of yacc.c  */
#line 5625 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 5633 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5640 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 5645 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 815:

/* Line 1455 of yacc.c  */
#line 5653 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 816:

/* Line 1455 of yacc.c  */
#line 5662 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 817:

/* Line 1455 of yacc.c  */
#line 5674 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 5686 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE,
                  MEMMGR));
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5699 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING,
                  MEMMGR));
  }
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 5710 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 5719 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 5731 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, signature, (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 823:

/* Line 1455 of yacc.c  */
#line 5736 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(5) - (7)].argSpecs), (yyvsp[(6) - (7)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, signature, (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 824:

/* Line 1455 of yacc.c  */
#line 5741 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 5747 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(8) - (10)].argSpecs), (yyvsp[(9) - (10)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), signature, (yyvsp[(10) - (10)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 5753 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), signature, (yyvsp[(6) - (6)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 5759 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(6) - (8)].argSpecs), (yyvsp[(7) - (8)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 5768 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5772 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5780 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 5784 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 832:

/* Line 1455 of yacc.c  */
#line 5791 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 833:

/* Line 1455 of yacc.c  */
#line 5796 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 5804 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 5809 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 5818 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 5822 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 838:

/* Line 1455 of yacc.c  */
#line 5826 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 839:

/* Line 1455 of yacc.c  */
#line 5834 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 5838 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 5846 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 842:

/* Line 1455 of yacc.c  */
#line 5850 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 843:

/* Line 1455 of yacc.c  */
#line 5854 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 844:

/* Line 1455 of yacc.c  */
#line 5858 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 845:

/* Line 1455 of yacc.c  */
#line 5866 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 846:

/* Line 1455 of yacc.c  */
#line 5870 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 847:

/* Line 1455 of yacc.c  */
#line 5874 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 848:

/* Line 1455 of yacc.c  */
#line 5882 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 849:

/* Line 1455 of yacc.c  */
#line 5887 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 850:

/* Line 1455 of yacc.c  */
#line 5897 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 853:

/* Line 1455 of yacc.c  */
#line 5914 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 854:

/* Line 1455 of yacc.c  */
#line 5922 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(2) - (4)].argSpecs), (yyvsp[(3) - (4)].sequenceType), MEMMGR);
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, signature, (yyvsp[(4) - (4)].astNode), false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 855:

/* Line 1455 of yacc.c  */
#line 5933 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 856:

/* Line 1455 of yacc.c  */
#line 5938 "../src/parser/XQParser.y"
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

  case 859:

/* Line 1455 of yacc.c  */
#line 5966 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  }
    break;

  case 860:

/* Line 1455 of yacc.c  */
#line 5974 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  }
    break;

  case 861:

/* Line 1455 of yacc.c  */
#line 5978 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  }
    break;

  case 862:

/* Line 1455 of yacc.c  */
#line 5985 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  }
    break;

  case 863:

/* Line 1455 of yacc.c  */
#line 5990 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 864:

/* Line 1455 of yacc.c  */
#line 5999 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;



/* Line 1455 of yacc.c  */
#line 12353 "../src/parser/XQParser.cpp"
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
#line 6034 "../src/parser/XQParser.y"


}  // namespace XQParser


