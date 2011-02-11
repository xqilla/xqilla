
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
#include <xqilla/ast/XQTypeAlias.hpp>
#include <xqilla/ast/XQFunctionCall.hpp>
#include <xqilla/ast/XQOrderingChange.hpp>
#include <xqilla/ast/XQDocumentOrder.hpp>
#include <xqilla/ast/XQReturn.hpp>
#include <xqilla/ast/XQTupleConstructor.hpp>
#include <xqilla/ast/XQTupleMember.hpp>
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
static const XMLCh sz3_0[] = { chDigit_3, chPeriod, chDigit_0, chNull };
static const XMLCh option_projection[] = { 'p', 'r', 'o', 'j', 'e', 'c', 't', 'i', 'o', 'n', 0 };
static const XMLCh option_psvi[] = { 'p', 's', 'v', 'i', 0 };
static const XMLCh option_lint[] = { 'l', 'i', 'n', 't', 0 };
static const XMLCh option_extensions[] = { 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', 0 };
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
    return WRAP(pos, new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING,
        XMLUni::fgZeroLenString, MEMMGR));
  }

  return WRAP(pos, new (MEMMGR) XQFunctionConversion(WRAP(pos, new (MEMMGR) XQSequence(MEMMGR)), seqType, MEMMGR));
}

namespace XQParser {



/* Line 189 of yacc.c  */
#line 400 "../src/parser/XQParser.cpp"

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
     _LANG_XSLT2_ = 260,
     _LANG_FUNCDECL_ = 261,
     _LANG_DELAYEDMODULE_ = 262,
     _LANG_FUNCTION_SIGNATURE_ = 263,
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
     _PERCENT_ = 307,
     _INTEGER_LITERAL_ = 308,
     _DECIMAL_LITERAL_ = 309,
     _DOUBLE_LITERAL_ = 310,
     _ATTRIBUTE_ = 311,
     _COMMENT_ = 312,
     _DOCUMENT_NODE_ = 313,
     _NAMESPACE_NODE_ = 314,
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
     _TUPLE_ = 492,
     _MAP_ = 493,
     _NAME_ = 494,
     _CALL_ = 495,
     _APPLY_ = 496,
     _TEMPLATES_ = 497,
     _MODE_ = 498,
     _FTOR_ = 499,
     _FTAND_ = 500,
     _FTNOT_ = 501,
     _TYPE_ALIAS_ = 502,
     _XSLT_END_ELEMENT_ = 503,
     _XSLT_STYLESHEET_ = 504,
     _XSLT_TEMPLATE_ = 505,
     _XSLT_VALUE_OF_ = 506,
     _XSLT_TEXT_ = 507,
     _XSLT_APPLY_TEMPLATES_ = 508,
     _XSLT_CALL_TEMPLATE_ = 509,
     _XSLT_WITH_PARAM_ = 510,
     _XSLT_SEQUENCE_ = 511,
     _XSLT_PARAM_ = 512,
     _XSLT_FUNCTION_ = 513,
     _XSLT_CHOOSE_ = 514,
     _XSLT_WHEN_ = 515,
     _XSLT_OTHERWISE_ = 516,
     _XSLT_IF_ = 517,
     _XSLT_VARIABLE_ = 518,
     _XSLT_COMMENT_ = 519,
     _XSLT_PI_ = 520,
     _XSLT_DOCUMENT_ = 521,
     _XSLT_ATTRIBUTE_ = 522,
     _XSLT_NAMESPACE_ = 523,
     _XSLT_ELEMENT_ = 524,
     _XSLT_ANALYZE_STRING_ = 525,
     _XSLT_MATCHING_SUBSTRING_ = 526,
     _XSLT_NON_MATCHING_SUBSTRING_ = 527,
     _XSLT_COPY_OF_ = 528,
     _XSLT_COPY_ = 529,
     _XSLT_FOR_EACH_ = 530,
     _XSLT_OUTPUT_ = 531,
     _XSLT_IMPORT_SCHEMA_ = 532,
     _XSLT_TYPE_ALIAS_ = 533,
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
#define _LANG_XSLT2_ 260
#define _LANG_FUNCDECL_ 261
#define _LANG_DELAYEDMODULE_ 262
#define _LANG_FUNCTION_SIGNATURE_ 263
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
#define _PERCENT_ 307
#define _INTEGER_LITERAL_ 308
#define _DECIMAL_LITERAL_ 309
#define _DOUBLE_LITERAL_ 310
#define _ATTRIBUTE_ 311
#define _COMMENT_ 312
#define _DOCUMENT_NODE_ 313
#define _NAMESPACE_NODE_ 314
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
#define _TUPLE_ 492
#define _MAP_ 493
#define _NAME_ 494
#define _CALL_ 495
#define _APPLY_ 496
#define _TEMPLATES_ 497
#define _MODE_ 498
#define _FTOR_ 499
#define _FTAND_ 500
#define _FTNOT_ 501
#define _TYPE_ALIAS_ 502
#define _XSLT_END_ELEMENT_ 503
#define _XSLT_STYLESHEET_ 504
#define _XSLT_TEMPLATE_ 505
#define _XSLT_VALUE_OF_ 506
#define _XSLT_TEXT_ 507
#define _XSLT_APPLY_TEMPLATES_ 508
#define _XSLT_CALL_TEMPLATE_ 509
#define _XSLT_WITH_PARAM_ 510
#define _XSLT_SEQUENCE_ 511
#define _XSLT_PARAM_ 512
#define _XSLT_FUNCTION_ 513
#define _XSLT_CHOOSE_ 514
#define _XSLT_WHEN_ 515
#define _XSLT_OTHERWISE_ 516
#define _XSLT_IF_ 517
#define _XSLT_VARIABLE_ 518
#define _XSLT_COMMENT_ 519
#define _XSLT_PI_ 520
#define _XSLT_DOCUMENT_ 521
#define _XSLT_ATTRIBUTE_ 522
#define _XSLT_NAMESPACE_ 523
#define _XSLT_ELEMENT_ 524
#define _XSLT_ANALYZE_STRING_ 525
#define _XSLT_MATCHING_SUBSTRING_ 526
#define _XSLT_NON_MATCHING_SUBSTRING_ 527
#define _XSLT_COPY_OF_ 528
#define _XSLT_COPY_ 529
#define _XSLT_FOR_EACH_ 530
#define _XSLT_OUTPUT_ 531
#define _XSLT_IMPORT_SCHEMA_ 532
#define _XSLT_TYPE_ALIAS_ 533
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
#line 1104 "../src/parser/XQParser.cpp"

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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8089

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  325
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  360
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1013
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1669

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
       0,     0,     3,     7,    11,    15,    18,    21,    24,    25,
      26,    35,    36,    38,    42,    45,    52,    53,    56,    65,
      67,    72,    74,    75,    78,    81,    82,    85,    88,    91,
      94,    97,   100,   103,   108,   110,   114,   117,   121,   125,
     129,   130,   133,   136,   139,   141,   143,   145,   150,   152,
     155,   159,   162,   163,   166,   170,   172,   175,   179,   183,
     186,   189,   193,   195,   198,   202,   206,   209,   212,   216,
     218,   221,   225,   229,   232,   234,   237,   241,   244,   248,
     251,   254,   257,   260,   263,   266,   269,   272,   275,   278,
     281,   285,   288,   290,   292,   294,   296,   298,   300,   303,
     306,   308,   311,   315,   318,   320,   323,   326,   330,   334,
     339,   340,   344,   347,   348,   351,   354,   355,   358,   361,
     364,   366,   368,   370,   372,   374,   376,   378,   380,   382,
     384,   386,   388,   390,   392,   394,   396,   398,   400,   404,
     406,   410,   414,   418,   420,   422,   426,   428,   432,   436,
     438,   440,   442,   443,   446,   450,   452,   455,   456,   459,
     463,   465,   468,   472,   476,   479,   482,   486,   490,   494,
     499,   501,   504,   508,   512,   513,   517,   522,   524,   528,
     532,   536,   537,   541,   542,   546,   551,   553,   556,   560,
     564,   568,   570,   574,   578,   580,   584,   588,   592,   594,
     598,   600,   604,   608,   612,   616,   620,   622,   626,   630,
     634,   636,   640,   644,   647,   649,   653,   656,   660,   662,
     665,   668,   672,   674,   678,   682,   684,   686,   688,   690,
     692,   694,   699,   706,   708,   710,   712,   714,   716,   719,
     723,   727,   731,   735,   738,   740,   744,   748,   751,   752,
     757,   760,   763,   764,   768,   773,   777,   780,   783,   786,
     789,   796,   797,   801,   805,   809,   813,   817,   821,   825,
     829,   833,   837,   839,   841,   843,   845,   847,   849,   851,
     853,   855,   857,   859,   865,   869,   873,   879,   885,   890,
     894,   898,   902,   908,   914,   920,   922,   924,   926,   928,
     933,   937,   943,   948,   949,   952,   956,   960,   964,   972,
     977,   981,   985,   986,   989,   991,   993,   995,  1003,  1006,
    1008,  1016,  1019,  1023,  1024,  1027,  1029,  1031,  1034,  1040,
    1042,  1046,  1050,  1052,  1056,  1060,  1062,  1066,  1068,  1070,
    1072,  1074,  1076,  1078,  1080,  1082,  1084,  1086,  1088,  1090,
    1092,  1096,  1098,  1101,  1104,  1106,  1108,  1110,  1112,  1114,
    1117,  1121,  1123,  1131,  1132,  1136,  1137,  1141,  1144,  1148,
    1150,  1156,  1162,  1165,  1169,  1173,  1178,  1182,  1184,  1188,
    1194,  1196,  1197,  1199,  1201,  1202,  1205,  1208,  1213,  1218,
    1222,  1224,  1230,  1237,  1240,  1242,  1248,  1252,  1256,  1260,
    1264,  1265,  1269,  1278,  1282,  1284,  1288,  1290,  1294,  1298,
    1299,  1304,  1308,  1312,  1316,  1320,  1324,  1328,  1332,  1336,
    1340,  1344,  1348,  1352,  1354,  1359,  1365,  1367,  1371,  1373,
    1377,  1381,  1383,  1387,  1391,  1395,  1399,  1401,  1405,  1409,
    1411,  1415,  1419,  1421,  1426,  1428,  1433,  1435,  1440,  1442,
    1447,  1449,  1452,  1455,  1457,  1459,  1461,  1463,  1468,  1474,
    1480,  1484,  1489,  1491,  1494,  1499,  1501,  1504,  1506,  1509,
    1512,  1514,  1516,  1520,  1524,  1526,  1528,  1530,  1532,  1534,
    1536,  1541,  1543,  1548,  1551,  1553,  1556,  1559,  1562,  1565,
    1568,  1571,  1574,  1577,  1580,  1582,  1585,  1587,  1590,  1593,
    1596,  1599,  1602,  1604,  1606,  1608,  1610,  1612,  1614,  1616,
    1618,  1620,  1625,  1627,  1629,  1631,  1633,  1635,  1637,  1639,
    1641,  1643,  1645,  1647,  1649,  1651,  1653,  1655,  1658,  1660,
    1664,  1667,  1669,  1674,  1679,  1683,  1688,  1692,  1694,  1696,
    1698,  1700,  1702,  1704,  1706,  1708,  1714,  1725,  1727,  1729,
    1730,  1738,  1746,  1747,  1749,  1753,  1757,  1761,  1765,  1766,
    1769,  1772,  1773,  1776,  1779,  1780,  1783,  1786,  1787,  1790,
    1793,  1794,  1797,  1800,  1803,  1806,  1810,  1811,  1813,  1817,
    1819,  1822,  1824,  1826,  1828,  1830,  1832,  1834,  1836,  1841,
    1845,  1847,  1851,  1854,  1858,  1862,  1864,  1868,  1872,  1877,
    1882,  1886,  1888,  1892,  1895,  1899,  1902,  1903,  1905,  1906,
    1909,  1912,  1916,  1917,  1919,  1921,  1923,  1927,  1929,  1931,
    1933,  1935,  1937,  1939,  1941,  1943,  1945,  1947,  1949,  1951,
    1953,  1955,  1957,  1961,  1965,  1970,  1975,  1979,  1983,  1987,
    1991,  1996,  2001,  2005,  2010,  2017,  2019,  2021,  2026,  2028,
    2032,  2037,  2044,  2052,  2054,  2056,  2061,  2063,  2065,  2067,
    2069,  2071,  2075,  2076,  2079,  2080,  2083,  2087,  2089,  2093,
    2095,  2100,  2102,  2105,  2107,  2109,  2112,  2115,  2119,  2121,
    2124,  2129,  2133,  2138,  2139,  2141,  2144,  2146,  2149,  2151,
    2152,  2156,  2159,  2163,  2167,  2172,  2174,  2178,  2182,  2185,
    2188,  2191,  2194,  2197,  2199,  2201,  2203,  2205,  2207,  2210,
    2214,  2216,  2218,  2220,  2222,  2224,  2226,  2228,  2230,  2233,
    2236,  2238,  2240,  2243,  2246,  2248,  2251,  2254,  2257,  2263,
    2269,  2272,  2273,  2277,  2280,  2285,  2290,  2297,  2302,  2306,
    2311,  2312,  2315,  2318,  2322,  2324,  2328,  2331,  2334,  2337,
    2339,  2342,  2346,  2350,  2354,  2358,  2362,  2369,  2376,  2381,
    2386,  2391,  2394,  2397,  2400,  2403,  2406,  2414,  2420,  2426,
    2433,  2437,  2439,  2444,  2446,  2448,  2450,  2452,  2454,  2456,
    2462,  2470,  2479,  2490,  2497,  2506,  2507,  2510,  2513,  2517,
    2518,  2521,  2523,  2527,  2529,  2531,  2533,  2537,  2545,  2549,
    2557,  2563,  2573,  2575,  2577,  2579,  2581,  2585,  2591,  2593,
    2595,  2599,  2604,  2608,  2613,  2615,  2617,  2623,  2624,  2627,
    2634,  2642,  2644,  2648,  2652,  2654,  2656,  2661,  2665,  2667,
    2671,  2674,  2681,  2685,  2687,  2692,  2696,  2698,  2702,  2707,
    2709,  2713,  2719,  2721,  2723,  2725,  2727,  2729,  2731,  2733,
    2735,  2737,  2739,  2741,  2743,  2745,  2747,  2749,  2751,  2753,
    2755,  2757,  2759,  2761,  2763,  2765,  2767,  2769,  2771,  2773,
    2775,  2777,  2779,  2781,  2783,  2785,  2787,  2789,  2791,  2793,
    2795,  2797,  2799,  2801,  2803,  2805,  2807,  2809,  2811,  2813,
    2815,  2817,  2819,  2821,  2823,  2825,  2827,  2829,  2831,  2833,
    2835,  2837,  2839,  2841,  2843,  2845,  2847,  2849,  2851,  2853,
    2855,  2857,  2859,  2861,  2863,  2865,  2867,  2869,  2871,  2873,
    2875,  2877,  2879,  2881,  2883,  2885,  2887,  2889,  2891,  2893,
    2895,  2897,  2899,  2901,  2903,  2905,  2907,  2909,  2911,  2913,
    2915,  2917,  2919,  2921,  2923,  2925,  2927,  2929,  2931,  2933,
    2935,  2937,  2939,  2941,  2943,  2945,  2947,  2949,  2951,  2953,
    2955,  2957,  2959,  2961,  2963,  2965,  2967,  2969,  2971,  2973,
    2975,  2977,  2979,  2981,  2983,  2985,  2987,  2989,  2991,  2993,
    2995,  2997,  2999,  3001,  3003,  3005,  3007,  3009,  3011,  3013,
    3015,  3017,  3019,  3021,  3023,  3025,  3027,  3029,  3031,  3033,
    3035,  3037,  3039,  3041,  3043,  3045,  3047,  3049,  3051,  3053,
    3055,  3057,  3059,  3061
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     326,     0,    -1,     3,   327,   464,    -1,     4,   328,   422,
      -1,     6,   328,   329,    -1,     5,   336,    -1,     7,   332,
      -1,     8,   331,    -1,    -1,    -1,   181,   450,   193,   684,
     456,   457,   463,   330,    -1,    -1,   432,    -1,   450,   456,
     457,    -1,   333,   334,    -1,   191,   174,   651,    37,   602,
     432,    -1,    -1,   334,   335,    -1,   181,   450,   193,   684,
     456,   457,   463,   432,    -1,   337,    -1,   249,   338,   339,
     248,    -1,   361,    -1,    -1,   338,   279,    -1,   338,   288,
      -1,    -1,   339,   340,    -1,   339,   344,    -1,   339,   349,
      -1,   339,   351,    -1,   339,   353,    -1,   339,   359,    -1,
     339,   357,    -1,   341,   346,   364,   248,    -1,   250,    -1,
     341,   302,   412,    -1,   341,   281,    -1,   341,   305,   343,
      -1,   341,   280,   342,    -1,   341,   303,   580,    -1,    -1,
     342,   123,    -1,   342,   319,    -1,   342,   320,    -1,    53,
      -1,    54,    -1,    55,    -1,   345,   346,   364,   248,    -1,
     258,    -1,   345,   281,    -1,   345,   303,   580,    -1,   345,
     293,    -1,    -1,   346,   347,    -1,   348,   364,   248,    -1,
     257,    -1,   348,   281,    -1,   348,   304,   465,    -1,   348,
     303,   580,    -1,   348,   292,    -1,   348,   291,    -1,   350,
     364,   248,    -1,   257,    -1,   350,   281,    -1,   350,   304,
     465,    -1,   350,   303,   580,    -1,   350,   292,    -1,   350,
     291,    -1,   352,   364,   248,    -1,   263,    -1,   352,   281,
      -1,   352,   304,   465,    -1,   352,   303,   580,    -1,   354,
     248,    -1,   276,    -1,   354,   281,    -1,   354,   311,   355,
      -1,   354,   296,    -1,   354,   312,   356,    -1,   354,   282,
      -1,   354,   283,    -1,   354,   284,    -1,   354,   297,    -1,
     354,   298,    -1,   354,   299,    -1,   354,   285,    -1,   354,
     286,    -1,   354,   300,    -1,   354,   287,    -1,   354,   301,
      -1,   354,   313,   356,    -1,   354,   279,    -1,   322,    -1,
     323,    -1,   324,    -1,    64,    -1,   123,    -1,   123,    -1,
     356,   123,    -1,   358,   248,    -1,   278,    -1,   358,   281,
      -1,   358,   303,   582,    -1,   360,   248,    -1,   277,    -1,
     277,   289,    -1,   277,   290,    -1,   277,   289,   290,    -1,
     277,   290,   289,    -1,   314,   362,   364,   248,    -1,    -1,
     362,   316,   363,    -1,   362,   315,    -1,    -1,   363,   463,
      -1,   363,   116,    -1,    -1,   364,   369,    -1,   364,   361,
      -1,   364,   365,    -1,   366,    -1,   368,    -1,   370,    -1,
     374,    -1,   379,    -1,   383,    -1,   381,    -1,   392,    -1,
     394,    -1,   396,    -1,   398,    -1,   400,    -1,   402,    -1,
     404,    -1,   388,    -1,   406,    -1,   408,    -1,   410,    -1,
     367,   364,   248,    -1,   251,    -1,   367,   304,   465,    -1,
     367,   307,   363,    -1,   252,   369,   248,    -1,   317,    -1,
     318,    -1,   371,   373,   248,    -1,   253,    -1,   371,   304,
     465,    -1,   371,   280,   372,    -1,   123,    -1,   319,    -1,
     321,    -1,    -1,   373,   377,    -1,   375,   376,   248,    -1,
     254,    -1,   375,   281,    -1,    -1,   376,   377,    -1,   378,
     364,   248,    -1,   255,    -1,   378,   281,    -1,   378,   304,
     465,    -1,   378,   303,   580,    -1,   378,   291,    -1,   380,
     248,    -1,   256,   304,   465,    -1,   382,   364,   248,    -1,
     262,   306,   465,    -1,   259,   384,   387,   248,    -1,   385,
      -1,   384,   385,    -1,   386,   364,   248,    -1,   260,   306,
     465,    -1,    -1,   261,   364,   248,    -1,   389,   390,   391,
     248,    -1,   270,    -1,   389,   304,   465,    -1,   389,   309,
     363,    -1,   389,   310,   363,    -1,    -1,   271,   364,   248,
      -1,    -1,   272,   364,   248,    -1,   393,   364,   248,   364,
      -1,   263,    -1,   393,   281,    -1,   393,   304,   465,    -1,
     393,   303,   580,    -1,   395,   364,   248,    -1,   264,    -1,
     395,   304,   465,    -1,   397,   364,   248,    -1,   265,    -1,
     397,   281,   363,    -1,   397,   304,   465,    -1,   399,   364,
     248,    -1,   266,    -1,   401,   364,   248,    -1,   267,    -1,
     401,   281,   363,    -1,   401,   308,   363,    -1,   401,   304,
     465,    -1,   401,   307,   363,    -1,   403,   364,   248,    -1,
     268,    -1,   403,   281,   363,    -1,   403,   304,   465,    -1,
     405,   364,   248,    -1,   269,    -1,   405,   281,   363,    -1,
     405,   308,   363,    -1,   407,   248,    -1,   273,    -1,   407,
     304,   465,    -1,   407,   294,    -1,   409,   364,   248,    -1,
     274,    -1,   409,   294,    -1,   409,   295,    -1,   411,   364,
     248,    -1,   275,    -1,   411,   304,   465,    -1,   412,    12,
     413,    -1,   413,    -1,   418,    -1,    36,    -1,   415,    -1,
      36,    -1,    30,    -1,   233,    40,   416,    41,    -1,   234,
      40,   650,    33,   417,    41,    -1,   650,    -1,   538,    -1,
     536,    -1,   538,    -1,   419,    -1,   414,   419,    -1,   415,
      36,   419,    -1,   415,    30,   419,    -1,   418,    36,   419,
      -1,   418,    30,   419,    -1,   420,   421,    -1,   531,    -1,
      72,    19,   531,    -1,    56,    19,   531,    -1,    20,   531,
      -1,    -1,   421,    21,   465,    22,    -1,   423,   426,    -1,
     423,   427,    -1,    -1,   187,   424,   432,    -1,   187,   424,
     425,   432,    -1,   187,   425,   432,    -1,   188,   126,    -1,
     177,   126,    -1,   429,   464,    -1,   428,   429,    -1,   191,
     174,   651,    37,   602,   432,    -1,    -1,   429,   430,   432,
      -1,   429,   431,   432,    -1,   429,   433,   432,    -1,   429,
     435,   432,    -1,   429,   453,   432,    -1,   429,   455,   432,
      -1,   429,   653,   432,    -1,   429,   436,   432,    -1,   429,
     437,   432,    -1,   429,   682,   432,    -1,   434,    -1,   443,
      -1,   444,    -1,   449,    -1,   438,    -1,   439,    -1,   637,
      -1,   440,    -1,   445,    -1,   448,    -1,    50,    -1,   181,
     174,   651,    37,   602,    -1,   181,    66,   172,    -1,   181,
      66,   173,    -1,   181,   184,   192,   174,   602,    -1,   181,
     184,   193,   174,   602,    -1,   181,   186,   683,   126,    -1,
     181,    67,   620,    -1,   181,   183,   121,    -1,   181,   183,
     122,    -1,   181,   184,   139,   143,   144,    -1,   181,   184,
     139,   143,   145,    -1,   181,   185,   441,    33,   442,    -1,
     172,    -1,   178,    -1,   179,    -1,   180,    -1,   181,   184,
     146,   602,    -1,   181,    68,   602,    -1,   189,   190,   447,
     602,   446,    -1,   189,   190,   602,   446,    -1,    -1,   115,
     602,    -1,   446,    33,   602,    -1,   174,   651,    37,    -1,
     184,   192,   174,    -1,   189,   191,   174,   651,    37,   602,
     446,    -1,   189,   191,   602,   446,    -1,   181,   182,   172,
      -1,   181,   182,   173,    -1,    -1,   450,   451,    -1,   452,
      -1,   459,    -1,   232,    -1,   181,   450,   127,     9,   539,
     579,   454,    -1,    10,   466,    -1,   176,    -1,   181,   450,
     193,   684,   456,   457,   458,    -1,    40,    41,    -1,    40,
     461,    41,    -1,    -1,   153,   580,    -1,   463,    -1,   176,
      -1,    52,   683,    -1,    52,   683,    40,   460,    41,    -1,
     536,    -1,   460,    33,   536,    -1,   461,    33,   462,    -1,
     462,    -1,     9,   539,   579,    -1,    48,   465,    49,    -1,
     465,    -1,   465,    33,   466,    -1,   466,    -1,   467,    -1,
     487,    -1,   490,    -1,   496,    -1,   638,    -1,   640,    -1,
     643,    -1,   642,    -1,   644,    -1,   497,    -1,   659,    -1,
     660,    -1,   468,   132,   466,    -1,   469,    -1,   468,   481,
      -1,   468,   470,    -1,   471,    -1,   476,    -1,   469,    -1,
     479,    -1,   480,    -1,   133,   472,    -1,   472,    33,   473,
      -1,   473,    -1,     9,   539,   579,   474,   475,   134,   466,
      -1,    -1,   115,     9,   539,    -1,    -1,   195,     9,   539,
      -1,   135,   477,    -1,   477,    33,   478,    -1,   478,    -1,
       9,   539,   579,    10,   466,    -1,   195,     9,   539,    10,
     466,    -1,   136,   466,    -1,   137,     9,   539,    -1,   139,
     138,   482,    -1,   140,   139,   138,   482,    -1,   482,    33,
     483,    -1,   483,    -1,   484,   485,   486,    -1,   484,   485,
     486,   146,   602,    -1,   466,    -1,    -1,   141,    -1,   142,
      -1,    -1,   143,   144,    -1,   143,   145,    -1,   147,   488,
     149,   466,    -1,   148,   488,   149,   466,    -1,   488,    33,
     489,    -1,   489,    -1,     9,   539,   579,   134,   466,    -1,
     150,    40,   465,    41,   491,   492,    -1,   491,   493,    -1,
     493,    -1,   184,     9,   539,   132,   466,    -1,   184,   132,
     466,    -1,   494,   132,   466,    -1,   151,   495,   580,    -1,
     494,    12,   580,    -1,    -1,     9,   539,   153,    -1,   154,
      40,   465,    41,   155,   466,   156,   466,    -1,   497,   157,
     498,    -1,   498,    -1,   498,   158,   499,    -1,   499,    -1,
     501,    37,   501,    -1,   501,    13,   501,    -1,    -1,   501,
      24,   500,   501,    -1,   501,    14,   501,    -1,   501,    15,
     501,    -1,   501,    16,   501,    -1,   501,   109,   501,    -1,
     501,   110,   501,    -1,   501,   111,   501,    -1,   501,   112,
     501,    -1,   501,   113,   501,    -1,   501,   114,   501,    -1,
     501,   171,   501,    -1,   501,    17,   501,    -1,   501,    18,
     501,    -1,   501,    -1,   502,   196,    64,   603,    -1,   502,
     196,    64,   603,   636,    -1,   502,    -1,   503,   162,   503,
      -1,   503,    -1,   503,    34,   504,    -1,   503,    35,   504,
      -1,   504,    -1,   504,    11,   505,    -1,   504,   163,   505,
      -1,   504,    71,   505,    -1,   504,   164,   505,    -1,   505,
      -1,   505,    12,   506,    -1,   505,   165,   506,    -1,   506,
      -1,   506,   166,   507,    -1,   506,   167,   507,    -1,   507,
      -1,   508,   159,   160,   580,    -1,   508,    -1,   509,   170,
     153,   580,    -1,   509,    -1,   510,   161,   153,   577,    -1,
     510,    -1,   511,   169,   153,   577,    -1,   511,    -1,    35,
     511,    -1,    34,   511,    -1,   512,    -1,   513,    -1,   518,
      -1,   514,    -1,   168,    48,   465,    49,    -1,   168,    69,
      48,   465,    49,    -1,   168,    70,    48,   465,    49,    -1,
     515,    48,    49,    -1,   515,    48,   465,    49,    -1,   516,
      -1,   515,   516,    -1,    32,   552,   683,   517,    -1,   131,
      -1,   106,   131,    -1,   519,    -1,   519,   520,    -1,    30,
     520,    -1,   520,    -1,    36,    -1,   520,    36,   521,    -1,
     520,    30,   521,    -1,   521,    -1,   522,    -1,   534,    -1,
     523,    -1,   524,    -1,   525,    -1,   523,    21,   465,    22,
      -1,   528,    -1,   524,    21,   465,    22,    -1,   526,   531,
      -1,   527,    -1,    72,    19,    -1,    73,    19,    -1,    56,
      19,    -1,    74,    19,    -1,    75,    19,    -1,    76,    19,
      -1,    77,    19,    -1,   174,    19,    -1,    20,   531,    -1,
     531,    -1,   529,   531,    -1,   530,    -1,    78,    19,    -1,
      79,    19,    -1,    80,    19,    -1,    81,    19,    -1,    82,
      19,    -1,    39,    -1,   584,    -1,   532,    -1,   652,    -1,
     533,    -1,    11,    -1,   128,    -1,   129,    -1,   535,    -1,
     534,    21,   465,    22,    -1,   667,    -1,   536,    -1,   538,
      -1,   540,    -1,   541,    -1,   544,    -1,   547,    -1,   542,
      -1,   543,    -1,   664,    -1,   537,    -1,   650,    -1,   647,
      -1,   648,    -1,   649,    -1,     9,   539,    -1,   683,    -1,
      40,   465,    41,    -1,    40,    41,    -1,    38,    -1,   121,
      48,   465,    49,    -1,   122,    48,   465,    49,    -1,   684,
      40,    41,    -1,   684,    40,   545,    41,    -1,   545,    33,
     546,    -1,   546,    -1,   466,    -1,    23,    -1,   548,    -1,
     564,    -1,   549,    -1,   560,    -1,   562,    -1,    24,   550,
     551,   552,    42,    -1,    24,   550,   551,   552,    25,   559,
      31,   550,   552,    26,    -1,   123,    -1,   124,    -1,    -1,
     551,   106,   123,   552,    43,   552,   553,    -1,   551,   106,
     124,   552,    43,   552,   554,    -1,    -1,   106,    -1,    44,
     555,    45,    -1,    46,   557,    47,    -1,    44,   556,    45,
      -1,    46,   558,    47,    -1,    -1,   555,   463,    -1,   555,
     116,    -1,    -1,   556,   463,    -1,   556,   116,    -1,    -1,
     557,   463,    -1,   557,   117,    -1,    -1,   558,   463,    -1,
     558,   117,    -1,    -1,   559,   548,    -1,   559,   463,    -1,
     559,   119,    -1,   559,   118,    -1,    28,   561,    29,    -1,
      -1,   108,    -1,    27,   130,   563,    -1,   107,    -1,   106,
     107,    -1,   565,    -1,   566,    -1,   569,    -1,   571,    -1,
     572,    -1,   573,    -1,   574,    -1,    83,    48,   465,    49,
      -1,   192,   567,   568,    -1,   125,    -1,    48,   465,    49,
      -1,    48,    49,    -1,    48,   465,    49,    -1,    56,   570,
     568,    -1,   125,    -1,    48,   465,    49,    -1,   174,   575,
     568,    -1,    64,    48,   465,    49,    -1,    57,    48,   465,
      49,    -1,    61,   575,   576,    -1,   125,    -1,    48,   465,
      49,    -1,    48,    49,    -1,    48,   465,    49,    -1,   583,
     578,    -1,    -1,    23,    -1,    -1,   153,   580,    -1,   582,
     581,    -1,    65,    40,    41,    -1,    -1,    11,    -1,    34,
      -1,    23,    -1,   175,    40,    41,    -1,   583,    -1,   584,
      -1,   668,    -1,   673,    -1,   652,    -1,   586,    -1,   595,
      -1,   591,    -1,   597,    -1,   593,    -1,   590,    -1,   588,
      -1,   587,    -1,   589,    -1,   585,    -1,    60,    40,    41,
      -1,    58,    40,    41,    -1,    58,    40,   595,    41,    -1,
      58,    40,   597,    41,    -1,    64,    40,    41,    -1,    57,
      40,    41,    -1,    59,    40,    41,    -1,    61,    40,    41,
      -1,    61,    40,   651,    41,    -1,    61,    40,   126,    41,
      -1,    56,    40,    41,    -1,    56,    40,   592,    41,    -1,
      56,    40,   592,    33,   601,    41,    -1,   599,    -1,    11,
      -1,    62,    40,   594,    41,    -1,   599,    -1,   192,    40,
      41,    -1,   192,    40,   596,    41,    -1,   192,    40,   596,
      33,   601,    41,    -1,   192,    40,   596,    33,   601,    23,
      41,    -1,   600,    -1,    11,    -1,    63,    40,   598,    41,
      -1,   600,    -1,   652,    -1,   652,    -1,   652,    -1,   126,
      -1,   606,   605,   604,    -1,    -1,   197,   502,    -1,    -1,
     605,   617,    -1,   606,   244,   607,    -1,   607,    -1,   607,
     245,   608,    -1,   608,    -1,   608,    84,   134,   609,    -1,
     609,    -1,   246,   610,    -1,   610,    -1,   611,    -1,   611,
     620,    -1,   612,   615,    -1,    40,   603,    41,    -1,   613,
      -1,   536,   614,    -1,    48,   465,    49,   614,    -1,   515,
      48,    49,    -1,   515,    48,   603,    49,    -1,    -1,   209,
      -1,   209,    98,    -1,   210,    -1,   210,   214,    -1,   211,
      -1,    -1,   200,   616,   201,    -1,   212,   503,    -1,   120,
     145,   503,    -1,   120,   102,   503,    -1,   213,   503,   162,
     503,    -1,   121,    -1,   198,   503,   618,    -1,   199,   616,
     618,    -1,   202,   619,    -1,   203,   619,    -1,   115,   100,
      -1,   115,   101,    -1,    96,    97,    -1,   214,    -1,   215,
      -1,   216,    -1,   217,    -1,   218,    -1,    85,   621,    -1,
     620,    85,   621,    -1,   633,    -1,   634,    -1,   625,    -1,
     624,    -1,   622,    -1,   623,    -1,   628,    -1,   635,    -1,
     152,    88,    -1,   152,    87,    -1,   204,    -1,   205,    -1,
      89,    88,    -1,    89,    87,    -1,    92,    -1,    86,    92,
      -1,    93,   627,    -1,    93,   184,    -1,    93,    40,   627,
     626,    41,    -1,    93,    40,   184,   626,    41,    -1,    86,
      93,    -1,    -1,   626,    33,   627,    -1,   115,   602,    -1,
     115,   602,   206,   650,    -1,   115,   602,   616,   207,    -1,
     115,   602,   206,   650,   616,   207,    -1,    94,   214,   630,
     629,    -1,    86,    94,   214,    -1,    94,   214,   184,   629,
      -1,    -1,   629,   632,    -1,   115,   602,    -1,    40,   631,
      41,    -1,   650,    -1,   631,    33,   650,    -1,   165,   630,
      -1,   167,   630,    -1,   208,   650,    -1,    95,    -1,    86,
      95,    -1,   186,   683,   126,    -1,    91,    97,   505,    -1,
     181,   225,    70,    -1,   181,   225,    69,    -1,   181,   225,
     103,    -1,   639,   466,   153,   221,   231,   466,    -1,   639,
     466,   153,   229,   231,   466,    -1,   639,   466,   231,   466,
      -1,   639,   466,   224,   466,    -1,   639,   466,   223,   466,
      -1,   222,    60,    -1,   222,   227,    -1,   641,   466,    -1,
     230,    60,    -1,   230,   227,    -1,   219,   105,   160,    60,
     466,   226,   466,    -1,   219,    60,   466,   226,   466,    -1,
     228,    60,   466,   153,   466,    -1,   104,   645,   220,   466,
     132,   466,    -1,   645,    33,   646,    -1,   646,    -1,     9,
     539,    10,   466,    -1,    53,    -1,    54,    -1,    55,    -1,
     126,    -1,   683,    -1,   683,    -1,   181,   235,   239,   683,
     463,    -1,   181,   235,   239,   683,   655,   654,   463,    -1,
     181,   235,   239,   683,   656,   236,   412,   463,    -1,   181,
     235,   239,   683,   656,   236,   412,   655,   654,   463,    -1,
     181,   235,   656,   236,   412,   463,    -1,   181,   235,   656,
     236,   412,   655,   654,   463,    -1,    -1,   153,   580,    -1,
      40,    41,    -1,    40,   461,    41,    -1,    -1,   243,   657,
      -1,   658,    -1,   657,    33,   658,    -1,   123,    -1,   319,
      -1,   320,    -1,   240,   235,   683,    -1,   240,   235,   683,
     226,    40,   662,    41,    -1,   241,   242,   466,    -1,   241,
     242,   466,   226,    40,   662,    41,    -1,   241,   242,   466,
     243,   661,    -1,   241,   242,   466,   243,   661,   226,    40,
     662,    41,    -1,   683,    -1,   319,    -1,   321,    -1,   663,
      -1,   662,    33,   663,    -1,     9,   539,   579,    10,   466,
      -1,   665,    -1,   666,    -1,   684,    51,    53,    -1,   194,
     456,   579,   463,    -1,   534,    40,    41,    -1,   534,    40,
     545,    41,    -1,   669,    -1,   671,    -1,   670,   194,    40,
      11,    41,    -1,    -1,   670,   459,    -1,   670,   194,    40,
      41,   153,   580,    -1,   670,   194,    40,   672,    41,   153,
     580,    -1,   580,    -1,   672,    33,   580,    -1,    40,   582,
      41,    -1,   674,    -1,   677,    -1,   237,    40,   675,    41,
      -1,   237,    40,    41,    -1,   676,    -1,   675,    33,   676,
      -1,   683,   579,    -1,   238,    40,   583,    33,   580,    41,
      -1,   238,    40,    41,    -1,   678,    -1,   237,    48,   679,
      49,    -1,   237,    48,    49,    -1,   680,    -1,   679,    33,
     680,    -1,   683,   579,    10,   466,    -1,   681,    -1,   534,
      20,   683,    -1,   181,   247,   683,   153,   582,    -1,   684,
      -1,    56,    -1,    57,    -1,    58,    -1,   192,    -1,   175,
      -1,   154,    -1,    60,    -1,    61,    -1,    62,    -1,    63,
      -1,    64,    -1,   150,    -1,    65,    -1,    59,    -1,   123,
      -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,    70,
      -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,    75,
      -1,    76,    -1,    77,    -1,    78,    -1,    79,    -1,    80,
      -1,    81,    -1,    82,    -1,    83,    -1,    84,    -1,    87,
      -1,    88,    -1,    89,    -1,    90,    -1,    92,    -1,    93,
      -1,    94,    -1,    95,    -1,    96,    -1,    97,    -1,    98,
      -1,    99,    -1,   100,    -1,   101,    -1,   102,    -1,   103,
      -1,   104,    -1,   105,    -1,   109,    -1,   110,    -1,   111,
      -1,   112,    -1,   113,    -1,   114,    -1,   115,    -1,   127,
      -1,   132,    -1,   133,    -1,   134,    -1,   135,    -1,   136,
      -1,   138,    -1,   139,    -1,   140,    -1,   141,    -1,   142,
      -1,   143,    -1,   144,    -1,   145,    -1,   146,    -1,   147,
      -1,   148,    -1,   149,    -1,   151,    -1,   153,    -1,   155,
      -1,   156,    -1,   157,    -1,   158,    -1,   159,    -1,   160,
      -1,   161,    -1,   162,    -1,   163,    -1,   164,    -1,   165,
      -1,   166,    -1,   167,    -1,   168,    -1,   169,    -1,   170,
      -1,   171,    -1,   172,    -1,   173,    -1,   174,    -1,   176,
      -1,   177,    -1,   178,    -1,   179,    -1,   180,    -1,   181,
      -1,   182,    -1,   183,    -1,   184,    -1,   185,    -1,   186,
      -1,   188,    -1,   189,    -1,   190,    -1,   193,    -1,   195,
      -1,    85,    -1,    86,    -1,   196,    -1,   197,    -1,   198,
      -1,   199,    -1,   200,    -1,   201,    -1,   202,    -1,   203,
      -1,   204,    -1,   205,    -1,   206,    -1,   207,    -1,   208,
      -1,   209,    -1,   210,    -1,   211,    -1,   212,    -1,   213,
      -1,   214,    -1,   215,    -1,   216,    -1,   217,    -1,   218,
      -1,   219,    -1,   220,    -1,   221,    -1,   222,    -1,   223,
      -1,   224,    -1,   225,    -1,   226,    -1,   227,    -1,   228,
      -1,   229,    -1,   230,    -1,   231,    -1,   232,    -1,   121,
      -1,   122,    -1,   233,    -1,   234,    -1,   235,    -1,   236,
      -1,   239,    -1,   240,    -1,   241,    -1,   242,    -1,   243,
      -1,   244,    -1,   245,    -1,   246,    -1,   237,    -1,   247,
      -1,   238,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   767,   767,   769,   770,   772,   774,   775,   780,   786,
     796,   804,   804,   807,   816,   827,   865,   868,   874,   913,
     942,   945,   967,   969,   973,   980,   982,   983,   984,   985,
     986,   987,   988,   992,  1011,  1016,  1021,  1028,  1033,  1038,
    1047,  1050,  1056,  1061,  1068,  1068,  1068,  1071,  1084,  1089,
    1096,  1101,  1110,  1113,  1121,  1148,  1152,  1159,  1165,  1170,
    1175,  1184,  1208,  1212,  1219,  1224,  1229,  1234,  1245,  1263,
    1267,  1274,  1279,  1287,  1312,  1315,  1318,  1321,  1324,  1327,
    1330,  1333,  1336,  1339,  1342,  1345,  1348,  1351,  1354,  1357,
    1360,  1363,  1369,  1370,  1371,  1372,  1373,  1385,  1388,  1394,
    1408,  1412,  1419,  1426,  1429,  1434,  1439,  1447,  1455,  1466,
    1477,  1480,  1487,  1497,  1500,  1505,  1514,  1517,  1522,  1527,
    1535,  1536,  1537,  1538,  1539,  1540,  1541,  1542,  1543,  1544,
    1545,  1546,  1547,  1548,  1549,  1550,  1551,  1552,  1556,  1574,
    1578,  1583,  1592,  1598,  1598,  1601,  1621,  1625,  1630,  1638,
    1643,  1647,  1655,  1658,  1666,  1679,  1683,  1694,  1697,  1705,
    1723,  1727,  1734,  1739,  1744,  1752,  1758,  1766,  1774,  1781,
    1795,  1799,  1813,  1822,  1830,  1833,  1840,  1875,  1879,  1884,
    1890,  1900,  1903,  1911,  1914,  1921,  1939,  1943,  1950,  1955,
    1963,  1981,  1985,  1993,  2015,  2019,  2026,  2034,  2043,  2051,
    2089,  2093,  2100,  2107,  2116,  2125,  2152,  2156,  2163,  2175,
    2202,  2206,  2213,  2223,  2235,  2239,  2244,  2253,  2266,  2270,
    2275,  2284,  2298,  2302,  2315,  2320,  2332,  2336,  2344,  2357,
    2365,  2378,  2385,  2399,  2399,  2402,  2402,  2424,  2428,  2432,
    2450,  2468,  2478,  2492,  2500,  2506,  2512,  2518,  2530,  2533,
    2547,  2548,  2553,  2555,  2556,  2557,  2561,  2581,  2598,  2601,
    2605,  2617,  2619,  2623,  2627,  2631,  2635,  2639,  2645,  2651,
    2655,  2659,  2673,  2674,  2675,  2676,  2677,  2678,  2679,  2680,
    2684,  2684,  2687,  2691,  2699,  2704,  2713,  2718,  2727,  2798,
    2806,  2811,  2820,  2825,  2834,  2844,  2848,  2856,  2860,  2868,
    2884,  2893,  2905,  2914,  2917,  2922,  2931,  2935,  2943,  2953,
    2965,  2970,  2980,  2983,  2990,  2990,  2994,  3006,  3013,  3017,
    3025,  3034,  3038,  3046,  3049,  3057,  3058,  3066,  3073,  3080,
    3085,  3094,  3099,  3109,  3117,  3125,  3138,  3153,  3160,  3161,
    3162,  3163,  3164,  3165,  3166,  3167,  3168,  3169,  3170,  3171,
    3176,  3220,  3221,  3234,  3241,  3241,  3244,  3244,  3244,  3249,
    3256,  3260,  3264,  3276,  3279,  3290,  3293,  3303,  3310,  3314,
    3318,  3322,  3331,  3339,  3347,  3352,  3360,  3364,  3370,  3377,
    3392,  3407,  3410,  3414,  3422,  3430,  3434,  3443,  3451,  3462,
    3466,  3470,  3481,  3488,  3497,  3501,  3505,  3513,  3531,  3536,
    3546,  3549,  3557,  3565,  3574,  3579,  3588,  3598,  3602,  3606,
    3606,  3610,  3614,  3618,  3622,  3626,  3630,  3634,  3638,  3642,
    3646,  3650,  3654,  3658,  3663,  3667,  3671,  3676,  3683,  3688,
    3692,  3696,  3701,  3705,  3709,  3713,  3717,  3722,  3726,  3730,
    3735,  3739,  3743,  3748,  3765,  3770,  3775,  3780,  3784,  3789,
    3793,  3798,  3804,  3810,  3815,  3816,  3817,  3825,  3829,  3833,
    3841,  3848,  3857,  3857,  3861,  3881,  3882,  3890,  3891,  3897,
    3918,  3922,  3936,  3942,  3955,  3959,  3959,  3963,  3964,  3973,
    3974,  3980,  3981,  3990,  4002,  4013,  4017,  4021,  4025,  4029,
    4033,  4037,  4041,  4049,  4057,  4074,  4082,  4091,  4095,  4099,
    4103,  4107,  4115,  4127,  4132,  4137,  4144,  4149,  4156,  4163,
    4175,  4176,  4180,  4186,  4187,  4188,  4189,  4190,  4191,  4192,
    4193,  4194,  4198,  4198,  4201,  4201,  4201,  4205,  4212,  4216,
    4220,  4228,  4236,  4246,  4256,  4260,  4283,  4288,  4298,  4299,
    4308,  4312,  4321,  4321,  4321,  4325,  4331,  4340,  4340,  4345,
    4348,  4357,  4368,  4368,  4373,  4377,  4384,  4388,  4399,  4402,
    4407,  4416,  4419,  4423,  4435,  4438,  4443,  4452,  4455,  4459,
    4475,  4478,  4483,  4488,  4493,  4504,  4514,  4517,  4522,  4532,
    4533,  4547,  4548,  4549,  4550,  4551,  4552,  4553,  4558,  4566,
    4574,  4578,  4586,  4590,  4599,  4606,  4610,  4620,  4628,  4636,
    4644,  4651,  4659,  4666,  4670,  4678,  4686,  4689,  4698,  4701,
    4711,  4715,  4725,  4726,  4728,  4730,  4736,  4740,  4741,  4742,
    4743,  4748,  4764,  4765,  4766,  4767,  4768,  4769,  4770,  4771,
    4772,  4773,  4778,  4786,  4790,  4797,  4808,  4816,  4824,  4833,
    4837,  4841,  4849,  4853,  4857,  4865,  4866,  4874,  4882,  4887,
    4891,  4895,  4899,  4908,  4909,  4917,  4924,  4927,  4930,  4933,
    4937,  4949,  4965,  4967,  4974,  4977,  4986,  4998,  5003,  5015,
    5020,  5024,  5029,  5034,  5039,  5040,  5049,  5054,  5058,  5064,
    5068,  5076,  5081,  5091,  5094,  5098,  5102,  5106,  5110,  5118,
    5120,  5131,  5137,  5143,  5149,  5164,  5168,  5172,  5176,  5180,
    5184,  5188,  5192,  5200,  5204,  5208,  5216,  5220,  5228,  5229,
    5241,  5242,  5243,  5244,  5245,  5246,  5247,  5248,  5256,  5260,
    5264,  5268,  5277,  5281,  5289,  5293,  5303,  5307,  5311,  5315,
    5319,  5327,  5329,  5336,  5340,  5344,  5348,  5358,  5362,  5366,
    5374,  5376,  5384,  5388,  5395,  5399,  5407,  5411,  5419,  5427,
    5431,  5439,  5446,  5454,  5459,  5464,  5476,  5480,  5484,  5488,
    5492,  5498,  5498,  5503,  5509,  5509,  5514,  5518,  5528,  5536,
    5543,  5548,  5556,  5565,  5573,  5581,  5590,  5597,  5606,  5618,
    5623,  5628,  5634,  5640,  5646,  5656,  5659,  5667,  5671,  5679,
    5683,  5691,  5696,  5705,  5709,  5713,  5721,  5725,  5733,  5737,
    5741,  5745,  5753,  5757,  5761,  5769,  5774,  5784,  5797,  5797,
    5801,  5809,  5820,  5825,  5849,  5849,  5853,  5859,  5861,  5865,
    5869,  5876,  5881,  5890,  5899,  5899,  5903,  5907,  5914,  5920,
    5930,  5938,  5943,  5949,  5953,  5961,  5968,  5969,  5977,  5984,
    5987,  5995,  6004,  6004,  6004,  6004,  6004,  6004,  6004,  6004,
    6005,  6005,  6005,  6005,  6005,  6005,  6006,  6010,  6010,  6010,
    6010,  6010,  6010,  6010,  6010,  6010,  6010,  6011,  6011,  6011,
    6011,  6011,  6011,  6011,  6012,  6012,  6012,  6012,  6012,  6012,
    6012,  6012,  6013,  6013,  6013,  6013,  6013,  6013,  6013,  6013,
    6013,  6013,  6013,  6014,  6014,  6014,  6014,  6014,  6014,  6014,
    6014,  6014,  6014,  6014,  6014,  6015,  6015,  6015,  6015,  6015,
    6015,  6015,  6015,  6015,  6015,  6016,  6016,  6016,  6016,  6016,
    6016,  6016,  6016,  6016,  6016,  6016,  6016,  6017,  6017,  6017,
    6017,  6017,  6017,  6017,  6017,  6017,  6017,  6017,  6017,  6018,
    6018,  6018,  6018,  6018,  6018,  6018,  6018,  6018,  6019,  6019,
    6019,  6019,  6019,  6019,  6019,  6019,  6020,  6020,  6020,  6020,
    6020,  6020,  6020,  6020,  6020,  6020,  6020,  6021,  6021,  6021,
    6021,  6021,  6021,  6021,  6021,  6021,  6022,  6022,  6022,  6022,
    6022,  6022,  6022,  6022,  6022,  6022,  6023,  6023,  6023,  6023,
    6023,  6023,  6023,  6023,  6023,  6023,  6023,  6024,  6024,  6024,
    6024,  6024,  6024,  6024,  6024,  6024,  6024,  6024,  6025,  6025,
    6025,  6025,  6025,  6025
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"<end of file>\"", "error", "$undefined", "\"<Language: XPath2>\"",
  "\"<Language: XQuery>\"", "\"<Language: XSLT 2.0>\"",
  "\"<Language: Function Declaration>\"", "\"<Language: Delayed Module>\"",
  "\"<Language: Function Signature>\"", "\"$\"", "\":=\"", "\"*\"",
  "\"|\"", "\"!=\"", "\"<=\"", "\"> (comparison operator)\"", "\">=\"",
  "\"<<\"", "\">>\"", "\"::\"", "\"@\"", "\"[\"", "\"]\"", "\"?\"",
  "\"<\"", "\"> (start tag close)\"", "\"> (end tag close)\"", "\"<?\"",
  "\"<!--\"", "\"-->\"", "\"//\"", "\"</\"", "\"(#\"", "\",\"", "\"+\"",
  "\"-\"", "\"/\"", "\"= (comparison operator)\"", "\".\"", "\"..\"",
  "\"(\"", "\")\"", "\"/>\"", "\"=\"", "\"\\\" (open)\"",
  "\"\\\" (close)\"", "\"' (open)\"", "\"' (close)\"", "\"{\"", "\"}\"",
  "\";\"", "\"#\"", "\"%\"", "\"<integer literal>\"",
  "\"<decimal literal>\"", "\"<double literal>\"", "\"attribute\"",
  "\"comment\"", "\"document-node\"", "\"namespace-node\"", "\"node\"",
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
  "\"<computed constructor qualified name>\"", "\"<string literal>\"",
  "\"variable\"", "\"<NCName>:*\"", "\"*:<NCName>\"",
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
  "\"function\"", "\"function (XQuery 1.1)\"", "\"score\"", "\"contains\"",
  "\"weight\"", "\"window\"", "\"distance\"", "\"occurs\"", "\"times\"",
  "\"same\"", "\"different\"", "\"lowercase\"", "\"uppercase\"",
  "\"relationship\"", "\"levels\"", "\"language\"", "\"any\"", "\"all\"",
  "\"phrase\"", "\"exactly\"", "\"from\"", "\"words\"", "\"sentences\"",
  "\"paragraphs\"", "\"sentence\"", "\"paragraph\"", "\"replace\"",
  "\"modify\"", "\"first\"", "\"insert\"", "\"before\"", "\"after\"",
  "\"revalidation\"", "\"with\"", "\"nodes\"", "\"rename\"", "\"last\"",
  "\"delete\"", "\"into\"", "\"updating\"", "\"id\"", "\"key\"",
  "\"template\"", "\"matches\"", "\"tuple\"", "\"map\"", "\"name\"",
  "\"call\"", "\"apply\"", "\"templates\"", "\"mode\"", "\"ftor\"",
  "\"ftand\"", "\"ftnot\"", "\"type-alias\"", "\"<XSLT end element>\"",
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
  "\"<xsl:import-schema...\"", "\"<xsl:type-alias...\"",
  "\"version='...'\"", "\"mode='...'\"", "\"name='...'\"",
  "\"doctype-public='...'\"", "\"doctype-system='...'\"",
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
  "SelectLanguage", "XPath2Namespaces", "XQueryNamespaces",
  "Start_FunctionDecl", "FunctionDecl_MaybeSemicolon",
  "Start_FunctionSignature", "Start_DelayedModule", "DM_ModuleDecl",
  "DM_Prolog", "DM_FunctionDecl", "Start_XSLT", "Stylesheet_XSLT",
  "StylesheetAttrs_XSLT", "StylesheetContent_XSLT", "Template_XSLT",
  "TemplateAttrs_XSLT", "TemplateModes_XSLT", "Number_XSLT",
  "Function_XSLT", "FunctionAttrs_XSLT", "ParamList_XSLT", "Param_XSLT",
  "ParamAttrs_XSLT", "GlobalParam_XSLT", "GlobalParamAttrs_XSLT",
  "GlobalVariable_XSLT", "GlobalVariableAttrs_XSLT", "Output_XSLT",
  "OutputAttrs_XSLT", "OutputMethod_XSLT", "QNames_XSLT", "TypeAlias_XSLT",
  "TypeAliasAttrs_XSLT", "ImportSchema_XSLT", "ImportSchemaAttrs_XSLT",
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
  "PatternStepPredicateList_XSLT", "Module", "VersionDecl", "Version",
  "Encoding", "MainModule", "LibraryModule", "ModuleDecl", "Prolog",
  "Setter", "Import", "Separator", "NamespaceDecl", "BoundarySpaceDecl",
  "DefaultNamespaceDecl", "OptionDecl", "FTOptionDecl", "OrderingModeDecl",
  "EmptyOrderDecl", "CopyNamespacesDecl", "PreserveMode", "InheritMode",
  "DefaultCollationDecl", "BaseURIDecl", "SchemaImport",
  "ResourceLocations", "SchemaPrefix", "ModuleImport", "ConstructionDecl",
  "AnnotatedDeclAnnotations", "AnnotatedDeclAnnotation",
  "CompatibilityAnnotation", "VarDecl", "VarDeclValue", "FunctionDecl",
  "FunctionParamList", "FunctionDeclReturnType", "FunctionBody",
  "Annotation", "AnnotationArgs", "ParamList", "Param", "EnclosedExpr",
  "QueryBody", "Expr", "ExprSingle", "FLWORExpr", "FLWORTuples",
  "InitialClause", "IntermediateClause", "ForClause", "ForBindingList",
  "ForBinding", "PositionalVar", "FTScoreVar", "LetClause",
  "LetBindingList", "LetBinding", "WhereClause", "CountClause",
  "OrderByClause", "OrderSpecList", "OrderSpec", "OrderExpr",
  "OrderDirection", "EmptyHandling", "QuantifiedExpr",
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
  "FunctionTest", "AnyFunctionTest", "Annotations", "TypedFunctionTest",
  "FunctionTypeArguments", "ParenthesizedItemType", "TupleTest",
  "TupleTestEntryList", "TupleTestEntry", "MapTest", "TupleConstructor",
  "TupleEntryList", "TupleEntry", "TupleMemberExpr", "TypeAlias",
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
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   325,   326,   326,   326,   326,   326,   326,   327,   328,
     329,   330,   330,   331,   332,   333,   334,   334,   335,   336,
     337,   337,   338,   338,   338,   339,   339,   339,   339,   339,
     339,   339,   339,   340,   341,   341,   341,   341,   341,   341,
     342,   342,   342,   342,   343,   343,   343,   344,   345,   345,
     345,   345,   346,   346,   347,   348,   348,   348,   348,   348,
     348,   349,   350,   350,   350,   350,   350,   350,   351,   352,
     352,   352,   352,   353,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   355,   355,   355,   355,   355,   356,   356,   357,
     358,   358,   358,   359,   360,   360,   360,   360,   360,   361,
     362,   362,   362,   363,   363,   363,   364,   364,   364,   364,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   366,   367,
     367,   367,   368,   369,   369,   370,   371,   371,   371,   372,
     372,   372,   373,   373,   374,   375,   375,   376,   376,   377,
     378,   378,   378,   378,   378,   379,   380,   381,   382,   383,
     384,   384,   385,   386,   387,   387,   388,   389,   389,   389,
     389,   390,   390,   391,   391,   392,   393,   393,   393,   393,
     394,   395,   395,   396,   397,   397,   397,   398,   399,   400,
     401,   401,   401,   401,   401,   402,   403,   403,   403,   404,
     405,   405,   405,   406,   407,   407,   407,   408,   409,   409,
     409,   410,   411,   411,   412,   412,   413,   413,   413,   414,
     414,   415,   415,   416,   416,   417,   417,   418,   418,   418,
     418,   418,   418,   419,   420,   420,   420,   420,   421,   421,
     422,   422,   423,   423,   423,   423,   424,   425,   426,   427,
     428,   429,   429,   429,   429,   429,   429,   429,   429,   429,
     429,   429,   430,   430,   430,   430,   430,   430,   430,   430,
     431,   431,   432,   433,   434,   434,   435,   435,   436,   437,
     438,   438,   439,   439,   440,   441,   441,   442,   442,   443,
     444,   445,   445,   446,   446,   446,   447,   447,   448,   448,
     449,   449,   450,   450,   451,   451,   452,   453,   454,   454,
     455,   456,   456,   457,   457,   458,   458,   459,   459,   460,
     460,   461,   461,   462,   463,   464,   465,   465,   466,   466,
     466,   466,   466,   466,   466,   466,   466,   466,   466,   466,
     467,   468,   468,   468,   469,   469,   470,   470,   470,   471,
     472,   472,   473,   474,   474,   475,   475,   476,   477,   477,
     478,   478,   479,   480,   481,   481,   482,   482,   483,   483,
     484,   485,   485,   485,   486,   486,   486,   487,   487,   488,
     488,   489,   490,   491,   491,   492,   492,   493,   494,   494,
     495,   495,   496,   497,   497,   498,   498,   499,   499,   500,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   501,   501,   501,   502,   502,   503,
     503,   503,   504,   504,   504,   504,   504,   505,   505,   505,
     506,   506,   506,   507,   507,   508,   508,   509,   509,   510,
     510,   511,   511,   511,   512,   512,   512,   513,   513,   513,
     514,   514,   515,   515,   516,   517,   517,   518,   518,   518,
     518,   519,   520,   520,   520,   521,   521,   522,   522,   523,
     523,   524,   524,   525,   525,   526,   526,   526,   526,   526,
     526,   526,   526,   527,   527,   528,   528,   529,   529,   529,
     529,   529,   530,   531,   531,   532,   532,   533,   533,   533,
     534,   534,   534,   535,   535,   535,   535,   535,   535,   535,
     535,   535,   536,   536,   537,   537,   537,   538,   539,   540,
     540,   541,   542,   543,   544,   544,   545,   545,   546,   546,
     547,   547,   548,   548,   548,   549,   549,   550,   550,   551,
     551,   551,   552,   552,   553,   553,   554,   554,   555,   555,
     555,   556,   556,   556,   557,   557,   557,   558,   558,   558,
     559,   559,   559,   559,   559,   560,   561,   561,   562,   563,
     563,   564,   564,   564,   564,   564,   564,   564,   565,   566,
     567,   567,   568,   568,   569,   570,   570,   571,   572,   573,
     574,   575,   575,   576,   576,   577,   578,   578,   579,   579,
     580,   580,   581,   581,   581,   581,   582,   582,   582,   582,
     582,   583,   584,   584,   584,   584,   584,   584,   584,   584,
     584,   584,   585,   586,   586,   586,   587,   588,   589,   590,
     590,   590,   591,   591,   591,   592,   592,   593,   594,   595,
     595,   595,   595,   596,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   604,   605,   605,   606,   606,   607,   607,
     608,   608,   609,   609,   610,   610,   611,   611,   611,   612,
     612,   613,   613,   614,   614,   614,   614,   614,   614,   615,
     615,   616,   616,   616,   616,   617,   617,   617,   617,   617,
     617,   617,   617,   618,   618,   618,   619,   619,   620,   620,
     621,   621,   621,   621,   621,   621,   621,   621,   622,   622,
     622,   622,   623,   623,   624,   624,   625,   625,   625,   625,
     625,   626,   626,   627,   627,   627,   627,   628,   628,   628,
     629,   629,   630,   630,   631,   631,   632,   632,   633,   634,
     634,   635,   636,   637,   637,   637,   638,   638,   638,   638,
     638,   639,   639,   640,   641,   641,   642,   642,   643,   644,
     645,   645,   646,   647,   648,   649,   650,   651,   652,   653,
     653,   653,   653,   653,   653,   654,   654,   655,   655,   656,
     656,   657,   657,   658,   658,   658,   659,   659,   660,   660,
     660,   660,   661,   661,   661,   662,   662,   663,   664,   664,
     665,   666,   667,   667,   668,   668,   669,   670,   670,   671,
     671,   672,   672,   673,   582,   582,   674,   674,   675,   675,
     676,   677,   677,   535,   678,   678,   679,   679,   680,   534,
     681,   682,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   684,   684,   684,
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
     684,   684,   684,   684
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     3,     2,     2,     2,     0,     0,
       8,     0,     1,     3,     2,     6,     0,     2,     8,     1,
       4,     1,     0,     2,     2,     0,     2,     2,     2,     2,
       2,     2,     2,     4,     1,     3,     2,     3,     3,     3,
       0,     2,     2,     2,     1,     1,     1,     4,     1,     2,
       3,     2,     0,     2,     3,     1,     2,     3,     3,     2,
       2,     3,     1,     2,     3,     3,     2,     2,     3,     1,
       2,     3,     3,     2,     1,     2,     3,     2,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     2,     3,     2,     1,     2,     2,     3,     3,     4,
       0,     3,     2,     0,     2,     2,     0,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     3,     3,     1,     1,     3,     1,     3,     3,     1,
       1,     1,     0,     2,     3,     1,     2,     0,     2,     3,
       1,     2,     3,     3,     2,     2,     3,     3,     3,     4,
       1,     2,     3,     3,     0,     3,     4,     1,     3,     3,
       3,     0,     3,     0,     3,     4,     1,     2,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     3,
       1,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       1,     3,     3,     2,     1,     3,     2,     3,     1,     2,
       2,     3,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     4,     6,     1,     1,     1,     1,     1,     2,     3,
       3,     3,     3,     2,     1,     3,     3,     2,     0,     4,
       2,     2,     0,     3,     4,     3,     2,     2,     2,     2,
       6,     0,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     3,     3,     5,     5,     4,     3,
       3,     3,     5,     5,     5,     1,     1,     1,     1,     4,
       3,     5,     4,     0,     2,     3,     3,     3,     7,     4,
       3,     3,     0,     2,     1,     1,     1,     7,     2,     1,
       7,     2,     3,     0,     2,     1,     1,     2,     5,     1,
       3,     3,     1,     3,     3,     1,     3,     1,     1,     1,
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
       2,     3,     0,     1,     1,     1,     3,     1,     1,     1,
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
       3,     4,     3,     4,     1,     1,     5,     0,     2,     6,
       7,     1,     3,     3,     1,     1,     4,     3,     1,     3,
       2,     6,     3,     1,     4,     3,     1,     3,     4,     1,
       3,     5,     1,     1,     1,     1,     1,     1,     1,     1,
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
       0,     8,     9,     0,     9,     0,   312,     0,     0,   252,
      22,   110,     5,    19,    21,     0,     0,     6,    16,     7,
       0,     1,     0,   507,     0,     0,     0,   576,     0,   552,
       0,     0,   471,   531,   502,     0,   773,   774,   775,   843,
     844,   845,   856,   849,   850,   851,   852,   853,   855,   858,
     859,   860,   861,   862,   863,   864,   865,   866,   867,   868,
     869,   870,   871,   872,   873,   874,   875,   876,   958,   959,
     877,   878,   879,   880,   881,   882,   883,   884,   885,   886,
     887,   888,   889,   890,   891,   892,   893,   894,   895,   896,
     897,   898,   899,   900,   901,   997,   998,   857,   776,   902,
     508,   509,   903,   904,   905,   906,   907,   908,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   918,   919,   854,
     920,   921,   848,   922,   923,   924,   925,   926,   927,   928,
     929,   930,   931,   932,   933,   934,   935,   936,   937,   938,
     939,   940,   941,   847,   942,   943,   944,   945,   946,   947,
     948,   949,   950,   951,   952,   953,   954,   955,   846,   956,
       0,   957,   960,   961,   962,   963,   964,   965,   966,   967,
     968,   969,   970,   971,   972,   973,   974,   975,   976,   977,
     978,   979,   980,   981,   982,   983,   984,   985,   986,   987,
     988,   989,   990,   991,   992,   993,   994,   995,   996,   999,
    1000,  1001,  1002,  1011,  1013,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1010,  1012,     2,   335,   337,   338,     0,   351,
     354,   355,   339,   340,   341,   347,   404,   406,   423,   426,
     428,   431,   436,   439,   442,   444,   446,   448,   450,   453,
     454,   456,     0,   462,   455,   467,   470,   474,   475,   477,
     478,   479,     0,   484,   481,     0,   496,   494,   504,   506,
     476,   510,   513,   522,   514,   515,   516,   519,   520,   517,
     518,   540,   542,   543,   544,   541,   581,   582,   583,   584,
     585,   586,   587,   503,   631,   622,   629,   628,   630,   627,
     624,   626,   623,   625,   342,     0,   343,     0,   345,   344,
     346,   524,   525,   526,   523,   505,   348,   349,   521,   808,
     809,   512,   833,   839,   778,   842,     0,     3,   261,    25,
     116,   312,     4,     0,    14,     0,     0,   316,   313,   314,
     323,   315,   843,   844,   845,   856,   849,   850,   851,   852,
     853,   864,   865,   866,   867,   868,   869,   870,   871,   872,
     873,   874,   875,   893,   997,   998,   904,   906,   917,   918,
     854,   848,   935,   941,   846,   983,   986,   992,   994,  1011,
    1004,  1005,   527,   528,   842,   843,   844,   850,   853,   846,
     493,   547,   548,   549,     0,   577,     0,   469,   553,     0,
     452,   451,   530,     0,   487,     0,     0,   595,     0,     0,
       0,     0,     0,     0,     0,     0,   601,     0,     0,     0,
       0,     0,   485,   486,   488,   489,   490,   491,   497,   498,
     499,   500,   501,     0,     0,     0,   771,     0,     0,     0,
     359,   361,     0,     0,   367,   369,     0,     0,   390,     0,
       0,     0,     0,     0,     0,   492,     0,     0,     0,   590,
       0,   608,     0,     0,   761,   762,     0,   764,   765,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     356,   353,   357,   358,   352,     0,     0,     0,     0,     0,
       0,     0,     0,   409,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   463,
     468,     0,     0,     0,     0,   483,   495,     0,     0,     0,
       0,   763,     0,     0,     0,     0,     0,     0,     0,   250,
     251,   261,     0,    23,    24,     0,   112,   113,     0,     0,
       0,   777,   312,    17,     0,   321,     0,   332,   327,   817,
      13,   552,     0,   579,   578,   575,     0,   529,   646,   642,
       0,   645,   657,     0,     0,   594,   637,     0,   633,     0,
       0,     0,     0,   638,   632,   639,     0,     0,     0,     0,
     600,     0,   648,     0,   656,   658,   636,     0,     0,     0,
       0,     0,     0,     0,   608,     0,   608,     0,     0,   608,
       0,     0,     0,     0,     0,     0,     0,     0,   597,   654,
     649,     0,   653,     0,   589,   817,     0,     0,     0,     0,
     835,     0,   836,   608,   796,   798,   336,   350,   372,     0,
       0,     0,   403,   405,   408,   411,   412,   413,   421,   422,
       0,   407,   414,   415,   416,   417,   418,   419,   420,     0,
     429,   430,   427,   432,   434,   433,   435,   437,   438,   440,
     441,   817,   817,     0,     0,   460,     0,   473,   472,     0,
       0,   840,     0,   539,   812,   538,     0,   537,     0,     0,
       0,     0,   534,     0,   810,   257,   256,   282,     0,   253,
     255,     0,   259,   947,   954,     0,     0,     0,   272,     0,
       0,     0,   276,   277,   279,   273,   274,   280,   281,   275,
       0,     0,   258,   278,     0,     0,    20,    34,    62,    48,
      69,    74,   104,   100,    26,    52,    27,    52,    28,   116,
      29,   116,    30,     0,    32,     0,    31,     0,   111,   109,
     139,     0,   146,   155,     0,     0,     0,   186,   191,   194,
     198,   200,   206,   210,   177,   214,   218,   222,   143,   144,
     118,   119,   120,   116,   121,   117,   122,   152,   123,   157,
     124,     0,   126,   116,   125,   134,   181,   127,   116,   128,
     116,   129,   116,   130,   116,   131,   116,   132,   116,   133,
     116,   135,     0,   136,   116,   137,   116,     0,     0,     0,
     608,     0,   322,     0,   817,   855,   847,  1011,  1013,   324,
     612,   617,   618,   621,   619,   814,     0,   815,   620,   824,
     825,   553,     0,   580,     0,   465,   464,     0,   643,   596,
     592,     0,   599,   634,   635,   641,   640,   602,   603,     0,
     647,   655,   598,   588,     0,   770,     0,   532,   533,   363,
     360,     0,     0,   368,     0,   389,   387,   388,     0,     0,
     457,     0,     0,     0,   650,   591,   609,     0,   811,     0,
       0,     0,     0,   834,     0,     0,     0,     0,   373,   380,
     374,   377,   381,     0,   410,     0,     0,     0,     0,   683,
     424,   664,   667,   669,   671,   673,   674,   689,   678,   443,
     445,   447,   606,   449,   461,   480,   482,   511,     0,   813,
       0,     0,   760,   759,   758,   535,   254,     0,   312,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     789,     0,     0,     0,     0,   262,   263,   264,   265,   269,
     270,   266,   267,   268,   271,   105,   106,    40,    36,     0,
     817,     0,   116,    49,    51,   817,   116,    63,    67,    66,
     817,     0,     0,    70,   817,     0,     0,    73,    91,    75,
      79,    80,    81,    85,    86,    88,    77,    82,    83,    84,
      87,    89,     0,     0,     0,    99,   101,   817,   103,   115,
     114,     0,     0,     0,   174,   170,   116,     0,     0,   113,
       0,     0,     0,     0,   156,     0,   165,     0,   116,     0,
     113,   113,   183,   187,   817,     0,     0,     0,     0,   113,
       0,     0,     0,   113,     0,   113,   113,     0,   113,     0,
       0,   113,   113,     0,   213,   216,     0,   219,   220,     0,
       0,     0,     0,   660,     0,     0,   333,   331,     0,   329,
       0,     0,     0,     0,     0,   613,   615,   614,   610,     0,
     818,   552,   552,   570,   545,   466,     0,   659,   593,   604,
     772,     0,     0,   365,     0,     0,     0,   400,     0,   394,
       0,     0,   458,   459,     0,     0,   767,     0,   768,   837,
       0,     0,     0,   803,   804,   800,   802,     0,   382,   383,
     384,   375,     0,     0,   672,     0,   684,   686,   688,   679,
       0,   425,     0,   662,     0,     0,     0,   675,     0,   676,
     607,   605,   536,     0,     0,     0,   284,   285,   289,   300,
       0,   310,   311,   290,   291,     0,     0,     0,     0,   295,
     296,     0,     0,   754,   753,   755,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   303,     0,   303,   107,   108,
      38,     0,   230,   229,   843,   864,   999,  1000,    35,   225,
       0,   228,   226,   237,   248,   244,    39,    44,    45,    46,
      37,    55,    53,   116,     0,    50,     0,    65,    64,    61,
      72,    71,    68,    95,    96,    92,    93,    94,    76,    97,
      78,    90,   102,   142,   166,     0,   116,   171,     0,     0,
     168,   140,   141,   138,   149,   150,   151,   148,   147,   145,
     160,   153,   116,   154,   158,   167,     0,   178,   179,   180,
     116,     0,   189,   188,   116,   192,   190,   195,   196,   193,
     197,   201,   203,   204,   202,   199,   207,   208,   205,   211,
     212,   209,   215,   217,   223,   221,   323,    15,     0,     0,
     328,   823,   611,   616,   827,     0,   828,   608,   832,     0,
     817,     0,     0,     0,   644,   769,     0,     0,     0,   370,
     371,   391,     0,   817,     0,   392,   393,   817,     0,     0,
       0,   651,   334,     0,   838,     0,     0,   805,     0,     0,
     376,     0,   378,   677,   683,   681,     0,   685,   687,     0,
     666,     0,     0,   695,     0,     0,     0,     0,     0,   661,
     665,   668,     0,     0,     0,   724,     0,     0,   749,     0,
       0,   720,   721,     0,   708,   714,   715,   713,   712,   716,
     710,   711,   717,     0,     0,     0,     0,     0,   756,   757,
       0,     0,     0,   299,     0,     0,     0,   288,   789,   793,
     794,   795,   790,   791,     0,   817,     0,     0,     0,     0,
     303,     0,   302,     0,   309,    41,    42,    43,   247,     0,
       0,     0,     0,     0,   238,     0,     0,     0,     0,   243,
      56,    60,    59,   817,     0,     0,    33,    47,    98,   173,
       0,   169,   172,   161,   164,   817,     0,     0,   182,     0,
     176,   185,     0,   323,   330,     0,   826,   830,   817,     0,
       0,   821,     0,   552,   552,     0,   574,   573,   572,   571,
     364,     0,     0,     0,   398,     0,     0,   399,   397,     0,
     652,   766,   608,     0,   797,   799,     0,   385,   386,     0,
     680,   682,   752,   702,   700,   701,   663,     0,     0,   706,
     707,   698,   699,   670,   725,   730,     0,   750,   723,   722,
       0,     0,   727,   726,     0,   719,   718,     0,   748,   709,
       0,     0,   691,     0,   690,   260,   283,   292,   293,   286,
     287,   297,   298,   294,     0,   779,   785,     0,     0,     0,
     841,   608,   323,   306,   307,   301,   304,     0,     0,   246,
     245,     0,   234,   233,     0,   224,   240,   239,   242,   241,
       0,    58,    57,    54,   175,   163,   162,   159,   184,    11,
       0,   829,     0,   816,   817,   817,     0,     0,     0,   552,
     366,   362,   401,     0,   396,   402,     0,   806,     0,   379,
     703,   704,   705,   696,   697,   738,   731,   731,   733,     0,
       0,   740,   740,   751,   693,   692,     0,   787,     0,   817,
       0,     0,   792,   783,   785,     0,     0,   305,   303,   231,
       0,     0,    10,    12,     0,   831,   819,   822,   817,   558,
     564,   550,   561,   567,   551,     0,     0,     0,   801,     0,
       0,     0,     0,     0,   744,   742,   739,   737,   694,   788,
     786,   780,     0,     0,     0,   319,   317,   326,   320,   325,
     308,     0,   235,   236,   249,    18,   820,     0,     0,     0,
       0,   546,   395,   807,     0,   729,   728,   734,   735,     0,
     743,     0,     0,   741,   781,   785,   784,   318,   232,   554,
     560,   559,   555,   566,   565,   556,   563,   562,   557,   569,
     568,   732,     0,   745,   746,   747,     0,   736,   782
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,   322,  1582,    19,    17,    18,   324,
     543,    12,    13,   319,   535,   724,   725,  1160,  1180,   726,
     727,   952,  1182,  1183,   728,   729,   730,   731,   732,   733,
    1198,  1200,   734,   735,   736,   737,   760,   320,   738,   538,
     761,   762,   763,   764,   765,   766,   767,  1217,  1003,   768,
     769,  1005,  1221,  1222,   770,   771,   772,   773,   774,   994,
     995,   996,  1208,   775,   776,  1012,  1231,   777,   778,   779,
     780,   781,   782,   783,   784,   785,   786,   787,   788,   789,
     790,   791,   792,   793,   794,   795,   796,  1168,  1169,  1170,
    1171,  1511,  1621,  1172,  1173,  1174,  1389,   317,   318,   526,
     527,   529,   530,   531,   532,   695,   696,   689,   697,   698,
     699,   700,   701,   702,   703,   704,  1141,  1493,   705,   706,
     707,  1372,  1154,   708,   709,   932,   328,   329,   710,  1616,
     711,   330,   550,  1618,   331,  1048,   546,   547,   990,   214,
     215,   216,   217,   218,   219,   471,   220,   430,   431,  1073,
    1278,   221,   434,   435,   472,   473,   474,   880,   881,   882,
    1100,  1302,   222,   437,   438,   223,  1078,  1285,  1079,  1080,
    1283,   224,   225,   226,   227,   640,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   826,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   372,   265,   266,   267,   268,   269,
     676,   677,   270,   271,   272,   383,   551,   389,  1591,  1594,
    1627,  1629,  1628,  1630,  1273,   273,   386,   274,   554,   275,
     276,   277,   450,   565,   278,   398,   279,   280,   281,   282,
     407,   580,   901,  1121,   616,   809,  1058,   810,   811,   283,
     284,   285,   286,   287,   288,   289,   290,   560,   291,   581,
     292,   611,   293,   583,   561,   584,  1066,  1044,   890,  1319,
    1113,   891,   892,   893,   894,   895,   896,   897,   898,  1109,
    1119,  1347,  1320,  1553,  1461,  1117,  1334,  1335,  1336,  1337,
    1338,  1599,  1473,  1339,  1606,  1562,  1603,  1643,  1340,  1341,
    1342,  1111,   713,   294,   295,   296,   297,   298,   299,   300,
     425,   426,   301,   302,   303,   304,   540,   305,   714,  1570,
    1496,  1148,  1362,  1363,   306,   307,  1095,  1296,  1297,   308,
     309,   310,   311,   814,   815,   816,   817,  1422,   818,   819,
    1265,  1266,   820,   312,   621,   622,   313,   715,   314,   315
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1473
static const yytype_int16 yypact[] =
{
     786, -1473, -1473,    50, -1473,   -44, -1473,   184,  3480,   133,
   -1473, -1473, -1473, -1473, -1473,   180,   211, -1473, -1473, -1473,
      15, -1473,  7047, -1473,  4908,   274,   298,   340,  4197,   395,
    3719,  3719, -1473, -1473, -1473,  2285, -1473, -1473, -1473,    96,
     375,   471,   484,   489,    66,   531,   541,   401, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473,   542,   572,   610,   625,   643,
     667,   669,   751,   761,   764,   767,   567, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473,   650, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473,   776,   783, -1473, -1473, -1473,
   -1473, -1473, -1473,   657, -1473,    34, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473,   728,   728, -1473,   755,
   -1473, -1473,   798, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473,   347, -1473, -1473, -1473,
   -1473, -1473,   113, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,    80, -1473,
     808, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473,    70, -1473, -1473,   -14, -1473,
   -1473, -1473, -1473, -1473,   793, -1473,   -12, -1473, -1473, -1473,
   -1473, -1473, -1473,   816, -1473, -1473,   637,   627, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473,   846, -1473, -1473,   561, -1473,
   -1473, -1473, -1473, -1473, -1473,   725,   727, -1473,   279,   696,
      75,   118,    37,   539, -1473,   736,   729,   739,   735, -1473,
   -1473, -1473,   103, -1473, -1473,  4197,   655, -1473, -1473,   881,
     884, -1473,  4908, -1473, -1473,  4908, -1473, -1473, -1473, -1473,
     406, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473,  3480, -1473,  3480, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473,   328,   371, -1473,   722,  -133,
     393, -1473, -1473,  7047,   726,   104,  7047, -1473, -1473, -1473,
     758, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473,   872,   874,   875,   876,   877,
   -1473, -1473, -1473, -1473,   618, -1473,   889,   655, -1473,  7047,
   -1473, -1473, -1473,   495, -1473,  5382,  3480, -1473,   873,   882,
    3480,    20,   883,   893,  6242,  3480, -1473,   887,  7047,  7047,
     896,  3480, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473,  3480,  7047,     6, -1473,  3480,  3480,  7047,
     897, -1473,  7047,   913,   907, -1473,  7047,    78, -1473,   117,
    3480,  3480,  3480,   898,   899, -1473,   873,  5619,  3480, -1473,
     873,   788,  3480,   784, -1473, -1473,  3480, -1473, -1473,  6855,
    7047,  3480,  3480,  3480,   657,    34,  3480,   936,   811,   815,
   -1473, -1473, -1473, -1473, -1473,  3719,  3719,  3719,  3719,  3719,
    3719,  3719,  3719, -1473,  3719,  3719,  3719,  3719,  3719,  3719,
    3719,  3719,   886,  3719,  3719,  3719,  3719,  3719,  3719,  3719,
    3719,  3719,  3719,  3719,   797,   806,   809,   810,  2524, -1473,
     655,  4197,  4197,  3480,  3480, -1473, -1473,  7047,  3480,  1807,
     -55, -1473,  2046,   908,   838,   840,    42,   918,   795, -1473,
   -1473, -1473,  3958, -1473, -1473,   320, -1473, -1473,  1193,    30,
     933, -1473, -1473, -1473,  7047, -1473,   578, -1473,   931,  5827,
   -1473,   867,   868, -1473, -1473, -1473,   250, -1473, -1473, -1473,
     631, -1473, -1473,   238,  2763, -1473, -1473,   304, -1473,   541,
     877,   935,   937, -1473, -1473, -1473,   939,   940,   426,  3002,
   -1473,   941, -1473,   942, -1473, -1473, -1473,   434,   470,   967,
     650,  3480,   501,   502,   788,   657,   788,  7047,    34,   788,
     728,  3480,  3480,   635,   640,   506,  3480,  3480, -1473, -1473,
   -1473,   646, -1473,   516, -1473,  5827,   938,   762,   924,   834,
   -1473,   520, -1473,   788,   770,    57, -1473, -1473, -1473,  7047,
    3480,   852,   727, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
    3719, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,    68,
     118,   118,   769,    37,    37,    37,    37,   539,   539, -1473,
   -1473,  5827,  5827,  7047,  7047, -1473,   546, -1473, -1473,   483,
     615, -1473,   624, -1473, -1473, -1473,   651, -1473,   478,  3480,
    3480,  3480, -1473,   671, -1473, -1473, -1473, -1473,   918, -1473,
   -1473,  7047,   529,   661,   575,   918,   918,   918, -1473,   918,
     918,   918, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
     918,   918, -1473, -1473,   918,   918, -1473, -1473, -1473, -1473,
   -1473, -1473,   517, -1473, -1473,   153, -1473,   237, -1473,   329,
   -1473,   127, -1473,  1103, -1473,    27, -1473,   749,    55, -1473,
   -1473,   496, -1473, -1473,   691,   742,   692, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473,    76, -1473, -1473, -1473,  -155, -1473,   723,
   -1473,   757, -1473, -1473, -1473, -1473,    65, -1473,   141, -1473,
     699, -1473,  -144, -1473, -1473, -1473,   132, -1473,    28, -1473,
    -142, -1473,    58, -1473,   521, -1473,   702,  7229,   891,    38,
     788,   990, -1473,   268,  6035,   968,   969,   970,   972, -1473,
     466, -1473, -1473, -1473, -1473, -1473,    12, -1473, -1473, -1473,
   -1473,   694,   293, -1473,   888, -1473, -1473,  7047, -1473, -1473,
   -1473,   551, -1473, -1473, -1473, -1473, -1473, -1473, -1473,   552,
   -1473, -1473, -1473, -1473,  3480, -1473,   902, -1473, -1473,   900,
   -1473,  1003,  1008, -1473,   894, -1473, -1473, -1473,   878,   870,
   -1473,   553,   556,  7047, -1473, -1473, -1473,  3480, -1473,  3480,
    3480,  3480,  7047, -1473,  1026,   997,  1000,  1538, -1473, -1473,
    1010, -1473,   681,  3480, -1473,    68,  3480,   317,   467,   588,
     954,   802,   804,   963, -1473, -1473,   965,   851, -1473, -1473,
   -1473, -1473,  1029, -1473, -1473, -1473, -1473, -1473,  3241, -1473,
     825,   826, -1473, -1473, -1473, -1473, -1473,  1021,   442,   575,
     647,   965,   891,  7047,   654,   708,   208,   548,  7047,   308,
     231,  7047,    29,   176,   143, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473,   771,   779, -1473, -1473,  4434,
    5827,   747,   805, -1473, -1473,  5827,   805, -1473, -1473, -1473,
    5827,  3480,  1266, -1473,  5827,  3480,  7230, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473,   -38,   946,   946, -1473, -1473,  6035, -1473, -1473,
   -1473,   817,  3480,   753,   576, -1473, -1473,  3480,  3480, -1473,
    7258,   -85,  3480,   319, -1473,   390, -1473,  7287, -1473,  3480,
   -1473, -1473,   799, -1473,  5827,  3480,  7315,  3480,  7344, -1473,
    3480,  7372,  7401, -1473,  3480, -1473, -1473,  7429, -1473,  3480,
    7458, -1473, -1473,  7486, -1473, -1473,  3480, -1473, -1473,  7515,
    3480,  7543,   808, -1473,   918,  7229, -1473, -1473,   678, -1473,
    1033,  1034,  1035,  6449,  6656, -1473, -1473, -1473, -1473,  1030,
   -1473,   395,   395, -1473, -1473, -1473,  1036, -1473, -1473, -1473,
   -1473,  3480,  1071,   890,  3480,  3480,  3480,  1073,   -17, -1473,
      82,  3480, -1473, -1473,   257,   559, -1473,   861, -1473, -1473,
    3480,  1074,  1074, -1473, -1473,   862, -1473,  3480, -1473, -1473,
     947,  1010,  1050,   573, -1473,    22,   994,   879, -1473, -1473,
     998, -1473,    68,   288,    68,   960,   368,  1011,   -48, -1473,
   -1473, -1473, -1473,  3480,  3480,   891, -1473, -1473,  1011, -1473,
    1060, -1473, -1473, -1473, -1473,   955,   891,   927,   928, -1473,
   -1473,  1067,   977, -1473, -1473, -1473,  7047,   -76,   869,   951,
    1097,  7229,  7047,   916,   891,   995,  7047,   995, -1473, -1473,
     -63,  4908, -1473,  1015,   402,  1090,  1072,  1075,  1099, -1473,
    4671,   737,   738, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473,   379,  7572, -1473,  7600, -1473,   846, -1473,
   -1473,   846, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
     991,   991, -1473, -1473,   846,  3480, -1473, -1473,   865,  7629,
     846,   846,    55, -1473, -1473, -1473, -1473, -1473,   846, -1473,
   -1473, -1473,   240, -1473, -1473, -1473,  7657,   846,    55,    55,
   -1473,   871, -1473,   846, -1473,   846, -1473,    55,   846, -1473,
   -1473,    55,   846,    55,    55, -1473,    55,   846, -1473,    55,
      55, -1473,   846, -1473,   846, -1473,   758, -1473,   808,   268,
   -1473, -1473, -1473, -1473, -1473,   682, -1473,   788, -1473,  1083,
    5145,  1079,  1080,   300, -1473, -1473,  7047,  1108,   984, -1473,
   -1473, -1473,  7047,  5827,    79, -1473, -1473,  5827,  3480,   971,
    1084, -1473, -1473,  3480, -1473,  7047,   689, -1473,   716,  1088,
   -1473,   695,   985, -1473,   588, -1473,  1091, -1473, -1473,  3719,
     804,  1044,   733, -1473,  3719,  3719,   -48,   634,   634, -1473,
   -1473,   963,    68,   684,   773, -1473,    23,   919, -1473,   775,
    7047, -1473, -1473,  1006, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473,   368,   213,  3719,  3719,   943, -1473, -1473,
     918,   891,   712, -1473,   891,   891,   688, -1473,    -3, -1473,
   -1473, -1473,  1109, -1473,  4434,  6035,  7047,   808,  1106,   973,
     995,   891,  1112,  1113,  1112, -1473, -1473, -1473, -1473,  4908,
    4908,    77,  1006,  4434, -1473,  4671,  4671,  4671,  4671,  1125,
   -1473, -1473, -1473,  5827,  3480,  7686, -1473, -1473, -1473,   846,
    7714, -1473, -1473, -1473, -1473,  5827,  3480,  7743, -1473,  7771,
   -1473,   926,   938,   758, -1473,  7047, -1473, -1473,  5827,  1111,
     996, -1473,   717,   395,   395,   274, -1473, -1473, -1473, -1473,
   -1473,  7047,  3480,  1001, -1473,  7047,  3480, -1473, -1473,  3480,
   -1473, -1473,   788,  1074, -1473, -1473,  1074, -1473, -1473,   891,
   -1473, -1473,    37, -1473, -1473, -1473, -1473,    44,   596, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473,   944, -1473, -1473, -1473,
      26,   891, -1473, -1473,    25, -1473, -1473,  1027, -1473, -1473,
    3719,  3719,   769,    92, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473,   264, -1473,  1002,   920,   -76,   364,
   -1473,   788,   758, -1473, -1473,  1112, -1473,   891,   891, -1473,
   -1473,  1116, -1473, -1473,  1126, -1473, -1473, -1473, -1473, -1473,
    3480, -1473,   846, -1473, -1473, -1473,   846, -1473, -1473,   918,
     938, -1473,  1120, -1473,  5827,  5827,  1009,   232,   425,   395,
   -1473, -1473, -1473,  1031, -1473, -1473,  1154, -1473,   718, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,   -54,  1006,
     891, -1473, -1473, -1473,   769,   769,  3719, -1473,   720,  5827,
     938,  4434, -1473, -1473,  1002,    40,    32, -1473,   995, -1473,
      64,   632, -1473, -1473,   918, -1473, -1473, -1473,  5827, -1473,
   -1473, -1473, -1473, -1473, -1473,  1140,  3480,  3480, -1473,   721,
     730,  1006,   961,   731, -1473, -1473,   447,   447,   769, -1473,
   -1473, -1473,   364,   938,  3480, -1473, -1473, -1473, -1473, -1473,
    1112,  1128, -1473, -1473, -1473, -1473, -1473,   109,   115,   156,
     242, -1473, -1473, -1473,  1052, -1473, -1473,   -48, -1473,  1006,
   -1473,    72,    72, -1473, -1473,  1002, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473,   964, -1473, -1473, -1473,   938, -1473, -1473
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1473, -1473, -1473,  1168, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473,   446, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473,   191, -1473, -1473, -1473, -1473,  1173, -1473,  -376,  -689,
   -1473, -1473, -1473, -1473,   440, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473,   181, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
     193, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1330,  -186, -1473,
   -1473, -1473, -1473, -1473, -1137, -1473, -1473, -1473, -1473, -1473,
     672, -1473, -1473, -1473,   673, -1473, -1473,  -518, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1146, -1473, -1473, -1473,     4, -1473, -1473, -1473, -1473,
   -1473,  -159, -1228, -1473,   387, -1473,  -292,   404,  -492,   674,
      24,  -123, -1473, -1473,   989, -1473, -1473, -1473,   614, -1473,
   -1473, -1473, -1473,   612, -1473, -1473, -1473,   330,   119, -1473,
   -1473, -1473, -1473,  1095,   617, -1473, -1473, -1473,   136, -1473,
   -1473, -1473, -1473,   740,   743, -1473,   254,   -94,  -487,   380,
    -467,   377,   378, -1473, -1473, -1473,   857, -1473, -1473, -1473,
    -632,  -235, -1473, -1473, -1473,     7,   386, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473,   -10, -1473, -1473, -1473,
   -1473,  -608, -1473, -1345,  -411, -1473, -1473, -1473, -1473, -1473,
     700,   313, -1473,   -50, -1473,  -201, -1473,  -548, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473,    46, -1473, -1473, -1473, -1473, -1473, -1473,
    1085, -1473,   562, -1473,  -572,  -609, -1473,  -799,  -648,  -462,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
     824, -1473,   827, -1473,   822,   785,   370,  -791,  -866, -1473,
   -1473, -1473,   122,   121,   -91,   349, -1473, -1473, -1473,   -66,
   -1473, -1293, -1473,  -219,   -77,   321,   -98, -1473, -1473, -1473,
   -1473,  -311, -1414, -1473,  -315,  -752, -1473, -1473, -1473, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473,   659, -1473, -1473, -1473, -1313,  -400,  -351, -1473, -1472,
   -1395,  -108, -1473,  -247, -1473, -1473, -1473, -1080,  -191, -1473,
   -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473, -1473,
   -1473,  -162, -1473, -1473, -1473,   383, -1473, -1473,   158,   -22
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -313
static const yytype_int16 yytable[] =
{
     374,   451,   374,   822,   577,  1050,   866,   509,   652,   690,
      20,  1374,  1298,   589,   380,   902,   902,   888,   594,  1102,
    1478,   596,   849,  1458,   851,   599,  1193,   854,  1412,   653,
     654,   655,   656,  1384,  1499,   387,  1512,  1494,  1214,   590,
     962,   889,   966,   432,   562,   867,   454,  1359,   457,   500,
    1614,   874,   899,   900,    29,   325,  1557,   562,   585,   393,
    1375,   568,   885,  1470,   326,  1559,  1344,   326,  1513,  1514,
     886,  1305,  1344,    22,  1000,    36,    37,    38,   493,   494,
     867,   326,   326,   569,  1007,  1194,    22,   812,  1435,  1016,
     326,  1018,   687,  1021,  1287,  1022,   585,  1027,   678,  1030,
      29,  1033,  1613,   867,  1574,  1039,   404,  1041,   885,   493,
     494,   600,  1559,   544,   405,   394,   886,    36,    37,    38,
     447,    36,    37,    38,   868,  1001,   493,   494,   448,   496,
     452,  1129,   445,   800,  1077,    29,   395,  1019,  1471,  1031,
    1560,  1471,  1155,  1157,   396,   545,   533,    16,    98,  1002,
     600,   508,  1601,   812,  1649,   534,  1150,   867,  1345,  1346,
    1020,   405,  1652,   867,  1345,  1346,  1032,  1284,   679,   680,
     916,   989,   520,  1666,   521,   453,   681,   935,   936,   937,
     373,   938,   939,   940,    21,  1530,   852,  1560,  1202,   497,
      98,   406,   941,   942,    98,  1049,   943,   944,   813,   812,
     812,  1655,   501,    98,   867,   449,  1059,  1472,  1617,  1561,
    1556,  1436,   570,   455,  1288,   458,  1615,  1645,   878,   524,
    1661,   397,  1151,   797,  1505,  1650,   591,   601,  1046,   433,
     374,  1045,  1653,   374,  1215,  1623,  1216,   495,   406,  1306,
    1147,  1612,   515,  1360,  1361,   516,  1604,   327,  1516,  1517,
    1518,  1519,   510,   888,  1566,   888,  1376,  1377,  1550,  1551,
    1552,   327,   327,  1184,   813,  1602,   602,  1186,   887,  1043,
     327,   462,  1656,   544,  1576,   985,  1589,   889,  1590,   889,
    1290,   498,   499,   876,  1195,  1196,  1197,   829,  1637,  1658,
     867,   917,   477,   478,   479,   480,   481,   482,  1291,    10,
     877,   374,  1043,   483,   374,  1567,  1034,  1209,   986,  1028,
     813,   813,   813,   813,   887,  1480,   484,  1156,  1063,  1226,
     316,    36,    37,    38,    25,   539,  1663,    26,    27,   617,
     987,  1425,  1029,   619,  1350,  1064,  1008,   462,   625,   626,
     627,  1176,   812,   628,  1662,  1353,  1185,  1135,   867,    29,
    1152,  1187,  1035,   832,  1136,  1190,   824,   885,  1481,  1659,
    1153,   321,  1036,  1370,    11,   886,  1548,   374,   522,  1009,
      36,    37,    38,   374,  1010,  1011,  1383,  1143,  1144,   523,
     998,   825,   374,   999,  1311,   323,   374,   374,   485,   486,
     487,   488,   489,   490,    98,   442,   675,   381,   382,   675,
    1137,  1138,   374,  1312,  1494,  1232,  1269,   374,   963,  1313,
     374,  1145,   867,  1023,   374,   399,   443,   444,  1426,  1427,
     563,  1379,  1013,   400,   567,   374,   517,   518,   384,   578,
     964,   965,  1620,   947,   948,   587,  1024,   374,   374,  1025,
    1026,   410,   395,    98,  1014,  1015,   519,   588,   385,   411,
     491,   592,   593,   813,  1323,   949,   950,  1324,   951,   462,
    1325,  1326,  1327,  1328,   603,   604,   605,   462,   846,  1592,
    1146,  1593,   613,   888,  1147,   837,  1067,  1055,   856,   857,
     888,   541,   888,   842,   548,  1314,  1315,  1316,   812,  1056,
    1317,  1318,   608,   812,  1395,   374,   614,   889,   812,    29,
    1057,   388,   812,   462,   889,   905,   889,   879,   920,   921,
     922,   401,  1067,  1271,  1272,  1105,   462,  1400,   953,   843,
    1329,  1403,   374,  1130,   402,   812,  1257,   374,   462,   403,
     954,  1404,   666,  1407,   462,   462,   557,   669,   670,   462,
     955,  1409,   672,  1405,  1406,  1411,   799,   556,   524,   462,
     847,   848,   812,   872,  1330,   860,   912,   913,   914,   525,
    1486,   412,   541,  1489,  1490,   865,  1500,  1219,   716,   873,
     717,   408,  1331,  1332,  1220,   374,  1333,   718,   719,   462,
    1506,   409,   373,   720,   462,   462,   462,   373,   831,   462,
     373,   413,   462,   374,   373,   904,   721,   722,   723,   813,
    1068,  1069,  1082,   839,   813,  1083,   462,   374,  1292,   813,
     957,   801,  1641,   813,  1642,   423,   923,   623,   624,   802,
     958,   959,  1304,  1212,   924,   925,   926,   927,   928,   414,
     861,   862,   960,   961,  1228,  1229,   813,   906,  1223,   374,
     374,   374,   374,  1237,   415,  1220,   907,  1241,   462,  1243,
    1244,  1414,  1246,   509,  1624,  1249,  1250,   462,  1549,   424,
    1390,  1421,   416,   813,   827,   462,   429,   929,   462,   374,
    1391,  1392,   828,   462,  1434,   671,   858,   930,  1437,   863,
    1558,   859,  1393,  1394,   908,   511,   417,   864,   418,   931,
     888,   512,   909,   463,   464,  1417,   465,   466,   467,   910,
     468,   469,   373,   813,   908,   502,   503,   911,   536,   537,
     918,  1259,   915,  -312,   889,  1415,  1577,  1578,   919,  1260,
    1139,  1070,  1443,  1416,   552,   553,  1140,   920,   921,   922,
    1444,   634,   635,   636,   637,   638,   639,   436,   641,   642,
     643,   644,   645,   646,   647,   648,  1086,  1087,  1088,  1443,
    1535,  1443,  1368,   801,  1634,   373,  1373,  1445,  1536,  1598,
     879,  1609,  1635,  1634,  1639,   933,   934,  1385,  1387,  1605,
     419,  1636,  1640,  1386,  1388,  1042,  1464,  1465,  1466,  1467,
     420,  1428,   374,   421,  1521,   675,   422,   373,  -312,     1,
       2,     3,     4,     5,     6,   440,  1525,  1106,  1107,  1108,
    1177,  1178,  1179,   493,   494,   374,   945,   946,   812,  1532,
    1550,  1551,  1552,   758,   759,  1037,  1038,  1061,  1062,  1126,
    1127,   812,  1098,  1099,   427,   812,  1131,  1132,  1457,  1133,
    1134,   428,  1485,  1454,  1455,   923,   993,  1206,   441,  1447,
    1448,   374,  1452,   924,   925,   926,   927,   928,   325,   541,
     374,  1459,  1460,   456,  -312,   374,  1487,  1488,  1482,  1483,
    1468,  1469,  1475,  1476,   459,  1430,  1495,  1491,  1492,   461,
    1546,  1433,   460,   650,   651,  1537,  1538,   657,   658,   462,
     659,   660,   475,  1256,  1442,   476,   929,   390,   391,  1664,
    1665,  1085,   492,  -312,   884,   504,   930,   667,   668,   505,
     506,   374,   513,   812,   507,   514,   374,   542,   931,   374,
    1103,   549,   395,   528,   399,   404,   410,   447,   555,   813,
    1529,   564,   597,   566,   573,  1586,  1587,   374,   374,  1575,
     595,   812,   813,   374,   574,   579,   813,   586,   374,  1175,
     598,   615,   374,   812,   618,   629,   606,   607,  1275,   630,
     649,  1279,  1280,  1281,   631,  1501,   812,   661,  1289,   662,
    1610,   684,   663,   664,   685,   374,   686,  1294,   687,   691,
     798,   803,  1622,   821,   879,   823,   833,   844,   834,  1626,
     835,   836,   840,   841,   870,  1188,   867,   871,   869,  1191,
     883,  1595,   374,  1564,  1565,   992,   875,   988,   997,   544,
    1348,  1349,   993,  1017,  1004,  1006,  1040,  1573,  1051,  1052,
    1053,  1583,  1054,  1074,   813,  1072,  1204,  1043,  1075,  1065,
    1540,  1210,  1211,  1258,  1543,  1081,  1218,  -227,  1076,  1077,
     623,   374,   374,  1227,  1071,  1096,  1090,  1091,  1584,  1233,
    1092,  1235,   813,  1097,  1238,  1110,  1112,  1115,  1242,  1114,
    1116,  1118,  1120,  1247,   813,  -227,  1123,  1124,  1125,  1205,
    1252,  1158,  1181,  -227,  1254,  1203,  1625,   813,  1159,  1199,
    1270,  1230,   812,   812,  1261,  1262,  1263,  1274,  1611,  1608,
    1276,   541,  1282,  1295,  1619,  1277,  1142,  1293,  1299,  1149,
    1301,  1303,  1307,  1308,  1322,  1309,  1343,  1351,  1352,  1413,
    1356,  1354,  1355,  1357,  1365,  1364,  1366,   812,  1369,  1380,
    1371,  1383,  1381,  1401,  1398,  1382,  1418,  1431,  1432,  1410,
    1644,  1646,  1423,  1424,   374,  1440,   812,  1439,  1446,  1367,
     374,  1449,    98,  1474,   374,  1651,  1654,  1657,  1660,   374,
    1451,  1453,  1498,  1503,  1484,  1507,  1520,  1504,   374,  1534,
    1508,  1378,  1533,  1563,  1542,  1569,  1571,  1579,  1555,  1580,
    1175,  1585,  1588,  1596,  1597,  1438,  1631,  1471,  1638,  1648,
    1441,  1667,    15,   956,  1668,  1201,    14,   740,   741,   742,
     743,   991,   744,   813,   813,   745,  1224,  1207,   746,   747,
     748,   749,   750,   751,   752,   753,   754,  1515,   688,   755,
     756,   757,  1568,  1060,   692,  1047,   712,   470,  1502,   850,
     853,  1267,   439,  1101,  1286,   632,  1300,   855,   813,   633,
    1456,  1122,   683,  1429,  1539,   571,   903,   446,   572,  1399,
     582,  1463,   612,  1084,  1310,  1321,  1104,   813,  1450,  1554,
      11,  1462,  1128,   758,   759,  1479,  1600,  1607,   374,   845,
    1497,  1572,  1547,  1531,   374,  1089,     0,     0,     0,     0,
     374,   374,     0,  -227,     0,   374,  -227,  -227,  -227,  -227,
       0,  -227,  -227,   374,  -227,     0,     0,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,     0,     0,  -227,  -227,
    -227,     0,     0,     0,     0,  -227,  -227,     0,     0,     0,
       0,     0,     0,     0,  1358,     0,     0,     0,   374,  1541,
     541,     0,     0,  1544,   541,     0,  1545,  -227,  -227,     0,
    -227,     0,     0,     0,     0,     0,     0,     0,     0,  -227,
       0,     0,  -227,  -227,     0,     0,     0,     0,     0,     0,
       0,     0,   374,   374,   374,     0,     0,     0,     0,     0,
       0,   967,     0,     0,  1175,     0,     0,   374,   374,     0,
       0,   374,     0,   374,   374,   374,   374,     0,     0,  1509,
    1510,   374,     0,  1175,     0,  1175,  1175,  1175,  1175,     0,
       0,     0,   968,   374,   969,   970,   971,   972,   973,   974,
     975,     0,     0,   374,     0,     0,   374,     0,     0,   976,
     977,   978,   979,   980,   981,     0,     0,     0,     0,   374,
       0,     0,     0,   374,   982,   983,   984,     0,  1522,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1526,     0,     0,     0,   373,     0,     0,     0,     0,     0,
     373,   739,     0,     0,   740,   741,   742,   743,     0,   744,
       0,     0,   745,   373,     0,   746,   747,   748,   749,   750,
     751,   752,   753,   754,     0,     0,   755,   756,   757,     0,
       0,     0,     0,  1632,  1633,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1477,     0,
       0,  1647,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,     0,     0,
     758,   759,   374,   374,  1189,     0,     0,   740,   741,   742,
     743,     0,   744,     0,   373,   745,     0,     0,   746,   747,
     748,   749,   750,   751,   752,   753,   754,     0,     0,   755,
     756,   757,     0,     0,  1581,     0,     0,   374,     0,   374,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1175,     0,     0,     0,     0,   374,     0,     0,     0,
       0,     0,     0,  1267,     0,     0,     0,     0,     0,     0,
      11,     0,     0,   758,   759,     0,     0,     0,     0,   373,
       0,     0,     0,   373,   332,   333,   334,   335,   336,   337,
     338,   339,   340,    48,    49,    50,    51,    52,    53,    54,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,   353,    87,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,     0,     0,     0,     0,     0,   354,
     355,    97,     0,     0,     0,    99,     0,     0,     0,     0,
     102,   356,   104,   357,   106,     0,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   358,   359,   118,   360,   120,
       0,   121,   361,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   362,   137,   138,   139,
     140,   141,   363,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,     0,   155,   156,   157,     0,
     364,   159,     0,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   365,   186,   187,
     366,   189,   190,   191,   192,   193,   367,   195,   368,   197,
     198,   199,   200,   201,   202,   369,   204,   205,   370,   371,
     208,   209,   210,   211,   212,   213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
     673,    25,     0,     0,    26,    27,     0,    28,     0,    29,
       0,    30,    31,    32,     0,    33,    34,    35,   674,     0,
       0,     0,     0,     0,     0,     0,     0,  1093,     0,  1094,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     0,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    94,     0,     0,     0,     0,     0,    95,    96,
      97,     0,     0,    98,    99,   100,   101,     0,     0,   102,
     103,   104,   105,   106,     0,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,     0,   155,   156,   157,     0,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,    22,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,    24,     0,     0,   673,
      25,     0,     0,    26,    27,     0,    28,     0,    29,     0,
      30,    31,    32,     0,    33,    34,    35,   682,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     0,     0,    95,    96,    97,
       0,     0,    98,    99,   100,   101,     0,     0,   102,   103,
     104,   105,   106,     0,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,     0,   155,   156,   157,     0,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,    22,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,    25,
       0,     0,    26,    27,     0,    28,     0,    29,     0,    30,
      31,    32,     0,    33,    34,    35,   392,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,     0,     0,     0,     0,     0,    95,    96,    97,     0,
       0,    98,    99,   100,   101,     0,     0,   102,   103,   104,
     105,   106,     0,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   157,     0,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,    22,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,     0,     0,    25,     0,
       0,    26,    27,     0,    28,     0,    29,     0,    30,    31,
      32,     0,    33,    34,    35,     0,     0,     0,     0,     0,
       0,     0,     0,   665,     0,     0,     0,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     0,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
       0,     0,     0,    88,    89,    90,    91,    92,    93,    94,
       0,     0,     0,     0,     0,    95,    96,    97,     0,     0,
      98,    99,   100,   101,     0,     0,   102,   103,   104,   105,
     106,     0,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,     0,   155,   156,   157,     0,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,    22,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,    25,     0,     0,
      26,    27,     0,    28,     0,    29,     0,    30,    31,    32,
       0,    33,    34,    35,     0,     0,     0,     0,     0,     0,
       0,     0,   830,     0,     0,     0,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     0,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,     0,
       0,     0,    88,    89,    90,    91,    92,    93,    94,     0,
       0,     0,     0,     0,    95,    96,    97,     0,     0,    98,
      99,   100,   101,     0,     0,   102,   103,   104,   105,   106,
       0,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
       0,   155,   156,   157,     0,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,    22,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,    25,     0,     0,    26,
      27,     0,    28,     0,    29,     0,    30,    31,    32,     0,
      33,    34,    35,     0,     0,     0,     0,     0,     0,     0,
       0,   838,     0,     0,     0,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,     0,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,     0,     0,
       0,     0,     0,    95,    96,    97,     0,     0,    98,    99,
     100,   101,     0,     0,   102,   103,   104,   105,   106,     0,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,     0,
     155,   156,   157,     0,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
      22,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,    24,     0,     0,   673,    25,     0,     0,    26,    27,
       0,    28,     0,    29,     0,    30,    31,    32,     0,    33,
      34,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     0,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,     0,     0,     0,
       0,     0,    95,    96,    97,     0,     0,    98,    99,   100,
     101,     0,     0,   102,   103,   104,   105,   106,     0,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,     0,   155,
     156,   157,     0,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,    22,
       0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,    25,     0,     0,    26,    27,     0,
      28,     0,    29,     0,    30,    31,    32,     0,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,     0,     0,     0,     0,
       0,    95,    96,    97,     0,     0,    98,    99,   100,   101,
       0,     0,   102,   103,   104,   105,   106,     0,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,     0,   155,   156,
     157,     0,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,    22,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,    25,     0,     0,    26,    27,     0,    28,
       0,    29,     0,    30,    31,    32,     0,    33,    34,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,   353,    87,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,     0,     0,     0,     0,     0,
      95,    96,    97,     0,     0,    98,    99,   100,   101,     0,
       0,   102,   356,   104,   357,   106,     0,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   358,   359,   118,   360,
     120,     0,   121,   361,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,     0,   155,   156,   157,
       0,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   365,   186,
     187,   366,   189,   190,   191,   192,   193,   367,   195,   368,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   370,
     371,   208,   209,   210,   211,   212,   213,    22,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     0,
       0,     0,    25,     0,     0,    26,    27,     0,    28,     0,
      29,     0,    30,    31,    32,     0,    33,    34,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,     0,     0,     0,     0,     0,    95,
      96,    97,     0,     0,    98,    99,   100,   101,     0,     0,
     102,   103,   104,   105,   106,     0,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   693,
     150,   151,   152,   153,   154,     0,   155,   694,   157,     0,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,    22,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,    25,     0,     0,    26,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     0,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,   353,    87,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    94,     0,     0,     0,     0,     0,    95,    96,
      97,     0,     0,    98,    99,   100,   101,     0,     0,   102,
     356,   104,   357,   106,     0,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   358,   359,   118,   360,   120,     0,
     121,   361,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   362,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,     0,   155,   156,   157,     0,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   365,   186,   187,   366,
     189,   190,   191,   192,   193,   367,   195,   368,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   370,   371,   208,
     209,   210,   211,   212,   213,    23,     0,     0,     0,     0,
       0,     0,     0,     0,  1161,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1162,     0,     0,     0,     0,     0,
    1163,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1164,   376,    41,    42,    43,   377,    45,    46,   378,    48,
      49,    50,    51,    52,    53,    54,  1165,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,    67,    68,
      69,    70,    71,    72,    73,     0,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,   353,    87,
       0,     0,     0,    88,    89,    90,    91,    92,    93,    94,
       0,     0,     0,     0,     0,   354,   355,    97,     0,     0,
       0,    99,   100,   101,     0,     0,   102,   356,   104,   357,
     106,     0,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   358,   359,   118,   360,   120,     0,   121,   361,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   362,   137,   138,   139,   140,   141,   363,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,     0,   155,   156,   157,     0,   379,   159,     0,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   365,   186,   187,   366,   189,   190,   191,
     192,   193,   367,   195,   368,   197,   198,  1166,  1167,   201,
     202,   369,   204,   205,   370,   371,   208,   209,   210,   211,
     212,   213,    23,     0,     0,     0,     0,     0,     0,     0,
       0,  1161,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1164,   376,    41,
      42,    43,   377,    45,    46,   378,    48,    49,    50,    51,
      52,    53,    54,  1165,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,    67,    68,    69,    70,    71,
      72,    73,     0,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,   353,    87,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,     0,     0,     0,
       0,     0,   354,   355,    97,     0,     0,     0,    99,   100,
     101,     0,     0,   102,   356,   104,   357,   106,     0,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   358,   359,
     118,   360,   120,     0,   121,   361,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   362,
     137,   138,   139,   140,   141,   363,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,     0,   155,
     156,   157,     0,   379,   159,     0,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     365,   186,   187,   366,   189,   190,   191,   192,   193,   367,
     195,   368,   197,   198,   199,   200,   201,   202,   369,   204,
     205,   370,   371,   208,   209,   210,   211,   212,   213,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   375,   376,    41,    42,    43,   377,
      45,    46,   378,    48,    49,    50,    51,    52,    53,    54,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,   353,    87,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,     0,     0,     0,     0,     0,   354,
     355,    97,     0,     0,     0,    99,   100,   101,     0,     0,
     102,   356,   104,   357,   106,     0,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   358,   359,   118,   360,   120,
       0,   121,   361,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   362,   137,   138,   139,
     140,   141,   363,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,     0,   155,   156,   157,     0,
     379,   159,     0,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   365,   186,   187,
     366,   189,   190,   191,   192,   193,   367,   195,   368,   197,
     198,   199,   200,   201,   202,   369,   204,   205,   370,   371,
     208,   209,   210,   211,   212,   213,  1419,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   804,  1420,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   375,   376,    41,    42,    43,   377,    45,    46,   378,
     805,    49,    50,    51,    52,    53,    54,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,    67,
      68,    69,    70,    71,    72,    73,     0,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   353,
      87,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,     0,     0,     0,     0,     0,   354,   355,    97,     0,
       0,     0,    99,     0,     0,     0,     0,   102,   356,   104,
     357,   106,     0,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   358,   359,   118,   360,   120,     0,   121,   361,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   362,   137,   138,   139,   140,   141,   363,
     806,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   157,     0,   379,   159,     0,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   365,   186,   187,   366,   189,   190,
     191,   192,   193,   367,   195,   368,   197,   198,   199,   200,
     201,   202,   807,   808,   205,   370,   371,   208,   209,   210,
     211,   212,   213,   558,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   559,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   332,   333,
     334,   335,   336,   337,   338,   339,   340,    48,    49,    50,
      51,    52,    53,    54,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,    67,    68,    69,    70,
      71,    72,    73,     0,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   353,    87,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,     0,     0,
       0,     0,     0,   354,   355,    97,     0,     0,     0,    99,
       0,     0,     0,     0,   102,   356,   104,   357,   106,     0,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   358,
     359,   118,   360,   120,     0,   121,   361,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     362,   137,   138,   139,   140,   141,   363,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,     0,
     155,   156,   157,     0,   364,   159,     0,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   365,   186,   187,   366,   189,   190,   191,   192,   193,
     367,   195,   368,   197,   198,   199,   200,   201,   202,   369,
     204,   205,   370,   371,   208,   209,   210,   211,   212,   213,
     609,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     610,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   332,   333,   334,   335,   336,
     337,   338,   339,   340,    48,    49,    50,    51,    52,    53,
      54,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,    67,    68,    69,    70,    71,    72,    73,
       0,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,   353,    87,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,     0,     0,     0,     0,     0,
     354,   355,    97,     0,     0,     0,    99,     0,     0,     0,
       0,   102,   356,   104,   357,   106,     0,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   358,   359,   118,   360,
     120,     0,   121,   361,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   362,   137,   138,
     139,   140,   141,   363,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,     0,   155,   156,   157,
       0,   364,   159,     0,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   365,   186,
     187,   366,   189,   190,   191,   192,   193,   367,   195,   368,
     197,   198,   199,   200,   201,   202,   369,   204,   205,   370,
     371,   208,   209,   210,   211,   212,   213,   804,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   375,   376,    41,    42,    43,   377,    45,
      46,   378,   805,    49,    50,    51,    52,    53,    54,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,    67,    68,    69,    70,    71,    72,    73,     0,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,   353,    87,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    94,     0,     0,     0,     0,     0,   354,   355,
      97,     0,     0,     0,    99,     0,     0,     0,     0,   102,
     356,   104,   357,   106,     0,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   358,   359,   118,   360,   120,     0,
     121,   361,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   362,   137,   138,   139,   140,
     141,   363,   806,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,     0,   155,   156,   157,     0,   379,
     159,     0,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   365,   186,   187,   366,
     189,   190,   191,   192,   193,   367,   195,   368,   197,   198,
     199,   200,   201,   202,   807,   808,   205,   370,   371,   208,
     209,   210,   211,   212,   213,   804,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   375,   376,    41,    42,    43,   377,    45,    46,   378,
      48,    49,    50,    51,    52,    53,    54,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,    67,
      68,    69,    70,    71,    72,    73,     0,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   353,
      87,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,     0,     0,     0,     0,     0,   354,   355,    97,     0,
       0,     0,    99,     0,     0,     0,     0,   102,   356,   104,
     357,   106,     0,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   358,   359,   118,   360,   120,     0,   121,   361,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   362,   137,   138,   139,   140,   141,   363,
     806,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   157,     0,   379,   159,     0,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   365,   186,   187,   366,   189,   190,
     191,   192,   193,   367,   195,   368,   197,   198,   199,   200,
     201,   202,   807,   808,   205,   370,   371,   208,   209,   210,
     211,   212,   213,   575,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   332,   333,
     334,   335,   336,   337,   338,   339,   340,    48,    49,    50,
      51,    52,    53,    54,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,    67,    68,    69,    70,
      71,    72,    73,     0,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   353,    87,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,     0,     0,
       0,     0,     0,   354,   355,    97,     0,     0,   576,    99,
       0,     0,     0,     0,   102,   356,   104,   357,   106,     0,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   358,
     359,   118,   360,   120,     0,   121,   361,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     362,   137,   138,   139,   140,   141,   363,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,     0,
     155,   156,   157,     0,   364,   159,     0,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   365,   186,   187,   366,   189,   190,   191,   192,   193,
     367,   195,   368,   197,   198,   199,   200,   201,   202,   369,
     204,   205,   370,   371,   208,   209,   210,   211,   212,   213,
    1264,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   332,   333,   334,   335,   336,
     337,   338,   339,   340,    48,    49,    50,    51,    52,    53,
      54,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,    67,    68,    69,    70,    71,    72,    73,
       0,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,   353,    87,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,     0,     0,     0,     0,     0,
     354,   355,    97,     0,     0,     0,    99,     0,     0,     0,
       0,   102,   356,   104,   357,   106,     0,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   358,   359,   118,   360,
     120,     0,   121,   361,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   362,   137,   138,
     139,   140,   141,   363,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,     0,   155,   156,   157,
       0,   364,   159,     0,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   365,   186,
     187,   366,   189,   190,   191,   192,   193,   367,   195,   368,
     197,   198,   199,   200,   201,   202,   369,   204,   205,   370,
     371,   208,   209,   210,   211,   212,   213,  1268,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   332,   333,   334,   335,   336,   337,   338,   339,
     340,    48,    49,    50,    51,    52,    53,    54,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     353,    87,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     0,     0,   354,   355,    97,
       0,     0,     0,    99,     0,     0,     0,     0,   102,   356,
     104,   357,   106,     0,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   358,   359,   118,   360,   120,     0,   121,
     361,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   362,   137,   138,   139,   140,   141,
     363,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,     0,   155,   156,   157,     0,   364,   159,
       0,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   365,   186,   187,   366,   189,
     190,   191,   192,   193,   367,   195,   368,   197,   198,   199,
     200,   201,   202,   369,   204,   205,   370,   371,   208,   209,
     210,   211,   212,   213,   620,     0,     0,     0,     0,     0,
       0,   332,   333,   334,   335,   336,   337,   338,   339,   340,
      48,    49,    50,    51,    52,    53,    54,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,    67,
      68,    69,    70,    71,    72,    73,     0,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   353,
      87,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,     0,     0,     0,     0,     0,   354,   355,    97,     0,
       0,     0,    99,     0,     0,     0,     0,   102,   356,   104,
     357,   106,     0,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   358,   359,   118,   360,   120,     0,   121,   361,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   362,   137,   138,   139,   140,   141,   363,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   157,     0,   364,   159,     0,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   365,   186,   187,   366,   189,   190,
     191,   192,   193,   367,   195,   368,   197,   198,   199,   200,
     201,   202,   369,   204,   205,   370,   371,   208,   209,   210,
     211,   212,   213,   332,   333,   334,   335,   336,   337,   338,
     339,   340,    48,    49,    50,    51,    52,    53,    54,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,    67,    68,    69,    70,    71,    72,    73,     0,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,   353,    87,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    94,     0,     0,     0,     0,     0,   354,   355,
      97,     0,     0,     0,    99,     0,     0,     0,     0,   102,
     356,   104,   357,   106,     0,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   358,   359,   118,   360,   120,     0,
     121,   361,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   362,   137,   138,   139,   140,
     141,   363,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,     0,   155,   156,   157,     0,   364,
     159,     0,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   365,   186,   187,   366,
     189,   190,   191,   192,   193,   367,   195,   368,   197,   198,
     199,   200,   201,   202,   369,   204,   205,   370,   371,   208,
     209,   210,   211,   212,   213,    49,    50,    51,    52,    53,
      54,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,    67,    68,    69,    70,    71,    72,    73,
       0,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,   353,    87,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,     0,     0,     0,     0,     0,
     354,   355,    97,     0,     0,     0,    99,     0,     0,     0,
       0,   102,   356,   104,   357,   106,     0,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   358,   359,   118,     0,
     120,     0,   121,     0,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   362,   137,   138,
     139,   140,   141,   363,     0,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,     0,   155,   156,   157,
       0,     0,   159,     0,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   365,   186,
     187,   366,   189,   190,   191,   192,   193,   367,   195,   368,
     197,   198,   199,   200,   201,   202,   369,   204,   205,   370,
     371,   208,   209,   210,   211,   212,   213,     0,  1192,     0,
       0,   740,   741,   742,   743,     0,   744,     0,     0,   745,
       0,     0,   746,   747,   748,   749,   750,   751,   752,   753,
     754,     0,     0,   755,   756,   757,  1213,     0,     0,   740,
     741,   742,   743,     0,   744,     0,     0,   745,     0,     0,
     746,   747,   748,   749,   750,   751,   752,   753,   754,     0,
       0,   755,   756,   757,     0,  1225,     0,     0,   740,   741,
     742,   743,     0,   744,    11,     0,   745,   758,   759,   746,
     747,   748,   749,   750,   751,   752,   753,   754,     0,     0,
     755,   756,   757,  1234,     0,     0,   740,   741,   742,   743,
       0,   744,    11,     0,   745,   758,   759,   746,   747,   748,
     749,   750,   751,   752,   753,   754,     0,     0,   755,   756,
     757,     0,  1236,     0,     0,   740,   741,   742,   743,     0,
     744,    11,     0,   745,   758,   759,   746,   747,   748,   749,
     750,   751,   752,   753,   754,     0,     0,   755,   756,   757,
    1239,     0,     0,   740,   741,   742,   743,     0,   744,    11,
       0,   745,   758,   759,   746,   747,   748,   749,   750,   751,
     752,   753,   754,     0,     0,   755,   756,   757,     0,  1240,
       0,     0,   740,   741,   742,   743,     0,   744,    11,     0,
     745,   758,   759,   746,   747,   748,   749,   750,   751,   752,
     753,   754,     0,     0,   755,   756,   757,  1245,     0,     0,
     740,   741,   742,   743,     0,   744,    11,     0,   745,   758,
     759,   746,   747,   748,   749,   750,   751,   752,   753,   754,
       0,     0,   755,   756,   757,     0,  1248,     0,     0,   740,
     741,   742,   743,     0,   744,    11,     0,   745,   758,   759,
     746,   747,   748,   749,   750,   751,   752,   753,   754,     0,
       0,   755,   756,   757,  1251,     0,     0,   740,   741,   742,
     743,     0,   744,    11,     0,   745,   758,   759,   746,   747,
     748,   749,   750,   751,   752,   753,   754,     0,     0,   755,
     756,   757,     0,  1253,     0,     0,   740,   741,   742,   743,
       0,   744,    11,     0,   745,   758,   759,   746,   747,   748,
     749,   750,   751,   752,   753,   754,     0,     0,   755,   756,
     757,  1255,     0,     0,   740,   741,   742,   743,     0,   744,
      11,     0,   745,   758,   759,   746,   747,   748,   749,   750,
     751,   752,   753,   754,     0,     0,   755,   756,   757,     0,
    1396,     0,     0,   740,   741,   742,   743,     0,   744,    11,
       0,   745,   758,   759,   746,   747,   748,   749,   750,   751,
     752,   753,   754,     0,     0,   755,   756,   757,  1397,     0,
       0,   740,   741,   742,   743,     0,   744,    11,     0,   745,
     758,   759,   746,   747,   748,   749,   750,   751,   752,   753,
     754,     0,     0,   755,   756,   757,     0,  1402,     0,     0,
     740,   741,   742,   743,     0,   744,    11,     0,   745,   758,
     759,   746,   747,   748,   749,   750,   751,   752,   753,   754,
       0,     0,   755,   756,   757,  1408,     0,     0,   740,   741,
     742,   743,     0,   744,    11,     0,   745,   758,   759,   746,
     747,   748,   749,   750,   751,   752,   753,   754,     0,     0,
     755,   756,   757,     0,  1523,     0,     0,   740,   741,   742,
     743,     0,   744,    11,     0,   745,   758,   759,   746,   747,
     748,   749,   750,   751,   752,   753,   754,     0,     0,   755,
     756,   757,  1524,     0,     0,   740,   741,   742,   743,     0,
     744,    11,     0,   745,   758,   759,   746,   747,   748,   749,
     750,   751,   752,   753,   754,     0,     0,   755,   756,   757,
       0,  1527,     0,     0,   740,   741,   742,   743,     0,   744,
      11,     0,   745,   758,   759,   746,   747,   748,   749,   750,
     751,   752,   753,   754,     0,     0,   755,   756,   757,  1528,
       0,     0,   740,   741,   742,   743,     0,   744,    11,     0,
     745,   758,   759,   746,   747,   748,   749,   750,   751,   752,
     753,   754,     0,     0,   755,   756,   757,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,     0,     0,
     758,   759,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,     0,     0,   758,   759
};

static const yytype_int16 yycheck[] =
{
      22,   160,    24,   551,   404,   804,   615,   242,   495,   527,
       6,  1157,  1092,   424,    24,   663,   664,   649,   429,   885,
    1333,   432,   594,  1316,   596,   436,    64,   599,  1256,   496,
     497,   498,   499,  1170,  1364,    28,  1381,    40,   123,    33,
     729,   649,   731,     9,   395,    48,    60,   123,    60,    12,
      10,   623,   661,   662,    32,    40,  1470,   408,   409,    35,
     123,    41,    40,    40,    52,    40,   120,    52,  1381,  1382,
      48,    49,   120,     9,   763,    53,    54,    55,    34,    35,
      48,    52,    52,    63,   773,   123,     9,   549,     9,   778,
      52,   780,    50,   782,    12,   784,   447,   786,   153,   788,
      32,   790,  1574,    48,  1499,   794,    40,   796,    40,    34,
      35,    33,    40,     9,    48,    19,    48,    53,    54,    55,
      40,    53,    54,    55,   616,   280,    34,    35,    48,    11,
      60,   922,    19,   544,   151,    32,    40,   281,   115,   281,
     115,   115,   933,   934,    48,    41,   279,   191,   126,   304,
      33,    48,   206,   615,    45,   288,   127,    48,   212,   213,
     304,    48,    47,    48,   212,   213,   308,   184,   223,   224,
     688,   116,   295,  1645,   297,   105,   231,   695,   696,   697,
      22,   699,   700,   701,     0,  1413,   597,   115,   987,    71,
     126,   125,   710,   711,   126,   803,   714,   715,   549,   661,
     662,    45,   165,   126,    48,   125,   194,   184,   176,   184,
     184,   132,   192,   227,   132,   227,   176,  1612,   629,   177,
    1634,   125,   193,   193,  1370,   116,   220,   149,   800,   195,
     252,   193,   117,   255,   319,  1580,   321,   162,   125,  1105,
     243,  1571,   252,   319,   320,   255,  1559,   232,  1385,  1386,
    1387,  1388,   245,   885,   162,   887,   319,   320,   214,   215,
     216,   232,   232,   952,   615,  1558,   149,   956,   246,   126,
     232,    33,   116,     9,  1502,   248,    44,   885,    46,   887,
      23,   163,   164,   226,   322,   323,   324,    49,  1601,    47,
      48,   691,    13,    14,    15,    16,    17,    18,    41,   249,
     243,   323,   126,    24,   326,    41,   248,   996,   281,   281,
     661,   662,   663,   664,   246,   102,    37,   174,    25,  1008,
     187,    53,    54,    55,    24,   321,  1639,    27,    28,   452,
     303,    31,   304,   456,  1125,    42,   271,    33,   461,   462,
     463,   950,   804,   466,  1637,  1136,   955,   139,    48,    32,
     174,   960,   294,    49,   146,   964,   106,    40,   145,   117,
     184,   181,   304,  1154,   314,    48,  1446,   389,    40,   304,
      53,    54,    55,   395,   309,   310,    12,    69,    70,    51,
     304,   131,   404,   307,    96,   174,   408,   409,   109,   110,
     111,   112,   113,   114,   126,    48,   519,   123,   124,   522,
     192,   193,   424,   115,    40,  1014,  1054,   429,   281,   121,
     432,   103,    48,   281,   436,    40,    69,    70,   118,   119,
     396,    19,   281,    48,   400,   447,    20,    21,   130,   405,
     303,   304,  1578,   280,   281,   411,   304,   459,   460,   307,
     308,    40,    40,   126,   303,   304,    40,   423,   108,    48,
     171,   427,   428,   804,    86,   302,   303,    89,   305,    33,
      92,    93,    94,    95,   440,   441,   442,    33,   591,    44,
     239,    46,   448,  1105,   243,    49,   827,    11,   601,   602,
    1112,   323,  1114,    49,   326,   197,   198,   199,   950,    23,
     202,   203,   446,   955,  1183,   517,   450,  1105,   960,    32,
      34,   106,   964,    33,  1112,    22,  1114,   630,    66,    67,
      68,    40,   863,  1061,  1062,    48,    33,  1206,   281,    49,
     152,   281,   544,   923,    40,   987,  1044,   549,    33,    40,
     293,   291,   508,  1222,    33,    33,    41,   513,   514,    33,
     303,  1230,   518,   303,   304,  1234,   542,   389,   177,    33,
      49,    49,  1014,    33,   186,    49,   679,   680,   681,   188,
    1351,    19,   404,  1354,  1355,    49,  1365,   248,   248,    49,
     250,    40,   204,   205,   255,   597,   208,   257,   258,    33,
    1371,    40,   424,   263,    33,    33,    33,   429,   564,    33,
     432,    19,    33,   615,   436,    49,   276,   277,   278,   950,
      49,    49,    49,   579,   955,    49,    33,   629,    49,   960,
     281,    33,   165,   964,   167,    48,   174,   459,   460,    41,
     291,   292,    49,   999,   182,   183,   184,   185,   186,    19,
     606,   607,   303,   304,  1010,  1011,   987,    22,   248,   661,
     662,   663,   664,  1019,    19,   255,    22,  1023,    33,  1025,
    1026,  1259,  1028,   888,    22,  1031,  1032,    33,  1449,     9,
     281,  1270,    19,  1014,    33,    33,     9,   225,    33,   691,
     291,   292,    41,    33,  1283,   517,    41,   235,  1287,    33,
    1471,    41,   303,   304,    33,    30,    19,    41,    19,   247,
    1322,    36,    41,   132,   133,  1267,   135,   136,   137,   221,
     139,   140,   544,  1054,    33,   166,   167,   229,   315,   316,
     181,    33,    41,    52,  1322,    33,  1507,  1508,   189,    41,
     172,   844,    33,    41,   106,   107,   178,    66,    67,    68,
      41,   477,   478,   479,   480,   481,   482,     9,   484,   485,
     486,   487,   488,   489,   490,   491,   869,   870,   871,    33,
      33,    33,  1152,    33,    33,   597,  1156,    41,    41,    41,
     883,    41,    41,    33,    33,   190,   191,    30,    30,  1560,
      19,    41,    41,    36,    36,   797,    92,    93,    94,    95,
      19,  1273,   804,    19,  1393,   908,    19,   629,   127,     3,
       4,     5,     6,     7,     8,    40,  1405,   209,   210,   211,
      53,    54,    55,    34,    35,   827,   289,   290,  1270,  1418,
     214,   215,   216,   317,   318,   294,   295,   123,   124,   172,
     173,  1283,   141,   142,    48,  1287,   172,   173,  1315,   121,
     122,    48,  1350,   100,   101,   174,   260,   261,    40,   144,
     145,   863,  1309,   182,   183,   184,   185,   186,    40,   691,
     872,   217,   218,    60,   193,   877,   144,   145,  1345,  1346,
      87,    88,    87,    88,    48,  1276,  1358,   179,   180,   242,
    1442,  1282,   235,   493,   494,  1423,  1424,   500,   501,    33,
     502,   503,   157,  1042,  1295,   158,   225,    30,    31,  1641,
    1642,   867,   196,   232,   640,   159,   235,   511,   512,   170,
     161,   923,    21,  1365,   169,    21,   928,   181,   247,   931,
     886,   153,    40,   191,    40,    40,    40,    40,    29,  1270,
    1412,    48,     9,    41,    41,  1534,  1535,   949,   950,  1501,
      33,  1393,  1283,   955,    41,    48,  1287,    41,   960,   949,
      33,   153,   964,  1405,   160,     9,    48,    48,  1071,   138,
      64,  1074,  1075,  1076,   139,  1366,  1418,   160,  1081,   153,
    1569,    53,   153,   153,   126,   987,   126,  1090,    50,   174,
      37,    40,  1580,   106,  1097,   107,    41,    10,    41,  1588,
      41,    41,    41,    41,    60,   961,    48,   153,   226,   965,
     138,  1539,  1014,  1480,  1481,   304,   226,   248,   306,     9,
    1123,  1124,   260,   304,   281,   248,   304,  1499,    40,    40,
      40,  1529,    40,    10,  1365,   115,   992,   126,    10,   131,
    1431,   997,   998,  1045,  1435,   155,  1002,    12,   134,   151,
     872,  1053,  1054,  1009,   132,   877,    10,    40,  1530,  1015,
      40,  1017,  1393,    33,  1020,    91,   244,    84,  1024,   245,
      85,   200,    23,  1029,  1405,    40,   231,   231,    37,   306,
    1036,   290,   257,    48,  1040,   248,  1584,  1418,   289,   123,
      40,   272,  1534,  1535,    41,    41,    41,    41,  1570,  1566,
       9,   923,     9,     9,  1576,   195,   928,   226,   226,   931,
     143,    41,    98,   214,   134,    97,    85,    37,   143,  1258,
      33,   174,   174,   126,   153,   236,     9,  1569,   192,    19,
     115,    12,    40,   248,   123,    40,    33,     9,   134,   248,
    1612,  1613,    43,    43,  1146,    41,  1588,   156,    40,  1151,
    1152,   146,   126,   214,  1156,  1627,  1628,  1629,  1630,  1161,
      49,    97,    33,    37,   201,    33,    21,   174,  1170,   153,
      37,  1161,    41,   126,   153,   153,   236,    41,   214,    33,
    1170,    41,   153,   132,    10,  1288,    26,   115,   207,    41,
    1293,   207,     4,   727,  1666,   984,     3,   251,   252,   253,
     254,   741,   256,  1534,  1535,   259,  1005,   994,   262,   263,
     264,   265,   266,   267,   268,   269,   270,  1383,   526,   273,
     274,   275,  1494,   816,   531,   801,   532,   218,  1367,   595,
     598,  1053,   117,   883,  1078,   475,  1097,   600,  1569,   476,
    1314,   908,   522,  1273,  1425,   401,   664,   142,   401,  1205,
     408,  1322,   447,   863,  1112,  1114,   887,  1588,  1304,  1458,
     314,  1318,   921,   317,   318,  1343,  1557,  1562,  1270,   590,
    1358,  1498,  1443,  1415,  1276,   872,    -1,    -1,    -1,    -1,
    1282,  1283,    -1,   248,    -1,  1287,   251,   252,   253,   254,
      -1,   256,   257,  1295,   259,    -1,    -1,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    -1,    -1,   273,   274,
     275,    -1,    -1,    -1,    -1,   280,   281,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1146,    -1,    -1,    -1,  1330,  1432,
    1152,    -1,    -1,  1436,  1156,    -1,  1439,   302,   303,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,
      -1,    -1,   317,   318,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1364,  1365,  1366,    -1,    -1,    -1,    -1,    -1,
      -1,   248,    -1,    -1,  1364,    -1,    -1,  1379,  1380,    -1,
      -1,  1383,    -1,  1385,  1386,  1387,  1388,    -1,    -1,  1379,
    1380,  1393,    -1,  1383,    -1,  1385,  1386,  1387,  1388,    -1,
      -1,    -1,   279,  1405,   281,   282,   283,   284,   285,   286,
     287,    -1,    -1,  1415,    -1,    -1,  1418,    -1,    -1,   296,
     297,   298,   299,   300,   301,    -1,    -1,    -1,    -1,  1431,
      -1,    -1,    -1,  1435,   311,   312,   313,    -1,  1394,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1406,    -1,    -1,    -1,  1276,    -1,    -1,    -1,    -1,    -1,
    1282,   248,    -1,    -1,   251,   252,   253,   254,    -1,   256,
      -1,    -1,   259,  1295,    -1,   262,   263,   264,   265,   266,
     267,   268,   269,   270,    -1,    -1,   273,   274,   275,    -1,
      -1,    -1,    -1,  1596,  1597,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1330,    -1,
      -1,  1614,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,    -1,    -1,
     317,   318,  1534,  1535,   248,    -1,    -1,   251,   252,   253,
     254,    -1,   256,    -1,  1366,   259,    -1,    -1,   262,   263,
     264,   265,   266,   267,   268,   269,   270,    -1,    -1,   273,
     274,   275,    -1,    -1,  1520,    -1,    -1,  1569,    -1,  1571,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1571,    -1,    -1,    -1,    -1,  1588,    -1,    -1,    -1,
      -1,    -1,    -1,  1415,    -1,    -1,    -1,    -1,    -1,    -1,
     314,    -1,    -1,   317,   318,    -1,    -1,    -1,    -1,  1431,
      -1,    -1,    -1,  1435,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,    -1,    -1,    -1,   109,   110,   111,
     112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,
     132,   133,   134,   135,   136,    -1,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,    -1,   188,   189,   190,    -1,
     192,   193,    -1,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,   321,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
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
     243,   244,   245,   246,   247,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    36,    -1,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,   115,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
      -1,    -1,   126,   127,   128,   129,    -1,    -1,   132,   133,
     134,   135,   136,    -1,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,    -1,   188,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,    34,
      35,    36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
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
     245,   246,   247,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    -1,    34,    35,
      36,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
      -1,    -1,    -1,   109,   110,   111,   112,   113,   114,   115,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
     126,   127,   128,   129,    -1,    -1,   132,   133,   134,   135,
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
     246,   247,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    53,    54,    55,    56,
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
     247,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    -1,    34,    35,    36,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,   126,   127,
     128,   129,    -1,    -1,   132,   133,   134,   135,   136,    -1,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,    -1,
     188,   189,   190,    -1,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    -1,    34,    35,    36,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,    58,
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
     239,   240,   241,   242,   243,   244,   245,   246,   247,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    -1,    34,    35,    36,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,   115,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,    -1,    -1,   126,   127,   128,   129,
      -1,    -1,   132,   133,   134,   135,   136,    -1,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,    -1,   188,   189,
     190,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    -1,    34,    35,    36,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
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
     241,   242,   243,   244,   245,   246,   247,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    24,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    -1,    34,    35,    36,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,    -1,    -1,    -1,   109,   110,   111,
     112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,   126,   127,   128,   129,    -1,    -1,
     132,   133,   134,   135,   136,    -1,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,    -1,   188,   189,   190,    -1,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    24,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
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
     243,   244,   245,   246,   247,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
      -1,    -1,    -1,   109,   110,   111,   112,   113,   114,   115,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,   127,   128,   129,    -1,    -1,   132,   133,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,    -1,   188,   189,   190,    -1,   192,   193,    -1,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,   128,
     129,    -1,    -1,   132,   133,   134,   135,   136,    -1,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,    -1,   188,
     189,   190,    -1,   192,   193,    -1,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,    -1,    -1,    -1,   109,   110,   111,
     112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,   127,   128,   129,    -1,    -1,
     132,   133,   134,   135,   136,    -1,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,    -1,   188,   189,   190,    -1,
     192,   193,    -1,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
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
     185,   186,    -1,   188,   189,   190,    -1,   192,   193,    -1,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,
      -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,    -1,
     188,   189,   190,    -1,   192,   193,    -1,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
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
      -1,   192,   193,    -1,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
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
     193,    -1,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
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
     185,   186,    -1,   188,   189,   190,    -1,   192,   193,    -1,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,   126,   127,
      -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,    -1,
     188,   189,   190,    -1,   192,   193,    -1,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
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
      -1,   192,   193,    -1,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,   115,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
      -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,   132,   133,
     134,   135,   136,    -1,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,    -1,   188,   189,   190,    -1,   192,   193,
      -1,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
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
     185,   186,    -1,   188,   189,   190,    -1,   192,   193,    -1,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,    56,    57,    58,    59,    60,    61,    62,
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
     193,    -1,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,   109,   110,
     111,   112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,    -1,    -1,    -1,   127,    -1,    -1,    -1,
      -1,   132,   133,   134,   135,   136,    -1,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,    -1,
     151,    -1,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,    -1,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,   188,   189,   190,
      -1,    -1,   193,    -1,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,    -1,   248,    -1,
      -1,   251,   252,   253,   254,    -1,   256,    -1,    -1,   259,
      -1,    -1,   262,   263,   264,   265,   266,   267,   268,   269,
     270,    -1,    -1,   273,   274,   275,   248,    -1,    -1,   251,
     252,   253,   254,    -1,   256,    -1,    -1,   259,    -1,    -1,
     262,   263,   264,   265,   266,   267,   268,   269,   270,    -1,
      -1,   273,   274,   275,    -1,   248,    -1,    -1,   251,   252,
     253,   254,    -1,   256,   314,    -1,   259,   317,   318,   262,
     263,   264,   265,   266,   267,   268,   269,   270,    -1,    -1,
     273,   274,   275,   248,    -1,    -1,   251,   252,   253,   254,
      -1,   256,   314,    -1,   259,   317,   318,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    -1,    -1,   273,   274,
     275,    -1,   248,    -1,    -1,   251,   252,   253,   254,    -1,
     256,   314,    -1,   259,   317,   318,   262,   263,   264,   265,
     266,   267,   268,   269,   270,    -1,    -1,   273,   274,   275,
     248,    -1,    -1,   251,   252,   253,   254,    -1,   256,   314,
      -1,   259,   317,   318,   262,   263,   264,   265,   266,   267,
     268,   269,   270,    -1,    -1,   273,   274,   275,    -1,   248,
      -1,    -1,   251,   252,   253,   254,    -1,   256,   314,    -1,
     259,   317,   318,   262,   263,   264,   265,   266,   267,   268,
     269,   270,    -1,    -1,   273,   274,   275,   248,    -1,    -1,
     251,   252,   253,   254,    -1,   256,   314,    -1,   259,   317,
     318,   262,   263,   264,   265,   266,   267,   268,   269,   270,
      -1,    -1,   273,   274,   275,    -1,   248,    -1,    -1,   251,
     252,   253,   254,    -1,   256,   314,    -1,   259,   317,   318,
     262,   263,   264,   265,   266,   267,   268,   269,   270,    -1,
      -1,   273,   274,   275,   248,    -1,    -1,   251,   252,   253,
     254,    -1,   256,   314,    -1,   259,   317,   318,   262,   263,
     264,   265,   266,   267,   268,   269,   270,    -1,    -1,   273,
     274,   275,    -1,   248,    -1,    -1,   251,   252,   253,   254,
      -1,   256,   314,    -1,   259,   317,   318,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    -1,    -1,   273,   274,
     275,   248,    -1,    -1,   251,   252,   253,   254,    -1,   256,
     314,    -1,   259,   317,   318,   262,   263,   264,   265,   266,
     267,   268,   269,   270,    -1,    -1,   273,   274,   275,    -1,
     248,    -1,    -1,   251,   252,   253,   254,    -1,   256,   314,
      -1,   259,   317,   318,   262,   263,   264,   265,   266,   267,
     268,   269,   270,    -1,    -1,   273,   274,   275,   248,    -1,
      -1,   251,   252,   253,   254,    -1,   256,   314,    -1,   259,
     317,   318,   262,   263,   264,   265,   266,   267,   268,   269,
     270,    -1,    -1,   273,   274,   275,    -1,   248,    -1,    -1,
     251,   252,   253,   254,    -1,   256,   314,    -1,   259,   317,
     318,   262,   263,   264,   265,   266,   267,   268,   269,   270,
      -1,    -1,   273,   274,   275,   248,    -1,    -1,   251,   252,
     253,   254,    -1,   256,   314,    -1,   259,   317,   318,   262,
     263,   264,   265,   266,   267,   268,   269,   270,    -1,    -1,
     273,   274,   275,    -1,   248,    -1,    -1,   251,   252,   253,
     254,    -1,   256,   314,    -1,   259,   317,   318,   262,   263,
     264,   265,   266,   267,   268,   269,   270,    -1,    -1,   273,
     274,   275,   248,    -1,    -1,   251,   252,   253,   254,    -1,
     256,   314,    -1,   259,   317,   318,   262,   263,   264,   265,
     266,   267,   268,   269,   270,    -1,    -1,   273,   274,   275,
      -1,   248,    -1,    -1,   251,   252,   253,   254,    -1,   256,
     314,    -1,   259,   317,   318,   262,   263,   264,   265,   266,
     267,   268,   269,   270,    -1,    -1,   273,   274,   275,   248,
      -1,    -1,   251,   252,   253,   254,    -1,   256,   314,    -1,
     259,   317,   318,   262,   263,   264,   265,   266,   267,   268,
     269,   270,    -1,    -1,   273,   274,   275,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,    -1,    -1,
     317,   318,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   314,    -1,    -1,   317,   318
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,   326,   327,   328,
     249,   314,   336,   337,   361,   328,   191,   332,   333,   331,
     450,     0,     9,    11,    20,    24,    27,    28,    30,    32,
      34,    35,    36,    38,    39,    40,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   109,   110,
     111,   112,   113,   114,   115,   121,   122,   123,   126,   127,
     128,   129,   132,   133,   134,   135,   136,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   188,   189,   190,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   464,   465,   466,   467,   468,   469,
     471,   476,   487,   490,   496,   497,   498,   499,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   540,   541,   542,   543,   544,
     547,   548,   549,   560,   562,   564,   565,   566,   569,   571,
     572,   573,   574,   584,   585,   586,   587,   588,   589,   590,
     591,   593,   595,   597,   638,   639,   640,   641,   642,   643,
     644,   647,   648,   649,   650,   652,   659,   660,   664,   665,
     666,   667,   678,   681,   683,   684,   187,   422,   423,   338,
     362,   181,   329,   174,   334,    40,    52,   232,   451,   452,
     456,   459,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,   104,   121,   122,   133,   135,   147,   148,
     150,   154,   168,   174,   192,   219,   222,   228,   230,   237,
     240,   241,   539,   683,   684,    56,    57,    61,    64,   192,
     531,   123,   124,   550,   130,   108,   561,   520,   106,   552,
     511,   511,    41,   465,    19,    40,    48,   125,   570,    40,
      48,    40,    40,    40,    40,    48,   125,   575,    40,    40,
      40,    48,    19,    19,    19,    19,    19,    19,    19,    19,
      19,    19,    19,    48,     9,   645,   646,    48,    48,     9,
     472,   473,     9,   195,   477,   478,     9,   488,   489,   488,
      40,    40,    48,    69,    70,    19,   575,    40,    48,   125,
     567,   456,    60,   105,    60,   227,    60,    60,   227,    48,
     235,   242,    33,   132,   133,   135,   136,   137,   139,   140,
     469,   470,   479,   480,   481,   157,   158,    13,    14,    15,
      16,    17,    18,    24,    37,   109,   110,   111,   112,   113,
     114,   171,   196,    34,    35,   162,    11,    71,   163,   164,
      12,   165,   166,   167,   159,   170,   161,   169,    48,   516,
     520,    30,    36,    21,    21,   531,   531,    20,    21,    40,
     466,   466,    40,    51,   177,   188,   424,   425,   191,   426,
     427,   428,   429,   279,   288,   339,   315,   316,   364,   450,
     651,   683,   181,   335,     9,    41,   461,   462,   683,   153,
     457,   551,   106,   107,   563,    29,   683,    41,    11,    41,
     592,   599,   652,   465,    48,   568,    41,   465,    41,    63,
     192,   595,   597,    41,    41,    41,   126,   651,   465,    48,
     576,   594,   599,   598,   600,   652,    41,   465,   465,   539,
      33,   220,   465,   465,   539,    33,   539,     9,    33,   539,
      33,   149,   149,   465,   465,   465,    48,    48,   568,    11,
      41,   596,   600,   465,   568,   153,   579,   466,   160,   466,
      49,   679,   680,   683,   683,   466,   466,   466,   466,     9,
     138,   139,   498,   499,   501,   501,   501,   501,   501,   501,
     500,   501,   501,   501,   501,   501,   501,   501,   501,    64,
     504,   504,   503,   505,   505,   505,   505,   506,   506,   507,
     507,   160,   153,   153,   153,    49,   465,   521,   521,   465,
     465,   683,   465,    23,    41,   466,   545,   546,   153,   223,
     224,   231,    41,   545,    53,   126,   126,    50,   425,   432,
     432,   174,   429,   181,   189,   430,   431,   433,   434,   435,
     436,   437,   438,   439,   440,   443,   444,   445,   448,   449,
     453,   455,   464,   637,   653,   682,   248,   250,   257,   258,
     263,   276,   277,   278,   340,   341,   344,   345,   349,   350,
     351,   352,   353,   354,   357,   358,   359,   360,   363,   248,
     251,   252,   253,   254,   256,   259,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   273,   274,   275,   317,   318,
     361,   365,   366,   367,   368,   369,   370,   371,   374,   375,
     379,   380,   381,   382,   383,   388,   389,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   193,    37,   450,
     539,    33,    41,    40,    40,    65,   175,   237,   238,   580,
     582,   583,   584,   652,   668,   669,   670,   671,   673,   674,
     677,   106,   552,   107,   106,   131,   517,    33,    41,    49,
      49,   465,    49,    41,    41,    41,    41,    49,    49,   465,
      41,    41,    49,    49,    10,   646,   466,    49,    49,   579,
     473,   579,   539,   478,   579,   489,   466,   466,    41,    41,
      49,   465,   465,    33,    41,    49,   580,    48,   463,   226,
      60,   153,    33,    49,   579,   226,   226,   243,   539,   466,
     482,   483,   484,   138,   501,    40,    48,   246,   515,   536,
     603,   606,   607,   608,   609,   610,   611,   612,   613,   580,
     580,   577,   583,   577,    49,    22,    22,    22,    33,    41,
     221,   229,   466,   466,   466,    41,   432,   651,   181,   189,
      66,    67,    68,   174,   182,   183,   184,   185,   186,   225,
     235,   247,   450,   190,   191,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   289,   290,   280,   281,   302,
     303,   305,   346,   281,   293,   303,   346,   281,   291,   292,
     303,   304,   364,   281,   303,   304,   364,   248,   279,   281,
     282,   283,   284,   285,   286,   287,   296,   297,   298,   299,
     300,   301,   311,   312,   313,   248,   281,   303,   248,   116,
     463,   369,   304,   260,   384,   385,   386,   306,   304,   307,
     364,   280,   304,   373,   281,   376,   248,   364,   271,   304,
     309,   310,   390,   281,   303,   304,   364,   304,   364,   281,
     304,   364,   364,   281,   304,   307,   308,   364,   281,   304,
     364,   281,   308,   364,   248,   294,   304,   294,   295,   364,
     304,   364,   684,   126,   602,   193,   579,   462,   460,   536,
     582,    40,    40,    40,    40,    11,    23,    34,   581,   194,
     459,   123,   124,    25,    42,   131,   601,   652,    49,    49,
     466,   132,   115,   474,    10,    10,   134,   151,   491,   493,
     494,   155,    49,    49,   601,   465,   466,   466,   466,   680,
      10,    40,    40,   319,   321,   661,   683,    33,   141,   142,
     485,   482,   603,   465,   610,    48,   209,   210,   211,   614,
      91,   636,   244,   605,   245,    84,    85,   620,   200,   615,
      23,   578,   546,   231,   231,    37,   172,   173,   620,   602,
     651,   172,   173,   121,   122,   139,   146,   192,   193,   172,
     178,   441,   683,    69,    70,   103,   239,   243,   656,   683,
     127,   193,   174,   184,   447,   602,   174,   602,   290,   289,
     342,    20,    30,    36,    56,    72,   233,   234,   412,   413,
     414,   415,   418,   419,   420,   531,   580,    53,    54,    55,
     343,   257,   347,   348,   364,   580,   364,   580,   465,   248,
     580,   465,   248,    64,   123,   322,   323,   324,   355,   123,
     356,   356,   582,   248,   465,   306,   261,   385,   387,   364,
     465,   465,   363,   248,   123,   319,   321,   372,   465,   248,
     255,   377,   378,   248,   377,   248,   364,   465,   363,   363,
     272,   391,   580,   465,   248,   465,   248,   363,   465,   248,
     248,   363,   465,   363,   363,   248,   363,   465,   248,   363,
     363,   248,   465,   248,   465,   248,   456,   432,   684,    33,
      41,    41,    41,    41,    41,   675,   676,   683,    41,   583,
      40,   552,   552,   559,    41,   466,     9,   195,   475,   466,
     466,   466,     9,   495,   184,   492,   493,    12,   132,   466,
      23,    41,    49,   226,   466,     9,   662,   663,   662,   226,
     483,   143,   486,    41,    49,    49,   603,    98,   214,    97,
     607,    96,   115,   121,   197,   198,   199,   202,   203,   604,
     617,   608,   134,    86,    89,    92,    93,    94,    95,   152,
     186,   204,   205,   208,   621,   622,   623,   624,   625,   628,
     633,   634,   635,    85,   120,   212,   213,   616,   466,   466,
     602,    37,   143,   602,   174,   174,    33,   126,   683,   123,
     319,   320,   657,   658,   236,   153,     9,   684,   651,   192,
     602,   115,   446,   651,   446,   123,   319,   320,   531,    19,
      19,    40,    40,    12,   419,    30,    36,    30,    36,   421,
     281,   291,   292,   303,   304,   364,   248,   248,   123,   465,
     364,   248,   248,   281,   291,   303,   304,   364,   248,   364,
     248,   364,   457,   456,   536,    33,    41,   579,    33,    11,
      41,   580,   672,    43,    43,    31,   118,   119,   463,   548,
     539,     9,   134,   539,   580,     9,   132,   580,   466,   156,
      41,   466,   539,    33,    41,    41,    40,   144,   145,   146,
     614,    49,   505,    97,   100,   101,   502,   503,   616,   217,
     218,   619,   619,   609,    92,    93,    94,    95,    87,    88,
      40,   115,   184,   627,   214,    87,    88,   683,   650,   621,
     102,   145,   503,   503,   201,   432,   602,   144,   145,   602,
     602,   179,   180,   442,    40,   463,   655,   656,    33,   412,
     582,   539,   456,    37,   174,   446,   602,    33,    37,   531,
     531,   416,   538,   650,   650,   413,   419,   419,   419,   419,
      21,   580,   465,   248,   248,   580,   465,   248,   248,   463,
     457,   676,   580,    41,   153,    33,    41,   552,   552,   550,
     539,   466,   153,   539,   466,   466,   579,   663,   662,   602,
     214,   215,   216,   618,   618,   214,   184,   627,   602,    40,
     115,   184,   630,   126,   503,   503,   162,    41,   461,   153,
     654,   236,   658,   463,   655,   579,   457,   602,   602,    41,
      33,   465,   330,   432,   463,    41,   580,   580,   153,    44,
      46,   553,    44,    46,   554,   552,   132,    10,    41,   626,
     626,   206,   616,   631,   650,   602,   629,   629,   503,    41,
     580,   463,   412,   654,    10,   176,   454,   176,   458,   463,
     446,   417,   536,   538,    22,   432,   580,   555,   557,   556,
     558,    26,   466,   466,    33,    41,    41,   650,   207,    33,
      41,   165,   167,   632,   463,   655,   463,   466,    41,    45,
     116,   463,    47,   117,   463,    45,   116,   463,    47,   117,
     463,   627,   616,   650,   630,   630,   654,   207,   463
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
#line 780 "../src/parser/XQParser.y"
    {
    SET_BUILT_IN_NAMESPACE(XQillaFunction::XQillaPrefix, XQillaFunction::XMLChFunctionURI);
  }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 786 "../src/parser/XQParser.y"
    {
    SET_BUILT_IN_NAMESPACE(XMLChXS, SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
    SET_BUILT_IN_NAMESPACE(XMLChXSI, SchemaSymbols::fgURI_XSI);
    SET_BUILT_IN_NAMESPACE(XMLChFN, XQFunction::XMLChFunctionURI);
    SET_BUILT_IN_NAMESPACE(XMLChLOCAL, XQUserFunction::XMLChXQueryLocalFunctionsURI);
    SET_BUILT_IN_NAMESPACE(XMLChERR, FunctionError::XMLChXQueryErrorURI);
    SET_BUILT_IN_NAMESPACE(XQillaFunction::XQillaPrefix, XQillaFunction::XMLChFunctionURI);
  }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 797 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (8)].signature)->argSpecs = (yyvsp[(5) - (8)].argSpecs);
    (yyvsp[(2) - (8)].signature)->returnType = (yyvsp[(6) - (8)].sequenceType);
    QP->_function = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(2) - (8)].signature), (yyvsp[(7) - (8)].astNode), true, MEMMGR));
  }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 808 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].signature)->argSpecs = (yyvsp[(2) - (3)].argSpecs);
    (yyvsp[(1) - (3)].signature)->returnType = (yyvsp[(3) - (3)].sequenceType);
    QP->_signature = (yyvsp[(1) - (3)].signature);
  }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 817 "../src/parser/XQParser.y"
    {
    printf("  { 0, 0, 0, 0, 0 }\n};\n\n");

    UTF8Str module(QP->_moduleName);
    printf("static const DelayedModule %s_module = { %s_file, %s_prefix, %s_uri, %s_functions };\n",
           module.str(), module.str(), module.str(), module.str(), module.str());
  }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 828 "../src/parser/XQParser.y"
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

  case 16:

/* Line 1455 of yacc.c  */
#line 865 "../src/parser/XQParser.y"
    {
    printf("static const DelayedModule::FuncDef %s_functions[] = {\n", UTF8(QP->_moduleName));
  }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 869 "../src/parser/XQParser.y"
    {
  }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 875 "../src/parser/XQParser.y"
    {
    XMLBuffer buf;

    // Call staticResolution on the function signature, to resolve the annotation names
    (yyvsp[(2) - (8)].signature)->staticResolution(CONTEXT);

    const XMLCh *localname = XPath2NSUtils::getLocalName((yyvsp[(4) - (8)].str));

    printf("  {\n    \"%s\", %d, %s, %d, %d,\n", UTF8(localname), (int)((yyvsp[(5) - (8)].argSpecs) ? (yyvsp[(5) - (8)].argSpecs)->size() : 0),
      (yyvsp[(2) - (8)].signature)->isPrivate() ? "true" : "false", (yylsp[(1) - (8)]).first_line, (yylsp[(1) - (8)]).first_column);
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

  case 19:

/* Line 1455 of yacc.c  */
#line 914 "../src/parser/XQParser.y"
    {
    SequenceType *optionalString =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) SequenceType((ItemType*)&ItemType::ANY_ATOMIC_TYPE, SequenceType::QUESTION_MARK));

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

  case 20:

/* Line 1455 of yacc.c  */
#line 943 "../src/parser/XQParser.y"
    {
  }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 946 "../src/parser/XQParser.y"
    {
    // TBD Check for xsl:version attr - jpcs
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();

    VectorOfASTNodes *pattern = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    pattern->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::SELF, nt, MEMMGR)));

    XQUserFunction::ModeList *modelist = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    modelist->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));

    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    XQUserFunction *func = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, pattern, signature, (yyvsp[(1) - (1)].astNode), MEMMGR));
    func->setModeList(modelist);

    QP->_query->addFunction(func);
  }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 970 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 974 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 33:

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

  case 34:

/* Line 1455 of yacc.c  */
#line 1012 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, signature, 0, MEMMGR));
  }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 1017 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 1022 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 1029 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 1034 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 1039 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 1047 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 1051 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 1057 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 1062 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 47:

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

  case 48:

/* Line 1455 of yacc.c  */
#line 1085 "../src/parser/XQParser.y"
    {    
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, signature, 0, true, MEMMGR));
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1090 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 1097 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1102 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1110 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1114 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1122 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);

    if((yyval.argSpec)->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:param instruction does not have a {}name attribute");
    }

    if((yyval.argSpec)->getType() == 0) {
      (yyval.argSpec)->setType(WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING)), SequenceType::STAR)));
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
#line 1149 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1153 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 1160 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1166 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1171 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1176 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 61:

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

  case 62:

/* Line 1455 of yacc.c  */
#line 1209 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1213 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1220 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1225 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1230 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1235 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 68:

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

  case 69:

/* Line 1455 of yacc.c  */
#line 1264 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1268 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1275 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1280 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1288 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1313 "../src/parser/XQParser.y"
    {
  }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1316 "../src/parser/XQParser.y"
    {
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1319 "../src/parser/XQParser.y"
    {
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1322 "../src/parser/XQParser.y"
    {
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1325 "../src/parser/XQParser.y"
    {
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1328 "../src/parser/XQParser.y"
    {
  }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1331 "../src/parser/XQParser.y"
    {
  }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1334 "../src/parser/XQParser.y"
    {
  }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1337 "../src/parser/XQParser.y"
    {
  }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1340 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1343 "../src/parser/XQParser.y"
    {
  }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1346 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1349 "../src/parser/XQParser.y"
    {
  }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1352 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1355 "../src/parser/XQParser.y"
    {
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1358 "../src/parser/XQParser.y"
    {
  }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1361 "../src/parser/XQParser.y"
    {
  }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1364 "../src/parser/XQParser.y"
    {
  }
    break;

  case 96:

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

  case 97:

/* Line 1455 of yacc.c  */
#line 1386 "../src/parser/XQParser.y"
    {
  }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1389 "../src/parser/XQParser.y"
    {
  }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1395 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (2)].alias)->getName() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:type-alias declaration does not have a {}name attribute");
    }
    if((yyvsp[(1) - (2)].alias)->getType() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:type-alias declaration does not have an {}as attribute");
    }

    QP->_query->addTypeAlias((yyvsp[(1) - (2)].alias));
  }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1409 "../src/parser/XQParser.y"
    {
    (yyval.alias) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTypeAlias(0, 0, MEMMGR));
  }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1413 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].alias)->setURI(uri);
    (yyvsp[(1) - (2)].alias)->setName(name);
    (yyval.alias) = (yyvsp[(1) - (2)].alias);
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1420 "../src/parser/XQParser.y"
    {
    (yyval.alias) = (yyvsp[(1) - (3)].alias);
    (yyval.alias)->setType((yyvsp[(3) - (3)].itemType));
  }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1430 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1435 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1440 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1448 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1456 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1467 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1477 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1481 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1488 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1497 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1501 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1506 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1514 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1518 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1523 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1528 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1557 "../src/parser/XQParser.y"
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

  case 139:

/* Line 1455 of yacc.c  */
#line 1575 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1579 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1584 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1593 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1602 "../src/parser/XQParser.y"
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

      apply->setExpression(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQStep(Node::CHILD, nt, MEMMGR)));
    }
  }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1622 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1626 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1631 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1639 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1644 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1648 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1655 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1659 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1667 "../src/parser/XQParser.y"
    {
    XQCallTemplate *call = (XQCallTemplate*)(yyvsp[(1) - (3)].astNode);
    call->setArguments((yyvsp[(2) - (3)].templateArgs));
    (yyval.astNode) = call;

    if(call->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:call-template instruction does not have a {}name attribute");
    }
  }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1680 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1684 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1694 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1698 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1706 "../src/parser/XQParser.y"
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

  case 160:

/* Line 1455 of yacc.c  */
#line 1724 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1728 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1735 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1740 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1745 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1753 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1759 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1767 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1775 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1782 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(2) - (4)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = (yyvsp[(2) - (4)].astNode);
  }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1796 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1800 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (2)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(2) - (2)].astNode));

    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1814 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1823 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1830 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1834 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1841 "../src/parser/XQParser.y"
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

  case 177:

/* Line 1455 of yacc.c  */
#line 1876 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1880 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1885 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1891 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1900 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1904 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1911 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1915 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1922 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (4)].letTuple)->setExpression(XSLT_VARIABLE_VALUE((yylsp[(1) - (4)]), (yyvsp[(1) - (4)].letTuple)->getExpression(), (yyvsp[(2) - (4)].parenExpr), (yyvsp[(1) - (4)].letTuple)->getVar()->getType()));
    const_cast<ArgumentSpec*>((yyvsp[(1) - (4)].letTuple)->getVar())->setType(0);

    if((yyvsp[(1) - (4)].letTuple)->getExpression() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:variable instruction has both a select attribute and a sequence constructor [err:XTSE0620]");
    }

    if((yyvsp[(1) - (4)].letTuple)->getVarName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:variable instruction does not have a {}name attribute");
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQReturn((yyvsp[(1) - (4)].letTuple), (yyvsp[(4) - (4)].parenExpr), MEMMGR));
  }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1940 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), (XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1944 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1951 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1956 "../src/parser/XQParser.y"
    {
    const_cast<ArgumentSpec*>((yyvsp[(1) - (3)].letTuple)->getVar())->setType((yyvsp[(3) - (3)].sequenceType));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1964 "../src/parser/XQParser.y"
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

  case 191:

/* Line 1455 of yacc.c  */
#line 1982 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1986 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1994 "../src/parser/XQParser.y"
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

  case 194:

/* Line 1455 of yacc.c  */
#line 2016 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 2020 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 2027 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 2035 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 2044 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2052 "../src/parser/XQParser.y"
    {
    XQAttributeConstructor *attr = (XQAttributeConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = attr;

    if(attr->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:attribute instruction does not have a {}name attribute");
    }

    if(attr->namespaceExpr != 0) {
      // Use fn:QName() to assign the correct URI
      VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      args->push_back(attr->namespaceExpr);
      args->push_back(const_cast<ASTNode*>(attr->getName()));
      ASTNode *name = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
          MEMMGR->getPooledString("QName"), args, MEMMGR));
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

  case 200:

/* Line 1455 of yacc.c  */
#line 2090 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2094 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 2101 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 2108 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 2117 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2126 "../src/parser/XQParser.y"
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

  case 206:

/* Line 1455 of yacc.c  */
#line 2153 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 2157 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2164 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2176 "../src/parser/XQParser.y"
    {
    XQElementConstructor *elem = (XQElementConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = elem;

    if(elem->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:element instruction does not have a {}name attribute");
    }

    if(elem->namespaceExpr != 0) {
      // Use fn:QName() to assign the correct URI
      VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      args->push_back(elem->namespaceExpr);
      args->push_back(const_cast<ASTNode*>(elem->getName()));
      ASTNode *name = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
          MEMMGR->getPooledString("QName"), args, MEMMGR));
      elem->setName(name);
      elem->namespaceExpr = 0;
    }

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(2) - (3)].parenExpr)->getChildren();
    elem->setChildren(children);
  }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 2203 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2207 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 2214 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 2224 "../src/parser/XQParser.y"
    {
    XQCopyOf *as = (XQCopyOf*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:copy-of instruction does not have a {}select attribute");
    }
  }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 2236 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 2240 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 2245 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 2254 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    XQCopy *as = (XQCopy*)(yyval.astNode);

    XQContextItem *ci = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQContextItem(MEMMGR));
    as->setExpression(ci);

    as->setChildren((yyvsp[(2) - (3)].parenExpr)->getChildren());
  }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 2267 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 2271 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 2276 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 2285 "../src/parser/XQParser.y"
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

  case 222:

/* Line 1455 of yacc.c  */
#line 2299 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2303 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 2316 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 2321 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 2333 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 2337 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::SELF, nt, MEMMGR));
  }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 2345 "../src/parser/XQParser.y"
    {
    // . intersect id("a")

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR)));
    oargs.push_back((yyvsp[(1) - (1)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Intersect(oargs, MEMMGR));
  }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 2358 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::PARENT, nt, MEMMGR));
  }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 2366 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::ANCESTOR, nt, MEMMGR));
  }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 2379 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2386 "../src/parser/XQParser.y"
    {
//     VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
//     fargs.push_back($3);
//     fargs.push_back($5);

//     $$ = WRAP(@1, new (MEMMGR) FunctionKey(fargs, MEMMGR));

    // TBD key() - jpcs
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 2425 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 2429 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 2433 "../src/parser/XQParser.y"
    {
    // id("a")/foo -> self::foo[parent::node() intersect id("a")]

    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setTypeWildcard();
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    XQStep *step = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQStep(Node::PARENT, nt, MEMMGR));

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(step);
    oargs.push_back((yyvsp[(1) - (3)].astNode));

    Intersect *intersect = WRAP((yylsp[(1) - (3)]), new (MEMMGR) Intersect(oargs, MEMMGR));

    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), intersect, MEMMGR));
  }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 2451 "../src/parser/XQParser.y"
    {
    // id("a")/foo -> self::foo[ancestor::node() intersect id("a")]

    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setTypeWildcard();
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    XQStep *step = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQStep(Node::ANCESTOR, nt, MEMMGR));

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(step);
    oargs.push_back((yyvsp[(1) - (3)].astNode));

    Intersect *intersect = WRAP((yylsp[(1) - (3)]), new (MEMMGR) Intersect(oargs, MEMMGR));

    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), intersect, MEMMGR));
  }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 2469 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(Node::PARENT);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 2479 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(Node::ANCESTOR);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2493 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2501 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2507 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 2513 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 2519 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 2530 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 2534 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 2562 "../src/parser/XQParser.y"
    {
    // TBD Set the language correctly on the context - jpcs
    if(XPath2Utils::equals((yyvsp[(2) - (2)].str),sz1_0)) {
      QP->_lexer->setVersion11(false);
      QP->_query->setVersion11(false);
    }
    else if(XPath2Utils::equals((yyvsp[(2) - (2)].str),sz1_1) || XPath2Utils::equals((yyvsp[(2) - (2)].str),sz3_0)) {
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

  case 257:

/* Line 1455 of yacc.c  */
#line 2582 "../src/parser/XQParser.y"
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

  case 260:

/* Line 1455 of yacc.c  */
#line 2606 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 2620 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 2624 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 2628 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 2632 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 2636 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 2640 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 2646 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 2652 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 2656 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 2660 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 2692 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 2700 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 2705 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 2714 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 2719 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 2728 "../src/parser/XQParser.y"
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
      else if(XPath2Utils::equals(qName.getName(), option_extensions)) {
        if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_TRUE)) {
          QP->_lexer->setEnableExtensions(true);
        }
        else if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_FALSE)) {
          QP->_lexer->setEnableExtensions(false);
        }
        else {
          yyerror((yylsp[(4) - (4)]), "Unknown value for option xqilla:extensions. Should be 'true' or 'false' [err:XQILLA]");
        }
      }
      else {
        yyerror((yylsp[(3) - (4)]), "Unknown option name in the xqilla namespace [err:XQILLA]");
      }
    }
  }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2799 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2807 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2812 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2821 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2826 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 2835 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 2845 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 2849 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2857 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2861 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 299:

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

  case 300:

/* Line 1455 of yacc.c  */
#line 2885 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 301:

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

  case 302:

/* Line 1455 of yacc.c  */
#line 2906 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 2914 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2918 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 2923 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2932 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2936 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 2944 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), &loc);
  }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 2954 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2966 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2971 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2980 "../src/parser/XQParser.y"
    {
    (yyval.signature) = new (MEMMGR) FunctionSignature(MEMMGR);
  }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 2984 "../src/parser/XQParser.y"
    {
    (yyval.signature) = (yyvsp[(1) - (2)].signature);
    (yyval.signature)->annotations.push_back((yyvsp[(2) - (2)].annotation));
  }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 2995 "../src/parser/XQParser.y"
    {
    ASTNode *trueExpr =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                           MEMMGR->getPooledString("true"), 0, MEMMGR));
    (yyval.annotation) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Annotation(0, XQFunction::XMLChFunctionURI, (yyvsp[(1) - (1)].str), trueExpr, MEMMGR));
  }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 3007 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQGlobalVariable((yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode), MEMMGR)));
  }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 3014 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 3018 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 3026 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (7)].signature)->argSpecs = (yyvsp[(5) - (7)].argSpecs);
    (yyvsp[(2) - (7)].signature)->returnType = (yyvsp[(6) - (7)].sequenceType);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), (yyvsp[(2) - (7)].signature), (yyvsp[(7) - (7)].astNode), true, MEMMGR));
  }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 3035 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 3039 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 3046 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 3050 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 3059 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 3067 "../src/parser/XQParser.y"
    {
    ASTNode *trueExpr =
      WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                           MEMMGR->getPooledString("true"), 0, MEMMGR));
    (yyval.annotation) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) Annotation((yyvsp[(2) - (2)].str), trueExpr));
  }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 3074 "../src/parser/XQParser.y"
    {
    (yyval.annotation) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) Annotation((yyvsp[(2) - (5)].str), (yyvsp[(4) - (5)].parenExpr)));
  }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 3081 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.parenExpr)->addItem((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 3086 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (3)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(3) - (3)].astNode));
  }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 3095 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 3100 "../src/parser/XQParser.y"
    {
    ArgumentSpecs* paramList = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 3110 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 3118 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 3126 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 3139 "../src/parser/XQParser.y"
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

  case 350:

/* Line 1455 of yacc.c  */
#line 3177 "../src/parser/XQParser.y"
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

  case 352:

/* Line 1455 of yacc.c  */
#line 3222 "../src/parser/XQParser.y"
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

  case 353:

/* Line 1455 of yacc.c  */
#line 3235 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 3250 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 3257 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 3265 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 3276 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 3280 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 3290 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 3294 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 3304 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 3311 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 3319 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 3323 "../src/parser/XQParser.y"
    {
    ASTNode *literal = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::INTEGER, X("0"), MEMMGR));
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(3) - (5)].str), literal, MEMMGR));
  }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 3332 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 3340 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) CountTuple(0, (yyvsp[(3) - (3)].str), MEMMGR));
  }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 3348 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 3353 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 3361 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 3371 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 3378 "../src/parser/XQParser.y"
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

  case 380:

/* Line 1455 of yacc.c  */
#line 3393 "../src/parser/XQParser.y"
    {
    SequenceType *zero_or_one = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType((ItemType*)&ItemType::ITEM, SequenceType::QUESTION_MARK));

    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAtomize((yyval.astNode), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPromoteUntyped((yyval.astNode), (ItemType*)&ItemType::STRING, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs((yyval.astNode), zero_or_one, MEMMGR));
  }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 3407 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 3411 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 3415 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 3422 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 3431 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 3435 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 3444 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 3452 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 3463 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 3471 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 3482 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR));
  }
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 3489 "../src/parser/XQParser.y"
    {
    XQTypeswitch::Cases::iterator it = (yyvsp[(2) - (2)].caseClauses)->begin();
    for(; it != (yyvsp[(2) - (2)].caseClauses)->end(); ++it) {
      (yyvsp[(1) - (2)].caseClauses)->push_back(*it);
    }

    (yyval.caseClauses) = (yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 3502 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 3506 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 3514 "../src/parser/XQParser.y"
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

  case 398:

/* Line 1455 of yacc.c  */
#line 3532 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses) = new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), 0)));
  }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 3537 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(SequenceTypeUnion, (yylsp[(2) - (3)]));
    (yyvsp[(1) - (3)].caseClauses)->push_back(WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(1) - (3)].caseClauses)->back()->getQName(), (yyvsp[(3) - (3)].sequenceType), 0)));
    (yyval.caseClauses) = (yyvsp[(1) - (3)].caseClauses);
  }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 3546 "../src/parser/XQParser.y"
    {
    (yyval.str) = 0;
  }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 3550 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 3558 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 3566 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OR) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 3580 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::AND) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 3599 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 3603 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 3606 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 3607 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 3611 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 3615 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 3619 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 3623 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3627 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 3631 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 3635 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 3639 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 3643 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 3647 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 3651 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 3655 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 3664 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3668 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 3677 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionCall(0, BuiltInModules::core.uri, MEMMGR->getPooledString("to"), args, MEMMGR));
  }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 3689 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 3693 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 3702 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 3706 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 3710 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 3714 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 3723 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3727 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 3736 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 3740 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 3749 "../src/parser/XQParser.y"
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

  case 445:

/* Line 1455 of yacc.c  */
#line 3771 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 3781 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 3790 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 3799 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 3805 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 3826 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 3830 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 3834 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 3842 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 3849 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 3862 "../src/parser/XQParser.y"
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

  case 466:

/* Line 1455 of yacc.c  */
#line 3883 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 3892 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 3898 "../src/parser/XQParser.y"
    {
    XQNav *nav = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQNav(MEMMGR));

    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (2)]), new (MEMMGR)
      SequenceType(WRAP((yylsp[(1) - (2)]), new (MEMMGR) ItemType(ItemType::TEST_DOCUMENT))));

    nav->addStep(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR)));

    NodeTest *step = new (MEMMGR) NodeTest();
    step->setTypeWildcard();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    nav->addStep(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::DESCENDANT_OR_SELF, step, MEMMGR)));

    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 3923 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ItemType(ItemType::TEST_DOCUMENT))));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 3937 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 3943 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));

    NodeTest *step = new (MEMMGR) NodeTest();
    step->setTypeWildcard();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    nav->addStep(WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQStep(Node::DESCENDANT_OR_SELF, step, MEMMGR)));
    nav->addStep((yyvsp[(3) - (3)].astNode));

    (yyval.astNode) = nav;
  }
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 3965 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 3975 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 3982 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 3991 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      switch((yyvsp[(1) - (2)].axis)) {
      case Node::NAMESPACE: (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::namespace_string); break;
      case Node::ATTRIBUTE: (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string); break;
      default: (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string); break;
      }
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis),(yyvsp[(2) - (2)].nodeTest),MEMMGR));
  }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 4014 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::CHILD;
  }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 4018 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::DESCENDANT;
  }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 4022 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ATTRIBUTE;
  }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 4026 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::SELF;
  }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 4030 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::DESCENDANT_OR_SELF;
  }
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 4034 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::FOLLOWING_SIBLING;
  }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 4038 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::FOLLOWING;
  }
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 4042 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::NAMESPACE;
  }
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 4050 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 4058 "../src/parser/XQParser.y"
    {
    Node::Axis axis = Node::CHILD;
    ItemType *itemtype = (yyvsp[(1) - (1)].nodeTest)->getItemType();
    if(itemtype != 0 && itemtype->getItemTestType() == ItemType::TEST_ATTRIBUTE) {
      axis = Node::ATTRIBUTE;
    }
    else if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(axis, (yyvsp[(1) - (1)].nodeTest), MEMMGR));
  }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 4075 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 4092 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PARENT;
  }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 4096 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ANCESTOR;
  }
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 4100 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PRECEDING_SIBLING;
  }
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 4104 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PRECEDING;
  }
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 4108 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ANCESTOR_OR_SELF;
  }
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 4116 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::PARENT, step, MEMMGR));
  }
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 4128 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 4138 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 4150 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 4157 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 4164 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 4177 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 4206 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 529:

/* Line 1455 of yacc.c  */
#line 4217 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 4221 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 4229 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 4237 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 4247 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 4257 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 4261 "../src/parser/XQParser.y"
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

  case 536:

/* Line 1455 of yacc.c  */
#line 4284 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 4289 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 4300 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 4309 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 4313 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 4326 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 546:

/* Line 1455 of yacc.c  */
#line 4332 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 4345 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 550:

/* Line 1455 of yacc.c  */
#line 4349 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 551:

/* Line 1455 of yacc.c  */
#line 4358 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 4374 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 4378 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 4385 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 4389 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 4399 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 4403 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 4408 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 4416 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 4420 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 4424 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 4435 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 4439 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 4444 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 4452 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 4456 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 4460 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 4475 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 4479 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 4484 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 4489 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 4494 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
    }
  }
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 4505 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 4514 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 4523 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(3) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor(WRAP((yylsp[(2) - (3)]), new (MEMMGR)
          XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (3)].str), MEMMGR)), value, MEMMGR));
  }
    break;

  case 580:

/* Line 1455 of yacc.c  */
#line 4534 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 588:

/* Line 1455 of yacc.c  */
#line 4559 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 4567 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 4575 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 4579 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 4587 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 4591 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 4600 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 4607 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 4611 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 4621 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQNamespaceConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 4629 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 4637 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 4645 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4652 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 4660 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 4667 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 4671 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 4679 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType((yyvsp[(1) - (2)].itemType), (yyvsp[(2) - (2)].occurrence)));
  }
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 4686 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 4690 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 4698 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(WRAP((yyloc), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING)), SequenceType::STAR));
  }
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 4702 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 4712 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType((yyvsp[(1) - (2)].itemType), (yyvsp[(2) - (2)].occurrence)));
  }
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 4716 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 4725 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 4727 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 4729 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 4731 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 4737 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING));
  }
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 4749 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ItemType(ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName)));
  }
    break;

  case 632:

/* Line 1455 of yacc.c  */
#line 4779 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_NODE));
  }
    break;

  case 633:

/* Line 1455 of yacc.c  */
#line 4787 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_DOCUMENT));
  }
    break;

  case 634:

/* Line 1455 of yacc.c  */
#line 4791 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(ItemType::TEST_DOCUMENT);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.itemType)->setLocationInfo(&loc);
  }
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 4798 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(ItemType::TEST_SCHEMA_DOCUMENT);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.itemType)->setLocationInfo(&loc);
  }
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 4809 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_TEXT));
  }
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 4817 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_COMMENT));
  }
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 4825 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(NamespaceNodeTest, (yylsp[(1) - (3)]));
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_NAMESPACE));
  }
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 4834 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_PI));
  }
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 4838 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR)));
  }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4842 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR)));
  }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4850 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE));
  }
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 4854 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 4858 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName)));
  }
    break;

  case 646:

/* Line 1455 of yacc.c  */
#line 4867 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 4875 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 4888 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT));
  }
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 4892 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 651:

/* Line 1455 of yacc.c  */
#line 4896 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName)));
  }
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 4900 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName)));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 654:

/* Line 1455 of yacc.c  */
#line 4910 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 4918 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 4938 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 4950 "../src/parser/XQParser.y"
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

  case 662:

/* Line 1455 of yacc.c  */
#line 4965 "../src/parser/XQParser.y"
    {
}
    break;

  case 663:

/* Line 1455 of yacc.c  */
#line 4968 "../src/parser/XQParser.y"
    {
}
    break;

  case 664:

/* Line 1455 of yacc.c  */
#line 4974 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 665:

/* Line 1455 of yacc.c  */
#line 4978 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 666:

/* Line 1455 of yacc.c  */
#line 4988 "../src/parser/XQParser.y"
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

  case 668:

/* Line 1455 of yacc.c  */
#line 5005 "../src/parser/XQParser.y"
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

  case 670:

/* Line 1455 of yacc.c  */
#line 5021 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 672:

/* Line 1455 of yacc.c  */
#line 5031 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 675:

/* Line 1455 of yacc.c  */
#line 5041 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 676:

/* Line 1455 of yacc.c  */
#line 5050 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 677:

/* Line 1455 of yacc.c  */
#line 5055 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 679:

/* Line 1455 of yacc.c  */
#line 5065 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 680:

/* Line 1455 of yacc.c  */
#line 5069 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 681:

/* Line 1455 of yacc.c  */
#line 5077 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 682:

/* Line 1455 of yacc.c  */
#line 5082 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 5091 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 5095 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 5099 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 5103 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 5107 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 5111 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 5121 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 691:

/* Line 1455 of yacc.c  */
#line 5132 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 692:

/* Line 1455 of yacc.c  */
#line 5138 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 693:

/* Line 1455 of yacc.c  */
#line 5144 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 5150 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 5165 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 696:

/* Line 1455 of yacc.c  */
#line 5169 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 697:

/* Line 1455 of yacc.c  */
#line 5173 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 698:

/* Line 1455 of yacc.c  */
#line 5177 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 699:

/* Line 1455 of yacc.c  */
#line 5181 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 5185 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 5189 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 5193 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 703:

/* Line 1455 of yacc.c  */
#line 5201 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 5205 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 5209 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 5217 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 707:

/* Line 1455 of yacc.c  */
#line 5221 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 718:

/* Line 1455 of yacc.c  */
#line 5257 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_INSENSITIVE);
  }
    break;

  case 719:

/* Line 1455 of yacc.c  */
#line 5261 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_SENSITIVE);
  }
    break;

  case 720:

/* Line 1455 of yacc.c  */
#line 5265 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::LOWERCASE);
  }
    break;

  case 721:

/* Line 1455 of yacc.c  */
#line 5269 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::UPPERCASE);
  }
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 5278 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 5282 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 724:

/* Line 1455 of yacc.c  */
#line 5290 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 5294 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5304 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 5308 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 5312 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 5316 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5320 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 5327 "../src/parser/XQParser.y"
    {
  }
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 5330 "../src/parser/XQParser.y"
    {
  }
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 5337 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 5341 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 735:

/* Line 1455 of yacc.c  */
#line 5345 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 5349 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 5359 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 5363 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 739:

/* Line 1455 of yacc.c  */
#line 5367 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 740:

/* Line 1455 of yacc.c  */
#line 5374 "../src/parser/XQParser.y"
    {
  }
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 5377 "../src/parser/XQParser.y"
    {
  }
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 5385 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5389 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5396 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5400 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 5408 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 5412 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 5420 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 5428 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 5432 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 5440 "../src/parser/XQParser.y"
    {
}
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 5447 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 5455 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 5460 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 5465 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 5477 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 5481 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 5485 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 759:

/* Line 1455 of yacc.c  */
#line 5489 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 760:

/* Line 1455 of yacc.c  */
#line 5493 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 763:

/* Line 1455 of yacc.c  */
#line 5504 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 5515 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 5519 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 5529 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5537 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 5544 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 5549 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5557 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 5566 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::INTEGER, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5574 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::DECIMAL, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5582 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::DOUBLE, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5591 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5598 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5607 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5619 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, signature, (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5624 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(5) - (7)].argSpecs), (yyvsp[(6) - (7)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, signature, (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5629 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5635 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(8) - (10)].argSpecs), (yyvsp[(9) - (10)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), signature, (yyvsp[(10) - (10)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5641 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), signature, (yyvsp[(6) - (6)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 5647 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(6) - (8)].argSpecs), (yyvsp[(7) - (8)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 5656 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 5660 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 5668 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5672 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5679 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5684 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5692 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5697 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5706 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5710 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5714 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5722 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5726 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5734 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5738 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5742 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5746 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5754 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5758 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 5762 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5770 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5775 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5785 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 5802 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 811:

/* Line 1455 of yacc.c  */
#line 5810 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(2) - (4)].argSpecs), (yyvsp[(3) - (4)].sequenceType), MEMMGR);
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, signature, (yyvsp[(4) - (4)].astNode), false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 5821 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5826 "../src/parser/XQParser.y"
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

  case 816:

/* Line 1455 of yacc.c  */
#line 5854 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ItemType(ItemType::TEST_FUNCTION));
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5866 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(new (MEMMGR) FunctionSignature(0, (yyvsp[(6) - (6)].sequenceType), MEMMGR), 0));
  }
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 5870 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ItemType(new (MEMMGR) FunctionSignature((yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].sequenceType), MEMMGR), 0));
  }
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 5877 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    (yyval.argSpecs)->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, (yyvsp[(1) - (1)].sequenceType), MEMMGR)));
  }
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 5882 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
    (yyval.argSpecs)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec(0, (yyvsp[(3) - (3)].sequenceType), MEMMGR)));
  }
    break;

  case 823:

/* Line 1455 of yacc.c  */
#line 5891 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 5904 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType((yyvsp[(3) - (4)].tupleMembers), 0));
  }
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 5908 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_TUPLE));
  }
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 5915 "../src/parser/XQParser.y"
    {
    (yyval.tupleMembers) = new (MEMMGR) TupleMembers(true, MEMMGR);
    (yyvsp[(1) - (1)].argSpec)->setIndex(0);
    (yyval.tupleMembers)->add(0, (yyvsp[(1) - (1)].argSpec));
  }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5921 "../src/parser/XQParser.y"
    {
    (yyval.tupleMembers) = (yyvsp[(1) - (3)].tupleMembers);
    (yyvsp[(3) - (3)].argSpec)->setIndex((yyval.tupleMembers)->size());
    (yyval.tupleMembers)->add(0, (yyvsp[(3) - (3)].argSpec));
  }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5931 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) ArgumentSpec((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].sequenceType), MEMMGR));
  }
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 5939 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(WRAP((yylsp[(3) - (6)]), new (MEMMGR)
          SequenceType((yyvsp[(3) - (6)].itemType), SequenceType::EXACTLY_ONE)), (yyvsp[(5) - (6)].sequenceType), 0));
  }
    break;

  case 832:

/* Line 1455 of yacc.c  */
#line 5944 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_MAP));
  }
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 5954 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tuples = setLastAncestor((yyvsp[(3) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the tuple constructor expression
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTupleConstructor(tuples, MEMMGR));
  }
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 5962 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTupleConstructor(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)), MEMMGR));
  }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 5970 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 838:

/* Line 1455 of yacc.c  */
#line 5978 "../src/parser/XQParser.y"
    {
    // TBD LetTuple doesn't give us the correct in-scope vars for the initializer - jpcs
    (yyval.tupleNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) LetTuple(0, (yyvsp[(1) - (4)].str), WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQTreatAs((yyvsp[(4) - (4)].astNode), (yyvsp[(2) - (4)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 5988 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTupleMember((yyvsp[(3) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQMap((yyvsp[(1) - (3)].astNode), (yyval.astNode), MEMMGR));
  }
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 5996 "../src/parser/XQParser.y"
    {
    QP->_query->addTypeAlias(WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeAlias((yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].itemType), MEMMGR)));
  }
    break;



/* Line 1455 of yacc.c  */
#line 12233 "../src/parser/XQParser.cpp"
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
#line 6031 "../src/parser/XQParser.y"


}  // namespace XQParser


