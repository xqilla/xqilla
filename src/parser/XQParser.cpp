
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

#include <xqilla/functions/FunctionConstructor.hpp>
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
     _LANG_FUNCDECL_ = 264,
     _LANG_DELAYEDMODULE_ = 265,
     _DOLLAR_ = 266,
     _COLON_EQUALS_ = 267,
     _ASTERISK_ = 268,
     _BAR_ = 269,
     _BANG_EQUALS_ = 270,
     _LESS_THAN_EQUALS_ = 271,
     _GREATER_THAN_ = 272,
     _GREATER_THAN_EQUALS_ = 273,
     _LESS_THAN_LESS_THAN_ = 274,
     _GREATER_THAN_GREATER_THAN_ = 275,
     _COLON_COLON_ = 276,
     _AT_SIGN_ = 277,
     _LSQUARE_ = 278,
     _RSQUARE_ = 279,
     _QUESTION_MARK_ = 280,
     _LESS_THAN_OP_OR_TAG_ = 281,
     _START_TAG_CLOSE_ = 282,
     _END_TAG_CLOSE_ = 283,
     _PI_START_ = 284,
     _XML_COMMENT_START_ = 285,
     _XML_COMMENT_END_ = 286,
     _SLASH_SLASH_ = 287,
     _END_TAG_OPEN_ = 288,
     _PRAGMA_OPEN_ = 289,
     _COMMA_ = 290,
     _PLUS_ = 291,
     _MINUS_ = 292,
     _SLASH_ = 293,
     _EQUALS_ = 294,
     _DOT_ = 295,
     _DOT_DOT_ = 296,
     _LPAR_ = 297,
     _RPAR_ = 298,
     _EMPTY_TAG_CLOSE_ = 299,
     _VALUE_INDICATOR_ = 300,
     _OPEN_QUOT_ = 301,
     _CLOSE_QUOT_ = 302,
     _OPEN_APOS_ = 303,
     _CLOSE_APOS_ = 304,
     _LBRACE_ = 305,
     _RBRACE_ = 306,
     _SEMICOLON_ = 307,
     _HASH_ = 308,
     _INTEGER_LITERAL_ = 309,
     _DECIMAL_LITERAL_ = 310,
     _DOUBLE_LITERAL_ = 311,
     _ATTRIBUTE_ = 312,
     _COMMENT_ = 313,
     _DOCUMENT_NODE_ = 314,
     _NODE_ = 315,
     _PROCESSING_INSTRUCTION_ = 316,
     _SCHEMA_ATTRIBUTE_ = 317,
     _SCHEMA_ELEMENT_ = 318,
     _TEXT_ = 319,
     _EMPTY_SEQUENCE_ = 320,
     _BOUNDARY_SPACE_ = 321,
     _FT_OPTION_ = 322,
     _BASE_URI_ = 323,
     _LAX_ = 324,
     _STRICT_ = 325,
     _IDIV_ = 326,
     _CHILD_ = 327,
     _DESCENDANT_ = 328,
     _SELF_ = 329,
     _DESCENDANT_OR_SELF_ = 330,
     _FOLLOWING_SIBLING_ = 331,
     _FOLLOWING_ = 332,
     _PARENT_ = 333,
     _ANCESTOR_ = 334,
     _PRECEDING_SIBLING_ = 335,
     _PRECEDING_ = 336,
     _ANCESTOR_OR_SELF_ = 337,
     _DOCUMENT_ = 338,
     _NOT_ = 339,
     _USING_ = 340,
     _NO_ = 341,
     _SENSITIVE_ = 342,
     _INSENSITIVE_ = 343,
     _DIACRITICS_ = 344,
     _WITHOUT_ = 345,
     _WITHOUT_C_ = 346,
     _STEMMING_ = 347,
     _THESAURUS_ = 348,
     _STOP_ = 349,
     _WILDCARDS_ = 350,
     _ENTIRE_ = 351,
     _CONTENT_ = 352,
     _WORD_ = 353,
     _TYPE_ = 354,
     _START_ = 355,
     _END_ = 356,
     _MOST_ = 357,
     _SKIP_ = 358,
     _COPY_ = 359,
     _VALUE_ = 360,
     _WHITESPACE_ = 361,
     _PI_CONTENT_ = 362,
     _XML_COMMENT_CONTENT_ = 363,
     _EQ_ = 364,
     _NE_ = 365,
     _LT_ = 366,
     _LE_ = 367,
     _GT_ = 368,
     _GE_ = 369,
     _AT_ = 370,
     _QUOT_ATTR_CONTENT_ = 371,
     _APOS_ATTR_CONTENT_ = 372,
     _WHITESPACE_ELEMENT_CONTENT_ = 373,
     _ELEMENT_CONTENT_ = 374,
     _AT_LM_ = 375,
     _ORDERED_ = 376,
     _UNORDERED_ = 377,
     _QNAME_ = 378,
     _XMLNS_QNAME_ = 379,
     _CONSTR_QNAME_ = 380,
     _STRING_LITERAL_ = 381,
     _VARIABLE_ = 382,
     _NCNAME_COLON_STAR_ = 383,
     _STAR_COLON_NCNAME_ = 384,
     _PI_TARGET_ = 385,
     _PRAGMA_CONTENT_ = 386,
     _RETURN_ = 387,
     _FOR_ = 388,
     _IN_ = 389,
     _LET_ = 390,
     _WHERE_ = 391,
     _COUNT_ = 392,
     _BY_ = 393,
     _ORDER_ = 394,
     _STABLE_ = 395,
     _ASCENDING_ = 396,
     _DESCENDING_ = 397,
     _EMPTY_ = 398,
     _GREATEST_ = 399,
     _LEAST_ = 400,
     _COLLATION_ = 401,
     _SOME_ = 402,
     _EVERY_ = 403,
     _SATISFIES_ = 404,
     _TYPESWITCH_ = 405,
     _CASE_ = 406,
     _CASE_S_ = 407,
     _AS_ = 408,
     _IF_ = 409,
     _THEN_ = 410,
     _ELSE_ = 411,
     _OR_ = 412,
     _AND_ = 413,
     _INSTANCE_ = 414,
     _OF_ = 415,
     _CASTABLE_ = 416,
     _TO_ = 417,
     _DIV_ = 418,
     _MOD_ = 419,
     _UNION_ = 420,
     _INTERSECT_ = 421,
     _EXCEPT_ = 422,
     _VALIDATE_ = 423,
     _CAST_ = 424,
     _TREAT_ = 425,
     _IS_ = 426,
     _PRESERVE_ = 427,
     _STRIP_ = 428,
     _NAMESPACE_ = 429,
     _ITEM_ = 430,
     _EXTERNAL_ = 431,
     _ENCODING_ = 432,
     _NO_PRESERVE_ = 433,
     _INHERIT_ = 434,
     _NO_INHERIT_ = 435,
     _DECLARE_ = 436,
     _CONSTRUCTION_ = 437,
     _ORDERING_ = 438,
     _DEFAULT_ = 439,
     _COPY_NAMESPACES_ = 440,
     _OPTION_ = 441,
     _XQUERY_ = 442,
     _VERSION_ = 443,
     _IMPORT_ = 444,
     _SCHEMA_ = 445,
     _MODULE_ = 446,
     _ELEMENT_ = 447,
     _FUNCTION_ = 448,
     _FUNCTION_EXT_ = 449,
     _SCORE_ = 450,
     _CONTAINS_ = 451,
     _WEIGHT_ = 452,
     _WINDOW_ = 453,
     _DISTANCE_ = 454,
     _OCCURS_ = 455,
     _TIMES_ = 456,
     _SAME_ = 457,
     _DIFFERENT_ = 458,
     _LOWERCASE_ = 459,
     _UPPERCASE_ = 460,
     _RELATIONSHIP_ = 461,
     _LEVELS_ = 462,
     _LANGUAGE_ = 463,
     _ANY_ = 464,
     _ALL_ = 465,
     _PHRASE_ = 466,
     _EXACTLY_ = 467,
     _FROM_ = 468,
     _WORDS_ = 469,
     _SENTENCES_ = 470,
     _PARAGRAPHS_ = 471,
     _SENTENCE_ = 472,
     _PARAGRAPH_ = 473,
     _REPLACE_ = 474,
     _MODIFY_ = 475,
     _FIRST_ = 476,
     _INSERT_ = 477,
     _BEFORE_ = 478,
     _AFTER_ = 479,
     _REVALIDATION_ = 480,
     _WITH_ = 481,
     _NODES_ = 482,
     _RENAME_ = 483,
     _LAST_ = 484,
     _DELETE_ = 485,
     _INTO_ = 486,
     _UPDATING_ = 487,
     _ID_ = 488,
     _KEY_ = 489,
     _TEMPLATE_ = 490,
     _MATCHES_ = 491,
     _NAME_ = 492,
     _CALL_ = 493,
     _APPLY_ = 494,
     _TEMPLATES_ = 495,
     _MODE_ = 496,
     _FTOR_ = 497,
     _FTAND_ = 498,
     _FTNOT_ = 499,
     _PRIVATE_ = 500,
     _PUBLIC_ = 501,
     _DETERMINISTIC_ = 502,
     _NONDETERMINISTIC_ = 503,
     _XSLT_END_ELEMENT_ = 504,
     _XSLT_STYLESHEET_ = 505,
     _XSLT_TEMPLATE_ = 506,
     _XSLT_VALUE_OF_ = 507,
     _XSLT_TEXT_ = 508,
     _XSLT_APPLY_TEMPLATES_ = 509,
     _XSLT_CALL_TEMPLATE_ = 510,
     _XSLT_WITH_PARAM_ = 511,
     _XSLT_SEQUENCE_ = 512,
     _XSLT_PARAM_ = 513,
     _XSLT_FUNCTION_ = 514,
     _XSLT_CHOOSE_ = 515,
     _XSLT_WHEN_ = 516,
     _XSLT_OTHERWISE_ = 517,
     _XSLT_IF_ = 518,
     _XSLT_VARIABLE_ = 519,
     _XSLT_COMMENT_ = 520,
     _XSLT_PI_ = 521,
     _XSLT_DOCUMENT_ = 522,
     _XSLT_ATTRIBUTE_ = 523,
     _XSLT_NAMESPACE_ = 524,
     _XSLT_ELEMENT_ = 525,
     _XSLT_ANALYZE_STRING_ = 526,
     _XSLT_MATCHING_SUBSTRING_ = 527,
     _XSLT_NON_MATCHING_SUBSTRING_ = 528,
     _XSLT_COPY_OF_ = 529,
     _XSLT_COPY_ = 530,
     _XSLT_FOR_EACH_ = 531,
     _XSLT_OUTPUT_ = 532,
     _XSLT_IMPORT_SCHEMA_ = 533,
     _XSLT_VERSION_ = 534,
     _XSLT_MODE_ = 535,
     _XSLT_NAME_ = 536,
     _XSLT_DOCTYPE_PUBLIC_ = 537,
     _XSLT_DOCTYPE_SYSTEM_ = 538,
     _XSLT_ENCODING_ = 539,
     _XSLT_MEDIA_TYPE_ = 540,
     _XSLT_NORMALIZATION_FORM_ = 541,
     _XSLT_STANDALONE_ = 542,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 543,
     _XSLT_NAMESPACE_STR_ = 544,
     _XSLT_SCHEMA_LOCATION_ = 545,
     _XSLT_TUNNEL_ = 546,
     _XSLT_REQUIRED_ = 547,
     _XSLT_OVERRIDE_ = 548,
     _XSLT_COPY_NAMESPACES_ = 549,
     _XSLT_INHERIT_NAMESPACES_ = 550,
     _XSLT_BYTE_ORDER_MARK_ = 551,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 552,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 553,
     _XSLT_INDENT_ = 554,
     _XSLT_OMIT_XML_DECLARATION_ = 555,
     _XSLT_UNDECLARE_PREFIXES_ = 556,
     _XSLT_MATCH_ = 557,
     _XSLT_AS_ = 558,
     _XSLT_SELECT_ = 559,
     _XSLT_PRIORITY_ = 560,
     _XSLT_TEST_ = 561,
     _XSLT_SEPARATOR_ = 562,
     _XSLT_NAMESPACE_A_ = 563,
     _XSLT_REGEX_ = 564,
     _XSLT_FLAGS_ = 565,
     _XSLT_METHOD_ = 566,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 567,
     _XSLT_USE_CHARACTER_MAPS_ = 568,
     _XSLT_ELEMENT_NAME_ = 569,
     _XSLT_XMLNS_ATTR_ = 570,
     _XSLT_ATTR_NAME_ = 571,
     _XSLT_TEXT_NODE_ = 572,
     _XSLT_WS_TEXT_NODE_ = 573,
     _HASH_DEFAULT_ = 574,
     _HASH_ALL_ = 575,
     _HASH_CURRENT_ = 576,
     _XML_ = 577,
     _HTML_ = 578,
     _XHTML_ = 579
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
#define _DOLLAR_ 266
#define _COLON_EQUALS_ 267
#define _ASTERISK_ 268
#define _BAR_ 269
#define _BANG_EQUALS_ 270
#define _LESS_THAN_EQUALS_ 271
#define _GREATER_THAN_ 272
#define _GREATER_THAN_EQUALS_ 273
#define _LESS_THAN_LESS_THAN_ 274
#define _GREATER_THAN_GREATER_THAN_ 275
#define _COLON_COLON_ 276
#define _AT_SIGN_ 277
#define _LSQUARE_ 278
#define _RSQUARE_ 279
#define _QUESTION_MARK_ 280
#define _LESS_THAN_OP_OR_TAG_ 281
#define _START_TAG_CLOSE_ 282
#define _END_TAG_CLOSE_ 283
#define _PI_START_ 284
#define _XML_COMMENT_START_ 285
#define _XML_COMMENT_END_ 286
#define _SLASH_SLASH_ 287
#define _END_TAG_OPEN_ 288
#define _PRAGMA_OPEN_ 289
#define _COMMA_ 290
#define _PLUS_ 291
#define _MINUS_ 292
#define _SLASH_ 293
#define _EQUALS_ 294
#define _DOT_ 295
#define _DOT_DOT_ 296
#define _LPAR_ 297
#define _RPAR_ 298
#define _EMPTY_TAG_CLOSE_ 299
#define _VALUE_INDICATOR_ 300
#define _OPEN_QUOT_ 301
#define _CLOSE_QUOT_ 302
#define _OPEN_APOS_ 303
#define _CLOSE_APOS_ 304
#define _LBRACE_ 305
#define _RBRACE_ 306
#define _SEMICOLON_ 307
#define _HASH_ 308
#define _INTEGER_LITERAL_ 309
#define _DECIMAL_LITERAL_ 310
#define _DOUBLE_LITERAL_ 311
#define _ATTRIBUTE_ 312
#define _COMMENT_ 313
#define _DOCUMENT_NODE_ 314
#define _NODE_ 315
#define _PROCESSING_INSTRUCTION_ 316
#define _SCHEMA_ATTRIBUTE_ 317
#define _SCHEMA_ELEMENT_ 318
#define _TEXT_ 319
#define _EMPTY_SEQUENCE_ 320
#define _BOUNDARY_SPACE_ 321
#define _FT_OPTION_ 322
#define _BASE_URI_ 323
#define _LAX_ 324
#define _STRICT_ 325
#define _IDIV_ 326
#define _CHILD_ 327
#define _DESCENDANT_ 328
#define _SELF_ 329
#define _DESCENDANT_OR_SELF_ 330
#define _FOLLOWING_SIBLING_ 331
#define _FOLLOWING_ 332
#define _PARENT_ 333
#define _ANCESTOR_ 334
#define _PRECEDING_SIBLING_ 335
#define _PRECEDING_ 336
#define _ANCESTOR_OR_SELF_ 337
#define _DOCUMENT_ 338
#define _NOT_ 339
#define _USING_ 340
#define _NO_ 341
#define _SENSITIVE_ 342
#define _INSENSITIVE_ 343
#define _DIACRITICS_ 344
#define _WITHOUT_ 345
#define _WITHOUT_C_ 346
#define _STEMMING_ 347
#define _THESAURUS_ 348
#define _STOP_ 349
#define _WILDCARDS_ 350
#define _ENTIRE_ 351
#define _CONTENT_ 352
#define _WORD_ 353
#define _TYPE_ 354
#define _START_ 355
#define _END_ 356
#define _MOST_ 357
#define _SKIP_ 358
#define _COPY_ 359
#define _VALUE_ 360
#define _WHITESPACE_ 361
#define _PI_CONTENT_ 362
#define _XML_COMMENT_CONTENT_ 363
#define _EQ_ 364
#define _NE_ 365
#define _LT_ 366
#define _LE_ 367
#define _GT_ 368
#define _GE_ 369
#define _AT_ 370
#define _QUOT_ATTR_CONTENT_ 371
#define _APOS_ATTR_CONTENT_ 372
#define _WHITESPACE_ELEMENT_CONTENT_ 373
#define _ELEMENT_CONTENT_ 374
#define _AT_LM_ 375
#define _ORDERED_ 376
#define _UNORDERED_ 377
#define _QNAME_ 378
#define _XMLNS_QNAME_ 379
#define _CONSTR_QNAME_ 380
#define _STRING_LITERAL_ 381
#define _VARIABLE_ 382
#define _NCNAME_COLON_STAR_ 383
#define _STAR_COLON_NCNAME_ 384
#define _PI_TARGET_ 385
#define _PRAGMA_CONTENT_ 386
#define _RETURN_ 387
#define _FOR_ 388
#define _IN_ 389
#define _LET_ 390
#define _WHERE_ 391
#define _COUNT_ 392
#define _BY_ 393
#define _ORDER_ 394
#define _STABLE_ 395
#define _ASCENDING_ 396
#define _DESCENDING_ 397
#define _EMPTY_ 398
#define _GREATEST_ 399
#define _LEAST_ 400
#define _COLLATION_ 401
#define _SOME_ 402
#define _EVERY_ 403
#define _SATISFIES_ 404
#define _TYPESWITCH_ 405
#define _CASE_ 406
#define _CASE_S_ 407
#define _AS_ 408
#define _IF_ 409
#define _THEN_ 410
#define _ELSE_ 411
#define _OR_ 412
#define _AND_ 413
#define _INSTANCE_ 414
#define _OF_ 415
#define _CASTABLE_ 416
#define _TO_ 417
#define _DIV_ 418
#define _MOD_ 419
#define _UNION_ 420
#define _INTERSECT_ 421
#define _EXCEPT_ 422
#define _VALIDATE_ 423
#define _CAST_ 424
#define _TREAT_ 425
#define _IS_ 426
#define _PRESERVE_ 427
#define _STRIP_ 428
#define _NAMESPACE_ 429
#define _ITEM_ 430
#define _EXTERNAL_ 431
#define _ENCODING_ 432
#define _NO_PRESERVE_ 433
#define _INHERIT_ 434
#define _NO_INHERIT_ 435
#define _DECLARE_ 436
#define _CONSTRUCTION_ 437
#define _ORDERING_ 438
#define _DEFAULT_ 439
#define _COPY_NAMESPACES_ 440
#define _OPTION_ 441
#define _XQUERY_ 442
#define _VERSION_ 443
#define _IMPORT_ 444
#define _SCHEMA_ 445
#define _MODULE_ 446
#define _ELEMENT_ 447
#define _FUNCTION_ 448
#define _FUNCTION_EXT_ 449
#define _SCORE_ 450
#define _CONTAINS_ 451
#define _WEIGHT_ 452
#define _WINDOW_ 453
#define _DISTANCE_ 454
#define _OCCURS_ 455
#define _TIMES_ 456
#define _SAME_ 457
#define _DIFFERENT_ 458
#define _LOWERCASE_ 459
#define _UPPERCASE_ 460
#define _RELATIONSHIP_ 461
#define _LEVELS_ 462
#define _LANGUAGE_ 463
#define _ANY_ 464
#define _ALL_ 465
#define _PHRASE_ 466
#define _EXACTLY_ 467
#define _FROM_ 468
#define _WORDS_ 469
#define _SENTENCES_ 470
#define _PARAGRAPHS_ 471
#define _SENTENCE_ 472
#define _PARAGRAPH_ 473
#define _REPLACE_ 474
#define _MODIFY_ 475
#define _FIRST_ 476
#define _INSERT_ 477
#define _BEFORE_ 478
#define _AFTER_ 479
#define _REVALIDATION_ 480
#define _WITH_ 481
#define _NODES_ 482
#define _RENAME_ 483
#define _LAST_ 484
#define _DELETE_ 485
#define _INTO_ 486
#define _UPDATING_ 487
#define _ID_ 488
#define _KEY_ 489
#define _TEMPLATE_ 490
#define _MATCHES_ 491
#define _NAME_ 492
#define _CALL_ 493
#define _APPLY_ 494
#define _TEMPLATES_ 495
#define _MODE_ 496
#define _FTOR_ 497
#define _FTAND_ 498
#define _FTNOT_ 499
#define _PRIVATE_ 500
#define _PUBLIC_ 501
#define _DETERMINISTIC_ 502
#define _NONDETERMINISTIC_ 503
#define _XSLT_END_ELEMENT_ 504
#define _XSLT_STYLESHEET_ 505
#define _XSLT_TEMPLATE_ 506
#define _XSLT_VALUE_OF_ 507
#define _XSLT_TEXT_ 508
#define _XSLT_APPLY_TEMPLATES_ 509
#define _XSLT_CALL_TEMPLATE_ 510
#define _XSLT_WITH_PARAM_ 511
#define _XSLT_SEQUENCE_ 512
#define _XSLT_PARAM_ 513
#define _XSLT_FUNCTION_ 514
#define _XSLT_CHOOSE_ 515
#define _XSLT_WHEN_ 516
#define _XSLT_OTHERWISE_ 517
#define _XSLT_IF_ 518
#define _XSLT_VARIABLE_ 519
#define _XSLT_COMMENT_ 520
#define _XSLT_PI_ 521
#define _XSLT_DOCUMENT_ 522
#define _XSLT_ATTRIBUTE_ 523
#define _XSLT_NAMESPACE_ 524
#define _XSLT_ELEMENT_ 525
#define _XSLT_ANALYZE_STRING_ 526
#define _XSLT_MATCHING_SUBSTRING_ 527
#define _XSLT_NON_MATCHING_SUBSTRING_ 528
#define _XSLT_COPY_OF_ 529
#define _XSLT_COPY_ 530
#define _XSLT_FOR_EACH_ 531
#define _XSLT_OUTPUT_ 532
#define _XSLT_IMPORT_SCHEMA_ 533
#define _XSLT_VERSION_ 534
#define _XSLT_MODE_ 535
#define _XSLT_NAME_ 536
#define _XSLT_DOCTYPE_PUBLIC_ 537
#define _XSLT_DOCTYPE_SYSTEM_ 538
#define _XSLT_ENCODING_ 539
#define _XSLT_MEDIA_TYPE_ 540
#define _XSLT_NORMALIZATION_FORM_ 541
#define _XSLT_STANDALONE_ 542
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 543
#define _XSLT_NAMESPACE_STR_ 544
#define _XSLT_SCHEMA_LOCATION_ 545
#define _XSLT_TUNNEL_ 546
#define _XSLT_REQUIRED_ 547
#define _XSLT_OVERRIDE_ 548
#define _XSLT_COPY_NAMESPACES_ 549
#define _XSLT_INHERIT_NAMESPACES_ 550
#define _XSLT_BYTE_ORDER_MARK_ 551
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 552
#define _XSLT_INCLUDE_CONTENT_TYPE_ 553
#define _XSLT_INDENT_ 554
#define _XSLT_OMIT_XML_DECLARATION_ 555
#define _XSLT_UNDECLARE_PREFIXES_ 556
#define _XSLT_MATCH_ 557
#define _XSLT_AS_ 558
#define _XSLT_SELECT_ 559
#define _XSLT_PRIORITY_ 560
#define _XSLT_TEST_ 561
#define _XSLT_SEPARATOR_ 562
#define _XSLT_NAMESPACE_A_ 563
#define _XSLT_REGEX_ 564
#define _XSLT_FLAGS_ 565
#define _XSLT_METHOD_ 566
#define _XSLT_CDATA_SECTION_ELEMENTS_ 567
#define _XSLT_USE_CHARACTER_MAPS_ 568
#define _XSLT_ELEMENT_NAME_ 569
#define _XSLT_XMLNS_ATTR_ 570
#define _XSLT_ATTR_NAME_ 571
#define _XSLT_TEXT_NODE_ 572
#define _XSLT_WS_TEXT_NODE_ 573
#define _HASH_DEFAULT_ 574
#define _HASH_ALL_ 575
#define _HASH_CURRENT_ 576
#define _XML_ 577
#define _HTML_ 578
#define _XHTML_ 579




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
#define YYFINAL  336
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8431

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  325
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  352
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1034
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1698

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   579

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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    15,    18,    21,    24,
      27,    36,    37,    39,    42,    49,    50,    53,    62,    64,
      69,    71,    72,    75,    78,    79,    82,    85,    88,    91,
      94,    97,   102,   104,   108,   111,   115,   119,   123,   124,
     127,   130,   133,   135,   137,   139,   144,   146,   149,   153,
     156,   157,   160,   164,   166,   169,   173,   177,   180,   183,
     187,   189,   192,   196,   200,   203,   206,   210,   212,   215,
     219,   223,   226,   228,   231,   235,   238,   242,   245,   248,
     251,   254,   257,   260,   263,   266,   269,   272,   275,   279,
     282,   284,   286,   288,   290,   292,   294,   297,   300,   302,
     305,   308,   312,   316,   321,   322,   326,   329,   330,   333,
     336,   337,   340,   343,   346,   348,   350,   352,   354,   356,
     358,   360,   362,   364,   366,   368,   370,   372,   374,   376,
     378,   380,   382,   386,   388,   392,   396,   400,   402,   404,
     408,   410,   414,   418,   420,   422,   424,   425,   428,   432,
     434,   437,   438,   441,   445,   447,   450,   454,   458,   461,
     464,   468,   472,   476,   481,   483,   486,   490,   494,   495,
     499,   504,   506,   510,   514,   518,   519,   523,   524,   528,
     533,   535,   538,   542,   546,   550,   552,   556,   560,   562,
     566,   570,   574,   576,   580,   582,   586,   590,   594,   598,
     602,   604,   608,   612,   616,   618,   622,   626,   629,   631,
     635,   638,   642,   644,   647,   650,   654,   656,   660,   664,
     666,   668,   670,   672,   674,   676,   681,   688,   690,   692,
     694,   696,   698,   701,   705,   709,   713,   717,   720,   722,
     726,   730,   733,   734,   739,   742,   745,   747,   749,   752,
     755,   756,   760,   764,   768,   772,   776,   780,   784,   788,
     790,   792,   794,   796,   798,   800,   802,   805,   808,   810,
     812,   815,   818,   819,   823,   827,   831,   835,   839,   843,
     847,   851,   855,   858,   861,   863,   865,   868,   871,   872,
     876,   880,   884,   888,   892,   896,   900,   904,   907,   910,
     912,   914,   918,   923,   927,   930,   933,   936,   939,   946,
     947,   951,   955,   959,   963,   967,   971,   975,   979,   983,
     985,   987,   989,   991,   993,   995,   997,   999,  1001,  1003,
    1005,  1011,  1015,  1019,  1025,  1031,  1036,  1040,  1044,  1048,
    1054,  1060,  1066,  1068,  1070,  1072,  1074,  1079,  1083,  1089,
    1094,  1095,  1098,  1102,  1106,  1110,  1118,  1123,  1130,  1133,
    1135,  1139,  1143,  1151,  1159,  1161,  1163,  1166,  1170,  1171,
    1174,  1177,  1180,  1182,  1184,  1186,  1188,  1189,  1192,  1196,
    1198,  1202,  1206,  1208,  1212,  1214,  1216,  1218,  1220,  1222,
    1224,  1226,  1228,  1230,  1232,  1234,  1236,  1238,  1242,  1244,
    1247,  1250,  1252,  1254,  1256,  1258,  1260,  1263,  1267,  1269,
    1277,  1278,  1282,  1283,  1287,  1290,  1294,  1296,  1302,  1308,
    1311,  1315,  1319,  1324,  1328,  1330,  1334,  1340,  1342,  1343,
    1345,  1347,  1348,  1351,  1354,  1359,  1364,  1368,  1370,  1376,
    1383,  1386,  1388,  1394,  1398,  1403,  1411,  1420,  1424,  1426,
    1430,  1432,  1436,  1440,  1441,  1446,  1450,  1454,  1458,  1462,
    1466,  1470,  1474,  1478,  1482,  1486,  1490,  1494,  1496,  1501,
    1507,  1509,  1513,  1515,  1519,  1523,  1525,  1529,  1533,  1537,
    1541,  1543,  1547,  1551,  1553,  1557,  1561,  1563,  1568,  1570,
    1575,  1577,  1582,  1584,  1589,  1591,  1594,  1597,  1599,  1601,
    1603,  1605,  1610,  1616,  1622,  1626,  1631,  1633,  1636,  1641,
    1643,  1646,  1648,  1651,  1654,  1656,  1658,  1662,  1666,  1668,
    1670,  1672,  1674,  1676,  1678,  1683,  1685,  1690,  1693,  1695,
    1698,  1701,  1704,  1707,  1710,  1713,  1716,  1719,  1722,  1724,
    1727,  1729,  1732,  1735,  1738,  1741,  1744,  1746,  1748,  1750,
    1752,  1754,  1756,  1758,  1760,  1762,  1767,  1769,  1771,  1773,
    1775,  1777,  1779,  1781,  1783,  1785,  1787,  1789,  1791,  1793,
    1795,  1797,  1800,  1802,  1806,  1809,  1811,  1816,  1821,  1825,
    1830,  1834,  1836,  1838,  1840,  1842,  1844,  1846,  1848,  1850,
    1856,  1867,  1869,  1871,  1872,  1880,  1888,  1889,  1891,  1895,
    1899,  1903,  1907,  1908,  1911,  1914,  1915,  1918,  1921,  1922,
    1925,  1928,  1929,  1932,  1935,  1936,  1939,  1942,  1945,  1948,
    1952,  1953,  1955,  1959,  1961,  1964,  1966,  1968,  1970,  1972,
    1974,  1976,  1981,  1985,  1987,  1991,  1994,  1998,  2002,  2004,
    2008,  2013,  2018,  2022,  2024,  2028,  2031,  2035,  2038,  2039,
    2041,  2042,  2045,  2048,  2052,  2053,  2055,  2057,  2059,  2061,
    2065,  2067,  2069,  2071,  2073,  2075,  2077,  2079,  2081,  2083,
    2085,  2087,  2089,  2091,  2095,  2099,  2104,  2109,  2113,  2117,
    2121,  2126,  2131,  2135,  2140,  2147,  2149,  2151,  2156,  2158,
    2162,  2167,  2174,  2182,  2184,  2186,  2191,  2193,  2195,  2197,
    2199,  2201,  2205,  2206,  2209,  2210,  2213,  2217,  2219,  2223,
    2225,  2230,  2232,  2235,  2237,  2239,  2242,  2245,  2249,  2251,
    2254,  2259,  2263,  2268,  2269,  2271,  2274,  2276,  2279,  2281,
    2282,  2286,  2289,  2293,  2297,  2302,  2304,  2308,  2312,  2315,
    2318,  2321,  2324,  2327,  2329,  2331,  2333,  2335,  2337,  2340,
    2344,  2346,  2348,  2350,  2352,  2354,  2356,  2358,  2360,  2363,
    2366,  2368,  2370,  2373,  2376,  2378,  2381,  2384,  2387,  2393,
    2399,  2402,  2403,  2407,  2410,  2415,  2420,  2427,  2432,  2436,
    2441,  2442,  2445,  2448,  2452,  2454,  2458,  2461,  2464,  2467,
    2469,  2472,  2476,  2480,  2484,  2488,  2492,  2499,  2506,  2511,
    2516,  2521,  2524,  2527,  2530,  2533,  2536,  2544,  2550,  2556,
    2563,  2567,  2569,  2574,  2576,  2578,  2580,  2582,  2584,  2586,
    2592,  2600,  2609,  2620,  2627,  2636,  2637,  2640,  2643,  2647,
    2648,  2651,  2653,  2657,  2659,  2661,  2663,  2667,  2675,  2679,
    2687,  2693,  2703,  2705,  2707,  2709,  2711,  2715,  2721,  2723,
    2725,  2729,  2734,  2738,  2743,  2745,  2747,  2752,  2758,  2765,
    2767,  2771,  2775,  2777,  2779,  2781,  2783,  2785,  2787,  2789,
    2791,  2793,  2795,  2797,  2799,  2801,  2803,  2805,  2807,  2809,
    2811,  2813,  2815,  2817,  2819,  2821,  2823,  2825,  2827,  2829,
    2831,  2833,  2835,  2837,  2839,  2841,  2843,  2845,  2847,  2849,
    2851,  2853,  2855,  2857,  2859,  2861,  2863,  2865,  2867,  2869,
    2871,  2873,  2875,  2877,  2879,  2881,  2883,  2885,  2887,  2889,
    2891,  2893,  2895,  2897,  2899,  2901,  2903,  2905,  2907,  2909,
    2911,  2913,  2915,  2917,  2919,  2921,  2923,  2925,  2927,  2929,
    2931,  2933,  2935,  2937,  2939,  2941,  2943,  2945,  2947,  2949,
    2951,  2953,  2955,  2957,  2959,  2961,  2963,  2965,  2967,  2969,
    2971,  2973,  2975,  2977,  2979,  2981,  2983,  2985,  2987,  2989,
    2991,  2993,  2995,  2997,  2999,  3001,  3003,  3005,  3007,  3009,
    3011,  3013,  3015,  3017,  3019,  3021,  3023,  3025,  3027,  3029,
    3031,  3033,  3035,  3037,  3039,  3041,  3043,  3045,  3047,  3049,
    3051,  3053,  3055,  3057,  3059,  3061,  3063,  3065,  3067,  3069,
    3071,  3073,  3075,  3077,  3079,  3081,  3083,  3085,  3087,  3089,
    3091,  3093,  3095,  3097,  3099,  3101,  3103,  3105,  3107,  3109,
    3111,  3113,  3115,  3117,  3119
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     326,     0,    -1,     3,   470,    -1,     4,   417,    -1,     5,
     422,    -1,     6,   426,    -1,     7,   430,    -1,     8,   333,
      -1,     9,   327,    -1,    10,   329,    -1,   181,   463,   461,
     676,   462,   466,   469,   328,    -1,    -1,   440,    -1,   330,
     331,    -1,   191,   174,   653,    39,   604,   440,    -1,    -1,
     331,   332,    -1,   181,   463,   461,   676,   462,   466,   469,
     440,    -1,   334,    -1,   250,   335,   336,   249,    -1,   356,
      -1,    -1,   335,   279,    -1,   335,   288,    -1,    -1,   336,
     337,    -1,   336,   341,    -1,   336,   346,    -1,   336,   348,
      -1,   336,   350,    -1,   336,   354,    -1,   338,   343,   359,
     249,    -1,   251,    -1,   338,   302,   407,    -1,   338,   281,
      -1,   338,   305,   340,    -1,   338,   280,   339,    -1,   338,
     303,   583,    -1,    -1,   339,   123,    -1,   339,   319,    -1,
     339,   320,    -1,    54,    -1,    55,    -1,    56,    -1,   342,
     343,   359,   249,    -1,   259,    -1,   342,   281,    -1,   342,
     303,   583,    -1,   342,   293,    -1,    -1,   343,   344,    -1,
     345,   359,   249,    -1,   258,    -1,   345,   281,    -1,   345,
     304,   471,    -1,   345,   303,   583,    -1,   345,   292,    -1,
     345,   291,    -1,   347,   359,   249,    -1,   258,    -1,   347,
     281,    -1,   347,   304,   471,    -1,   347,   303,   583,    -1,
     347,   292,    -1,   347,   291,    -1,   349,   359,   249,    -1,
     264,    -1,   349,   281,    -1,   349,   304,   471,    -1,   349,
     303,   583,    -1,   351,   249,    -1,   277,    -1,   351,   281,
      -1,   351,   311,   352,    -1,   351,   296,    -1,   351,   312,
     353,    -1,   351,   282,    -1,   351,   283,    -1,   351,   284,
      -1,   351,   297,    -1,   351,   298,    -1,   351,   299,    -1,
     351,   285,    -1,   351,   286,    -1,   351,   300,    -1,   351,
     287,    -1,   351,   301,    -1,   351,   313,   353,    -1,   351,
     279,    -1,   322,    -1,   323,    -1,   324,    -1,    64,    -1,
     123,    -1,   123,    -1,   353,   123,    -1,   355,   249,    -1,
     278,    -1,   278,   289,    -1,   278,   290,    -1,   278,   289,
     290,    -1,   278,   290,   289,    -1,   314,   357,   359,   249,
      -1,    -1,   357,   316,   358,    -1,   357,   315,    -1,    -1,
     358,   469,    -1,   358,   116,    -1,    -1,   359,   364,    -1,
     359,   356,    -1,   359,   360,    -1,   361,    -1,   363,    -1,
     365,    -1,   369,    -1,   374,    -1,   378,    -1,   376,    -1,
     387,    -1,   389,    -1,   391,    -1,   393,    -1,   395,    -1,
     397,    -1,   399,    -1,   383,    -1,   401,    -1,   403,    -1,
     405,    -1,   362,   359,   249,    -1,   252,    -1,   362,   304,
     471,    -1,   362,   307,   358,    -1,   253,   364,   249,    -1,
     317,    -1,   318,    -1,   366,   368,   249,    -1,   254,    -1,
     366,   304,   471,    -1,   366,   280,   367,    -1,   123,    -1,
     319,    -1,   321,    -1,    -1,   368,   372,    -1,   370,   371,
     249,    -1,   255,    -1,   370,   281,    -1,    -1,   371,   372,
      -1,   373,   359,   249,    -1,   256,    -1,   373,   281,    -1,
     373,   304,   471,    -1,   373,   303,   583,    -1,   373,   291,
      -1,   375,   249,    -1,   257,   304,   471,    -1,   377,   359,
     249,    -1,   263,   306,   471,    -1,   260,   379,   382,   249,
      -1,   380,    -1,   379,   380,    -1,   381,   359,   249,    -1,
     261,   306,   471,    -1,    -1,   262,   359,   249,    -1,   384,
     385,   386,   249,    -1,   271,    -1,   384,   304,   471,    -1,
     384,   309,   358,    -1,   384,   310,   358,    -1,    -1,   272,
     359,   249,    -1,    -1,   273,   359,   249,    -1,   388,   359,
     249,   359,    -1,   264,    -1,   388,   281,    -1,   388,   304,
     471,    -1,   388,   303,   583,    -1,   390,   359,   249,    -1,
     265,    -1,   390,   304,   471,    -1,   392,   359,   249,    -1,
     266,    -1,   392,   281,   358,    -1,   392,   304,   471,    -1,
     394,   359,   249,    -1,   267,    -1,   396,   359,   249,    -1,
     268,    -1,   396,   281,   358,    -1,   396,   308,   358,    -1,
     396,   304,   471,    -1,   396,   307,   358,    -1,   398,   359,
     249,    -1,   269,    -1,   398,   281,   358,    -1,   398,   304,
     471,    -1,   400,   359,   249,    -1,   270,    -1,   400,   281,
     358,    -1,   400,   308,   358,    -1,   402,   249,    -1,   274,
      -1,   402,   304,   471,    -1,   402,   294,    -1,   404,   359,
     249,    -1,   275,    -1,   404,   294,    -1,   404,   295,    -1,
     406,   359,   249,    -1,   276,    -1,   406,   304,   471,    -1,
     407,    14,   408,    -1,   408,    -1,   413,    -1,    38,    -1,
     410,    -1,    38,    -1,    32,    -1,   233,    42,   411,    43,
      -1,   234,    42,   652,    35,   412,    43,    -1,   652,    -1,
     542,    -1,   540,    -1,   542,    -1,   414,    -1,   409,   414,
      -1,   410,    38,   414,    -1,   410,    32,   414,    -1,   413,
      38,   414,    -1,   413,    32,   414,    -1,   415,   416,    -1,
     535,    -1,    72,    21,   535,    -1,    57,    21,   535,    -1,
      22,   535,    -1,    -1,   416,    23,   471,    24,    -1,   431,
     418,    -1,   431,   419,    -1,   418,    -1,   419,    -1,   420,
     470,    -1,   436,   420,    -1,    -1,   420,   421,   440,    -1,
     420,   439,   440,    -1,   420,   441,   440,    -1,   420,   443,
     440,    -1,   420,   457,   440,    -1,   420,   460,   440,    -1,
     420,   655,   440,    -1,   420,   444,   440,    -1,   442,    -1,
     451,    -1,   452,    -1,   459,    -1,   446,    -1,   447,    -1,
     448,    -1,   431,   423,    -1,   431,   424,    -1,   423,    -1,
     424,    -1,   425,   470,    -1,   436,   425,    -1,    -1,   425,
     421,   440,    -1,   425,   439,   440,    -1,   425,   441,   440,
      -1,   425,   443,   440,    -1,   425,   457,   440,    -1,   425,
     460,   440,    -1,   425,   655,   440,    -1,   425,   444,   440,
      -1,   425,   445,   440,    -1,   431,   427,    -1,   431,   428,
      -1,   427,    -1,   428,    -1,   429,   470,    -1,   436,   429,
      -1,    -1,   429,   438,   440,    -1,   429,   439,   440,    -1,
     429,   441,   440,    -1,   429,   443,   440,    -1,   429,   457,
     440,    -1,   429,   460,   440,    -1,   429,   655,   440,    -1,
     429,   444,   440,    -1,   431,   434,    -1,   431,   435,    -1,
     434,    -1,   435,    -1,   187,   432,   440,    -1,   187,   432,
     433,   440,    -1,   187,   433,   440,    -1,   188,   126,    -1,
     177,   126,    -1,   437,   470,    -1,   436,   437,    -1,   191,
     174,   653,    39,   604,   440,    -1,    -1,   437,   438,   440,
      -1,   437,   439,   440,    -1,   437,   441,   440,    -1,   437,
     443,   440,    -1,   437,   457,   440,    -1,   437,   460,   440,
      -1,   437,   655,   440,    -1,   437,   444,   440,    -1,   437,
     445,   440,    -1,   442,    -1,   451,    -1,   452,    -1,   459,
      -1,   446,    -1,   447,    -1,   639,    -1,   448,    -1,   453,
      -1,   456,    -1,    52,    -1,   181,   174,   653,    39,   604,
      -1,   181,    66,   172,    -1,   181,    66,   173,    -1,   181,
     184,   192,   174,   604,    -1,   181,   184,   461,   174,   604,
      -1,   181,   186,   675,   126,    -1,   181,    67,   622,    -1,
     181,   183,   121,    -1,   181,   183,   122,    -1,   181,   184,
     139,   143,   144,    -1,   181,   184,   139,   143,   145,    -1,
     181,   185,   449,    35,   450,    -1,   172,    -1,   178,    -1,
     179,    -1,   180,    -1,   181,   184,   146,   604,    -1,   181,
      68,   604,    -1,   189,   190,   455,   604,   454,    -1,   189,
     190,   604,   454,    -1,    -1,   115,   604,    -1,   454,    35,
     604,    -1,   174,   653,    39,    -1,   184,   192,   174,    -1,
     189,   191,   174,   653,    39,   604,   454,    -1,   189,   191,
     604,   454,    -1,   181,   127,    11,   543,   582,   458,    -1,
      12,   472,    -1,   176,    -1,   181,   182,   172,    -1,   181,
     182,   173,    -1,   181,   463,   461,   676,   462,   466,   469,
      -1,   181,   463,   461,   676,   462,   466,   176,    -1,   193,
      -1,   194,    -1,    42,    43,    -1,    42,   467,    43,    -1,
      -1,   463,   464,    -1,   463,   465,    -1,   463,   232,    -1,
     245,    -1,   246,    -1,   247,    -1,   248,    -1,    -1,   153,
     583,    -1,   467,    35,   468,    -1,   468,    -1,    11,   543,
     582,    -1,    50,   471,    51,    -1,   471,    -1,   471,    35,
     472,    -1,   472,    -1,   473,    -1,   493,    -1,   496,    -1,
     500,    -1,   640,    -1,   642,    -1,   645,    -1,   644,    -1,
     646,    -1,   501,    -1,   661,    -1,   662,    -1,   474,   132,
     472,    -1,   475,    -1,   474,   487,    -1,   474,   476,    -1,
     477,    -1,   482,    -1,   475,    -1,   485,    -1,   486,    -1,
     133,   478,    -1,   478,    35,   479,    -1,   479,    -1,    11,
     543,   582,   480,   481,   134,   472,    -1,    -1,   115,    11,
     543,    -1,    -1,   195,    11,   543,    -1,   135,   483,    -1,
     483,    35,   484,    -1,   484,    -1,    11,   543,   582,    12,
     472,    -1,   195,    11,   543,    12,   472,    -1,   136,   472,
      -1,   137,    11,   543,    -1,   139,   138,   488,    -1,   140,
     139,   138,   488,    -1,   488,    35,   489,    -1,   489,    -1,
     490,   491,   492,    -1,   490,   491,   492,   146,   604,    -1,
     472,    -1,    -1,   141,    -1,   142,    -1,    -1,   143,   144,
      -1,   143,   145,    -1,   147,   494,   149,   472,    -1,   148,
     494,   149,   472,    -1,   494,    35,   495,    -1,   495,    -1,
      11,   543,   582,   134,   472,    -1,   150,    42,   471,    43,
     497,   498,    -1,   497,   499,    -1,   499,    -1,   184,    11,
     543,   132,   472,    -1,   184,   132,   472,    -1,   151,   583,
     132,   472,    -1,   151,    11,   543,   153,   583,   132,   472,
      -1,   154,    42,   471,    43,   155,   472,   156,   472,    -1,
     501,   157,   502,    -1,   502,    -1,   502,   158,   503,    -1,
     503,    -1,   505,    39,   505,    -1,   505,    15,   505,    -1,
      -1,   505,    26,   504,   505,    -1,   505,    16,   505,    -1,
     505,    17,   505,    -1,   505,    18,   505,    -1,   505,   109,
     505,    -1,   505,   110,   505,    -1,   505,   111,   505,    -1,
     505,   112,   505,    -1,   505,   113,   505,    -1,   505,   114,
     505,    -1,   505,   171,   505,    -1,   505,    19,   505,    -1,
     505,    20,   505,    -1,   505,    -1,   506,   196,    64,   605,
      -1,   506,   196,    64,   605,   638,    -1,   506,    -1,   507,
     162,   507,    -1,   507,    -1,   507,    36,   508,    -1,   507,
      37,   508,    -1,   508,    -1,   508,    13,   509,    -1,   508,
     163,   509,    -1,   508,    71,   509,    -1,   508,   164,   509,
      -1,   509,    -1,   509,    14,   510,    -1,   509,   165,   510,
      -1,   510,    -1,   510,   166,   511,    -1,   510,   167,   511,
      -1,   511,    -1,   512,   159,   160,   583,    -1,   512,    -1,
     513,   170,   153,   583,    -1,   513,    -1,   514,   161,   153,
     580,    -1,   514,    -1,   515,   169,   153,   580,    -1,   515,
      -1,    37,   515,    -1,    36,   515,    -1,   516,    -1,   517,
      -1,   522,    -1,   518,    -1,   168,    50,   471,    51,    -1,
     168,    69,    50,   471,    51,    -1,   168,    70,    50,   471,
      51,    -1,   519,    50,    51,    -1,   519,    50,   471,    51,
      -1,   520,    -1,   519,   520,    -1,    34,   556,   675,   521,
      -1,   131,    -1,   106,   131,    -1,   523,    -1,   523,   524,
      -1,    32,   524,    -1,   524,    -1,    38,    -1,   524,    38,
     525,    -1,   524,    32,   525,    -1,   525,    -1,   526,    -1,
     538,    -1,   527,    -1,   528,    -1,   529,    -1,   527,    23,
     471,    24,    -1,   532,    -1,   528,    23,   471,    24,    -1,
     530,   535,    -1,   531,    -1,    72,    21,    -1,    73,    21,
      -1,    57,    21,    -1,    74,    21,    -1,    75,    21,    -1,
      76,    21,    -1,    77,    21,    -1,   174,    21,    -1,    22,
     535,    -1,   535,    -1,   533,   535,    -1,   534,    -1,    78,
      21,    -1,    79,    21,    -1,    80,    21,    -1,    81,    21,
      -1,    82,    21,    -1,    41,    -1,   587,    -1,   536,    -1,
     654,    -1,   537,    -1,    13,    -1,   128,    -1,   129,    -1,
     539,    -1,   538,    23,   471,    24,    -1,   669,    -1,   540,
      -1,   542,    -1,   544,    -1,   545,    -1,   548,    -1,   551,
      -1,   546,    -1,   547,    -1,   666,    -1,   541,    -1,   652,
      -1,   649,    -1,   650,    -1,   651,    -1,    11,   543,    -1,
     675,    -1,    42,   471,    43,    -1,    42,    43,    -1,    40,
      -1,   121,    50,   471,    51,    -1,   122,    50,   471,    51,
      -1,   676,    42,    43,    -1,   676,    42,   549,    43,    -1,
     549,    35,   550,    -1,   550,    -1,   472,    -1,    25,    -1,
     552,    -1,   568,    -1,   553,    -1,   564,    -1,   566,    -1,
      26,   554,   555,   556,    44,    -1,    26,   554,   555,   556,
      27,   563,    33,   554,   556,    28,    -1,   123,    -1,   124,
      -1,    -1,   555,   106,   123,   556,    45,   556,   557,    -1,
     555,   106,   124,   556,    45,   556,   558,    -1,    -1,   106,
      -1,    46,   559,    47,    -1,    48,   561,    49,    -1,    46,
     560,    47,    -1,    48,   562,    49,    -1,    -1,   559,   469,
      -1,   559,   116,    -1,    -1,   560,   469,    -1,   560,   116,
      -1,    -1,   561,   469,    -1,   561,   117,    -1,    -1,   562,
     469,    -1,   562,   117,    -1,    -1,   563,   552,    -1,   563,
     469,    -1,   563,   119,    -1,   563,   118,    -1,    30,   565,
      31,    -1,    -1,   108,    -1,    29,   130,   567,    -1,   107,
      -1,   106,   107,    -1,   569,    -1,   570,    -1,   573,    -1,
     575,    -1,   576,    -1,   577,    -1,    83,    50,   471,    51,
      -1,   192,   571,   572,    -1,   125,    -1,    50,   471,    51,
      -1,    50,    51,    -1,    50,   471,    51,    -1,    57,   574,
     572,    -1,   125,    -1,    50,   471,    51,    -1,    64,    50,
     471,    51,    -1,    58,    50,   471,    51,    -1,    61,   578,
     579,    -1,   125,    -1,    50,   471,    51,    -1,    50,    51,
      -1,    50,   471,    51,    -1,   586,   581,    -1,    -1,    25,
      -1,    -1,   153,   583,    -1,   585,   584,    -1,    65,    42,
      43,    -1,    -1,    13,    -1,    36,    -1,    25,    -1,   586,
      -1,   175,    42,    43,    -1,   587,    -1,   670,    -1,   674,
      -1,   654,    -1,   589,    -1,   597,    -1,   593,    -1,   599,
      -1,   595,    -1,   592,    -1,   591,    -1,   590,    -1,   588,
      -1,    60,    42,    43,    -1,    59,    42,    43,    -1,    59,
      42,   597,    43,    -1,    59,    42,   599,    43,    -1,    64,
      42,    43,    -1,    58,    42,    43,    -1,    61,    42,    43,
      -1,    61,    42,   653,    43,    -1,    61,    42,   126,    43,
      -1,    57,    42,    43,    -1,    57,    42,   594,    43,    -1,
      57,    42,   594,    35,   603,    43,    -1,   601,    -1,    13,
      -1,    62,    42,   596,    43,    -1,   601,    -1,   192,    42,
      43,    -1,   192,    42,   598,    43,    -1,   192,    42,   598,
      35,   603,    43,    -1,   192,    42,   598,    35,   603,    25,
      43,    -1,   602,    -1,    13,    -1,    63,    42,   600,    43,
      -1,   602,    -1,   654,    -1,   654,    -1,   654,    -1,   126,
      -1,   608,   607,   606,    -1,    -1,   197,   506,    -1,    -1,
     607,   619,    -1,   608,   242,   609,    -1,   609,    -1,   609,
     243,   610,    -1,   610,    -1,   610,    84,   134,   611,    -1,
     611,    -1,   244,   612,    -1,   612,    -1,   613,    -1,   613,
     622,    -1,   614,   617,    -1,    42,   605,    43,    -1,   615,
      -1,   540,   616,    -1,    50,   471,    51,   616,    -1,   519,
      50,    51,    -1,   519,    50,   605,    51,    -1,    -1,   209,
      -1,   209,    98,    -1,   210,    -1,   210,   214,    -1,   211,
      -1,    -1,   200,   618,   201,    -1,   212,   507,    -1,   120,
     145,   507,    -1,   120,   102,   507,    -1,   213,   507,   162,
     507,    -1,   121,    -1,   198,   507,   620,    -1,   199,   618,
     620,    -1,   202,   621,    -1,   203,   621,    -1,   115,   100,
      -1,   115,   101,    -1,    96,    97,    -1,   214,    -1,   215,
      -1,   216,    -1,   217,    -1,   218,    -1,    85,   623,    -1,
     622,    85,   623,    -1,   635,    -1,   636,    -1,   627,    -1,
     626,    -1,   624,    -1,   625,    -1,   630,    -1,   637,    -1,
     152,    88,    -1,   152,    87,    -1,   204,    -1,   205,    -1,
      89,    88,    -1,    89,    87,    -1,    92,    -1,    86,    92,
      -1,    93,   629,    -1,    93,   184,    -1,    93,    42,   629,
     628,    43,    -1,    93,    42,   184,   628,    43,    -1,    86,
      93,    -1,    -1,   628,    35,   629,    -1,   115,   604,    -1,
     115,   604,   206,   652,    -1,   115,   604,   618,   207,    -1,
     115,   604,   206,   652,   618,   207,    -1,    94,   214,   632,
     631,    -1,    86,    94,   214,    -1,    94,   214,   184,   631,
      -1,    -1,   631,   634,    -1,   115,   604,    -1,    42,   633,
      43,    -1,   652,    -1,   633,    35,   652,    -1,   165,   632,
      -1,   167,   632,    -1,   208,   652,    -1,    95,    -1,    86,
      95,    -1,   186,   675,   126,    -1,    91,    97,   509,    -1,
     181,   225,    70,    -1,   181,   225,    69,    -1,   181,   225,
     103,    -1,   641,   472,   153,   221,   231,   472,    -1,   641,
     472,   153,   229,   231,   472,    -1,   641,   472,   231,   472,
      -1,   641,   472,   224,   472,    -1,   641,   472,   223,   472,
      -1,   222,    60,    -1,   222,   227,    -1,   643,   472,    -1,
     230,    60,    -1,   230,   227,    -1,   219,   105,   160,    60,
     472,   226,   472,    -1,   219,    60,   472,   226,   472,    -1,
     228,    60,   472,   153,   472,    -1,   104,   647,   220,   472,
     132,   472,    -1,   647,    35,   648,    -1,   648,    -1,    11,
     543,    12,   472,    -1,    54,    -1,    55,    -1,    56,    -1,
     126,    -1,   675,    -1,   675,    -1,   181,   235,   237,   675,
     469,    -1,   181,   235,   237,   675,   657,   656,   469,    -1,
     181,   235,   237,   675,   658,   236,   407,   469,    -1,   181,
     235,   237,   675,   658,   236,   407,   657,   656,   469,    -1,
     181,   235,   658,   236,   407,   469,    -1,   181,   235,   658,
     236,   407,   657,   656,   469,    -1,    -1,   153,   583,    -1,
      42,    43,    -1,    42,   467,    43,    -1,    -1,   241,   659,
      -1,   660,    -1,   659,    35,   660,    -1,   123,    -1,   319,
      -1,   320,    -1,   238,   235,   675,    -1,   238,   235,   675,
     226,    42,   664,    43,    -1,   239,   240,   472,    -1,   239,
     240,   472,   226,    42,   664,    43,    -1,   239,   240,   472,
     241,   663,    -1,   239,   240,   472,   241,   663,   226,    42,
     664,    43,    -1,   675,    -1,   319,    -1,   321,    -1,   665,
      -1,   664,    35,   665,    -1,    11,   543,   582,    12,   472,
      -1,   667,    -1,   668,    -1,   676,    53,    54,    -1,   194,
     462,   582,   469,    -1,   538,    42,    43,    -1,   538,    42,
     549,    43,    -1,   671,    -1,   672,    -1,   194,    42,    13,
      43,    -1,   194,    42,    43,   153,   583,    -1,   194,    42,
     673,    43,   153,   583,    -1,   583,    -1,   673,    35,   583,
      -1,    42,   585,    43,    -1,   676,    -1,    57,    -1,    58,
      -1,    59,    -1,   192,    -1,   175,    -1,   154,    -1,    60,
      -1,    61,    -1,    62,    -1,    63,    -1,    64,    -1,   150,
      -1,    65,    -1,   194,    -1,   123,    -1,    66,    -1,    67,
      -1,    68,    -1,    69,    -1,    70,    -1,    71,    -1,    72,
      -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,    77,
      -1,    78,    -1,    79,    -1,    80,    -1,    81,    -1,    82,
      -1,    83,    -1,    84,    -1,    87,    -1,    88,    -1,    89,
      -1,    90,    -1,    92,    -1,    93,    -1,    94,    -1,    95,
      -1,    96,    -1,    97,    -1,    98,    -1,    99,    -1,   100,
      -1,   101,    -1,   102,    -1,   103,    -1,   104,    -1,   105,
      -1,   109,    -1,   110,    -1,   111,    -1,   112,    -1,   113,
      -1,   114,    -1,   115,    -1,   127,    -1,   132,    -1,   133,
      -1,   134,    -1,   135,    -1,   136,    -1,   138,    -1,   139,
      -1,   140,    -1,   141,    -1,   142,    -1,   143,    -1,   144,
      -1,   145,    -1,   146,    -1,   147,    -1,   148,    -1,   149,
      -1,   151,    -1,   153,    -1,   155,    -1,   156,    -1,   157,
      -1,   158,    -1,   159,    -1,   160,    -1,   161,    -1,   162,
      -1,   163,    -1,   164,    -1,   165,    -1,   166,    -1,   167,
      -1,   168,    -1,   169,    -1,   170,    -1,   171,    -1,   172,
      -1,   173,    -1,   174,    -1,   176,    -1,   177,    -1,   178,
      -1,   179,    -1,   180,    -1,   181,    -1,   182,    -1,   183,
      -1,   184,    -1,   185,    -1,   186,    -1,   188,    -1,   189,
      -1,   190,    -1,   193,    -1,   195,    -1,    85,    -1,    86,
      -1,   196,    -1,   197,    -1,   198,    -1,   199,    -1,   200,
      -1,   201,    -1,   202,    -1,   203,    -1,   204,    -1,   205,
      -1,   206,    -1,   207,    -1,   208,    -1,   209,    -1,   210,
      -1,   211,    -1,   212,    -1,   213,    -1,   214,    -1,   215,
      -1,   216,    -1,   217,    -1,   218,    -1,   219,    -1,   220,
      -1,   221,    -1,   222,    -1,   223,    -1,   224,    -1,   225,
      -1,   226,    -1,   227,    -1,   228,    -1,   229,    -1,   230,
      -1,   231,    -1,   232,    -1,   121,    -1,   122,    -1,   233,
      -1,   234,    -1,   235,    -1,   236,    -1,   237,    -1,   238,
      -1,   239,    -1,   240,    -1,   241,    -1,   242,    -1,   243,
      -1,   244,    -1,   245,    -1,   246,    -1,   247,    -1,   248,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   757,   757,   759,   760,   761,   762,   764,   766,   767,
     771,   777,   777,   780,   791,   829,   832,   838,   867,   897,
     900,   921,   923,   927,   934,   936,   937,   938,   939,   940,
     941,   945,   964,   968,   973,   980,   985,   990,   999,  1002,
    1008,  1013,  1020,  1020,  1020,  1023,  1036,  1040,  1047,  1052,
    1061,  1064,  1072,  1099,  1103,  1110,  1116,  1121,  1126,  1135,
    1159,  1163,  1170,  1175,  1180,  1185,  1196,  1214,  1218,  1225,
    1230,  1238,  1263,  1266,  1269,  1272,  1275,  1278,  1281,  1284,
    1287,  1290,  1293,  1296,  1299,  1302,  1305,  1308,  1311,  1314,
    1320,  1321,  1322,  1323,  1324,  1336,  1339,  1344,  1347,  1352,
    1357,  1365,  1373,  1384,  1395,  1398,  1405,  1415,  1418,  1423,
    1434,  1437,  1442,  1447,  1455,  1456,  1457,  1458,  1459,  1460,
    1461,  1462,  1463,  1464,  1465,  1466,  1467,  1468,  1469,  1470,
    1471,  1472,  1476,  1494,  1498,  1503,  1512,  1518,  1518,  1521,
    1541,  1545,  1550,  1558,  1563,  1567,  1575,  1578,  1586,  1599,
    1603,  1614,  1617,  1625,  1643,  1647,  1654,  1659,  1664,  1672,
    1678,  1686,  1694,  1701,  1715,  1719,  1733,  1742,  1750,  1753,
    1760,  1795,  1799,  1804,  1810,  1820,  1823,  1831,  1834,  1841,
    1859,  1863,  1870,  1875,  1883,  1901,  1905,  1913,  1935,  1939,
    1946,  1954,  1963,  1971,  2008,  2012,  2019,  2026,  2035,  2044,
    2071,  2075,  2082,  2094,  2120,  2124,  2131,  2141,  2153,  2157,
    2162,  2171,  2184,  2188,  2193,  2202,  2216,  2220,  2233,  2238,
    2250,  2254,  2262,  2275,  2283,  2296,  2303,  2317,  2317,  2320,
    2320,  2342,  2346,  2350,  2368,  2386,  2396,  2410,  2418,  2424,
    2430,  2436,  2448,  2451,  2465,  2466,  2467,  2468,  2472,  2475,
    2479,  2481,  2485,  2489,  2493,  2497,  2501,  2507,  2513,  2527,
    2528,  2529,  2530,  2531,  2532,  2533,  2541,  2542,  2543,  2544,
    2548,  2551,  2555,  2557,  2561,  2565,  2569,  2573,  2577,  2583,
    2589,  2593,  2604,  2605,  2606,  2607,  2611,  2614,  2618,  2620,
    2624,  2628,  2632,  2636,  2640,  2646,  2652,  2663,  2664,  2665,
    2666,  2672,  2673,  2674,  2678,  2698,  2715,  2718,  2722,  2734,
    2736,  2740,  2744,  2748,  2752,  2756,  2762,  2768,  2772,  2786,
    2787,  2788,  2789,  2790,  2791,  2792,  2793,  2797,  2797,  2800,
    2804,  2812,  2817,  2826,  2831,  2840,  2900,  2908,  2913,  2922,
    2927,  2936,  2946,  2950,  2958,  2962,  2970,  2986,  2995,  3007,
    3016,  3019,  3024,  3033,  3037,  3045,  3055,  3067,  3074,  3078,
    3086,  3091,  3101,  3105,  3111,  3111,  3114,  3118,  3127,  3130,
    3143,  3156,  3166,  3166,  3169,  3169,  3173,  3176,  3184,  3189,
    3199,  3207,  3215,  3228,  3243,  3250,  3251,  3252,  3253,  3254,
    3255,  3256,  3257,  3258,  3259,  3260,  3261,  3266,  3310,  3311,
    3324,  3331,  3331,  3334,  3334,  3334,  3339,  3346,  3350,  3354,
    3366,  3369,  3380,  3383,  3393,  3400,  3404,  3408,  3412,  3425,
    3433,  3441,  3446,  3454,  3458,  3464,  3471,  3486,  3503,  3506,
    3510,  3518,  3526,  3530,  3539,  3547,  3558,  3562,  3566,  3577,
    3584,  3589,  3597,  3601,  3609,  3613,  3621,  3629,  3638,  3643,
    3652,  3662,  3666,  3670,  3670,  3674,  3678,  3682,  3686,  3690,
    3694,  3698,  3702,  3706,  3710,  3714,  3718,  3722,  3727,  3731,
    3735,  3740,  3747,  3752,  3756,  3760,  3765,  3769,  3773,  3777,
    3781,  3786,  3790,  3794,  3799,  3803,  3807,  3812,  3816,  3821,
    3826,  3831,  3835,  3840,  3844,  3849,  3855,  3861,  3866,  3867,
    3868,  3876,  3880,  3884,  3892,  3899,  3908,  3908,  3912,  3932,
    3933,  3941,  3942,  3948,  3969,  3973,  3987,  3993,  4006,  4010,
    4010,  4014,  4015,  4024,  4025,  4031,  4032,  4041,  4053,  4064,
    4068,  4072,  4076,  4080,  4084,  4088,  4092,  4100,  4108,  4125,
    4133,  4142,  4146,  4150,  4154,  4158,  4166,  4178,  4183,  4188,
    4195,  4200,  4207,  4214,  4226,  4227,  4231,  4237,  4238,  4239,
    4240,  4241,  4242,  4243,  4244,  4245,  4249,  4249,  4252,  4252,
    4252,  4256,  4263,  4267,  4271,  4279,  4287,  4297,  4307,  4311,
    4334,  4339,  4349,  4350,  4359,  4363,  4372,  4372,  4372,  4376,
    4382,  4391,  4391,  4396,  4399,  4408,  4419,  4419,  4424,  4428,
    4435,  4439,  4450,  4453,  4458,  4469,  4472,  4476,  4490,  4493,
    4498,  4509,  4512,  4516,  4534,  4537,  4542,  4547,  4554,  4567,
    4581,  4584,  4589,  4608,  4609,  4622,  4623,  4624,  4625,  4626,
    4627,  4632,  4640,  4648,  4652,  4660,  4664,  4673,  4680,  4684,
    4692,  4700,  4708,  4715,  4725,  4732,  4736,  4744,  4755,  4758,
    4767,  4770,  4780,  4787,  4797,  4798,  4800,  4802,  4808,  4812,
    4816,  4817,  4818,  4822,  4834,  4835,  4836,  4837,  4838,  4839,
    4840,  4841,  4842,  4847,  4855,  4859,  4864,  4873,  4881,  4889,
    4893,  4897,  4905,  4909,  4913,  4921,  4922,  4930,  4938,  4943,
    4947,  4951,  4955,  4964,  4965,  4973,  4980,  4983,  4986,  4989,
    4993,  5005,  5021,  5023,  5030,  5033,  5042,  5054,  5059,  5071,
    5076,  5080,  5085,  5090,  5095,  5096,  5105,  5110,  5114,  5120,
    5124,  5132,  5137,  5147,  5150,  5154,  5158,  5162,  5166,  5174,
    5176,  5187,  5193,  5199,  5205,  5220,  5224,  5228,  5232,  5236,
    5240,  5244,  5248,  5256,  5260,  5264,  5272,  5276,  5284,  5285,
    5297,  5298,  5299,  5300,  5301,  5302,  5303,  5304,  5312,  5316,
    5320,  5324,  5333,  5337,  5345,  5349,  5359,  5363,  5367,  5371,
    5375,  5383,  5385,  5392,  5396,  5400,  5404,  5414,  5418,  5422,
    5430,  5432,  5440,  5444,  5451,  5455,  5463,  5467,  5475,  5483,
    5487,  5495,  5502,  5510,  5515,  5520,  5532,  5536,  5540,  5544,
    5548,  5554,  5554,  5559,  5565,  5565,  5570,  5574,  5584,  5592,
    5599,  5604,  5612,  5621,  5633,  5645,  5658,  5669,  5678,  5690,
    5694,  5698,  5703,  5708,  5713,  5722,  5725,  5733,  5737,  5745,
    5749,  5757,  5762,  5771,  5775,  5779,  5787,  5791,  5799,  5803,
    5807,  5811,  5819,  5823,  5827,  5835,  5840,  5850,  5863,  5863,
    5867,  5875,  5885,  5890,  5914,  5914,  5918,  5926,  5930,  5937,
    5942,  5951,  5960,  5960,  5960,  5960,  5960,  5960,  5960,  5960,
    5961,  5961,  5961,  5961,  5961,  5961,  5962,  5966,  5966,  5966,
    5966,  5966,  5966,  5966,  5966,  5966,  5966,  5967,  5967,  5967,
    5967,  5967,  5967,  5967,  5968,  5968,  5968,  5968,  5968,  5968,
    5968,  5968,  5969,  5969,  5969,  5969,  5969,  5969,  5969,  5969,
    5969,  5969,  5969,  5970,  5970,  5970,  5970,  5970,  5970,  5970,
    5970,  5970,  5970,  5970,  5970,  5971,  5971,  5971,  5971,  5971,
    5971,  5971,  5971,  5971,  5971,  5972,  5972,  5972,  5972,  5972,
    5972,  5972,  5972,  5972,  5972,  5972,  5972,  5973,  5973,  5973,
    5973,  5973,  5973,  5973,  5973,  5973,  5973,  5973,  5973,  5974,
    5974,  5974,  5974,  5974,  5974,  5974,  5974,  5974,  5975,  5975,
    5975,  5975,  5975,  5975,  5975,  5975,  5976,  5976,  5976,  5976,
    5976,  5976,  5976,  5976,  5976,  5976,  5976,  5977,  5977,  5977,
    5977,  5977,  5977,  5977,  5977,  5977,  5978,  5978,  5978,  5978,
    5978,  5978,  5978,  5978,  5978,  5978,  5979,  5979,  5979,  5979,
    5979,  5979,  5979,  5979,  5979,  5979,  5979,  5980,  5980,  5980,
    5980,  5980,  5980,  5980,  5980,  5980,  5980,  5980,  5981,  5981,
    5981,  5981,  5981,  5981,  5981
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
  "SelectLanguage", "Start_FunctionDecl", "FunctionDecl_MaybeSemicolon",
  "Start_DelayedModule", "DM_ModuleDecl", "DM_Prolog", "DM_FunctionDecl",
  "Start_XSLT", "Stylesheet_XSLT", "StylesheetAttrs_XSLT",
  "StylesheetContent_XSLT", "Template_XSLT", "TemplateAttrs_XSLT",
  "TemplateModes_XSLT", "Number_XSLT", "Function_XSLT",
  "FunctionAttrs_XSLT", "ParamList_XSLT", "Param_XSLT", "ParamAttrs_XSLT",
  "GlobalParam_XSLT", "GlobalParamAttrs_XSLT", "GlobalVariable_XSLT",
  "GlobalVariableAttrs_XSLT", "Output_XSLT", "OutputAttrs_XSLT",
  "OutputMethod_XSLT", "QNames_XSLT", "ImportSchema_XSLT",
  "ImportSchemaAttrs_XSLT", "LiteralResultElement_XSLT",
  "LiteralResultElementAttrs_XSLT", "AttrValueTemplate_XSLT",
  "SequenceConstructor_XSLT", "Instruction_XSLT", "ValueOf_XSLT",
  "ValueOfAttrs_XSLT", "Text_XSLT", "TextNode_XSLT", "ApplyTemplates_XSLT",
  "ApplyTemplatesAttrs_XSLT", "ApplyTemplatesMode_XSLT",
  "ApplyTemplatesContent_XSLT", "CallTemplate_XSLT",
  "CallTemplateAttrs_XSLT", "CallTemplateContent_XSLT", "WithParam_XSLT",
  "WithParamAttrs_XSLT", "Sequence_XSLT", "SequenceAttrs_XSLT", "If_XSLT",
  "IfAttrs_XSLT", "Choose_XSLT", "WhenList_XSLT", "When_XSLT",
  "WhenAttrs_XSLT", "Otherwise_XSLT", "AnalyzeString_XSLT",
  "AnalyzeStringAttrs_XSLT", "MatchingSubstring_XSLT",
  "NonMatchingSubstring_XSLT", "Variable_XSLT", "VariableAttrs_XSLT",
  "Comment_XSLT", "CommentAttrs_XSLT", "PI_XSLT", "PIAttrs_XSLT",
  "Document_XSLT", "DocumentAttrs_XSLT", "Attribute_XSLT",
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
     575,   576,   577,   578,   579
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   325,   326,   326,   326,   326,   326,   326,   326,   326,
     327,   328,   328,   329,   330,   331,   331,   332,   333,   334,
     334,   335,   335,   335,   336,   336,   336,   336,   336,   336,
     336,   337,   338,   338,   338,   338,   338,   338,   339,   339,
     339,   339,   340,   340,   340,   341,   342,   342,   342,   342,
     343,   343,   344,   345,   345,   345,   345,   345,   345,   346,
     347,   347,   347,   347,   347,   347,   348,   349,   349,   349,
     349,   350,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     352,   352,   352,   352,   352,   353,   353,   354,   355,   355,
     355,   355,   355,   356,   357,   357,   357,   358,   358,   358,
     359,   359,   359,   359,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   361,   362,   362,   362,   363,   364,   364,   365,
     366,   366,   366,   367,   367,   367,   368,   368,   369,   370,
     370,   371,   371,   372,   373,   373,   373,   373,   373,   374,
     375,   376,   377,   378,   379,   379,   380,   381,   382,   382,
     383,   384,   384,   384,   384,   385,   385,   386,   386,   387,
     388,   388,   388,   388,   389,   390,   390,   391,   392,   392,
     392,   393,   394,   395,   396,   396,   396,   396,   396,   397,
     398,   398,   398,   399,   400,   400,   400,   401,   402,   402,
     402,   403,   404,   404,   404,   405,   406,   406,   407,   407,
     408,   408,   408,   409,   409,   410,   410,   411,   411,   412,
     412,   413,   413,   413,   413,   413,   413,   414,   415,   415,
     415,   415,   416,   416,   417,   417,   417,   417,   418,   419,
     420,   420,   420,   420,   420,   420,   420,   420,   420,   421,
     421,   421,   421,   421,   421,   421,   422,   422,   422,   422,
     423,   424,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   426,   426,   426,   426,   427,   428,   429,   429,
     429,   429,   429,   429,   429,   429,   429,   430,   430,   430,
     430,   431,   431,   431,   432,   433,   434,   435,   436,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   438,
     438,   438,   438,   438,   438,   438,   438,   439,   439,   440,
     441,   442,   442,   443,   443,   444,   445,   446,   446,   447,
     447,   448,   449,   449,   450,   450,   451,   452,   453,   453,
     454,   454,   454,   455,   455,   456,   456,   457,   458,   458,
     459,   459,   460,   460,   461,   461,   462,   462,   463,   463,
     463,   463,   464,   464,   465,   465,   466,   466,   467,   467,
     468,   469,   470,   471,   471,   472,   472,   472,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   473,   474,   474,
     474,   475,   475,   476,   476,   476,   477,   478,   478,   479,
     480,   480,   481,   481,   482,   483,   483,   484,   484,   485,
     486,   487,   487,   488,   488,   489,   489,   490,   491,   491,
     491,   492,   492,   492,   493,   493,   494,   494,   495,   496,
     497,   497,   498,   498,   499,   499,   500,   501,   501,   502,
     502,   503,   503,   504,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   505,   505,
     505,   506,   506,   507,   507,   507,   508,   508,   508,   508,
     508,   509,   509,   509,   510,   510,   510,   511,   511,   512,
     512,   513,   513,   514,   514,   515,   515,   515,   516,   516,
     516,   517,   517,   517,   518,   518,   519,   519,   520,   521,
     521,   522,   522,   522,   522,   523,   524,   524,   524,   525,
     525,   526,   526,   527,   527,   528,   528,   529,   529,   530,
     530,   530,   530,   530,   530,   530,   530,   531,   531,   532,
     532,   533,   533,   533,   533,   533,   534,   535,   535,   536,
     536,   537,   537,   537,   538,   538,   538,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   540,   540,   541,   541,
     541,   542,   543,   544,   544,   545,   546,   547,   548,   548,
     549,   549,   550,   550,   551,   551,   552,   552,   552,   553,
     553,   554,   554,   555,   555,   555,   556,   556,   557,   557,
     558,   558,   559,   559,   559,   560,   560,   560,   561,   561,
     561,   562,   562,   562,   563,   563,   563,   563,   563,   564,
     565,   565,   566,   567,   567,   568,   568,   568,   568,   568,
     568,   569,   570,   571,   571,   572,   572,   573,   574,   574,
     575,   576,   577,   578,   578,   579,   579,   580,   581,   581,
     582,   582,   583,   583,   584,   584,   584,   584,   585,   585,
     585,   585,   585,   586,   587,   587,   587,   587,   587,   587,
     587,   587,   587,   588,   589,   589,   589,   590,   591,   592,
     592,   592,   593,   593,   593,   594,   594,   595,   596,   597,
     597,   597,   597,   598,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   606,   607,   607,   608,   608,   609,   609,
     610,   610,   611,   611,   612,   612,   613,   613,   613,   614,
     614,   615,   615,   616,   616,   616,   616,   616,   616,   617,
     617,   618,   618,   618,   618,   619,   619,   619,   619,   619,
     619,   619,   619,   620,   620,   620,   621,   621,   622,   622,
     623,   623,   623,   623,   623,   623,   623,   623,   624,   624,
     624,   624,   625,   625,   626,   626,   627,   627,   627,   627,
     627,   628,   628,   629,   629,   629,   629,   630,   630,   630,
     631,   631,   632,   632,   633,   633,   634,   634,   635,   636,
     636,   637,   638,   639,   639,   639,   640,   640,   640,   640,
     640,   641,   641,   642,   643,   643,   644,   644,   645,   646,
     647,   647,   648,   649,   650,   651,   652,   653,   654,   655,
     655,   655,   655,   655,   655,   656,   656,   657,   657,   658,
     658,   659,   659,   660,   660,   660,   661,   661,   662,   662,
     662,   662,   663,   663,   663,   664,   664,   665,   666,   666,
     667,   668,   669,   669,   670,   670,   671,   672,   672,   673,
     673,   674,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       8,     0,     1,     2,     6,     0,     2,     8,     1,     4,
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
       3,     3,     7,     7,     1,     1,     2,     3,     0,     2,
       2,     2,     1,     1,     1,     1,     0,     2,     3,     1,
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
       0,     0,   250,   272,   288,   309,     0,     0,     0,     0,
       0,   551,     0,     0,     0,   620,     0,   596,     0,     0,
     515,   575,   546,     0,   813,   814,   815,   863,   864,   865,
     869,   870,   871,   872,   873,   875,   878,   879,   880,   881,
     882,   883,   884,   885,   886,   887,   888,   889,   890,   891,
     892,   893,   894,   895,   896,   978,   979,   897,   898,   899,
     900,   901,   902,   903,   904,   905,   906,   907,   908,   909,
     910,   911,   912,   913,   914,   915,   916,   917,   918,   919,
     920,   921,  1017,  1018,   877,   816,   922,   552,   553,   923,
     924,   925,   926,   927,   928,   929,   930,   931,   932,   933,
     934,   935,   936,   937,   938,   939,   874,   940,   941,   868,
     942,   943,   944,   945,   946,   947,   948,   949,   950,   951,
     952,   953,   954,   955,   956,   957,   958,   959,   960,   961,
     867,   962,   963,   964,   965,   966,   967,   968,   969,   970,
     971,   972,   973,   974,   975,   866,   976,   876,   977,   980,
     981,   982,   983,   984,   985,   986,   987,   988,   989,   990,
     991,   992,   993,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,
    1011,  1012,  1013,  1014,  1015,  1016,  1019,  1020,  1021,  1022,
    1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,
    1033,  1034,     2,   382,   384,   385,     0,   398,   401,   402,
     386,   387,   388,   394,   448,   450,   467,   470,   472,   475,
     480,   483,   486,   488,   490,   492,   494,   497,   498,   500,
       0,   506,   499,   511,   514,   518,   519,   521,   522,   523,
       0,   528,   525,     0,   540,   538,   548,   550,   520,   554,
     557,   566,   558,   559,   560,   563,   564,   561,   562,   584,
     586,   587,   588,   585,   625,   626,   627,   628,   629,   630,
     547,   672,   664,   671,   670,   669,   666,   668,   665,   667,
     389,     0,   390,     0,   392,   391,   393,   568,   569,   570,
     567,   549,   395,   396,   565,   848,   849,   556,   818,   862,
       0,     0,     3,   246,   247,     0,   250,   250,     4,   268,
     269,     0,   272,   272,     5,   284,   285,     0,   288,   288,
       6,   309,   299,   300,   309,     0,    21,   104,     7,    18,
      20,   368,     8,     0,     9,    15,     1,   863,   864,   865,
     869,   870,   871,   872,   873,   884,   885,   886,   887,   888,
     889,   890,   891,   892,   893,   894,   895,   913,  1017,  1018,
     924,   926,   937,   938,   874,   868,   955,   961,   866,   876,
    1003,  1006,  1012,  1014,  1024,  1025,   571,   572,   862,   863,
     864,   870,   873,   866,   537,   591,   592,   593,     0,   621,
       0,   513,   597,     0,   496,   495,   574,     0,   531,     0,
       0,   638,     0,     0,     0,     0,     0,     0,     0,   643,
       0,     0,     0,     0,     0,   529,   530,   532,   533,   534,
     535,   541,   542,   543,   544,   545,     0,     0,     0,   811,
       0,     0,     0,   406,   408,     0,     0,   414,   416,     0,
       0,   437,     0,     0,     0,     0,     0,     0,   536,     0,
       0,   633,     0,     0,   650,     0,     0,   801,   802,     0,
     804,   805,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   403,   400,   404,   405,   399,     0,     0,     0,
       0,     0,     0,     0,     0,   453,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   507,   512,     0,     0,     0,     0,   527,   539,     0,
       0,     0,   803,     0,     0,     0,     0,     0,     0,     0,
     967,   974,     0,     0,     0,   259,     0,     0,   263,   264,
     265,   260,   261,   327,   328,     0,   262,     0,   248,     0,
     244,   245,   249,   967,     0,     0,     0,     0,     0,     0,
       0,     0,   270,     0,   266,   267,   271,   967,     0,     0,
       0,   319,     0,     0,   323,   324,   326,   320,   321,     0,
     322,     0,   286,   325,     0,   282,   283,   287,   297,   298,
     307,   967,     0,     0,     0,     0,     0,     0,     0,     0,
     306,     0,    24,   110,     0,     0,    13,   596,     0,   623,
     622,   619,     0,   573,   686,   682,     0,   685,   697,     0,
       0,   637,   678,     0,   674,     0,     0,     0,     0,   673,
     679,     0,     0,   817,     0,     0,   642,     0,   688,     0,
     696,   698,   677,     0,     0,     0,     0,     0,     0,     0,
     650,     0,   650,     0,     0,   650,     0,     0,     0,     0,
       0,     0,     0,     0,   694,   689,     0,   693,     0,   632,
       0,   366,     0,   379,     0,     0,     0,     0,     0,   836,
     838,   383,   397,   419,     0,     0,     0,   447,   449,   452,
     455,   456,   457,   465,   466,     0,   451,   458,   459,   460,
     461,   462,   463,   464,     0,   473,   474,   471,   476,   478,
     477,   479,   481,   482,   484,   485,     0,     0,     0,     0,
     504,     0,   517,   516,     0,     0,     0,   583,   852,   582,
       0,   581,     0,     0,     0,     0,   578,     0,   850,   305,
     304,   329,     0,   301,   303,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   829,     0,     0,     0,   251,
     252,   253,   254,   258,   255,   256,   257,   368,     0,     0,
     273,   274,   275,   276,   280,   281,   277,   278,   279,   368,
       0,   289,   290,   291,   292,   296,   293,   294,   295,   368,
     368,   310,   311,   312,   313,   317,   318,   314,   315,   316,
      22,    23,     0,   106,   107,     0,   364,   365,   371,   372,
     373,   374,   375,     0,   369,   370,     0,   368,    16,   597,
       0,   624,     0,   509,   508,     0,   683,   639,   635,     0,
     641,   675,   676,   681,   680,   644,   645,     0,   687,   695,
     640,   631,     0,   810,     0,   576,   577,   410,   407,     0,
       0,   415,     0,   436,   434,   435,     0,     0,   501,     0,
       0,     0,   690,   634,   650,     0,   367,     0,   875,   867,
     876,   651,   654,   658,   660,   663,   661,   854,   855,   662,
       0,   851,     0,     0,     0,     0,     0,     0,   420,   427,
     421,   424,   428,     0,   454,     0,     0,     0,     0,   723,
     468,   704,   707,   709,   711,   713,   714,   729,   718,   487,
     489,   491,   648,   493,   505,   524,   526,   555,     0,   853,
       0,     0,   800,   799,   798,   579,   302,     0,   331,   332,
     700,   347,     0,     0,   360,   361,   337,   338,     0,     0,
       0,     0,   342,   343,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   350,     0,   350,     0,   336,   794,   793,
     795,    19,    32,    60,    46,    67,    72,    98,    25,    50,
      26,    50,    27,   110,    28,   110,    29,     0,    30,     0,
     105,   103,   133,     0,   140,   149,     0,     0,     0,   180,
     185,   188,   192,   194,   200,   204,   171,   208,   212,   216,
     137,   138,   112,   113,   114,   110,   115,   111,   116,   146,
     117,   151,   118,     0,   120,   110,   119,   128,   175,   121,
     110,   122,   110,   123,   110,   124,   110,   125,   110,   126,
     110,   127,   110,   129,     0,   130,   110,   131,   110,     0,
       0,     0,   596,   596,   614,   589,   510,     0,   699,   636,
     646,   812,     0,     0,   412,     0,     0,     0,     0,     0,
     441,     0,   502,   503,     0,   380,   378,     0,     0,     0,
       0,   655,   657,   656,   652,     0,   807,     0,   808,     0,
       0,   843,   844,   840,   842,     0,   429,   430,   431,   422,
       0,     0,   712,     0,   724,   726,   728,   719,     0,   469,
       0,   702,     0,     0,   715,     0,   716,   649,   647,   580,
       0,     0,     0,   650,     0,     0,   346,     0,     0,     0,
     335,   829,   833,   834,   835,   830,   831,     0,     0,     0,
       0,   350,     0,   349,     0,   356,     0,     0,   764,     0,
       0,   789,     0,     0,   760,   761,     0,   748,   754,   755,
     753,   752,   756,   750,   751,   757,     0,    99,   100,    38,
      34,     0,     0,     0,   110,    47,    49,     0,   110,    61,
      65,    64,     0,     0,     0,    68,     0,     0,     0,    71,
      89,    73,    77,    78,    79,    83,    84,    86,    75,    80,
      81,    82,    85,    87,     0,     0,     0,    97,   109,   108,
       0,     0,     0,   168,   164,   110,     0,     0,   107,     0,
       0,     0,     0,   150,     0,   159,     0,   110,     0,   107,
     107,   177,   181,     0,     0,     0,     0,     0,   107,     0,
       0,     0,   107,     0,   107,   107,     0,   107,     0,     0,
     107,   107,     0,   207,   210,     0,   213,   214,     0,     0,
       0,   376,     0,     0,     0,     0,     0,   684,   809,     0,
       0,     0,   417,   418,   438,     0,     0,     0,   439,   440,
       0,     0,   691,   861,   653,   659,     0,     0,   859,     0,
     381,     0,     0,     0,   845,     0,     0,   423,     0,   425,
     717,   723,   721,     0,   725,   727,     0,   706,     0,     0,
     735,     0,     0,     0,     0,     0,   701,   705,   708,     0,
       0,     0,     0,     0,   796,   797,   308,     0,   330,   339,
     340,   333,   334,   344,   345,   341,     0,   819,   825,     0,
       0,     0,   224,   223,   863,   884,  1019,  1020,     0,   219,
       0,   222,   220,   231,   242,   238,   376,   353,   354,   348,
     351,     0,     0,   765,   770,     0,   790,   763,   762,     0,
       0,   767,   766,     0,   759,   758,     0,   788,   749,   101,
     102,    36,    33,    37,    42,    43,    44,    35,    53,    51,
     110,     0,    48,     0,    63,    62,    59,    70,    69,    66,
      93,    94,    90,    91,    92,    74,    95,    76,    88,   136,
     160,     0,   110,   165,     0,     0,   162,   134,   135,   132,
     143,   144,   145,   142,   141,   139,   154,   147,   110,   148,
     152,   161,     0,   172,   173,   174,   110,     0,   183,   182,
     110,   186,   184,   189,   190,   187,   191,   195,   197,   198,
     196,   193,   201,   202,   199,   205,   206,   203,   209,   211,
     217,   215,     0,     0,    14,     0,   596,   596,     0,   618,
     617,   616,   615,   411,     0,     0,     0,     0,     0,     0,
       0,   692,   856,     0,     0,     0,   806,   650,     0,   837,
     839,     0,   432,   433,     0,   720,   722,   792,   742,   740,
     741,   703,     0,     0,   746,   747,   738,   739,   710,     0,
       0,   731,     0,   730,     0,   359,   357,   827,     0,     0,
       0,     0,   832,   241,     0,     0,     0,     0,     0,   823,
     825,   232,     0,     0,     0,     0,   237,     0,   352,   350,
     778,   771,   771,   773,     0,     0,   780,   780,   791,    39,
      40,    41,    54,    58,    57,     0,     0,     0,    31,    45,
      96,   167,     0,   163,   166,   155,   158,     0,     0,     0,
     176,     0,   170,   179,   377,    11,   376,     0,     0,   596,
     413,   409,     0,   444,     0,   443,   446,   857,   860,     0,
       0,   846,     0,   426,   743,   744,   745,   736,   737,   733,
     732,     0,   358,   828,   826,   820,     0,   240,   239,     0,
     228,   227,     0,   218,     0,   234,   233,   236,   235,     0,
     363,   362,   355,     0,     0,     0,     0,     0,   784,   782,
     779,   777,    56,    55,    52,   169,   157,   156,   153,   178,
      10,    12,     0,   602,   608,   594,   605,   611,   595,     0,
       0,     0,   858,     0,   841,   734,   821,   825,   225,     0,
     824,     0,     0,   769,   768,   774,   775,     0,   783,     0,
       0,   781,     0,     0,     0,     0,     0,   590,     0,   442,
     847,     0,     0,   229,   230,   243,   772,     0,   785,   786,
     787,    17,   598,   604,   603,   599,   610,   609,   600,   607,
     606,   601,   613,   612,   445,   822,   226,   776
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,   332,  1630,   334,   335,   606,   818,   328,   329,
     602,   802,   968,   969,  1371,  1377,   970,   971,  1164,  1379,
    1380,   972,   973,   974,   975,   976,   977,  1395,  1397,   978,
     979,  1002,   603,   980,   805,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1413,  1212,  1010,  1011,  1214,  1417,  1418,  1012,
    1013,  1014,  1015,  1016,  1203,  1204,  1205,  1404,  1017,  1018,
    1221,  1427,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,
    1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,
    1037,  1038,  1338,  1339,  1340,  1341,  1599,  1672,  1342,  1343,
    1344,  1526,   302,   303,   304,   305,   532,   308,   309,   310,
     311,   314,   315,   316,   317,   320,   306,   527,   528,   322,
     323,   307,   325,   568,   533,   743,   534,   535,   536,   537,
     559,   538,   539,   540,   944,  1325,   541,   542,   543,  1133,
     952,   544,   545,  1506,   546,   547,   813,   454,   756,   814,
     815,  1453,   672,   673,  1199,   202,   203,   204,   205,   206,
     207,   473,   208,   433,   434,  1054,  1261,   209,   437,   438,
     474,   475,   476,   890,   891,   892,  1088,  1289,   210,   440,
     441,   211,  1059,  1268,  1060,   212,   213,   214,   215,   695,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   824,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   376,   253,
     254,   255,   256,   257,   730,   731,   258,   259,   260,   387,
     607,   393,  1635,  1638,  1663,  1665,  1664,  1666,  1256,   261,
     390,   262,   610,   263,   264,   265,   452,   621,   266,   402,
     267,   268,   269,   410,   636,   911,  1108,   675,   871,  1074,
     872,   873,   270,   271,   272,   273,   274,   275,   276,   616,
     277,   637,   278,   666,   279,   639,   617,   640,  1047,   931,
     900,  1306,  1101,   901,   902,   903,   904,   905,   906,   907,
     908,  1097,  1106,  1313,  1307,  1587,  1496,   957,  1147,  1148,
    1149,  1150,  1151,  1613,  1362,  1152,  1620,  1537,  1617,  1661,
    1153,  1154,  1155,  1099,   583,   280,   281,   282,   283,   284,
     285,   286,   428,   429,   287,   288,   289,   290,   632,   291,
     549,  1510,  1328,   948,  1125,  1126,   292,   293,  1083,  1283,
    1284,   294,   295,   296,   297,   876,   877,   878,  1279,   879,
     298,   299
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1430
static const yytype_int16 yypact[] =
{
    1058,  3475,   292,   292,   292,   292,  -141,   -48,   110,   337,
    7369, -1430,  5849,   415,   122,   258,  4903,   295,  3713,  3713,
   -1430, -1430, -1430,  2285, -1430, -1430, -1430,   290,   511,   391,
     414,   291,   427,   444,   682, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430,   495,   500,   572,   675,   685,   734,   754,   789,
     798,   803,   838,   597, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430,   645, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430,   716,   757, -1430, -1430, -1430, -1430, -1430, -1430,
     857, -1430,    95, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430,   867,   867, -1430,   864, -1430, -1430,   871,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430,   475, -1430, -1430, -1430, -1430, -1430,   859,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430,   303, -1430,   879, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430,   101, -1430, -1430,    17, -1430, -1430, -1430, -1430,
   -1430,   831, -1430,    29, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430,   680,   700, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430,   895, -1430, -1430,   641, -1430, -1430, -1430,
   -1430, -1430, -1430,   808,   785, -1430,   972,   750,    92,   144,
      62,   627, -1430,   801,   800,   823,   825, -1430, -1430, -1430,
     272, -1430, -1430,  4903,   718, -1430, -1430,   963,   979, -1430,
    5849, -1430, -1430,  5849, -1430, -1430, -1430, -1430,   289, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430,  3475, -1430,  3475, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,   390,
     283,   836, -1430, -1430, -1430,  3951,   827, -1430, -1430, -1430,
   -1430,  4189,   827, -1430, -1430, -1430, -1430,  4427,   827, -1430,
   -1430,   827, -1430, -1430, -1430,  4665, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430,   882, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,   966,
     970,   978,   984,   991, -1430, -1430, -1430, -1430,   634, -1430,
    1019,   718, -1430,  7369, -1430, -1430, -1430,   704, -1430,  6321,
    3475, -1430,  1021,  1030,  3475,    75,  1031,  7177,  3475, -1430,
    1025,  7369,  7369,  1034,  3475, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430,  3475,  7369,    39, -1430,
    3475,  3475,  7369,  1043, -1430,  7369,  1069,  1052, -1430,  7369,
      99, -1430,   102,  3475,  3475,  3475,  1039,  1040, -1430,  6557,
    3475, -1430,  1021,   199,   938,  3475,   932, -1430, -1430,  3475,
   -1430, -1430,  7369,  3475,  3475,  3475,   857,    95,  3475,  1082,
     968,   962, -1430, -1430, -1430, -1430, -1430,  3713,  3713,  3713,
    3713,  3713,  3713,  3713,  3713, -1430,  3713,  3713,  3713,  3713,
    3713,  3713,  3713,  3713,  1054,  3713,  3713,  3713,  3713,  3713,
    3713,  3713,  3713,  3713,  3713,  3713,   944,   954,   969,   973,
    2523, -1430,   718,  4903,  4903,  3475,  3475, -1430, -1430,  3475,
    1809,   306, -1430,  2047,  1073,   997,  1002,    68,  1077,  7369,
    1313,   659,  1077,  1077,  1077, -1430,  1077,  1077, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430,  1077, -1430,  1077, -1430,  1077,
   -1430, -1430,   563,  1151,  1077,  1077,  1077,  1077,  1077,  1077,
    1077,  1077, -1430,  1077, -1430, -1430,   565,  1178,  1077,  1077,
    1077, -1430,  1077,  1077, -1430, -1430, -1430, -1430, -1430,  1077,
   -1430,  1077, -1430, -1430,  1077, -1430, -1430,   606, -1430, -1430,
     615,   662,  1077,  1077,  1077,  1077,  1077,  1077,  1077,  1077,
   -1430,  1077,   252,   602,   517,  7369,   949,  1026,  1027, -1430,
   -1430, -1430,    77, -1430, -1430, -1430,   762, -1430, -1430,   329,
    2761, -1430, -1430,   339, -1430,   444,   991,  1088,  1090, -1430,
   -1430,  1092,  1093, -1430,   453,  2999, -1430,  1094, -1430,  1095,
   -1430, -1430, -1430,   462,   532,  1127,   645,  3475,   540,   559,
     938,   857,   938,  7369,    95,   938,   867,  3475,  3475,   768,
     774,   595,  3475,  3475, -1430, -1430,   777, -1430,   600, -1430,
    7369, -1430,   786, -1430,  6764,  1091,   914,  1084,   993,   921,
     211, -1430, -1430, -1430,  7369,  3475,  1011,   785, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430,  3713, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430,   501,   144,   144,   887,    62,    62,
      62,    62,   627,   627, -1430, -1430,  6764,  6764,  7369,  7369,
   -1430,   626, -1430, -1430,   539,   669,   690, -1430, -1430, -1430,
     790, -1430,   605,  3475,  3475,  3475, -1430,   817, -1430, -1430,
   -1430, -1430,  1077, -1430, -1430,  1113,   769,  1029,  1142,  7369,
     775,   833,   439,   465,  7369,   485,   517,   176,   -11, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430,   616,   659,  1071,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,   795,
     421, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,   433,
     533, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430,   331, -1430, -1430,   845, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430,  7552, -1430, -1430,  1118, -1430, -1430,   835,
     397, -1430,  1033, -1430, -1430,  7369, -1430, -1430, -1430,   635,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430,   640, -1430, -1430,
   -1430, -1430,  3475, -1430,  1035, -1430, -1430,  1050, -1430,  1146,
    1154, -1430,  1036, -1430, -1430, -1430,  1017,  1014, -1430,   643,
     644,  7369, -1430, -1430,   938,  1160, -1430,  6971,  1130,  1131,
    1132, -1430,   438, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
    3475, -1430,  3475,  3475,  3475,  1133,  1134,  1541, -1430, -1430,
    1147, -1430,   815,  3475, -1430,   501,  3475,   594,   502,   655,
    1086,   939,   943,  1103, -1430, -1430,  1071,   989, -1430, -1430,
   -1430, -1430,  1166, -1430, -1430, -1430, -1430, -1430,  3237, -1430,
     961,   967, -1430, -1430, -1430, -1430, -1430,  1029, -1430, -1430,
   -1430, -1430,  7369,  1158, -1430, -1430, -1430, -1430,  1056,  1029,
    1028,  1037, -1430, -1430,  1165,  1067,  7369,   -51,   971,  7552,
    7369,  1012,  1029,  1097,  7369,  1097,   809,  1120, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430,   673, -1430,   361,
   -1430,   261, -1430,   322, -1430,     6, -1430,  1108, -1430,   960,
     120, -1430, -1430,   658, -1430, -1430,   909,   953,   910, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430,   -93, -1430, -1430, -1430,   -80,
   -1430,   940, -1430,   975, -1430, -1430, -1430, -1430,   205, -1430,
     230, -1430,   916, -1430,   -42, -1430, -1430, -1430,   298, -1430,
      10, -1430,  -117, -1430,   160, -1430,   688, -1430,   923,   879,
    1029,   517,   295,   295, -1430, -1430, -1430,  1182, -1430, -1430,
   -1430, -1430,  3475,  1217,  1038,  3475,  3475,  3475,  5141,    11,
   -1430,  3475, -1430, -1430,   314, -1430, -1430,  1186,  1188,  1189,
    6085, -1430, -1430, -1430, -1430,   652, -1430,  1009, -1430,  1225,
    1225, -1430, -1430,  1041, -1430,  3475, -1430, -1430,  1104,  1147,
    1214,   654, -1430,   221,  1164,  1049, -1430, -1430,  1171, -1430,
     501,   374,   501,  1135,  1120,    52, -1430, -1430, -1430, -1430,
    3475,  3475,  1077,   938,  1029,   852, -1430,  1029,  1029,   821,
   -1430,    51, -1430, -1430, -1430,  1235, -1430,  5377,   879,  1233,
    1099,  1097,  1029,  1239,  1236,  1239,   745,   918, -1430,    50,
    1062, -1430,   928,  7369, -1430, -1430,  1153, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430,   809,   996,  1000, -1430,
   -1430,  5377,  6764,   873,  1046, -1430, -1430,  6764,  1046, -1430,
   -1430, -1430,  6764,  3475,  7553, -1430,  6764,  3475,  7581, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430,    -4,  1168,  1168, -1430, -1430, -1430,
    1044,  3475,   986,   761, -1430, -1430,  3475,  3475, -1430,  7609,
     -35,  3475,   332, -1430,   425, -1430,  7637, -1430,  3475, -1430,
   -1430,  1022, -1430,  6764,  3475,  7665,  3475,  7693, -1430,  3475,
    7721,  7749, -1430,  3475, -1430, -1430,  7777, -1430,  3475,  7805,
   -1430, -1430,  7833, -1430, -1430,  3475, -1430, -1430,  7861,  3475,
    7889,  1141,  1077,  7552,  1251,  1252,   536, -1430, -1430,  7369,
    1287,  1167, -1430, -1430, -1430,  7369,  1174,    93, -1430, -1430,
    1152,  1264, -1430, -1430, -1430, -1430,  1266,  1157, -1430,   834,
   -1430,  3475,  7369,   840, -1430,   846,  1269, -1430,   880,  1169,
   -1430,   655, -1430,  1261, -1430, -1430,  3713,   943,  1216,   931,
   -1430,  3713,  3713,    52,   811,   811, -1430, -1430,  1103,   501,
     148,  3713,  3713,  1115, -1430, -1430, -1430,    61, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430,   351, -1430,  1161,  1081,
     -51,  5849, -1430,   985,   159,  1297,  1278,  1280,   301, -1430,
    5613,   719,   776, -1430, -1430, -1430,  1141, -1430, -1430,  1239,
   -1430,  1029,  1029, -1430, -1430,  1109, -1430, -1430, -1430,    54,
    1029, -1430, -1430,   116, -1430, -1430,  1198, -1430, -1430, -1430,
   -1430,   -21,  1312, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
     409,  7917, -1430,  7945, -1430,   895, -1430, -1430,   895, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430,  1204,  1204, -1430,
     895,  3475, -1430, -1430,  1079,  7973,   895,   895,   120, -1430,
   -1430, -1430, -1430, -1430,   895, -1430, -1430, -1430,   203, -1430,
   -1430, -1430,  8001,   895,   120,   120, -1430,  1080, -1430,   895,
   -1430,   895, -1430,   120,   895, -1430, -1430,   120,   895,   120,
     120, -1430,   120,   895, -1430,   120,   120, -1430,   895, -1430,
     895, -1430,  6764,  1091, -1430,   879,   295,   295,   415, -1430,
   -1430, -1430, -1430, -1430,  7369,  3475,  1179,  3475,  7369,  3475,
    3475, -1430, -1430,  6764,  6764,  1185, -1430,   938,  1225, -1430,
   -1430,  1225, -1430, -1430,  1029, -1430, -1430,    62, -1430, -1430,
   -1430, -1430,    89,   723, -1430, -1430, -1430, -1430, -1430,  3713,
    3713,   887,   123, -1430,  3475, -1430, -1430, -1430,   847,  6764,
    1091,  5377, -1430, -1430,  5849,  5849,    96,  1153,  5377, -1430,
    1161, -1430,  5613,  5613,  5613,  5613,  1308,    45, -1430,  1097,
   -1430, -1430, -1430,   115,  1153,  1029, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430,  6764,  3475,  8029, -1430, -1430,
   -1430,   895,  8057, -1430, -1430, -1430, -1430,  6764,  3475,  8085,
   -1430,  8113, -1430,  1539, -1430,  1077,  1141,   574,   736,   295,
   -1430, -1430,  6764, -1430,  1207, -1430, -1430, -1430, -1430,  6764,
    1328, -1430,   849, -1430, -1430, -1430, -1430, -1430, -1430,   887,
     887,  3713, -1430, -1430, -1430, -1430,   301, -1430, -1430,  1298,
   -1430, -1430,  1307, -1430,  1091, -1430, -1430, -1430, -1430,  3475,
   -1430, -1430,  1239,   853,   876,  1153,  1136,   877, -1430, -1430,
     663,   663, -1430,   895, -1430, -1430, -1430,   895, -1430, -1430,
   -1430, -1430,  1091, -1430, -1430, -1430, -1430, -1430, -1430,  1318,
    1215,  3475, -1430,  3475, -1430,   887, -1430,  1161, -1430,   121,
   -1430,   707,  1238, -1430, -1430,    52, -1430,  1153, -1430,    88,
      88, -1430,  1077,   137,   232,   266,   349, -1430,  3475, -1430,
   -1430,  1091,  1305, -1430, -1430, -1430, -1430,  1143, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,   380, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,   158, -1430,
   -1430,  1349, -1430,  -449,  -834, -1430, -1430, -1430, -1430,   373,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430,   145, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430,   162, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1132,  -152, -1430, -1430, -1430, -1430, -1430, -1228,
   -1430, -1430, -1430,  1061,  1063,  1066,  -243, -1430,  1064,  1065,
    1055, -1430,  1057,  1070,  1051, -1430,   929, -1430,   855,  1053,
    1059,    34,  1060,  -273,  -212,  -514,  -203,  -231,  -201,  -194,
    -264,  -214,  -190,  -177, -1430, -1430,  -132,  -112, -1430,  -942,
   -1430, -1430,  -143, -1430,  -105,   -85,  -699, -1007,  -314, -1430,
   -1430, -1277,    59,   537,  -611,   348,   -23,  -185, -1430, -1430,
    1194, -1430, -1430, -1430,   760, -1430, -1430, -1430, -1430,   747,
   -1430, -1430, -1430,   519,   330, -1430, -1430, -1430, -1430,  1310,
     766, -1430, -1430, -1430,   357, -1430, -1430,   941,   950, -1430,
    -337,   126,  -496,   541,  -474,   544,   534, -1430, -1430, -1430,
    1024, -1430, -1430, -1430,  -688,  -218, -1430, -1430, -1430,    55,
     535, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
     -10, -1430, -1430, -1430, -1430,  -698, -1430, -1426,  -424, -1430,
   -1430, -1430, -1430, -1430,   894,   512, -1430,   173, -1430,   -27,
   -1430,  -603, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430,   980, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430,   714, -1430,  -645,  -500, -1430,
     567,   340,  -538, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430,  1032, -1430,  1042, -1430,  1048,   987,   577,  -591,
    -820, -1430, -1430, -1430,   335,   341,   130,   545, -1430, -1430,
   -1430,   150, -1430, -1267, -1430,   -49,   140,   542,   293, -1430,
   -1430, -1430, -1430,   -86, -1308, -1430,   -87,  -590, -1430, -1430,
   -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
   -1430, -1430, -1430,   805, -1430, -1430, -1430, -1098,  -508,  -349,
     -68, -1429, -1272,   333, -1430,   125, -1430, -1430, -1430, -1046,
     -26, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430, -1430,
      -1,    18
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -369
static const yytype_int16 yytable[] =
{
     397,   707,   384,   645,   820,   847,   899,   849,   650,   377,
     852,   652,   511,  1135,   744,   655,   898,   604,   759,   760,
     761,   745,   762,   763,   708,   709,   710,   711,   378,  1372,
     378,   764,  1251,   765,  1285,   766,  1493,   313,   319,   324,
     770,   771,   772,   773,   774,   775,   776,   777,  1367,   778,
     618,  1532,   592,   941,   781,   782,   783,   949,   784,   785,
    1390,   597,   618,   641,   881,   786,  1520,   787,   554,  1527,
     788,   391,  1122,  1504,   646,  1090,   502,   457,   791,   792,
     793,   794,   795,   796,   797,   798,   571,   799,  1410,   460,
    1600,  1604,  1359,  1326,   571,   880,   521,   816,   522,   555,
     641,   880,  1539,   574,  1468,   569,   435,    10,   556,   326,
     557,   574,  1521,   593,   570,   930,   572,   558,   624,  1391,
     741,  1346,   594,   573,   595,   495,   496,   575,   495,   496,
    1534,   596,    10,   331,   656,   575,   874,   656,   625,  1174,
     576,  1178,   689,   690,   691,   692,   693,   694,   576,   696,
     697,   698,   699,   700,   701,   702,   703,   498,  1534,   495,
     496,   455,  1058,   954,  1240,  1360,   953,   955,   560,  1360,
     880,  1209,  1310,   327,   579,    24,    25,    26,   874,   874,
    1514,  1216,   598,   822,  1682,   577,  1225,   880,  1227,  1349,
    1230,  1241,  1231,   577,  1236,  1267,  1239,   899,  1242,   899,
    1210,   399,  1248,  1535,  1250,   578,   456,   898,   823,   898,
     670,  1207,   580,   578,  1208,   499,   909,   910,  1671,  1065,
     580,  1610,    85,  1674,  1211,  1469,   561,   503,   926,   850,
     517,  1535,   581,   518,  1361,  1310,  1198,  1505,  1531,  1228,
     599,   933,   671,   563,   458,   525,   864,    85,   657,   584,
    1499,   658,   388,  1683,   497,    17,   461,   601,   378,   647,
     888,   378,  1229,   895,  1311,  1312,  1616,   626,  1123,  1124,
     676,   896,  1292,  1293,   678,    24,    25,    26,   680,   681,
     682,  1685,   880,   683,  1411,  1591,  1412,  1175,   512,  1632,
     436,  1237,   947,  1500,  1605,  1606,  1607,  1608,  1540,  1541,
    1536,   333,   930,  1584,  1585,  1586,    17,   500,   501,  1176,
    1177,   398,   519,  1688,  1238,  1518,   880,   592,  1392,  1393,
    1394,  1615,   510,   554,  1647,   875,   597,  1311,  1312,   874,
    1381,   520,   399,   407,  1383,   729,  1112,   336,   729,  1271,
     400,   408,  1253,  1326,  1676,   449,   313,    85,  1116,  1686,
     950,   880,   319,   450,   555,   324,   571,  1272,   894,   571,
     951,  1131,   670,   556,   464,   557,   389,   875,   875,   875,
     875,  1405,   558,   574,   464,   569,   574,   619,   593,  1596,
     827,   623,  1689,  1422,   570,   634,   572,   594,  1677,   595,
     830,   643,   612,   573,  1507,   899,   596,   575,  1691,   880,
     575,   392,   899,   644,   899,   898,   633,   648,   649,  1243,
     576,   378,   898,   576,   898,   401,   409,   378,  1601,  1602,
     659,   660,   661,   560,  1044,   378,   377,   668,   451,   378,
     378,   377,   523,   405,   377,  1582,  1618,   886,   377,  1254,
    1255,  1045,  1129,   524,   579,   378,  1134,   598,  1566,  1252,
     378,  1071,   887,   378,  1244,   577,   406,   378,   577,   732,
     525,   679,   844,  1072,  1245,   897,  1692,   378,  1317,   411,
    1298,   526,   854,   855,  1073,   578,  1048,  1217,   578,   300,
     378,   561,   580,   301,  1555,   580,   412,   721,   464,  1299,
     958,   959,   724,   725,  1556,  1300,   726,   464,   563,   746,
     889,   747,   581,  1041,   835,   599,  1557,  1558,  1113,  1218,
    1327,  1222,  1048,   840,  1219,  1220,   415,  1655,   875,   584,
     874,   416,   601,  1318,   960,   445,  1321,  1322,   633,   733,
     734,   800,   874,  1223,  1224,    17,    17,   735,   385,   386,
     801,  1350,  1165,   895,   446,   447,  1547,   378,   922,   923,
     924,   896,  1093,   403,  1166,    24,    25,    26,  1266,  1678,
     748,   404,    13,   915,  1167,    14,    15,   464,  1552,  1458,
    1278,  1301,  1302,  1303,   464,   464,  1304,  1305,   938,  1232,
     961,  1415,   962,   841,  1559,   939,   880,  1612,  1416,   963,
     964,   845,  1561,   417,   464,   965,  1563,   829,  1316,   746,
     769,   747,  1233,  1169,   633,  1234,  1235,   749,   966,   967,
     846,   899,   837,  1170,  1171,   750,   751,   752,   753,   754,
    1633,   898,  1634,   378,   874,  1172,  1173,    85,    17,   874,
     464,   940,   806,   807,   874,   464,   895,   942,   874,   859,
     860,  1159,  1160,   943,   896,  1461,   858,   426,    24,    25,
      26,   863,   377,   548,  1459,  1460,   427,  1051,   780,   562,
     748,   464,  1373,  1161,  1162,   582,  1163,  1382,   755,   377,
     464,   378,  1384,   600,  1419,   464,  1387,   914,   464,   464,
     511,  1416,   746,   377,   747,   874,  1049,   464,   378,   464,
    1542,  1050,   378,   916,  1062,  1063,   418,  1076,  1077,  1078,
    1543,  1544,   378,  1280,   464,  1291,   419,   749,   889,   875,
     806,   807,  1545,  1546,   917,   750,   751,   752,   753,   754,
      85,   875,   946,  1428,   413,   464,   947,  1519,   746,   769,
     747,  1675,   414,   729,   378,   378,   378,   378,  1454,   464,
     608,   609,   464,   748,   767,   897,   779,   613,   633,   808,
     513,  1522,   768,   945,   768,   420,   514,  1523,   780,  1408,
    1528,  1529,   809,   810,   811,   812,   430,   378,   755,  1533,
    1424,  1425,   378,   465,   466,   421,   467,   468,   469,  1433,
     470,   471,  1636,  1437,  1637,  1439,  1440,   789,  1442,   748,
     749,  1445,  1446,   504,   505,   768,   790,   825,   750,   751,
     752,   753,   754,   464,   768,   826,  1492,   431,  1524,   464,
     422,   856,   861,   875,  1525,  1501,  1502,   857,   875,   423,
     862,   865,  1487,   875,   424,   918,   920,   875,  1659,   866,
    1660,  1039,  1580,   919,   921,  1463,   749,  1353,  1354,  1355,
    1356,  1466,  1565,   378,   750,   751,   752,   753,   754,   757,
     758,   755,   918,  1567,  1568,  -368,  -368,  1075,  1477,   425,
     925,   746,   769,   747,  1094,  1095,  1096,  1258,   432,  1474,
    1262,  1263,  1264,  1091,   875,  1478,  1270,  1475,   439,   378,
     448,  1478,   865,  1479,  1478,   378,  1084,   780,  1652,  1480,
    1593,   459,  1644,  1583,  -368,  1136,  1653,   755,  1137,  1595,
     889,  1138,  1139,  1140,  1141,   378,   443,  -368,  -368,  -368,
    -368,  1652,  1657,   444,   874,   462,  1611,   803,   804,  1654,
    1658,   453,   748,   495,   496,  1314,  1315,  1374,  1375,  1376,
     464,   377,   312,   318,   321,   874,   874,  1584,  1585,  1586,
     463,   928,   929,   478,  1619,  1121,   494,   934,   935,   633,
     378,  1673,  1564,   633,   936,   937,  1086,  1087,  1042,  1043,
     506,  1142,  1157,  1158,   378,   477,  1639,  1128,   378,   749,
     507,   874,   378,  1577,  1578,  1000,  1001,   750,   751,   752,
     753,   754,  1246,  1247,   508,  1646,   515,   479,   480,   481,
     482,   483,   484,  1650,   509,  1143,  1319,  1320,   485,  -221,
    1323,  1324,   516,  1589,  1590,  1357,  1358,   874,   399,  1594,
     529,   486,   403,  1144,  1145,  1364,  1365,  1146,   301,   874,
     407,  1662,  1202,  1402,  1482,  1483,   413,  -221,  1494,  1495,
     755,  1489,  1490,   449,   874,  -221,   705,   706,   714,   715,
    1570,   874,   394,   395,  1574,  1622,   712,   713,   722,   723,
     611,  1631,  1684,  1687,  1690,  1693,   605,  1626,   912,   912,
    1695,     1,     2,     3,     4,     5,     6,     7,     8,  1679,
    1680,   620,  1640,   622,   629,   635,   378,   642,   651,  1642,
     653,   487,   488,   489,   490,   491,   492,   654,   378,   662,
     663,   674,   677,   684,   981,  1645,  1476,   982,   983,   984,
     985,   686,   986,   875,   716,   987,   685,   717,   988,   989,
     990,   991,   992,   993,   994,   995,   996,  1345,   704,   997,
     998,   999,   718,   739,   875,   875,   719,   738,   740,   741,
     817,   831,   819,   832,   821,   833,   834,   838,   839,   842,
     882,   880,  1366,   493,   883,   378,   884,   885,  1681,   893,
    1385,  1345,   927,   932,  1388,   930,   956,  1040,  1055,   327,
     875,   378,  1000,  1001,  1046,  1053,  1056,  1052,  1058,  1061,
    1057,   670,  1068,  1069,  1070,  1079,  1080,  1098,  1400,   378,
     378,  1100,  1085,  1406,  1407,   378,  1102,  1103,  1414,  1105,
     378,  1107,  1110,  1120,   378,  1423,   875,  1114,  1111,  1115,
    1119,  1429,  1117,  1431,  1130,  1156,  1434,  1127,   875,  1197,
    1438,  1118,  1132,  1201,  1202,  1443,  1206,   746,   769,   747,
    1226,  1213,  1448,   875,  1215,  1257,  1450,  1249,  1259,  1273,
     875,  1274,  1275,  1260,  -221,  1281,  1282,  -221,  -221,  -221,
    -221,   378,  -221,  -221,   746,  -221,   747,  1288,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  1290,   377,  -221,
    -221,  -221,  1294,  1295,   377,  -221,  -221,  1286,  1296,  1309,
    1330,  1455,  1347,  1348,  1351,  1352,  1363,   378,   748,    85,
    1571,   377,  1573,   378,  1575,  1576,  1369,  -221,  -221,  1370,
    -221,  1396,  1401,  1399,  1452,  1426,  1456,  1457,  1464,  -221,
     378,  1465,  -221,  -221,  1378,   748,  1467,  1471,  1470,  1472,
    1473,  1481,  1486,  1488,  1509,  1484,  1503,  1511,  1515,  1592,
    1516,  1513,  1517,  1530,  1538,   749,  1518,  1550,  1553,  1562,
    1345,  1609,  1572,   750,   751,   752,   753,   754,  1579,  1641,
    1643,  1648,  1649,  1656,  -368,  -368,  1667,  1668,  1696,   378,
    1697,  1168,   749,  1360,  1398,   330,  1200,  1179,   378,  1420,
     750,   751,   752,   753,   754,  1403,  1603,   550,   566,   551,
     587,  -368,  -368,   552,   588,   585,   564,   565,  1551,   746,
     589,   747,   742,  -368,   590,  1508,   755,  1180,   586,  1181,
    1182,  1183,  1184,  1185,  1186,  1187,  -368,  -368,  -368,  -368,
     472,   851,  1066,   780,  1188,  1189,  1190,  1191,  1192,  1193,
    -368,   848,  1089,   755,   442,  1287,  1269,   737,   687,  1194,
    1195,  1196,   853,  -368,  -368,  -368,  -368,  1491,   688,  1462,
    1109,  1569,   669,   913,  1067,  1297,   667,   627,  1064,  1498,
     748,  1485,  1092,  1308,  1588,  1497,  1614,   628,  1104,  1368,
    1621,   843,  1581,     0,  1329,  1512,  1669,     0,  1670,   638,
       0,     0,     0,   377,     0,     0,     0,   377,     0,     0,
     378,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   378,  1694,     0,     0,   378,   749,     0,     0,
       0,   378,   378,     0,     0,   750,   751,   752,   753,   754,
       0,  1345,     0,     0,  1597,  1598,  -368,  -368,  1345,     0,
       0,     0,  1345,  1345,  1345,  1345,     0,     0,     0,     0,
       0,     0,     0,  1623,     0,     0,     0,   378,     0,   378,
       0,     0,   378,   378,     0,  1627,   378,     0,     0,     0,
     378,   378,   378,   378,     0,  -368,     0,     0,   755,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -368,  -368,
    -368,  -368,     0,   378,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   378,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1651,     0,     0,     0,
     378,     0,     0,     0,     0,     0,     0,   378,   337,   338,
     339,   340,   341,   342,   343,   344,    35,    36,    37,    38,
      39,    40,    41,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,    54,    55,    56,    57,    58,
      59,    60,     0,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,   357,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,   358,   359,    84,     0,     0,     0,    86,     0,
       0,     0,     0,    89,   360,    91,   361,    93,     0,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   362,   363,
     105,   364,   107,     0,   108,   365,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   366,
     124,   125,   126,   127,   128,   367,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,     0,   142,
     143,   144,     0,   368,   146,   369,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     370,   173,   174,   371,   176,   177,   178,   179,   180,   372,
     182,   373,   184,   185,   186,   187,   188,   189,   190,   374,
     375,   193,   194,   195,   196,   197,   198,   199,   200,   201,
       0,   982,   983,   984,   985,     0,   986,     0,     0,   987,
       0,     0,   988,   989,   990,   991,   992,   993,   994,   995,
     996,     0,     0,   997,   998,   999,     0,     0,     0,     0,
      10,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,    12,     0,     0,   727,    13,     0,     0,    14,    15,
       0,    16,     0,    17,     0,    18,    19,    20,     0,    21,
      22,    23,   728,   327,     0,     0,  1000,  1001,     0,     0,
    1081,     0,  1082,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       0,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,     0,     0,     0,     0,     0,
      82,    83,    84,     0,     0,    85,    86,    87,    88,     0,
       0,    89,    90,    91,    92,    93,     0,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,     0,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,     0,   142,   143,   144,
       0,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,    10,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,    12,
       0,     0,   727,    13,     0,     0,    14,    15,     0,    16,
       0,    17,     0,    18,    19,    20,     0,    21,    22,    23,
     736,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,    82,    83,
      84,     0,     0,    85,    86,    87,    88,     0,     0,    89,
      90,    91,    92,    93,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,     0,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,     0,   142,   143,   144,     0,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,    10,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,    12,     0,     0,
       0,    13,     0,     0,    14,    15,     0,    16,     0,    17,
       0,    18,    19,    20,     0,    21,    22,    23,   396,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,     0,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,     0,     0,     0,     0,     0,    82,    83,    84,     0,
       0,    85,    86,    87,    88,     0,     0,    89,    90,    91,
      92,    93,     0,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,     0,   142,   143,   144,     0,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,    10,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,    12,     0,     0,     0,    13,
       0,     0,    14,    15,     0,    16,     0,    17,     0,    18,
      19,    20,     0,    21,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,   720,     0,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,     0,
       0,     0,     0,     0,    82,    83,    84,     0,     0,    85,
      86,    87,    88,     0,     0,    89,    90,    91,    92,    93,
       0,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
       0,   142,   143,   144,     0,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,    10,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,    12,     0,     0,     0,    13,     0,     0,
      14,    15,     0,    16,     0,    17,     0,    18,    19,    20,
       0,    21,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,   828,     0,     0,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,     0,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,    82,    83,    84,     0,     0,    85,    86,    87,
      88,     0,     0,    89,    90,    91,    92,    93,     0,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,     0,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,     0,   142,
     143,   144,     0,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
      10,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,    12,     0,     0,     0,    13,     0,     0,    14,    15,
       0,    16,     0,    17,     0,    18,    19,    20,     0,    21,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
     836,     0,     0,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       0,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,     0,     0,     0,     0,     0,
      82,    83,    84,     0,     0,    85,    86,    87,    88,     0,
       0,    89,    90,    91,    92,    93,     0,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,     0,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,     0,   142,   143,   144,
       0,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,    10,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,    12,
       0,     0,   727,    13,     0,     0,    14,    15,     0,    16,
       0,    17,     0,    18,    19,    20,     0,    21,    22,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,    82,    83,
      84,     0,     0,    85,    86,    87,    88,     0,     0,    89,
      90,    91,    92,    93,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,     0,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,     0,   142,   143,   144,     0,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,    10,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,    12,     0,     0,
       0,    13,     0,     0,    14,    15,     0,    16,     0,    17,
       0,    18,    19,    20,     0,    21,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,     0,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,     0,     0,     0,     0,     0,    82,    83,    84,     0,
       0,    85,    86,    87,    88,     0,     0,    89,    90,    91,
      92,    93,     0,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,     0,   142,   143,   144,     0,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,    10,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,    12,     0,     0,     0,    13,
       0,     0,    14,    15,     0,    16,     0,    17,     0,    18,
      19,    20,     0,    21,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,   357,    74,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,     0,
       0,     0,     0,     0,    82,    83,    84,     0,     0,    85,
      86,    87,    88,     0,     0,    89,   360,    91,   361,    93,
       0,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     362,   363,   105,   364,   107,     0,   108,   365,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
       0,   142,   143,   144,     0,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   370,   173,   174,   371,   176,   177,   178,   179,
     180,   372,   182,   373,   184,   185,   186,   187,   188,   189,
     190,   374,   375,   193,   194,   195,   196,   197,   198,   199,
     200,   201,    10,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,    12,     0,     0,     0,    13,     0,     0,
      14,    15,     0,    16,     0,    17,     0,    18,    19,    20,
       0,    21,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,     0,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,    82,    83,    84,     0,     0,    85,    86,    87,
      88,     0,     0,    89,    90,    91,    92,    93,     0,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,     0,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   530,   137,   138,   139,   140,   141,     0,   142,
     531,   144,     0,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
      10,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,    12,     0,     0,     0,    13,     0,     0,    14,    15,
       0,    16,     0,    17,     0,    18,    19,    20,     0,    21,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       0,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,     0,     0,     0,     0,     0,
      82,    83,    84,     0,     0,    85,    86,    87,    88,     0,
       0,    89,    90,    91,    92,    93,     0,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,     0,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     553,   137,   138,   139,   140,   141,     0,   142,   531,   144,
       0,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,    10,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,    12,
       0,     0,     0,    13,     0,     0,    14,    15,     0,    16,
       0,    17,     0,    18,    19,    20,     0,    21,    22,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,    82,    83,
      84,     0,     0,    85,    86,    87,    88,     0,     0,    89,
      90,    91,    92,    93,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,     0,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   567,   137,
     138,   139,   140,   141,     0,   142,   531,   144,     0,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,    10,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,    12,     0,     0,
       0,    13,     0,     0,    14,    15,     0,    16,     0,    17,
       0,    18,    19,    20,     0,    21,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,     0,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,     0,     0,     0,     0,     0,    82,    83,    84,     0,
       0,    85,    86,    87,    88,     0,     0,    89,    90,    91,
      92,    93,     0,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   591,   137,   138,   139,
     140,   141,     0,   142,   531,   144,     0,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,    10,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,    12,     0,     0,     0,    13,
       0,     0,    14,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,   357,    74,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,     0,
       0,     0,     0,     0,    82,    83,    84,     0,     0,    85,
      86,    87,    88,     0,     0,    89,   360,    91,   361,    93,
       0,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     362,   363,   105,   364,   107,     0,   108,   365,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   366,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
       0,   142,   143,   144,     0,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   370,   173,   174,   371,   176,   177,   178,   179,
     180,   372,   182,   373,   184,   185,   186,   187,   188,   189,
     190,   374,   375,   193,   194,   195,   196,   197,   198,   199,
     200,   201,  1265,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   867,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   379,   380,
      29,    30,   381,    32,    33,   382,   868,    36,    37,    38,
      39,    40,    41,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,    54,    55,    56,    57,    58,
      59,    60,     0,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,   357,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,   358,   359,    84,     0,     0,     0,    86,     0,
       0,     0,     0,    89,   360,    91,   361,    93,     0,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   362,   363,
     105,   364,   107,     0,   108,   365,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   366,
     124,   125,   126,   127,   128,   367,   869,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,     0,   142,
     143,   144,     0,   383,   146,   870,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     370,   173,   174,   371,   176,   177,   178,   179,   180,   372,
     182,   373,   184,   185,   186,   187,   188,   189,   190,   374,
     375,   193,   194,   195,   196,   197,   198,   199,   200,   201,
      11,     0,     0,     0,     0,     0,     0,     0,     0,  1331,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1332,
       0,     0,     0,     0,     0,  1333,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1334,   380,    29,    30,   381,    32,
      33,   382,    35,    36,    37,    38,    39,    40,    41,  1335,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,    54,    55,    56,    57,    58,    59,    60,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   357,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,   358,   359,
      84,     0,     0,     0,    86,    87,    88,     0,     0,    89,
     360,    91,   361,    93,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   362,   363,   105,   364,   107,     0,
     108,   365,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   366,   124,   125,   126,   127,
     128,   367,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,     0,   142,   143,   144,     0,   383,
     146,   369,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   370,   173,   174,   371,
     176,   177,   178,   179,   180,   372,   182,   373,   184,   185,
    1336,  1337,   188,   189,   190,   374,   375,   193,   194,   195,
     196,   197,   198,   199,   200,   201,    11,     0,     0,     0,
       0,     0,     0,     0,     0,  1331,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1334,   380,    29,    30,   381,    32,    33,   382,    35,    36,
      37,    38,    39,    40,    41,  1335,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,    54,    55,    56,
      57,    58,    59,    60,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,   357,    74,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,     0,
       0,     0,     0,     0,   358,   359,    84,     0,     0,     0,
      86,    87,    88,     0,     0,    89,   360,    91,   361,    93,
       0,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     362,   363,   105,   364,   107,     0,   108,   365,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   366,   124,   125,   126,   127,   128,   367,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
       0,   142,   143,   144,     0,   383,   146,   369,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   370,   173,   174,   371,   176,   177,   178,   179,
     180,   372,   182,   373,   184,   185,   186,   187,   188,   189,
     190,   374,   375,   193,   194,   195,   196,   197,   198,   199,
     200,   201,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   379,   380,    29,    30,
     381,    32,    33,   382,    35,    36,    37,    38,    39,    40,
      41,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,    54,    55,    56,    57,    58,    59,    60,
       0,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,   357,    74,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,     0,     0,     0,     0,     0,
     358,   359,    84,     0,     0,     0,    86,    87,    88,     0,
       0,    89,   360,    91,   361,    93,     0,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   362,   363,   105,   364,
     107,     0,   108,   365,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   366,   124,   125,
     126,   127,   128,   367,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,     0,   142,   143,   144,
       0,   383,   146,   369,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   370,   173,
     174,   371,   176,   177,   178,   179,   180,   372,   182,   373,
     184,   185,   186,   187,   188,   189,   190,   374,   375,   193,
     194,   195,   196,   197,   198,   199,   200,   201,  1276,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   867,  1277,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   379,   380,    29,    30,   381,    32,    33,   382,
     868,    36,    37,    38,    39,    40,    41,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,    54,
      55,    56,    57,    58,    59,    60,     0,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,   357,
      74,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,     0,     0,     0,     0,     0,   358,   359,    84,     0,
       0,     0,    86,     0,     0,     0,     0,    89,   360,    91,
     361,    93,     0,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   362,   363,   105,   364,   107,     0,   108,   365,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   366,   124,   125,   126,   127,   128,   367,
     869,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,     0,   142,   143,   144,     0,   383,   146,   870,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   370,   173,   174,   371,   176,   177,
     178,   179,   180,   372,   182,   373,   184,   185,   186,   187,
     188,   189,   190,   374,   375,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   614,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   615,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   337,   338,
     339,   340,   341,   342,   343,   344,    35,    36,    37,    38,
      39,    40,    41,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,    54,    55,    56,    57,    58,
      59,    60,     0,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,   357,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,   358,   359,    84,     0,     0,     0,    86,     0,
       0,     0,     0,    89,   360,    91,   361,    93,     0,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   362,   363,
     105,   364,   107,     0,   108,   365,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   366,
     124,   125,   126,   127,   128,   367,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,     0,   142,
     143,   144,     0,   368,   146,   369,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     370,   173,   174,   371,   176,   177,   178,   179,   180,   372,
     182,   373,   184,   185,   186,   187,   188,   189,   190,   374,
     375,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     664,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     665,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   337,   338,   339,   340,   341,   342,
     343,   344,    35,    36,    37,    38,    39,    40,    41,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,    54,    55,    56,    57,    58,    59,    60,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   357,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,   358,   359,
      84,     0,     0,     0,    86,     0,     0,     0,     0,    89,
     360,    91,   361,    93,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   362,   363,   105,   364,   107,     0,
     108,   365,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   366,   124,   125,   126,   127,
     128,   367,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,     0,   142,   143,   144,     0,   368,
     146,   369,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   370,   173,   174,   371,
     176,   177,   178,   179,   180,   372,   182,   373,   184,   185,
     186,   187,   188,   189,   190,   374,   375,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   867,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   379,   380,    29,    30,   381,    32,    33,   382,   868,
      36,    37,    38,    39,    40,    41,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,    54,    55,
      56,    57,    58,    59,    60,     0,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,   357,    74,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
       0,     0,     0,     0,     0,   358,   359,    84,     0,     0,
       0,    86,     0,     0,     0,     0,    89,   360,    91,   361,
      93,     0,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   362,   363,   105,   364,   107,     0,   108,   365,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   366,   124,   125,   126,   127,   128,   367,   869,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,     0,   142,   143,   144,     0,   383,   146,   870,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   370,   173,   174,   371,   176,   177,   178,
     179,   180,   372,   182,   373,   184,   185,   186,   187,   188,
     189,   190,   374,   375,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   867,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   379,   380,
      29,    30,   381,    32,    33,   382,    35,    36,    37,    38,
      39,    40,    41,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,    54,    55,    56,    57,    58,
      59,    60,     0,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,   357,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,   358,   359,    84,     0,     0,     0,    86,     0,
       0,     0,     0,    89,   360,    91,   361,    93,     0,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   362,   363,
     105,   364,   107,     0,   108,   365,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   366,
     124,   125,   126,   127,   128,   367,   869,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,     0,   142,
     143,   144,     0,   383,   146,   870,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     370,   173,   174,   371,   176,   177,   178,   179,   180,   372,
     182,   373,   184,   185,   186,   187,   188,   189,   190,   374,
     375,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     630,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   337,   338,   339,   340,   341,   342,
     343,   344,    35,    36,    37,    38,    39,    40,    41,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,    54,    55,    56,    57,    58,    59,    60,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   357,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,   358,   359,
      84,     0,     0,   631,    86,     0,     0,     0,     0,    89,
     360,    91,   361,    93,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   362,   363,   105,   364,   107,     0,
     108,   365,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   366,   124,   125,   126,   127,
     128,   367,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,     0,   142,   143,   144,     0,   368,
     146,   369,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   370,   173,   174,   371,
     176,   177,   178,   179,   180,   372,   182,   373,   184,   185,
     186,   187,   188,   189,   190,   374,   375,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   337,   338,   339,   340,
     341,   342,   343,   344,    35,    36,    37,    38,    39,    40,
      41,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,    54,    55,    56,    57,    58,    59,    60,
       0,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,   357,    74,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,     0,     0,     0,     0,     0,
     358,   359,    84,     0,     0,     0,    86,     0,     0,     0,
       0,    89,   360,    91,   361,    93,     0,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   362,   363,   105,   364,
     107,     0,   108,   365,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   366,   124,   125,
     126,   127,   128,   367,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,     0,   142,   143,   144,
       0,   368,   146,   369,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   370,   173,
     174,   371,   176,   177,   178,   179,   180,   372,   182,   373,
     184,   185,   186,   187,   188,   189,   190,   374,   375,   193,
     194,   195,   196,   197,   198,   199,   200,   201,    36,    37,
      38,    39,    40,    41,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,    54,    55,    56,    57,
      58,    59,    60,     0,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,   357,    74,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    81,     0,     0,
       0,     0,     0,   358,   359,    84,     0,     0,     0,    86,
       0,     0,     0,     0,    89,   360,    91,   361,    93,     0,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   362,
     363,   105,     0,   107,     0,   108,     0,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     366,   124,   125,   126,   127,   128,   367,     0,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,     0,
     142,   143,   144,     0,     0,   146,     0,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   370,   173,   174,   371,   176,   177,   178,   179,   180,
     372,   182,   373,   184,   185,   186,   187,   188,   189,   190,
     374,   375,   193,   194,   195,   196,   197,   198,   199,   200,
     201,     0,  1386,     0,     0,   982,   983,   984,   985,     0,
     986,     0,     0,   987,     0,     0,   988,   989,   990,   991,
     992,   993,   994,   995,   996,     0,     0,   997,   998,   999,
    1389,     0,     0,   982,   983,   984,   985,     0,   986,     0,
       0,   987,     0,     0,   988,   989,   990,   991,   992,   993,
     994,   995,   996,     0,     0,   997,   998,   999,  1409,     0,
       0,   982,   983,   984,   985,     0,   986,   327,     0,   987,
    1000,  1001,   988,   989,   990,   991,   992,   993,   994,   995,
     996,     0,     0,   997,   998,   999,  1421,     0,     0,   982,
     983,   984,   985,     0,   986,   327,     0,   987,  1000,  1001,
     988,   989,   990,   991,   992,   993,   994,   995,   996,     0,
       0,   997,   998,   999,  1430,     0,     0,   982,   983,   984,
     985,     0,   986,   327,     0,   987,  1000,  1001,   988,   989,
     990,   991,   992,   993,   994,   995,   996,     0,     0,   997,
     998,   999,  1432,     0,     0,   982,   983,   984,   985,     0,
     986,   327,     0,   987,  1000,  1001,   988,   989,   990,   991,
     992,   993,   994,   995,   996,     0,     0,   997,   998,   999,
    1435,     0,     0,   982,   983,   984,   985,     0,   986,   327,
       0,   987,  1000,  1001,   988,   989,   990,   991,   992,   993,
     994,   995,   996,     0,     0,   997,   998,   999,  1436,     0,
       0,   982,   983,   984,   985,     0,   986,   327,     0,   987,
    1000,  1001,   988,   989,   990,   991,   992,   993,   994,   995,
     996,     0,     0,   997,   998,   999,  1441,     0,     0,   982,
     983,   984,   985,     0,   986,   327,     0,   987,  1000,  1001,
     988,   989,   990,   991,   992,   993,   994,   995,   996,     0,
       0,   997,   998,   999,  1444,     0,     0,   982,   983,   984,
     985,     0,   986,   327,     0,   987,  1000,  1001,   988,   989,
     990,   991,   992,   993,   994,   995,   996,     0,     0,   997,
     998,   999,  1447,     0,     0,   982,   983,   984,   985,     0,
     986,   327,     0,   987,  1000,  1001,   988,   989,   990,   991,
     992,   993,   994,   995,   996,     0,     0,   997,   998,   999,
    1449,     0,     0,   982,   983,   984,   985,     0,   986,   327,
       0,   987,  1000,  1001,   988,   989,   990,   991,   992,   993,
     994,   995,   996,     0,     0,   997,   998,   999,  1451,     0,
       0,   982,   983,   984,   985,     0,   986,   327,     0,   987,
    1000,  1001,   988,   989,   990,   991,   992,   993,   994,   995,
     996,     0,     0,   997,   998,   999,  1548,     0,     0,   982,
     983,   984,   985,     0,   986,   327,     0,   987,  1000,  1001,
     988,   989,   990,   991,   992,   993,   994,   995,   996,     0,
       0,   997,   998,   999,  1549,     0,     0,   982,   983,   984,
     985,     0,   986,   327,     0,   987,  1000,  1001,   988,   989,
     990,   991,   992,   993,   994,   995,   996,     0,     0,   997,
     998,   999,  1554,     0,     0,   982,   983,   984,   985,     0,
     986,   327,     0,   987,  1000,  1001,   988,   989,   990,   991,
     992,   993,   994,   995,   996,     0,     0,   997,   998,   999,
    1560,     0,     0,   982,   983,   984,   985,     0,   986,   327,
       0,   987,  1000,  1001,   988,   989,   990,   991,   992,   993,
     994,   995,   996,     0,     0,   997,   998,   999,  1624,     0,
       0,   982,   983,   984,   985,     0,   986,   327,     0,   987,
    1000,  1001,   988,   989,   990,   991,   992,   993,   994,   995,
     996,     0,     0,   997,   998,   999,  1625,     0,     0,   982,
     983,   984,   985,     0,   986,   327,     0,   987,  1000,  1001,
     988,   989,   990,   991,   992,   993,   994,   995,   996,     0,
       0,   997,   998,   999,  1628,     0,     0,   982,   983,   984,
     985,     0,   986,   327,     0,   987,  1000,  1001,   988,   989,
     990,   991,   992,   993,   994,   995,   996,     0,     0,   997,
     998,   999,  1629,     0,     0,   982,   983,   984,   985,     0,
     986,   327,     0,   987,  1000,  1001,   988,   989,   990,   991,
     992,   993,   994,   995,   996,     0,     0,   997,   998,   999,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   327,
       0,     0,  1000,  1001,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   327,     0,     0,
    1000,  1001
};

static const yytype_int16 yycheck[] =
{
      23,   497,    12,   427,   607,   650,   704,   652,   432,    10,
     655,   435,   230,   955,   528,   439,   704,   331,   532,   533,
     534,   529,   536,   537,   498,   499,   500,   501,    10,  1161,
      12,   545,  1039,   547,  1080,   549,  1303,     3,     4,     5,
     554,   555,   556,   557,   558,   559,   560,   561,  1146,   563,
     399,  1359,   325,   752,   568,   569,   570,   756,   572,   573,
      64,   325,   411,   412,   675,   579,  1338,   581,   311,  1346,
     584,    16,   123,    12,    35,   895,    14,    60,   592,   593,
     594,   595,   596,   597,   598,   599,   317,   601,   123,    60,
    1516,  1520,    42,    42,   325,    50,   281,   605,   283,   311,
     449,    50,   123,   317,    11,   317,    11,    11,   311,   250,
     311,   325,  1340,   325,   317,   126,   317,   311,    43,   123,
      52,  1128,   325,   317,   325,    36,    37,   317,    36,    37,
      42,   325,    11,   181,    35,   325,   674,    35,    63,   973,
     317,   975,   479,   480,   481,   482,   483,   484,   325,   486,
     487,   488,   489,   490,   491,   492,   493,    13,    42,    36,
      37,    60,   151,   174,   281,   115,   757,   758,   311,   115,
      50,  1005,   120,   314,   317,    54,    55,    56,   716,   717,
      21,  1015,   325,   106,    47,   317,  1020,    50,  1022,  1131,
    1024,   308,  1026,   325,  1028,   184,  1030,   895,  1032,   897,
     280,    42,  1036,   115,  1038,   317,   105,   895,   131,   897,
      11,   304,   317,   325,   307,    71,   716,   717,  1647,   864,
     325,   176,   126,  1649,   304,   132,   311,   165,   742,   653,
     240,   115,   317,   243,   184,   120,   116,   176,   184,   281,
     325,   749,    43,   311,   227,   177,   670,   126,   149,   317,
     102,   149,   130,   116,   162,    34,   227,   325,   240,   220,
     684,   243,   304,    42,   212,   213,  1533,   192,   319,   320,
     455,    50,    51,  1093,   459,    54,    55,    56,   463,   464,
     465,    49,    50,   468,   319,   162,   321,   281,   233,  1566,
     195,   281,   241,   145,  1522,  1523,  1524,  1525,   319,   320,
     184,   191,   126,   214,   215,   216,    34,   163,   164,   303,
     304,    21,    23,    47,   304,    14,    50,   590,   322,   323,
     324,   206,    50,   566,  1596,   674,   590,   212,   213,   867,
    1164,    42,    42,    42,  1168,   520,   927,     0,   523,    25,
      50,    50,  1041,    42,  1652,    42,   312,   126,   939,   117,
     174,    50,   318,    50,   566,   321,   587,    43,   695,   590,
     184,   952,    11,   566,    35,   566,   108,   716,   717,   718,
     719,  1205,   566,   587,    35,   587,   590,   400,   590,  1511,
      51,   404,   116,  1217,   587,   408,   587,   590,  1655,   590,
      51,   414,   393,   587,    43,  1093,   590,   587,    49,    50,
     590,   106,  1100,   426,  1102,  1093,   407,   430,   431,   249,
     587,   393,  1100,   590,  1102,   125,   125,   399,  1516,  1517,
     443,   444,   445,   566,    27,   407,   427,   450,   125,   411,
     412,   432,    42,    42,   435,  1481,  1534,   226,   439,  1042,
    1043,    44,   950,    53,   587,   427,   954,   590,  1455,  1040,
     432,    13,   241,   435,   294,   587,    42,   439,   590,   153,
     177,   462,   647,    25,   304,   244,   117,   449,  1113,    42,
      96,   188,   657,   658,    36,   587,   825,   272,   590,   187,
     462,   566,   587,   191,   281,   590,    42,   510,    35,   115,
      69,    70,   515,   516,   291,   121,   519,    35,   566,    66,
     685,    68,   587,   817,    51,   590,   303,   304,   932,   304,
    1121,   281,   861,    51,   309,   310,    21,  1615,   867,   587,
    1058,    21,   590,  1114,   103,    50,  1117,  1118,   529,   223,
     224,   279,  1070,   303,   304,    34,    34,   231,   123,   124,
     288,  1132,   281,    42,    69,    70,  1380,   529,   733,   734,
     735,    50,    50,    42,   293,    54,    55,    56,  1058,  1657,
     127,    50,    26,    24,   303,    29,    30,    35,  1402,    33,
    1070,   197,   198,   199,    35,    35,   202,   203,   139,   281,
     249,   249,   251,    51,  1418,   146,    50,  1529,   256,   258,
     259,    51,  1426,    21,    35,   264,  1430,   620,  1112,    66,
      67,    68,   304,   281,   605,   307,   308,   174,   277,   278,
      51,  1309,   635,   291,   292,   182,   183,   184,   185,   186,
      46,  1309,    48,   605,  1162,   303,   304,   126,    34,  1167,
      35,   192,   193,   194,  1172,    35,    42,   172,  1176,   662,
     663,   280,   281,   178,    50,  1256,    51,    50,    54,    55,
      56,    51,   653,   305,   118,   119,    11,   842,   225,   311,
     127,    35,  1162,   302,   303,   317,   305,  1167,   235,   670,
      35,   653,  1172,   325,   249,    35,  1176,    51,    35,    35,
     898,   256,    66,   684,    68,  1223,    51,    35,   670,    35,
     281,    51,   674,    24,    51,    51,    21,   882,   883,   884,
     291,   292,   684,    51,    35,    51,    21,   174,   893,  1058,
     193,   194,   303,   304,    24,   182,   183,   184,   185,   186,
     126,  1070,   237,  1223,    42,    35,   241,  1338,    66,    67,
      68,    24,    50,   918,   716,   717,   718,   719,  1252,    35,
     106,   107,    35,   127,   181,   244,   181,    43,   749,   232,
      32,    32,   189,   754,   189,    21,    38,    38,   225,  1208,
    1351,  1352,   245,   246,   247,   248,    50,   749,   235,  1360,
    1219,  1220,   754,   132,   133,    21,   135,   136,   137,  1228,
     139,   140,    46,  1232,    48,  1234,  1235,   181,  1237,   127,
     174,  1240,  1241,   166,   167,   189,   181,    35,   182,   183,
     184,   185,   186,    35,   189,    43,  1302,    50,    32,    35,
      21,    43,    35,  1162,    38,  1311,  1312,    43,  1167,    21,
      43,    35,  1296,  1172,    21,    35,   221,  1176,   165,    43,
     167,   813,  1477,    43,   229,  1259,   174,    92,    93,    94,
      95,  1265,  1453,   825,   182,   183,   184,   185,   186,   190,
     191,   235,    35,  1456,  1457,   193,   194,   880,  1282,    21,
      43,    66,    67,    68,   209,   210,   211,  1052,    11,    35,
    1055,  1056,  1057,   896,  1223,    35,  1061,    43,    11,   861,
      21,    35,    35,    43,    35,   867,   887,   225,    35,    43,
      43,    60,    43,  1484,   232,    86,    43,   235,    89,  1510,
    1085,    92,    93,    94,    95,   887,    42,   245,   246,   247,
     248,    35,    35,    42,  1452,   235,  1527,   315,   316,    43,
      43,    42,   127,    36,    37,  1110,  1111,    54,    55,    56,
      35,   932,     3,     4,     5,  1473,  1474,   214,   215,   216,
     240,   172,   173,   158,  1535,   946,   196,   172,   173,   950,
     932,  1649,  1452,   954,   121,   122,   141,   142,   123,   124,
     159,   152,   289,   290,   946,   157,  1569,   949,   950,   174,
     170,  1509,   954,  1473,  1474,   317,   318,   182,   183,   184,
     185,   186,   294,   295,   161,  1596,    23,    15,    16,    17,
      18,    19,    20,  1604,   169,   186,   144,   145,    26,    14,
     179,   180,    23,  1499,  1500,    87,    88,  1545,    42,  1509,
     174,    39,    42,   204,   205,    87,    88,   208,   191,  1557,
      42,  1632,   261,   262,   144,   145,    42,    42,   217,   218,
     235,   100,   101,    42,  1572,    50,   495,   496,   504,   505,
    1464,  1579,    18,    19,  1468,  1545,   502,   503,   513,   514,
      31,  1565,  1663,  1664,  1665,  1666,   174,  1557,   718,   719,
    1671,     3,     4,     5,     6,     7,     8,     9,    10,  1659,
    1660,    50,  1572,    43,    43,    50,  1058,    43,    35,  1579,
      11,   109,   110,   111,   112,   113,   114,    35,  1070,    50,
      50,   153,   160,    11,   249,  1591,  1281,   252,   253,   254,
     255,   139,   257,  1452,   160,   260,   138,   153,   263,   264,
     265,   266,   267,   268,   269,   270,   271,  1127,    64,   274,
     275,   276,   153,   126,  1473,  1474,   153,    54,   126,    52,
     181,    43,   106,    43,   107,    43,    43,    43,    43,    12,
     226,    50,  1143,   171,    60,  1127,   153,   226,  1662,   138,
    1173,  1161,    39,    11,  1177,   126,    85,    39,    12,   314,
    1509,  1143,   317,   318,   131,   115,    12,   132,   151,   155,
     134,    11,    42,    42,    42,    42,    42,    91,  1201,  1161,
    1162,   242,    35,  1206,  1207,  1167,   243,    84,  1211,   200,
    1172,    25,   231,   126,  1176,  1218,  1545,    39,   231,   143,
      35,  1224,   174,  1226,   192,    85,  1229,   236,  1557,   249,
    1233,   174,   115,   304,   261,  1238,   306,    66,    67,    68,
     304,   281,  1245,  1572,   249,    43,  1249,   304,    11,    43,
    1579,    43,    43,   195,   249,   226,    11,   252,   253,   254,
     255,  1223,   257,   258,    66,   260,    68,   143,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    43,  1259,   274,
     275,   276,    98,   214,  1265,   280,   281,   226,    97,   134,
      35,  1253,    39,   174,    35,    39,   214,  1259,   127,   126,
    1465,  1282,  1467,  1265,  1469,  1470,   290,   302,   303,   289,
     305,   123,   306,   249,   153,   273,    45,    45,    11,   314,
    1282,   134,   317,   318,   258,   127,   132,    43,   156,    43,
     153,    42,    51,    97,   153,   146,   201,   236,    21,  1504,
      42,  1331,    42,   214,   126,   174,    14,   123,   249,   249,
    1340,    23,   153,   182,   183,   184,   185,   186,   153,   132,
      12,    43,    35,   207,   193,   194,    28,   132,    43,  1331,
     207,   971,   174,   115,  1196,     6,   983,   249,  1340,  1214,
     182,   183,   184,   185,   186,  1203,  1518,   306,   313,   306,
     319,   193,   194,   307,   321,   318,   312,   312,  1401,    66,
     321,    68,   527,   232,   324,  1326,   235,   279,   318,   281,
     282,   283,   284,   285,   286,   287,   245,   246,   247,   248,
     206,   654,   865,   225,   296,   297,   298,   299,   300,   301,
     232,   651,   893,   235,   104,  1085,  1059,   523,   477,   311,
     312,   313,   656,   245,   246,   247,   248,  1301,   478,  1256,
     918,  1458,   452,   719,   867,  1100,   449,   405,   861,  1309,
     127,  1291,   897,  1102,  1493,  1305,  1532,   405,   906,  1156,
    1537,   646,  1478,    -1,  1121,  1330,  1641,    -1,  1643,   411,
      -1,    -1,    -1,  1464,    -1,    -1,    -1,  1468,    -1,    -1,
    1452,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1464,  1668,    -1,    -1,  1468,   174,    -1,    -1,
      -1,  1473,  1474,    -1,    -1,   182,   183,   184,   185,   186,
      -1,  1511,    -1,    -1,  1514,  1515,   193,   194,  1518,    -1,
      -1,    -1,  1522,  1523,  1524,  1525,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1546,    -1,    -1,    -1,  1509,    -1,  1511,
      -1,    -1,  1514,  1515,    -1,  1558,  1518,    -1,    -1,    -1,
    1522,  1523,  1524,  1525,    -1,   232,    -1,    -1,   235,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,   246,
     247,   248,    -1,  1545,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1557,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1609,    -1,    -1,    -1,
    1572,    -1,    -1,    -1,    -1,    -1,    -1,  1579,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,    -1,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
      -1,   252,   253,   254,   255,    -1,   257,    -1,    -1,   260,
      -1,    -1,   263,   264,   265,   266,   267,   268,   269,   270,
     271,    -1,    -1,   274,   275,   276,    -1,    -1,    -1,    -1,
      11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    25,    26,    -1,    -1,    29,    30,
      -1,    32,    -1,    34,    -1,    36,    37,    38,    -1,    40,
      41,    42,    43,   314,    -1,    -1,   317,   318,    -1,    -1,
     319,    -1,   321,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,   109,   110,
     111,   112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,    -1,    -1,   126,   127,   128,   129,    -1,
      -1,   132,   133,   134,   135,   136,    -1,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,   188,   189,   190,
      -1,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,    11,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,    32,
      -1,    34,    -1,    36,    37,    38,    -1,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,   109,   110,   111,   112,
     113,   114,   115,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,    -1,    -1,   126,   127,   128,   129,    -1,    -1,   132,
     133,   134,   135,   136,    -1,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,    -1,   188,   189,   190,    -1,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,    11,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,
      -1,    36,    37,    38,    -1,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,   109,   110,   111,   112,   113,   114,
     115,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,
      -1,   126,   127,   128,   129,    -1,    -1,   132,   133,   134,
     135,   136,    -1,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,    -1,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,    11,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,
      -1,    -1,    29,    30,    -1,    32,    -1,    34,    -1,    36,
      37,    38,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,    -1,
      -1,    -1,   109,   110,   111,   112,   113,   114,   115,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,   126,
     127,   128,   129,    -1,    -1,   132,   133,   134,   135,   136,
      -1,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
      -1,   188,   189,   190,    -1,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,    -1,
      29,    30,    -1,    32,    -1,    34,    -1,    36,    37,    38,
      -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,    -1,    -1,   126,   127,   128,
     129,    -1,    -1,   132,   133,   134,   135,   136,    -1,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,    -1,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
      11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    26,    -1,    -1,    29,    30,
      -1,    32,    -1,    34,    -1,    36,    37,    38,    -1,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,   109,   110,
     111,   112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,    -1,    -1,   126,   127,   128,   129,    -1,
      -1,   132,   133,   134,   135,   136,    -1,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,   188,   189,   190,
      -1,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,    11,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,    32,
      -1,    34,    -1,    36,    37,    38,    -1,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,   109,   110,   111,   112,
     113,   114,   115,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,    -1,    -1,   126,   127,   128,   129,    -1,    -1,   132,
     133,   134,   135,   136,    -1,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,    -1,   188,   189,   190,    -1,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,    11,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,
      -1,    36,    37,    38,    -1,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,   109,   110,   111,   112,   113,   114,
     115,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,
      -1,   126,   127,   128,   129,    -1,    -1,   132,   133,   134,
     135,   136,    -1,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,    -1,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,    11,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,
      -1,    -1,    29,    30,    -1,    32,    -1,    34,    -1,    36,
      37,    38,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,    -1,
      -1,    -1,   109,   110,   111,   112,   113,   114,   115,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,   126,
     127,   128,   129,    -1,    -1,   132,   133,   134,   135,   136,
      -1,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
      -1,   188,   189,   190,    -1,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,    -1,
      29,    30,    -1,    32,    -1,    34,    -1,    36,    37,    38,
      -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,    -1,    -1,   126,   127,   128,
     129,    -1,    -1,   132,   133,   134,   135,   136,    -1,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,    -1,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
      11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    26,    -1,    -1,    29,    30,
      -1,    32,    -1,    34,    -1,    36,    37,    38,    -1,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,   109,   110,
     111,   112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,    -1,    -1,   126,   127,   128,   129,    -1,
      -1,   132,   133,   134,   135,   136,    -1,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,   188,   189,   190,
      -1,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,    11,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    26,    -1,    -1,    29,    30,    -1,    32,
      -1,    34,    -1,    36,    37,    38,    -1,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,   109,   110,   111,   112,
     113,   114,   115,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,    -1,    -1,   126,   127,   128,   129,    -1,    -1,   132,
     133,   134,   135,   136,    -1,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,    -1,   188,   189,   190,    -1,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,    11,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,
      -1,    36,    37,    38,    -1,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,   109,   110,   111,   112,   113,   114,
     115,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,
      -1,   126,   127,   128,   129,    -1,    -1,   132,   133,   134,
     135,   136,    -1,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,    -1,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,    11,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,
      -1,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,    -1,
      -1,    -1,   109,   110,   111,   112,   113,   114,   115,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,   126,
     127,   128,   129,    -1,    -1,   132,   133,   134,   135,   136,
      -1,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
      -1,   188,   189,   190,    -1,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,    -1,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,   109,   110,   111,   112,
     113,   114,   115,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,    -1,    -1,    -1,   127,   128,   129,    -1,    -1,   132,
     133,   134,   135,   136,    -1,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,    -1,   188,   189,   190,    -1,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,    -1,
      -1,    -1,   109,   110,   111,   112,   113,   114,   115,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,
     127,   128,   129,    -1,    -1,   132,   133,   134,   135,   136,
      -1,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
      -1,   188,   189,   190,    -1,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,   109,   110,
     111,   112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,   132,   133,   134,   135,   136,    -1,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,   188,   189,   190,
      -1,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,   109,   110,   111,   112,   113,   114,
     115,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,
      -1,    -1,   127,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,    -1,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,    -1,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,    -1,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,   109,   110,   111,   112,
     113,   114,   115,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,    -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,    -1,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,    -1,   188,   189,   190,    -1,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
      -1,    -1,    -1,   109,   110,   111,   112,   113,   114,   115,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,   127,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,    -1,   188,   189,   190,    -1,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,    -1,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,   109,   110,   111,   112,
     113,   114,   115,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,    -1,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,    -1,   188,   189,   190,    -1,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,   109,   110,
     111,   112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,    -1,    -1,    -1,   127,    -1,    -1,    -1,
      -1,   132,   133,   134,   135,   136,    -1,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,   188,   189,   190,
      -1,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,
      -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,    -1,   151,    -1,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,    -1,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,    -1,
     188,   189,   190,    -1,    -1,   193,    -1,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,    -1,   249,    -1,    -1,   252,   253,   254,   255,    -1,
     257,    -1,    -1,   260,    -1,    -1,   263,   264,   265,   266,
     267,   268,   269,   270,   271,    -1,    -1,   274,   275,   276,
     249,    -1,    -1,   252,   253,   254,   255,    -1,   257,    -1,
      -1,   260,    -1,    -1,   263,   264,   265,   266,   267,   268,
     269,   270,   271,    -1,    -1,   274,   275,   276,   249,    -1,
      -1,   252,   253,   254,   255,    -1,   257,   314,    -1,   260,
     317,   318,   263,   264,   265,   266,   267,   268,   269,   270,
     271,    -1,    -1,   274,   275,   276,   249,    -1,    -1,   252,
     253,   254,   255,    -1,   257,   314,    -1,   260,   317,   318,
     263,   264,   265,   266,   267,   268,   269,   270,   271,    -1,
      -1,   274,   275,   276,   249,    -1,    -1,   252,   253,   254,
     255,    -1,   257,   314,    -1,   260,   317,   318,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    -1,    -1,   274,
     275,   276,   249,    -1,    -1,   252,   253,   254,   255,    -1,
     257,   314,    -1,   260,   317,   318,   263,   264,   265,   266,
     267,   268,   269,   270,   271,    -1,    -1,   274,   275,   276,
     249,    -1,    -1,   252,   253,   254,   255,    -1,   257,   314,
      -1,   260,   317,   318,   263,   264,   265,   266,   267,   268,
     269,   270,   271,    -1,    -1,   274,   275,   276,   249,    -1,
      -1,   252,   253,   254,   255,    -1,   257,   314,    -1,   260,
     317,   318,   263,   264,   265,   266,   267,   268,   269,   270,
     271,    -1,    -1,   274,   275,   276,   249,    -1,    -1,   252,
     253,   254,   255,    -1,   257,   314,    -1,   260,   317,   318,
     263,   264,   265,   266,   267,   268,   269,   270,   271,    -1,
      -1,   274,   275,   276,   249,    -1,    -1,   252,   253,   254,
     255,    -1,   257,   314,    -1,   260,   317,   318,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    -1,    -1,   274,
     275,   276,   249,    -1,    -1,   252,   253,   254,   255,    -1,
     257,   314,    -1,   260,   317,   318,   263,   264,   265,   266,
     267,   268,   269,   270,   271,    -1,    -1,   274,   275,   276,
     249,    -1,    -1,   252,   253,   254,   255,    -1,   257,   314,
      -1,   260,   317,   318,   263,   264,   265,   266,   267,   268,
     269,   270,   271,    -1,    -1,   274,   275,   276,   249,    -1,
      -1,   252,   253,   254,   255,    -1,   257,   314,    -1,   260,
     317,   318,   263,   264,   265,   266,   267,   268,   269,   270,
     271,    -1,    -1,   274,   275,   276,   249,    -1,    -1,   252,
     253,   254,   255,    -1,   257,   314,    -1,   260,   317,   318,
     263,   264,   265,   266,   267,   268,   269,   270,   271,    -1,
      -1,   274,   275,   276,   249,    -1,    -1,   252,   253,   254,
     255,    -1,   257,   314,    -1,   260,   317,   318,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    -1,    -1,   274,
     275,   276,   249,    -1,    -1,   252,   253,   254,   255,    -1,
     257,   314,    -1,   260,   317,   318,   263,   264,   265,   266,
     267,   268,   269,   270,   271,    -1,    -1,   274,   275,   276,
     249,    -1,    -1,   252,   253,   254,   255,    -1,   257,   314,
      -1,   260,   317,   318,   263,   264,   265,   266,   267,   268,
     269,   270,   271,    -1,    -1,   274,   275,   276,   249,    -1,
      -1,   252,   253,   254,   255,    -1,   257,   314,    -1,   260,
     317,   318,   263,   264,   265,   266,   267,   268,   269,   270,
     271,    -1,    -1,   274,   275,   276,   249,    -1,    -1,   252,
     253,   254,   255,    -1,   257,   314,    -1,   260,   317,   318,
     263,   264,   265,   266,   267,   268,   269,   270,   271,    -1,
      -1,   274,   275,   276,   249,    -1,    -1,   252,   253,   254,
     255,    -1,   257,   314,    -1,   260,   317,   318,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    -1,    -1,   274,
     275,   276,   249,    -1,    -1,   252,   253,   254,   255,    -1,
     257,   314,    -1,   260,   317,   318,   263,   264,   265,   266,
     267,   268,   269,   270,   271,    -1,    -1,   274,   275,   276,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,
      -1,    -1,   317,   318,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,    -1,    -1,
     317,   318
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,   326,
      11,    13,    22,    26,    29,    30,    32,    34,    36,    37,
      38,    40,    41,    42,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   109,   110,   111,   112,   113,
     114,   115,   121,   122,   123,   126,   127,   128,   129,   132,
     133,   134,   135,   136,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   188,   189,   190,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   470,   471,   472,   473,   474,   475,   477,   482,
     493,   496,   500,   501,   502,   503,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   544,   545,   546,   547,   548,   551,   552,
     553,   564,   566,   568,   569,   570,   573,   575,   576,   577,
     587,   588,   589,   590,   591,   592,   593,   595,   597,   599,
     640,   641,   642,   643,   644,   645,   646,   649,   650,   651,
     652,   654,   661,   662,   666,   667,   668,   669,   675,   676,
     187,   191,   417,   418,   419,   420,   431,   436,   422,   423,
     424,   425,   431,   436,   426,   427,   428,   429,   431,   436,
     430,   431,   434,   435,   436,   437,   250,   314,   333,   334,
     356,   181,   327,   191,   329,   330,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,   104,   121,   122,
     133,   135,   147,   148,   150,   154,   168,   174,   192,   194,
     219,   222,   228,   230,   238,   239,   543,   675,   676,    57,
      58,    61,    64,   192,   535,   123,   124,   554,   130,   108,
     565,   524,   106,   556,   515,   515,    43,   471,    21,    42,
      50,   125,   574,    42,    50,    42,    42,    42,    50,   125,
     578,    42,    42,    42,    50,    21,    21,    21,    21,    21,
      21,    21,    21,    21,    21,    21,    50,    11,   647,   648,
      50,    50,    11,   478,   479,    11,   195,   483,   484,    11,
     494,   495,   494,    42,    42,    50,    69,    70,    21,    42,
      50,   125,   571,    42,   462,    60,   105,    60,   227,    60,
      60,   227,   235,   240,    35,   132,   133,   135,   136,   137,
     139,   140,   475,   476,   485,   486,   487,   157,   158,    15,
      16,    17,    18,    19,    20,    26,    39,   109,   110,   111,
     112,   113,   114,   171,   196,    36,    37,   162,    13,    71,
     163,   164,    14,   165,   166,   167,   159,   170,   161,   169,
      50,   520,   524,    32,    38,    23,    23,   535,   535,    23,
      42,   472,   472,    42,    53,   177,   188,   432,   433,   174,
     181,   189,   421,   439,   441,   442,   443,   444,   446,   447,
     448,   451,   452,   453,   456,   457,   459,   460,   470,   655,
     418,   419,   420,   181,   421,   439,   441,   443,   444,   445,
     457,   460,   470,   655,   423,   424,   425,   181,   438,   439,
     441,   442,   443,   444,   446,   447,   448,   451,   452,   457,
     459,   460,   470,   639,   655,   427,   428,   429,   434,   435,
     437,   181,   438,   439,   441,   443,   444,   445,   457,   460,
     470,   655,   335,   357,   463,   174,   331,   555,   106,   107,
     567,    31,   675,    43,    13,    43,   594,   601,   654,   471,
      50,   572,    43,   471,    43,    63,   192,   597,   599,    43,
      43,   126,   653,   675,   471,    50,   579,   596,   601,   600,
     602,   654,    43,   471,   471,   543,    35,   220,   471,   471,
     543,    35,   543,    11,    35,   543,    35,   149,   149,   471,
     471,   471,    50,    50,    13,    43,   598,   602,   471,   572,
      11,    43,   467,   468,   153,   582,   472,   160,   472,   675,
     472,   472,   472,   472,    11,   138,   139,   502,   503,   505,
     505,   505,   505,   505,   505,   504,   505,   505,   505,   505,
     505,   505,   505,   505,    64,   508,   508,   507,   509,   509,
     509,   509,   510,   510,   511,   511,   160,   153,   153,   153,
      51,   471,   525,   525,   471,   471,   471,    25,    43,   472,
     549,   550,   153,   223,   224,   231,    43,   549,    54,   126,
     126,    52,   433,   440,   440,   653,    66,    68,   127,   174,
     182,   183,   184,   185,   186,   235,   463,   190,   191,   440,
     440,   440,   440,   440,   440,   440,   440,   181,   189,    67,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   181,
     225,   440,   440,   440,   440,   440,   440,   440,   440,   181,
     181,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     279,   288,   336,   315,   316,   359,   193,   194,   232,   245,
     246,   247,   248,   461,   464,   465,   653,   181,   332,   106,
     556,   107,   106,   131,   521,    35,    43,    51,    51,   471,
      51,    43,    43,    43,    43,    51,    51,   471,    43,    43,
      51,    51,    12,   648,   472,    51,    51,   582,   479,   582,
     543,   484,   582,   495,   472,   472,    43,    43,    51,   471,
     471,    35,    43,    51,   543,    35,    43,    42,    65,   175,
     194,   583,   585,   586,   587,   654,   670,   671,   672,   674,
      50,   469,   226,    60,   153,   226,   226,   241,   543,   472,
     488,   489,   490,   138,   505,    42,    50,   244,   519,   540,
     605,   608,   609,   610,   611,   612,   613,   614,   615,   583,
     583,   580,   586,   580,    51,    24,    24,    24,    35,    43,
     221,   229,   472,   472,   472,    43,   440,    39,   172,   173,
     126,   604,    11,   653,   172,   173,   121,   122,   139,   146,
     192,   461,   172,   178,   449,   675,   237,   241,   658,   461,
     174,   184,   455,   604,   174,   604,    85,   622,    69,    70,
     103,   249,   251,   258,   259,   264,   277,   278,   337,   338,
     341,   342,   346,   347,   348,   349,   350,   351,   354,   355,
     358,   249,   252,   253,   254,   255,   257,   260,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   274,   275,   276,
     317,   318,   356,   360,   361,   362,   363,   364,   365,   366,
     369,   370,   374,   375,   376,   377,   378,   383,   384,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   676,
      39,   463,   123,   124,    27,    44,   131,   603,   654,    51,
      51,   472,   132,   115,   480,    12,    12,   134,   151,   497,
     499,   155,    51,    51,   603,   582,   468,   585,    42,    42,
      42,    13,    25,    36,   584,   471,   472,   472,   472,    42,
      42,   319,   321,   663,   675,    35,   141,   142,   491,   488,
     605,   471,   612,    50,   209,   210,   211,   616,    91,   638,
     242,   607,   243,    84,   622,   200,   617,    25,   581,   550,
     231,   231,   604,   543,    39,   143,   604,   174,   174,    35,
     126,   675,   123,   319,   320,   659,   660,   236,   676,   653,
     192,   604,   115,   454,   653,   454,    86,    89,    92,    93,
      94,    95,   152,   186,   204,   205,   208,   623,   624,   625,
     626,   627,   630,   635,   636,   637,    85,   289,   290,   280,
     281,   302,   303,   305,   343,   281,   293,   303,   343,   281,
     291,   292,   303,   304,   359,   281,   303,   304,   359,   249,
     279,   281,   282,   283,   284,   285,   286,   287,   296,   297,
     298,   299,   300,   301,   311,   312,   313,   249,   116,   469,
     364,   304,   261,   379,   380,   381,   306,   304,   307,   359,
     280,   304,   368,   281,   371,   249,   359,   272,   304,   309,
     310,   385,   281,   303,   304,   359,   304,   359,   281,   304,
     359,   359,   281,   304,   307,   308,   359,   281,   304,   359,
     281,   308,   359,   249,   294,   304,   294,   295,   359,   304,
     359,   462,   604,   461,   556,   556,   563,    43,   472,    11,
     195,   481,   472,   472,   472,    11,   583,   184,   498,   499,
     472,    25,    43,    43,    43,    43,    13,    43,   583,   673,
      51,   226,    11,   664,   665,   664,   226,   489,   143,   492,
      43,    51,    51,   605,    98,   214,    97,   609,    96,   115,
     121,   197,   198,   199,   202,   203,   606,   619,   610,   134,
     120,   212,   213,   618,   472,   472,   440,   582,   604,   144,
     145,   604,   604,   179,   180,   450,    42,   469,   657,   658,
      35,    22,    32,    38,    57,    72,   233,   234,   407,   408,
     409,   410,   413,   414,   415,   535,   462,    39,   174,   454,
     604,    35,    39,    92,    93,    94,    95,    87,    88,    42,
     115,   184,   629,   214,    87,    88,   675,   652,   623,   290,
     289,   339,   407,   583,    54,    55,    56,   340,   258,   344,
     345,   359,   583,   359,   583,   471,   249,   583,   471,   249,
      64,   123,   322,   323,   324,   352,   123,   353,   353,   249,
     471,   306,   262,   380,   382,   359,   471,   471,   358,   249,
     123,   319,   321,   367,   471,   249,   256,   372,   373,   249,
     372,   249,   359,   471,   358,   358,   273,   386,   583,   471,
     249,   471,   249,   358,   471,   249,   249,   358,   471,   358,
     358,   249,   358,   471,   249,   358,   358,   249,   471,   249,
     471,   249,   153,   466,   440,   676,    45,    45,    33,   118,
     119,   469,   552,   543,    11,   134,   543,   132,    11,   132,
     156,    43,    43,   153,    35,    43,   472,   543,    35,    43,
      43,    42,   144,   145,   146,   616,    51,   509,    97,   100,
     101,   506,   507,   618,   217,   218,   621,   621,   611,   102,
     145,   507,   507,   201,    12,   176,   458,    43,   467,   153,
     656,   236,   660,   535,    21,    21,    42,    42,    14,   469,
     657,   414,    32,    38,    32,    38,   416,   466,   604,   604,
     214,   184,   629,   604,    42,   115,   184,   632,   126,   123,
     319,   320,   281,   291,   292,   303,   304,   359,   249,   249,
     123,   471,   359,   249,   249,   281,   291,   303,   304,   359,
     249,   359,   249,   359,   583,   469,   462,   556,   556,   554,
     543,   472,   153,   472,   543,   472,   472,   583,   583,   153,
     582,   665,   664,   604,   214,   215,   216,   620,   620,   507,
     507,   162,   472,    43,   583,   469,   407,   535,   535,   411,
     542,   652,   652,   408,   656,   414,   414,   414,   414,    23,
     176,   469,   454,   628,   628,   206,   618,   633,   652,   604,
     631,   631,   583,   471,   249,   249,   583,   471,   249,   249,
     328,   440,   466,    46,    48,   557,    46,    48,   558,   556,
     583,   132,   583,    12,    43,   507,   469,   657,    43,    35,
     469,   471,    35,    43,    43,   652,   207,    35,    43,   165,
     167,   634,   469,   559,   561,   560,   562,    28,   132,   472,
     472,   656,   412,   540,   542,    24,   629,   618,   652,   632,
     632,   440,    47,   116,   469,    49,   117,   469,    47,   116,
     469,    49,   117,   469,   472,   469,    43,   207
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
#line 772 "../src/parser/XQParser.y"
    {
    QP->_function = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(5) - (8)].argSpecs), (yyvsp[(7) - (8)].astNode), (yyvsp[(6) - (8)].sequenceType), (yyvsp[(2) - (8)].functionOptions), true, MEMMGR));
  }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 781 "../src/parser/XQParser.y"
    {
    printf("  { 0, 0, 0, 0, 0 }\n};\n\n");

    UTF8Str module(QP->_moduleName);
    printf("static const DelayedModule %s_module = { %s_file, %s_prefix, %s_uri, %s_functions };\n",
           module.str(), module.str(), module.str(), module.str(), module.str());
  }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 792 "../src/parser/XQParser.y"
    {
    QP->_moduleName = (yyvsp[(3) - (6)].str);

    UTF8Str module(QP->_moduleName);
    UTF8Str file(QP->_query->getFile());

    printf("// Auto-generated by compile-delayed-module from %s\n", file.str());
    printf("// DO NOT EDIT\n\n");

    printf("// %s\n", file.str());
    printf("static const XMLCh %s_file[] = { ", module.str());
    const XMLCh *ptr = QP->_query->getFile();
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

  case 15:

/* Line 1455 of yacc.c  */
#line 829 "../src/parser/XQParser.y"
    {
    printf("static const DelayedModule::FuncDef %s_functions[] = {\n", UTF8(QP->_moduleName));
  }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 833 "../src/parser/XQParser.y"
    {
  }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 839 "../src/parser/XQParser.y"
    {
    XMLBuffer buf;

    const XMLCh *localname = XPath2NSUtils::getLocalName((yyvsp[(4) - (8)].str));

    printf("  {\n    \"%s\", %d, %d, %d,\n", UTF8(localname), ((yyvsp[(5) - (8)].argSpecs) ? (yyvsp[(5) - (8)].argSpecs)->size() : 0), (yylsp[(1) - (8)]).first_line, (yylsp[(1) - (8)]).first_column);
    printf("    \"");
    const XMLCh *ptr = ((XQLexer*)QP->_lexer)->getQueryString() + (yylsp[(1) - (8)]).first_offset;
    const XMLCh *start = ptr;
    const XMLCh *end = ((XQLexer*)QP->_lexer)->getQueryString() + (yylsp[(8) - (8)]).last_offset;
    for(;ptr < end; ++ptr) {
      if(*ptr == '\n') {
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

  case 18:

/* Line 1455 of yacc.c  */
#line 868 "../src/parser/XQParser.y"
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

  case 19:

/* Line 1455 of yacc.c  */
#line 898 "../src/parser/XQParser.y"
    {
  }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 901 "../src/parser/XQParser.y"
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

  case 22:

/* Line 1455 of yacc.c  */
#line 924 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 928 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 946 "../src/parser/XQParser.y"
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

  case 32:

/* Line 1455 of yacc.c  */
#line 965 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, 0, MEMMGR));
  }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 969 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 974 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 981 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 986 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 991 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 999 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 1003 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 1009 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 1014 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 1024 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:function declaration does not have a {}name attribute");
    }

    (yyvsp[(1) - (4)].functDecl)->setArgumentSpecs((yyvsp[(2) - (4)].argSpecs));
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 1037 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, 0, true, MEMMGR));
  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 1041 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 1048 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1053 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 1061 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
  }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1065 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1073 "../src/parser/XQParser.y"
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

  case 53:

/* Line 1455 of yacc.c  */
#line 1100 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1104 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 1111 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1117 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 1122 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1127 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1136 "../src/parser/XQParser.y"
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

  case 60:

/* Line 1455 of yacc.c  */
#line 1160 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 1164 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 1171 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1176 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1181 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1186 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1197 "../src/parser/XQParser.y"
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

  case 67:

/* Line 1455 of yacc.c  */
#line 1215 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1219 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1226 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1231 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1239 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1264 "../src/parser/XQParser.y"
    {
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1267 "../src/parser/XQParser.y"
    {
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1270 "../src/parser/XQParser.y"
    {
  }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1273 "../src/parser/XQParser.y"
    {
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1276 "../src/parser/XQParser.y"
    {
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1279 "../src/parser/XQParser.y"
    {
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1282 "../src/parser/XQParser.y"
    {
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1285 "../src/parser/XQParser.y"
    {
  }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1288 "../src/parser/XQParser.y"
    {
  }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1291 "../src/parser/XQParser.y"
    {
  }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1294 "../src/parser/XQParser.y"
    {
  }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1297 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1300 "../src/parser/XQParser.y"
    {
  }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1303 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1306 "../src/parser/XQParser.y"
    {
  }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1309 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1312 "../src/parser/XQParser.y"
    {
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1315 "../src/parser/XQParser.y"
    {
  }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1325 "../src/parser/XQParser.y"
    {
//     $$ = $1;
    const XMLCh *p = (yyvsp[(1) - (1)].str);
    while(*p && *p != ':') ++p;
    if(*p == 0) {
      yyerror((yylsp[(1) - (1)]), "The method for the xsl:output declaration does not have a prefix");
    }
  }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1337 "../src/parser/XQParser.y"
    {
  }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1340 "../src/parser/XQParser.y"
    {
  }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1348 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1353 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1358 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1366 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1374 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1385 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1395 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1399 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1406 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1415 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1419 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1424 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1434 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1438 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1443 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1448 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1477 "../src/parser/XQParser.y"
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

  case 133:

/* Line 1455 of yacc.c  */
#line 1495 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1499 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1504 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1513 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1522 "../src/parser/XQParser.y"
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

  case 140:

/* Line 1455 of yacc.c  */
#line 1542 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1546 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1551 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1559 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1564 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1568 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1575 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1579 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1587 "../src/parser/XQParser.y"
    {
    XQCallTemplate *call = (XQCallTemplate*)(yyvsp[(1) - (3)].astNode);
    call->setArguments((yyvsp[(2) - (3)].templateArgs));
    (yyval.astNode) = call;

    if(call->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:call-template instruction does not have a {}name attribute");
    }
  }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1600 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1604 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1614 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1618 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1626 "../src/parser/XQParser.y"
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

  case 154:

/* Line 1455 of yacc.c  */
#line 1644 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1648 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1655 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1660 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1665 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1673 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1679 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1687 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1695 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1702 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(2) - (4)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = (yyvsp[(2) - (4)].astNode);
  }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1716 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1720 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (2)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(2) - (2)].astNode));

    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1734 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1743 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1750 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1754 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1761 "../src/parser/XQParser.y"
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

  case 171:

/* Line 1455 of yacc.c  */
#line 1796 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1800 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1805 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1811 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1820 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1824 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1831 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1835 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1842 "../src/parser/XQParser.y"
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

  case 180:

/* Line 1455 of yacc.c  */
#line 1860 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), 0, 0, MEMMGR));
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1864 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1871 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1876 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->seqType = (yyvsp[(3) - (3)].sequenceType);
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1884 "../src/parser/XQParser.y"
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

  case 185:

/* Line 1455 of yacc.c  */
#line 1902 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1906 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1914 "../src/parser/XQParser.y"
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

  case 188:

/* Line 1455 of yacc.c  */
#line 1936 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1940 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1947 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1955 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1964 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1972 "../src/parser/XQParser.y"
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

  case 194:

/* Line 1455 of yacc.c  */
#line 2009 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 2013 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 2020 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 2027 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 2036 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2045 "../src/parser/XQParser.y"
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

  case 200:

/* Line 1455 of yacc.c  */
#line 2072 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2076 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 2083 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 2095 "../src/parser/XQParser.y"
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

  case 204:

/* Line 1455 of yacc.c  */
#line 2121 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2125 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 2132 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 2142 "../src/parser/XQParser.y"
    {
    XQCopyOf *as = (XQCopyOf*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:copy-of instruction does not have a {}select attribute");
    }
  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2154 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2158 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 2163 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2172 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    XQCopy *as = (XQCopy*)(yyval.astNode);

    XQContextItem *ci = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQContextItem(MEMMGR));
    as->setExpression(ci);

    as->setChildren((yyvsp[(2) - (3)].parenExpr)->getChildren());
  }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 2185 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 2189 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 2194 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 2203 "../src/parser/XQParser.y"
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

  case 216:

/* Line 1455 of yacc.c  */
#line 2217 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 2221 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 2234 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 2239 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 2251 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 2255 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::SELF, nt, MEMMGR));
  }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 2263 "../src/parser/XQParser.y"
    {
    // . intersect id("a")

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR)));
    oargs.push_back((yyvsp[(1) - (1)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Intersect(oargs, MEMMGR));
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
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, nt, MEMMGR));
  }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 2284 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::ANCESTOR, nt, MEMMGR));
  }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 2297 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 2304 "../src/parser/XQParser.y"
    {
//     VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
//     fargs.push_back($3);
//     fargs.push_back($5);

//     $$ = WRAP(@1, new (MEMMGR) FunctionKey(fargs, MEMMGR));

    // TBD key() - jpcs
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 2343 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2347 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 2351 "../src/parser/XQParser.y"
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

  case 234:

/* Line 1455 of yacc.c  */
#line 2369 "../src/parser/XQParser.y"
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

  case 235:

/* Line 1455 of yacc.c  */
#line 2387 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::PARENT);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 2397 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::ANCESTOR);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 2411 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 2419 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 2425 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 2431 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 2437 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 2448 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2452 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 2482 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 2486 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 2490 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 2494 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 2498 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 2502 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 2508 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 2514 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 2558 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 2562 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 2566 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 2570 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 2574 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 2578 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 2584 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 2590 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 2594 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2621 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2625 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2629 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2633 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2637 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 2641 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 2647 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 2653 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2679 "../src/parser/XQParser.y"
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

  case 305:

/* Line 1455 of yacc.c  */
#line 2699 "../src/parser/XQParser.y"
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

  case 308:

/* Line 1455 of yacc.c  */
#line 2723 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2737 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2741 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2745 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 2749 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 2753 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 2757 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 2763 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 2769 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 2773 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 2805 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 2813 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 2818 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 2827 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 2832 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 2841 "../src/parser/XQParser.y"
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

  case 336:

/* Line 1455 of yacc.c  */
#line 2901 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 2909 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 2914 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 2923 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 2928 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 2937 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 2947 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 2951 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 2959 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 2963 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 2971 "../src/parser/XQParser.y"
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

  case 347:

/* Line 1455 of yacc.c  */
#line 2987 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 2996 "../src/parser/XQParser.y"
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

  case 349:

/* Line 1455 of yacc.c  */
#line 3008 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 3016 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 3020 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 3025 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 3034 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 3038 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 3046 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), &loc);
  }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 3056 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 3068 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 3075 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 3079 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 3087 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 3092 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 3102 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), (yyvsp[(5) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), (yyvsp[(2) - (7)].functionOptions), true, MEMMGR));
  }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 3106 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), (yyvsp[(5) - (7)].argSpecs), 0, (yyvsp[(6) - (7)].sequenceType), (yyvsp[(2) - (7)].functionOptions), true, MEMMGR));
  }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 3115 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 3119 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 3127 "../src/parser/XQParser.y"
    {
    (yyval.functionOptions) = new (MEMMGR) XQUserFunction::Options();
  }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 3131 "../src/parser/XQParser.y"
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

  case 370:

/* Line 1455 of yacc.c  */
#line 3144 "../src/parser/XQParser.y"
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

  case 371:

/* Line 1455 of yacc.c  */
#line 3157 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (2)].functionOptions)->updating != XQUserFunction::Options::DEFAULT)
      yyerror((yylsp[(2) - (2)]), "Function option 'updating' already specified [err:XPST0003]");
    (yyvsp[(1) - (2)].functionOptions)->updating = XQUserFunction::Options::TRUE;
    (yyval.functionOptions) = (yyvsp[(1) - (2)].functionOptions);
  }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 3166 "../src/parser/XQParser.y"
    { (yyval.boolean) = true; }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 3166 "../src/parser/XQParser.y"
    { (yyval.boolean) = false; }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 3169 "../src/parser/XQParser.y"
    { (yyval.boolean) = false; }
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 3169 "../src/parser/XQParser.y"
    { (yyval.boolean) = true; }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 3173 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 3177 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 3185 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 3190 "../src/parser/XQParser.y"
    {
    XQUserFunction::ArgumentSpecs* paramList = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 3200 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQUserFunction::ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 3208 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 3216 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 3229 "../src/parser/XQParser.y"
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

  case 397:

/* Line 1455 of yacc.c  */
#line 3267 "../src/parser/XQParser.y"
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

  case 399:

/* Line 1455 of yacc.c  */
#line 3312 "../src/parser/XQParser.y"
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

  case 400:

/* Line 1455 of yacc.c  */
#line 3325 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 3340 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 3347 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 3355 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 3366 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 3370 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 3380 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 3384 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 3394 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3401 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 3409 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 3413 "../src/parser/XQParser.y"
    {
    ASTNode *literal = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  X("0"), AnyAtomicType::DECIMAL,
                  MEMMGR));
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(3) - (5)].str), literal, MEMMGR));
  }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 3426 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 3434 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) CountTuple(0, (yyvsp[(3) - (3)].str), MEMMGR));
  }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 3442 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 3447 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 3455 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3465 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 3472 "../src/parser/XQParser.y"
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

  case 427:

/* Line 1455 of yacc.c  */
#line 3487 "../src/parser/XQParser.y"
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

  case 428:

/* Line 1455 of yacc.c  */
#line 3503 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 3507 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 3511 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 3518 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 3527 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 3531 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 3540 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 3548 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 3559 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3567 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 3578 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR);
  }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 3585 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].caseClauses)->push_back((yyvsp[(2) - (2)].caseClause));
    (yyval.caseClauses)=(yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 3590 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses)=new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back((yyvsp[(1) - (1)].caseClause));
  }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 3598 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 3602 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 3610 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, (yyvsp[(2) - (4)].sequenceType), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 3614 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (7)].str), (yyvsp[(5) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode)));
  }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 3622 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 3630 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == Or::name) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 3644 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == And::name) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 3663 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 3667 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 3670 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 3671 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 3675 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 3679 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 3683 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 3687 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 3691 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 3695 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 3699 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 3703 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 3707 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 3711 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 3715 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 3719 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 3728 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 3732 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 3741 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionCall(0, BuiltInModules::core.uri, MEMMGR->getPooledString("to"), args, MEMMGR));
  }
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 3753 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 3757 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 3766 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 3770 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 3774 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 3778 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 3787 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 3791 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 3800 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 3804 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 3813 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQInstanceOf((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 3822 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 3832 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 3841 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 3850 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 3856 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 3877 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 3881 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 3885 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 504:

/* Line 1455 of yacc.c  */
#line 3893 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 3900 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 3913 "../src/parser/XQParser.y"
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

  case 510:

/* Line 1455 of yacc.c  */
#line 3934 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 3943 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 513:

/* Line 1455 of yacc.c  */
#line 3949 "../src/parser/XQParser.y"
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

  case 515:

/* Line 1455 of yacc.c  */
#line 3974 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 3988 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 3994 "../src/parser/XQParser.y"
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

  case 522:

/* Line 1455 of yacc.c  */
#line 4016 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 4026 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 4033 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 4042 "../src/parser/XQParser.y"
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

  case 529:

/* Line 1455 of yacc.c  */
#line 4065 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 4069 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 4073 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 4077 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 4081 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 4085 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 4089 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 4093 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 4101 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 4109 "../src/parser/XQParser.y"
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

  case 539:

/* Line 1455 of yacc.c  */
#line 4126 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 4143 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 4147 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 4151 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 4155 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 4159 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 546:

/* Line 1455 of yacc.c  */
#line 4167 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 4179 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 4189 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 551:

/* Line 1455 of yacc.c  */
#line 4201 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 4208 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 553:

/* Line 1455 of yacc.c  */
#line 4215 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 4228 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 4257 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 4268 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 4272 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 4280 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 4288 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 4298 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 4308 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 4312 "../src/parser/XQParser.y"
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

  case 580:

/* Line 1455 of yacc.c  */
#line 4335 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 4340 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 4351 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 4360 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 585:

/* Line 1455 of yacc.c  */
#line 4364 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 4377 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 4383 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 4396 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 4400 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 4409 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 4425 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 4429 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 4436 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4440 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 4450 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 4454 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 4459 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 4469 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 4473 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 4477 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 4490 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 4494 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 4499 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 4509 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 4513 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 4517 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 4534 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 4538 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 4543 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 4548 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 4555 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                 SchemaSymbols::fgDT_STRING,
                                 (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
    }
  }
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 4568 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(2) - (3)].str), AnyAtomicType::STRING,
                  MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 620:

/* Line 1455 of yacc.c  */
#line 4581 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 4590 "../src/parser/XQParser.y"
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

  case 624:

/* Line 1455 of yacc.c  */
#line 4610 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 631:

/* Line 1455 of yacc.c  */
#line 4633 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 632:

/* Line 1455 of yacc.c  */
#line 4641 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 633:

/* Line 1455 of yacc.c  */
#line 4649 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 634:

/* Line 1455 of yacc.c  */
#line 4653 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 4661 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 4665 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 4674 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 4681 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 4685 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 4693 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4701 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4709 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 4716 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(1) - (1)].str), AnyAtomicType::STRING, MEMMGR));
  }
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 4726 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 4733 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 646:

/* Line 1455 of yacc.c  */
#line 4737 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 4745 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 648:

/* Line 1455 of yacc.c  */
#line 4755 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 4759 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 4767 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 651:

/* Line 1455 of yacc.c  */
#line 4771 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 4781 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 653:

/* Line 1455 of yacc.c  */
#line 4788 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 654:

/* Line 1455 of yacc.c  */
#line 4797 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 4799 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 656:

/* Line 1455 of yacc.c  */
#line 4801 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 657:

/* Line 1455 of yacc.c  */
#line 4803 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 4809 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 4813 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 673:

/* Line 1455 of yacc.c  */
#line 4848 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 674:

/* Line 1455 of yacc.c  */
#line 4856 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 675:

/* Line 1455 of yacc.c  */
#line 4860 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 676:

/* Line 1455 of yacc.c  */
#line 4865 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_SCHEMA_DOCUMENT);
  }
    break;

  case 677:

/* Line 1455 of yacc.c  */
#line 4874 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 678:

/* Line 1455 of yacc.c  */
#line 4882 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 679:

/* Line 1455 of yacc.c  */
#line 4890 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 680:

/* Line 1455 of yacc.c  */
#line 4894 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 681:

/* Line 1455 of yacc.c  */
#line 4898 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 682:

/* Line 1455 of yacc.c  */
#line 4906 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 4910 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 4914 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 4923 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 4931 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 4944 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 4948 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 691:

/* Line 1455 of yacc.c  */
#line 4952 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 692:

/* Line 1455 of yacc.c  */
#line 4956 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 4966 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 4974 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 4994 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 5006 "../src/parser/XQParser.y"
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

  case 702:

/* Line 1455 of yacc.c  */
#line 5021 "../src/parser/XQParser.y"
    {
}
    break;

  case 703:

/* Line 1455 of yacc.c  */
#line 5024 "../src/parser/XQParser.y"
    {
}
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 5030 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 5034 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 5044 "../src/parser/XQParser.y"
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

  case 708:

/* Line 1455 of yacc.c  */
#line 5061 "../src/parser/XQParser.y"
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

  case 710:

/* Line 1455 of yacc.c  */
#line 5077 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 712:

/* Line 1455 of yacc.c  */
#line 5087 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 715:

/* Line 1455 of yacc.c  */
#line 5097 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 716:

/* Line 1455 of yacc.c  */
#line 5106 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 717:

/* Line 1455 of yacc.c  */
#line 5111 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 719:

/* Line 1455 of yacc.c  */
#line 5121 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 720:

/* Line 1455 of yacc.c  */
#line 5125 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 721:

/* Line 1455 of yacc.c  */
#line 5133 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 5138 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 5147 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 724:

/* Line 1455 of yacc.c  */
#line 5151 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 5155 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5159 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 5163 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 5167 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5177 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 5188 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 5194 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 5200 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 5206 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 735:

/* Line 1455 of yacc.c  */
#line 5221 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 5225 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 5229 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 5233 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 739:

/* Line 1455 of yacc.c  */
#line 5237 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 740:

/* Line 1455 of yacc.c  */
#line 5241 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 5245 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 5249 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5257 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5261 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5265 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 5273 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 5277 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 5313 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
  }
    break;

  case 759:

/* Line 1455 of yacc.c  */
#line 5317 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
  }
    break;

  case 760:

/* Line 1455 of yacc.c  */
#line 5321 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
  }
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 5325 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
  }
    break;

  case 762:

/* Line 1455 of yacc.c  */
#line 5334 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 763:

/* Line 1455 of yacc.c  */
#line 5338 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 5346 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 765:

/* Line 1455 of yacc.c  */
#line 5350 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 5360 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 5364 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 5368 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5372 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 5376 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 5383 "../src/parser/XQParser.y"
    {
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5386 "../src/parser/XQParser.y"
    {
  }
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 5393 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5397 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5401 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5405 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5415 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5419 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5423 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5430 "../src/parser/XQParser.y"
    {
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5433 "../src/parser/XQParser.y"
    {
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5441 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5445 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 5452 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 5456 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 5464 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 5468 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5476 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5484 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5488 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5496 "../src/parser/XQParser.y"
    {
}
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5503 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5511 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5516 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5521 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5533 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5537 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5541 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5545 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5549 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5560 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5571 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5575 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 5585 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 5593 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 5600 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 811:

/* Line 1455 of yacc.c  */
#line 5605 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 5613 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5622 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 5634 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 815:

/* Line 1455 of yacc.c  */
#line 5646 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE,
                  MEMMGR));
  }
    break;

  case 816:

/* Line 1455 of yacc.c  */
#line 5659 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING,
                  MEMMGR));
  }
    break;

  case 817:

/* Line 1455 of yacc.c  */
#line 5670 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 5679 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5691 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, 0, (yyvsp[(5) - (5)].astNode), 0, MEMMGR));
  }
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 5695 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, (yyvsp[(5) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), MEMMGR));
  }
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 5699 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), 0, (yyvsp[(8) - (8)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 5704 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), (yyvsp[(8) - (10)].argSpecs), (yyvsp[(10) - (10)].astNode), (yyvsp[(9) - (10)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 823:

/* Line 1455 of yacc.c  */
#line 5709 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), 0, (yyvsp[(6) - (6)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 824:

/* Line 1455 of yacc.c  */
#line 5714 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), (yyvsp[(6) - (8)].argSpecs), (yyvsp[(8) - (8)].astNode), (yyvsp[(7) - (8)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 5722 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 5726 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 5734 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 5738 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5745 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5750 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 5758 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 832:

/* Line 1455 of yacc.c  */
#line 5763 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 833:

/* Line 1455 of yacc.c  */
#line 5772 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 5776 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 5780 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 5788 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 5792 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 838:

/* Line 1455 of yacc.c  */
#line 5800 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 839:

/* Line 1455 of yacc.c  */
#line 5804 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 5808 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 5812 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 842:

/* Line 1455 of yacc.c  */
#line 5820 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 843:

/* Line 1455 of yacc.c  */
#line 5824 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 844:

/* Line 1455 of yacc.c  */
#line 5828 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 845:

/* Line 1455 of yacc.c  */
#line 5836 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 846:

/* Line 1455 of yacc.c  */
#line 5841 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 847:

/* Line 1455 of yacc.c  */
#line 5851 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 850:

/* Line 1455 of yacc.c  */
#line 5868 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 851:

/* Line 1455 of yacc.c  */
#line 5876 "../src/parser/XQParser.y"
    {
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(2) - (4)].argSpecs), (yyvsp[(4) - (4)].astNode), (yyvsp[(3) - (4)].sequenceType), 0, false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 852:

/* Line 1455 of yacc.c  */
#line 5886 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 853:

/* Line 1455 of yacc.c  */
#line 5891 "../src/parser/XQParser.y"
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

  case 856:

/* Line 1455 of yacc.c  */
#line 5919 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  }
    break;

  case 857:

/* Line 1455 of yacc.c  */
#line 5927 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  }
    break;

  case 858:

/* Line 1455 of yacc.c  */
#line 5931 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  }
    break;

  case 859:

/* Line 1455 of yacc.c  */
#line 5938 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  }
    break;

  case 860:

/* Line 1455 of yacc.c  */
#line 5943 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 861:

/* Line 1455 of yacc.c  */
#line 5952 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;



/* Line 1455 of yacc.c  */
#line 12297 "../src/parser/XQParser.cpp"
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
#line 5987 "../src/parser/XQParser.y"


}  // namespace XQParser


