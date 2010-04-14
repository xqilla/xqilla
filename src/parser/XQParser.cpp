
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
static const XMLCh option_projection[] = { 'p', 'r', 'o', 'j', 'e', 'c', 't', 'i', 'o', 'n', 0 };
static const XMLCh option_psvi[] = { 'p', 's', 'v', 'i', 0 };
static const XMLCh option_lint[] = { 'l', 'i', 'n', 't', 0 };
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
#line 399 "../src/parser/XQParser.cpp"

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
#line 1107 "../src/parser/XQParser.cpp"

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
#define YYFINAL  343
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8195

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  327
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  359
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1046
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1714

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
       0,     0,     3,     6,     8,    11,    14,    17,    20,    23,
      26,    29,    32,    41,    42,    44,    48,    51,    58,    59,
      62,    71,    73,    78,    80,    81,    84,    87,    88,    91,
      94,    97,   100,   103,   106,   111,   113,   117,   120,   124,
     128,   132,   133,   136,   139,   142,   144,   146,   148,   153,
     155,   158,   162,   165,   166,   169,   173,   175,   178,   182,
     186,   189,   192,   196,   198,   201,   205,   209,   212,   215,
     219,   221,   224,   228,   232,   235,   237,   240,   244,   247,
     251,   254,   257,   260,   263,   266,   269,   272,   275,   278,
     281,   284,   288,   291,   293,   295,   297,   299,   301,   303,
     306,   309,   311,   314,   317,   321,   325,   330,   331,   335,
     338,   339,   342,   345,   346,   349,   352,   355,   357,   359,
     361,   363,   365,   367,   369,   371,   373,   375,   377,   379,
     381,   383,   385,   387,   389,   391,   395,   397,   401,   405,
     409,   411,   413,   417,   419,   423,   427,   429,   431,   433,
     434,   437,   441,   443,   446,   447,   450,   454,   456,   459,
     463,   467,   470,   473,   477,   481,   485,   490,   492,   495,
     499,   503,   504,   508,   513,   515,   519,   523,   527,   528,
     532,   533,   537,   542,   544,   547,   551,   555,   559,   561,
     565,   569,   571,   575,   579,   583,   585,   589,   591,   595,
     599,   603,   607,   611,   613,   617,   621,   625,   627,   631,
     635,   638,   640,   644,   647,   651,   653,   656,   659,   663,
     665,   669,   673,   675,   677,   679,   681,   683,   685,   690,
     697,   699,   701,   703,   705,   707,   710,   714,   718,   722,
     726,   729,   731,   735,   739,   742,   743,   748,   751,   754,
     756,   758,   761,   764,   765,   769,   773,   777,   781,   785,
     789,   793,   797,   799,   801,   803,   805,   807,   809,   811,
     814,   817,   819,   821,   824,   827,   828,   832,   836,   840,
     844,   848,   852,   856,   860,   864,   867,   870,   872,   874,
     877,   880,   881,   885,   889,   893,   897,   901,   905,   909,
     913,   916,   919,   921,   923,   927,   932,   936,   939,   942,
     945,   948,   955,   956,   960,   964,   968,   972,   976,   980,
     984,   988,   992,   994,   996,   998,  1000,  1002,  1004,  1006,
    1008,  1010,  1012,  1014,  1020,  1024,  1028,  1034,  1040,  1045,
    1049,  1053,  1057,  1063,  1069,  1075,  1077,  1079,  1081,  1083,
    1088,  1092,  1098,  1103,  1104,  1107,  1111,  1115,  1119,  1127,
    1132,  1139,  1142,  1144,  1148,  1152,  1160,  1162,  1164,  1167,
    1171,  1173,  1175,  1176,  1179,  1182,  1185,  1187,  1189,  1191,
    1193,  1194,  1197,  1201,  1203,  1207,  1211,  1213,  1217,  1219,
    1221,  1223,  1225,  1227,  1229,  1231,  1233,  1235,  1237,  1239,
    1241,  1243,  1247,  1249,  1252,  1255,  1257,  1259,  1261,  1263,
    1265,  1268,  1272,  1274,  1282,  1283,  1287,  1288,  1292,  1295,
    1299,  1301,  1307,  1313,  1316,  1320,  1324,  1329,  1333,  1335,
    1339,  1345,  1347,  1348,  1350,  1352,  1353,  1356,  1359,  1364,
    1369,  1373,  1375,  1381,  1388,  1391,  1393,  1399,  1403,  1407,
    1411,  1415,  1416,  1420,  1429,  1433,  1435,  1439,  1441,  1445,
    1449,  1450,  1455,  1459,  1463,  1467,  1471,  1475,  1479,  1483,
    1487,  1491,  1495,  1499,  1503,  1505,  1510,  1516,  1518,  1522,
    1524,  1528,  1532,  1534,  1538,  1542,  1546,  1550,  1552,  1556,
    1560,  1562,  1566,  1570,  1572,  1577,  1579,  1584,  1586,  1591,
    1593,  1598,  1600,  1603,  1606,  1608,  1610,  1612,  1614,  1619,
    1625,  1631,  1635,  1640,  1642,  1645,  1650,  1652,  1655,  1657,
    1660,  1663,  1665,  1667,  1671,  1675,  1677,  1679,  1681,  1683,
    1685,  1687,  1692,  1694,  1699,  1702,  1704,  1707,  1710,  1713,
    1716,  1719,  1722,  1725,  1728,  1731,  1733,  1736,  1738,  1741,
    1744,  1747,  1750,  1753,  1755,  1757,  1759,  1761,  1763,  1765,
    1767,  1769,  1771,  1776,  1778,  1780,  1782,  1784,  1786,  1788,
    1790,  1792,  1794,  1796,  1798,  1800,  1802,  1804,  1806,  1809,
    1811,  1815,  1818,  1820,  1825,  1830,  1834,  1839,  1843,  1845,
    1847,  1849,  1851,  1853,  1855,  1857,  1859,  1865,  1876,  1878,
    1880,  1881,  1889,  1897,  1898,  1900,  1904,  1908,  1912,  1916,
    1917,  1920,  1923,  1924,  1927,  1930,  1931,  1934,  1937,  1938,
    1941,  1944,  1945,  1948,  1951,  1954,  1957,  1961,  1962,  1964,
    1968,  1970,  1973,  1975,  1977,  1979,  1981,  1983,  1985,  1987,
    1992,  1996,  1998,  2002,  2005,  2009,  2013,  2015,  2019,  2023,
    2028,  2033,  2037,  2039,  2043,  2046,  2050,  2053,  2054,  2056,
    2057,  2060,  2063,  2067,  2068,  2070,  2072,  2074,  2076,  2080,
    2082,  2084,  2086,  2088,  2090,  2092,  2094,  2096,  2098,  2100,
    2102,  2104,  2106,  2108,  2112,  2116,  2121,  2126,  2130,  2134,
    2138,  2142,  2147,  2152,  2156,  2161,  2168,  2170,  2172,  2177,
    2179,  2183,  2188,  2195,  2203,  2205,  2207,  2212,  2214,  2216,
    2218,  2220,  2222,  2226,  2227,  2230,  2231,  2234,  2238,  2240,
    2244,  2246,  2251,  2253,  2256,  2258,  2260,  2263,  2266,  2270,
    2272,  2275,  2280,  2284,  2289,  2290,  2292,  2295,  2297,  2300,
    2302,  2303,  2307,  2310,  2314,  2318,  2323,  2325,  2329,  2333,
    2336,  2339,  2342,  2345,  2348,  2350,  2352,  2354,  2356,  2358,
    2361,  2365,  2367,  2369,  2371,  2373,  2375,  2377,  2379,  2381,
    2384,  2387,  2389,  2391,  2394,  2397,  2399,  2402,  2405,  2408,
    2414,  2420,  2423,  2424,  2428,  2431,  2436,  2441,  2448,  2453,
    2457,  2462,  2463,  2466,  2469,  2473,  2475,  2479,  2482,  2485,
    2488,  2490,  2493,  2497,  2501,  2505,  2509,  2513,  2520,  2527,
    2532,  2537,  2542,  2545,  2548,  2551,  2554,  2557,  2565,  2571,
    2577,  2584,  2588,  2590,  2595,  2597,  2599,  2601,  2603,  2605,
    2607,  2613,  2621,  2630,  2641,  2648,  2657,  2658,  2661,  2664,
    2668,  2669,  2672,  2674,  2678,  2680,  2682,  2684,  2688,  2696,
    2700,  2708,  2714,  2724,  2726,  2728,  2730,  2732,  2736,  2742,
    2744,  2746,  2750,  2755,  2759,  2764,  2766,  2768,  2773,  2779,
    2786,  2788,  2792,  2796,  2798,  2800,  2802,  2804,  2806,  2808,
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
    3130,  3132,  3134,  3136,  3138,  3140,  3142
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     328,     0,    -1,     3,   475,    -1,   329,    -1,     8,   337,
      -1,    10,   333,    -1,    11,   332,    -1,     4,   421,    -1,
       5,   426,    -1,     6,   430,    -1,     7,   434,    -1,     9,
     330,    -1,   183,   468,   465,   685,   466,   471,   474,   331,
      -1,    -1,   444,    -1,   468,   466,   471,    -1,   334,   335,
      -1,   193,   176,   662,    40,   613,   444,    -1,    -1,   335,
     336,    -1,   183,   468,   465,   685,   466,   471,   474,   444,
      -1,   338,    -1,   252,   339,   340,   251,    -1,   360,    -1,
      -1,   339,   281,    -1,   339,   290,    -1,    -1,   340,   341,
      -1,   340,   345,    -1,   340,   350,    -1,   340,   352,    -1,
     340,   354,    -1,   340,   358,    -1,   342,   347,   363,   251,
      -1,   253,    -1,   342,   304,   411,    -1,   342,   283,    -1,
     342,   307,   344,    -1,   342,   282,   343,    -1,   342,   305,
     591,    -1,    -1,   343,   125,    -1,   343,   321,    -1,   343,
     322,    -1,    55,    -1,    56,    -1,    57,    -1,   346,   347,
     363,   251,    -1,   261,    -1,   346,   283,    -1,   346,   305,
     591,    -1,   346,   295,    -1,    -1,   347,   348,    -1,   349,
     363,   251,    -1,   260,    -1,   349,   283,    -1,   349,   306,
     476,    -1,   349,   305,   591,    -1,   349,   294,    -1,   349,
     293,    -1,   351,   363,   251,    -1,   260,    -1,   351,   283,
      -1,   351,   306,   476,    -1,   351,   305,   591,    -1,   351,
     294,    -1,   351,   293,    -1,   353,   363,   251,    -1,   266,
      -1,   353,   283,    -1,   353,   306,   476,    -1,   353,   305,
     591,    -1,   355,   251,    -1,   279,    -1,   355,   283,    -1,
     355,   313,   356,    -1,   355,   298,    -1,   355,   314,   357,
      -1,   355,   284,    -1,   355,   285,    -1,   355,   286,    -1,
     355,   299,    -1,   355,   300,    -1,   355,   301,    -1,   355,
     287,    -1,   355,   288,    -1,   355,   302,    -1,   355,   289,
      -1,   355,   303,    -1,   355,   315,   357,    -1,   355,   281,
      -1,   324,    -1,   325,    -1,   326,    -1,    66,    -1,   125,
      -1,   125,    -1,   357,   125,    -1,   359,   251,    -1,   280,
      -1,   280,   291,    -1,   280,   292,    -1,   280,   291,   292,
      -1,   280,   292,   291,    -1,   316,   361,   363,   251,    -1,
      -1,   361,   318,   362,    -1,   361,   317,    -1,    -1,   362,
     474,    -1,   362,   118,    -1,    -1,   363,   368,    -1,   363,
     360,    -1,   363,   364,    -1,   365,    -1,   367,    -1,   369,
      -1,   373,    -1,   378,    -1,   382,    -1,   380,    -1,   391,
      -1,   393,    -1,   395,    -1,   397,    -1,   399,    -1,   401,
      -1,   403,    -1,   387,    -1,   405,    -1,   407,    -1,   409,
      -1,   366,   363,   251,    -1,   254,    -1,   366,   306,   476,
      -1,   366,   309,   362,    -1,   255,   368,   251,    -1,   319,
      -1,   320,    -1,   370,   372,   251,    -1,   256,    -1,   370,
     306,   476,    -1,   370,   282,   371,    -1,   125,    -1,   321,
      -1,   323,    -1,    -1,   372,   376,    -1,   374,   375,   251,
      -1,   257,    -1,   374,   283,    -1,    -1,   375,   376,    -1,
     377,   363,   251,    -1,   258,    -1,   377,   283,    -1,   377,
     306,   476,    -1,   377,   305,   591,    -1,   377,   293,    -1,
     379,   251,    -1,   259,   306,   476,    -1,   381,   363,   251,
      -1,   265,   308,   476,    -1,   262,   383,   386,   251,    -1,
     384,    -1,   383,   384,    -1,   385,   363,   251,    -1,   263,
     308,   476,    -1,    -1,   264,   363,   251,    -1,   388,   389,
     390,   251,    -1,   273,    -1,   388,   306,   476,    -1,   388,
     311,   362,    -1,   388,   312,   362,    -1,    -1,   274,   363,
     251,    -1,    -1,   275,   363,   251,    -1,   392,   363,   251,
     363,    -1,   266,    -1,   392,   283,    -1,   392,   306,   476,
      -1,   392,   305,   591,    -1,   394,   363,   251,    -1,   267,
      -1,   394,   306,   476,    -1,   396,   363,   251,    -1,   268,
      -1,   396,   283,   362,    -1,   396,   306,   476,    -1,   398,
     363,   251,    -1,   269,    -1,   400,   363,   251,    -1,   270,
      -1,   400,   283,   362,    -1,   400,   310,   362,    -1,   400,
     306,   476,    -1,   400,   309,   362,    -1,   402,   363,   251,
      -1,   271,    -1,   402,   283,   362,    -1,   402,   306,   476,
      -1,   404,   363,   251,    -1,   272,    -1,   404,   283,   362,
      -1,   404,   310,   362,    -1,   406,   251,    -1,   276,    -1,
     406,   306,   476,    -1,   406,   296,    -1,   408,   363,   251,
      -1,   277,    -1,   408,   296,    -1,   408,   297,    -1,   410,
     363,   251,    -1,   278,    -1,   410,   306,   476,    -1,   411,
      15,   412,    -1,   412,    -1,   417,    -1,    39,    -1,   414,
      -1,    39,    -1,    33,    -1,   235,    43,   415,    44,    -1,
     236,    43,   661,    36,   416,    44,    -1,   661,    -1,   549,
      -1,   547,    -1,   549,    -1,   418,    -1,   413,   418,    -1,
     414,    39,   418,    -1,   414,    33,   418,    -1,   417,    39,
     418,    -1,   417,    33,   418,    -1,   419,   420,    -1,   542,
      -1,    74,    22,   542,    -1,    58,    22,   542,    -1,    23,
     542,    -1,    -1,   420,    24,   476,    25,    -1,   435,   422,
      -1,   435,   423,    -1,   422,    -1,   423,    -1,   424,   475,
      -1,   440,   424,    -1,    -1,   424,   425,   444,    -1,   424,
     443,   444,    -1,   424,   445,   444,    -1,   424,   447,   444,
      -1,   424,   461,   444,    -1,   424,   464,   444,    -1,   424,
     664,   444,    -1,   424,   448,   444,    -1,   446,    -1,   455,
      -1,   456,    -1,   463,    -1,   450,    -1,   451,    -1,   452,
      -1,   435,   427,    -1,   435,   428,    -1,   427,    -1,   428,
      -1,   429,   475,    -1,   440,   429,    -1,    -1,   429,   425,
     444,    -1,   429,   443,   444,    -1,   429,   445,   444,    -1,
     429,   447,   444,    -1,   429,   461,   444,    -1,   429,   464,
     444,    -1,   429,   664,   444,    -1,   429,   448,   444,    -1,
     429,   449,   444,    -1,   435,   431,    -1,   435,   432,    -1,
     431,    -1,   432,    -1,   433,   475,    -1,   440,   433,    -1,
      -1,   433,   442,   444,    -1,   433,   443,   444,    -1,   433,
     445,   444,    -1,   433,   447,   444,    -1,   433,   461,   444,
      -1,   433,   464,   444,    -1,   433,   664,   444,    -1,   433,
     448,   444,    -1,   435,   438,    -1,   435,   439,    -1,   438,
      -1,   439,    -1,   189,   436,   444,    -1,   189,   436,   437,
     444,    -1,   189,   437,   444,    -1,   190,   128,    -1,   179,
     128,    -1,   441,   475,    -1,   440,   441,    -1,   193,   176,
     662,    40,   613,   444,    -1,    -1,   441,   442,   444,    -1,
     441,   443,   444,    -1,   441,   445,   444,    -1,   441,   447,
     444,    -1,   441,   461,   444,    -1,   441,   464,   444,    -1,
     441,   664,   444,    -1,   441,   448,   444,    -1,   441,   449,
     444,    -1,   446,    -1,   455,    -1,   456,    -1,   463,    -1,
     450,    -1,   451,    -1,   648,    -1,   452,    -1,   457,    -1,
     460,    -1,    53,    -1,   183,   176,   662,    40,   613,    -1,
     183,    68,   174,    -1,   183,    68,   175,    -1,   183,   186,
     194,   176,   613,    -1,   183,   186,   465,   176,   613,    -1,
     183,   188,   684,   128,    -1,   183,    69,   631,    -1,   183,
     185,   123,    -1,   183,   185,   124,    -1,   183,   186,   141,
     145,   146,    -1,   183,   186,   141,   145,   147,    -1,   183,
     187,   453,    36,   454,    -1,   174,    -1,   180,    -1,   181,
      -1,   182,    -1,   183,   186,   148,   613,    -1,   183,    70,
     613,    -1,   191,   192,   459,   613,   458,    -1,   191,   192,
     613,   458,    -1,    -1,   117,   613,    -1,   458,    36,   613,
      -1,   176,   662,    40,    -1,   186,   194,   176,    -1,   191,
     193,   176,   662,    40,   613,   458,    -1,   191,   193,   613,
     458,    -1,   183,   129,    12,   550,   590,   462,    -1,    13,
     477,    -1,   178,    -1,   183,   184,   174,    -1,   183,   184,
     175,    -1,   183,   468,   465,   685,   466,   471,   467,    -1,
     195,    -1,   196,    -1,    43,    44,    -1,    43,   472,    44,
      -1,   474,    -1,   178,    -1,    -1,   468,   469,    -1,   468,
     470,    -1,   468,   234,    -1,   247,    -1,   248,    -1,   249,
      -1,   250,    -1,    -1,   155,   591,    -1,   472,    36,   473,
      -1,   473,    -1,    12,   550,   590,    -1,    51,   476,    52,
      -1,   476,    -1,   476,    36,   477,    -1,   477,    -1,   478,
      -1,   498,    -1,   501,    -1,   507,    -1,   649,    -1,   651,
      -1,   654,    -1,   653,    -1,   655,    -1,   508,    -1,   670,
      -1,   671,    -1,   479,   134,   477,    -1,   480,    -1,   479,
     492,    -1,   479,   481,    -1,   482,    -1,   487,    -1,   480,
      -1,   490,    -1,   491,    -1,   135,   483,    -1,   483,    36,
     484,    -1,   484,    -1,    12,   550,   590,   485,   486,   136,
     477,    -1,    -1,   117,    12,   550,    -1,    -1,   197,    12,
     550,    -1,   137,   488,    -1,   488,    36,   489,    -1,   489,
      -1,    12,   550,   590,    13,   477,    -1,   197,    12,   550,
      13,   477,    -1,   138,   477,    -1,   139,    12,   550,    -1,
     141,   140,   493,    -1,   142,   141,   140,   493,    -1,   493,
      36,   494,    -1,   494,    -1,   495,   496,   497,    -1,   495,
     496,   497,   148,   613,    -1,   477,    -1,    -1,   143,    -1,
     144,    -1,    -1,   145,   146,    -1,   145,   147,    -1,   149,
     499,   151,   477,    -1,   150,   499,   151,   477,    -1,   499,
      36,   500,    -1,   500,    -1,    12,   550,   590,   136,   477,
      -1,   152,    43,   476,    44,   502,   503,    -1,   502,   504,
      -1,   504,    -1,   186,    12,   550,   134,   477,    -1,   186,
     134,   477,    -1,   505,   134,   477,    -1,   153,   506,   591,
      -1,   505,    15,   591,    -1,    -1,    12,   550,   155,    -1,
     156,    43,   476,    44,   157,   477,   158,   477,    -1,   508,
     159,   509,    -1,   509,    -1,   509,   160,   510,    -1,   510,
      -1,   512,    40,   512,    -1,   512,    16,   512,    -1,    -1,
     512,    27,   511,   512,    -1,   512,    17,   512,    -1,   512,
      18,   512,    -1,   512,    19,   512,    -1,   512,   111,   512,
      -1,   512,   112,   512,    -1,   512,   113,   512,    -1,   512,
     114,   512,    -1,   512,   115,   512,    -1,   512,   116,   512,
      -1,   512,   173,   512,    -1,   512,    20,   512,    -1,   512,
      21,   512,    -1,   512,    -1,   513,   198,    66,   614,    -1,
     513,   198,    66,   614,   647,    -1,   513,    -1,   514,   164,
     514,    -1,   514,    -1,   514,    37,   515,    -1,   514,    38,
     515,    -1,   515,    -1,   515,    14,   516,    -1,   515,   165,
     516,    -1,   515,    73,   516,    -1,   515,   166,   516,    -1,
     516,    -1,   516,    15,   517,    -1,   516,   167,   517,    -1,
     517,    -1,   517,   168,   518,    -1,   517,   169,   518,    -1,
     518,    -1,   519,   161,   162,   591,    -1,   519,    -1,   520,
     172,   155,   591,    -1,   520,    -1,   521,   163,   155,   588,
      -1,   521,    -1,   522,   171,   155,   588,    -1,   522,    -1,
      38,   522,    -1,    37,   522,    -1,   523,    -1,   524,    -1,
     529,    -1,   525,    -1,   170,    51,   476,    52,    -1,   170,
      71,    51,   476,    52,    -1,   170,    72,    51,   476,    52,
      -1,   526,    51,    52,    -1,   526,    51,   476,    52,    -1,
     527,    -1,   526,   527,    -1,    35,   563,   684,   528,    -1,
     133,    -1,   108,   133,    -1,   530,    -1,   530,   531,    -1,
      33,   531,    -1,   531,    -1,    39,    -1,   531,    39,   532,
      -1,   531,    33,   532,    -1,   532,    -1,   533,    -1,   545,
      -1,   534,    -1,   535,    -1,   536,    -1,   534,    24,   476,
      25,    -1,   539,    -1,   535,    24,   476,    25,    -1,   537,
     542,    -1,   538,    -1,    74,    22,    -1,    75,    22,    -1,
      58,    22,    -1,    76,    22,    -1,    77,    22,    -1,    78,
      22,    -1,    79,    22,    -1,   176,    22,    -1,    23,   542,
      -1,   542,    -1,   540,   542,    -1,   541,    -1,    80,    22,
      -1,    81,    22,    -1,    82,    22,    -1,    83,    22,    -1,
      84,    22,    -1,    42,    -1,   595,    -1,   543,    -1,   663,
      -1,   544,    -1,    14,    -1,   130,    -1,   131,    -1,   546,
      -1,   545,    24,   476,    25,    -1,   678,    -1,   547,    -1,
     549,    -1,   551,    -1,   552,    -1,   555,    -1,   558,    -1,
     553,    -1,   554,    -1,   675,    -1,   548,    -1,   661,    -1,
     658,    -1,   659,    -1,   660,    -1,    12,   550,    -1,   684,
      -1,    43,   476,    44,    -1,    43,    44,    -1,    41,    -1,
     123,    51,   476,    52,    -1,   124,    51,   476,    52,    -1,
     685,    43,    44,    -1,   685,    43,   556,    44,    -1,   556,
      36,   557,    -1,   557,    -1,   477,    -1,    26,    -1,   559,
      -1,   575,    -1,   560,    -1,   571,    -1,   573,    -1,    27,
     561,   562,   563,    45,    -1,    27,   561,   562,   563,    28,
     570,    34,   561,   563,    29,    -1,   125,    -1,   126,    -1,
      -1,   562,   108,   125,   563,    46,   563,   564,    -1,   562,
     108,   126,   563,    46,   563,   565,    -1,    -1,   108,    -1,
      47,   566,    48,    -1,    49,   568,    50,    -1,    47,   567,
      48,    -1,    49,   569,    50,    -1,    -1,   566,   474,    -1,
     566,   118,    -1,    -1,   567,   474,    -1,   567,   118,    -1,
      -1,   568,   474,    -1,   568,   119,    -1,    -1,   569,   474,
      -1,   569,   119,    -1,    -1,   570,   559,    -1,   570,   474,
      -1,   570,   121,    -1,   570,   120,    -1,    31,   572,    32,
      -1,    -1,   110,    -1,    30,   132,   574,    -1,   109,    -1,
     108,   109,    -1,   576,    -1,   577,    -1,   580,    -1,   582,
      -1,   583,    -1,   584,    -1,   585,    -1,    85,    51,   476,
      52,    -1,   194,   578,   579,    -1,   127,    -1,    51,   476,
      52,    -1,    51,    52,    -1,    51,   476,    52,    -1,    58,
     581,   579,    -1,   127,    -1,    51,   476,    52,    -1,   176,
     586,   579,    -1,    66,    51,   476,    52,    -1,    59,    51,
     476,    52,    -1,    63,   586,   587,    -1,   127,    -1,    51,
     476,    52,    -1,    51,    52,    -1,    51,   476,    52,    -1,
     594,   589,    -1,    -1,    26,    -1,    -1,   155,   591,    -1,
     593,   592,    -1,    67,    43,    44,    -1,    -1,    14,    -1,
      37,    -1,    26,    -1,   594,    -1,   177,    43,    44,    -1,
     595,    -1,   679,    -1,   683,    -1,   663,    -1,   597,    -1,
     606,    -1,   602,    -1,   608,    -1,   604,    -1,   601,    -1,
     599,    -1,   598,    -1,   600,    -1,   596,    -1,    62,    43,
      44,    -1,    60,    43,    44,    -1,    60,    43,   606,    44,
      -1,    60,    43,   608,    44,    -1,    66,    43,    44,    -1,
      59,    43,    44,    -1,    61,    43,    44,    -1,    63,    43,
      44,    -1,    63,    43,   662,    44,    -1,    63,    43,   128,
      44,    -1,    58,    43,    44,    -1,    58,    43,   603,    44,
      -1,    58,    43,   603,    36,   612,    44,    -1,   610,    -1,
      14,    -1,    64,    43,   605,    44,    -1,   610,    -1,   194,
      43,    44,    -1,   194,    43,   607,    44,    -1,   194,    43,
     607,    36,   612,    44,    -1,   194,    43,   607,    36,   612,
      26,    44,    -1,   611,    -1,    14,    -1,    65,    43,   609,
      44,    -1,   611,    -1,   663,    -1,   663,    -1,   663,    -1,
     128,    -1,   617,   616,   615,    -1,    -1,   199,   513,    -1,
      -1,   616,   628,    -1,   617,   244,   618,    -1,   618,    -1,
     618,   245,   619,    -1,   619,    -1,   619,    86,   136,   620,
      -1,   620,    -1,   246,   621,    -1,   621,    -1,   622,    -1,
     622,   631,    -1,   623,   626,    -1,    43,   614,    44,    -1,
     624,    -1,   547,   625,    -1,    51,   476,    52,   625,    -1,
     526,    51,    52,    -1,   526,    51,   614,    52,    -1,    -1,
     211,    -1,   211,   100,    -1,   212,    -1,   212,   216,    -1,
     213,    -1,    -1,   202,   627,   203,    -1,   214,   514,    -1,
     122,   147,   514,    -1,   122,   104,   514,    -1,   215,   514,
     164,   514,    -1,   123,    -1,   200,   514,   629,    -1,   201,
     627,   629,    -1,   204,   630,    -1,   205,   630,    -1,   117,
     102,    -1,   117,   103,    -1,    98,    99,    -1,   216,    -1,
     217,    -1,   218,    -1,   219,    -1,   220,    -1,    87,   632,
      -1,   631,    87,   632,    -1,   644,    -1,   645,    -1,   636,
      -1,   635,    -1,   633,    -1,   634,    -1,   639,    -1,   646,
      -1,   154,    90,    -1,   154,    89,    -1,   206,    -1,   207,
      -1,    91,    90,    -1,    91,    89,    -1,    94,    -1,    88,
      94,    -1,    95,   638,    -1,    95,   186,    -1,    95,    43,
     638,   637,    44,    -1,    95,    43,   186,   637,    44,    -1,
      88,    95,    -1,    -1,   637,    36,   638,    -1,   117,   613,
      -1,   117,   613,   208,   661,    -1,   117,   613,   627,   209,
      -1,   117,   613,   208,   661,   627,   209,    -1,    96,   216,
     641,   640,    -1,    88,    96,   216,    -1,    96,   216,   186,
     640,    -1,    -1,   640,   643,    -1,   117,   613,    -1,    43,
     642,    44,    -1,   661,    -1,   642,    36,   661,    -1,   167,
     641,    -1,   169,   641,    -1,   210,   661,    -1,    97,    -1,
      88,    97,    -1,   188,   684,   128,    -1,    93,    99,   516,
      -1,   183,   227,    72,    -1,   183,   227,    71,    -1,   183,
     227,   105,    -1,   650,   477,   155,   223,   233,   477,    -1,
     650,   477,   155,   231,   233,   477,    -1,   650,   477,   233,
     477,    -1,   650,   477,   226,   477,    -1,   650,   477,   225,
     477,    -1,   224,    62,    -1,   224,   229,    -1,   652,   477,
      -1,   232,    62,    -1,   232,   229,    -1,   221,   107,   162,
      62,   477,   228,   477,    -1,   221,    62,   477,   228,   477,
      -1,   230,    62,   477,   155,   477,    -1,   106,   656,   222,
     477,   134,   477,    -1,   656,    36,   657,    -1,   657,    -1,
      12,   550,    13,   477,    -1,    55,    -1,    56,    -1,    57,
      -1,   128,    -1,   684,    -1,   684,    -1,   183,   237,   239,
     684,   474,    -1,   183,   237,   239,   684,   666,   665,   474,
      -1,   183,   237,   239,   684,   667,   238,   411,   474,    -1,
     183,   237,   239,   684,   667,   238,   411,   666,   665,   474,
      -1,   183,   237,   667,   238,   411,   474,    -1,   183,   237,
     667,   238,   411,   666,   665,   474,    -1,    -1,   155,   591,
      -1,    43,    44,    -1,    43,   472,    44,    -1,    -1,   243,
     668,    -1,   669,    -1,   668,    36,   669,    -1,   125,    -1,
     321,    -1,   322,    -1,   240,   237,   684,    -1,   240,   237,
     684,   228,    43,   673,    44,    -1,   241,   242,   477,    -1,
     241,   242,   477,   228,    43,   673,    44,    -1,   241,   242,
     477,   243,   672,    -1,   241,   242,   477,   243,   672,   228,
      43,   673,    44,    -1,   684,    -1,   321,    -1,   323,    -1,
     674,    -1,   673,    36,   674,    -1,    12,   550,   590,    13,
     477,    -1,   676,    -1,   677,    -1,   685,    54,    55,    -1,
     196,   466,   590,   474,    -1,   545,    43,    44,    -1,   545,
      43,   556,    44,    -1,   680,    -1,   681,    -1,   196,    43,
      14,    44,    -1,   196,    43,    44,   155,   591,    -1,   196,
      43,   682,    44,   155,   591,    -1,   591,    -1,   682,    36,
     591,    -1,    43,   593,    44,    -1,   685,    -1,    58,    -1,
      59,    -1,    60,    -1,   194,    -1,   177,    -1,   156,    -1,
      62,    -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,
     152,    -1,    67,    -1,   196,    -1,    61,    -1,   125,    -1,
      68,    -1,    69,    -1,    70,    -1,    71,    -1,    72,    -1,
      73,    -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,
      78,    -1,    79,    -1,    80,    -1,    81,    -1,    82,    -1,
      83,    -1,    84,    -1,    85,    -1,    86,    -1,    89,    -1,
      90,    -1,    91,    -1,    92,    -1,    94,    -1,    95,    -1,
      96,    -1,    97,    -1,    98,    -1,    99,    -1,   100,    -1,
     101,    -1,   102,    -1,   103,    -1,   104,    -1,   105,    -1,
     106,    -1,   107,    -1,   111,    -1,   112,    -1,   113,    -1,
     114,    -1,   115,    -1,   116,    -1,   117,    -1,   129,    -1,
     134,    -1,   135,    -1,   136,    -1,   137,    -1,   138,    -1,
     140,    -1,   141,    -1,   142,    -1,   143,    -1,   144,    -1,
     145,    -1,   146,    -1,   147,    -1,   148,    -1,   149,    -1,
     150,    -1,   151,    -1,   153,    -1,   155,    -1,   157,    -1,
     158,    -1,   159,    -1,   160,    -1,   161,    -1,   162,    -1,
     163,    -1,   164,    -1,   165,    -1,   166,    -1,   167,    -1,
     168,    -1,   169,    -1,   170,    -1,   171,    -1,   172,    -1,
     173,    -1,   174,    -1,   175,    -1,   176,    -1,   178,    -1,
     179,    -1,   180,    -1,   181,    -1,   182,    -1,   183,    -1,
     184,    -1,   185,    -1,   186,    -1,   187,    -1,   188,    -1,
     190,    -1,   191,    -1,   192,    -1,   195,    -1,   197,    -1,
      87,    -1,    88,    -1,   198,    -1,   199,    -1,   200,    -1,
     201,    -1,   202,    -1,   203,    -1,   204,    -1,   205,    -1,
     206,    -1,   207,    -1,   208,    -1,   209,    -1,   210,    -1,
     211,    -1,   212,    -1,   213,    -1,   214,    -1,   215,    -1,
     216,    -1,   217,    -1,   218,    -1,   219,    -1,   220,    -1,
     221,    -1,   222,    -1,   223,    -1,   224,    -1,   225,    -1,
     226,    -1,   227,    -1,   228,    -1,   229,    -1,   230,    -1,
     231,    -1,   232,    -1,   233,    -1,   234,    -1,   123,    -1,
     124,    -1,   235,    -1,   236,    -1,   237,    -1,   238,    -1,
     239,    -1,   240,    -1,   241,    -1,   242,    -1,   243,    -1,
     244,    -1,   245,    -1,   246,    -1,   247,    -1,   248,    -1,
     249,    -1,   250,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   768,   768,   773,   783,   785,   786,   790,   791,   792,
     793,   794,   798,   806,   806,   809,   818,   829,   867,   870,
     876,   912,   943,   946,   968,   970,   974,   981,   983,   984,
     985,   986,   987,   988,   992,  1011,  1016,  1021,  1028,  1033,
    1038,  1047,  1050,  1056,  1061,  1068,  1068,  1068,  1071,  1084,
    1089,  1096,  1101,  1110,  1113,  1121,  1148,  1152,  1159,  1165,
    1170,  1175,  1184,  1208,  1212,  1219,  1224,  1229,  1234,  1245,
    1263,  1267,  1274,  1279,  1287,  1312,  1315,  1318,  1321,  1324,
    1327,  1330,  1333,  1336,  1339,  1342,  1345,  1348,  1351,  1354,
    1357,  1360,  1363,  1369,  1370,  1371,  1372,  1373,  1385,  1388,
    1393,  1396,  1401,  1406,  1414,  1422,  1433,  1444,  1447,  1454,
    1464,  1467,  1472,  1483,  1486,  1491,  1496,  1504,  1505,  1506,
    1507,  1508,  1509,  1510,  1511,  1512,  1513,  1514,  1515,  1516,
    1517,  1518,  1519,  1520,  1521,  1525,  1543,  1547,  1552,  1561,
    1567,  1567,  1570,  1590,  1594,  1599,  1607,  1612,  1616,  1624,
    1627,  1635,  1648,  1652,  1663,  1666,  1674,  1692,  1696,  1703,
    1708,  1713,  1721,  1727,  1735,  1743,  1750,  1764,  1768,  1782,
    1791,  1799,  1802,  1809,  1844,  1848,  1853,  1859,  1869,  1872,
    1880,  1883,  1890,  1908,  1912,  1919,  1924,  1932,  1950,  1954,
    1962,  1984,  1988,  1995,  2003,  2012,  2020,  2057,  2061,  2068,
    2075,  2084,  2093,  2120,  2124,  2131,  2143,  2169,  2173,  2180,
    2190,  2202,  2206,  2211,  2220,  2233,  2237,  2242,  2251,  2265,
    2269,  2282,  2287,  2299,  2303,  2311,  2324,  2332,  2345,  2352,
    2366,  2366,  2369,  2369,  2391,  2395,  2399,  2417,  2435,  2445,
    2459,  2467,  2473,  2479,  2485,  2497,  2500,  2514,  2515,  2516,
    2517,  2521,  2524,  2528,  2530,  2534,  2538,  2542,  2546,  2550,
    2556,  2562,  2576,  2577,  2578,  2579,  2580,  2581,  2582,  2590,
    2591,  2592,  2593,  2597,  2600,  2604,  2606,  2610,  2614,  2618,
    2622,  2626,  2632,  2638,  2642,  2653,  2654,  2655,  2656,  2660,
    2663,  2667,  2669,  2673,  2677,  2681,  2685,  2689,  2695,  2701,
    2712,  2713,  2714,  2715,  2721,  2722,  2723,  2727,  2747,  2764,
    2767,  2771,  2783,  2785,  2789,  2793,  2797,  2801,  2805,  2811,
    2817,  2821,  2835,  2836,  2837,  2838,  2839,  2840,  2841,  2842,
    2846,  2846,  2849,  2853,  2861,  2866,  2875,  2880,  2889,  2949,
    2957,  2962,  2971,  2976,  2985,  2995,  2999,  3007,  3011,  3019,
    3035,  3044,  3056,  3065,  3068,  3073,  3082,  3086,  3094,  3104,
    3116,  3123,  3127,  3135,  3140,  3149,  3157,  3157,  3160,  3164,
    3172,  3173,  3182,  3185,  3198,  3211,  3221,  3221,  3224,  3224,
    3228,  3231,  3239,  3244,  3254,  3262,  3270,  3283,  3298,  3305,
    3306,  3307,  3308,  3309,  3310,  3311,  3312,  3313,  3314,  3315,
    3316,  3321,  3365,  3366,  3379,  3386,  3386,  3389,  3389,  3389,
    3394,  3401,  3405,  3409,  3421,  3424,  3435,  3438,  3448,  3455,
    3459,  3463,  3467,  3480,  3488,  3496,  3501,  3509,  3513,  3519,
    3526,  3541,  3558,  3561,  3565,  3573,  3581,  3585,  3594,  3602,
    3613,  3617,  3621,  3632,  3639,  3648,  3652,  3656,  3664,  3682,
    3687,  3697,  3700,  3708,  3716,  3725,  3730,  3739,  3749,  3753,
    3757,  3757,  3761,  3765,  3769,  3773,  3777,  3781,  3785,  3789,
    3793,  3797,  3801,  3805,  3809,  3814,  3818,  3822,  3827,  3834,
    3839,  3843,  3847,  3852,  3856,  3860,  3864,  3868,  3873,  3877,
    3881,  3886,  3890,  3894,  3899,  3916,  3921,  3926,  3931,  3935,
    3940,  3944,  3949,  3955,  3961,  3966,  3967,  3968,  3976,  3980,
    3984,  3992,  3999,  4008,  4008,  4012,  4032,  4033,  4041,  4042,
    4048,  4069,  4073,  4087,  4093,  4106,  4110,  4110,  4114,  4115,
    4124,  4125,  4131,  4132,  4141,  4153,  4164,  4168,  4172,  4176,
    4180,  4184,  4188,  4192,  4200,  4208,  4225,  4233,  4242,  4246,
    4250,  4254,  4258,  4266,  4278,  4283,  4288,  4295,  4300,  4307,
    4314,  4326,  4327,  4331,  4337,  4338,  4339,  4340,  4341,  4342,
    4343,  4344,  4345,  4349,  4349,  4352,  4352,  4352,  4356,  4363,
    4367,  4371,  4379,  4387,  4397,  4407,  4411,  4434,  4439,  4449,
    4450,  4459,  4463,  4472,  4472,  4472,  4476,  4482,  4491,  4491,
    4496,  4499,  4508,  4519,  4519,  4524,  4528,  4535,  4539,  4550,
    4553,  4558,  4569,  4572,  4576,  4590,  4593,  4598,  4609,  4612,
    4616,  4634,  4637,  4642,  4647,  4654,  4667,  4681,  4684,  4689,
    4708,  4709,  4723,  4724,  4725,  4726,  4727,  4728,  4729,  4734,
    4742,  4750,  4754,  4762,  4766,  4775,  4782,  4786,  4796,  4804,
    4812,  4820,  4827,  4837,  4844,  4848,  4856,  4867,  4870,  4879,
    4882,  4892,  4899,  4909,  4910,  4912,  4914,  4920,  4924,  4928,
    4929,  4930,  4934,  4946,  4947,  4948,  4949,  4950,  4951,  4952,
    4953,  4954,  4955,  4960,  4968,  4972,  4977,  4986,  4994,  5002,
    5011,  5015,  5019,  5027,  5031,  5035,  5043,  5044,  5052,  5060,
    5065,  5069,  5073,  5077,  5086,  5087,  5095,  5102,  5105,  5108,
    5111,  5115,  5127,  5143,  5145,  5152,  5155,  5164,  5176,  5181,
    5193,  5198,  5202,  5207,  5212,  5217,  5218,  5227,  5232,  5236,
    5242,  5246,  5254,  5259,  5269,  5272,  5276,  5280,  5284,  5288,
    5296,  5298,  5309,  5315,  5321,  5327,  5342,  5346,  5350,  5354,
    5358,  5362,  5366,  5370,  5378,  5382,  5386,  5394,  5398,  5406,
    5407,  5419,  5420,  5421,  5422,  5423,  5424,  5425,  5426,  5434,
    5438,  5442,  5446,  5455,  5459,  5467,  5471,  5481,  5485,  5489,
    5493,  5497,  5505,  5507,  5514,  5518,  5522,  5526,  5536,  5540,
    5544,  5552,  5554,  5562,  5566,  5573,  5577,  5585,  5589,  5597,
    5605,  5609,  5617,  5624,  5632,  5637,  5642,  5654,  5658,  5662,
    5666,  5670,  5676,  5676,  5681,  5687,  5687,  5692,  5696,  5706,
    5714,  5721,  5726,  5734,  5743,  5755,  5767,  5780,  5791,  5800,
    5812,  5817,  5822,  5828,  5834,  5840,  5850,  5853,  5861,  5865,
    5873,  5877,  5885,  5890,  5899,  5903,  5907,  5915,  5919,  5927,
    5931,  5935,  5939,  5947,  5951,  5955,  5963,  5968,  5978,  5991,
    5991,  5995,  6003,  6014,  6019,  6043,  6043,  6047,  6055,  6059,
    6066,  6071,  6080,  6089,  6089,  6089,  6089,  6089,  6089,  6089,
    6089,  6090,  6090,  6090,  6090,  6090,  6090,  6091,  6091,  6095,
    6095,  6095,  6095,  6095,  6095,  6095,  6095,  6095,  6095,  6096,
    6096,  6096,  6096,  6096,  6096,  6096,  6097,  6097,  6097,  6097,
    6097,  6097,  6097,  6097,  6098,  6098,  6098,  6098,  6098,  6098,
    6098,  6098,  6098,  6098,  6098,  6099,  6099,  6099,  6099,  6099,
    6099,  6099,  6099,  6099,  6099,  6099,  6099,  6100,  6100,  6100,
    6100,  6100,  6100,  6100,  6100,  6100,  6100,  6101,  6101,  6101,
    6101,  6101,  6101,  6101,  6101,  6101,  6101,  6101,  6101,  6102,
    6102,  6102,  6102,  6102,  6102,  6102,  6102,  6102,  6102,  6102,
    6102,  6103,  6103,  6103,  6103,  6103,  6103,  6103,  6103,  6103,
    6104,  6104,  6104,  6104,  6104,  6104,  6104,  6104,  6105,  6105,
    6105,  6105,  6105,  6105,  6105,  6105,  6105,  6105,  6105,  6106,
    6106,  6106,  6106,  6106,  6106,  6106,  6106,  6106,  6107,  6107,
    6107,  6107,  6107,  6107,  6107,  6107,  6107,  6107,  6108,  6108,
    6108,  6108,  6108,  6108,  6108,  6108,  6108,  6108,  6108,  6109,
    6109,  6109,  6109,  6109,  6109,  6109,  6109,  6109,  6109,  6109,
    6110,  6110,  6110,  6110,  6110,  6110,  6110
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
  "SelectLanguage", "XQueryLanguage", "Start_FunctionDecl",
  "FunctionDecl_MaybeSemicolon", "Start_FunctionSignature",
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
       0,   327,   328,   328,   328,   328,   328,   329,   329,   329,
     329,   329,   330,   331,   331,   332,   333,   334,   335,   335,
     336,   337,   338,   338,   339,   339,   339,   340,   340,   340,
     340,   340,   340,   340,   341,   342,   342,   342,   342,   342,
     342,   343,   343,   343,   343,   344,   344,   344,   345,   346,
     346,   346,   346,   347,   347,   348,   349,   349,   349,   349,
     349,   349,   350,   351,   351,   351,   351,   351,   351,   352,
     353,   353,   353,   353,   354,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   356,   356,   356,   356,   356,   357,   357,
     358,   359,   359,   359,   359,   359,   360,   361,   361,   361,
     362,   362,   362,   363,   363,   363,   363,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   365,   366,   366,   366,   367,
     368,   368,   369,   370,   370,   370,   371,   371,   371,   372,
     372,   373,   374,   374,   375,   375,   376,   377,   377,   377,
     377,   377,   378,   379,   380,   381,   382,   383,   383,   384,
     385,   386,   386,   387,   388,   388,   388,   388,   389,   389,
     390,   390,   391,   392,   392,   392,   392,   393,   394,   394,
     395,   396,   396,   396,   397,   398,   399,   400,   400,   400,
     400,   400,   401,   402,   402,   402,   403,   404,   404,   404,
     405,   406,   406,   406,   407,   408,   408,   408,   409,   410,
     410,   411,   411,   412,   412,   412,   413,   413,   414,   414,
     415,   415,   416,   416,   417,   417,   417,   417,   417,   417,
     418,   419,   419,   419,   419,   420,   420,   421,   421,   421,
     421,   422,   423,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   425,   425,   425,   425,   425,   425,   425,   426,
     426,   426,   426,   427,   428,   429,   429,   429,   429,   429,
     429,   429,   429,   429,   429,   430,   430,   430,   430,   431,
     432,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     434,   434,   434,   434,   435,   435,   435,   436,   437,   438,
     439,   440,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   442,   442,   442,   442,   442,   442,   442,   442,
     443,   443,   444,   445,   446,   446,   447,   447,   448,   449,
     450,   450,   451,   451,   452,   453,   453,   454,   454,   455,
     456,   457,   457,   458,   458,   458,   459,   459,   460,   460,
     461,   462,   462,   463,   463,   464,   465,   465,   466,   466,
     467,   467,   468,   468,   468,   468,   469,   469,   470,   470,
     471,   471,   472,   472,   473,   474,   475,   476,   476,   477,
     477,   477,   477,   477,   477,   477,   477,   477,   477,   477,
     477,   478,   479,   479,   479,   480,   480,   481,   481,   481,
     482,   483,   483,   484,   485,   485,   486,   486,   487,   488,
     488,   489,   489,   490,   491,   492,   492,   493,   493,   494,
     494,   495,   496,   496,   496,   497,   497,   497,   498,   498,
     499,   499,   500,   501,   502,   502,   503,   503,   504,   505,
     505,   506,   506,   507,   508,   508,   509,   509,   510,   510,
     511,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   512,   512,   512,   513,   513,
     514,   514,   514,   515,   515,   515,   515,   515,   516,   516,
     516,   517,   517,   517,   518,   518,   519,   519,   520,   520,
     521,   521,   522,   522,   522,   523,   523,   523,   524,   524,
     524,   525,   525,   526,   526,   527,   528,   528,   529,   529,
     529,   529,   530,   531,   531,   531,   532,   532,   533,   533,
     534,   534,   535,   535,   536,   536,   537,   537,   537,   537,
     537,   537,   537,   537,   538,   538,   539,   539,   540,   540,
     540,   540,   540,   541,   542,   542,   543,   543,   544,   544,
     544,   545,   545,   545,   546,   546,   546,   546,   546,   546,
     546,   546,   546,   547,   547,   548,   548,   548,   549,   550,
     551,   551,   552,   553,   554,   555,   555,   556,   556,   557,
     557,   558,   558,   559,   559,   559,   560,   560,   561,   561,
     562,   562,   562,   563,   563,   564,   564,   565,   565,   566,
     566,   566,   567,   567,   567,   568,   568,   568,   569,   569,
     569,   570,   570,   570,   570,   570,   571,   572,   572,   573,
     574,   574,   575,   575,   575,   575,   575,   575,   575,   576,
     577,   578,   578,   579,   579,   580,   581,   581,   582,   583,
     584,   585,   586,   586,   587,   587,   588,   589,   589,   590,
     590,   591,   591,   592,   592,   592,   592,   593,   593,   593,
     593,   593,   594,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   596,   597,   597,   597,   598,   599,   600,
     601,   601,   601,   602,   602,   602,   603,   603,   604,   605,
     606,   606,   606,   606,   607,   607,   608,   609,   610,   611,
     612,   613,   614,   615,   615,   616,   616,   617,   617,   618,
     618,   619,   619,   620,   620,   621,   621,   622,   622,   622,
     623,   623,   624,   624,   625,   625,   625,   625,   625,   625,
     626,   626,   627,   627,   627,   627,   628,   628,   628,   628,
     628,   628,   628,   628,   629,   629,   629,   630,   630,   631,
     631,   632,   632,   632,   632,   632,   632,   632,   632,   633,
     633,   633,   633,   634,   634,   635,   635,   636,   636,   636,
     636,   636,   637,   637,   638,   638,   638,   638,   639,   639,
     639,   640,   640,   641,   641,   642,   642,   643,   643,   644,
     645,   645,   646,   647,   648,   648,   648,   649,   649,   649,
     649,   649,   650,   650,   651,   652,   652,   653,   653,   654,
     655,   656,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   664,   664,   664,   664,   664,   665,   665,   666,   666,
     667,   667,   668,   668,   669,   669,   669,   670,   670,   671,
     671,   671,   671,   672,   672,   672,   673,   673,   674,   675,
     675,   676,   677,   678,   678,   679,   679,   680,   681,   681,
     682,   682,   683,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   684,   684,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   685
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     8,     0,     1,     3,     2,     6,     0,     2,
       8,     1,     4,     1,     0,     2,     2,     0,     2,     2,
       2,     2,     2,     2,     4,     1,     3,     2,     3,     3,
       3,     0,     2,     2,     2,     1,     1,     1,     4,     1,
       2,     3,     2,     0,     2,     3,     1,     2,     3,     3,
       2,     2,     3,     1,     2,     3,     3,     2,     2,     3,
       1,     2,     3,     3,     2,     1,     2,     3,     2,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     2,     2,     3,     3,     4,     0,     3,     2,
       0,     2,     2,     0,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     3,     3,
       1,     1,     3,     1,     3,     3,     1,     1,     1,     0,
       2,     3,     1,     2,     0,     2,     3,     1,     2,     3,
       3,     2,     2,     3,     3,     3,     4,     1,     2,     3,
       3,     0,     3,     4,     1,     3,     3,     3,     0,     3,
       0,     3,     4,     1,     2,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     3,     1,     3,     3,
       3,     3,     3,     1,     3,     3,     3,     1,     3,     3,
       2,     1,     3,     2,     3,     1,     2,     2,     3,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     4,     6,
       1,     1,     1,     1,     1,     2,     3,     3,     3,     3,
       2,     1,     3,     3,     2,     0,     4,     2,     2,     1,
       1,     2,     2,     0,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     2,     2,     0,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     1,     1,     2,
       2,     0,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     1,     1,     3,     4,     3,     2,     2,     2,
       2,     6,     0,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     3,     3,     5,     5,     4,     3,
       3,     3,     5,     5,     5,     1,     1,     1,     1,     4,
       3,     5,     4,     0,     2,     3,     3,     3,     7,     4,
       6,     2,     1,     3,     3,     7,     1,     1,     2,     3,
       1,     1,     0,     2,     2,     2,     1,     1,     1,     1,
       0,     2,     3,     1,     3,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     2,     1,     1,     1,     1,     1,
       2,     3,     1,     7,     0,     3,     0,     3,     2,     3,
       1,     5,     5,     2,     3,     3,     4,     3,     1,     3,
       5,     1,     0,     1,     1,     0,     2,     2,     4,     4,
       3,     1,     5,     6,     2,     1,     5,     3,     3,     3,
       3,     0,     3,     8,     3,     1,     3,     1,     3,     3,
       0,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     4,     5,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     4,     1,     4,     1,     4,     1,
       4,     1,     2,     2,     1,     1,     1,     1,     4,     5,
       5,     3,     4,     1,     2,     4,     1,     2,     1,     2,
       2,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     4,     1,     4,     2,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     1,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     2,     1,     4,     4,     3,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     5,    10,     1,     1,
       0,     7,     7,     0,     1,     3,     3,     3,     3,     0,
       2,     2,     0,     2,     2,     0,     2,     2,     0,     2,
       2,     0,     2,     2,     2,     2,     3,     0,     1,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     1,     3,     2,     3,     3,     1,     3,     3,     4,
       4,     3,     1,     3,     2,     3,     2,     0,     1,     0,
       2,     2,     3,     0,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     4,     4,     3,     3,     3,
       3,     4,     4,     3,     4,     6,     1,     1,     4,     1,
       3,     4,     6,     7,     1,     1,     4,     1,     1,     1,
       1,     1,     3,     0,     2,     0,     2,     3,     1,     3,
       1,     4,     1,     2,     1,     1,     2,     2,     3,     1,
       2,     4,     3,     4,     0,     1,     2,     1,     2,     1,
       0,     3,     2,     3,     3,     4,     1,     3,     3,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     2,     2,     1,     2,     2,     2,     5,
       5,     2,     0,     3,     2,     4,     4,     6,     4,     3,
       4,     0,     2,     2,     3,     1,     3,     2,     2,     2,
       1,     2,     3,     3,     3,     3,     3,     6,     6,     4,
       4,     4,     2,     2,     2,     2,     2,     7,     5,     5,
       6,     3,     1,     4,     1,     1,     1,     1,     1,     1,
       5,     7,     8,    10,     6,     8,     0,     2,     2,     3,
       0,     2,     1,     3,     1,     1,     1,     3,     7,     3,
       7,     5,     9,     1,     1,     1,     1,     3,     5,     1,
       1,     3,     4,     3,     4,     1,     1,     4,     5,     6,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   253,   275,   291,   312,     0,     0,     0,   372,
       0,     3,     0,   558,     0,     0,     0,   627,     0,   603,
       0,     0,   522,   582,   553,     0,   824,   825,   826,   874,
     875,   876,   888,   880,   881,   882,   883,   884,   886,   890,
     891,   892,   893,   894,   895,   896,   897,   898,   899,   900,
     901,   902,   903,   904,   905,   906,   907,   908,   990,   991,
     909,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     919,   920,   921,   922,   923,   924,   925,   926,   927,   928,
     929,   930,   931,   932,   933,  1029,  1030,   889,   827,   934,
     559,   560,   935,   936,   937,   938,   939,   940,   941,   942,
     943,   944,   945,   946,   947,   948,   949,   950,   951,   885,
     952,   953,   879,   954,   955,   956,   957,   958,   959,   960,
     961,   962,   963,   964,   965,   966,   967,   968,   969,   970,
     971,   972,   973,   878,   974,   975,   976,   977,   978,   979,
     980,   981,   982,   983,   984,   985,   986,   987,   877,   988,
     887,   989,   992,   993,   994,   995,   996,   997,   998,   999,
    1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,
    1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,
    1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,  1031,
    1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,
    1042,  1043,  1044,  1045,  1046,     2,   386,   388,   389,     0,
     402,   405,   406,   390,   391,   392,   398,   455,   457,   474,
     477,   479,   482,   487,   490,   493,   495,   497,   499,   501,
     504,   505,   507,     0,   513,   506,   518,   521,   525,   526,
     528,   529,   530,     0,   535,   532,     0,   547,   545,   555,
     557,   527,   561,   564,   573,   565,   566,   567,   570,   571,
     568,   569,   591,   593,   594,   595,   592,   632,   633,   634,
     635,   636,   637,   638,   554,   682,   673,   680,   679,   681,
     678,   675,   677,   674,   676,   393,     0,   394,     0,   396,
     395,   397,   575,   576,   577,   574,   556,   399,   400,   572,
     859,   860,   563,   829,   873,     0,     0,     7,   249,   250,
       0,   253,   253,     8,   271,   272,     0,   275,   275,     9,
     287,   288,     0,   291,   291,    10,   312,   302,   303,   312,
       0,    24,   107,     4,    21,    23,   372,    11,     0,     5,
      18,     6,     0,     1,   874,   875,   876,   888,   880,   881,
     882,   883,   884,   896,   897,   898,   899,   900,   901,   902,
     903,   904,   905,   906,   907,   925,  1029,  1030,   936,   938,
     949,   950,   885,   879,   967,   973,   877,   887,  1015,  1018,
    1024,  1026,  1036,  1037,   578,   579,   873,   874,   875,   881,
     884,   877,   544,   598,   599,   600,     0,   628,     0,   520,
     604,     0,   503,   502,   581,     0,   538,     0,     0,   646,
       0,     0,     0,     0,     0,     0,     0,     0,   652,     0,
       0,     0,     0,     0,   536,   537,   539,   540,   541,   542,
     548,   549,   550,   551,   552,     0,     0,     0,   822,     0,
       0,     0,   410,   412,     0,     0,   418,   420,     0,     0,
     441,     0,     0,     0,     0,     0,     0,   543,     0,     0,
       0,   641,     0,     0,   659,     0,     0,   812,   813,     0,
     815,   816,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   407,   404,   408,   409,   403,     0,     0,     0,
       0,     0,     0,     0,     0,   460,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   514,   519,     0,     0,     0,     0,   534,   546,     0,
       0,     0,   814,     0,     0,     0,     0,     0,     0,     0,
     979,   986,     0,     0,     0,   262,     0,     0,   266,   267,
     268,   263,   264,   330,   331,     0,   265,     0,   251,     0,
     247,   248,   252,   979,     0,     0,     0,     0,     0,     0,
       0,     0,   273,     0,   269,   270,   274,   979,     0,     0,
       0,   322,     0,     0,   326,   327,   329,   323,   324,     0,
     325,     0,   289,   328,     0,   285,   286,   290,   300,   301,
     310,   979,     0,     0,     0,     0,     0,     0,     0,     0,
     309,     0,    27,   113,     0,     0,    16,   375,   376,   377,
     378,   379,   380,   373,   374,   603,     0,   630,   629,   626,
       0,   580,   697,   693,     0,   696,   708,     0,     0,   645,
     688,     0,   684,     0,     0,     0,     0,   689,   683,   690,
       0,     0,   828,     0,     0,   651,     0,   699,     0,   707,
     709,   687,     0,     0,     0,     0,     0,     0,     0,   659,
       0,   659,     0,     0,   659,     0,     0,     0,     0,     0,
       0,     0,     0,   648,   705,   700,     0,   704,     0,   640,
       0,   368,     0,   383,     0,     0,     0,     0,     0,   847,
     849,   387,   401,   423,     0,     0,     0,   454,   456,   459,
     462,   463,   464,   472,   473,     0,   458,   465,   466,   467,
     468,   469,   470,   471,     0,   480,   481,   478,   483,   485,
     484,   486,   488,   489,   491,   492,     0,     0,     0,     0,
     511,     0,   524,   523,     0,     0,     0,   590,   863,   589,
       0,   588,     0,     0,     0,     0,   585,     0,   861,   308,
     307,   332,     0,   304,   306,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   840,     0,     0,     0,   254,
     255,   256,   257,   261,   258,   259,   260,   372,     0,     0,
     276,   277,   278,   279,   283,   284,   280,   281,   282,   372,
       0,   292,   293,   294,   295,   299,   296,   297,   298,   372,
     372,   313,   314,   315,   316,   320,   321,   317,   318,   319,
      25,    26,     0,   109,   110,     0,   366,   367,     0,     0,
     372,    19,     0,    15,   604,     0,   631,     0,   516,   515,
       0,   694,   647,   643,     0,   650,   685,   686,   692,   691,
     653,   654,     0,   698,   706,   649,   639,     0,   821,     0,
     583,   584,   414,   411,     0,     0,   419,     0,   440,   438,
     439,     0,     0,   508,     0,     0,     0,   701,   642,   659,
       0,   369,     0,   886,   878,   887,   660,   663,   667,   669,
     672,   670,   865,   866,   671,     0,   862,     0,     0,     0,
       0,     0,     0,   424,   431,   425,   428,   432,     0,   461,
       0,     0,     0,     0,   734,   475,   715,   718,   720,   722,
     724,   725,   740,   729,   494,   496,   498,   657,   500,   512,
     531,   533,   562,     0,   864,     0,     0,   811,   810,   809,
     586,   305,     0,   334,   335,   711,   350,     0,     0,   363,
     364,   340,   341,     0,     0,     0,     0,   345,   346,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   353,     0,
     353,     0,   339,   805,   804,   806,    22,    35,    63,    49,
      70,    75,   101,    28,    53,    29,    53,    30,   113,    31,
     113,    32,     0,    33,     0,   108,   106,   136,     0,   143,
     152,     0,     0,     0,   183,   188,   191,   195,   197,   203,
     207,   174,   211,   215,   219,   140,   141,   115,   116,   117,
     113,   118,   114,   119,   149,   120,   154,   121,     0,   123,
     113,   122,   131,   178,   124,   113,   125,   113,   126,   113,
     127,   113,   128,   113,   129,   113,   130,   113,   132,     0,
     133,   113,   134,   113,     0,     0,     0,   381,   603,   603,
     621,   596,   517,     0,   710,   644,   655,   823,     0,     0,
     416,     0,     0,     0,   451,     0,   445,     0,     0,   509,
     510,     0,   384,   382,     0,     0,     0,     0,   664,   666,
     665,   661,     0,   818,     0,   819,     0,     0,   854,   855,
     851,   853,     0,   433,   434,   435,   426,     0,     0,   723,
       0,   735,   737,   739,   730,     0,   476,     0,   713,     0,
       0,   726,     0,   727,   658,   656,   587,     0,     0,     0,
     659,     0,     0,   349,     0,     0,     0,   338,   840,   844,
     845,   846,   841,   842,     0,     0,     0,     0,   353,     0,
     352,     0,   359,     0,     0,   775,     0,     0,   800,     0,
       0,   771,   772,     0,   759,   765,   766,   764,   763,   767,
     761,   762,   768,     0,   102,   103,    41,    37,     0,     0,
       0,   113,    50,    52,     0,   113,    64,    68,    67,     0,
       0,     0,    71,     0,     0,     0,    74,    92,    76,    80,
      81,    82,    86,    87,    89,    78,    83,    84,    85,    88,
      90,     0,     0,     0,   100,   112,   111,     0,     0,     0,
     171,   167,   113,     0,     0,   110,     0,     0,     0,     0,
     153,     0,   162,     0,   113,     0,   110,   110,   180,   184,
       0,     0,     0,     0,     0,   110,     0,     0,     0,   110,
       0,   110,   110,     0,   110,     0,     0,   110,   110,     0,
     210,   213,     0,   216,   217,     0,     0,     0,   380,     0,
       0,     0,     0,     0,   695,   820,     0,     0,     0,   421,
     422,   442,     0,     0,     0,   443,   444,     0,     0,     0,
       0,   702,   872,   662,   668,     0,     0,   870,     0,   385,
       0,     0,     0,   856,     0,     0,   427,     0,   429,   728,
     734,   732,     0,   736,   738,     0,   717,     0,     0,   746,
       0,     0,     0,     0,     0,   712,   716,   719,     0,     0,
       0,     0,     0,   807,   808,   311,     0,   333,   342,   343,
     336,   337,   347,   348,   344,     0,   830,   836,     0,     0,
       0,   227,   226,   874,   896,  1031,  1032,     0,   222,     0,
     225,   223,   234,   245,   241,   380,   356,   357,   351,   354,
       0,     0,   776,   781,     0,   801,   774,   773,     0,     0,
     778,   777,     0,   770,   769,     0,   799,   760,   104,   105,
      39,    36,    40,    45,    46,    47,    38,    56,    54,   113,
       0,    51,     0,    66,    65,    62,    73,    72,    69,    96,
      97,    93,    94,    95,    77,    98,    79,    91,   139,   163,
       0,   113,   168,     0,     0,   165,   137,   138,   135,   146,
     147,   148,   145,   144,   142,   157,   150,   113,   151,   155,
     164,     0,   175,   176,   177,   113,     0,   186,   185,   113,
     189,   187,   192,   193,   190,   194,   198,   200,   201,   199,
     196,   204,   205,   202,   208,   209,   206,   212,   214,   220,
     218,     0,    17,     0,   603,   603,     0,   625,   624,   623,
     622,   415,     0,     0,     0,   449,     0,     0,   450,   448,
       0,   703,   867,     0,     0,     0,   817,   659,     0,   848,
     850,     0,   436,   437,     0,   731,   733,   803,   753,   751,
     752,   714,     0,     0,   757,   758,   749,   750,   721,     0,
       0,   742,     0,   741,     0,   362,   360,   838,     0,     0,
       0,     0,   843,   244,     0,     0,     0,     0,     0,   834,
     836,   235,     0,     0,     0,     0,   240,     0,   355,   353,
     789,   782,   782,   784,     0,     0,   791,   791,   802,    42,
      43,    44,    57,    61,    60,     0,     0,     0,    34,    48,
      99,   170,     0,   166,   169,   158,   161,     0,     0,     0,
     179,     0,   173,   182,    13,   380,     0,     0,   603,   417,
     413,   452,     0,   447,   453,   868,   871,     0,     0,   857,
       0,   430,   754,   755,   756,   747,   748,   744,   743,     0,
     361,   839,   837,   831,     0,   243,   242,     0,   231,   230,
       0,   221,     0,   237,   236,   239,   238,     0,   371,   365,
     370,   358,     0,     0,     0,     0,     0,   795,   793,   790,
     788,    59,    58,    55,   172,   160,   159,   156,   181,    12,
      14,     0,   609,   615,   601,   612,   618,   602,     0,     0,
     869,     0,   852,   745,   832,   836,   228,     0,   835,     0,
       0,   780,   779,   785,   786,     0,   794,     0,     0,   792,
       0,     0,     0,     0,     0,   597,   446,   858,     0,     0,
     232,   233,   246,   783,     0,   796,   797,   798,    20,   605,
     611,   610,   606,   617,   616,   607,   614,   613,   608,   620,
     619,   833,   229,   787
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,   337,  1649,   341,   339,   340,   616,   831,
     333,   334,   612,   822,   983,   984,  1390,  1396,   985,   986,
    1181,  1398,  1399,   987,   988,   989,   990,   991,   992,  1414,
    1416,   993,   994,  1017,   613,   995,   825,  1018,  1019,  1020,
    1021,  1022,  1023,  1024,  1432,  1229,  1025,  1026,  1231,  1436,
    1437,  1027,  1028,  1029,  1030,  1031,  1220,  1221,  1222,  1423,
    1032,  1033,  1238,  1446,  1034,  1035,  1036,  1037,  1038,  1039,
    1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,
    1050,  1051,  1052,  1053,  1357,  1358,  1359,  1360,  1617,  1689,
    1361,  1362,  1363,  1546,   307,   308,   309,   310,   542,   313,
     314,   315,   316,   319,   320,   321,   322,   325,   311,   537,
     538,   327,   328,   312,   330,   578,   543,   763,   544,   545,
     546,   547,   569,   548,   549,   550,   959,  1344,   551,   552,
     553,  1150,   967,   554,   555,  1526,   556,   557,   828,   464,
    1629,   776,   623,   624,   833,   692,   693,  1216,   205,   206,
     207,   208,   209,   210,   483,   211,   442,   443,  1070,  1278,
     212,   446,   447,   484,   485,   486,   905,   906,   907,  1105,
    1308,   213,   449,   450,   214,  1075,  1285,  1076,  1077,  1283,
     215,   216,   217,   218,   715,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   839,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   384,   256,   257,   258,   259,   260,   750,
     751,   261,   262,   263,   395,   625,   401,  1654,  1657,  1681,
    1683,  1682,  1684,  1273,   264,   398,   265,   628,   266,   267,
     268,   462,   639,   269,   410,   270,   271,   272,   273,   419,
     655,   926,  1125,   695,   886,  1091,   887,   888,   274,   275,
     276,   277,   278,   279,   280,   281,   634,   282,   656,   283,
     686,   284,   658,   635,   659,  1063,   946,   915,  1325,  1118,
     916,   917,   918,   919,   920,   921,   922,   923,  1114,  1123,
    1332,  1326,  1605,  1516,   972,  1164,  1165,  1166,  1167,  1168,
    1632,  1381,  1169,  1639,  1557,  1636,  1679,  1170,  1171,  1172,
    1116,   593,   285,   286,   287,   288,   289,   290,   291,   437,
     438,   292,   293,   294,   295,   651,   296,   559,  1530,  1347,
     963,  1142,  1143,   297,   298,  1100,  1302,  1303,   299,   300,
     301,   302,   891,   892,   893,  1298,   894,   303,   304
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1461
static const yytype_int16 yypact[] =
{
     979,  3487,   644,   644,   644,   644,  -119,   -24,   -17, -1461,
     385, -1461,  7159, -1461,  5632,   438,   250,   316,  4921,   287,
    3726,  3726, -1461, -1461, -1461,  2292, -1461, -1461, -1461,   103,
     168,   396,   413,   441,    88,   453,   474,   343, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461,   508,   515,   561,   671,   690,
     722,   734,   748,   863,   890,   906,   522, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461,   628, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461,   760,   800, -1461, -1461, -1461,
   -1461, -1461, -1461,   939, -1461,    43, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461,   952,   952, -1461,   925,
   -1461, -1461,   927, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461,   551, -1461, -1461, -1461,
   -1461, -1461,   166, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,    97, -1461,
     931, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461,    76, -1461, -1461,    -6, -1461,
   -1461, -1461, -1461, -1461,   929, -1461,    34, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461,   761,   802, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461,   997, -1461, -1461,   904,
   -1461, -1461, -1461, -1461, -1461, -1461,   877,   898, -1461,   732,
     872,    56,   131,    75,   562, -1461,   899,   930,   934,   909,
   -1461, -1461, -1461,   346, -1461, -1461,  4921,   634, -1461, -1461,
    1094,  1099, -1461,  5632, -1461, -1461,  5632, -1461, -1461, -1461,
   -1461,   311, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461,  3487, -1461,  3487, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461,   410,   382,   953, -1461, -1461, -1461,
    3965,   947, -1461, -1461, -1461, -1461,  4204,   947, -1461, -1461,
   -1461, -1461,  4443,   947, -1461, -1461,   947, -1461, -1461, -1461,
    4682, -1461, -1461, -1461, -1461, -1461, -1461, -1461,   965, -1461,
   -1461, -1461,    27, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461,  1100,  1101,  1104,
    1105,  1106, -1461, -1461, -1461, -1461,   790, -1461,  1118,   634,
   -1461,  7159, -1461, -1461, -1461,   576, -1461,  6106,  3487, -1461,
    1102,  1110,  3487,    79,  1115,  1117,  6966,  3487, -1461,  1112,
    7159,  7159,  1120,  3487, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461,  3487,  7159,    12, -1461,  3487,
    3487,  7159,  1130, -1461,  7159,  1139,  1131, -1461,  7159,   116,
   -1461,   137,  3487,  3487,  3487,  1121,  1122, -1461,  1102,  6343,
    3487, -1461,  1102,   227,  1013,  3487,  1009, -1461, -1461,  3487,
   -1461, -1461,  7159,  3487,  3487,  3487,   939,    43,  3487,  1162,
    1036,  1037, -1461, -1461, -1461, -1461, -1461,  3726,  3726,  3726,
    3726,  3726,  3726,  3726,  3726, -1461,  3726,  3726,  3726,  3726,
    3726,  3726,  3726,  3726,  1111,  3726,  3726,  3726,  3726,  3726,
    3726,  3726,  3726,  3726,  3726,  3726,  1020,  1024,  1028,  1029,
    2531, -1461,   634,  4921,  4921,  3487,  3487, -1461, -1461,  3487,
    1814,   318, -1461,  2053,  1132,  1061,  1062,   104,  1143,  7159,
    1141,   749,  1143,  1143,  1143, -1461,  1143,  1143, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461,  1143, -1461,  1143, -1461,  1143,
   -1461, -1461,   475,   908,  1143,  1143,  1143,  1143,  1143,  1143,
    1143,  1143, -1461,  1143, -1461, -1461,   552,  1063,  1143,  1143,
    1143, -1461,  1143,  1143, -1461, -1461, -1461, -1461, -1461,  1143,
   -1461,  1143, -1461, -1461,  1143, -1461, -1461,   605, -1461, -1461,
     627,   531,  1143,  1143,  1143,  1143,  1143,  1143,  1143,  1143,
   -1461,  1143,    63,   640,   513,  7159,  1002, -1461, -1461, -1461,
   -1461, -1461,  1039, -1461, -1461,  1089,  1092, -1461, -1461, -1461,
     193, -1461, -1461, -1461,   651, -1461, -1461,   504,  2770, -1461,
   -1461,   538, -1461,   474,  1106,  1158,  1161, -1461, -1461, -1461,
    1163,  1164, -1461,   567,  3009, -1461,  1168, -1461,  1169, -1461,
   -1461, -1461,   618,   619,  1193,   628,  3487,   623,   633,  1013,
     939,  1013,  7159,    43,  1013,   952,  3487,  3487,   788,   820,
     684,  3487,  3487, -1461, -1461, -1461,   829, -1461,   721, -1461,
    7159, -1461,   830, -1461,  6551,  1166,   986,  1153,  1064,   994,
     285, -1461, -1461, -1461,  7159,  3487,  1083,   898, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461,  3726, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461,   459,   131,   131,   942,    75,    75,
      75,    75,   562,   562, -1461, -1461,  6551,  6551,  7159,  7159,
   -1461,   739, -1461, -1461,   585,   741,   789, -1461, -1461, -1461,
     844, -1461,   656,  3487,  3487,  3487, -1461,   846, -1461, -1461,
   -1461, -1461,  1143, -1461, -1461,  1184,   826,  1098,  1215,  7159,
     852,   924,   468,   701,  7159,   678,   513,     6,    33, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461,   463,   749,  1144,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,   457,
     279, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,   409,
     613, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461,   693, -1461, -1461,  1142, -1461, -1461,  7342,  1188,
   -1461, -1461,  6551, -1461,   926,   324, -1461,  1096, -1461, -1461,
    7159, -1461, -1461, -1461,   756, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461,   777, -1461, -1461, -1461, -1461,  3487, -1461,  1109,
   -1461, -1461,  1116, -1461,  1219,  1221, -1461,  1108, -1461, -1461,
   -1461,  1082,  1079, -1461,   783,   786,  7159, -1461, -1461,  1013,
    1226, -1461,  6759,  1197,  1202,  1203, -1461,   600, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461,  3487, -1461,  3487,  3487,  3487,
    1209,  1210,  1545, -1461, -1461,  1218, -1461,   911,  3487, -1461,
     459,  3487,   525,   804,   395,  1167,  1018,  1016,  1170, -1461,
   -1461,  1144,  1053, -1461, -1461, -1461, -1461,  1231, -1461, -1461,
   -1461, -1461, -1461,  3248, -1461,  1030,  1032, -1461, -1461, -1461,
   -1461, -1461,  1098, -1461, -1461, -1461, -1461,  7159,  1227, -1461,
   -1461, -1461, -1461,  1124,  1098,  1090,  1097, -1461, -1461,  1238,
    1147,  7159,   -42,  1041,  7342,  7159,  1086,  1098,  1160,  7159,
    1160,   843,  1194, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461,   791, -1461,   394, -1461,   264, -1461,   440, -1461,
     419, -1461,  1057, -1461,  1035,    98, -1461, -1461,   766, -1461,
   -1461,   977,  1025,   983, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
     478, -1461, -1461, -1461,    31, -1461,  1004, -1461,  1042, -1461,
   -1461, -1461, -1461,    30, -1461,   449, -1461,   988, -1461,   128,
   -1461, -1461, -1461,   240, -1461,   184, -1461,  -130, -1461,  -125,
   -1461,   794, -1461,   989,   931,  1098,   513, -1461,   287,   287,
   -1461, -1461, -1461,  1248, -1461, -1461, -1461, -1461,  3487,  1284,
    1119,  3487,  3487,  3487,  1286,    45, -1461,   101,  3487, -1461,
   -1461,   177, -1461, -1461,  1255,  1258,  1260,  5869, -1461, -1461,
   -1461, -1461,   824, -1461,  1078, -1461,  1295,  1295, -1461, -1461,
    1081, -1461,  3487, -1461, -1461,  1173,  1218,  1270,   825, -1461,
     134,  1220,  1103, -1461, -1461,  1216, -1461,   459,   692,   459,
    1185,  1194,    84, -1461, -1461, -1461, -1461,  3487,  3487,  1143,
    1013,  1098,   941, -1461,  1098,  1098,   917, -1461,    44, -1461,
   -1461, -1461,  1287, -1461,  5158,   931,  1282,  1148,  1160,  1098,
    1294,  1291,  1294,   967,  1011, -1461,    15,  1123, -1461,  1017,
    7159, -1461, -1461,  1204, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461,   843,  1043,  1056, -1461, -1461,  5158,  6551,
    1010,  1074, -1461, -1461,  6551,  1074, -1461, -1461, -1461,  6551,
    3487,  1198, -1461,  6551,  3487,  7343, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461,   -34,  1208,  1208, -1461, -1461, -1461,  1113,  3487,  1040,
     845, -1461, -1461,  3487,  3487, -1461,  7371,   -74,  3487,  -121,
   -1461,   376, -1461,  7399, -1461,  3487, -1461, -1461,  1075, -1461,
    6551,  3487,  7427,  3487,  7455, -1461,  3487,  7483,  7511, -1461,
    3487, -1461, -1461,  7539, -1461,  3487,  7567, -1461, -1461,  7595,
   -1461, -1461,  3487, -1461, -1461,  7623,  3487,  7651,  1039,  1143,
    7342,  1303,  1305,   601, -1461, -1461,  7159,  1341,  1229, -1461,
   -1461, -1461,  7159,  6551,    95, -1461, -1461,  6551,  3487,  1196,
    1318, -1461, -1461, -1461, -1461,  1319,  1211, -1461,   875, -1461,
    3487,  7159,   880, -1461,   912,  1324, -1461,   964,  1225, -1461,
     395, -1461,  1316, -1461, -1461,  3726,  1016,  1275,  1012, -1461,
    3726,  3726,    84,   893,   893, -1461, -1461,  1170,   459,    18,
    3726,  3726,  1174, -1461, -1461, -1461,   107, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461,   296, -1461,  1214,  1145,   -42,
    5632, -1461,   752,   448,  1357,  1337,  1338,   417, -1461,  5395,
     861,   862, -1461, -1461, -1461,  1039, -1461, -1461,  1294, -1461,
    1098,  1098, -1461, -1461,  1171, -1461, -1461, -1461,    10,  1098,
   -1461, -1461,    67, -1461, -1461,  1254, -1461, -1461, -1461, -1461,
     -12,  1369, -1461, -1461, -1461, -1461, -1461, -1461, -1461,   500,
    7679, -1461,  7707, -1461,   997, -1461, -1461,   997, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461,  1261,  1261, -1461,   997,
    3487, -1461, -1461,  1149,  7735,   997,   997,    98, -1461, -1461,
   -1461, -1461, -1461,   997, -1461, -1461, -1461,   272, -1461, -1461,
   -1461,  7763,   997,    98,    98, -1461,  1151, -1461,   997, -1461,
     997, -1461,    98,   997, -1461, -1461,    98,   997,    98,    98,
   -1461,    98,   997, -1461,    98,    98, -1461,   997, -1461,   997,
   -1461,  1166, -1461,   931,   287,   287,   438, -1461, -1461, -1461,
   -1461, -1461,  7159,  3487,  1237, -1461,  7159,  3487, -1461, -1461,
    3487, -1461, -1461,  6551,  6551,  1239, -1461,  1013,  1295, -1461,
   -1461,  1295, -1461, -1461,  1098, -1461, -1461,    75, -1461, -1461,
   -1461, -1461,   188,   857, -1461, -1461, -1461, -1461, -1461,  3726,
    3726,   942,   141, -1461,  3487, -1461, -1461, -1461,   916,  6551,
    1166,  5158, -1461, -1461,  5632,  5632,   158,  1204,  5158, -1461,
    1214, -1461,  5395,  5395,  5395,  5395,  1379,    54, -1461,  1160,
   -1461, -1461, -1461,   390,  1204,  1098, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461,  6551,  3487,  7791, -1461, -1461,
   -1461,   997,  7819, -1461, -1461, -1461, -1461,  6551,  3487,  7847,
   -1461,  7875, -1461,  1235,  1143,  1039,   235,   298,   287, -1461,
   -1461, -1461,  1271, -1461, -1461, -1461, -1461,  6551,  1393, -1461,
     960, -1461, -1461, -1461, -1461, -1461, -1461,   942,   942,  3726,
   -1461, -1461, -1461, -1461,   417, -1461, -1461,  1372, -1461, -1461,
    1381, -1461,  1166, -1461, -1461, -1461, -1461,  3487, -1461, -1461,
   -1461,  1294,   966,   969,  1204,  1212,   996, -1461, -1461,   519,
     519, -1461,   997, -1461, -1461, -1461,   997, -1461, -1461, -1461,
   -1461,  1166, -1461, -1461, -1461, -1461, -1461, -1461,  1394,  3487,
   -1461,  3487, -1461,   942, -1461,  1214, -1461,   497, -1461,   795,
    1307, -1461, -1461,    84, -1461,  1204, -1461,    85,    85, -1461,
    1143,   270,   288,   271,   306, -1461, -1461, -1461,  1166,  1378,
   -1461, -1461, -1461, -1461,  1217, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
     439, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
     214, -1461, -1461,  1422, -1461,  -322,  -879, -1461, -1461, -1461,
   -1461,   431, -1461, -1461, -1461, -1461, -1461, -1461, -1461,   199,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461,   211, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1173,  -106, -1461, -1461, -1461, -1461,
   -1461, -1212, -1461, -1461, -1461,  1125,  1126,  1127,  -282, -1461,
    1128,  1129,  1133, -1461,  1136,  1150,  1114, -1461,  1073, -1461,
     896,  1146,  1152,   114,  1154,  -311,  -122,  -505,  -117,  -277,
     -94,   -89,  -305,  -273,  -251,  -201, -1461, -1461,  -180,  -167,
   -1461,  -961, -1461, -1461,   -79, -1461,  -155,   -78,  -741,  -341,
   -1461,    -7, -1461, -1461, -1257,    89,   555,  -689,   381,   -25,
    -219, -1461, -1461,  1232, -1461, -1461, -1461,   773, -1461, -1461,
   -1461, -1461,   771, -1461, -1461, -1461,   539,   348, -1461, -1461,
   -1461, -1461,  1349,   805, -1461, -1461, -1461,   373, -1461, -1461,
   -1461, -1461,   990,   991, -1461,  -126,   161,  -504,   614,  -487,
     609,   610, -1461, -1461, -1461,  1107, -1461, -1461, -1461,  -698,
    -229, -1461, -1461, -1461,    29,   611, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461,    26, -1461, -1461, -1461, -1461,
    -717, -1461, -1460,  -356, -1461, -1461, -1461, -1461, -1461,   954,
     560, -1461,   212, -1461,    22, -1461,  -607, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461,   460, -1461, -1461, -1461, -1461, -1461, -1461,  1367,
   -1461,   770, -1461,  -661,  -708, -1461,   637,   398,  -622, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,  1135,
   -1461,  1137, -1461,  1095,  1051,   645,  -642,  -829, -1461, -1461,
   -1461,   399,   401,   194,   612, -1461, -1461, -1461,   213, -1461,
   -1295, -1461,    13,   201,   606,   355, -1461, -1461, -1461, -1461,
     -23, -1363, -1461,   -27,  -539, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
     867, -1461, -1461, -1461, -1146,  -503,  -377,   -52, -1397, -1311,
     397, -1461,   185, -1461, -1461, -1461, -1077,    40, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461,     0,     2
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -373
static const yytype_int16 yytable[] =
{
     405,   622,   342,   727,   521,  1391,   896,   914,   862,  1152,
     864,  1471,   385,   867,   386,  1552,   386,  1386,   835,   602,
    1304,   728,   729,   730,   731,   607,   913,  1513,   924,   925,
     636,   956,  1409,   764,   564,   964,   765,   779,   780,   781,
     392,   782,   783,   636,   660,   581,  1540,   399,   665,   584,
     784,  1429,   785,   581,   786,   444,   467,   584,  1378,   790,
     791,   792,   793,   794,   795,   796,   797,   531,   798,   532,
     463,   585,   889,   801,   802,   803,  1618,   804,   805,   585,
     664,  1107,   660,  1139,   806,   669,   807,  1345,   671,   808,
     512,  1410,   674,   505,   506,   895,   470,   811,   812,   813,
     814,   815,   816,   817,   818,   895,   819,  1486,  1547,  1191,
    1554,  1195,   829,  1559,   889,   889,  1287,   318,   324,   329,
    1524,   586,  1519,   642,  1057,   406,  1260,  1379,  1554,   586,
    1434,   416,  1379,   331,   945,   968,   970,  1435,   465,   417,
     459,  1226,   587,  1622,   643,   508,   407,  1541,   460,   895,
     587,  1233,   675,  1257,   408,   588,  1242,   761,  1244,   336,
    1247,   945,  1248,   588,  1253,  1520,  1256,   590,  1259,    19,
      12,  1261,  1265,   675,  1267,   590,   338,   910,   505,   506,
    1258,  1262,   965,   466,  1555,   911,  1311,  1368,   457,    26,
      27,    28,   966,   914,   565,   914,  1551,   332,  1074,   566,
     579,  1380,  1555,  1290,   509,   580,  1329,  1691,   603,   969,
     889,   411,   913,   604,   913,   418,  1215,   417,  1082,   412,
     507,  1291,   567,   468,   461,   505,   506,   568,   582,  1487,
     409,  1284,  1628,   583,   666,  1288,   605,   570,   571,   690,
     445,   606,   513,   589,   591,   386,   696,  1430,   386,  1431,
     698,   608,   609,  1556,   700,   701,   702,   941,  1635,   703,
     889,   617,    88,   471,   573,   522,   948,   676,  1688,   527,
     594,   691,   528,   644,   618,   619,   620,   621,   611,  1140,
    1141,  1312,  1652,   535,  1653,  1525,    88,   962,   677,   602,
    1411,  1412,  1413,   418,   564,   607,   510,   511,  1330,  1331,
    1129,   837,  1400,  1665,  1234,  1609,  1402,  1693,   690,  1560,
    1561,   749,  1133,  1227,   749,  1270,   865,   890,  1699,  1705,
     581,   895,   895,   581,   584,  1148,   838,   584,  1651,   614,
    1623,  1624,  1625,  1626,   879,   529,  1235,  1228,  1702,   895,
    1527,  1236,  1237,  1424,   820,  1655,   585,  1656,   903,   585,
     973,   974,  1060,   821,   530,  1441,  1708,   895,  1614,   890,
     890,   890,   890,   709,   710,   711,   712,   713,   714,  1061,
     716,   717,   718,   719,   720,   721,   722,   723,  1694,  1297,
     912,    19,   396,   637,   975,   343,   422,   641,  1700,  1706,
    1619,  1620,   653,   914,   423,   400,   586,   520,   662,   586,
     914,   630,   914,   386,  1602,  1603,  1604,  1703,  1637,   386,
     663,  1245,   913,  1269,   667,   668,   652,   587,   386,   913,
     587,   913,   386,   386,  1600,  1709,   397,   678,   679,   680,
     588,   318,  1538,   588,  1246,   688,   385,   324,   386,   413,
     329,   385,   590,   386,   385,   590,   386,   859,   385,  1346,
     386,  1271,  1272,   533,   565,   890,   414,   869,   870,   566,
    1345,   386,  1146,  1064,   534,   889,  1151,  1254,   895,  1336,
    1534,  1392,   699,   752,   386,   579,  1401,   766,   603,   767,
     580,  1403,   567,   604,   415,  1406,   904,   568,  1673,  1337,
    1255,   407,  1340,  1341,    19,   741,   420,   570,   571,  1064,
     744,   745,   910,   582,   746,   890,   605,  1369,   583,    12,
     911,   606,  1329,   901,    26,    27,    28,   421,   589,   591,
    1567,   608,   609,  1249,   573,   766,   789,   767,   902,  1695,
     424,   766,  1447,   767,   937,   938,   939,   425,   768,   652,
     474,   386,  1572,   753,   754,   594,  1250,  1182,   611,  1251,
    1252,   755,    26,    27,    28,  1575,   842,   889,  1579,  1183,
      19,   535,   889,   393,   394,  1576,  1581,   889,   910,  1184,
    1583,   889,   536,   435,   474,  1485,   911,  1577,  1578,  1488,
      26,    27,    28,   426,  1479,   769,   768,    88,  1631,   909,
     845,  1130,   768,   770,   771,   772,   773,   774,  1634,   766,
     789,   767,   454,   474,  1330,  1331,  1111,  1112,  1113,   953,
     930,   914,   474,   844,  1088,   652,   954,   386,   889,   850,
     631,   474,   455,   456,  1335,    88,  1089,  1438,    15,   852,
     913,    16,    17,   769,  1435,  1476,   800,  1090,  1067,   769,
     436,   770,   771,   772,   773,   774,   775,   770,   771,   772,
     773,   774,   895,    88,   474,   474,   874,   875,   787,   474,
     768,   889,   955,   826,   827,   889,   788,   523,  1539,   474,
     855,   856,   385,   524,   386,   860,  1176,  1177,  1093,  1094,
    1095,   766,   789,   767,   521,   861,  1677,   840,  1678,   904,
     385,   558,   386,   427,   775,   841,   386,   572,  1178,  1179,
     775,  1180,  1192,   592,   385,   912,   386,   769,   826,   827,
     890,   610,   428,  1268,   749,   770,   771,   772,   773,   774,
     474,  1477,  1478,  1186,  1193,  1194,  -372,  -372,  1548,  1549,
     514,   515,  1239,  1187,  1188,   799,   873,  1553,   386,   386,
     386,   386,   768,   788,   429,  1189,  1190,   617,   489,   490,
     491,   492,   493,   494,  1240,  1241,   430,   474,   800,   495,
     618,   619,   620,   621,  1472,  -372,   931,  -224,   775,   652,
     431,   386,   496,   878,   960,   474,   386,   474,  -372,  -372,
    -372,  -372,  1584,  1562,  1224,  1595,  1596,  1225,   809,   769,
    1317,   929,   474,  1563,  1564,  -224,   788,   770,   771,   772,
     773,   774,   890,  -224,  1365,  1565,  1566,   890,  1065,  1318,
     810,   439,   890,   474,   932,  1319,   890,  1512,   788,   474,
    1692,  1612,   474,  1056,   474,   474,  1521,  1522,  1507,  1066,
    1054,   474,   871,   305,   386,  1079,  1598,   306,  1080,    19,
     800,  1613,   386,   497,   498,   499,   500,   501,   502,  1275,
     775,   440,  1279,  1280,  1281,  1110,   474,  1641,  1630,  1289,
     474,   474,  1601,   890,   872,   876,   880,  1586,  1587,  1645,
    1092,   889,   889,   877,   881,   957,  1299,  1310,   386,   935,
     933,   958,   933,   904,   386,   432,  1108,   936,   934,  1660,
     940,  1320,  1321,  1322,  1542,  1544,  1323,  1324,   626,   627,
    1543,  1545,  1101,  1427,   386,   503,   890,   889,  1333,  1334,
     890,  1494,   433,  1638,  1443,  1444,  1498,   961,   683,  1495,
    1481,   962,   689,  1452,  1499,  1664,  1484,  1456,   434,  1458,
    1459,  1153,  1461,  1668,  1154,  1464,  1465,  1155,  1156,  1157,
    1158,   777,   778,   889,   976,  1497,   977,   385,  1498,   386,
    1690,   441,   880,   978,   979,   889,  1500,   823,   824,   980,
    1611,  1138,  1680,   386,   448,   652,  1145,   386,   452,   652,
     453,   386,   981,   982,   463,   889,   766,   789,   767,   505,
     506,  1658,     1,     2,     3,     4,     5,     6,     7,     8,
       9,   469,  1701,  1704,  1707,  1710,  1498,  1159,   472,  1711,
     943,   944,  1670,  -224,  1662,  1670,  -224,  -224,  -224,  -224,
    1671,  -224,  -224,  1672,  -224,  1607,  1608,  -224,  -224,  -224,
    -224,  -224,  -224,  -224,  -224,  -224,   949,   950,  -224,  -224,
    -224,  1160,  1675,   474,  -224,  -224,   487,   768,   475,   476,
    1676,   477,   478,   479,   473,   480,   481,   951,   952,  1161,
    1162,  1058,  1059,  1163,  1103,  1104,  -224,  -224,   488,  -224,
     516,  1372,  1373,  1374,  1375,  1393,  1394,  1395,  -224,  1489,
     504,  -224,  -224,  1602,  1603,  1604,   317,   323,   326,  1650,
     519,  1496,  1174,  1175,   769,  1015,  1016,  1338,  1339,   386,
    1263,  1264,   770,   771,   772,   773,   774,   518,  1342,  1343,
    1376,  1377,   517,  -372,  -372,  1663,  1383,  1384,  1219,  1421,
    1502,  1503,  1514,  1515,  1509,  1510,   890,   890,   525,   725,
     726,   732,   733,   526,   734,   735,  1589,   402,   403,   539,
    1592,   766,  1585,   767,   742,   743,   927,   927,  1696,  1697,
     306,   615,  -372,   407,   411,   775,   386,   416,   422,   459,
     629,   672,   890,   638,   640,  -372,  -372,  -372,  -372,   647,
    1385,   648,   386,   654,   661,  1404,   670,   673,   694,  1407,
    1364,   697,   681,   682,   704,  1698,   705,   724,   706,   737,
     386,   386,   736,   738,   739,   830,   386,   758,   890,   759,
     760,   386,   768,  1419,   832,   386,   761,   834,  1425,  1426,
     890,   836,   846,  1433,  1364,   847,   857,   848,   849,   766,
    1442,   767,   853,   854,   897,   898,  1448,   895,  1450,   899,
     890,  1453,   900,   908,   942,  1457,   945,   947,  1055,  1062,
    1462,   971,  1071,  1069,  1072,  1074,  1078,  1467,   690,   769,
    1085,  1469,   386,  1068,  1073,  1086,  1087,   770,   771,   772,
     773,   774,  1096,  1097,  1102,  1122,  1120,  1124,  -372,  -372,
    1115,  1119,  1117,  1127,  1590,  1128,  1134,  1131,  1593,  1132,
     768,  1594,  1473,  1135,  1136,  1137,   385,  1149,   386,  1144,
    1147,  1173,   385,  1218,   386,   386,  1214,  1230,  1219,   386,
     800,  1223,  1274,  1232,  1243,  1266,  1276,  -372,  1282,  1292,
     775,   385,  1293,   386,  1294,  1610,  1300,  1301,  1196,  1305,
    -372,  -372,  -372,  -372,  1309,  1315,  1277,   769,  1307,  1314,
    1313,  1328,  1366,  1349,  1367,   770,   771,   772,   773,   774,
    1370,  1371,    88,  1415,  1397,  1388,  -372,  -372,  1197,  1382,
    1198,  1199,  1200,  1201,  1202,  1203,  1204,  1389,  1420,  1474,
    1445,  1475,   386,  1482,  1490,  1205,  1206,  1207,  1208,  1209,
    1210,   386,  1491,  1492,  1418,  1483,  1493,  1501,  1506,  1529,
    1211,  1212,  1213,  1504,  1508,  -372,  1533,  1523,   775,  1535,
    1536,  1537,  1558,  1531,  1538,  1364,  1570,  1550,  -372,  -372,
    -372,  -372,  1591,   996,  1597,  1571,   997,   998,   999,  1000,
    1573,  1001,  1582,  1627,  1002,  1659,  1661,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,  1011,  1666,  1667,  1012,  1013,
    1014,  1674,  1712,  1685,  1379,  1185,  1713,  1417,   335,  1217,
    1439,  1422,  1621,   762,  1528,  1083,   560,   561,   597,   562,
    1686,   482,  1687,   863,   866,   574,   575,  1106,  1286,  1405,
    1306,   576,   997,   998,   999,  1000,   451,  1001,   332,   595,
    1002,  1015,  1016,  1003,  1004,  1005,  1006,  1007,  1008,  1009,
    1010,  1011,   598,   596,  1012,  1013,  1014,   707,   599,   708,
     868,  1511,   385,   600,   386,  1480,   385,   757,   386,   997,
     998,   999,  1000,  1126,  1001,   386,   386,  1002,  1588,   458,
    1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,   928,
     687,  1012,  1013,  1014,   332,   657,  1316,  1015,  1016,  1084,
    1327,  1081,  1518,  1505,  1109,  1517,  1606,  1121,  1387,  1633,
    1640,   386,   858,   386,  1532,  1348,   386,   386,  1599,     0,
     386,  1642,     0,     0,   386,   386,   386,   386,   645,     0,
     646,   332,     0,  1646,  1015,  1016,     0,  1364,     0,     0,
    1615,  1616,     0,     0,  1364,     0,     0,   386,  1364,  1364,
    1364,  1364,     0,     0,     0,     0,     0,     0,     0,   386,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   386,
       0,     0,  1669,   344,   345,   346,   347,   348,   349,   350,
     351,   352,    38,    39,    40,    41,    42,    43,    44,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,    57,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,   365,    77,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,     0,     0,     0,     0,     0,   366,   367,
      87,     0,     0,     0,    89,     0,     0,     0,     0,    92,
     368,    94,   369,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   370,   371,   108,   372,   110,     0,
     111,   373,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   374,   127,   128,   129,   130,
     131,   375,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,   145,   146,   147,     0,   376,
     149,   377,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   378,   176,   177,   379,
     179,   180,   181,   182,   183,   380,   185,   381,   187,   188,
     189,   190,   191,   192,   193,   382,   383,   196,   197,   198,
     199,   200,   201,   202,   203,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,    14,     0,     0,
     747,    15,     0,     0,    16,    17,     0,    18,     0,    19,
       0,    20,    21,    22,     0,    23,    24,    25,   748,     0,
       0,     0,     0,     0,     0,     0,  1098,     0,  1099,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     0,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    84,     0,     0,     0,     0,     0,    85,    86,    87,
       0,     0,    88,    89,    90,    91,     0,     0,    92,    93,
      94,    95,    96,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,     0,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,     0,   145,   146,   147,     0,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,    12,     0,    13,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,     0,   747,
      15,     0,     0,    16,    17,     0,    18,     0,    19,     0,
      20,    21,    22,     0,    23,    24,    25,   756,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,    85,    86,    87,     0,
       0,    88,    89,    90,    91,     0,     0,    92,    93,    94,
      95,    96,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,     0,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,     0,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,    12,     0,    13,     0,     0,     0,
       0,     0,     0,     0,     0,    14,     0,     0,     0,    15,
       0,     0,    16,    17,     0,    18,     0,    19,     0,    20,
      21,    22,     0,    23,    24,    25,   404,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    84,
       0,     0,     0,     0,     0,    85,    86,    87,     0,     0,
      88,    89,    90,    91,     0,     0,    92,    93,    94,    95,
      96,     0,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,     0,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     0,   145,   146,   147,     0,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,    12,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,     0,     0,    15,     0,
       0,    16,    17,     0,    18,     0,    19,     0,    20,    21,
      22,     0,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,   740,     0,     0,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,     0,
       0,     0,     0,     0,    85,    86,    87,     0,     0,    88,
      89,    90,    91,     0,     0,    92,    93,    94,    95,    96,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,     0,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,   145,   146,   147,     0,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,    12,     0,    13,     0,     0,     0,     0,     0,
       0,     0,     0,    14,     0,     0,     0,    15,     0,     0,
      16,    17,     0,    18,     0,    19,     0,    20,    21,    22,
       0,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,   843,     0,     0,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    84,     0,     0,
       0,     0,     0,    85,    86,    87,     0,     0,    88,    89,
      90,    91,     0,     0,    92,    93,    94,    95,    96,     0,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,     0,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,     0,
     145,   146,   147,     0,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,    12,     0,    13,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,     0,     0,    15,     0,     0,    16,
      17,     0,    18,     0,    19,     0,    20,    21,    22,     0,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,   851,     0,     0,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,    85,    86,    87,     0,     0,    88,    89,    90,
      91,     0,     0,    92,    93,    94,    95,    96,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,     0,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,     0,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
      12,     0,    13,     0,     0,     0,     0,     0,     0,     0,
       0,    14,     0,     0,   747,    15,     0,     0,    16,    17,
       0,    18,     0,    19,     0,    20,    21,    22,     0,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,     0,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,    78,
      79,    80,    81,    82,    83,    84,     0,     0,     0,     0,
       0,    85,    86,    87,     0,     0,    88,    89,    90,    91,
       0,     0,    92,    93,    94,    95,    96,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,     0,   145,   146,
     147,     0,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,    12,
       0,    13,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,     0,     0,    15,     0,     0,    16,    17,     0,
      18,     0,    19,     0,    20,    21,    22,     0,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    84,     0,     0,     0,     0,     0,
      85,    86,    87,     0,     0,    88,    89,    90,    91,     0,
       0,    92,    93,    94,    95,    96,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     0,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,     0,   145,   146,   147,
       0,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,    12,     0,
      13,     0,     0,     0,     0,     0,     0,     0,     0,    14,
       0,     0,     0,    15,     0,     0,    16,    17,     0,    18,
       0,    19,     0,    20,    21,    22,     0,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,   365,    77,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,     0,     0,     0,     0,     0,    85,
      86,    87,     0,     0,    88,    89,    90,    91,     0,     0,
      92,   368,    94,   369,    96,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   370,   371,   108,   372,   110,
       0,   111,   373,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,     0,   145,   146,   147,     0,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   378,   176,   177,
     379,   179,   180,   181,   182,   183,   380,   185,   381,   187,
     188,   189,   190,   191,   192,   193,   382,   383,   196,   197,
     198,   199,   200,   201,   202,   203,   204,    12,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
       0,     0,    15,     0,     0,    16,    17,     0,    18,     0,
      19,     0,    20,    21,    22,     0,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,     0,     0,     0,     0,     0,    85,    86,
      87,     0,     0,    88,    89,    90,    91,     0,     0,    92,
      93,    94,    95,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,     0,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   540,   140,
     141,   142,   143,   144,     0,   145,   541,   147,     0,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,    12,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,    14,     0,     0,
       0,    15,     0,     0,    16,    17,     0,    18,     0,    19,
       0,    20,    21,    22,     0,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     0,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    84,     0,     0,     0,     0,     0,    85,    86,    87,
       0,     0,    88,    89,    90,    91,     0,     0,    92,    93,
      94,    95,    96,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,     0,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   563,   140,   141,
     142,   143,   144,     0,   145,   541,   147,     0,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,    12,     0,    13,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,     0,     0,
      15,     0,     0,    16,    17,     0,    18,     0,    19,     0,
      20,    21,    22,     0,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,    85,    86,    87,     0,
       0,    88,    89,    90,    91,     0,     0,    92,    93,    94,
      95,    96,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,     0,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   577,   140,   141,   142,
     143,   144,     0,   145,   541,   147,     0,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,    12,     0,    13,     0,     0,     0,
       0,     0,     0,     0,     0,    14,     0,     0,     0,    15,
       0,     0,    16,    17,     0,    18,     0,    19,     0,    20,
      21,    22,     0,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    84,
       0,     0,     0,     0,     0,    85,    86,    87,     0,     0,
      88,    89,    90,    91,     0,     0,    92,    93,    94,    95,
      96,     0,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,     0,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   601,   140,   141,   142,   143,
     144,     0,   145,   541,   147,     0,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,    12,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,     0,     0,    15,     0,
       0,    16,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,   365,    77,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,     0,
       0,     0,     0,     0,    85,    86,    87,     0,     0,    88,
      89,    90,    91,     0,     0,    92,   368,    94,   369,    96,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     370,   371,   108,   372,   110,     0,   111,   373,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   374,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,   145,   146,   147,     0,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   378,   176,   177,   379,   179,   180,   181,   182,
     183,   380,   185,   381,   187,   188,   189,   190,   191,   192,
     193,   382,   383,   196,   197,   198,   199,   200,   201,   202,
     203,   204,    13,     0,     0,     0,     0,     0,     0,     0,
       0,  1350,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1351,     0,     0,     0,     0,     0,  1352,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1353,   388,    31,    32,
      33,   389,    35,    36,   390,    38,    39,    40,    41,    42,
      43,    44,  1354,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,    57,    58,    59,    60,    61,    62,
      63,     0,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,   365,    77,     0,     0,     0,    78,
      79,    80,    81,    82,    83,    84,     0,     0,     0,     0,
       0,   366,   367,    87,     0,     0,     0,    89,    90,    91,
       0,     0,    92,   368,    94,   369,    96,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   370,   371,   108,
     372,   110,     0,   111,   373,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   374,   127,
     128,   129,   130,   131,   375,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,     0,   145,   146,
     147,     0,   391,   149,   377,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   378,
     176,   177,   379,   179,   180,   181,   182,   183,   380,   185,
     381,   187,   188,  1355,  1356,   191,   192,   193,   382,   383,
     196,   197,   198,   199,   200,   201,   202,   203,   204,    13,
       0,     0,     0,     0,     0,     0,     0,     0,  1350,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1353,   388,    31,    32,    33,   389,    35,
      36,   390,    38,    39,    40,    41,    42,    43,    44,  1354,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,    57,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,   365,    77,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,     0,     0,     0,     0,     0,   366,   367,
      87,     0,     0,     0,    89,    90,    91,     0,     0,    92,
     368,    94,   369,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   370,   371,   108,   372,   110,     0,
     111,   373,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   374,   127,   128,   129,   130,
     131,   375,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,   145,   146,   147,     0,   391,
     149,   377,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   378,   176,   177,   379,
     179,   180,   181,   182,   183,   380,   185,   381,   187,   188,
     189,   190,   191,   192,   193,   382,   383,   196,   197,   198,
     199,   200,   201,   202,   203,   204,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     387,   388,    31,    32,    33,   389,    35,    36,   390,    38,
      39,    40,    41,    42,    43,    44,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,    57,    58,
      59,    60,    61,    62,    63,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,   365,    77,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    84,
       0,     0,     0,     0,     0,   366,   367,    87,     0,     0,
       0,    89,    90,    91,     0,     0,    92,   368,    94,   369,
      96,     0,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   370,   371,   108,   372,   110,     0,   111,   373,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   374,   127,   128,   129,   130,   131,   375,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     0,   145,   146,   147,     0,   391,   149,   377,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   378,   176,   177,   379,   179,   180,   181,
     182,   183,   380,   185,   381,   187,   188,   189,   190,   191,
     192,   193,   382,   383,   196,   197,   198,   199,   200,   201,
     202,   203,   204,  1295,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   882,  1296,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   387,   388,    31,
      32,    33,   389,    35,    36,   390,   883,    39,    40,    41,
      42,    43,    44,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   365,    77,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,   366,   367,    87,     0,     0,     0,    89,     0,
       0,     0,     0,    92,   368,    94,   369,    96,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   370,   371,
     108,   372,   110,     0,   111,   373,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   374,
     127,   128,   129,   130,   131,   375,   884,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,     0,   391,   149,   885,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     378,   176,   177,   379,   179,   180,   181,   182,   183,   380,
     185,   381,   187,   188,   189,   190,   191,   192,   193,   382,
     383,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     632,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     633,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   344,   345,   346,   347,   348,   349,
     350,   351,   352,    38,    39,    40,    41,    42,    43,    44,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,    57,    58,    59,    60,    61,    62,    63,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,   365,    77,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,     0,     0,     0,     0,     0,   366,
     367,    87,     0,     0,     0,    89,     0,     0,     0,     0,
      92,   368,    94,   369,    96,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   370,   371,   108,   372,   110,
       0,   111,   373,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   374,   127,   128,   129,
     130,   131,   375,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,     0,   145,   146,   147,     0,
     376,   149,   377,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   378,   176,   177,
     379,   179,   180,   181,   182,   183,   380,   185,   381,   187,
     188,   189,   190,   191,   192,   193,   382,   383,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   684,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   685,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   344,   345,   346,   347,   348,   349,   350,   351,   352,
      38,    39,    40,    41,    42,    43,    44,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   365,
      77,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,   366,   367,    87,     0,
       0,     0,    89,     0,     0,     0,     0,    92,   368,    94,
     369,    96,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   370,   371,   108,   372,   110,     0,   111,   373,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   374,   127,   128,   129,   130,   131,   375,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,     0,   376,   149,   377,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   378,   176,   177,   379,   179,   180,
     181,   182,   183,   380,   185,   381,   187,   188,   189,   190,
     191,   192,   193,   382,   383,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   882,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   387,
     388,    31,    32,    33,   389,    35,    36,   390,   883,    39,
      40,    41,    42,    43,    44,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,   365,    77,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,     0,
       0,     0,     0,     0,   366,   367,    87,     0,     0,     0,
      89,     0,     0,     0,     0,    92,   368,    94,   369,    96,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     370,   371,   108,   372,   110,     0,   111,   373,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   374,   127,   128,   129,   130,   131,   375,   884,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,   145,   146,   147,     0,   391,   149,   885,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   378,   176,   177,   379,   179,   180,   181,   182,
     183,   380,   185,   381,   187,   188,   189,   190,   191,   192,
     193,   382,   383,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   882,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   387,   388,    31,
      32,    33,   389,    35,    36,   390,    38,    39,    40,    41,
      42,    43,    44,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   365,    77,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,   366,   367,    87,     0,     0,     0,    89,     0,
       0,     0,     0,    92,   368,    94,   369,    96,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   370,   371,
     108,   372,   110,     0,   111,   373,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   374,
     127,   128,   129,   130,   131,   375,   884,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,     0,   391,   149,   885,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     378,   176,   177,   379,   179,   180,   181,   182,   183,   380,
     185,   381,   187,   188,   189,   190,   191,   192,   193,   382,
     383,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     649,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   344,   345,   346,   347,   348,   349,
     350,   351,   352,    38,    39,    40,    41,    42,    43,    44,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,    57,    58,    59,    60,    61,    62,    63,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,   365,    77,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,     0,     0,     0,     0,     0,   366,
     367,    87,     0,     0,   650,    89,     0,     0,     0,     0,
      92,   368,    94,   369,    96,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   370,   371,   108,   372,   110,
       0,   111,   373,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   374,   127,   128,   129,
     130,   131,   375,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,     0,   145,   146,   147,     0,
     376,   149,   377,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   378,   176,   177,
     379,   179,   180,   181,   182,   183,   380,   185,   381,   187,
     188,   189,   190,   191,   192,   193,   382,   383,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   344,   345,   346,
     347,   348,   349,   350,   351,   352,    38,    39,    40,    41,
      42,    43,    44,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   365,    77,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,   366,   367,    87,     0,     0,     0,    89,     0,
       0,     0,     0,    92,   368,    94,   369,    96,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   370,   371,
     108,   372,   110,     0,   111,   373,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   374,
     127,   128,   129,   130,   131,   375,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,     0,   376,   149,   377,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     378,   176,   177,   379,   179,   180,   181,   182,   183,   380,
     185,   381,   187,   188,   189,   190,   191,   192,   193,   382,
     383,   196,   197,   198,   199,   200,   201,   202,   203,   204,
      39,    40,    41,    42,    43,    44,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,    57,    58,
      59,    60,    61,    62,    63,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,   365,    77,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    84,
       0,     0,     0,     0,     0,   366,   367,    87,     0,     0,
       0,    89,     0,     0,     0,     0,    92,   368,    94,   369,
      96,     0,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   370,   371,   108,     0,   110,     0,   111,     0,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   374,   127,   128,   129,   130,   131,   375,     0,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     0,   145,   146,   147,     0,     0,   149,     0,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   378,   176,   177,   379,   179,   180,   181,
     182,   183,   380,   185,   381,   187,   188,   189,   190,   191,
     192,   193,   382,   383,   196,   197,   198,   199,   200,   201,
     202,   203,   204,     0,  1408,     0,     0,   997,   998,   999,
    1000,     0,  1001,     0,     0,  1002,     0,     0,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,  1011,     0,     0,  1012,
    1013,  1014,  1428,     0,     0,   997,   998,   999,  1000,     0,
    1001,     0,     0,  1002,     0,     0,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,  1011,     0,     0,  1012,  1013,  1014,
    1440,     0,     0,   997,   998,   999,  1000,     0,  1001,   332,
       0,  1002,  1015,  1016,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1010,  1011,     0,     0,  1012,  1013,  1014,  1449,     0,
       0,   997,   998,   999,  1000,     0,  1001,   332,     0,  1002,
    1015,  1016,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,
    1011,     0,     0,  1012,  1013,  1014,  1451,     0,     0,   997,
     998,   999,  1000,     0,  1001,   332,     0,  1002,  1015,  1016,
    1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,     0,
       0,  1012,  1013,  1014,  1454,     0,     0,   997,   998,   999,
    1000,     0,  1001,   332,     0,  1002,  1015,  1016,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,  1011,     0,     0,  1012,
    1013,  1014,  1455,     0,     0,   997,   998,   999,  1000,     0,
    1001,   332,     0,  1002,  1015,  1016,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,  1011,     0,     0,  1012,  1013,  1014,
    1460,     0,     0,   997,   998,   999,  1000,     0,  1001,   332,
       0,  1002,  1015,  1016,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1010,  1011,     0,     0,  1012,  1013,  1014,  1463,     0,
       0,   997,   998,   999,  1000,     0,  1001,   332,     0,  1002,
    1015,  1016,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,
    1011,     0,     0,  1012,  1013,  1014,  1466,     0,     0,   997,
     998,   999,  1000,     0,  1001,   332,     0,  1002,  1015,  1016,
    1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,     0,
       0,  1012,  1013,  1014,  1468,     0,     0,   997,   998,   999,
    1000,     0,  1001,   332,     0,  1002,  1015,  1016,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,  1011,     0,     0,  1012,
    1013,  1014,  1470,     0,     0,   997,   998,   999,  1000,     0,
    1001,   332,     0,  1002,  1015,  1016,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,  1011,     0,     0,  1012,  1013,  1014,
    1568,     0,     0,   997,   998,   999,  1000,     0,  1001,   332,
       0,  1002,  1015,  1016,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1010,  1011,     0,     0,  1012,  1013,  1014,  1569,     0,
       0,   997,   998,   999,  1000,     0,  1001,   332,     0,  1002,
    1015,  1016,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,
    1011,     0,     0,  1012,  1013,  1014,  1574,     0,     0,   997,
     998,   999,  1000,     0,  1001,   332,     0,  1002,  1015,  1016,
    1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,     0,
       0,  1012,  1013,  1014,  1580,     0,     0,   997,   998,   999,
    1000,     0,  1001,   332,     0,  1002,  1015,  1016,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,  1011,     0,     0,  1012,
    1013,  1014,  1643,     0,     0,   997,   998,   999,  1000,     0,
    1001,   332,     0,  1002,  1015,  1016,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,  1011,     0,     0,  1012,  1013,  1014,
    1644,     0,     0,   997,   998,   999,  1000,     0,  1001,   332,
       0,  1002,  1015,  1016,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1010,  1011,     0,     0,  1012,  1013,  1014,  1647,     0,
       0,   997,   998,   999,  1000,     0,  1001,   332,     0,  1002,
    1015,  1016,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,
    1011,     0,     0,  1012,  1013,  1014,  1648,     0,     0,   997,
     998,   999,  1000,     0,  1001,   332,     0,  1002,  1015,  1016,
    1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,     0,
       0,  1012,  1013,  1014,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   332,     0,     0,  1015,  1016,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   332,     0,     0,  1015,  1016
};

static const yytype_int16 yycheck[] =
{
      25,   342,     9,   507,   233,  1178,   695,   724,   669,   970,
     671,  1268,    12,   674,    12,  1378,    14,  1163,   625,   330,
    1097,   508,   509,   510,   511,   330,   724,  1322,   736,   737,
     407,   772,    66,   538,   316,   776,   539,   542,   543,   544,
      14,   546,   547,   420,   421,   322,  1357,    18,    36,   322,
     555,   125,   557,   330,   559,    12,    62,   330,    43,   564,
     565,   566,   567,   568,   569,   570,   571,   286,   573,   288,
      43,   322,   694,   578,   579,   580,  1536,   582,   583,   330,
     436,   910,   459,   125,   589,   441,   591,    43,   444,   594,
      15,   125,   448,    37,    38,    51,    62,   602,   603,   604,
     605,   606,   607,   608,   609,    51,   611,    12,  1365,   988,
      43,   990,   615,   125,   736,   737,    15,     3,     4,     5,
      13,   322,   104,    44,   832,    22,   251,   117,    43,   330,
     251,    43,   117,   252,   128,   777,   778,   258,    62,    51,
      43,  1020,   322,  1540,    65,    14,    43,  1359,    51,    51,
     330,  1030,    36,   283,    51,   322,  1035,    53,  1037,   183,
    1039,   128,  1041,   330,  1043,   147,  1045,   322,  1047,    35,
      12,   296,  1051,    36,  1053,   330,   193,    43,    37,    38,
     310,   306,   176,   107,   117,    51,    52,  1148,    22,    55,
      56,    57,   186,   910,   316,   912,   186,   316,   153,   316,
     322,   186,   117,    26,    73,   322,   122,  1667,   330,   176,
     832,    43,   910,   330,   912,   127,   118,    51,   879,    51,
     164,    44,   316,   229,   127,    37,    38,   316,   322,   134,
     127,   186,   178,   322,   222,   134,   330,   316,   316,    12,
     197,   330,   167,   322,   322,   243,   465,   321,   246,   323,
     469,   330,   330,   186,   473,   474,   475,   762,  1553,   478,
     882,   234,   128,   229,   316,   236,   769,   151,  1665,   243,
     322,    44,   246,   194,   247,   248,   249,   250,   330,   321,
     322,  1110,    47,   179,    49,   178,   128,   243,   151,   600,
     324,   325,   326,   127,   576,   600,   165,   166,   214,   215,
     942,   108,  1181,  1614,   274,   164,  1185,  1670,    12,   321,
     322,   530,   954,   282,   533,  1056,   672,   694,    48,    48,
     597,    51,    51,   600,   597,   967,   133,   600,  1585,   336,
    1542,  1543,  1544,  1545,   690,    24,   306,   306,    50,    51,
      44,   311,   312,  1222,   281,    47,   597,    49,   704,   600,
      71,    72,    28,   290,    43,  1234,    50,    51,  1531,   736,
     737,   738,   739,   489,   490,   491,   492,   493,   494,    45,
     496,   497,   498,   499,   500,   501,   502,   503,  1673,  1087,
     246,    35,   132,   408,   105,     0,    43,   412,   118,   118,
    1536,  1537,   417,  1110,    51,   108,   597,    51,   423,   600,
    1117,   401,  1119,   401,   216,   217,   218,   119,  1554,   407,
     435,   283,  1110,  1055,   439,   440,   416,   597,   416,  1117,
     600,  1119,   420,   421,  1501,   119,   110,   452,   453,   454,
     597,   317,    15,   600,   306,   460,   436,   323,   436,    43,
     326,   441,   597,   441,   444,   600,   444,   666,   448,  1138,
     448,  1058,  1059,    43,   576,   832,    43,   676,   677,   576,
      43,   459,   965,   840,    54,  1087,   969,   283,    51,  1130,
      22,  1179,   472,   155,   472,   597,  1184,    68,   600,    70,
     597,  1189,   576,   600,    43,  1193,   705,   576,  1634,  1131,
     306,    43,  1134,  1135,    35,   520,    43,   576,   576,   876,
     525,   526,    43,   597,   529,   882,   600,  1149,   597,    12,
      51,   600,   122,   228,    55,    56,    57,    43,   597,   597,
    1399,   600,   600,   283,   576,    68,    69,    70,   243,  1675,
      22,    68,  1240,    70,   753,   754,   755,    22,   129,   539,
      36,   539,  1421,   225,   226,   597,   306,   283,   600,   309,
     310,   233,    55,    56,    57,   283,    52,  1179,  1437,   295,
      35,   179,  1184,   125,   126,   293,  1445,  1189,    43,   305,
    1449,  1193,   190,    51,    36,  1283,    51,   305,   306,  1287,
      55,    56,    57,    22,  1273,   176,   129,   128,  1549,   715,
      52,   947,   129,   184,   185,   186,   187,   188,   208,    68,
      69,    70,    51,    36,   214,   215,   211,   212,   213,   141,
      25,  1328,    36,   638,    14,   615,   148,   615,  1240,    52,
      44,    36,    71,    72,  1129,   128,    26,   251,    27,   654,
    1328,    30,    31,   176,   258,    34,   227,    37,   857,   176,
      12,   184,   185,   186,   187,   188,   237,   184,   185,   186,
     187,   188,    51,   128,    36,    36,   681,   682,   183,    36,
     129,  1283,   194,   195,   196,  1287,   191,    33,  1357,    36,
      52,    52,   672,    39,   672,    52,   282,   283,   897,   898,
     899,    68,    69,    70,   913,    52,   167,    36,   169,   908,
     690,   310,   690,    22,   237,    44,   694,   316,   304,   305,
     237,   307,   283,   322,   704,   246,   704,   176,   195,   196,
    1087,   330,    22,  1054,   933,   184,   185,   186,   187,   188,
      36,   120,   121,   283,   305,   306,   195,   196,  1370,  1371,
     168,   169,   283,   293,   294,   183,    52,  1379,   736,   737,
     738,   739,   129,   191,    22,   305,   306,   234,    16,    17,
      18,    19,    20,    21,   305,   306,    22,    36,   227,    27,
     247,   248,   249,   250,  1269,   234,    25,    15,   237,   769,
      22,   769,    40,    52,   774,    36,   774,    36,   247,   248,
     249,   250,  1471,   283,   306,  1493,  1494,   309,   183,   176,
      98,    52,    36,   293,   294,    43,   191,   184,   185,   186,
     187,   188,  1179,    51,  1145,   305,   306,  1184,    52,   117,
     183,    51,  1189,    36,    25,   123,  1193,  1321,   191,    36,
      25,  1529,    36,   830,    36,    36,  1330,  1331,  1315,    52,
     828,    36,    44,   189,   832,    52,  1497,   193,    52,    35,
     227,  1530,   840,   111,   112,   113,   114,   115,   116,  1068,
     237,    51,  1071,  1072,  1073,    51,    36,  1565,  1547,  1078,
      36,    36,  1504,  1240,    44,    36,    36,  1474,  1475,  1577,
     895,  1493,  1494,    44,    44,   174,    52,    52,   876,   223,
      36,   180,    36,  1102,   882,    22,   911,   231,    44,  1597,
      44,   199,   200,   201,    33,    33,   204,   205,   108,   109,
      39,    39,   902,  1225,   902,   173,  1283,  1529,  1127,  1128,
    1287,    36,    22,  1555,  1236,  1237,    36,   239,   458,    44,
    1276,   243,   462,  1245,    44,  1614,  1282,  1249,    22,  1251,
    1252,    88,  1254,  1622,    91,  1257,  1258,    94,    95,    96,
      97,   192,   193,  1565,   251,  1301,   253,   947,    36,   947,
    1667,    12,    36,   260,   261,  1577,    44,   317,   318,   266,
      44,   961,  1651,   961,    12,   965,   964,   965,    43,   969,
      43,   969,   279,   280,    43,  1597,    68,    69,    70,    37,
      38,  1588,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    62,  1681,  1682,  1683,  1684,    36,   154,   237,  1688,
     174,   175,    36,   251,    44,    36,   254,   255,   256,   257,
      44,   259,   260,    44,   262,  1519,  1520,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   174,   175,   276,   277,
     278,   188,    36,    36,   282,   283,   159,   129,   134,   135,
      44,   137,   138,   139,   242,   141,   142,   123,   124,   206,
     207,   125,   126,   210,   143,   144,   304,   305,   160,   307,
     161,    94,    95,    96,    97,    55,    56,    57,   316,  1288,
     198,   319,   320,   216,   217,   218,     3,     4,     5,  1584,
     171,  1300,   291,   292,   176,   319,   320,   146,   147,  1087,
     296,   297,   184,   185,   186,   187,   188,   163,   181,   182,
      89,    90,   172,   195,   196,  1609,    89,    90,   263,   264,
     146,   147,   219,   220,   102,   103,  1493,  1494,    24,   505,
     506,   512,   513,    24,   514,   515,  1482,    20,    21,   176,
    1486,    68,  1473,    70,   523,   524,   738,   739,  1677,  1678,
     193,   176,   234,    43,    43,   237,  1144,    43,    43,    43,
      32,    12,  1529,    51,    44,   247,   248,   249,   250,    44,
    1160,    44,  1160,    51,    44,  1190,    36,    36,   155,  1194,
    1144,   162,    51,    51,    12,  1680,   140,    66,   141,   155,
    1178,  1179,   162,   155,   155,   183,  1184,    55,  1565,   128,
     128,  1189,   129,  1218,   155,  1193,    53,   108,  1223,  1224,
    1577,   109,    44,  1228,  1178,    44,    13,    44,    44,    68,
    1235,    70,    44,    44,   228,    62,  1241,    51,  1243,   155,
    1597,  1246,   228,   140,    40,  1250,   128,    12,    40,   133,
    1255,    87,    13,   117,    13,   153,   157,  1262,    12,   176,
      43,  1266,  1240,   134,   136,    43,    43,   184,   185,   186,
     187,   188,    43,    43,    36,   202,    86,    26,   195,   196,
      93,   245,   244,   233,  1483,   233,   176,    40,  1487,   145,
     129,  1490,  1270,   176,    36,   128,  1276,   117,  1276,   238,
     194,    87,  1282,   306,  1282,  1283,   251,   283,   263,  1287,
     227,   308,    44,   251,   306,   306,    12,   234,    12,    44,
     237,  1301,    44,  1301,    44,  1524,   228,    12,   251,   228,
     247,   248,   249,   250,    44,    99,   197,   176,   145,   216,
     100,   136,    40,    36,   176,   184,   185,   186,   187,   188,
      36,    40,   128,   125,   260,   292,   195,   196,   281,   216,
     283,   284,   285,   286,   287,   288,   289,   291,   308,    46,
     275,    46,  1350,    12,   158,   298,   299,   300,   301,   302,
     303,  1359,    44,    44,   251,   136,   155,    43,    52,   155,
     313,   314,   315,   148,    99,   234,  1350,   203,   237,    22,
      43,    43,   128,   238,    15,  1359,   125,   216,   247,   248,
     249,   250,   155,   251,   155,  1420,   254,   255,   256,   257,
     251,   259,   251,    24,   262,   134,    13,   265,   266,   267,
     268,   269,   270,   271,   272,   273,    44,    36,   276,   277,
     278,   209,    44,    29,   117,   986,   209,  1213,     6,   998,
    1231,  1220,  1538,   537,  1345,   880,   311,   311,   324,   312,
    1659,   209,  1661,   670,   673,   317,   317,   908,  1075,   251,
    1102,   318,   254,   255,   256,   257,   107,   259,   316,   323,
     262,   319,   320,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   326,   323,   276,   277,   278,   487,   326,   488,
     675,  1320,  1482,   329,  1482,  1273,  1486,   533,  1486,   254,
     255,   256,   257,   933,   259,  1493,  1494,   262,  1476,   132,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   739,
     459,   276,   277,   278,   316,   420,  1117,   319,   320,   882,
    1119,   876,  1328,  1310,   912,  1324,  1513,   921,  1173,  1552,
    1557,  1529,   665,  1531,  1349,  1138,  1534,  1535,  1498,    -1,
    1538,  1566,    -1,    -1,  1542,  1543,  1544,  1545,   413,    -1,
     413,   316,    -1,  1578,   319,   320,    -1,  1531,    -1,    -1,
    1534,  1535,    -1,    -1,  1538,    -1,    -1,  1565,  1542,  1543,
    1544,  1545,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1577,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1597,
      -1,    -1,  1627,    58,    59,    60,    61,    62,    63,    64,
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
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,
      -1,    37,    38,    39,    -1,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   321,    -1,   323,    55,
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
      -1,   276,   277,   278,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   316,    -1,    -1,   319,   320,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   316,    -1,    -1,   319,   320
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
     328,   329,    12,    14,    23,    27,    30,    31,    33,    35,
      37,    38,    39,    41,    42,    43,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   111,   112,
     113,   114,   115,   116,   117,   123,   124,   125,   128,   129,
     130,   131,   134,   135,   136,   137,   138,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   190,   191,   192,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   475,   476,   477,   478,   479,
     480,   482,   487,   498,   501,   507,   508,   509,   510,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   551,   552,   553,   554,
     555,   558,   559,   560,   571,   573,   575,   576,   577,   580,
     582,   583,   584,   585,   595,   596,   597,   598,   599,   600,
     601,   602,   604,   606,   608,   649,   650,   651,   652,   653,
     654,   655,   658,   659,   660,   661,   663,   670,   671,   675,
     676,   677,   678,   684,   685,   189,   193,   421,   422,   423,
     424,   435,   440,   426,   427,   428,   429,   435,   440,   430,
     431,   432,   433,   435,   440,   434,   435,   438,   439,   440,
     441,   252,   316,   337,   338,   360,   183,   330,   193,   333,
     334,   332,   468,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,   106,   123,   124,   135,   137,
     149,   150,   152,   156,   170,   176,   194,   196,   221,   224,
     230,   232,   240,   241,   550,   684,   685,    58,    59,    63,
      66,   194,   542,   125,   126,   561,   132,   110,   572,   531,
     108,   563,   522,   522,    44,   476,    22,    43,    51,   127,
     581,    43,    51,    43,    43,    43,    43,    51,   127,   586,
      43,    43,    43,    51,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    51,    12,   656,   657,    51,
      51,    12,   483,   484,    12,   197,   488,   489,    12,   499,
     500,   499,    43,    43,    51,    71,    72,    22,   586,    43,
      51,   127,   578,    43,   466,    62,   107,    62,   229,    62,
      62,   229,   237,   242,    36,   134,   135,   137,   138,   139,
     141,   142,   480,   481,   490,   491,   492,   159,   160,    16,
      17,    18,    19,    20,    21,    27,    40,   111,   112,   113,
     114,   115,   116,   173,   198,    37,    38,   164,    14,    73,
     165,   166,    15,   167,   168,   169,   161,   172,   163,   171,
      51,   527,   531,    33,    39,    24,    24,   542,   542,    24,
      43,   477,   477,    43,    54,   179,   190,   436,   437,   176,
     183,   191,   425,   443,   445,   446,   447,   448,   450,   451,
     452,   455,   456,   457,   460,   461,   463,   464,   475,   664,
     422,   423,   424,   183,   425,   443,   445,   447,   448,   449,
     461,   464,   475,   664,   427,   428,   429,   183,   442,   443,
     445,   446,   447,   448,   450,   451,   452,   455,   456,   461,
     463,   464,   475,   648,   664,   431,   432,   433,   438,   439,
     441,   183,   442,   443,   445,   447,   448,   449,   461,   464,
     475,   664,   339,   361,   468,   176,   335,   234,   247,   248,
     249,   250,   466,   469,   470,   562,   108,   109,   574,    32,
     684,    44,    14,    44,   603,   610,   663,   476,    51,   579,
      44,   476,    44,    65,   194,   606,   608,    44,    44,    44,
     128,   662,   684,   476,    51,   587,   605,   610,   609,   611,
     663,    44,   476,   476,   550,    36,   222,   476,   476,   550,
      36,   550,    12,    36,   550,    36,   151,   151,   476,   476,
     476,    51,    51,   579,    14,    44,   607,   611,   476,   579,
      12,    44,   472,   473,   155,   590,   477,   162,   477,   684,
     477,   477,   477,   477,    12,   140,   141,   509,   510,   512,
     512,   512,   512,   512,   512,   511,   512,   512,   512,   512,
     512,   512,   512,   512,    66,   515,   515,   514,   516,   516,
     516,   516,   517,   517,   518,   518,   162,   155,   155,   155,
      52,   476,   532,   532,   476,   476,   476,    26,    44,   477,
     556,   557,   155,   225,   226,   233,    44,   556,    55,   128,
     128,    53,   437,   444,   444,   662,    68,    70,   129,   176,
     184,   185,   186,   187,   188,   237,   468,   192,   193,   444,
     444,   444,   444,   444,   444,   444,   444,   183,   191,    69,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   183,
     227,   444,   444,   444,   444,   444,   444,   444,   444,   183,
     183,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     281,   290,   340,   317,   318,   363,   195,   196,   465,   662,
     183,   336,   155,   471,   108,   563,   109,   108,   133,   528,
      36,    44,    52,    52,   476,    52,    44,    44,    44,    44,
      52,    52,   476,    44,    44,    52,    52,    13,   657,   477,
      52,    52,   590,   484,   590,   550,   489,   590,   500,   477,
     477,    44,    44,    52,   476,   476,    36,    44,    52,   550,
      36,    44,    43,    67,   177,   196,   591,   593,   594,   595,
     663,   679,   680,   681,   683,    51,   474,   228,    62,   155,
     228,   228,   243,   550,   477,   493,   494,   495,   140,   512,
      43,    51,   246,   526,   547,   614,   617,   618,   619,   620,
     621,   622,   623,   624,   591,   591,   588,   594,   588,    52,
      25,    25,    25,    36,    44,   223,   231,   477,   477,   477,
      44,   444,    40,   174,   175,   128,   613,    12,   662,   174,
     175,   123,   124,   141,   148,   194,   465,   174,   180,   453,
     684,   239,   243,   667,   465,   176,   186,   459,   613,   176,
     613,    87,   631,    71,    72,   105,   251,   253,   260,   261,
     266,   279,   280,   341,   342,   345,   346,   350,   351,   352,
     353,   354,   355,   358,   359,   362,   251,   254,   255,   256,
     257,   259,   262,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   276,   277,   278,   319,   320,   360,   364,   365,
     366,   367,   368,   369,   370,   373,   374,   378,   379,   380,
     381,   382,   387,   388,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   685,    40,   468,   591,   125,   126,
      28,    45,   133,   612,   663,    52,    52,   477,   134,   117,
     485,    13,    13,   136,   153,   502,   504,   505,   157,    52,
      52,   612,   590,   473,   593,    43,    43,    43,    14,    26,
      37,   592,   476,   477,   477,   477,    43,    43,   321,   323,
     672,   684,    36,   143,   144,   496,   493,   614,   476,   621,
      51,   211,   212,   213,   625,    93,   647,   244,   616,   245,
      86,   631,   202,   626,    26,   589,   557,   233,   233,   613,
     550,    40,   145,   613,   176,   176,    36,   128,   684,   125,
     321,   322,   668,   669,   238,   685,   662,   194,   613,   117,
     458,   662,   458,    88,    91,    94,    95,    96,    97,   154,
     188,   206,   207,   210,   632,   633,   634,   635,   636,   639,
     644,   645,   646,    87,   291,   292,   282,   283,   304,   305,
     307,   347,   283,   295,   305,   347,   283,   293,   294,   305,
     306,   363,   283,   305,   306,   363,   251,   281,   283,   284,
     285,   286,   287,   288,   289,   298,   299,   300,   301,   302,
     303,   313,   314,   315,   251,   118,   474,   368,   306,   263,
     383,   384,   385,   308,   306,   309,   363,   282,   306,   372,
     283,   375,   251,   363,   274,   306,   311,   312,   389,   283,
     305,   306,   363,   306,   363,   283,   306,   363,   363,   283,
     306,   309,   310,   363,   283,   306,   363,   283,   310,   363,
     251,   296,   306,   296,   297,   363,   306,   363,   466,   613,
     465,   563,   563,   570,    44,   477,    12,   197,   486,   477,
     477,   477,    12,   506,   186,   503,   504,    15,   134,   477,
      26,    44,    44,    44,    44,    14,    44,   591,   682,    52,
     228,    12,   673,   674,   673,   228,   494,   145,   497,    44,
      52,    52,   614,   100,   216,    99,   618,    98,   117,   123,
     199,   200,   201,   204,   205,   615,   628,   619,   136,   122,
     214,   215,   627,   477,   477,   444,   590,   613,   146,   147,
     613,   613,   181,   182,   454,    43,   474,   666,   667,    36,
      23,    33,    39,    58,    74,   235,   236,   411,   412,   413,
     414,   417,   418,   419,   542,   466,    40,   176,   458,   613,
      36,    40,    94,    95,    96,    97,    89,    90,    43,   117,
     186,   638,   216,    89,    90,   684,   661,   632,   292,   291,
     343,   411,   591,    55,    56,    57,   344,   260,   348,   349,
     363,   591,   363,   591,   476,   251,   591,   476,   251,    66,
     125,   324,   325,   326,   356,   125,   357,   357,   251,   476,
     308,   264,   384,   386,   363,   476,   476,   362,   251,   125,
     321,   323,   371,   476,   251,   258,   376,   377,   251,   376,
     251,   363,   476,   362,   362,   275,   390,   591,   476,   251,
     476,   251,   362,   476,   251,   251,   362,   476,   362,   362,
     251,   362,   476,   251,   362,   362,   251,   476,   251,   476,
     251,   471,   444,   685,    46,    46,    34,   120,   121,   474,
     559,   550,    12,   136,   550,   591,    12,   134,   591,   477,
     158,    44,    44,   155,    36,    44,   477,   550,    36,    44,
      44,    43,   146,   147,   148,   625,    52,   516,    99,   102,
     103,   513,   514,   627,   219,   220,   630,   630,   620,   104,
     147,   514,   514,   203,    13,   178,   462,    44,   472,   155,
     665,   238,   669,   542,    22,    22,    43,    43,    15,   474,
     666,   418,    33,    39,    33,    39,   420,   471,   613,   613,
     216,   186,   638,   613,    43,   117,   186,   641,   128,   125,
     321,   322,   283,   293,   294,   305,   306,   363,   251,   251,
     125,   476,   363,   251,   251,   283,   293,   305,   306,   363,
     251,   363,   251,   363,   474,   466,   563,   563,   561,   550,
     477,   155,   550,   477,   477,   591,   591,   155,   590,   674,
     673,   613,   216,   217,   218,   629,   629,   514,   514,   164,
     477,    44,   591,   474,   411,   542,   542,   415,   549,   661,
     661,   412,   665,   418,   418,   418,   418,    24,   178,   467,
     474,   458,   637,   637,   208,   627,   642,   661,   613,   640,
     640,   591,   476,   251,   251,   591,   476,   251,   251,   331,
     444,   471,    47,    49,   564,    47,    49,   565,   563,   134,
     591,    13,    44,   514,   474,   666,    44,    36,   474,   476,
      36,    44,    44,   661,   209,    36,    44,   167,   169,   643,
     474,   566,   568,   567,   569,    29,   477,   477,   665,   416,
     547,   549,    25,   638,   627,   661,   641,   641,   444,    48,
     118,   474,    50,   119,   474,    48,   118,   474,    50,   119,
     474,   474,    44,   209
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
        case 2:

/* Line 1455 of yacc.c  */
#line 769 "../src/parser/XQParser.y"
    {
    SET_BUILT_IN_NAMESPACE(XQillaFunction::XQillaPrefix, XQillaFunction::XMLChFunctionURI);
  }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 774 "../src/parser/XQParser.y"
    {
    SET_BUILT_IN_NAMESPACE(XMLChXS, SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
    SET_BUILT_IN_NAMESPACE(XMLChXSI, SchemaSymbols::fgURI_XSI);
    SET_BUILT_IN_NAMESPACE(XMLChFN, XQFunction::XMLChFunctionURI);
    SET_BUILT_IN_NAMESPACE(XMLChLOCAL, XQUserFunction::XMLChXQueryLocalFunctionsURI);
    SET_BUILT_IN_NAMESPACE(XMLChERR, FunctionError::XMLChXQueryErrorURI);
    SET_BUILT_IN_NAMESPACE(XQillaFunction::XQillaPrefix, XQillaFunction::XMLChFunctionURI);
  }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 799 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (8)].signature)->argSpecs = (yyvsp[(5) - (8)].argSpecs);
    (yyvsp[(2) - (8)].signature)->returnType = (yyvsp[(6) - (8)].sequenceType);
    QP->_function = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(2) - (8)].signature), (yyvsp[(7) - (8)].astNode), true, MEMMGR));
  }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 810 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].signature)->argSpecs = (yyvsp[(2) - (3)].argSpecs);
    (yyvsp[(1) - (3)].signature)->returnType = (yyvsp[(3) - (3)].sequenceType);
    QP->_signature = (yyvsp[(1) - (3)].signature);
  }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 819 "../src/parser/XQParser.y"
    {
    printf("  { 0, 0, 0, 0, 0 }\n};\n\n");

    UTF8Str module(QP->_moduleName);
    printf("static const DelayedModule %s_module = { %s_file, %s_prefix, %s_uri, %s_functions };\n",
           module.str(), module.str(), module.str(), module.str(), module.str());
  }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 830 "../src/parser/XQParser.y"
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

  case 18:

/* Line 1455 of yacc.c  */
#line 867 "../src/parser/XQParser.y"
    {
    printf("static const DelayedModule::FuncDef %s_functions[] = {\n", UTF8(QP->_moduleName));
  }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 871 "../src/parser/XQParser.y"
    {
  }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 877 "../src/parser/XQParser.y"
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

  case 21:

/* Line 1455 of yacc.c  */
#line 913 "../src/parser/XQParser.y"
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

  case 22:

/* Line 1455 of yacc.c  */
#line 944 "../src/parser/XQParser.y"
    {
  }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 947 "../src/parser/XQParser.y"
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

  case 25:

/* Line 1455 of yacc.c  */
#line 971 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 975 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 993 "../src/parser/XQParser.y"
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

  case 35:

/* Line 1455 of yacc.c  */
#line 1012 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, signature, 0, MEMMGR));
  }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 1017 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 1022 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 1029 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 1034 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 1039 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 1047 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 1051 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 1057 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 1062 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 1072 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:function declaration does not have a {}name attribute");
    }

    (yyvsp[(1) - (4)].functDecl)->getSignature()->argSpecs = (yyvsp[(2) - (4)].argSpecs);
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1085 "../src/parser/XQParser.y"
    {    
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, signature, 0, true, MEMMGR));
  }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 1090 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1097 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1102 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1110 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
  }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1114 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 1122 "../src/parser/XQParser.y"
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

  case 56:

/* Line 1455 of yacc.c  */
#line 1149 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 1153 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1160 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1166 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1171 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 1176 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 1185 "../src/parser/XQParser.y"
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

  case 63:

/* Line 1455 of yacc.c  */
#line 1209 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1213 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1220 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1225 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1230 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1235 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1246 "../src/parser/XQParser.y"
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

  case 70:

/* Line 1455 of yacc.c  */
#line 1264 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1268 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1275 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1280 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1288 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1313 "../src/parser/XQParser.y"
    {
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1316 "../src/parser/XQParser.y"
    {
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1319 "../src/parser/XQParser.y"
    {
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1322 "../src/parser/XQParser.y"
    {
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1325 "../src/parser/XQParser.y"
    {
  }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1328 "../src/parser/XQParser.y"
    {
  }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1331 "../src/parser/XQParser.y"
    {
  }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1334 "../src/parser/XQParser.y"
    {
  }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1337 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1340 "../src/parser/XQParser.y"
    {
  }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1343 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1346 "../src/parser/XQParser.y"
    {
  }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1349 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1352 "../src/parser/XQParser.y"
    {
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1355 "../src/parser/XQParser.y"
    {
  }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1358 "../src/parser/XQParser.y"
    {
  }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1361 "../src/parser/XQParser.y"
    {
  }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1364 "../src/parser/XQParser.y"
    {
  }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1374 "../src/parser/XQParser.y"
    {
//     $$ = $1;
    const XMLCh *p = (yyvsp[(1) - (1)].str);
    while(*p && *p != ':') ++p;
    if(*p == 0) {
      yyerror((yylsp[(1) - (1)]), "The method for the xsl:output declaration does not have a prefix");
    }
  }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1386 "../src/parser/XQParser.y"
    {
  }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1389 "../src/parser/XQParser.y"
    {
  }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1397 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1402 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1407 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1415 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1423 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1434 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1444 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1448 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1455 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1464 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1468 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1473 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1483 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1487 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1492 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1497 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1526 "../src/parser/XQParser.y"
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

  case 136:

/* Line 1455 of yacc.c  */
#line 1544 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1548 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1553 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1562 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1571 "../src/parser/XQParser.y"
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

  case 143:

/* Line 1455 of yacc.c  */
#line 1591 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1595 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1600 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1608 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1613 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1617 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1624 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1628 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1636 "../src/parser/XQParser.y"
    {
    XQCallTemplate *call = (XQCallTemplate*)(yyvsp[(1) - (3)].astNode);
    call->setArguments((yyvsp[(2) - (3)].templateArgs));
    (yyval.astNode) = call;

    if(call->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:call-template instruction does not have a {}name attribute");
    }
  }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1649 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1653 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1663 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1667 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1675 "../src/parser/XQParser.y"
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

  case 157:

/* Line 1455 of yacc.c  */
#line 1693 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1697 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1704 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1709 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1714 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1722 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1728 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1736 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1744 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1751 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(2) - (4)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = (yyvsp[(2) - (4)].astNode);
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1765 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1769 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (2)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(2) - (2)].astNode));

    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1783 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1792 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1799 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1803 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1810 "../src/parser/XQParser.y"
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

  case 174:

/* Line 1455 of yacc.c  */
#line 1845 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1849 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1854 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1860 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1869 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1873 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1880 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1884 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1891 "../src/parser/XQParser.y"
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

  case 183:

/* Line 1455 of yacc.c  */
#line 1909 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), 0, 0, MEMMGR));
  }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1913 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1920 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1925 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->seqType = (yyvsp[(3) - (3)].sequenceType);
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1933 "../src/parser/XQParser.y"
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

  case 188:

/* Line 1455 of yacc.c  */
#line 1951 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1955 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1963 "../src/parser/XQParser.y"
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

  case 191:

/* Line 1455 of yacc.c  */
#line 1985 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1989 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1996 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 2004 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 2013 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 2021 "../src/parser/XQParser.y"
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

  case 197:

/* Line 1455 of yacc.c  */
#line 2058 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 2062 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2069 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 2076 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2085 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 2094 "../src/parser/XQParser.y"
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

  case 203:

/* Line 1455 of yacc.c  */
#line 2121 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 2125 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2132 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 2144 "../src/parser/XQParser.y"
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

  case 207:

/* Line 1455 of yacc.c  */
#line 2170 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2174 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2181 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 2191 "../src/parser/XQParser.y"
    {
    XQCopyOf *as = (XQCopyOf*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:copy-of instruction does not have a {}select attribute");
    }
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2203 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 2207 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 2212 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 2221 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    XQCopy *as = (XQCopy*)(yyval.astNode);

    XQContextItem *ci = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQContextItem(MEMMGR));
    as->setExpression(ci);

    as->setChildren((yyvsp[(2) - (3)].parenExpr)->getChildren());
  }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 2234 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 2238 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 2243 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 2252 "../src/parser/XQParser.y"
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

  case 219:

/* Line 1455 of yacc.c  */
#line 2266 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 2270 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 2283 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 2288 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2300 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 2304 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::SELF, nt, MEMMGR));
  }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 2312 "../src/parser/XQParser.y"
    {
    // . intersect id("a")

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR)));
    oargs.push_back((yyvsp[(1) - (1)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Intersect(oargs, MEMMGR));
  }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 2325 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, nt, MEMMGR));
  }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 2333 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::ANCESTOR, nt, MEMMGR));
  }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 2346 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 2353 "../src/parser/XQParser.y"
    {
//     VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
//     fargs.push_back($3);
//     fargs.push_back($5);

//     $$ = WRAP(@1, new (MEMMGR) FunctionKey(fargs, MEMMGR));

    // TBD key() - jpcs
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 2392 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 2396 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 2400 "../src/parser/XQParser.y"
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

  case 237:

/* Line 1455 of yacc.c  */
#line 2418 "../src/parser/XQParser.y"
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

  case 238:

/* Line 1455 of yacc.c  */
#line 2436 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::PARENT);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 2446 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::ANCESTOR);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 2460 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 2468 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 2474 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2480 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2486 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2497 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 2501 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 2531 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 2535 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 2539 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 2543 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 2547 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 2551 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 2557 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 2563 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 2607 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 2611 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 2615 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 2619 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 2623 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 2627 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 2633 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 2639 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 2643 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2670 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2674 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 2678 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 2682 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 2686 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2690 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2696 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 2702 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2728 "../src/parser/XQParser.y"
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

  case 308:

/* Line 1455 of yacc.c  */
#line 2748 "../src/parser/XQParser.y"
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

  case 311:

/* Line 1455 of yacc.c  */
#line 2772 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 2786 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 2790 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 2794 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 2798 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 2802 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 2806 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 2812 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 2818 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 2822 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 2854 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 2862 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 2867 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 2876 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 2881 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 2890 "../src/parser/XQParser.y"
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

  case 339:

/* Line 1455 of yacc.c  */
#line 2950 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 2958 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 2963 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 2972 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 2977 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 2986 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 2996 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 3000 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 3008 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 3012 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 3020 "../src/parser/XQParser.y"
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

  case 350:

/* Line 1455 of yacc.c  */
#line 3036 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 3045 "../src/parser/XQParser.y"
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

  case 352:

/* Line 1455 of yacc.c  */
#line 3057 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 3065 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 3069 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 3074 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 3083 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 3087 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 3095 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), &loc);
  }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 3105 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 3117 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 3124 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 3128 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 3136 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 3141 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 3150 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (7)].signature)->argSpecs = (yyvsp[(5) - (7)].argSpecs);
    (yyvsp[(2) - (7)].signature)->returnType = (yyvsp[(6) - (7)].sequenceType);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), (yyvsp[(2) - (7)].signature), (yyvsp[(7) - (7)].astNode), true, MEMMGR));
  }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 3161 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 3165 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 3174 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 3182 "../src/parser/XQParser.y"
    {
    (yyval.signature) = new (MEMMGR) FunctionSignature(MEMMGR);
  }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 3186 "../src/parser/XQParser.y"
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

  case 374:

/* Line 1455 of yacc.c  */
#line 3199 "../src/parser/XQParser.y"
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

  case 375:

/* Line 1455 of yacc.c  */
#line 3212 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (2)].signature)->updating != FunctionSignature::OP_DEFAULT)
      yyerror((yylsp[(2) - (2)]), "Function option 'updating' already specified [err:XPST0003]");
    (yyvsp[(1) - (2)].signature)->updating = FunctionSignature::OP_TRUE;
    (yyval.signature) = (yyvsp[(1) - (2)].signature);
  }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 3221 "../src/parser/XQParser.y"
    { (yyval.boolean) = true; }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 3221 "../src/parser/XQParser.y"
    { (yyval.boolean) = false; }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 3224 "../src/parser/XQParser.y"
    { (yyval.boolean) = false; }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 3224 "../src/parser/XQParser.y"
    { (yyval.boolean) = true; }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 3228 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 3232 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 3240 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 3245 "../src/parser/XQParser.y"
    {
    ArgumentSpecs* paramList = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 3255 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 3263 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 3271 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 3284 "../src/parser/XQParser.y"
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

  case 401:

/* Line 1455 of yacc.c  */
#line 3322 "../src/parser/XQParser.y"
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

  case 403:

/* Line 1455 of yacc.c  */
#line 3367 "../src/parser/XQParser.y"
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

  case 404:

/* Line 1455 of yacc.c  */
#line 3380 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 3395 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 3402 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 3410 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 3421 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3425 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 3435 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 3439 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 3449 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 3456 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 3464 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 3468 "../src/parser/XQParser.y"
    {
    ASTNode *literal = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  X("0"), AnyAtomicType::DECIMAL,
                  MEMMGR));
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(3) - (5)].str), literal, MEMMGR));
  }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 3481 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 3489 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) CountTuple(0, (yyvsp[(3) - (3)].str), MEMMGR));
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3497 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 3502 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 3510 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 3520 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 3527 "../src/parser/XQParser.y"
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

  case 431:

/* Line 1455 of yacc.c  */
#line 3542 "../src/parser/XQParser.y"
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

  case 432:

/* Line 1455 of yacc.c  */
#line 3558 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 3562 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 3566 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 3573 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 3582 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 3586 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3595 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 3603 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 3614 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 3622 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 3633 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR));
  }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 3640 "../src/parser/XQParser.y"
    {
    XQTypeswitch::Cases::iterator it = (yyvsp[(2) - (2)].caseClauses)->begin();
    for(; it != (yyvsp[(2) - (2)].caseClauses)->end(); ++it) {
      (yyvsp[(1) - (2)].caseClauses)->push_back(*it);
    }

    (yyval.caseClauses) = (yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 3653 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 3657 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 3665 "../src/parser/XQParser.y"
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

  case 449:

/* Line 1455 of yacc.c  */
#line 3683 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses) = new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), 0)));
  }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 3688 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(SequenceTypeUnion, (yylsp[(2) - (3)]));
    (yyvsp[(1) - (3)].caseClauses)->push_back(WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(1) - (3)].caseClauses)->back()->getQName(), (yyvsp[(3) - (3)].sequenceType), 0)));
    (yyval.caseClauses) = (yyvsp[(1) - (3)].caseClauses);
  }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 3697 "../src/parser/XQParser.y"
    {
    (yyval.str) = 0;
  }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 3701 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 3709 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 3717 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == Or::name) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 3731 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == And::name) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 3750 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 3754 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 3757 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 3758 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 3762 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 3766 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 3770 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 3774 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 3778 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 3782 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 3786 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 3790 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 3794 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 3798 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 3802 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 3806 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 3815 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 3819 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 3828 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionCall(0, BuiltInModules::core.uri, MEMMGR->getPooledString("to"), args, MEMMGR));
  }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 3840 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 3844 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 3853 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 3857 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 3861 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 3865 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 3874 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 3878 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 3887 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 3891 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 3900 "../src/parser/XQParser.y"
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

  case 496:

/* Line 1455 of yacc.c  */
#line 3922 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 3932 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 3941 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 3950 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 3956 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 3977 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 3981 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 3985 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 3993 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 4000 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 4013 "../src/parser/XQParser.y"
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

  case 517:

/* Line 1455 of yacc.c  */
#line 4034 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 4043 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 4049 "../src/parser/XQParser.y"
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

  case 522:

/* Line 1455 of yacc.c  */
#line 4074 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 4088 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 4094 "../src/parser/XQParser.y"
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

  case 529:

/* Line 1455 of yacc.c  */
#line 4116 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 4126 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 4133 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 4142 "../src/parser/XQParser.y"
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

  case 536:

/* Line 1455 of yacc.c  */
#line 4165 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 4169 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 4173 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 4177 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 4181 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 4185 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 4189 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 4193 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 4201 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 4209 "../src/parser/XQParser.y"
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

  case 546:

/* Line 1455 of yacc.c  */
#line 4226 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 548:

/* Line 1455 of yacc.c  */
#line 4243 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 4247 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 550:

/* Line 1455 of yacc.c  */
#line 4251 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 551:

/* Line 1455 of yacc.c  */
#line 4255 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 4259 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 553:

/* Line 1455 of yacc.c  */
#line 4267 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 4279 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 4289 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 4301 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 4308 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 4315 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 4328 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 4357 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 580:

/* Line 1455 of yacc.c  */
#line 4368 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 4372 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 582:

/* Line 1455 of yacc.c  */
#line 4380 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 4388 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 4398 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 585:

/* Line 1455 of yacc.c  */
#line 4408 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 586:

/* Line 1455 of yacc.c  */
#line 4412 "../src/parser/XQParser.y"
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

  case 587:

/* Line 1455 of yacc.c  */
#line 4435 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 588:

/* Line 1455 of yacc.c  */
#line 4440 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 4451 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 4460 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 4464 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 4477 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 4483 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 4496 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4500 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 4509 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 4525 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 4529 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 4536 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 4540 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 4550 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 4554 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 4559 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 4569 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 4573 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 4577 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 4590 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 4594 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 4599 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 4609 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 4613 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 620:

/* Line 1455 of yacc.c  */
#line 4617 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 4634 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 4638 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 623:

/* Line 1455 of yacc.c  */
#line 4643 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 624:

/* Line 1455 of yacc.c  */
#line 4648 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 625:

/* Line 1455 of yacc.c  */
#line 4655 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                 SchemaSymbols::fgDT_STRING,
                                 (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
    }
  }
    break;

  case 626:

/* Line 1455 of yacc.c  */
#line 4668 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(2) - (3)].str), AnyAtomicType::STRING,
                  MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 627:

/* Line 1455 of yacc.c  */
#line 4681 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 629:

/* Line 1455 of yacc.c  */
#line 4690 "../src/parser/XQParser.y"
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

  case 631:

/* Line 1455 of yacc.c  */
#line 4710 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 4735 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 4743 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4751 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4755 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 4763 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 4767 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 4776 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 646:

/* Line 1455 of yacc.c  */
#line 4783 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 4787 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 648:

/* Line 1455 of yacc.c  */
#line 4797 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQNamespaceConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 4805 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 4813 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 651:

/* Line 1455 of yacc.c  */
#line 4821 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 4828 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(1) - (1)].str), AnyAtomicType::STRING, MEMMGR));
  }
    break;

  case 653:

/* Line 1455 of yacc.c  */
#line 4838 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 654:

/* Line 1455 of yacc.c  */
#line 4845 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 4849 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 656:

/* Line 1455 of yacc.c  */
#line 4857 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 657:

/* Line 1455 of yacc.c  */
#line 4867 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 4871 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 4879 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 4883 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 4893 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 662:

/* Line 1455 of yacc.c  */
#line 4900 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 663:

/* Line 1455 of yacc.c  */
#line 4909 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 664:

/* Line 1455 of yacc.c  */
#line 4911 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 665:

/* Line 1455 of yacc.c  */
#line 4913 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 666:

/* Line 1455 of yacc.c  */
#line 4915 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 667:

/* Line 1455 of yacc.c  */
#line 4921 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 668:

/* Line 1455 of yacc.c  */
#line 4925 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 4961 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 4969 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 4973 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 4978 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_SCHEMA_DOCUMENT);
  }
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 4987 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 4995 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 5003 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(NamespaceNodeTest, (yylsp[(1) - (3)]));
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NAMESPACE);
  }
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 5012 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 691:

/* Line 1455 of yacc.c  */
#line 5016 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 692:

/* Line 1455 of yacc.c  */
#line 5020 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 693:

/* Line 1455 of yacc.c  */
#line 5028 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 5032 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 5036 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 697:

/* Line 1455 of yacc.c  */
#line 5045 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 698:

/* Line 1455 of yacc.c  */
#line 5053 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 5066 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 5070 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 5074 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 703:

/* Line 1455 of yacc.c  */
#line 5078 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 5088 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 5096 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 711:

/* Line 1455 of yacc.c  */
#line 5116 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 712:

/* Line 1455 of yacc.c  */
#line 5128 "../src/parser/XQParser.y"
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

  case 713:

/* Line 1455 of yacc.c  */
#line 5143 "../src/parser/XQParser.y"
    {
}
    break;

  case 714:

/* Line 1455 of yacc.c  */
#line 5146 "../src/parser/XQParser.y"
    {
}
    break;

  case 715:

/* Line 1455 of yacc.c  */
#line 5152 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 716:

/* Line 1455 of yacc.c  */
#line 5156 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 717:

/* Line 1455 of yacc.c  */
#line 5166 "../src/parser/XQParser.y"
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

  case 719:

/* Line 1455 of yacc.c  */
#line 5183 "../src/parser/XQParser.y"
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

  case 721:

/* Line 1455 of yacc.c  */
#line 5199 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 5209 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5219 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 5228 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 5233 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5243 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 5247 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 5255 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 5260 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 5269 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 735:

/* Line 1455 of yacc.c  */
#line 5273 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 5277 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 5281 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 5285 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 739:

/* Line 1455 of yacc.c  */
#line 5289 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 5299 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 5310 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5316 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5322 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5328 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 5343 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 5347 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 5351 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 5355 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 5359 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 5363 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 5367 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 5371 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 5379 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 5383 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 5387 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 5395 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 5399 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5435 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_INSENSITIVE);
  }
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 5439 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_SENSITIVE);
  }
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 5443 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::LOWERCASE);
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5447 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::UPPERCASE);
  }
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 5456 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5460 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5468 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5472 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5482 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5486 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5490 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5494 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5498 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5505 "../src/parser/XQParser.y"
    {
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5508 "../src/parser/XQParser.y"
    {
  }
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 5515 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 5519 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 5523 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 5527 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5537 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5541 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5545 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5552 "../src/parser/XQParser.y"
    {
  }
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5555 "../src/parser/XQParser.y"
    {
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5563 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5567 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5574 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5578 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5586 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5590 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5598 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5606 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5610 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5618 "../src/parser/XQParser.y"
    {
}
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5625 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 5633 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5638 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5643 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5655 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 5659 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 5663 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 5667 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 811:

/* Line 1455 of yacc.c  */
#line 5671 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 5682 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 817:

/* Line 1455 of yacc.c  */
#line 5693 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 5697 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5707 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 5715 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 5722 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 5727 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 823:

/* Line 1455 of yacc.c  */
#line 5735 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 824:

/* Line 1455 of yacc.c  */
#line 5744 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 5756 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 5768 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE,
                  MEMMGR));
  }
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 5781 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING,
                  MEMMGR));
  }
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 5792 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5801 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5813 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, signature, (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 5818 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(5) - (7)].argSpecs), (yyvsp[(6) - (7)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, signature, (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 832:

/* Line 1455 of yacc.c  */
#line 5823 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 833:

/* Line 1455 of yacc.c  */
#line 5829 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(8) - (10)].argSpecs), (yyvsp[(9) - (10)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), signature, (yyvsp[(10) - (10)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 5835 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), signature, (yyvsp[(6) - (6)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 5841 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(6) - (8)].argSpecs), (yyvsp[(7) - (8)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 5850 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 5854 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 838:

/* Line 1455 of yacc.c  */
#line 5862 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 839:

/* Line 1455 of yacc.c  */
#line 5866 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 5873 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 5878 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 842:

/* Line 1455 of yacc.c  */
#line 5886 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 843:

/* Line 1455 of yacc.c  */
#line 5891 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 844:

/* Line 1455 of yacc.c  */
#line 5900 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 845:

/* Line 1455 of yacc.c  */
#line 5904 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 846:

/* Line 1455 of yacc.c  */
#line 5908 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 847:

/* Line 1455 of yacc.c  */
#line 5916 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 848:

/* Line 1455 of yacc.c  */
#line 5920 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 849:

/* Line 1455 of yacc.c  */
#line 5928 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 850:

/* Line 1455 of yacc.c  */
#line 5932 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 851:

/* Line 1455 of yacc.c  */
#line 5936 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 852:

/* Line 1455 of yacc.c  */
#line 5940 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 853:

/* Line 1455 of yacc.c  */
#line 5948 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 854:

/* Line 1455 of yacc.c  */
#line 5952 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 855:

/* Line 1455 of yacc.c  */
#line 5956 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 856:

/* Line 1455 of yacc.c  */
#line 5964 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 857:

/* Line 1455 of yacc.c  */
#line 5969 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 858:

/* Line 1455 of yacc.c  */
#line 5979 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 861:

/* Line 1455 of yacc.c  */
#line 5996 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 862:

/* Line 1455 of yacc.c  */
#line 6004 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(2) - (4)].argSpecs), (yyvsp[(3) - (4)].sequenceType), MEMMGR);
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, signature, (yyvsp[(4) - (4)].astNode), false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 863:

/* Line 1455 of yacc.c  */
#line 6015 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 864:

/* Line 1455 of yacc.c  */
#line 6020 "../src/parser/XQParser.y"
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

  case 867:

/* Line 1455 of yacc.c  */
#line 6048 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  }
    break;

  case 868:

/* Line 1455 of yacc.c  */
#line 6056 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  }
    break;

  case 869:

/* Line 1455 of yacc.c  */
#line 6060 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  }
    break;

  case 870:

/* Line 1455 of yacc.c  */
#line 6067 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  }
    break;

  case 871:

/* Line 1455 of yacc.c  */
#line 6072 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 872:

/* Line 1455 of yacc.c  */
#line 6081 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;



/* Line 1455 of yacc.c  */
#line 12401 "../src/parser/XQParser.cpp"
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
#line 6116 "../src/parser/XQParser.y"


}  // namespace XQParser


