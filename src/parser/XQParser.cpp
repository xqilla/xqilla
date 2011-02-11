
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
     _INTEGER_LITERAL_ = 307,
     _DECIMAL_LITERAL_ = 308,
     _DOUBLE_LITERAL_ = 309,
     _ATTRIBUTE_ = 310,
     _COMMENT_ = 311,
     _DOCUMENT_NODE_ = 312,
     _NAMESPACE_NODE_ = 313,
     _NODE_ = 314,
     _PROCESSING_INSTRUCTION_ = 315,
     _SCHEMA_ATTRIBUTE_ = 316,
     _SCHEMA_ELEMENT_ = 317,
     _TEXT_ = 318,
     _EMPTY_SEQUENCE_ = 319,
     _BOUNDARY_SPACE_ = 320,
     _FT_OPTION_ = 321,
     _BASE_URI_ = 322,
     _LAX_ = 323,
     _STRICT_ = 324,
     _IDIV_ = 325,
     _CHILD_ = 326,
     _DESCENDANT_ = 327,
     _SELF_ = 328,
     _DESCENDANT_OR_SELF_ = 329,
     _FOLLOWING_SIBLING_ = 330,
     _FOLLOWING_ = 331,
     _PARENT_ = 332,
     _ANCESTOR_ = 333,
     _PRECEDING_SIBLING_ = 334,
     _PRECEDING_ = 335,
     _ANCESTOR_OR_SELF_ = 336,
     _DOCUMENT_ = 337,
     _NOT_ = 338,
     _USING_ = 339,
     _NO_ = 340,
     _SENSITIVE_ = 341,
     _INSENSITIVE_ = 342,
     _DIACRITICS_ = 343,
     _WITHOUT_ = 344,
     _WITHOUT_C_ = 345,
     _STEMMING_ = 346,
     _THESAURUS_ = 347,
     _STOP_ = 348,
     _WILDCARDS_ = 349,
     _ENTIRE_ = 350,
     _CONTENT_ = 351,
     _WORD_ = 352,
     _TYPE_ = 353,
     _START_ = 354,
     _END_ = 355,
     _MOST_ = 356,
     _SKIP_ = 357,
     _COPY_ = 358,
     _VALUE_ = 359,
     _WHITESPACE_ = 360,
     _PI_CONTENT_ = 361,
     _XML_COMMENT_CONTENT_ = 362,
     _EQ_ = 363,
     _NE_ = 364,
     _LT_ = 365,
     _LE_ = 366,
     _GT_ = 367,
     _GE_ = 368,
     _AT_ = 369,
     _QUOT_ATTR_CONTENT_ = 370,
     _APOS_ATTR_CONTENT_ = 371,
     _WHITESPACE_ELEMENT_CONTENT_ = 372,
     _ELEMENT_CONTENT_ = 373,
     _AT_LM_ = 374,
     _ORDERED_ = 375,
     _UNORDERED_ = 376,
     _QNAME_ = 377,
     _XMLNS_QNAME_ = 378,
     _CONSTR_QNAME_ = 379,
     _STRING_LITERAL_ = 380,
     _VARIABLE_ = 381,
     _NCNAME_COLON_STAR_ = 382,
     _STAR_COLON_NCNAME_ = 383,
     _PI_TARGET_ = 384,
     _PRAGMA_CONTENT_ = 385,
     _RETURN_ = 386,
     _FOR_ = 387,
     _IN_ = 388,
     _LET_ = 389,
     _WHERE_ = 390,
     _COUNT_ = 391,
     _BY_ = 392,
     _ORDER_ = 393,
     _STABLE_ = 394,
     _ASCENDING_ = 395,
     _DESCENDING_ = 396,
     _EMPTY_ = 397,
     _GREATEST_ = 398,
     _LEAST_ = 399,
     _COLLATION_ = 400,
     _SOME_ = 401,
     _EVERY_ = 402,
     _SATISFIES_ = 403,
     _TYPESWITCH_ = 404,
     _CASE_ = 405,
     _CASE_S_ = 406,
     _AS_ = 407,
     _IF_ = 408,
     _THEN_ = 409,
     _ELSE_ = 410,
     _OR_ = 411,
     _AND_ = 412,
     _INSTANCE_ = 413,
     _OF_ = 414,
     _CASTABLE_ = 415,
     _TO_ = 416,
     _DIV_ = 417,
     _MOD_ = 418,
     _UNION_ = 419,
     _INTERSECT_ = 420,
     _EXCEPT_ = 421,
     _VALIDATE_ = 422,
     _CAST_ = 423,
     _TREAT_ = 424,
     _IS_ = 425,
     _PRESERVE_ = 426,
     _STRIP_ = 427,
     _NAMESPACE_ = 428,
     _ITEM_ = 429,
     _EXTERNAL_ = 430,
     _ENCODING_ = 431,
     _NO_PRESERVE_ = 432,
     _INHERIT_ = 433,
     _NO_INHERIT_ = 434,
     _DECLARE_ = 435,
     _CONSTRUCTION_ = 436,
     _ORDERING_ = 437,
     _DEFAULT_ = 438,
     _COPY_NAMESPACES_ = 439,
     _OPTION_ = 440,
     _XQUERY_ = 441,
     _VERSION_ = 442,
     _IMPORT_ = 443,
     _SCHEMA_ = 444,
     _MODULE_ = 445,
     _ELEMENT_ = 446,
     _FUNCTION_ = 447,
     _FUNCTION_EXT_ = 448,
     _SCORE_ = 449,
     _CONTAINS_ = 450,
     _WEIGHT_ = 451,
     _WINDOW_ = 452,
     _DISTANCE_ = 453,
     _OCCURS_ = 454,
     _TIMES_ = 455,
     _SAME_ = 456,
     _DIFFERENT_ = 457,
     _LOWERCASE_ = 458,
     _UPPERCASE_ = 459,
     _RELATIONSHIP_ = 460,
     _LEVELS_ = 461,
     _LANGUAGE_ = 462,
     _ANY_ = 463,
     _ALL_ = 464,
     _PHRASE_ = 465,
     _EXACTLY_ = 466,
     _FROM_ = 467,
     _WORDS_ = 468,
     _SENTENCES_ = 469,
     _PARAGRAPHS_ = 470,
     _SENTENCE_ = 471,
     _PARAGRAPH_ = 472,
     _REPLACE_ = 473,
     _MODIFY_ = 474,
     _FIRST_ = 475,
     _INSERT_ = 476,
     _BEFORE_ = 477,
     _AFTER_ = 478,
     _REVALIDATION_ = 479,
     _WITH_ = 480,
     _NODES_ = 481,
     _RENAME_ = 482,
     _LAST_ = 483,
     _DELETE_ = 484,
     _INTO_ = 485,
     _UPDATING_ = 486,
     _ID_ = 487,
     _KEY_ = 488,
     _TEMPLATE_ = 489,
     _MATCHES_ = 490,
     _TUPLE_ = 491,
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
     _TYPE_ALIAS_ = 504,
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
     _XSLT_TYPE_ALIAS_ = 535,
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
#define _INTEGER_LITERAL_ 307
#define _DECIMAL_LITERAL_ 308
#define _DOUBLE_LITERAL_ 309
#define _ATTRIBUTE_ 310
#define _COMMENT_ 311
#define _DOCUMENT_NODE_ 312
#define _NAMESPACE_NODE_ 313
#define _NODE_ 314
#define _PROCESSING_INSTRUCTION_ 315
#define _SCHEMA_ATTRIBUTE_ 316
#define _SCHEMA_ELEMENT_ 317
#define _TEXT_ 318
#define _EMPTY_SEQUENCE_ 319
#define _BOUNDARY_SPACE_ 320
#define _FT_OPTION_ 321
#define _BASE_URI_ 322
#define _LAX_ 323
#define _STRICT_ 324
#define _IDIV_ 325
#define _CHILD_ 326
#define _DESCENDANT_ 327
#define _SELF_ 328
#define _DESCENDANT_OR_SELF_ 329
#define _FOLLOWING_SIBLING_ 330
#define _FOLLOWING_ 331
#define _PARENT_ 332
#define _ANCESTOR_ 333
#define _PRECEDING_SIBLING_ 334
#define _PRECEDING_ 335
#define _ANCESTOR_OR_SELF_ 336
#define _DOCUMENT_ 337
#define _NOT_ 338
#define _USING_ 339
#define _NO_ 340
#define _SENSITIVE_ 341
#define _INSENSITIVE_ 342
#define _DIACRITICS_ 343
#define _WITHOUT_ 344
#define _WITHOUT_C_ 345
#define _STEMMING_ 346
#define _THESAURUS_ 347
#define _STOP_ 348
#define _WILDCARDS_ 349
#define _ENTIRE_ 350
#define _CONTENT_ 351
#define _WORD_ 352
#define _TYPE_ 353
#define _START_ 354
#define _END_ 355
#define _MOST_ 356
#define _SKIP_ 357
#define _COPY_ 358
#define _VALUE_ 359
#define _WHITESPACE_ 360
#define _PI_CONTENT_ 361
#define _XML_COMMENT_CONTENT_ 362
#define _EQ_ 363
#define _NE_ 364
#define _LT_ 365
#define _LE_ 366
#define _GT_ 367
#define _GE_ 368
#define _AT_ 369
#define _QUOT_ATTR_CONTENT_ 370
#define _APOS_ATTR_CONTENT_ 371
#define _WHITESPACE_ELEMENT_CONTENT_ 372
#define _ELEMENT_CONTENT_ 373
#define _AT_LM_ 374
#define _ORDERED_ 375
#define _UNORDERED_ 376
#define _QNAME_ 377
#define _XMLNS_QNAME_ 378
#define _CONSTR_QNAME_ 379
#define _STRING_LITERAL_ 380
#define _VARIABLE_ 381
#define _NCNAME_COLON_STAR_ 382
#define _STAR_COLON_NCNAME_ 383
#define _PI_TARGET_ 384
#define _PRAGMA_CONTENT_ 385
#define _RETURN_ 386
#define _FOR_ 387
#define _IN_ 388
#define _LET_ 389
#define _WHERE_ 390
#define _COUNT_ 391
#define _BY_ 392
#define _ORDER_ 393
#define _STABLE_ 394
#define _ASCENDING_ 395
#define _DESCENDING_ 396
#define _EMPTY_ 397
#define _GREATEST_ 398
#define _LEAST_ 399
#define _COLLATION_ 400
#define _SOME_ 401
#define _EVERY_ 402
#define _SATISFIES_ 403
#define _TYPESWITCH_ 404
#define _CASE_ 405
#define _CASE_S_ 406
#define _AS_ 407
#define _IF_ 408
#define _THEN_ 409
#define _ELSE_ 410
#define _OR_ 411
#define _AND_ 412
#define _INSTANCE_ 413
#define _OF_ 414
#define _CASTABLE_ 415
#define _TO_ 416
#define _DIV_ 417
#define _MOD_ 418
#define _UNION_ 419
#define _INTERSECT_ 420
#define _EXCEPT_ 421
#define _VALIDATE_ 422
#define _CAST_ 423
#define _TREAT_ 424
#define _IS_ 425
#define _PRESERVE_ 426
#define _STRIP_ 427
#define _NAMESPACE_ 428
#define _ITEM_ 429
#define _EXTERNAL_ 430
#define _ENCODING_ 431
#define _NO_PRESERVE_ 432
#define _INHERIT_ 433
#define _NO_INHERIT_ 434
#define _DECLARE_ 435
#define _CONSTRUCTION_ 436
#define _ORDERING_ 437
#define _DEFAULT_ 438
#define _COPY_NAMESPACES_ 439
#define _OPTION_ 440
#define _XQUERY_ 441
#define _VERSION_ 442
#define _IMPORT_ 443
#define _SCHEMA_ 444
#define _MODULE_ 445
#define _ELEMENT_ 446
#define _FUNCTION_ 447
#define _FUNCTION_EXT_ 448
#define _SCORE_ 449
#define _CONTAINS_ 450
#define _WEIGHT_ 451
#define _WINDOW_ 452
#define _DISTANCE_ 453
#define _OCCURS_ 454
#define _TIMES_ 455
#define _SAME_ 456
#define _DIFFERENT_ 457
#define _LOWERCASE_ 458
#define _UPPERCASE_ 459
#define _RELATIONSHIP_ 460
#define _LEVELS_ 461
#define _LANGUAGE_ 462
#define _ANY_ 463
#define _ALL_ 464
#define _PHRASE_ 465
#define _EXACTLY_ 466
#define _FROM_ 467
#define _WORDS_ 468
#define _SENTENCES_ 469
#define _PARAGRAPHS_ 470
#define _SENTENCE_ 471
#define _PARAGRAPH_ 472
#define _REPLACE_ 473
#define _MODIFY_ 474
#define _FIRST_ 475
#define _INSERT_ 476
#define _BEFORE_ 477
#define _AFTER_ 478
#define _REVALIDATION_ 479
#define _WITH_ 480
#define _NODES_ 481
#define _RENAME_ 482
#define _LAST_ 483
#define _DELETE_ 484
#define _INTO_ 485
#define _UPDATING_ 486
#define _ID_ 487
#define _KEY_ 488
#define _TEMPLATE_ 489
#define _MATCHES_ 490
#define _TUPLE_ 491
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
#define _TYPE_ALIAS_ 504
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
#define _XSLT_TYPE_ALIAS_ 535
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
#line 1108 "../src/parser/XQParser.cpp"

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
#define YYLAST   7863

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  327
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  357
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1013
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1660

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
     977,   984,   987,   989,   993,   997,  1005,  1007,  1009,  1012,
    1016,  1018,  1020,  1021,  1024,  1027,  1030,  1032,  1034,  1036,
    1038,  1039,  1042,  1046,  1048,  1052,  1056,  1058,  1062,  1064,
    1066,  1068,  1070,  1072,  1074,  1076,  1078,  1080,  1082,  1084,
    1086,  1088,  1092,  1094,  1097,  1100,  1102,  1104,  1106,  1108,
    1110,  1113,  1117,  1119,  1127,  1128,  1132,  1133,  1137,  1140,
    1144,  1146,  1152,  1158,  1161,  1165,  1169,  1174,  1178,  1180,
    1184,  1190,  1192,  1193,  1195,  1197,  1198,  1201,  1204,  1209,
    1214,  1218,  1220,  1226,  1233,  1236,  1238,  1244,  1248,  1252,
    1256,  1260,  1261,  1265,  1274,  1278,  1280,  1284,  1286,  1290,
    1294,  1295,  1300,  1304,  1308,  1312,  1316,  1320,  1324,  1328,
    1332,  1336,  1340,  1344,  1348,  1350,  1355,  1361,  1363,  1367,
    1369,  1373,  1377,  1379,  1383,  1387,  1391,  1395,  1397,  1401,
    1405,  1407,  1411,  1415,  1417,  1422,  1424,  1429,  1431,  1436,
    1438,  1443,  1445,  1448,  1451,  1453,  1455,  1457,  1459,  1464,
    1470,  1476,  1480,  1485,  1487,  1490,  1495,  1497,  1500,  1502,
    1505,  1508,  1510,  1512,  1516,  1520,  1522,  1524,  1526,  1528,
    1530,  1532,  1537,  1539,  1544,  1547,  1549,  1552,  1555,  1558,
    1561,  1564,  1567,  1570,  1573,  1576,  1578,  1581,  1583,  1586,
    1589,  1592,  1595,  1598,  1600,  1602,  1604,  1606,  1608,  1610,
    1612,  1614,  1616,  1621,  1623,  1625,  1627,  1629,  1631,  1633,
    1635,  1637,  1639,  1641,  1643,  1645,  1647,  1649,  1651,  1654,
    1656,  1660,  1663,  1665,  1670,  1675,  1679,  1684,  1688,  1690,
    1692,  1694,  1696,  1698,  1700,  1702,  1704,  1710,  1721,  1723,
    1725,  1726,  1734,  1742,  1743,  1745,  1749,  1753,  1757,  1761,
    1762,  1765,  1768,  1769,  1772,  1775,  1776,  1779,  1782,  1783,
    1786,  1789,  1790,  1793,  1796,  1799,  1802,  1806,  1807,  1809,
    1813,  1815,  1818,  1820,  1822,  1824,  1826,  1828,  1830,  1832,
    1837,  1841,  1843,  1847,  1850,  1854,  1858,  1860,  1864,  1868,
    1873,  1878,  1882,  1884,  1888,  1891,  1895,  1898,  1899,  1901,
    1902,  1905,  1908,  1912,  1913,  1915,  1917,  1919,  1921,  1925,
    1927,  1929,  1931,  1933,  1935,  1937,  1939,  1941,  1943,  1945,
    1947,  1949,  1951,  1953,  1957,  1961,  1966,  1971,  1975,  1979,
    1983,  1987,  1992,  1997,  2001,  2006,  2013,  2015,  2017,  2022,
    2024,  2028,  2033,  2040,  2048,  2050,  2052,  2057,  2059,  2061,
    2063,  2065,  2067,  2071,  2072,  2075,  2076,  2079,  2083,  2085,
    2089,  2091,  2096,  2098,  2101,  2103,  2105,  2108,  2111,  2115,
    2117,  2120,  2125,  2129,  2134,  2135,  2137,  2140,  2142,  2145,
    2147,  2148,  2152,  2155,  2159,  2163,  2168,  2170,  2174,  2178,
    2181,  2184,  2187,  2190,  2193,  2195,  2197,  2199,  2201,  2203,
    2206,  2210,  2212,  2214,  2216,  2218,  2220,  2222,  2224,  2226,
    2229,  2232,  2234,  2236,  2239,  2242,  2244,  2247,  2250,  2253,
    2259,  2265,  2268,  2269,  2273,  2276,  2281,  2286,  2293,  2298,
    2302,  2307,  2308,  2311,  2314,  2318,  2320,  2324,  2327,  2330,
    2333,  2335,  2338,  2342,  2346,  2350,  2354,  2358,  2365,  2372,
    2377,  2382,  2387,  2390,  2393,  2396,  2399,  2402,  2410,  2416,
    2422,  2429,  2433,  2435,  2440,  2442,  2444,  2446,  2448,  2450,
    2452,  2458,  2466,  2475,  2486,  2493,  2502,  2503,  2506,  2509,
    2513,  2514,  2517,  2519,  2523,  2525,  2527,  2529,  2533,  2541,
    2545,  2553,  2559,  2569,  2571,  2573,  2575,  2577,  2581,  2587,
    2589,  2591,  2595,  2600,  2604,  2609,  2611,  2613,  2618,  2624,
    2631,  2633,  2637,  2641,  2643,  2648,  2652,  2654,  2658,  2661,
    2663,  2668,  2672,  2674,  2678,  2683,  2685,  2689,  2695,  2697,
    2699,  2701,  2703,  2705,  2707,  2709,  2711,  2713,  2715,  2717,
    2719,  2721,  2723,  2725,  2727,  2729,  2731,  2733,  2735,  2737,
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
    3039,  3041,  3043,  3045
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     328,     0,    -1,     3,   329,   465,    -1,     4,   330,   424,
      -1,     6,   330,   331,    -1,     5,   338,    -1,     7,   334,
      -1,     8,   333,    -1,    -1,    -1,   180,   458,   455,   683,
     456,   461,   464,   332,    -1,    -1,   434,    -1,   458,   456,
     461,    -1,   335,   336,    -1,   190,   173,   652,    37,   603,
     434,    -1,    -1,   336,   337,    -1,   180,   458,   455,   683,
     456,   461,   464,   434,    -1,   339,    -1,   251,   340,   341,
     250,    -1,   363,    -1,    -1,   340,   281,    -1,   340,   290,
      -1,    -1,   341,   342,    -1,   341,   346,    -1,   341,   351,
      -1,   341,   353,    -1,   341,   355,    -1,   341,   361,    -1,
     341,   359,    -1,   343,   348,   366,   250,    -1,   252,    -1,
     343,   304,   414,    -1,   343,   283,    -1,   343,   307,   345,
      -1,   343,   282,   344,    -1,   343,   305,   581,    -1,    -1,
     344,   122,    -1,   344,   321,    -1,   344,   322,    -1,    52,
      -1,    53,    -1,    54,    -1,   347,   348,   366,   250,    -1,
     260,    -1,   347,   283,    -1,   347,   305,   581,    -1,   347,
     295,    -1,    -1,   348,   349,    -1,   350,   366,   250,    -1,
     259,    -1,   350,   283,    -1,   350,   306,   466,    -1,   350,
     305,   581,    -1,   350,   294,    -1,   350,   293,    -1,   352,
     366,   250,    -1,   259,    -1,   352,   283,    -1,   352,   306,
     466,    -1,   352,   305,   581,    -1,   352,   294,    -1,   352,
     293,    -1,   354,   366,   250,    -1,   265,    -1,   354,   283,
      -1,   354,   306,   466,    -1,   354,   305,   581,    -1,   356,
     250,    -1,   278,    -1,   356,   283,    -1,   356,   313,   357,
      -1,   356,   298,    -1,   356,   314,   358,    -1,   356,   284,
      -1,   356,   285,    -1,   356,   286,    -1,   356,   299,    -1,
     356,   300,    -1,   356,   301,    -1,   356,   287,    -1,   356,
     288,    -1,   356,   302,    -1,   356,   289,    -1,   356,   303,
      -1,   356,   315,   358,    -1,   356,   281,    -1,   324,    -1,
     325,    -1,   326,    -1,    63,    -1,   122,    -1,   122,    -1,
     358,   122,    -1,   360,   250,    -1,   280,    -1,   360,   283,
      -1,   360,   305,   583,    -1,   362,   250,    -1,   279,    -1,
     279,   291,    -1,   279,   292,    -1,   279,   291,   292,    -1,
     279,   292,   291,    -1,   316,   364,   366,   250,    -1,    -1,
     364,   318,   365,    -1,   364,   317,    -1,    -1,   365,   464,
      -1,   365,   115,    -1,    -1,   366,   371,    -1,   366,   363,
      -1,   366,   367,    -1,   368,    -1,   370,    -1,   372,    -1,
     376,    -1,   381,    -1,   385,    -1,   383,    -1,   394,    -1,
     396,    -1,   398,    -1,   400,    -1,   402,    -1,   404,    -1,
     406,    -1,   390,    -1,   408,    -1,   410,    -1,   412,    -1,
     369,   366,   250,    -1,   253,    -1,   369,   306,   466,    -1,
     369,   309,   365,    -1,   254,   371,   250,    -1,   319,    -1,
     320,    -1,   373,   375,   250,    -1,   255,    -1,   373,   306,
     466,    -1,   373,   282,   374,    -1,   122,    -1,   321,    -1,
     323,    -1,    -1,   375,   379,    -1,   377,   378,   250,    -1,
     256,    -1,   377,   283,    -1,    -1,   378,   379,    -1,   380,
     366,   250,    -1,   257,    -1,   380,   283,    -1,   380,   306,
     466,    -1,   380,   305,   581,    -1,   380,   293,    -1,   382,
     250,    -1,   258,   306,   466,    -1,   384,   366,   250,    -1,
     264,   308,   466,    -1,   261,   386,   389,   250,    -1,   387,
      -1,   386,   387,    -1,   388,   366,   250,    -1,   262,   308,
     466,    -1,    -1,   263,   366,   250,    -1,   391,   392,   393,
     250,    -1,   272,    -1,   391,   306,   466,    -1,   391,   311,
     365,    -1,   391,   312,   365,    -1,    -1,   273,   366,   250,
      -1,    -1,   274,   366,   250,    -1,   395,   366,   250,   366,
      -1,   265,    -1,   395,   283,    -1,   395,   306,   466,    -1,
     395,   305,   581,    -1,   397,   366,   250,    -1,   266,    -1,
     397,   306,   466,    -1,   399,   366,   250,    -1,   267,    -1,
     399,   283,   365,    -1,   399,   306,   466,    -1,   401,   366,
     250,    -1,   268,    -1,   403,   366,   250,    -1,   269,    -1,
     403,   283,   365,    -1,   403,   310,   365,    -1,   403,   306,
     466,    -1,   403,   309,   365,    -1,   405,   366,   250,    -1,
     270,    -1,   405,   283,   365,    -1,   405,   306,   466,    -1,
     407,   366,   250,    -1,   271,    -1,   407,   283,   365,    -1,
     407,   310,   365,    -1,   409,   250,    -1,   275,    -1,   409,
     306,   466,    -1,   409,   296,    -1,   411,   366,   250,    -1,
     276,    -1,   411,   296,    -1,   411,   297,    -1,   413,   366,
     250,    -1,   277,    -1,   413,   306,   466,    -1,   414,    12,
     415,    -1,   415,    -1,   420,    -1,    36,    -1,   417,    -1,
      36,    -1,    30,    -1,   232,    40,   418,    41,    -1,   233,
      40,   651,    33,   419,    41,    -1,   651,    -1,   539,    -1,
     537,    -1,   539,    -1,   421,    -1,   416,   421,    -1,   417,
      36,   421,    -1,   417,    30,   421,    -1,   420,    36,   421,
      -1,   420,    30,   421,    -1,   422,   423,    -1,   532,    -1,
      71,    19,   532,    -1,    55,    19,   532,    -1,    20,   532,
      -1,    -1,   423,    21,   466,    22,    -1,   425,   428,    -1,
     425,   429,    -1,    -1,   186,   426,   434,    -1,   186,   426,
     427,   434,    -1,   186,   427,   434,    -1,   187,   125,    -1,
     176,   125,    -1,   431,   465,    -1,   430,   431,    -1,   190,
     173,   652,    37,   603,   434,    -1,    -1,   431,   432,   434,
      -1,   431,   433,   434,    -1,   431,   435,   434,    -1,   431,
     437,   434,    -1,   431,   451,   434,    -1,   431,   454,   434,
      -1,   431,   654,   434,    -1,   431,   438,   434,    -1,   431,
     439,   434,    -1,   431,   681,   434,    -1,   436,    -1,   445,
      -1,   446,    -1,   453,    -1,   440,    -1,   441,    -1,   638,
      -1,   442,    -1,   447,    -1,   450,    -1,    50,    -1,   180,
     173,   652,    37,   603,    -1,   180,    65,   171,    -1,   180,
      65,   172,    -1,   180,   183,   191,   173,   603,    -1,   180,
     183,   455,   173,   603,    -1,   180,   185,   682,   125,    -1,
     180,    66,   621,    -1,   180,   182,   120,    -1,   180,   182,
     121,    -1,   180,   183,   138,   142,   143,    -1,   180,   183,
     138,   142,   144,    -1,   180,   184,   443,    33,   444,    -1,
     171,    -1,   177,    -1,   178,    -1,   179,    -1,   180,   183,
     145,   603,    -1,   180,    67,   603,    -1,   188,   189,   449,
     603,   448,    -1,   188,   189,   603,   448,    -1,    -1,   114,
     603,    -1,   448,    33,   603,    -1,   173,   652,    37,    -1,
     183,   191,   173,    -1,   188,   190,   173,   652,    37,   603,
     448,    -1,   188,   190,   603,   448,    -1,   180,   126,     9,
     540,   580,   452,    -1,    10,   467,    -1,   175,    -1,   180,
     181,   171,    -1,   180,   181,   172,    -1,   180,   458,   455,
     683,   456,   461,   457,    -1,   192,    -1,   193,    -1,    40,
      41,    -1,    40,   462,    41,    -1,   464,    -1,   175,    -1,
      -1,   458,   459,    -1,   458,   460,    -1,   458,   231,    -1,
     245,    -1,   246,    -1,   247,    -1,   248,    -1,    -1,   152,
     581,    -1,   462,    33,   463,    -1,   463,    -1,     9,   540,
     580,    -1,    48,   466,    49,    -1,   466,    -1,   466,    33,
     467,    -1,   467,    -1,   468,    -1,   488,    -1,   491,    -1,
     497,    -1,   639,    -1,   641,    -1,   644,    -1,   643,    -1,
     645,    -1,   498,    -1,   660,    -1,   661,    -1,   469,   131,
     467,    -1,   470,    -1,   469,   482,    -1,   469,   471,    -1,
     472,    -1,   477,    -1,   470,    -1,   480,    -1,   481,    -1,
     132,   473,    -1,   473,    33,   474,    -1,   474,    -1,     9,
     540,   580,   475,   476,   133,   467,    -1,    -1,   114,     9,
     540,    -1,    -1,   194,     9,   540,    -1,   134,   478,    -1,
     478,    33,   479,    -1,   479,    -1,     9,   540,   580,    10,
     467,    -1,   194,     9,   540,    10,   467,    -1,   135,   467,
      -1,   136,     9,   540,    -1,   138,   137,   483,    -1,   139,
     138,   137,   483,    -1,   483,    33,   484,    -1,   484,    -1,
     485,   486,   487,    -1,   485,   486,   487,   145,   603,    -1,
     467,    -1,    -1,   140,    -1,   141,    -1,    -1,   142,   143,
      -1,   142,   144,    -1,   146,   489,   148,   467,    -1,   147,
     489,   148,   467,    -1,   489,    33,   490,    -1,   490,    -1,
       9,   540,   580,   133,   467,    -1,   149,    40,   466,    41,
     492,   493,    -1,   492,   494,    -1,   494,    -1,   183,     9,
     540,   131,   467,    -1,   183,   131,   467,    -1,   495,   131,
     467,    -1,   150,   496,   581,    -1,   495,    12,   581,    -1,
      -1,     9,   540,   152,    -1,   153,    40,   466,    41,   154,
     467,   155,   467,    -1,   498,   156,   499,    -1,   499,    -1,
     499,   157,   500,    -1,   500,    -1,   502,    37,   502,    -1,
     502,    13,   502,    -1,    -1,   502,    24,   501,   502,    -1,
     502,    14,   502,    -1,   502,    15,   502,    -1,   502,    16,
     502,    -1,   502,   108,   502,    -1,   502,   109,   502,    -1,
     502,   110,   502,    -1,   502,   111,   502,    -1,   502,   112,
     502,    -1,   502,   113,   502,    -1,   502,   170,   502,    -1,
     502,    17,   502,    -1,   502,    18,   502,    -1,   502,    -1,
     503,   195,    63,   604,    -1,   503,   195,    63,   604,   637,
      -1,   503,    -1,   504,   161,   504,    -1,   504,    -1,   504,
      34,   505,    -1,   504,    35,   505,    -1,   505,    -1,   505,
      11,   506,    -1,   505,   162,   506,    -1,   505,    70,   506,
      -1,   505,   163,   506,    -1,   506,    -1,   506,    12,   507,
      -1,   506,   164,   507,    -1,   507,    -1,   507,   165,   508,
      -1,   507,   166,   508,    -1,   508,    -1,   509,   158,   159,
     581,    -1,   509,    -1,   510,   169,   152,   581,    -1,   510,
      -1,   511,   160,   152,   578,    -1,   511,    -1,   512,   168,
     152,   578,    -1,   512,    -1,    35,   512,    -1,    34,   512,
      -1,   513,    -1,   514,    -1,   519,    -1,   515,    -1,   167,
      48,   466,    49,    -1,   167,    68,    48,   466,    49,    -1,
     167,    69,    48,   466,    49,    -1,   516,    48,    49,    -1,
     516,    48,   466,    49,    -1,   517,    -1,   516,   517,    -1,
      32,   553,   682,   518,    -1,   130,    -1,   105,   130,    -1,
     520,    -1,   520,   521,    -1,    30,   521,    -1,   521,    -1,
      36,    -1,   521,    36,   522,    -1,   521,    30,   522,    -1,
     522,    -1,   523,    -1,   535,    -1,   524,    -1,   525,    -1,
     526,    -1,   524,    21,   466,    22,    -1,   529,    -1,   525,
      21,   466,    22,    -1,   527,   532,    -1,   528,    -1,    71,
      19,    -1,    72,    19,    -1,    55,    19,    -1,    73,    19,
      -1,    74,    19,    -1,    75,    19,    -1,    76,    19,    -1,
     173,    19,    -1,    20,   532,    -1,   532,    -1,   530,   532,
      -1,   531,    -1,    77,    19,    -1,    78,    19,    -1,    79,
      19,    -1,    80,    19,    -1,    81,    19,    -1,    39,    -1,
     585,    -1,   533,    -1,   653,    -1,   534,    -1,    11,    -1,
     127,    -1,   128,    -1,   536,    -1,   535,    21,   466,    22,
      -1,   668,    -1,   537,    -1,   539,    -1,   541,    -1,   542,
      -1,   545,    -1,   548,    -1,   543,    -1,   544,    -1,   665,
      -1,   538,    -1,   651,    -1,   648,    -1,   649,    -1,   650,
      -1,     9,   540,    -1,   682,    -1,    40,   466,    41,    -1,
      40,    41,    -1,    38,    -1,   120,    48,   466,    49,    -1,
     121,    48,   466,    49,    -1,   683,    40,    41,    -1,   683,
      40,   546,    41,    -1,   546,    33,   547,    -1,   547,    -1,
     467,    -1,    23,    -1,   549,    -1,   565,    -1,   550,    -1,
     561,    -1,   563,    -1,    24,   551,   552,   553,    42,    -1,
      24,   551,   552,   553,    25,   560,    31,   551,   553,    26,
      -1,   122,    -1,   123,    -1,    -1,   552,   105,   122,   553,
      43,   553,   554,    -1,   552,   105,   123,   553,    43,   553,
     555,    -1,    -1,   105,    -1,    44,   556,    45,    -1,    46,
     558,    47,    -1,    44,   557,    45,    -1,    46,   559,    47,
      -1,    -1,   556,   464,    -1,   556,   115,    -1,    -1,   557,
     464,    -1,   557,   115,    -1,    -1,   558,   464,    -1,   558,
     116,    -1,    -1,   559,   464,    -1,   559,   116,    -1,    -1,
     560,   549,    -1,   560,   464,    -1,   560,   118,    -1,   560,
     117,    -1,    28,   562,    29,    -1,    -1,   107,    -1,    27,
     129,   564,    -1,   106,    -1,   105,   106,    -1,   566,    -1,
     567,    -1,   570,    -1,   572,    -1,   573,    -1,   574,    -1,
     575,    -1,    82,    48,   466,    49,    -1,   191,   568,   569,
      -1,   124,    -1,    48,   466,    49,    -1,    48,    49,    -1,
      48,   466,    49,    -1,    55,   571,   569,    -1,   124,    -1,
      48,   466,    49,    -1,   173,   576,   569,    -1,    63,    48,
     466,    49,    -1,    56,    48,   466,    49,    -1,    60,   576,
     577,    -1,   124,    -1,    48,   466,    49,    -1,    48,    49,
      -1,    48,   466,    49,    -1,   584,   579,    -1,    -1,    23,
      -1,    -1,   152,   581,    -1,   583,   582,    -1,    64,    40,
      41,    -1,    -1,    11,    -1,    34,    -1,    23,    -1,   584,
      -1,   174,    40,    41,    -1,   585,    -1,   669,    -1,   673,
      -1,   653,    -1,   587,    -1,   596,    -1,   592,    -1,   598,
      -1,   594,    -1,   591,    -1,   589,    -1,   588,    -1,   590,
      -1,   586,    -1,    59,    40,    41,    -1,    57,    40,    41,
      -1,    57,    40,   596,    41,    -1,    57,    40,   598,    41,
      -1,    63,    40,    41,    -1,    56,    40,    41,    -1,    58,
      40,    41,    -1,    60,    40,    41,    -1,    60,    40,   652,
      41,    -1,    60,    40,   125,    41,    -1,    55,    40,    41,
      -1,    55,    40,   593,    41,    -1,    55,    40,   593,    33,
     602,    41,    -1,   600,    -1,    11,    -1,    61,    40,   595,
      41,    -1,   600,    -1,   191,    40,    41,    -1,   191,    40,
     597,    41,    -1,   191,    40,   597,    33,   602,    41,    -1,
     191,    40,   597,    33,   602,    23,    41,    -1,   601,    -1,
      11,    -1,    62,    40,   599,    41,    -1,   601,    -1,   653,
      -1,   653,    -1,   653,    -1,   125,    -1,   607,   606,   605,
      -1,    -1,   196,   503,    -1,    -1,   606,   618,    -1,   607,
     242,   608,    -1,   608,    -1,   608,   243,   609,    -1,   609,
      -1,   609,    83,   133,   610,    -1,   610,    -1,   244,   611,
      -1,   611,    -1,   612,    -1,   612,   621,    -1,   613,   616,
      -1,    40,   604,    41,    -1,   614,    -1,   537,   615,    -1,
      48,   466,    49,   615,    -1,   516,    48,    49,    -1,   516,
      48,   604,    49,    -1,    -1,   208,    -1,   208,    97,    -1,
     209,    -1,   209,   213,    -1,   210,    -1,    -1,   199,   617,
     200,    -1,   211,   504,    -1,   119,   144,   504,    -1,   119,
     101,   504,    -1,   212,   504,   161,   504,    -1,   120,    -1,
     197,   504,   619,    -1,   198,   617,   619,    -1,   201,   620,
      -1,   202,   620,    -1,   114,    99,    -1,   114,   100,    -1,
      95,    96,    -1,   213,    -1,   214,    -1,   215,    -1,   216,
      -1,   217,    -1,    84,   622,    -1,   621,    84,   622,    -1,
     634,    -1,   635,    -1,   626,    -1,   625,    -1,   623,    -1,
     624,    -1,   629,    -1,   636,    -1,   151,    87,    -1,   151,
      86,    -1,   203,    -1,   204,    -1,    88,    87,    -1,    88,
      86,    -1,    91,    -1,    85,    91,    -1,    92,   628,    -1,
      92,   183,    -1,    92,    40,   628,   627,    41,    -1,    92,
      40,   183,   627,    41,    -1,    85,    92,    -1,    -1,   627,
      33,   628,    -1,   114,   603,    -1,   114,   603,   205,   651,
      -1,   114,   603,   617,   206,    -1,   114,   603,   205,   651,
     617,   206,    -1,    93,   213,   631,   630,    -1,    85,    93,
     213,    -1,    93,   213,   183,   630,    -1,    -1,   630,   633,
      -1,   114,   603,    -1,    40,   632,    41,    -1,   651,    -1,
     632,    33,   651,    -1,   164,   631,    -1,   166,   631,    -1,
     207,   651,    -1,    94,    -1,    85,    94,    -1,   185,   682,
     125,    -1,    90,    96,   506,    -1,   180,   224,    69,    -1,
     180,   224,    68,    -1,   180,   224,   102,    -1,   640,   467,
     152,   220,   230,   467,    -1,   640,   467,   152,   228,   230,
     467,    -1,   640,   467,   230,   467,    -1,   640,   467,   223,
     467,    -1,   640,   467,   222,   467,    -1,   221,    59,    -1,
     221,   226,    -1,   642,   467,    -1,   229,    59,    -1,   229,
     226,    -1,   218,   104,   159,    59,   467,   225,   467,    -1,
     218,    59,   467,   225,   467,    -1,   227,    59,   467,   152,
     467,    -1,   103,   646,   219,   467,   131,   467,    -1,   646,
      33,   647,    -1,   647,    -1,     9,   540,    10,   467,    -1,
      52,    -1,    53,    -1,    54,    -1,   125,    -1,   682,    -1,
     682,    -1,   180,   234,   237,   682,   464,    -1,   180,   234,
     237,   682,   656,   655,   464,    -1,   180,   234,   237,   682,
     657,   235,   414,   464,    -1,   180,   234,   237,   682,   657,
     235,   414,   656,   655,   464,    -1,   180,   234,   657,   235,
     414,   464,    -1,   180,   234,   657,   235,   414,   656,   655,
     464,    -1,    -1,   152,   581,    -1,    40,    41,    -1,    40,
     462,    41,    -1,    -1,   241,   658,    -1,   659,    -1,   658,
      33,   659,    -1,   122,    -1,   321,    -1,   322,    -1,   238,
     234,   682,    -1,   238,   234,   682,   225,    40,   663,    41,
      -1,   239,   240,   467,    -1,   239,   240,   467,   225,    40,
     663,    41,    -1,   239,   240,   467,   241,   662,    -1,   239,
     240,   467,   241,   662,   225,    40,   663,    41,    -1,   682,
      -1,   321,    -1,   323,    -1,   664,    -1,   663,    33,   664,
      -1,     9,   540,   580,    10,   467,    -1,   666,    -1,   667,
      -1,   683,    51,    52,    -1,   193,   456,   580,   464,    -1,
     535,    40,    41,    -1,   535,    40,   546,    41,    -1,   670,
      -1,   671,    -1,   193,    40,    11,    41,    -1,   193,    40,
      41,   152,   581,    -1,   193,    40,   672,    41,   152,   581,
      -1,   581,    -1,   672,    33,   581,    -1,    40,   583,    41,
      -1,   674,    -1,   236,    40,   675,    41,    -1,   236,    40,
      41,    -1,   676,    -1,   675,    33,   676,    -1,   682,   580,
      -1,   677,    -1,   236,    48,   678,    49,    -1,   236,    48,
      49,    -1,   679,    -1,   678,    33,   679,    -1,   682,   580,
      10,   467,    -1,   680,    -1,   535,    20,   682,    -1,   180,
     249,   682,   152,   583,    -1,   683,    -1,    55,    -1,    56,
      -1,    57,    -1,   191,    -1,   174,    -1,   153,    -1,    59,
      -1,    60,    -1,    61,    -1,    62,    -1,    63,    -1,   149,
      -1,    64,    -1,   193,    -1,    58,    -1,   122,    -1,    65,
      -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,    70,
      -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,    75,
      -1,    76,    -1,    77,    -1,    78,    -1,    79,    -1,    80,
      -1,    81,    -1,    82,    -1,    83,    -1,    86,    -1,    87,
      -1,    88,    -1,    89,    -1,    91,    -1,    92,    -1,    93,
      -1,    94,    -1,    95,    -1,    96,    -1,    97,    -1,    98,
      -1,    99,    -1,   100,    -1,   101,    -1,   102,    -1,   103,
      -1,   104,    -1,   108,    -1,   109,    -1,   110,    -1,   111,
      -1,   112,    -1,   113,    -1,   114,    -1,   126,    -1,   131,
      -1,   132,    -1,   133,    -1,   134,    -1,   135,    -1,   137,
      -1,   138,    -1,   139,    -1,   140,    -1,   141,    -1,   142,
      -1,   143,    -1,   144,    -1,   145,    -1,   146,    -1,   147,
      -1,   148,    -1,   150,    -1,   152,    -1,   154,    -1,   155,
      -1,   156,    -1,   157,    -1,   158,    -1,   159,    -1,   160,
      -1,   161,    -1,   162,    -1,   163,    -1,   164,    -1,   165,
      -1,   166,    -1,   167,    -1,   168,    -1,   169,    -1,   170,
      -1,   171,    -1,   172,    -1,   173,    -1,   175,    -1,   176,
      -1,   177,    -1,   178,    -1,   179,    -1,   180,    -1,   181,
      -1,   182,    -1,   183,    -1,   184,    -1,   185,    -1,   187,
      -1,   188,    -1,   189,    -1,   192,    -1,   194,    -1,    84,
      -1,    85,    -1,   195,    -1,   196,    -1,   197,    -1,   198,
      -1,   199,    -1,   200,    -1,   201,    -1,   202,    -1,   203,
      -1,   204,    -1,   205,    -1,   206,    -1,   207,    -1,   208,
      -1,   209,    -1,   210,    -1,   211,    -1,   212,    -1,   213,
      -1,   214,    -1,   215,    -1,   216,    -1,   217,    -1,   218,
      -1,   219,    -1,   220,    -1,   221,    -1,   222,    -1,   223,
      -1,   224,    -1,   225,    -1,   226,    -1,   227,    -1,   228,
      -1,   229,    -1,   230,    -1,   231,    -1,   120,    -1,   121,
      -1,   232,    -1,   233,    -1,   234,    -1,   235,    -1,   237,
      -1,   238,    -1,   239,    -1,   240,    -1,   241,    -1,   242,
      -1,   243,    -1,   244,    -1,   245,    -1,   246,    -1,   247,
      -1,   248,    -1,   236,    -1,   249,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   772,   772,   774,   775,   777,   779,   780,   785,   791,
     801,   809,   809,   812,   821,   832,   870,   873,   879,   915,
     944,   947,   969,   971,   975,   982,   984,   985,   986,   987,
     988,   989,   990,   994,  1013,  1018,  1023,  1030,  1035,  1040,
    1049,  1052,  1058,  1063,  1070,  1070,  1070,  1073,  1086,  1091,
    1098,  1103,  1112,  1115,  1123,  1150,  1154,  1161,  1167,  1172,
    1177,  1186,  1210,  1214,  1221,  1226,  1231,  1236,  1247,  1265,
    1269,  1276,  1281,  1289,  1314,  1317,  1320,  1323,  1326,  1329,
    1332,  1335,  1338,  1341,  1344,  1347,  1350,  1353,  1356,  1359,
    1362,  1365,  1371,  1372,  1373,  1374,  1375,  1387,  1390,  1396,
    1410,  1414,  1421,  1428,  1431,  1436,  1441,  1449,  1457,  1468,
    1479,  1482,  1489,  1499,  1502,  1507,  1516,  1519,  1524,  1529,
    1537,  1538,  1539,  1540,  1541,  1542,  1543,  1544,  1545,  1546,
    1547,  1548,  1549,  1550,  1551,  1552,  1553,  1554,  1558,  1576,
    1580,  1585,  1594,  1600,  1600,  1603,  1623,  1627,  1632,  1640,
    1645,  1649,  1657,  1660,  1668,  1681,  1685,  1696,  1699,  1707,
    1725,  1729,  1736,  1741,  1746,  1754,  1760,  1768,  1776,  1783,
    1797,  1801,  1815,  1824,  1832,  1835,  1842,  1877,  1881,  1886,
    1892,  1902,  1905,  1913,  1916,  1923,  1941,  1945,  1952,  1957,
    1965,  1983,  1987,  1995,  2017,  2021,  2028,  2036,  2045,  2053,
    2091,  2095,  2102,  2109,  2118,  2127,  2154,  2158,  2165,  2177,
    2204,  2208,  2215,  2225,  2237,  2241,  2246,  2255,  2268,  2272,
    2277,  2286,  2300,  2304,  2317,  2322,  2334,  2338,  2346,  2359,
    2367,  2380,  2387,  2401,  2401,  2404,  2404,  2426,  2430,  2434,
    2452,  2470,  2480,  2494,  2502,  2508,  2514,  2520,  2532,  2535,
    2549,  2550,  2555,  2557,  2558,  2559,  2563,  2583,  2600,  2603,
    2607,  2619,  2621,  2625,  2629,  2633,  2637,  2641,  2647,  2653,
    2657,  2661,  2675,  2676,  2677,  2678,  2679,  2680,  2681,  2682,
    2686,  2686,  2689,  2693,  2701,  2706,  2715,  2720,  2729,  2800,
    2808,  2813,  2822,  2827,  2836,  2846,  2850,  2858,  2862,  2870,
    2886,  2895,  2907,  2916,  2919,  2924,  2933,  2937,  2945,  2955,
    2967,  2974,  2978,  2986,  2991,  3000,  3008,  3008,  3011,  3015,
    3023,  3024,  3033,  3036,  3049,  3062,  3072,  3072,  3075,  3075,
    3079,  3082,  3090,  3095,  3105,  3113,  3121,  3134,  3149,  3156,
    3157,  3158,  3159,  3160,  3161,  3162,  3163,  3164,  3165,  3166,
    3167,  3172,  3216,  3217,  3230,  3237,  3237,  3240,  3240,  3240,
    3245,  3252,  3256,  3260,  3272,  3275,  3286,  3289,  3299,  3306,
    3310,  3314,  3318,  3327,  3335,  3343,  3348,  3356,  3360,  3366,
    3373,  3388,  3403,  3406,  3410,  3418,  3426,  3430,  3439,  3447,
    3458,  3462,  3466,  3477,  3484,  3493,  3497,  3501,  3509,  3527,
    3532,  3542,  3545,  3553,  3561,  3570,  3575,  3584,  3594,  3598,
    3602,  3602,  3606,  3610,  3614,  3618,  3622,  3626,  3630,  3634,
    3638,  3642,  3646,  3650,  3654,  3659,  3663,  3667,  3672,  3679,
    3684,  3688,  3692,  3697,  3701,  3705,  3709,  3713,  3718,  3722,
    3726,  3731,  3735,  3739,  3744,  3761,  3766,  3771,  3776,  3780,
    3785,  3789,  3794,  3800,  3806,  3811,  3812,  3813,  3821,  3825,
    3829,  3837,  3844,  3853,  3853,  3857,  3877,  3878,  3886,  3887,
    3893,  3914,  3918,  3932,  3938,  3951,  3955,  3955,  3959,  3960,
    3969,  3970,  3976,  3977,  3986,  3998,  4009,  4013,  4017,  4021,
    4025,  4029,  4033,  4037,  4045,  4053,  4070,  4078,  4087,  4091,
    4095,  4099,  4103,  4111,  4123,  4128,  4133,  4140,  4145,  4152,
    4159,  4171,  4172,  4176,  4182,  4183,  4184,  4185,  4186,  4187,
    4188,  4189,  4190,  4194,  4194,  4197,  4197,  4197,  4201,  4208,
    4212,  4216,  4224,  4232,  4242,  4252,  4256,  4279,  4284,  4294,
    4295,  4304,  4308,  4317,  4317,  4317,  4321,  4327,  4336,  4336,
    4341,  4344,  4353,  4364,  4364,  4369,  4373,  4380,  4384,  4395,
    4398,  4403,  4412,  4415,  4419,  4431,  4434,  4439,  4448,  4451,
    4455,  4471,  4474,  4479,  4484,  4489,  4500,  4510,  4513,  4518,
    4528,  4529,  4543,  4544,  4545,  4546,  4547,  4548,  4549,  4554,
    4562,  4570,  4574,  4582,  4586,  4595,  4602,  4606,  4616,  4624,
    4632,  4640,  4647,  4655,  4662,  4666,  4674,  4682,  4685,  4694,
    4697,  4707,  4711,  4721,  4722,  4724,  4726,  4732,  4736,  4740,
    4741,  4742,  4746,  4758,  4759,  4760,  4761,  4762,  4763,  4764,
    4765,  4766,  4767,  4772,  4780,  4784,  4791,  4802,  4810,  4818,
    4827,  4831,  4835,  4843,  4847,  4851,  4859,  4860,  4868,  4876,
    4881,  4885,  4889,  4893,  4902,  4903,  4911,  4918,  4921,  4924,
    4927,  4931,  4943,  4959,  4961,  4968,  4971,  4980,  4992,  4997,
    5009,  5014,  5018,  5023,  5028,  5033,  5034,  5043,  5048,  5052,
    5058,  5062,  5070,  5075,  5085,  5088,  5092,  5096,  5100,  5104,
    5112,  5114,  5125,  5131,  5137,  5143,  5158,  5162,  5166,  5170,
    5174,  5178,  5182,  5186,  5194,  5198,  5202,  5210,  5214,  5222,
    5223,  5235,  5236,  5237,  5238,  5239,  5240,  5241,  5242,  5250,
    5254,  5258,  5262,  5271,  5275,  5283,  5287,  5297,  5301,  5305,
    5309,  5313,  5321,  5323,  5330,  5334,  5338,  5342,  5352,  5356,
    5360,  5368,  5370,  5378,  5382,  5389,  5393,  5401,  5405,  5413,
    5421,  5425,  5433,  5440,  5448,  5453,  5458,  5470,  5474,  5478,
    5482,  5486,  5492,  5492,  5497,  5503,  5503,  5508,  5512,  5522,
    5530,  5537,  5542,  5550,  5559,  5567,  5575,  5584,  5591,  5600,
    5612,  5617,  5622,  5628,  5634,  5640,  5650,  5653,  5661,  5665,
    5673,  5677,  5685,  5690,  5699,  5703,  5707,  5715,  5719,  5727,
    5731,  5735,  5739,  5747,  5751,  5755,  5763,  5768,  5778,  5791,
    5791,  5795,  5803,  5814,  5819,  5843,  5843,  5847,  5855,  5859,
    5866,  5871,  5880,  5889,  5893,  5897,  5904,  5910,  5920,  5926,
    5930,  5938,  5945,  5946,  5954,  5961,  5964,  5972,  5981,  5981,
    5981,  5981,  5981,  5981,  5981,  5981,  5982,  5982,  5982,  5982,
    5982,  5982,  5983,  5983,  5987,  5987,  5987,  5987,  5987,  5987,
    5987,  5987,  5987,  5987,  5988,  5988,  5988,  5988,  5988,  5988,
    5988,  5989,  5989,  5989,  5989,  5989,  5989,  5989,  5989,  5990,
    5990,  5990,  5990,  5990,  5990,  5990,  5990,  5990,  5990,  5990,
    5991,  5991,  5991,  5991,  5991,  5991,  5991,  5991,  5991,  5991,
    5991,  5991,  5992,  5992,  5992,  5992,  5992,  5992,  5992,  5992,
    5992,  5992,  5993,  5993,  5993,  5993,  5993,  5993,  5993,  5993,
    5993,  5993,  5993,  5993,  5994,  5994,  5994,  5994,  5994,  5994,
    5994,  5994,  5994,  5994,  5994,  5994,  5995,  5995,  5995,  5995,
    5995,  5995,  5995,  5995,  5995,  5996,  5996,  5996,  5996,  5996,
    5996,  5996,  5996,  5997,  5997,  5997,  5997,  5997,  5997,  5997,
    5997,  5997,  5997,  5997,  5998,  5998,  5998,  5998,  5998,  5998,
    5998,  5998,  5998,  5999,  5999,  5999,  5999,  5999,  5999,  5999,
    5999,  5999,  5999,  6000,  6000,  6000,  6000,  6000,  6000,  6000,
    6000,  6000,  6000,  6000,  6001,  6001,  6001,  6001,  6001,  6001,
    6001,  6001,  6001,  6001,  6001,  6002,  6002,  6002,  6002,  6002,
    6002,  6002,  6002,  6003
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
  "\"template\"", "\"matches\"", "\"tuple\"", "\"name\"", "\"call\"",
  "\"apply\"", "\"templates\"", "\"mode\"", "\"ftor\"", "\"ftand\"",
  "\"ftnot\"", "\"private\"", "\"public\"", "\"deterministic\"",
  "\"nondeterministic\"", "\"type-alias\"", "\"<XSLT end element>\"",
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
  "FunctionTypeArguments", "ParenthesizedItemType", "TupleTest",
  "TupleTestEntryList", "TupleTestEntry", "TupleConstructor",
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
     575,   576,   577,   578,   579,   580,   581
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   327,   328,   328,   328,   328,   328,   328,   329,   330,
     331,   332,   332,   333,   334,   335,   336,   336,   337,   338,
     339,   339,   340,   340,   340,   341,   341,   341,   341,   341,
     341,   341,   341,   342,   343,   343,   343,   343,   343,   343,
     344,   344,   344,   344,   345,   345,   345,   346,   347,   347,
     347,   347,   348,   348,   349,   350,   350,   350,   350,   350,
     350,   351,   352,   352,   352,   352,   352,   352,   353,   354,
     354,   354,   354,   355,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   357,   357,   357,   357,   357,   358,   358,   359,
     360,   360,   360,   361,   362,   362,   362,   362,   362,   363,
     364,   364,   364,   365,   365,   365,   366,   366,   366,   366,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   368,   369,
     369,   369,   370,   371,   371,   372,   373,   373,   373,   374,
     374,   374,   375,   375,   376,   377,   377,   378,   378,   379,
     380,   380,   380,   380,   380,   381,   382,   383,   384,   385,
     386,   386,   387,   388,   389,   389,   390,   391,   391,   391,
     391,   392,   392,   393,   393,   394,   395,   395,   395,   395,
     396,   397,   397,   398,   399,   399,   399,   400,   401,   402,
     403,   403,   403,   403,   403,   404,   405,   405,   405,   406,
     407,   407,   407,   408,   409,   409,   409,   410,   411,   411,
     411,   412,   413,   413,   414,   414,   415,   415,   415,   416,
     416,   417,   417,   418,   418,   419,   419,   420,   420,   420,
     420,   420,   420,   421,   422,   422,   422,   422,   423,   423,
     424,   424,   425,   425,   425,   425,   426,   427,   428,   429,
     430,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   432,   432,   432,   432,   432,   432,   432,   432,
     433,   433,   434,   435,   436,   436,   437,   437,   438,   439,
     440,   440,   441,   441,   442,   443,   443,   444,   444,   445,
     446,   447,   447,   448,   448,   448,   449,   449,   450,   450,
     451,   452,   452,   453,   453,   454,   455,   455,   456,   456,
     457,   457,   458,   458,   458,   458,   459,   459,   460,   460,
     461,   461,   462,   462,   463,   464,   465,   466,   466,   467,
     467,   467,   467,   467,   467,   467,   467,   467,   467,   467,
     467,   468,   469,   469,   469,   470,   470,   471,   471,   471,
     472,   473,   473,   474,   475,   475,   476,   476,   477,   478,
     478,   479,   479,   480,   481,   482,   482,   483,   483,   484,
     484,   485,   486,   486,   486,   487,   487,   487,   488,   488,
     489,   489,   490,   491,   492,   492,   493,   493,   494,   495,
     495,   496,   496,   497,   498,   498,   499,   499,   500,   500,
     501,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   502,   502,   502,   503,   503,
     504,   504,   504,   505,   505,   505,   505,   505,   506,   506,
     506,   507,   507,   507,   508,   508,   509,   509,   510,   510,
     511,   511,   512,   512,   512,   513,   513,   513,   514,   514,
     514,   515,   515,   516,   516,   517,   518,   518,   519,   519,
     519,   519,   520,   521,   521,   521,   522,   522,   523,   523,
     524,   524,   525,   525,   526,   526,   527,   527,   527,   527,
     527,   527,   527,   527,   528,   528,   529,   529,   530,   530,
     530,   530,   530,   531,   532,   532,   533,   533,   534,   534,
     534,   535,   535,   535,   536,   536,   536,   536,   536,   536,
     536,   536,   536,   537,   537,   538,   538,   538,   539,   540,
     541,   541,   542,   543,   544,   545,   545,   546,   546,   547,
     547,   548,   548,   549,   549,   549,   550,   550,   551,   551,
     552,   552,   552,   553,   553,   554,   554,   555,   555,   556,
     556,   556,   557,   557,   557,   558,   558,   558,   559,   559,
     559,   560,   560,   560,   560,   560,   561,   562,   562,   563,
     564,   564,   565,   565,   565,   565,   565,   565,   565,   566,
     567,   568,   568,   569,   569,   570,   571,   571,   572,   573,
     574,   575,   576,   576,   577,   577,   578,   579,   579,   580,
     580,   581,   581,   582,   582,   582,   582,   583,   583,   583,
     583,   583,   584,   585,   585,   585,   585,   585,   585,   585,
     585,   585,   585,   586,   587,   587,   587,   588,   589,   590,
     591,   591,   591,   592,   592,   592,   593,   593,   594,   595,
     596,   596,   596,   596,   597,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   605,   606,   606,   607,   607,   608,
     608,   609,   609,   610,   610,   611,   611,   612,   612,   612,
     613,   613,   614,   614,   615,   615,   615,   615,   615,   615,
     616,   616,   617,   617,   617,   617,   618,   618,   618,   618,
     618,   618,   618,   618,   619,   619,   619,   620,   620,   621,
     621,   622,   622,   622,   622,   622,   622,   622,   622,   623,
     623,   623,   623,   624,   624,   625,   625,   626,   626,   626,
     626,   626,   627,   627,   628,   628,   628,   628,   629,   629,
     629,   630,   630,   631,   631,   632,   632,   633,   633,   634,
     635,   635,   636,   637,   638,   638,   638,   639,   639,   639,
     639,   639,   640,   640,   641,   642,   642,   643,   643,   644,
     645,   646,   646,   647,   648,   649,   650,   651,   652,   653,
     654,   654,   654,   654,   654,   654,   655,   655,   656,   656,
     657,   657,   658,   658,   659,   659,   659,   660,   660,   661,
     661,   661,   661,   662,   662,   662,   663,   663,   664,   665,
     665,   666,   667,   668,   668,   669,   669,   670,   671,   671,
     672,   672,   673,   583,   674,   674,   675,   675,   676,   536,
     677,   677,   678,   678,   679,   535,   680,   681,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683
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
       1,     3,     3,     1,     4,     3,     1,     3,     2,     1,
       4,     3,     1,     3,     4,     1,     3,     5,     1,     1,
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
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     8,     9,     0,     9,     0,   322,     0,     0,   252,
      22,   110,     5,    19,    21,     0,     0,     6,    16,     7,
       0,     1,     0,   508,     0,     0,     0,   577,     0,   553,
       0,     0,   472,   532,   503,     0,   774,   775,   776,   839,
     840,   841,   853,   845,   846,   847,   848,   849,   851,   855,
     856,   857,   858,   859,   860,   861,   862,   863,   864,   865,
     866,   867,   868,   869,   870,   871,   872,   873,   955,   956,
     874,   875,   876,   877,   878,   879,   880,   881,   882,   883,
     884,   885,   886,   887,   888,   889,   890,   891,   892,   893,
     894,   895,   896,   897,   898,   994,   995,   854,   777,   899,
     509,   510,   900,   901,   902,   903,   904,   905,   906,   907,
     908,   909,   910,   911,   912,   913,   914,   915,   916,   850,
     917,   918,   844,   919,   920,   921,   922,   923,   924,   925,
     926,   927,   928,   929,   930,   931,   932,   933,   934,   935,
     936,   937,   938,   843,   939,   940,   941,   942,   943,   944,
     945,   946,   947,   948,   949,   950,   951,   952,   842,   953,
     852,   954,   957,   958,   959,   960,   961,   962,   963,   964,
     965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
     975,   976,   977,   978,   979,   980,   981,   982,   983,   984,
     985,   986,   987,   988,   989,   990,   991,   992,   993,   996,
     997,   998,   999,  1012,  1000,  1001,  1002,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,  1011,  1013,     2,   336,   338,
     339,     0,   352,   355,   356,   340,   341,   342,   348,   405,
     407,   424,   427,   429,   432,   437,   440,   443,   445,   447,
     449,   451,   454,   455,   457,     0,   463,   456,   468,   471,
     475,   476,   478,   479,   480,     0,   485,   482,     0,   497,
     495,   505,   507,   477,   511,   514,   523,   515,   516,   517,
     520,   521,   518,   519,   541,   543,   544,   545,   542,   582,
     583,   584,   585,   586,   587,   588,   504,   632,   623,   630,
     629,   631,   628,   625,   627,   624,   626,   343,     0,   344,
       0,   346,   345,   347,   525,   526,   527,   524,   506,   349,
     350,   522,   809,   810,   513,   829,   835,   779,   838,     0,
       3,   261,    25,   116,   322,     4,     0,    14,     0,   325,
     326,   327,   328,   329,   330,   323,   324,   839,   840,   841,
     853,   845,   846,   847,   848,   849,   861,   862,   863,   864,
     865,   866,   867,   868,   869,   870,   871,   872,   890,   994,
     995,   901,   903,   914,   915,   850,   844,   932,   938,   842,
     852,   980,   983,   989,   991,  1012,  1001,  1002,   528,   529,
     838,   839,   840,   846,   849,   842,   494,   548,   549,   550,
       0,   578,     0,   470,   554,     0,   453,   452,   531,     0,
     488,     0,     0,   596,     0,     0,     0,     0,     0,     0,
       0,     0,   602,     0,     0,     0,     0,     0,   486,   487,
     489,   490,   491,   492,   498,   499,   500,   501,   502,     0,
       0,     0,   772,     0,     0,     0,   360,   362,     0,     0,
     368,   370,     0,     0,   391,     0,     0,     0,     0,     0,
       0,   493,     0,     0,     0,   591,     0,   609,     0,     0,
     762,   763,     0,   765,   766,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   357,   354,   358,   359,
     353,     0,     0,     0,     0,     0,     0,     0,     0,   410,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   464,   469,     0,     0,     0,
       0,   484,   496,     0,     0,     0,     0,   764,     0,     0,
       0,     0,     0,     0,     0,   250,   251,   261,     0,    23,
      24,     0,   112,   113,     0,     0,     0,   778,   322,    17,
       0,   318,     0,   333,     0,    13,   553,     0,   580,   579,
     576,     0,   530,   647,   643,     0,   646,   658,     0,     0,
     595,   638,     0,   634,     0,     0,     0,     0,   639,   633,
     640,     0,     0,     0,     0,   601,     0,   649,     0,   657,
     659,   637,     0,     0,     0,     0,     0,     0,     0,   609,
       0,   609,     0,     0,   609,     0,     0,     0,     0,     0,
       0,     0,     0,   598,   655,   650,     0,   654,     0,   590,
       0,     0,     0,     0,     0,   831,     0,   832,   609,   797,
     799,   337,   351,   373,     0,     0,     0,   404,   406,   409,
     412,   413,   414,   422,   423,     0,   408,   415,   416,   417,
     418,   419,   420,   421,     0,   430,   431,   428,   433,   435,
     434,   436,   438,   439,   441,   442,     0,     0,     0,     0,
     461,     0,   474,   473,     0,     0,   836,     0,   540,   813,
     539,     0,   538,     0,     0,     0,     0,   535,     0,   811,
     257,   256,   282,     0,   253,   255,     0,   259,   944,   951,
       0,     0,     0,   272,     0,     0,     0,   276,   277,   279,
     273,   274,   280,   281,     0,   275,     0,   258,   278,     0,
       0,    20,    34,    62,    48,    69,    74,   104,   100,    26,
      52,    27,    52,    28,   116,    29,   116,    30,     0,    32,
       0,    31,     0,   111,   109,   139,     0,   146,   155,     0,
       0,     0,   186,   191,   194,   198,   200,   206,   210,   177,
     214,   218,   222,   143,   144,   118,   119,   120,   116,   121,
     117,   122,   152,   123,   157,   124,     0,   126,   116,   125,
     134,   181,   127,   116,   128,   116,   129,   116,   130,   116,
     131,   116,   132,   116,   133,   116,   135,     0,   136,   116,
     137,   116,   316,   317,     0,     0,     0,   609,     0,   319,
       0,   851,   843,   852,  1012,   331,   613,   617,   619,   622,
     620,   815,   816,   621,   823,   554,     0,   581,     0,   466,
     465,     0,   644,   597,   593,     0,   600,   635,   636,   642,
     641,   603,   604,     0,   648,   656,   599,   589,     0,   771,
       0,   533,   534,   364,   361,     0,     0,   369,     0,   390,
     388,   389,     0,     0,   458,     0,     0,     0,   651,   592,
     610,     0,   812,     0,     0,     0,     0,   830,     0,     0,
       0,     0,   374,   381,   375,   378,   382,     0,   411,     0,
       0,     0,     0,   684,   425,   665,   668,   670,   672,   674,
     675,   690,   679,   444,   446,   448,   607,   450,   462,   481,
     483,   512,     0,   814,     0,     0,   761,   760,   759,   536,
     254,     0,   322,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   790,     0,     0,     0,     0,
     262,   263,   264,   265,   269,   270,   266,   267,   268,   271,
     105,   106,    40,    36,     0,     0,     0,   116,    49,    51,
       0,   116,    63,    67,    66,     0,     0,     0,    70,     0,
       0,     0,    73,    91,    75,    79,    80,    81,    85,    86,
      88,    77,    82,    83,    84,    87,    89,     0,     0,     0,
      99,   101,     0,   103,   115,   114,     0,     0,     0,   174,
     170,   116,     0,     0,   113,     0,     0,     0,     0,   156,
       0,   165,     0,   116,     0,   113,   113,   183,   187,     0,
       0,     0,     0,     0,   113,     0,     0,     0,   113,     0,
     113,   113,     0,   113,     0,     0,   113,   113,     0,   213,
     216,     0,   219,   220,     0,     0,     0,     0,   661,     0,
       0,   334,   332,     0,     0,     0,     0,     0,   614,   616,
     615,   611,   553,   553,   571,   546,   467,     0,   660,   594,
     605,   773,     0,     0,   366,     0,     0,     0,   401,     0,
     395,     0,     0,   459,   460,     0,     0,   768,     0,   769,
     833,     0,     0,     0,   804,   805,   801,   803,     0,   383,
     384,   385,   376,     0,     0,   673,     0,   685,   687,   689,
     680,     0,   426,     0,   663,     0,     0,     0,   676,     0,
     677,   608,   606,   537,     0,     0,     0,   284,   285,   289,
     300,     0,     0,   313,   314,   290,   291,     0,     0,     0,
       0,   295,   296,     0,     0,   755,   754,   756,     0,     0,
       0,     0,     0,     0,     0,     0,   303,     0,   303,   107,
     108,    38,     0,   230,   229,   839,   861,   996,   997,    35,
     225,     0,   228,   226,   237,   248,   244,    39,    44,    45,
      46,    37,    55,    53,   116,     0,    50,     0,    65,    64,
      61,    72,    71,    68,    95,    96,    92,    93,    94,    76,
      97,    78,    90,   102,   142,   166,     0,   116,   171,     0,
       0,   168,   140,   141,   138,   149,   150,   151,   148,   147,
     145,   160,   153,   116,   154,   158,   167,     0,   178,   179,
     180,   116,     0,   189,   188,   116,   192,   190,   195,   196,
     193,   197,   201,   203,   204,   202,   199,   207,   208,   205,
     211,   212,   209,   215,   217,   223,   221,   330,    15,     0,
     822,   612,   618,     0,     0,   820,     0,   825,     0,   826,
     609,     0,     0,     0,   645,   770,     0,     0,     0,   371,
     372,   392,     0,     0,     0,   393,   394,     0,     0,     0,
       0,   652,   335,     0,   834,     0,     0,   806,     0,     0,
     377,     0,   379,   678,   684,   682,     0,   686,   688,     0,
     667,     0,     0,   696,     0,     0,     0,     0,     0,   662,
     666,   669,     0,     0,     0,   725,     0,     0,   750,     0,
       0,   721,   722,     0,   709,   715,   716,   714,   713,   717,
     711,   712,   718,     0,     0,     0,     0,     0,   757,   758,
       0,   609,     0,     0,   299,     0,     0,     0,   288,   790,
     794,   795,   796,   791,   792,     0,     0,     0,     0,     0,
     303,     0,   302,     0,   309,    41,    42,    43,   247,     0,
       0,     0,     0,     0,   238,     0,     0,     0,     0,   243,
      56,    60,    59,     0,     0,     0,    33,    47,    98,   173,
       0,   169,   172,   161,   164,     0,     0,     0,   182,     0,
     176,   185,     0,   330,   817,     0,     0,     0,     0,   824,
     828,   553,   553,     0,   575,   574,   573,   572,   365,     0,
       0,     0,   399,     0,     0,   400,   398,     0,   653,   767,
     609,     0,   798,   800,     0,   386,   387,     0,   681,   683,
     753,   703,   701,   702,   664,     0,     0,   707,   708,   699,
     700,   671,   726,   731,     0,   751,   724,   723,     0,     0,
     728,   727,     0,   720,   719,     0,   749,   710,     0,     0,
     692,     0,   691,   260,     0,   283,   292,   293,   286,   287,
     297,   298,   294,     0,   780,   786,     0,     0,     0,   837,
     330,   306,   307,   301,   304,     0,     0,   246,   245,     0,
     234,   233,     0,   224,   240,   239,   242,   241,     0,    58,
      57,    54,   175,   163,   162,   159,   184,    11,     0,   818,
     821,     0,   827,     0,     0,   553,   367,   363,   402,     0,
     397,   403,     0,   807,     0,   380,   704,   705,   706,   697,
     698,   739,   732,   732,   734,     0,     0,   741,   741,   752,
     694,   693,     0,     0,   312,   310,   788,     0,     0,     0,
       0,   793,   784,   786,     0,   305,   303,   231,     0,     0,
      10,    12,     0,   819,   559,   565,   551,   562,   568,   552,
       0,     0,     0,   802,     0,     0,     0,     0,     0,   745,
     743,   740,   738,   695,   311,   789,   787,   781,     0,     0,
     321,   315,   320,   308,     0,   235,   236,   249,    18,     0,
       0,     0,     0,   547,   396,   808,     0,   730,   729,   735,
     736,     0,   744,     0,     0,   742,   782,   786,   785,   232,
     555,   561,   560,   556,   567,   566,   557,   564,   563,   558,
     570,   569,   733,     0,   746,   747,   748,     0,   737,   783
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,   325,  1580,    19,    17,    18,   327,
     549,    12,    13,   322,   541,   729,   730,  1161,  1181,   731,
     732,   957,  1183,  1184,   733,   734,   735,   736,   737,   738,
    1199,  1201,   739,   740,   741,   742,   765,   323,   743,   544,
     766,   767,   768,   769,   770,   771,   772,  1218,  1008,   773,
     774,  1010,  1222,  1223,   775,   776,   777,   778,   779,   999,
    1000,  1001,  1209,   780,   781,  1017,  1232,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   797,   798,   799,   800,   801,  1169,  1170,  1171,
    1172,  1509,  1614,  1173,  1174,  1175,  1389,   320,   321,   532,
     533,   535,   536,   537,   538,   700,   701,   694,   702,   703,
     704,   705,   706,   707,   708,   709,  1143,  1492,   710,   711,
     712,  1372,  1155,   713,   714,  1565,   715,   716,   804,   334,
    1611,   937,   335,   336,   555,   552,   553,   995,   217,   218,
     219,   220,   221,   222,   477,   223,   436,   437,  1074,  1278,
     224,   440,   441,   478,   479,   480,   884,   885,   886,  1101,
    1302,   225,   443,   444,   226,  1079,  1285,  1080,  1081,  1283,
     227,   228,   229,   230,   645,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   830,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   378,   268,   269,   270,   271,   272,   681,
     682,   273,   274,   275,   389,   556,   395,  1586,  1589,  1619,
    1621,  1620,  1622,  1273,   276,   392,   277,   559,   278,   279,
     280,   456,   570,   281,   404,   282,   283,   284,   285,   413,
     585,   905,  1122,   621,   815,  1061,   816,   817,   286,   287,
     288,   289,   290,   291,   292,   293,   565,   294,   586,   295,
     616,   296,   588,   566,   589,  1067,  1049,   894,  1319,  1114,
     895,   896,   897,   898,   899,   900,   901,   902,  1110,  1120,
    1347,  1320,  1549,  1459,  1118,  1334,  1335,  1336,  1337,  1338,
    1594,  1471,  1339,  1601,  1558,  1598,  1635,  1340,  1341,  1342,
    1112,   718,   297,   298,   299,   300,   301,   302,   303,   431,
     432,   304,   305,   306,   307,   546,   308,   719,  1569,  1495,
    1150,  1363,  1364,   309,   310,  1096,  1296,  1297,   311,   312,
     313,   314,   820,   821,   822,  1266,   823,   824,  1268,  1269,
     315,   626,   627,   316,   720,   317,   318
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1457
static const yytype_int16 yypact[] =
{
     835, -1457, -1457,  -163, -1457,   -67, -1457,   160,  3510,   -21,
   -1457, -1457, -1457, -1457, -1457,    21,    -3, -1457, -1457, -1457,
      61, -1457,  6901, -1457,  4950,   587,   181,   158,  4233,   252,
    3751,  3751, -1457, -1457, -1457,  2305, -1457, -1457, -1457,   198,
     362,   342,   365,   375,    80,   382,   395,   456, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457,   517,   538,   550,   574,   576,
     610,   642,   665,   720,   732,   736,   442, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457,   518, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457,   601,   641, -1457, -1457, -1457,
   -1457, -1457, -1457,   536, -1457,    30, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457,   754,   754, -1457,   739,
   -1457, -1457,   744, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457,   269, -1457, -1457, -1457,
   -1457, -1457,   108, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,    86, -1457,
     750, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457,    63, -1457, -1457,   -18, -1457,
   -1457, -1457, -1457, -1457,   734, -1457,    -7, -1457, -1457, -1457,
   -1457, -1457, -1457,   760, -1457,   579,   577, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,   788, -1457,
   -1457,   585, -1457, -1457, -1457, -1457, -1457, -1457,   672,   687,
   -1457,   570,   655,    24,    44,    41,   560, -1457,   699,   684,
     700,   703, -1457, -1457, -1457,   271, -1457, -1457,  4233,   603,
   -1457, -1457,   841,   844, -1457,  4950, -1457, -1457,  4950, -1457,
   -1457, -1457, -1457,   347, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,  3510, -1457,
    3510, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,   372,   318,
   -1457,   715,   210,   431, -1457, -1457,  6901,   696,   109, -1457,
   -1457, -1457, -1457, -1457,   733, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457,   849,   854,   875,   876,   877, -1457, -1457, -1457, -1457,
     669, -1457,   889,   603, -1457,  6901, -1457, -1457, -1457,   556,
   -1457,  5428,  3510, -1457,   871,   880,  3510,    20,   882,   883,
    6296,  3510, -1457,   878,  6901,  6901,   887,  3510, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,  3510,
    6901,    11, -1457,  3510,  3510,  6901,   901, -1457,  6901,   926,
     903, -1457,  6901,    51, -1457,    64,  3510,  3510,  3510,   891,
     893, -1457,   871,  5667,  3510, -1457,   871,   785,  3510,   783,
   -1457, -1457,  3510, -1457, -1457,  6706,  6901,  3510,  3510,  3510,
     536,    30,  3510,   936,   809,   810, -1457, -1457, -1457, -1457,
   -1457,  3751,  3751,  3751,  3751,  3751,  3751,  3751,  3751, -1457,
    3751,  3751,  3751,  3751,  3751,  3751,  3751,  3751,   888,  3751,
    3751,  3751,  3751,  3751,  3751,  3751,  3751,  3751,  3751,  3751,
     793,   802,   803,   804,  2546, -1457,   603,  4233,  4233,  3510,
    3510, -1457, -1457,  6901,  3510,  1823,   -59, -1457,  2064,   905,
     836,   838,    27,   910,   791, -1457, -1457, -1457,  3992, -1457,
   -1457,   551, -1457, -1457,  1065,   241,   928, -1457, -1457, -1457,
    6901, -1457,   558, -1457,  5877, -1457,   861,   862, -1457, -1457,
   -1457,    53, -1457, -1457, -1457,   572, -1457, -1457,   328,  2787,
   -1457, -1457,   337, -1457,   395,   877,   930,   931, -1457, -1457,
   -1457,   932,   934,   357,  3028, -1457,   935, -1457,   937, -1457,
   -1457, -1457,   368,   378,   959,   518,  3510,   381,   414,   785,
     536,   785,  6901,    30,   785,   754,  3510,  3510,   573,   575,
     425,  3510,  3510, -1457, -1457, -1457,   582, -1457,   429, -1457,
    5877,   938,   758,   920,   832, -1457,   460, -1457,   785,   762,
     285, -1457, -1457, -1457,  6901,  3510,   848,   687, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457,  3751, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457,    55,    44,    44,   752,    41,    41,
      41,    41,   560,   560, -1457, -1457,  5877,  5877,  6901,  6901,
   -1457,   480, -1457, -1457,   423,   542, -1457,   557, -1457, -1457,
   -1457,   584, -1457,   402,  3510,  3510,  3510, -1457,   591, -1457,
   -1457, -1457, -1457,   910, -1457, -1457,  6901,   471,   484,   606,
     910,   910,   910, -1457,   910,   910,   910, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457,   910, -1457,   910, -1457, -1457,   910,
     910, -1457, -1457, -1457, -1457, -1457, -1457,   508, -1457, -1457,
     216, -1457,    47, -1457,   209, -1457,   136, -1457,   996, -1457,
      66, -1457,   738,   165, -1457, -1457,   485, -1457, -1457,   692,
     728,   685, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,   366, -1457,
   -1457, -1457,   -15, -1457,   709, -1457,   753, -1457, -1457, -1457,
   -1457,    42, -1457,   178, -1457,   698, -1457,   -25, -1457, -1457,
   -1457,    75, -1457,    17, -1457,  -115, -1457,    35, -1457,   510,
   -1457,   701, -1457, -1457,  7086,   884,   241,   785,   993, -1457,
    6087,   965,   968,   970,   976, -1457,   291, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457,   697,   259, -1457,   890, -1457,
   -1457,  6901, -1457, -1457, -1457,   486, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457,   506, -1457, -1457, -1457, -1457,  3510, -1457,
     894, -1457, -1457,   904, -1457,  1009,  1012, -1457,   896, -1457,
   -1457, -1457,   886,   885, -1457,   521,   523,  6901, -1457, -1457,
   -1457,  3510, -1457,  3510,  3510,  3510,  6901, -1457,  1017,   998,
    1000,  1551, -1457, -1457,  1013, -1457,   686,  3510, -1457,    55,
    3510,   343,   526,   497,   955,   805,   806,   967, -1457, -1457,
     964,   853, -1457, -1457, -1457, -1457,  1030, -1457, -1457, -1457,
   -1457, -1457,  3269, -1457,   824,   826, -1457, -1457, -1457, -1457,
   -1457,  1020,   588,   606,   661,   964,   884,  1049,  6901,   664,
     726,   262,   479,  6901,   297,   232,  6901,   241,   -14,   -12,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
     768,   770, -1457, -1457,  4472,  5877,   690,   807, -1457, -1457,
    5877,   807, -1457, -1457, -1457,  5877,  3510,  1164, -1457,  5877,
    3510,  1198, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457,   -37,   940,   940,
   -1457, -1457,  6087, -1457, -1457, -1457,   813,  3510,   756,   589,
   -1457, -1457,  3510,  3510, -1457,  1236,   -94,  3510,   274, -1457,
     361, -1457,  1266, -1457,  3510, -1457, -1457,   795, -1457,  5877,
    3510,  7087,  3510,  7115, -1457,  3510,  7144,  7172, -1457,  3510,
   -1457, -1457,  7201, -1457,  3510,  7229, -1457, -1457,  7258, -1457,
   -1457,  3510, -1457, -1457,  7286,  3510,  7315,   750, -1457,   910,
    7086, -1457, -1457,  1026,  1027,  1029,  5189,  6505, -1457, -1457,
   -1457, -1457,   252,   252, -1457, -1457, -1457,  1031, -1457, -1457,
   -1457, -1457,  3510,  1064,   881,  3510,  3510,  3510,  1067,   -58,
   -1457,    87,  3510, -1457, -1457,   321,   529, -1457,   852, -1457,
   -1457,  3510,  1069,  1069, -1457, -1457,   855, -1457,  3510, -1457,
   -1457,   941,  1013,  1033,   533, -1457,    16,   987,   874, -1457,
   -1457,   990, -1457,    55,   149,    55,   958,   549,  1008,    71,
   -1457, -1457, -1457, -1457,  3510,  3510,   884, -1457, -1457,  1008,
   -1457,  6901,  1056, -1457, -1457, -1457, -1457,   952,   884,   923,
     924, -1457, -1457,  1066,   973, -1457, -1457, -1457,  6901,   -72,
     865,   949,  7086,  6901,   912,   884,   991,  6901,   991, -1457,
   -1457,   -65,  4950, -1457,   919,   336,  1087,  1068,  1070,  1095,
   -1457,  4711,   658,   711, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457,   254,  7343, -1457,  7372, -1457,   788,
   -1457, -1457,   788, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457,   992,   992, -1457, -1457,   788,  3510, -1457, -1457,   863,
    7400,   788,   788,   165, -1457, -1457, -1457, -1457, -1457,   788,
   -1457, -1457, -1457,   247, -1457, -1457, -1457,  7429,   788,   165,
     165, -1457,   866, -1457,   788, -1457,   788, -1457,   165,   788,
   -1457, -1457,   165,   788,   165,   165, -1457,   165,   788, -1457,
     165,   165, -1457,   788, -1457,   788, -1457,   733, -1457,   750,
   -1457, -1457, -1457,  1071,   963, -1457,   629, -1457,   630, -1457,
     785,  1074,  1075,   332, -1457, -1457,  6901,  1110,   988, -1457,
   -1457, -1457,  6901,  5877,    65, -1457, -1457,  5877,  3510,   969,
    1079, -1457, -1457,  3510, -1457,  6901,   660, -1457,   670,  1082,
   -1457,   712,   978, -1457,   497, -1457,  1078, -1457, -1457,  3751,
     806,  1032,   769, -1457,  3751,  3751,    71,   657,   657, -1457,
   -1457,   967,    55,   666,   792, -1457,    38,   916, -1457,   794,
    6901, -1457, -1457,  1007, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457,   549,    32,  3751,  3751,   933, -1457, -1457,
     910,   785,   884,   740, -1457,   884,   884,   714, -1457,     6,
   -1457, -1457, -1457,  1101, -1457,  4472,  6087,   750,  1099,   971,
     991,   884,  1108,  1106,  1108, -1457, -1457, -1457, -1457,  4950,
    4950,    57,  1007,  4472, -1457,  4711,  4711,  4711,  4711,  1124,
   -1457, -1457, -1457,  5877,  3510,  7457, -1457, -1457, -1457,   788,
    7486, -1457, -1457, -1457, -1457,  5877,  3510,  7514, -1457,  7543,
   -1457,  1549,   938,   733, -1457,  5877,  5877,   994,  6901, -1457,
   -1457,   252,   252,   587, -1457, -1457, -1457, -1457, -1457,  6901,
    3510,  1001, -1457,  6901,  3510, -1457, -1457,  3510, -1457, -1457,
     785,  1069, -1457, -1457,  1069, -1457, -1457,   884, -1457, -1457,
      41, -1457, -1457, -1457, -1457,    81,   553, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457,   942, -1457, -1457, -1457,    58,   884,
   -1457, -1457,    43, -1457, -1457,  1023, -1457, -1457,  3751,  3751,
     752,    37, -1457, -1457,    39, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457,   257, -1457,  1002,   915,   -72,   278, -1457,
     733, -1457, -1457,  1108, -1457,   884,   884, -1457, -1457,  1115,
   -1457, -1457,  1125, -1457, -1457, -1457, -1457, -1457,  3510, -1457,
     788, -1457, -1457, -1457,   788, -1457, -1457,   910,   938, -1457,
   -1457,  5877, -1457,   592,   718,   252, -1457, -1457, -1457,  1028,
   -1457, -1457,  1147, -1457,   671, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457,   116,  1007,   884, -1457, -1457, -1457,
     752,   752,  3751,  3510, -1457, -1457, -1457,   694,  5877,   938,
    4472, -1457, -1457,  1002,    25, -1457,   991, -1457,    77,   559,
   -1457, -1457,   910, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
    1134,  3510,  3510, -1457,   695,   704,  1007,   956,   705, -1457,
   -1457,   614,   614,   752, -1457, -1457, -1457, -1457,   278,   938,
   -1457, -1457, -1457,  1108,  1122, -1457, -1457, -1457, -1457,    76,
     107,   214,   223, -1457, -1457, -1457,  1050, -1457, -1457,    71,
   -1457,  1007, -1457,   111,   111, -1457, -1457,  1002, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457,   960, -1457, -1457, -1457,   938, -1457, -1457
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1457, -1457, -1457,  1161, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457,   435, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457,   179, -1457, -1457, -1457, -1457,  1167, -1457,  -239,  -689,
   -1457, -1457, -1457, -1457,   433, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457,   161, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
     182, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1327,  -201, -1457,
   -1457, -1457, -1457, -1457, -1109, -1457, -1457, -1457, -1457, -1457,
     667, -1457, -1457, -1457,   656, -1457, -1457,  -527, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1139, -1457, -1457, -1457, -1457, -1457, -1457,  -743,  -157,
   -1457,    19, -1457, -1457, -1227,  -301,   396,  -578,   662,    -8,
      13, -1457, -1457,   982, -1457, -1457, -1457,   605, -1457, -1457,
   -1457, -1457,   604, -1457, -1457, -1457,   319,   110, -1457, -1457,
   -1457, -1457,  1092,   607, -1457, -1457, -1457,   132, -1457, -1457,
   -1457, -1457,   735,   731, -1457,  -348,  -100,  -497,   397,  -494,
     392,   393, -1457, -1457, -1457,   873, -1457, -1457, -1457,  -636,
    -232, -1457, -1457, -1457,     4,   390, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457,   -10, -1457, -1457, -1457, -1457,
    -649, -1457, -1341,  -418, -1457, -1457, -1457, -1457, -1457,   689,
     303, -1457,   -55, -1457,  -204, -1457,  -555, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457,   235, -1457, -1457, -1457, -1457, -1457, -1457,  1080,
   -1457,   552, -1457,  -568,  -591, -1457,  -795,   244,  -392, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,   818,
   -1457,   820, -1457,   814,   767,   363,  -904,  -852, -1457, -1457,
   -1457,   118,   114,   -90,   345, -1457, -1457, -1457,   -71, -1457,
   -1293, -1457,  -219,   -78,   316,  -101, -1457, -1457, -1457, -1457,
    -310, -1417, -1457,  -314,  -724, -1457, -1457, -1457, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,
     650, -1457, -1457, -1457, -1291,  -403,  -334, -1457, -1456, -1393,
    -112, -1457,  -249, -1457, -1457, -1457, -1072,  -192, -1457, -1457,
   -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457, -1457,  -168,
   -1457, -1457,   376, -1457, -1457,    -6,   -22
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -323
static const yytype_int16 yytable[] =
{
     380,   826,   380,   457,   657,   893,   695,   582,   658,   659,
     660,   661,   594,   515,   386,  1053,   379,   599,   892,  1374,
     601,  1298,  1130,  1456,   604,    20,  1194,   399,  1215,   870,
    1412,   853,   393,   855,  1156,  1158,   858,  1103,  1498,   438,
    1510,   460,  1476,   872,   595,   967,  1493,   971,    29,  1563,
    1360,  1553,   463,   506,   871,   502,   889,  1375,   499,   500,
     878,   573,  1384,  1050,   890,  1305,    22,   567,    36,    37,
      38,   499,   500,   871,  1433,   903,   904,   692,  1468,  1005,
     567,   590,   574,  1555,   605,  1195,    22,    29,    10,  1012,
    1511,  1512,  1078,   683,  1021,   889,  1023,   605,  1026,  1287,
    1027,   328,  1032,   890,  1035,  1573,  1038,    36,    37,    38,
    1044,  1048,  1046,  1048,   503,   499,   500,  1609,   550,   590,
     410,  1640,   458,    16,   871,  1284,   453,   451,   411,    36,
      37,    38,   807,  1478,   454,   639,   640,   641,   642,   643,
     644,    98,   646,   647,   648,   649,   650,   651,   652,   653,
     551,  1555,  1469,    11,  1643,   871,   411,  1556,   828,  1153,
      21,  1157,   818,   684,   685,   319,   920,   459,  1036,  1154,
     326,   686,  1469,   940,   941,   942,  1479,   943,   944,   945,
      98,  1657,    98,   829,   856,   501,  1528,   946,  1140,   947,
    1344,  1641,   948,   949,  1152,  1037,  1434,  1203,  1562,   606,
    1610,   324,    98,   530,   412,   507,   504,   505,   461,  1652,
     455,   575,   607,   871,  1564,  1637,   882,   400,  1288,   464,
     819,  1470,  1350,  1644,   439,  1556,  1557,  1216,   818,  1217,
     596,  1503,   412,   380,  1354,  1344,   380,  1616,   401,  1051,
     893,  1552,   893,  1608,  1311,   521,   402,  1149,   522,  1361,
    1362,  1370,   516,   892,  1306,   892,  1376,  1377,  1024,  1646,
     891,  1597,   871,  1312,  1599,   391,   550,  1006,  1185,  1313,
    1649,   871,  1187,  1574,   818,   818,  1514,  1515,  1516,  1517,
     994,  1025,  1345,  1346,  1064,  1039,   819,  1196,  1197,  1198,
    1383,  1007,   329,   921,  1546,  1547,  1548,   888,  1566,   891,
    1033,  1065,  1058,    29,   380,  1629,   330,   331,   332,   333,
     390,   526,  1210,   527,  1059,  1013,   990,   448,  1493,   514,
     547,  1596,   403,  1034,  1227,  1060,   871,  1345,  1346,  1647,
     958,  1040,   819,   819,   819,   819,  1653,   449,   450,  1650,
    1654,  1041,   959,   545,  1290,  1314,  1315,  1316,  1014,   991,
    1317,  1318,   960,  1015,  1016,  1379,    25,   394,  1028,    26,
      27,   468,  1291,  1423,  1177,  1145,  1146,   523,   524,  1186,
     468,   992,  1544,   380,  1188,    29,   401,   833,  1191,   380,
     871,  1029,   407,   889,  1030,  1031,   836,   525,   380,   561,
     468,   890,   380,   380,   568,    36,    37,    38,   572,  1147,
    1137,   468,   405,   583,   547,   408,   841,  1138,   380,   592,
     406,   468,   528,   380,   468,   409,   380,   846,   818,   968,
     380,   593,   414,   529,   379,   597,   598,   847,  1233,   379,
     851,   380,   379,   802,   803,   415,   379,  1613,   608,   609,
     610,   969,   970,   380,   380,   909,   618,   468,  1485,  1424,
    1425,  1488,  1489,  1139,   802,   803,   468,   893,   468,   628,
     629,  1018,   468,   852,   893,  1265,   893,  1504,    98,  1148,
     892,   622,   329,  1149,   864,   624,   819,   892,   869,   892,
     630,   631,   632,  1019,  1020,   633,   330,   331,   332,   333,
     429,   539,   962,   876,   530,  1395,   416,  1068,   952,   953,
     540,   380,   963,   964,   417,   531,   671,  1271,  1272,   877,
     880,   674,   675,   468,   965,   966,   677,   676,  1400,   468,
     954,   955,  1258,   956,  1220,  1132,   881,   430,   380,   908,
    1403,  1221,   380,  1068,  1407,  1069,   418,  1390,   680,   468,
    1404,   680,  1409,  1545,   379,   435,  1411,  1391,  1392,   924,
     925,   926,  1405,  1406,   468,  1070,   468,   419,    29,  1393,
    1394,   835,   468,   818,   910,  1554,   468,   806,   818,   420,
    1083,  1499,  1084,   818,  1106,   468,   843,   818,  1292,   911,
     380,  1617,  1304,   483,   484,   485,   486,   487,   488,   468,
     468,   808,   468,   421,   489,   422,   379,   562,   380,   809,
     818,  1575,  1576,   865,   866,   831,   468,   490,   468,   850,
     927,  1224,   380,   832,   862,   867,   863,   912,  1221,   860,
     861,   819,   914,   868,   912,   913,   819,   818,   379,   423,
     915,   819,   919,   517,  1323,   819,  1584,  1324,  1585,   518,
    1325,  1326,  1327,  1328,   380,   380,   380,   380,   883,   433,
    1141,   922,  1600,   924,   925,   926,  1142,   928,   819,   923,
     515,   424,  1416,  1418,   818,   929,   930,   931,   932,   933,
    1417,  1419,  1003,   893,   380,  1004,  -322,  -322,   491,   492,
     493,   494,   495,   496,   425,   819,   892,   613,  1385,   434,
     547,   619,  1432,  1441,  1386,  1426,  1435,   916,   917,   918,
    1329,  1442,  1420,  1441,  1441,  1107,  1108,  1109,   934,   387,
     388,  1443,  1593,  1351,   927,  -322,   469,   470,   935,   471,
     472,   473,   819,   474,   475,   508,   509,   808,  1626,  -322,
    -322,  -322,  -322,   936,  1330,  1605,  1627,  1626,  1631,   426,
     497,  1387,  1178,  1179,  1180,  1628,  1632,  1388,   542,   543,
    1368,   427,  1331,  1332,  1373,   428,  1333,  1462,  1463,  1464,
    1465,   928,  1587,   442,  1588,  1213,  1546,  1547,  1548,   929,
     930,   931,   932,   933,   557,   558,  1229,  1230,  1633,   446,
    1634,  1494,  1047,  1484,   447,  1238,   499,   500,   380,  1242,
     328,  1244,  1245,   462,  1247,   938,   939,  1250,  1251,   950,
     951,   721,  1519,   722,   763,   764,  1042,  1043,   465,   380,
     723,   724,   934,   466,  1523,  1450,   725,   467,  1455,  1062,
    1063,   468,   935,  1483,  1529,  1530,  1099,  1100,   481,   726,
     727,   728,  1127,  1128,  1527,  1133,  1134,   936,     1,     2,
       3,     4,     5,     6,   482,   380,  1135,  1136,  1480,  1481,
     498,   998,  1207,   511,   380,  1445,  1446,   510,  1428,   380,
     512,  1071,   519,  1086,  1431,   520,  1533,  1534,  1452,  1453,
     628,   513,  1542,  1457,  1458,  1097,   548,  1440,  1466,  1467,
    1473,  1474,  1104,  1486,  1487,   554,  1087,  1088,  1089,   401,
    1257,   818,  1490,  1491,   405,   818,   655,   656,   662,   663,
     883,   664,   665,   396,   397,   534,   380,   672,   673,  1655,
    1656,   380,   906,   906,   380,   410,   416,   453,   560,   569,
    1572,   571,   547,   578,   579,   680,   584,  1144,   591,  1615,
    1151,  -227,   380,   380,   600,   602,   603,   620,   380,   611,
    1583,   612,   623,   380,  1176,   634,   635,   380,   636,   819,
    1582,   654,   666,   819,   667,   668,   669,   689,  1189,  -227,
     692,   690,  1192,   691,   696,   805,   825,  -227,   827,   848,
     380,   837,   838,   839,   818,   840,   844,  1606,   845,   874,
    1590,  1560,  1561,   873,   875,   887,   871,   879,   993,  1205,
     998,  1607,  1009,  1002,  1211,  1212,  1612,   380,   997,  1219,
    1581,   818,   550,  1011,  1022,  1054,  1228,  1045,  1055,  1048,
    1056,  1536,  1234,   818,  1236,  1539,  1057,  1239,  1073,  1075,
    1066,  1243,  1076,   818,   818,  1072,  1248,  1091,  1259,  1077,
    1636,  1638,   819,  1253,   380,   380,  1078,  1255,  1092,  1082,
    1093,  1642,  1645,  1648,  1651,  1111,  1098,  1113,  1117,  1115,
    1116,  1270,  1119,  1121,  1124,  1618,  1125,  1126,  1131,   819,
    1159,  1160,  1200,  1204,  1206,  1603,  1182,  1260,  1261,  1231,
    1262,   819,  1274,  1276,  1303,  1277,  1282,  1293,  1295,  1659,
    1299,   819,   819,  1301,  1307,  1275,  1309,  1308,  1279,  1280,
    1281,  1322,  1343,  1352,  1353,  1289,  1355,  1356,  1358,  1357,
    1365,  1366,  1413,  1369,  1294,  1371,  1380,  1383,  1381,   380,
    1382,   883,  1414,  1401,  1398,  1415,  1410,  1421,  1422,  1429,
    1438,  1430,  1444,  1447,  1437,   379,   380,  1449,  1451,  1472,
    1367,   380,    98,  1482,  1497,   380,  1501,  1348,  1349,   818,
     380,  1505,  1359,  1506,  1502,  1518,  1531,   547,  1559,   380,
    1570,   547,  1378,  1538,  1568,  1551,  1577,  1592,  1578,  1591,
    1623,  1176,  1630,  1639,  1469,    15,  1658,   961,  1202,  -227,
      14,  1225,  -227,  -227,  -227,  -227,   818,  -227,  -227,   996,
    -227,  1208,  1513,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  1567,   697,  -227,  -227,  -227,   819,  1399,   693,
     717,  -227,  -227,   476,  1052,   854,  1102,   857,  1300,   445,
    1500,  1286,   859,   638,  1454,  1123,   637,   688,  1427,  1535,
     617,   907,   452,  -227,  -227,   576,  -227,   577,   587,  1321,
    1085,  1310,  1461,  1448,   819,  -227,  1105,  1550,  -227,  -227,
    1460,  1129,  1477,  1595,  1602,   849,   972,  1496,  1571,  1543,
    1532,     0,  1090,     0,   380,     0,     0,     0,     0,     0,
     380,   380,     0,     0,     0,   380,     0,     0,     0,     0,
     379,     0,     0,   380,     0,     0,   379,   973,     0,   974,
     975,   976,   977,   978,   979,   980,     0,     0,     0,   379,
       0,     0,     0,     0,   981,   982,   983,   984,   985,   986,
       0,  1436,     0,     0,     0,     0,  1439,     0,   380,   987,
     988,   989,     0,     0,     0,   744,     0,     0,   745,   746,
     747,   748,     0,   749,  1475,     0,   750,     0,     0,   751,
     752,   753,   754,   755,   756,   757,   758,   759,     0,     0,
     760,   761,   762,   380,   380,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1176,     0,   380,   380,     0,
       0,   380,     0,   380,   380,   380,   380,     0,     0,  1507,
    1508,   380,     0,  1176,     0,  1176,  1176,  1176,  1176,     0,
       0,    11,     0,   380,   763,   764,  1520,     0,     0,     0,
       0,     0,     0,   380,   380,     0,   380,     0,  1524,     0,
       0,     0,     0,     0,     0,     0,     0,   380,     0,     0,
       0,   380,  1270,     0,  1190,     0,     0,   745,   746,   747,
     748,     0,   749,   379,     0,   750,     0,   379,   751,   752,
     753,   754,   755,   756,   757,   758,   759,     0,     0,   760,
     761,   762,     0,  1537,     0,     0,     0,  1540,  1193,     0,
    1541,   745,   746,   747,   748,     0,   749,     0,     0,   750,
       0,     0,   751,   752,   753,   754,   755,   756,   757,   758,
     759,     0,     0,   760,   761,   762,     0,     0,     0,     0,
      11,     0,     0,   763,   764,     0,  1214,     0,     0,   745,
     746,   747,   748,     0,   749,     0,     0,   750,     0,     0,
     751,   752,   753,   754,   755,   756,   757,   758,   759,   380,
    1579,   760,   761,   762,    11,     0,  1226,   763,   764,   745,
     746,   747,   748,     0,   749,     0,     0,   750,     0,     0,
     751,   752,   753,   754,   755,   756,   757,   758,   759,     0,
       0,   760,   761,   762,     0,     0,   380,     0,   380,     0,
       0,     0,    11,     0,     0,   763,   764,     0,     0,     0,
    1176,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1604,     0,     0,     0,
       0,     0,    11,     0,     0,   763,   764,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1624,  1625,   337,   338,   339,   340,
     341,   342,   343,   344,   345,    48,    49,    50,    51,    52,
      53,    54,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,   358,    87,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,     0,     0,     0,     0,
       0,   359,   360,    97,     0,     0,     0,    99,     0,     0,
       0,     0,   102,   361,   104,   362,   106,     0,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   363,   364,   118,
     365,   120,     0,   121,   366,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   367,   137,
     138,   139,   140,   141,   368,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,     0,   155,   156,
     157,     0,   369,   159,   370,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   371,
     186,   187,   372,   189,   190,   191,   192,   193,   373,   195,
     374,   197,   198,   199,   200,   201,   202,   375,   204,   376,
     377,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,     0,   745,   746,   747,   748,     0,   749,     0,     0,
     750,     0,     0,   751,   752,   753,   754,   755,   756,   757,
     758,   759,     0,     0,   760,   761,   762,     0,     0,     0,
       0,     0,    22,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,   678,    25,     0,     0,
      26,    27,     0,    28,     0,    29,     0,    30,    31,    32,
       0,    33,    34,    35,   679,    11,     0,     0,   763,   764,
       0,     0,  1094,     0,  1095,    36,    37,    38,    39,    40,
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
     214,   215,   216,    22,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,     0,   678,    25,     0,
       0,    26,    27,     0,    28,     0,    29,     0,    30,    31,
      32,     0,    33,    34,    35,   687,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,    37,    38,    39,
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
     213,   214,   215,   216,    22,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,    25,
       0,     0,    26,    27,     0,    28,     0,    29,     0,    30,
      31,    32,     0,    33,    34,    35,   398,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,    37,    38,
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
     212,   213,   214,   215,   216,    22,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,    24,     0,     0,     0,
      25,     0,     0,    26,    27,     0,    28,     0,    29,     0,
      30,    31,    32,     0,    33,    34,    35,     0,     0,     0,
       0,     0,     0,     0,     0,   670,     0,     0,    36,    37,
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
     211,   212,   213,   214,   215,   216,    22,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,    25,     0,     0,    26,    27,     0,    28,     0,    29,
       0,    30,    31,    32,     0,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,   834,     0,     0,    36,
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
     210,   211,   212,   213,   214,   215,   216,    22,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     0,
       0,     0,    25,     0,     0,    26,    27,     0,    28,     0,
      29,     0,    30,    31,    32,     0,    33,    34,    35,     0,
       0,     0,     0,     0,     0,     0,     0,   842,     0,     0,
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
     209,   210,   211,   212,   213,   214,   215,   216,    22,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,   678,    25,     0,     0,    26,    27,     0,    28,
       0,    29,     0,    30,    31,    32,     0,    33,    34,    35,
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
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,     0,   155,   156,   157,     0,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,    22,
       0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,    25,     0,     0,    26,    27,     0,
      28,     0,    29,     0,    30,    31,    32,     0,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,     0,     0,     0,     0,     0,
      95,    96,    97,     0,     0,    98,    99,   100,   101,     0,
       0,   102,   103,   104,   105,   106,     0,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,     0,   155,   156,   157,
       0,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
      22,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,    25,     0,     0,    26,    27,
       0,    28,     0,    29,     0,    30,    31,    32,     0,    33,
      34,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,   358,    87,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,     0,     0,     0,     0,
       0,    95,    96,    97,     0,     0,    98,    99,   100,   101,
       0,     0,   102,   361,   104,   362,   106,     0,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   363,   364,   118,
     365,   120,     0,   121,   366,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,     0,   155,   156,
     157,     0,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   371,
     186,   187,   372,   189,   190,   191,   192,   193,   373,   195,
     374,   197,   198,   199,   200,   201,   202,   203,   204,   376,
     377,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,    22,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,    25,     0,     0,    26,
      27,     0,    28,     0,    29,     0,    30,    31,    32,     0,
      33,    34,    35,     0,     0,     0,     0,     0,     0,     0,
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
     147,   148,   698,   150,   151,   152,   153,   154,     0,   155,
     699,   157,     0,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,    22,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,    25,     0,     0,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    34,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,     0,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   358,    87,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,     0,     0,
       0,     0,     0,    95,    96,    97,     0,     0,    98,    99,
     100,   101,     0,     0,   102,   361,   104,   362,   106,     0,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   363,
     364,   118,   365,   120,     0,   121,   366,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     367,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,     0,
     155,   156,   157,     0,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   371,   186,   187,   372,   189,   190,   191,   192,   193,
     373,   195,   374,   197,   198,   199,   200,   201,   202,   203,
     204,   376,   377,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,    23,     0,     0,     0,     0,     0,     0,
       0,     0,  1162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1163,     0,     0,     0,     0,     0,  1164,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1165,   382,    41,
      42,    43,   383,    45,    46,   384,    48,    49,    50,    51,
      52,    53,    54,  1166,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,    67,    68,    69,    70,    71,
      72,    73,     0,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,   358,    87,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,     0,     0,     0,
       0,     0,   359,   360,    97,     0,     0,     0,    99,   100,
     101,     0,     0,   102,   361,   104,   362,   106,     0,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   363,   364,
     118,   365,   120,     0,   121,   366,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   367,
     137,   138,   139,   140,   141,   368,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,     0,   155,
     156,   157,     0,   385,   159,   370,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     371,   186,   187,   372,   189,   190,   191,   192,   193,   373,
     195,   374,   197,   198,  1167,  1168,   201,   202,   375,   204,
     376,   377,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,    23,     0,     0,     0,     0,     0,     0,     0,
       0,  1162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1165,   382,    41,    42,
      43,   383,    45,    46,   384,    48,    49,    50,    51,    52,
      53,    54,  1166,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,   358,    87,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,     0,     0,     0,     0,
       0,   359,   360,    97,     0,     0,     0,    99,   100,   101,
       0,     0,   102,   361,   104,   362,   106,     0,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   363,   364,   118,
     365,   120,     0,   121,   366,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   367,   137,
     138,   139,   140,   141,   368,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,     0,   155,   156,
     157,     0,   385,   159,   370,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   371,
     186,   187,   372,   189,   190,   191,   192,   193,   373,   195,
     374,   197,   198,   199,   200,   201,   202,   375,   204,   376,
     377,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   381,   382,    41,    42,    43,
     383,    45,    46,   384,    48,    49,    50,    51,    52,    53,
      54,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,    67,    68,    69,    70,    71,    72,    73,
       0,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,   358,    87,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,     0,     0,     0,     0,     0,
     359,   360,    97,     0,     0,     0,    99,   100,   101,     0,
       0,   102,   361,   104,   362,   106,     0,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   363,   364,   118,   365,
     120,     0,   121,   366,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   367,   137,   138,
     139,   140,   141,   368,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,     0,   155,   156,   157,
       0,   385,   159,   370,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   371,   186,
     187,   372,   189,   190,   191,   192,   193,   373,   195,   374,
     197,   198,   199,   200,   201,   202,   375,   204,   376,   377,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
    1263,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   810,
    1264,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   381,   382,    41,    42,    43,   383,
      45,    46,   384,   811,    49,    50,    51,    52,    53,    54,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,   358,    87,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,     0,     0,     0,     0,     0,   359,
     360,    97,     0,     0,     0,    99,     0,     0,     0,     0,
     102,   361,   104,   362,   106,     0,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   363,   364,   118,   365,   120,
       0,   121,   366,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   367,   137,   138,   139,
     140,   141,   368,   812,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,     0,   155,   156,   157,     0,
     385,   159,   813,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   371,   186,   187,
     372,   189,   190,   191,   192,   193,   373,   195,   374,   197,
     198,   199,   200,   201,   202,   814,   204,   376,   377,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   563,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   564,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   337,   338,   339,   340,   341,   342,   343,
     344,   345,    48,    49,    50,    51,    52,    53,    54,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,    67,    68,    69,    70,    71,    72,    73,     0,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,   358,    87,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    94,     0,     0,     0,     0,     0,   359,   360,
      97,     0,     0,     0,    99,     0,     0,     0,     0,   102,
     361,   104,   362,   106,     0,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   363,   364,   118,   365,   120,     0,
     121,   366,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   367,   137,   138,   139,   140,
     141,   368,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,     0,   155,   156,   157,     0,   369,
     159,   370,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   371,   186,   187,   372,
     189,   190,   191,   192,   193,   373,   195,   374,   197,   198,
     199,   200,   201,   202,   375,   204,   376,   377,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   614,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   615,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   337,   338,   339,   340,   341,   342,   343,   344,
     345,    48,    49,    50,    51,    52,    53,    54,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     358,    87,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     0,     0,   359,   360,    97,
       0,     0,     0,    99,     0,     0,     0,     0,   102,   361,
     104,   362,   106,     0,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   363,   364,   118,   365,   120,     0,   121,
     366,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   367,   137,   138,   139,   140,   141,
     368,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,     0,   155,   156,   157,     0,   369,   159,
     370,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   371,   186,   187,   372,   189,
     190,   191,   192,   193,   373,   195,   374,   197,   198,   199,
     200,   201,   202,   375,   204,   376,   377,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   810,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   381,   382,    41,    42,    43,   383,    45,    46,
     384,   811,    49,    50,    51,    52,    53,    54,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     358,    87,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     0,     0,   359,   360,    97,
       0,     0,     0,    99,     0,     0,     0,     0,   102,   361,
     104,   362,   106,     0,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   363,   364,   118,   365,   120,     0,   121,
     366,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   367,   137,   138,   139,   140,   141,
     368,   812,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,     0,   155,   156,   157,     0,   385,   159,
     813,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   371,   186,   187,   372,   189,
     190,   191,   192,   193,   373,   195,   374,   197,   198,   199,
     200,   201,   202,   814,   204,   376,   377,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   810,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   381,   382,    41,    42,    43,   383,    45,    46,
     384,    48,    49,    50,    51,    52,    53,    54,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     358,    87,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     0,     0,   359,   360,    97,
       0,     0,     0,    99,     0,     0,     0,     0,   102,   361,
     104,   362,   106,     0,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   363,   364,   118,   365,   120,     0,   121,
     366,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   367,   137,   138,   139,   140,   141,
     368,   812,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,     0,   155,   156,   157,     0,   385,   159,
     813,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   371,   186,   187,   372,   189,
     190,   191,   192,   193,   373,   195,   374,   197,   198,   199,
     200,   201,   202,   814,   204,   376,   377,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   580,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   337,   338,   339,   340,   341,   342,   343,   344,   345,
      48,    49,    50,    51,    52,    53,    54,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,    67,
      68,    69,    70,    71,    72,    73,     0,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   358,
      87,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,     0,     0,     0,     0,     0,   359,   360,    97,     0,
       0,   581,    99,     0,     0,     0,     0,   102,   361,   104,
     362,   106,     0,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   363,   364,   118,   365,   120,     0,   121,   366,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   367,   137,   138,   139,   140,   141,   368,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   157,     0,   369,   159,   370,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   371,   186,   187,   372,   189,   190,
     191,   192,   193,   373,   195,   374,   197,   198,   199,   200,
     201,   202,   375,   204,   376,   377,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,  1267,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     337,   338,   339,   340,   341,   342,   343,   344,   345,    48,
      49,    50,    51,    52,    53,    54,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,    67,    68,
      69,    70,    71,    72,    73,     0,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,   358,    87,
       0,     0,     0,    88,    89,    90,    91,    92,    93,    94,
       0,     0,     0,     0,     0,   359,   360,    97,     0,     0,
       0,    99,     0,     0,     0,     0,   102,   361,   104,   362,
     106,     0,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   363,   364,   118,   365,   120,     0,   121,   366,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   367,   137,   138,   139,   140,   141,   368,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,     0,   155,   156,   157,     0,   369,   159,   370,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   371,   186,   187,   372,   189,   190,   191,
     192,   193,   373,   195,   374,   197,   198,   199,   200,   201,
     202,   375,   204,   376,   377,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   625,     0,     0,     0,     0,
       0,   337,   338,   339,   340,   341,   342,   343,   344,   345,
      48,    49,    50,    51,    52,    53,    54,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,    67,
      68,    69,    70,    71,    72,    73,     0,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   358,
      87,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,     0,     0,     0,     0,     0,   359,   360,    97,     0,
       0,     0,    99,     0,     0,     0,     0,   102,   361,   104,
     362,   106,     0,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   363,   364,   118,   365,   120,     0,   121,   366,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   367,   137,   138,   139,   140,   141,   368,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   157,     0,   369,   159,   370,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   371,   186,   187,   372,   189,   190,
     191,   192,   193,   373,   195,   374,   197,   198,   199,   200,
     201,   202,   375,   204,   376,   377,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   337,   338,   339,   340,
     341,   342,   343,   344,   345,    48,    49,    50,    51,    52,
      53,    54,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,   358,    87,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,     0,     0,     0,     0,
       0,   359,   360,    97,     0,     0,     0,    99,     0,     0,
       0,     0,   102,   361,   104,   362,   106,     0,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   363,   364,   118,
     365,   120,     0,   121,   366,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   367,   137,
     138,   139,   140,   141,   368,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,     0,   155,   156,
     157,     0,   369,   159,   370,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   371,
     186,   187,   372,   189,   190,   191,   192,   193,   373,   195,
     374,   197,   198,   199,   200,   201,   202,   375,   204,   376,
     377,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,    49,    50,    51,    52,    53,    54,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,    67,
      68,    69,    70,    71,    72,    73,     0,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   358,
      87,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,     0,     0,     0,     0,     0,   359,   360,    97,     0,
       0,     0,    99,     0,     0,     0,     0,   102,   361,   104,
     362,   106,     0,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   363,   364,   118,     0,   120,     0,   121,     0,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   367,   137,   138,   139,   140,   141,   368,
       0,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   157,     0,     0,   159,     0,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   371,   186,   187,   372,   189,   190,
     191,   192,   193,   373,   195,   374,   197,   198,   199,   200,
     201,   202,   375,   204,   376,   377,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,     0,  1235,     0,     0,
     745,   746,   747,   748,     0,   749,     0,     0,   750,     0,
       0,   751,   752,   753,   754,   755,   756,   757,   758,   759,
       0,     0,   760,   761,   762,  1237,     0,     0,   745,   746,
     747,   748,     0,   749,     0,     0,   750,     0,     0,   751,
     752,   753,   754,   755,   756,   757,   758,   759,     0,     0,
     760,   761,   762,     0,  1240,     0,     0,   745,   746,   747,
     748,     0,   749,    11,     0,   750,   763,   764,   751,   752,
     753,   754,   755,   756,   757,   758,   759,     0,     0,   760,
     761,   762,  1241,     0,     0,   745,   746,   747,   748,     0,
     749,    11,     0,   750,   763,   764,   751,   752,   753,   754,
     755,   756,   757,   758,   759,     0,     0,   760,   761,   762,
       0,  1246,     0,     0,   745,   746,   747,   748,     0,   749,
      11,     0,   750,   763,   764,   751,   752,   753,   754,   755,
     756,   757,   758,   759,     0,     0,   760,   761,   762,  1249,
       0,     0,   745,   746,   747,   748,     0,   749,    11,     0,
     750,   763,   764,   751,   752,   753,   754,   755,   756,   757,
     758,   759,     0,     0,   760,   761,   762,     0,  1252,     0,
       0,   745,   746,   747,   748,     0,   749,    11,     0,   750,
     763,   764,   751,   752,   753,   754,   755,   756,   757,   758,
     759,     0,     0,   760,   761,   762,  1254,     0,     0,   745,
     746,   747,   748,     0,   749,    11,     0,   750,   763,   764,
     751,   752,   753,   754,   755,   756,   757,   758,   759,     0,
       0,   760,   761,   762,     0,  1256,     0,     0,   745,   746,
     747,   748,     0,   749,    11,     0,   750,   763,   764,   751,
     752,   753,   754,   755,   756,   757,   758,   759,     0,     0,
     760,   761,   762,  1396,     0,     0,   745,   746,   747,   748,
       0,   749,    11,     0,   750,   763,   764,   751,   752,   753,
     754,   755,   756,   757,   758,   759,     0,     0,   760,   761,
     762,     0,  1397,     0,     0,   745,   746,   747,   748,     0,
     749,    11,     0,   750,   763,   764,   751,   752,   753,   754,
     755,   756,   757,   758,   759,     0,     0,   760,   761,   762,
    1402,     0,     0,   745,   746,   747,   748,     0,   749,    11,
       0,   750,   763,   764,   751,   752,   753,   754,   755,   756,
     757,   758,   759,     0,     0,   760,   761,   762,     0,  1408,
       0,     0,   745,   746,   747,   748,     0,   749,    11,     0,
     750,   763,   764,   751,   752,   753,   754,   755,   756,   757,
     758,   759,     0,     0,   760,   761,   762,  1521,     0,     0,
     745,   746,   747,   748,     0,   749,    11,     0,   750,   763,
     764,   751,   752,   753,   754,   755,   756,   757,   758,   759,
       0,     0,   760,   761,   762,     0,  1522,     0,     0,   745,
     746,   747,   748,     0,   749,    11,     0,   750,   763,   764,
     751,   752,   753,   754,   755,   756,   757,   758,   759,     0,
       0,   760,   761,   762,  1525,     0,     0,   745,   746,   747,
     748,     0,   749,    11,     0,   750,   763,   764,   751,   752,
     753,   754,   755,   756,   757,   758,   759,     0,     0,   760,
     761,   762,     0,  1526,     0,     0,   745,   746,   747,   748,
       0,   749,    11,     0,   750,   763,   764,   751,   752,   753,
     754,   755,   756,   757,   758,   759,     0,     0,   760,   761,
     762,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,     0,     0,   763,   764,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
       0,     0,   763,   764
};

static const yytype_int16 yycheck[] =
{
      22,   556,    24,   160,   501,   654,   533,   410,   502,   503,
     504,   505,   430,   245,    24,   810,    22,   435,   654,  1158,
     438,  1093,   926,  1316,   442,     6,    63,    35,   122,   620,
    1257,   599,    28,   601,   938,   939,   604,   889,  1365,     9,
    1381,    59,  1333,   621,    33,   734,    40,   736,    32,    10,
     122,  1468,    59,    12,    48,    11,    40,   122,    34,    35,
     628,    41,  1171,   806,    48,    49,     9,   401,    52,    53,
      54,    34,    35,    48,     9,   666,   667,    50,    40,   768,
     414,   415,    62,    40,    33,   122,     9,    32,   251,   778,
    1381,  1382,   150,   152,   783,    40,   785,    33,   787,    12,
     789,    40,   791,    48,   793,  1498,   795,    52,    53,    54,
     799,   125,   801,   125,    70,    34,    35,  1573,     9,   453,
      40,    45,    59,   190,    48,   183,    40,    19,    48,    52,
      53,    54,   550,   101,    48,   483,   484,   485,   486,   487,
     488,   125,   490,   491,   492,   493,   494,   495,   496,   497,
      41,    40,   114,   316,    47,    48,    48,   114,   105,   173,
       0,   173,   554,   222,   223,   186,   693,   104,   283,   183,
     173,   230,   114,   700,   701,   702,   144,   704,   705,   706,
     125,  1637,   125,   130,   602,   161,  1413,   714,   931,   716,
     119,   115,   719,   720,   937,   310,   131,   992,   161,   148,
     175,   180,   125,   176,   124,   164,   162,   163,   226,  1626,
     124,   191,   148,    48,   175,  1608,   634,    19,   131,   226,
     554,   183,  1126,   116,   194,   114,   183,   321,   620,   323,
     219,  1370,   124,   255,  1138,   119,   258,  1578,    40,   807,
     889,   183,   891,  1570,    95,   255,    48,   241,   258,   321,
     322,  1155,   248,   889,  1106,   891,   321,   322,   283,    45,
     244,  1554,    48,   114,  1555,   107,     9,   282,   957,   120,
      47,    48,   961,  1500,   666,   667,  1385,  1386,  1387,  1388,
     115,   306,   211,   212,    25,   250,   620,   324,   325,   326,
      12,   306,   231,   696,   213,   214,   215,   645,    41,   244,
     283,    42,    11,    32,   326,  1596,   245,   246,   247,   248,
     129,   298,  1001,   300,    23,   273,   250,    48,    40,    48,
     326,   205,   124,   306,  1013,    34,    48,   211,   212,   115,
     283,   296,   666,   667,   668,   669,  1629,    68,    69,   116,
    1631,   306,   295,   324,    23,   196,   197,   198,   306,   283,
     201,   202,   305,   311,   312,    19,    24,   105,   283,    27,
      28,    33,    41,    31,   955,    68,    69,    20,    21,   960,
      33,   305,  1444,   395,   965,    32,    40,    49,   969,   401,
      48,   306,    40,    40,   309,   310,    49,    40,   410,   395,
      33,    48,   414,   415,   402,    52,    53,    54,   406,   102,
     138,    33,    40,   411,   410,    40,    49,   145,   430,   417,
      48,    33,    40,   435,    33,    40,   438,    49,   810,   283,
     442,   429,    40,    51,   430,   433,   434,    49,  1019,   435,
      49,   453,   438,   192,   193,    40,   442,  1576,   446,   447,
     448,   305,   306,   465,   466,    22,   454,    33,  1352,   117,
     118,  1355,  1356,   191,   192,   193,    33,  1106,    33,   465,
     466,   283,    33,    49,  1113,  1056,  1115,  1371,   125,   237,
    1106,   458,   231,   241,    49,   462,   810,  1113,    49,  1115,
     467,   468,   469,   305,   306,   472,   245,   246,   247,   248,
      48,   281,   283,    33,   176,  1184,    40,   831,   282,   283,
     290,   523,   293,   294,    48,   187,   514,  1062,  1063,    49,
     225,   519,   520,    33,   305,   306,   524,   523,  1207,    33,
     304,   305,  1049,   307,   250,   928,   241,     9,   550,    49,
     283,   257,   554,   867,  1223,    49,    19,   283,   525,    33,
     293,   528,  1231,  1447,   550,     9,  1235,   293,   294,    65,
      66,    67,   305,   306,    33,    49,    33,    19,    32,   305,
     306,   569,    33,   955,    22,  1469,    33,   548,   960,    19,
      49,  1366,    49,   965,    48,    33,   584,   969,    49,    22,
     602,    22,    49,    13,    14,    15,    16,    17,    18,    33,
      33,    33,    33,    19,    24,    19,   602,    41,   620,    41,
     992,  1505,  1506,   611,   612,    33,    33,    37,    33,   596,
     126,   250,   634,    41,    41,    33,    41,    33,   257,   606,
     607,   955,   220,    41,    33,    41,   960,  1019,   634,    19,
     228,   965,    41,    30,    85,   969,    44,    88,    46,    36,
      91,    92,    93,    94,   666,   667,   668,   669,   635,    48,
     171,   180,  1556,    65,    66,    67,   177,   173,   992,   188,
     892,    19,    33,    33,  1056,   181,   182,   183,   184,   185,
      41,    41,   306,  1322,   696,   309,   192,   193,   108,   109,
     110,   111,   112,   113,    19,  1019,  1322,   452,    30,    48,
     696,   456,  1283,    33,    36,  1273,  1287,   684,   685,   686,
     151,    41,  1270,    33,    33,   208,   209,   210,   224,   122,
     123,    41,    41,  1131,   126,   231,   131,   132,   234,   134,
     135,   136,  1056,   138,   139,   165,   166,    33,    33,   245,
     246,   247,   248,   249,   185,    41,    41,    33,    33,    19,
     170,    30,    52,    53,    54,    41,    41,    36,   317,   318,
    1153,    19,   203,   204,  1157,    19,   207,    91,    92,    93,
      94,   173,    44,     9,    46,  1004,   213,   214,   215,   181,
     182,   183,   184,   185,   105,   106,  1015,  1016,   164,    40,
     166,  1359,   804,  1351,    40,  1024,    34,    35,   810,  1028,
      40,  1030,  1031,    59,  1033,   189,   190,  1036,  1037,   291,
     292,   250,  1393,   252,   319,   320,   296,   297,    48,   831,
     259,   260,   224,   234,  1405,  1309,   265,   240,  1315,   122,
     123,    33,   234,  1350,  1415,  1416,   140,   141,   156,   278,
     279,   280,   171,   172,  1412,   171,   172,   249,     3,     4,
       5,     6,     7,     8,   157,   867,   120,   121,  1345,  1346,
     195,   262,   263,   169,   876,   143,   144,   158,  1276,   881,
     160,   848,    21,   871,  1282,    21,  1421,  1422,    99,   100,
     876,   168,  1440,   216,   217,   881,   180,  1295,    86,    87,
      86,    87,   890,   143,   144,   152,   873,   874,   875,    40,
    1047,  1283,   178,   179,    40,  1287,   499,   500,   506,   507,
     887,   508,   509,    30,    31,   190,   928,   517,   518,  1633,
    1634,   933,   668,   669,   936,    40,    40,    40,    29,    48,
    1498,    41,   928,    41,    41,   912,    48,   933,    41,  1578,
     936,    12,   954,   955,    33,     9,    33,   152,   960,    48,
    1531,    48,   159,   965,   954,     9,   137,   969,   138,  1283,
    1528,    63,   159,  1287,   152,   152,   152,    52,   966,    40,
      50,   125,   970,   125,   173,    37,   105,    48,   106,    10,
     992,    41,    41,    41,  1366,    41,    41,  1568,    41,    59,
    1535,  1478,  1479,   225,   152,   137,    48,   225,   250,   997,
     262,  1569,   283,   308,  1002,  1003,  1574,  1019,   306,  1007,
    1527,  1393,     9,   250,   306,    40,  1014,   306,    40,   125,
      40,  1429,  1020,  1405,  1022,  1433,    40,  1025,   114,    10,
     130,  1029,    10,  1415,  1416,   131,  1034,    10,  1050,   133,
    1608,  1609,  1366,  1041,  1056,  1057,   150,  1045,    40,   154,
      40,  1619,  1620,  1621,  1622,    90,    33,   242,    84,   243,
      83,  1057,   199,    23,   230,  1582,   230,    37,     9,  1393,
     292,   291,   122,   250,   308,  1562,   259,    41,    41,   274,
      41,  1405,    41,     9,    41,   194,     9,   225,     9,  1657,
     225,  1415,  1416,   142,    97,  1072,    96,   213,  1075,  1076,
    1077,   133,    84,    37,   142,  1082,   173,   173,   125,    33,
     235,   152,  1259,   191,  1091,   114,    19,    12,    40,  1131,
      40,  1098,    41,   250,   122,   152,   250,    43,    43,     9,
      41,   133,    40,   145,   155,  1131,  1148,    49,    96,   213,
    1152,  1153,   125,   200,    33,  1157,    37,  1124,  1125,  1531,
    1162,    33,  1148,    37,   173,    21,   152,  1153,   125,  1171,
     235,  1157,  1162,   152,   152,   213,    41,    10,    33,   131,
      26,  1171,   206,    41,   114,     4,   206,   732,   989,   250,
       3,  1010,   253,   254,   255,   256,  1568,   258,   259,   746,
     261,   999,  1383,   264,   265,   266,   267,   268,   269,   270,
     271,   272,  1493,   537,   275,   276,   277,  1531,  1206,   532,
     538,   282,   283,   221,   808,   600,   887,   603,  1098,   117,
    1367,  1079,   605,   482,  1314,   912,   481,   528,  1273,  1423,
     453,   669,   142,   304,   305,   407,   307,   407,   414,  1115,
     867,  1113,  1322,  1304,  1568,   316,   891,  1456,   319,   320,
    1318,   925,  1343,  1553,  1558,   595,   250,  1359,  1497,  1441,
    1418,    -1,   876,    -1,  1276,    -1,    -1,    -1,    -1,    -1,
    1282,  1283,    -1,    -1,    -1,  1287,    -1,    -1,    -1,    -1,
    1276,    -1,    -1,  1295,    -1,    -1,  1282,   281,    -1,   283,
     284,   285,   286,   287,   288,   289,    -1,    -1,    -1,  1295,
      -1,    -1,    -1,    -1,   298,   299,   300,   301,   302,   303,
      -1,  1288,    -1,    -1,    -1,    -1,  1293,    -1,  1330,   313,
     314,   315,    -1,    -1,    -1,   250,    -1,    -1,   253,   254,
     255,   256,    -1,   258,  1330,    -1,   261,    -1,    -1,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    -1,    -1,
     275,   276,   277,  1365,  1366,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1365,    -1,  1379,  1380,    -1,
      -1,  1383,    -1,  1385,  1386,  1387,  1388,    -1,    -1,  1379,
    1380,  1393,    -1,  1383,    -1,  1385,  1386,  1387,  1388,    -1,
      -1,   316,    -1,  1405,   319,   320,  1394,    -1,    -1,    -1,
      -1,    -1,    -1,  1415,  1416,    -1,  1418,    -1,  1406,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1429,    -1,    -1,
      -1,  1433,  1418,    -1,   250,    -1,    -1,   253,   254,   255,
     256,    -1,   258,  1429,    -1,   261,    -1,  1433,   264,   265,
     266,   267,   268,   269,   270,   271,   272,    -1,    -1,   275,
     276,   277,    -1,  1430,    -1,    -1,    -1,  1434,   250,    -1,
    1437,   253,   254,   255,   256,    -1,   258,    -1,    -1,   261,
      -1,    -1,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,   275,   276,   277,    -1,    -1,    -1,    -1,
     316,    -1,    -1,   319,   320,    -1,   250,    -1,    -1,   253,
     254,   255,   256,    -1,   258,    -1,    -1,   261,    -1,    -1,
     264,   265,   266,   267,   268,   269,   270,   271,   272,  1531,
    1518,   275,   276,   277,   316,    -1,   250,   319,   320,   253,
     254,   255,   256,    -1,   258,    -1,    -1,   261,    -1,    -1,
     264,   265,   266,   267,   268,   269,   270,   271,   272,    -1,
      -1,   275,   276,   277,    -1,    -1,  1568,    -1,  1570,    -1,
      -1,    -1,   316,    -1,    -1,   319,   320,    -1,    -1,    -1,
    1570,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1563,    -1,    -1,    -1,
      -1,    -1,   316,    -1,    -1,   319,   320,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1591,  1592,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,   108,
     109,   110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,
      -1,   120,   121,   122,    -1,    -1,    -1,   126,    -1,    -1,
      -1,    -1,   131,   132,   133,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    -1,   187,   188,
     189,    -1,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   253,   254,   255,   256,    -1,   258,    -1,    -1,
     261,    -1,    -1,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,   275,   276,   277,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      -1,    38,    39,    40,    41,   316,    -1,    -1,   319,   320,
      -1,    -1,   321,    -1,   323,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    -1,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,   108,   109,   110,   111,   112,   113,   114,    -1,    -1,
      -1,    -1,    -1,   120,   121,   122,    -1,    -1,   125,   126,
     127,   128,    -1,    -1,   131,   132,   133,   134,   135,    -1,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
     187,   188,   189,    -1,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    -1,    34,    35,
      36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,   108,   109,   110,   111,   112,   113,   114,    -1,
      -1,    -1,    -1,    -1,   120,   121,   122,    -1,    -1,   125,
     126,   127,   128,    -1,    -1,   131,   132,   133,   134,   135,
      -1,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      -1,   187,   188,   189,    -1,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,    34,
      35,    36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    -1,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,   108,   109,   110,   111,   112,   113,   114,
      -1,    -1,    -1,    -1,    -1,   120,   121,   122,    -1,    -1,
     125,   126,   127,   128,    -1,    -1,   131,   132,   133,   134,
     135,    -1,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,   187,   188,   189,    -1,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,   108,   109,   110,   111,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,    -1,
      -1,   125,   126,   127,   128,    -1,    -1,   131,   132,   133,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,   187,   188,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,   108,   109,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,
      -1,    -1,   125,   126,   127,   128,    -1,    -1,   131,   132,
     133,   134,   135,    -1,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,    -1,   187,   188,   189,    -1,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    24,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    -1,    34,    35,    36,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,   108,   109,   110,   111,
     112,   113,   114,    -1,    -1,    -1,    -1,    -1,   120,   121,
     122,    -1,    -1,   125,   126,   127,   128,    -1,    -1,   131,
     132,   133,   134,   135,    -1,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,    -1,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,   187,   188,   189,    -1,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    -1,    34,    35,    36,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,   108,   109,   110,
     111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,   120,
     121,   122,    -1,    -1,   125,   126,   127,   128,    -1,    -1,
     131,   132,   133,   134,   135,    -1,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    -1,   187,   188,   189,    -1,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    -1,    34,    35,    36,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,   108,   109,
     110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
     120,   121,   122,    -1,    -1,   125,   126,   127,   128,    -1,
      -1,   131,   132,   133,   134,   135,    -1,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
      -1,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    -1,    34,    35,    36,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,   108,
     109,   110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,
      -1,   120,   121,   122,    -1,    -1,   125,   126,   127,   128,
      -1,    -1,   131,   132,   133,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    -1,   187,   188,
     189,    -1,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    -1,    34,    35,    36,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
     108,   109,   110,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,   120,   121,   122,    -1,    -1,   125,   126,   127,
     128,    -1,    -1,   131,   132,   133,   134,   135,    -1,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,   187,
     188,   189,    -1,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    -1,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,   108,   109,   110,   111,   112,   113,   114,    -1,    -1,
      -1,    -1,    -1,   120,   121,   122,    -1,    -1,   125,   126,
     127,   128,    -1,    -1,   131,   132,   133,   134,   135,    -1,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
     187,   188,   189,    -1,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
     108,   109,   110,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,   120,   121,   122,    -1,    -1,    -1,   126,   127,
     128,    -1,    -1,   131,   132,   133,   134,   135,    -1,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,   187,
     188,   189,    -1,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,   108,
     109,   110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,
      -1,   120,   121,   122,    -1,    -1,    -1,   126,   127,   128,
      -1,    -1,   131,   132,   133,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    -1,   187,   188,
     189,    -1,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,   108,   109,
     110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
     120,   121,   122,    -1,    -1,    -1,   126,   127,   128,    -1,
      -1,   131,   132,   133,   134,   135,    -1,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
      -1,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,   108,   109,   110,
     111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,   120,
     121,   122,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,
     131,   132,   133,   134,   135,    -1,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    -1,   187,   188,   189,    -1,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,   108,   109,   110,   111,
     112,   113,   114,    -1,    -1,    -1,    -1,    -1,   120,   121,
     122,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,   131,
     132,   133,   134,   135,    -1,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,    -1,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,   187,   188,   189,    -1,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,   108,   109,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,
      -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,
     133,   134,   135,    -1,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,    -1,   187,   188,   189,    -1,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,   108,   109,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,
      -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,
     133,   134,   135,    -1,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,    -1,   187,   188,   189,    -1,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,   108,   109,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,
      -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,
     133,   134,   135,    -1,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,    -1,   187,   188,   189,    -1,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,   108,   109,   110,   111,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,    -1,
      -1,   125,   126,    -1,    -1,    -1,    -1,   131,   132,   133,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,   187,   188,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    -1,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,   108,   109,   110,   111,   112,   113,   114,
      -1,    -1,    -1,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,   126,    -1,    -1,    -1,    -1,   131,   132,   133,   134,
     135,    -1,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,   187,   188,   189,    -1,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    49,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,   108,   109,   110,   111,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,   133,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,   187,   188,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,   108,
     109,   110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,
      -1,   120,   121,   122,    -1,    -1,    -1,   126,    -1,    -1,
      -1,    -1,   131,   132,   133,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    -1,   187,   188,
     189,    -1,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,   108,   109,   110,   111,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,   133,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,    -1,   150,    -1,   152,    -1,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
      -1,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,   187,   188,   189,    -1,    -1,   192,    -1,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   250,    -1,    -1,
     253,   254,   255,   256,    -1,   258,    -1,    -1,   261,    -1,
      -1,   264,   265,   266,   267,   268,   269,   270,   271,   272,
      -1,    -1,   275,   276,   277,   250,    -1,    -1,   253,   254,
     255,   256,    -1,   258,    -1,    -1,   261,    -1,    -1,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    -1,    -1,
     275,   276,   277,    -1,   250,    -1,    -1,   253,   254,   255,
     256,    -1,   258,   316,    -1,   261,   319,   320,   264,   265,
     266,   267,   268,   269,   270,   271,   272,    -1,    -1,   275,
     276,   277,   250,    -1,    -1,   253,   254,   255,   256,    -1,
     258,   316,    -1,   261,   319,   320,   264,   265,   266,   267,
     268,   269,   270,   271,   272,    -1,    -1,   275,   276,   277,
      -1,   250,    -1,    -1,   253,   254,   255,   256,    -1,   258,
     316,    -1,   261,   319,   320,   264,   265,   266,   267,   268,
     269,   270,   271,   272,    -1,    -1,   275,   276,   277,   250,
      -1,    -1,   253,   254,   255,   256,    -1,   258,   316,    -1,
     261,   319,   320,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,   275,   276,   277,    -1,   250,    -1,
      -1,   253,   254,   255,   256,    -1,   258,   316,    -1,   261,
     319,   320,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,   275,   276,   277,   250,    -1,    -1,   253,
     254,   255,   256,    -1,   258,   316,    -1,   261,   319,   320,
     264,   265,   266,   267,   268,   269,   270,   271,   272,    -1,
      -1,   275,   276,   277,    -1,   250,    -1,    -1,   253,   254,
     255,   256,    -1,   258,   316,    -1,   261,   319,   320,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    -1,    -1,
     275,   276,   277,   250,    -1,    -1,   253,   254,   255,   256,
      -1,   258,   316,    -1,   261,   319,   320,   264,   265,   266,
     267,   268,   269,   270,   271,   272,    -1,    -1,   275,   276,
     277,    -1,   250,    -1,    -1,   253,   254,   255,   256,    -1,
     258,   316,    -1,   261,   319,   320,   264,   265,   266,   267,
     268,   269,   270,   271,   272,    -1,    -1,   275,   276,   277,
     250,    -1,    -1,   253,   254,   255,   256,    -1,   258,   316,
      -1,   261,   319,   320,   264,   265,   266,   267,   268,   269,
     270,   271,   272,    -1,    -1,   275,   276,   277,    -1,   250,
      -1,    -1,   253,   254,   255,   256,    -1,   258,   316,    -1,
     261,   319,   320,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,   275,   276,   277,   250,    -1,    -1,
     253,   254,   255,   256,    -1,   258,   316,    -1,   261,   319,
     320,   264,   265,   266,   267,   268,   269,   270,   271,   272,
      -1,    -1,   275,   276,   277,    -1,   250,    -1,    -1,   253,
     254,   255,   256,    -1,   258,   316,    -1,   261,   319,   320,
     264,   265,   266,   267,   268,   269,   270,   271,   272,    -1,
      -1,   275,   276,   277,   250,    -1,    -1,   253,   254,   255,
     256,    -1,   258,   316,    -1,   261,   319,   320,   264,   265,
     266,   267,   268,   269,   270,   271,   272,    -1,    -1,   275,
     276,   277,    -1,   250,    -1,    -1,   253,   254,   255,   256,
      -1,   258,   316,    -1,   261,   319,   320,   264,   265,   266,
     267,   268,   269,   270,   271,   272,    -1,    -1,   275,   276,
     277,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     316,    -1,    -1,   319,   320,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,
      -1,    -1,   319,   320
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,   328,   329,   330,
     251,   316,   338,   339,   363,   330,   190,   334,   335,   333,
     458,     0,     9,    11,    20,    24,    27,    28,    30,    32,
      34,    35,    36,    38,    39,    40,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   108,   109,
     110,   111,   112,   113,   114,   120,   121,   122,   125,   126,
     127,   128,   131,   132,   133,   134,   135,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   187,   188,   189,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   465,   466,   467,
     468,   469,   470,   472,   477,   488,   491,   497,   498,   499,
     500,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   541,   542,
     543,   544,   545,   548,   549,   550,   561,   563,   565,   566,
     567,   570,   572,   573,   574,   575,   585,   586,   587,   588,
     589,   590,   591,   592,   594,   596,   598,   639,   640,   641,
     642,   643,   644,   645,   648,   649,   650,   651,   653,   660,
     661,   665,   666,   667,   668,   677,   680,   682,   683,   186,
     424,   425,   340,   364,   180,   331,   173,   336,    40,   231,
     245,   246,   247,   248,   456,   459,   460,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,   103,   120,
     121,   132,   134,   146,   147,   149,   153,   167,   173,   191,
     193,   218,   221,   227,   229,   236,   238,   239,   540,   682,
     683,    55,    56,    60,    63,   191,   532,   122,   123,   551,
     129,   107,   562,   521,   105,   553,   512,   512,    41,   466,
      19,    40,    48,   124,   571,    40,    48,    40,    40,    40,
      40,    48,   124,   576,    40,    40,    40,    48,    19,    19,
      19,    19,    19,    19,    19,    19,    19,    19,    19,    48,
       9,   646,   647,    48,    48,     9,   473,   474,     9,   194,
     478,   479,     9,   489,   490,   489,    40,    40,    48,    68,
      69,    19,   576,    40,    48,   124,   568,   456,    59,   104,
      59,   226,    59,    59,   226,    48,   234,   240,    33,   131,
     132,   134,   135,   136,   138,   139,   470,   471,   480,   481,
     482,   156,   157,    13,    14,    15,    16,    17,    18,    24,
      37,   108,   109,   110,   111,   112,   113,   170,   195,    34,
      35,   161,    11,    70,   162,   163,    12,   164,   165,   166,
     158,   169,   160,   168,    48,   517,   521,    30,    36,    21,
      21,   532,   532,    20,    21,    40,   467,   467,    40,    51,
     176,   187,   426,   427,   190,   428,   429,   430,   431,   281,
     290,   341,   317,   318,   366,   458,   652,   682,   180,   337,
       9,    41,   462,   463,   152,   461,   552,   105,   106,   564,
      29,   682,    41,    11,    41,   593,   600,   653,   466,    48,
     569,    41,   466,    41,    62,   191,   596,   598,    41,    41,
      41,   125,   652,   466,    48,   577,   595,   600,   599,   601,
     653,    41,   466,   466,   540,    33,   219,   466,   466,   540,
      33,   540,     9,    33,   540,    33,   148,   148,   466,   466,
     466,    48,    48,   569,    11,    41,   597,   601,   466,   569,
     152,   580,   467,   159,   467,    49,   678,   679,   682,   682,
     467,   467,   467,   467,     9,   137,   138,   499,   500,   502,
     502,   502,   502,   502,   502,   501,   502,   502,   502,   502,
     502,   502,   502,   502,    63,   505,   505,   504,   506,   506,
     506,   506,   507,   507,   508,   508,   159,   152,   152,   152,
      49,   466,   522,   522,   466,   466,   682,   466,    23,    41,
     467,   546,   547,   152,   222,   223,   230,    41,   546,    52,
     125,   125,    50,   427,   434,   434,   173,   431,   180,   188,
     432,   433,   435,   436,   437,   438,   439,   440,   441,   442,
     445,   446,   447,   450,   451,   453,   454,   465,   638,   654,
     681,   250,   252,   259,   260,   265,   278,   279,   280,   342,
     343,   346,   347,   351,   352,   353,   354,   355,   356,   359,
     360,   361,   362,   365,   250,   253,   254,   255,   256,   258,
     261,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     275,   276,   277,   319,   320,   363,   367,   368,   369,   370,
     371,   372,   373,   376,   377,   381,   382,   383,   384,   385,
     390,   391,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   192,   193,   455,    37,   458,   540,    33,    41,
      40,    64,   174,   193,   236,   581,   583,   584,   585,   653,
     669,   670,   671,   673,   674,   105,   553,   106,   105,   130,
     518,    33,    41,    49,    49,   466,    49,    41,    41,    41,
      41,    49,    49,   466,    41,    41,    49,    49,    10,   647,
     467,    49,    49,   580,   474,   580,   540,   479,   580,   490,
     467,   467,    41,    41,    49,   466,   466,    33,    41,    49,
     581,    48,   464,   225,    59,   152,    33,    49,   580,   225,
     225,   241,   540,   467,   483,   484,   485,   137,   502,    40,
      48,   244,   516,   537,   604,   607,   608,   609,   610,   611,
     612,   613,   614,   581,   581,   578,   584,   578,    49,    22,
      22,    22,    33,    41,   220,   228,   467,   467,   467,    41,
     434,   652,   180,   188,    65,    66,    67,   126,   173,   181,
     182,   183,   184,   185,   224,   234,   249,   458,   189,   190,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     291,   292,   282,   283,   304,   305,   307,   348,   283,   295,
     305,   348,   283,   293,   294,   305,   306,   366,   283,   305,
     306,   366,   250,   281,   283,   284,   285,   286,   287,   288,
     289,   298,   299,   300,   301,   302,   303,   313,   314,   315,
     250,   283,   305,   250,   115,   464,   371,   306,   262,   386,
     387,   388,   308,   306,   309,   366,   282,   306,   375,   283,
     378,   250,   366,   273,   306,   311,   312,   392,   283,   305,
     306,   366,   306,   366,   283,   306,   366,   366,   283,   306,
     309,   310,   366,   283,   306,   366,   283,   310,   366,   250,
     296,   306,   296,   297,   366,   306,   366,   683,   125,   603,
     455,   580,   463,   583,    40,    40,    40,    40,    11,    23,
      34,   582,   122,   123,    25,    42,   130,   602,   653,    49,
      49,   467,   131,   114,   475,    10,    10,   133,   150,   492,
     494,   495,   154,    49,    49,   602,   466,   467,   467,   467,
     679,    10,    40,    40,   321,   323,   662,   682,    33,   140,
     141,   486,   483,   604,   466,   611,    48,   208,   209,   210,
     615,    90,   637,   242,   606,   243,    83,    84,   621,   199,
     616,    23,   579,   547,   230,   230,    37,   171,   172,   621,
     603,     9,   652,   171,   172,   120,   121,   138,   145,   191,
     455,   171,   177,   443,   682,    68,    69,   102,   237,   241,
     657,   682,   455,   173,   183,   449,   603,   173,   603,   292,
     291,   344,    20,    30,    36,    55,    71,   232,   233,   414,
     415,   416,   417,   420,   421,   422,   532,   581,    52,    53,
      54,   345,   259,   349,   350,   366,   581,   366,   581,   466,
     250,   581,   466,   250,    63,   122,   324,   325,   326,   357,
     122,   358,   358,   583,   250,   466,   308,   263,   387,   389,
     366,   466,   466,   365,   250,   122,   321,   323,   374,   466,
     250,   257,   379,   380,   250,   379,   250,   366,   466,   365,
     365,   274,   393,   581,   466,   250,   466,   250,   365,   466,
     250,   250,   365,   466,   365,   365,   250,   365,   466,   250,
     365,   365,   250,   466,   250,   466,   250,   456,   434,   683,
      41,    41,    41,    11,    41,   581,   672,    41,   675,   676,
     682,   553,   553,   560,    41,   467,     9,   194,   476,   467,
     467,   467,     9,   496,   183,   493,   494,    12,   131,   467,
      23,    41,    49,   225,   467,     9,   663,   664,   663,   225,
     484,   142,   487,    41,    49,    49,   604,    97,   213,    96,
     608,    95,   114,   120,   196,   197,   198,   201,   202,   605,
     618,   609,   133,    85,    88,    91,    92,    93,    94,   151,
     185,   203,   204,   207,   622,   623,   624,   625,   626,   629,
     634,   635,   636,    84,   119,   211,   212,   617,   467,   467,
     603,   540,    37,   142,   603,   173,   173,    33,   125,   682,
     122,   321,   322,   658,   659,   235,   152,   683,   652,   191,
     603,   114,   448,   652,   448,   122,   321,   322,   532,    19,
      19,    40,    40,    12,   421,    30,    36,    30,    36,   423,
     283,   293,   294,   305,   306,   366,   250,   250,   122,   466,
     366,   250,   250,   283,   293,   305,   306,   366,   250,   366,
     250,   366,   461,   456,    41,   152,    33,    41,    33,    41,
     580,    43,    43,    31,   117,   118,   464,   549,   540,     9,
     133,   540,   581,     9,   131,   581,   467,   155,    41,   467,
     540,    33,    41,    41,    40,   143,   144,   145,   615,    49,
     506,    96,    99,   100,   503,   504,   617,   216,   217,   620,
     620,   610,    91,    92,    93,    94,    86,    87,    40,   114,
     183,   628,   213,    86,    87,   682,   651,   622,   101,   144,
     504,   504,   200,   434,   580,   603,   143,   144,   603,   603,
     178,   179,   444,    40,   464,   656,   657,    33,   414,   583,
     456,    37,   173,   448,   603,    33,    37,   532,   532,   418,
     539,   651,   651,   415,   421,   421,   421,   421,    21,   581,
     466,   250,   250,   581,   466,   250,   250,   464,   461,   581,
     581,   152,   676,   553,   553,   551,   540,   467,   152,   540,
     467,   467,   580,   664,   663,   603,   213,   214,   215,   619,
     619,   213,   183,   628,   603,    40,   114,   183,   631,   125,
     504,   504,   161,    10,   175,   452,    41,   462,   152,   655,
     235,   659,   464,   656,   461,   603,   603,    41,    33,   466,
     332,   434,   464,   581,    44,    46,   554,    44,    46,   555,
     553,   131,    10,    41,   627,   627,   205,   617,   632,   651,
     603,   630,   630,   504,   467,    41,   581,   464,   414,   655,
     175,   457,   464,   448,   419,   537,   539,    22,   434,   556,
     558,   557,   559,    26,   467,   467,    33,    41,    41,   651,
     206,    33,    41,   164,   166,   633,   464,   656,   464,    41,
      45,   115,   464,    47,   116,   464,    45,   115,   464,    47,
     116,   464,   628,   617,   651,   631,   631,   655,   206,   464
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
#line 785 "../src/parser/XQParser.y"
    {
    SET_BUILT_IN_NAMESPACE(XQillaFunction::XQillaPrefix, XQillaFunction::XMLChFunctionURI);
  }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 791 "../src/parser/XQParser.y"
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
#line 802 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (8)].signature)->argSpecs = (yyvsp[(5) - (8)].argSpecs);
    (yyvsp[(2) - (8)].signature)->returnType = (yyvsp[(6) - (8)].sequenceType);
    QP->_function = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(2) - (8)].signature), (yyvsp[(7) - (8)].astNode), true, MEMMGR));
  }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 813 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].signature)->argSpecs = (yyvsp[(2) - (3)].argSpecs);
    (yyvsp[(1) - (3)].signature)->returnType = (yyvsp[(3) - (3)].sequenceType);
    QP->_signature = (yyvsp[(1) - (3)].signature);
  }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 822 "../src/parser/XQParser.y"
    {
    printf("  { 0, 0, 0, 0, 0 }\n};\n\n");

    UTF8Str module(QP->_moduleName);
    printf("static const DelayedModule %s_module = { %s_file, %s_prefix, %s_uri, %s_functions };\n",
           module.str(), module.str(), module.str(), module.str(), module.str());
  }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 833 "../src/parser/XQParser.y"
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
#line 870 "../src/parser/XQParser.y"
    {
    printf("static const DelayedModule::FuncDef %s_functions[] = {\n", UTF8(QP->_moduleName));
  }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 874 "../src/parser/XQParser.y"
    {
  }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 880 "../src/parser/XQParser.y"
    {
    XMLBuffer buf;

    const XMLCh *localname = XPath2NSUtils::getLocalName((yyvsp[(4) - (8)].str));

    printf("  {\n    \"%s\", %d, %s, %d, %d,\n", UTF8(localname), (int)((yyvsp[(5) - (8)].argSpecs) ? (yyvsp[(5) - (8)].argSpecs)->size() : 0),
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

  case 19:

/* Line 1455 of yacc.c  */
#line 916 "../src/parser/XQParser.y"
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
#line 945 "../src/parser/XQParser.y"
    {
  }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 948 "../src/parser/XQParser.y"
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
#line 972 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 976 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 995 "../src/parser/XQParser.y"
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
#line 1014 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, signature, 0, MEMMGR));
  }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 1019 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 1024 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 1031 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 1036 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 1041 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 1049 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 1053 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 1059 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 1064 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 1074 "../src/parser/XQParser.y"
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
#line 1087 "../src/parser/XQParser.y"
    {    
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, signature, 0, true, MEMMGR));
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1092 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 1099 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1104 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1112 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1116 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1124 "../src/parser/XQParser.y"
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
#line 1151 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1155 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 1162 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1168 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1173 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1178 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 1187 "../src/parser/XQParser.y"
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
#line 1211 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1215 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1222 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1227 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1232 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1237 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1248 "../src/parser/XQParser.y"
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
#line 1266 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1270 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1277 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1282 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1290 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1315 "../src/parser/XQParser.y"
    {
  }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1318 "../src/parser/XQParser.y"
    {
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1321 "../src/parser/XQParser.y"
    {
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1324 "../src/parser/XQParser.y"
    {
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1327 "../src/parser/XQParser.y"
    {
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1330 "../src/parser/XQParser.y"
    {
  }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1333 "../src/parser/XQParser.y"
    {
  }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1336 "../src/parser/XQParser.y"
    {
  }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1339 "../src/parser/XQParser.y"
    {
  }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1342 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1345 "../src/parser/XQParser.y"
    {
  }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1348 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1351 "../src/parser/XQParser.y"
    {
  }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1354 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1357 "../src/parser/XQParser.y"
    {
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1360 "../src/parser/XQParser.y"
    {
  }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1363 "../src/parser/XQParser.y"
    {
  }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1366 "../src/parser/XQParser.y"
    {
  }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1376 "../src/parser/XQParser.y"
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
#line 1388 "../src/parser/XQParser.y"
    {
  }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1391 "../src/parser/XQParser.y"
    {
  }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1397 "../src/parser/XQParser.y"
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
#line 1411 "../src/parser/XQParser.y"
    {
    (yyval.alias) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTypeAlias(0, 0, MEMMGR));
  }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1415 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].alias)->setURI(uri);
    (yyvsp[(1) - (2)].alias)->setName(name);
    (yyval.alias) = (yyvsp[(1) - (2)].alias);
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1422 "../src/parser/XQParser.y"
    {
    (yyval.alias) = (yyvsp[(1) - (3)].alias);
    (yyval.alias)->setType((yyvsp[(3) - (3)].itemType));
  }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1432 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1437 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1442 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1450 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1458 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1469 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1479 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1483 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1490 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1499 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1503 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1508 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1516 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1520 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1525 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1530 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1559 "../src/parser/XQParser.y"
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
#line 1577 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1581 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1586 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1595 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1604 "../src/parser/XQParser.y"
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
#line 1624 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1628 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1633 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1641 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1646 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1650 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1657 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1661 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1669 "../src/parser/XQParser.y"
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
#line 1682 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1686 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1696 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1700 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1708 "../src/parser/XQParser.y"
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
#line 1726 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1730 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1737 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1742 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1747 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1755 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1761 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1769 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1777 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1784 "../src/parser/XQParser.y"
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
#line 1798 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1802 "../src/parser/XQParser.y"
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
#line 1816 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1825 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1832 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1836 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1843 "../src/parser/XQParser.y"
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
#line 1878 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1882 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1887 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1893 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1902 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1906 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1913 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1917 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1924 "../src/parser/XQParser.y"
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
#line 1942 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), (XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1946 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1953 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1958 "../src/parser/XQParser.y"
    {
    const_cast<ArgumentSpec*>((yyvsp[(1) - (3)].letTuple)->getVar())->setType((yyvsp[(3) - (3)].sequenceType));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1966 "../src/parser/XQParser.y"
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
#line 1984 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1988 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1996 "../src/parser/XQParser.y"
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
#line 2018 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 2022 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 2029 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 2037 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 2046 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2054 "../src/parser/XQParser.y"
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
#line 2092 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2096 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 2103 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 2110 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 2119 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2128 "../src/parser/XQParser.y"
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
#line 2155 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 2159 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2166 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2178 "../src/parser/XQParser.y"
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
#line 2205 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2209 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 2216 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 2226 "../src/parser/XQParser.y"
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
#line 2238 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 2242 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 2247 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 2256 "../src/parser/XQParser.y"
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
#line 2269 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 2273 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 2278 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 2287 "../src/parser/XQParser.y"
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
#line 2301 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2305 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 2318 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 2323 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 2335 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 2339 "../src/parser/XQParser.y"
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
#line 2347 "../src/parser/XQParser.y"
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
#line 2360 "../src/parser/XQParser.y"
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
#line 2368 "../src/parser/XQParser.y"
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
#line 2381 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2388 "../src/parser/XQParser.y"
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
#line 2427 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 2431 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 2435 "../src/parser/XQParser.y"
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
#line 2453 "../src/parser/XQParser.y"
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
#line 2471 "../src/parser/XQParser.y"
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
#line 2481 "../src/parser/XQParser.y"
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
#line 2495 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2503 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2509 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 2515 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 2521 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 2532 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 2536 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 2564 "../src/parser/XQParser.y"
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
#line 2584 "../src/parser/XQParser.y"
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
#line 2608 "../src/parser/XQParser.y"
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
#line 2622 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 2626 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 2630 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 2634 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 2638 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 2642 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 2648 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 2654 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 2658 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 2662 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 2694 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 2702 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 2707 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 2716 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 2721 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 2730 "../src/parser/XQParser.y"
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
#line 2801 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2809 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2814 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2823 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2828 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 2837 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 2847 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 2851 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2859 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2863 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 299:

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

  case 300:

/* Line 1455 of yacc.c  */
#line 2887 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 301:

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

  case 302:

/* Line 1455 of yacc.c  */
#line 2908 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 2916 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2920 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 2925 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2934 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2938 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 2946 "../src/parser/XQParser.y"
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
#line 2956 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2968 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2975 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2979 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 2987 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 2992 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 3001 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (7)].signature)->argSpecs = (yyvsp[(5) - (7)].argSpecs);
    (yyvsp[(2) - (7)].signature)->returnType = (yyvsp[(6) - (7)].sequenceType);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), (yyvsp[(2) - (7)].signature), (yyvsp[(7) - (7)].astNode), true, MEMMGR));
  }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 3012 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 3016 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 3025 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 3033 "../src/parser/XQParser.y"
    {
    (yyval.signature) = new (MEMMGR) FunctionSignature(MEMMGR);
  }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 3037 "../src/parser/XQParser.y"
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

  case 324:

/* Line 1455 of yacc.c  */
#line 3050 "../src/parser/XQParser.y"
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

  case 325:

/* Line 1455 of yacc.c  */
#line 3063 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (2)].signature)->updating != FunctionSignature::OP_DEFAULT)
      yyerror((yylsp[(2) - (2)]), "Function option 'updating' already specified [err:XPST0003]");
    (yyvsp[(1) - (2)].signature)->updating = FunctionSignature::OP_TRUE;
    (yyval.signature) = (yyvsp[(1) - (2)].signature);
  }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 3072 "../src/parser/XQParser.y"
    { (yyval.boolean) = true; }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 3072 "../src/parser/XQParser.y"
    { (yyval.boolean) = false; }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 3075 "../src/parser/XQParser.y"
    { (yyval.boolean) = false; }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 3075 "../src/parser/XQParser.y"
    { (yyval.boolean) = true; }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 3079 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 3083 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 3091 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 3096 "../src/parser/XQParser.y"
    {
    ArgumentSpecs* paramList = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 3106 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 3114 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 3122 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 3135 "../src/parser/XQParser.y"
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

  case 351:

/* Line 1455 of yacc.c  */
#line 3173 "../src/parser/XQParser.y"
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

  case 353:

/* Line 1455 of yacc.c  */
#line 3218 "../src/parser/XQParser.y"
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

  case 354:

/* Line 1455 of yacc.c  */
#line 3231 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 3246 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 3253 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 3261 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 3272 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 3276 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 3286 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 3290 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 3300 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 3307 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 3315 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 3319 "../src/parser/XQParser.y"
    {
    ASTNode *literal = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::INTEGER, X("0"), MEMMGR));
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(3) - (5)].str), literal, MEMMGR));
  }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 3328 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 3336 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) CountTuple(0, (yyvsp[(3) - (3)].str), MEMMGR));
  }
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 3344 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 3349 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 3357 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 3367 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 3374 "../src/parser/XQParser.y"
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

  case 381:

/* Line 1455 of yacc.c  */
#line 3389 "../src/parser/XQParser.y"
    {
    SequenceType *zero_or_one = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType((ItemType*)&ItemType::ITEM, SequenceType::QUESTION_MARK));

    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAtomize((yyval.astNode), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPromoteUntyped((yyval.astNode), (ItemType*)&ItemType::STRING, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs((yyval.astNode), zero_or_one, MEMMGR));
  }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 3403 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 3407 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 3411 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 3418 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 3427 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 3431 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 3440 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 3448 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 3459 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 3467 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 3478 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR));
  }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 3485 "../src/parser/XQParser.y"
    {
    XQTypeswitch::Cases::iterator it = (yyvsp[(2) - (2)].caseClauses)->begin();
    for(; it != (yyvsp[(2) - (2)].caseClauses)->end(); ++it) {
      (yyvsp[(1) - (2)].caseClauses)->push_back(*it);
    }

    (yyval.caseClauses) = (yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 3498 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 3502 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 3510 "../src/parser/XQParser.y"
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

  case 399:

/* Line 1455 of yacc.c  */
#line 3528 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses) = new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), 0)));
  }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 3533 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(SequenceTypeUnion, (yylsp[(2) - (3)]));
    (yyvsp[(1) - (3)].caseClauses)->push_back(WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(1) - (3)].caseClauses)->back()->getQName(), (yyvsp[(3) - (3)].sequenceType), 0)));
    (yyval.caseClauses) = (yyvsp[(1) - (3)].caseClauses);
  }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 3542 "../src/parser/XQParser.y"
    {
    (yyval.str) = 0;
  }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 3546 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 3554 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 3562 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OR) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 3576 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::AND) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 3595 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 3599 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 3602 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 3603 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 3607 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 3611 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 3615 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3619 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 3623 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 3627 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 3631 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 3635 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 3639 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 3643 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 3647 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 3651 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3660 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 3664 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 3673 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionCall(0, BuiltInModules::core.uri, MEMMGR->getPooledString("to"), args, MEMMGR));
  }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 3685 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 3689 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 3698 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 3702 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 3706 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 3710 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3719 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 3723 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 3732 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 3736 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 3745 "../src/parser/XQParser.y"
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

  case 446:

/* Line 1455 of yacc.c  */
#line 3767 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 3777 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 3786 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 3795 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 3801 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 3822 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 3826 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 3830 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 3838 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 3845 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 3858 "../src/parser/XQParser.y"
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

  case 467:

/* Line 1455 of yacc.c  */
#line 3879 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 3888 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 3894 "../src/parser/XQParser.y"
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

  case 472:

/* Line 1455 of yacc.c  */
#line 3919 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ItemType(ItemType::TEST_DOCUMENT))));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 3933 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 3939 "../src/parser/XQParser.y"
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

  case 479:

/* Line 1455 of yacc.c  */
#line 3961 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 3971 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 3978 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 3987 "../src/parser/XQParser.y"
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

  case 486:

/* Line 1455 of yacc.c  */
#line 4010 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::CHILD;
  }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 4014 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::DESCENDANT;
  }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 4018 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ATTRIBUTE;
  }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 4022 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::SELF;
  }
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 4026 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::DESCENDANT_OR_SELF;
  }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 4030 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::FOLLOWING_SIBLING;
  }
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 4034 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::FOLLOWING;
  }
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 4038 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::NAMESPACE;
  }
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 4046 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 4054 "../src/parser/XQParser.y"
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

  case 496:

/* Line 1455 of yacc.c  */
#line 4071 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 4088 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PARENT;
  }
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 4092 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ANCESTOR;
  }
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 4096 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PRECEDING_SIBLING;
  }
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 4100 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PRECEDING;
  }
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 4104 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ANCESTOR_OR_SELF;
  }
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 4112 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::PARENT, step, MEMMGR));
  }
    break;

  case 504:

/* Line 1455 of yacc.c  */
#line 4124 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 4134 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 4146 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 4153 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 4160 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 4173 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 528:

/* Line 1455 of yacc.c  */
#line 4202 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 4213 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 4217 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 4225 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 4233 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 4243 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 4253 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 4257 "../src/parser/XQParser.y"
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

  case 537:

/* Line 1455 of yacc.c  */
#line 4280 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 4285 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 4296 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 4305 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 4309 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 546:

/* Line 1455 of yacc.c  */
#line 4322 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 4328 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 550:

/* Line 1455 of yacc.c  */
#line 4341 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 551:

/* Line 1455 of yacc.c  */
#line 4345 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 4354 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 4370 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 4374 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 4381 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 4385 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 4395 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 4399 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 4404 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 4412 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 4416 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 4420 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 4431 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 4435 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 4440 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 4448 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 4452 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 4456 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 4471 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 4475 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 4480 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 4485 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 4490 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
    }
  }
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 4501 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 4510 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 4519 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(3) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor(WRAP((yylsp[(2) - (3)]), new (MEMMGR)
          XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (3)].str), MEMMGR)), value, MEMMGR));
  }
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 4530 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 4555 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 4563 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 4571 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 4575 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 4583 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 4587 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 4596 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 4603 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 4607 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 4617 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQNamespaceConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 4625 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 4633 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4641 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 4648 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 4656 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 4663 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 4667 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 4675 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType(WRAP((yylsp[(1) - (2)]), new (MEMMGR) ItemType(ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName))), (yyvsp[(2) - (2)].occurrence)));
  }
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 4682 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 4686 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 4694 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(WRAP((yyloc), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING)), SequenceType::STAR));
  }
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 4698 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 4708 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType((yyvsp[(1) - (2)].itemType), (yyvsp[(2) - (2)].occurrence)));
  }
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 4712 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 4721 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 4723 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 4725 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 4727 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 4733 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ItemType(ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName)));
  }
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 4737 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING));
  }
    break;

  case 633:

/* Line 1455 of yacc.c  */
#line 4773 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_NODE));
  }
    break;

  case 634:

/* Line 1455 of yacc.c  */
#line 4781 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_DOCUMENT));
  }
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 4785 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(ItemType::TEST_DOCUMENT);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.itemType)->setLocationInfo(&loc);
  }
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 4792 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(ItemType::TEST_SCHEMA_DOCUMENT);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.itemType)->setLocationInfo(&loc);
  }
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 4803 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_TEXT));
  }
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 4811 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_COMMENT));
  }
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 4819 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(NamespaceNodeTest, (yylsp[(1) - (3)]));
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_NAMESPACE));
  }
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 4828 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_PI));
  }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4832 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR)));
  }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4836 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR)));
  }
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 4844 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE));
  }
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 4848 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 4852 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName)));
  }
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 4861 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 648:

/* Line 1455 of yacc.c  */
#line 4869 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 4882 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT));
  }
    break;

  case 651:

/* Line 1455 of yacc.c  */
#line 4886 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 4890 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName)));
  }
    break;

  case 653:

/* Line 1455 of yacc.c  */
#line 4894 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName)));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 4904 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 656:

/* Line 1455 of yacc.c  */
#line 4912 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 4932 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 662:

/* Line 1455 of yacc.c  */
#line 4944 "../src/parser/XQParser.y"
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

  case 663:

/* Line 1455 of yacc.c  */
#line 4959 "../src/parser/XQParser.y"
    {
}
    break;

  case 664:

/* Line 1455 of yacc.c  */
#line 4962 "../src/parser/XQParser.y"
    {
}
    break;

  case 665:

/* Line 1455 of yacc.c  */
#line 4968 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 666:

/* Line 1455 of yacc.c  */
#line 4972 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 667:

/* Line 1455 of yacc.c  */
#line 4982 "../src/parser/XQParser.y"
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

  case 669:

/* Line 1455 of yacc.c  */
#line 4999 "../src/parser/XQParser.y"
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

  case 671:

/* Line 1455 of yacc.c  */
#line 5015 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 673:

/* Line 1455 of yacc.c  */
#line 5025 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 676:

/* Line 1455 of yacc.c  */
#line 5035 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 677:

/* Line 1455 of yacc.c  */
#line 5044 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 678:

/* Line 1455 of yacc.c  */
#line 5049 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 680:

/* Line 1455 of yacc.c  */
#line 5059 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 681:

/* Line 1455 of yacc.c  */
#line 5063 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 682:

/* Line 1455 of yacc.c  */
#line 5071 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 5076 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 5085 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 5089 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 5093 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 5097 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 5101 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 5105 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 691:

/* Line 1455 of yacc.c  */
#line 5115 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 692:

/* Line 1455 of yacc.c  */
#line 5126 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 693:

/* Line 1455 of yacc.c  */
#line 5132 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 5138 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 5144 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 696:

/* Line 1455 of yacc.c  */
#line 5159 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 697:

/* Line 1455 of yacc.c  */
#line 5163 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 698:

/* Line 1455 of yacc.c  */
#line 5167 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 699:

/* Line 1455 of yacc.c  */
#line 5171 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 5175 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 5179 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 5183 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 703:

/* Line 1455 of yacc.c  */
#line 5187 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 5195 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 5199 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 5203 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 707:

/* Line 1455 of yacc.c  */
#line 5211 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 708:

/* Line 1455 of yacc.c  */
#line 5215 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 719:

/* Line 1455 of yacc.c  */
#line 5251 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_INSENSITIVE);
  }
    break;

  case 720:

/* Line 1455 of yacc.c  */
#line 5255 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_SENSITIVE);
  }
    break;

  case 721:

/* Line 1455 of yacc.c  */
#line 5259 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::LOWERCASE);
  }
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 5263 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::UPPERCASE);
  }
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 5272 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 724:

/* Line 1455 of yacc.c  */
#line 5276 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 5284 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5288 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 5298 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 5302 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 5306 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5310 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 5314 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 5321 "../src/parser/XQParser.y"
    {
  }
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 5324 "../src/parser/XQParser.y"
    {
  }
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 5331 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 735:

/* Line 1455 of yacc.c  */
#line 5335 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 5339 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 5343 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 5353 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 739:

/* Line 1455 of yacc.c  */
#line 5357 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 740:

/* Line 1455 of yacc.c  */
#line 5361 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 5368 "../src/parser/XQParser.y"
    {
  }
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 5371 "../src/parser/XQParser.y"
    {
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5379 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5383 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5390 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 5394 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 5402 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 5406 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 5414 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 5422 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 5426 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 5434 "../src/parser/XQParser.y"
    {
}
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 5441 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 5449 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 5454 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 5459 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 5471 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 5475 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 759:

/* Line 1455 of yacc.c  */
#line 5479 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 760:

/* Line 1455 of yacc.c  */
#line 5483 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 5487 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 5498 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 5509 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 5513 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5523 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 5531 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 5538 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5543 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 5551 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5560 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::INTEGER, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5568 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::DECIMAL, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5576 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::DOUBLE, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5585 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5592 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5601 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5613 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, signature, (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5618 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(5) - (7)].argSpecs), (yyvsp[(6) - (7)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, signature, (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5623 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5629 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(8) - (10)].argSpecs), (yyvsp[(9) - (10)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), signature, (yyvsp[(10) - (10)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 5635 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), signature, (yyvsp[(6) - (6)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 5641 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(6) - (8)].argSpecs), (yyvsp[(7) - (8)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 5650 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 5654 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5662 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5666 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5673 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5678 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5686 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5691 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5700 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5704 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5708 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5716 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5720 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5728 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5732 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5736 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5740 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5748 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 5752 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5756 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5764 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5769 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 5779 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 811:

/* Line 1455 of yacc.c  */
#line 5796 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 5804 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(2) - (4)].argSpecs), (yyvsp[(3) - (4)].sequenceType), MEMMGR);
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, signature, (yyvsp[(4) - (4)].astNode), false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5815 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 5820 "../src/parser/XQParser.y"
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

  case 817:

/* Line 1455 of yacc.c  */
#line 5848 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_FUNCTION));
  }
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 5856 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ItemType(new (MEMMGR) FunctionSignature(0, (yyvsp[(5) - (5)].sequenceType), MEMMGR), 0));
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5860 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(new (MEMMGR) FunctionSignature((yyvsp[(3) - (6)].argSpecs), (yyvsp[(6) - (6)].sequenceType), MEMMGR), 0));
  }
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 5867 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    (yyval.argSpecs)->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, (yyvsp[(1) - (1)].sequenceType), MEMMGR)));
  }
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 5872 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
    (yyval.argSpecs)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec(0, (yyvsp[(3) - (3)].sequenceType), MEMMGR)));
  }
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 5881 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;

  case 824:

/* Line 1455 of yacc.c  */
#line 5894 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType((yyvsp[(3) - (4)].tupleMembers), 0));
  }
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 5898 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_TUPLE));
  }
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 5905 "../src/parser/XQParser.y"
    {
    (yyval.tupleMembers) = new (MEMMGR) TupleMembers(true, MEMMGR);
    (yyvsp[(1) - (1)].argSpec)->setIndex(0);
    (yyval.tupleMembers)->add(0, (yyvsp[(1) - (1)].argSpec));
  }
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 5911 "../src/parser/XQParser.y"
    {
    (yyval.tupleMembers) = (yyvsp[(1) - (3)].tupleMembers);
    (yyvsp[(3) - (3)].argSpec)->setIndex((yyval.tupleMembers)->size());
    (yyval.tupleMembers)->add(0, (yyvsp[(3) - (3)].argSpec));
  }
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 5921 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) ArgumentSpec((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].sequenceType), MEMMGR));
  }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5931 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tuples = setLastAncestor((yyvsp[(3) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the tuple constructor expression
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTupleConstructor(tuples, MEMMGR));
  }
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 5939 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTupleConstructor(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)), MEMMGR));
  }
    break;

  case 833:

/* Line 1455 of yacc.c  */
#line 5947 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 5955 "../src/parser/XQParser.y"
    {
    // TBD LetTuple doesn't give us the correct in-scope vars for the initializer - jpcs
    (yyval.tupleNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) LetTuple(0, (yyvsp[(1) - (4)].str), WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQTreatAs((yyvsp[(4) - (4)].astNode), (yyvsp[(2) - (4)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 5965 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTupleMember((yyvsp[(3) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQMap((yyvsp[(1) - (3)].astNode), (yyval.astNode), MEMMGR));
  }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 5973 "../src/parser/XQParser.y"
    {
    QP->_query->addTypeAlias(WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeAlias((yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].itemType), MEMMGR)));
  }
    break;



/* Line 1455 of yacc.c  */
#line 12180 "../src/parser/XQParser.cpp"
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
#line 6009 "../src/parser/XQParser.y"


}  // namespace XQParser


