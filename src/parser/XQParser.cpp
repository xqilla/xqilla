
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
     _MAP_ = 492,
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
     _TYPE_ALIAS_ = 505,
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
     _XSLT_TYPE_ALIAS_ = 536,
     _XSLT_VERSION_ = 537,
     _XSLT_MODE_ = 538,
     _XSLT_NAME_ = 539,
     _XSLT_DOCTYPE_PUBLIC_ = 540,
     _XSLT_DOCTYPE_SYSTEM_ = 541,
     _XSLT_ENCODING_ = 542,
     _XSLT_MEDIA_TYPE_ = 543,
     _XSLT_NORMALIZATION_FORM_ = 544,
     _XSLT_STANDALONE_ = 545,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 546,
     _XSLT_NAMESPACE_STR_ = 547,
     _XSLT_SCHEMA_LOCATION_ = 548,
     _XSLT_TUNNEL_ = 549,
     _XSLT_REQUIRED_ = 550,
     _XSLT_OVERRIDE_ = 551,
     _XSLT_COPY_NAMESPACES_ = 552,
     _XSLT_INHERIT_NAMESPACES_ = 553,
     _XSLT_BYTE_ORDER_MARK_ = 554,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 555,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 556,
     _XSLT_INDENT_ = 557,
     _XSLT_OMIT_XML_DECLARATION_ = 558,
     _XSLT_UNDECLARE_PREFIXES_ = 559,
     _XSLT_MATCH_ = 560,
     _XSLT_AS_ = 561,
     _XSLT_SELECT_ = 562,
     _XSLT_PRIORITY_ = 563,
     _XSLT_TEST_ = 564,
     _XSLT_SEPARATOR_ = 565,
     _XSLT_NAMESPACE_A_ = 566,
     _XSLT_REGEX_ = 567,
     _XSLT_FLAGS_ = 568,
     _XSLT_METHOD_ = 569,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 570,
     _XSLT_USE_CHARACTER_MAPS_ = 571,
     _XSLT_ELEMENT_NAME_ = 572,
     _XSLT_XMLNS_ATTR_ = 573,
     _XSLT_ATTR_NAME_ = 574,
     _XSLT_TEXT_NODE_ = 575,
     _XSLT_WS_TEXT_NODE_ = 576,
     _HASH_DEFAULT_ = 577,
     _HASH_ALL_ = 578,
     _HASH_CURRENT_ = 579,
     _XML_ = 580,
     _HTML_ = 581,
     _XHTML_ = 582
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
#define _MAP_ 492
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
#define _TYPE_ALIAS_ 505
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
#define _XSLT_TYPE_ALIAS_ 536
#define _XSLT_VERSION_ 537
#define _XSLT_MODE_ 538
#define _XSLT_NAME_ 539
#define _XSLT_DOCTYPE_PUBLIC_ 540
#define _XSLT_DOCTYPE_SYSTEM_ 541
#define _XSLT_ENCODING_ 542
#define _XSLT_MEDIA_TYPE_ 543
#define _XSLT_NORMALIZATION_FORM_ 544
#define _XSLT_STANDALONE_ 545
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 546
#define _XSLT_NAMESPACE_STR_ 547
#define _XSLT_SCHEMA_LOCATION_ 548
#define _XSLT_TUNNEL_ 549
#define _XSLT_REQUIRED_ 550
#define _XSLT_OVERRIDE_ 551
#define _XSLT_COPY_NAMESPACES_ 552
#define _XSLT_INHERIT_NAMESPACES_ 553
#define _XSLT_BYTE_ORDER_MARK_ 554
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 555
#define _XSLT_INCLUDE_CONTENT_TYPE_ 556
#define _XSLT_INDENT_ 557
#define _XSLT_OMIT_XML_DECLARATION_ 558
#define _XSLT_UNDECLARE_PREFIXES_ 559
#define _XSLT_MATCH_ 560
#define _XSLT_AS_ 561
#define _XSLT_SELECT_ 562
#define _XSLT_PRIORITY_ 563
#define _XSLT_TEST_ 564
#define _XSLT_SEPARATOR_ 565
#define _XSLT_NAMESPACE_A_ 566
#define _XSLT_REGEX_ 567
#define _XSLT_FLAGS_ 568
#define _XSLT_METHOD_ 569
#define _XSLT_CDATA_SECTION_ELEMENTS_ 570
#define _XSLT_USE_CHARACTER_MAPS_ 571
#define _XSLT_ELEMENT_NAME_ 572
#define _XSLT_XMLNS_ATTR_ 573
#define _XSLT_ATTR_NAME_ 574
#define _XSLT_TEXT_NODE_ 575
#define _XSLT_WS_TEXT_NODE_ 576
#define _HASH_DEFAULT_ 577
#define _HASH_ALL_ 578
#define _HASH_CURRENT_ 579
#define _XML_ 580
#define _HTML_ 581
#define _XHTML_ 582




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
#line 1110 "../src/parser/XQParser.cpp"

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
#define YYLAST   8146

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  328
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  358
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1017
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1669

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   582

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
     325,   326,   327
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
    1902,  1905,  1908,  1912,  1913,  1915,  1917,  1919,  1923,  1925,
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
    2631,  2633,  2637,  2641,  2643,  2645,  2650,  2654,  2656,  2660,
    2663,  2670,  2674,  2676,  2681,  2685,  2687,  2691,  2696,  2698,
    2702,  2708,  2710,  2712,  2714,  2716,  2718,  2720,  2722,  2724,
    2726,  2728,  2730,  2732,  2734,  2736,  2738,  2740,  2742,  2744,
    2746,  2748,  2750,  2752,  2754,  2756,  2758,  2760,  2762,  2764,
    2766,  2768,  2770,  2772,  2774,  2776,  2778,  2780,  2782,  2784,
    2786,  2788,  2790,  2792,  2794,  2796,  2798,  2800,  2802,  2804,
    2806,  2808,  2810,  2812,  2814,  2816,  2818,  2820,  2822,  2824,
    2826,  2828,  2830,  2832,  2834,  2836,  2838,  2840,  2842,  2844,
    2846,  2848,  2850,  2852,  2854,  2856,  2858,  2860,  2862,  2864,
    2866,  2868,  2870,  2872,  2874,  2876,  2878,  2880,  2882,  2884,
    2886,  2888,  2890,  2892,  2894,  2896,  2898,  2900,  2902,  2904,
    2906,  2908,  2910,  2912,  2914,  2916,  2918,  2920,  2922,  2924,
    2926,  2928,  2930,  2932,  2934,  2936,  2938,  2940,  2942,  2944,
    2946,  2948,  2950,  2952,  2954,  2956,  2958,  2960,  2962,  2964,
    2966,  2968,  2970,  2972,  2974,  2976,  2978,  2980,  2982,  2984,
    2986,  2988,  2990,  2992,  2994,  2996,  2998,  3000,  3002,  3004,
    3006,  3008,  3010,  3012,  3014,  3016,  3018,  3020,  3022,  3024,
    3026,  3028,  3030,  3032,  3034,  3036,  3038,  3040,  3042,  3044,
    3046,  3048,  3050,  3052,  3054,  3056,  3058,  3060
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     329,     0,    -1,     3,   330,   466,    -1,     4,   331,   425,
      -1,     6,   331,   332,    -1,     5,   339,    -1,     7,   335,
      -1,     8,   334,    -1,    -1,    -1,   180,   459,   456,   685,
     457,   462,   465,   333,    -1,    -1,   435,    -1,   459,   457,
     462,    -1,   336,   337,    -1,   190,   173,   653,    37,   604,
     435,    -1,    -1,   337,   338,    -1,   180,   459,   456,   685,
     457,   462,   465,   435,    -1,   340,    -1,   252,   341,   342,
     251,    -1,   364,    -1,    -1,   341,   282,    -1,   341,   291,
      -1,    -1,   342,   343,    -1,   342,   347,    -1,   342,   352,
      -1,   342,   354,    -1,   342,   356,    -1,   342,   362,    -1,
     342,   360,    -1,   344,   349,   367,   251,    -1,   253,    -1,
     344,   305,   415,    -1,   344,   284,    -1,   344,   308,   346,
      -1,   344,   283,   345,    -1,   344,   306,   582,    -1,    -1,
     345,   122,    -1,   345,   322,    -1,   345,   323,    -1,    52,
      -1,    53,    -1,    54,    -1,   348,   349,   367,   251,    -1,
     261,    -1,   348,   284,    -1,   348,   306,   582,    -1,   348,
     296,    -1,    -1,   349,   350,    -1,   351,   367,   251,    -1,
     260,    -1,   351,   284,    -1,   351,   307,   467,    -1,   351,
     306,   582,    -1,   351,   295,    -1,   351,   294,    -1,   353,
     367,   251,    -1,   260,    -1,   353,   284,    -1,   353,   307,
     467,    -1,   353,   306,   582,    -1,   353,   295,    -1,   353,
     294,    -1,   355,   367,   251,    -1,   266,    -1,   355,   284,
      -1,   355,   307,   467,    -1,   355,   306,   582,    -1,   357,
     251,    -1,   279,    -1,   357,   284,    -1,   357,   314,   358,
      -1,   357,   299,    -1,   357,   315,   359,    -1,   357,   285,
      -1,   357,   286,    -1,   357,   287,    -1,   357,   300,    -1,
     357,   301,    -1,   357,   302,    -1,   357,   288,    -1,   357,
     289,    -1,   357,   303,    -1,   357,   290,    -1,   357,   304,
      -1,   357,   316,   359,    -1,   357,   282,    -1,   325,    -1,
     326,    -1,   327,    -1,    63,    -1,   122,    -1,   122,    -1,
     359,   122,    -1,   361,   251,    -1,   281,    -1,   361,   284,
      -1,   361,   306,   584,    -1,   363,   251,    -1,   280,    -1,
     280,   292,    -1,   280,   293,    -1,   280,   292,   293,    -1,
     280,   293,   292,    -1,   317,   365,   367,   251,    -1,    -1,
     365,   319,   366,    -1,   365,   318,    -1,    -1,   366,   465,
      -1,   366,   115,    -1,    -1,   367,   372,    -1,   367,   364,
      -1,   367,   368,    -1,   369,    -1,   371,    -1,   373,    -1,
     377,    -1,   382,    -1,   386,    -1,   384,    -1,   395,    -1,
     397,    -1,   399,    -1,   401,    -1,   403,    -1,   405,    -1,
     407,    -1,   391,    -1,   409,    -1,   411,    -1,   413,    -1,
     370,   367,   251,    -1,   254,    -1,   370,   307,   467,    -1,
     370,   310,   366,    -1,   255,   372,   251,    -1,   320,    -1,
     321,    -1,   374,   376,   251,    -1,   256,    -1,   374,   307,
     467,    -1,   374,   283,   375,    -1,   122,    -1,   322,    -1,
     324,    -1,    -1,   376,   380,    -1,   378,   379,   251,    -1,
     257,    -1,   378,   284,    -1,    -1,   379,   380,    -1,   381,
     367,   251,    -1,   258,    -1,   381,   284,    -1,   381,   307,
     467,    -1,   381,   306,   582,    -1,   381,   294,    -1,   383,
     251,    -1,   259,   307,   467,    -1,   385,   367,   251,    -1,
     265,   309,   467,    -1,   262,   387,   390,   251,    -1,   388,
      -1,   387,   388,    -1,   389,   367,   251,    -1,   263,   309,
     467,    -1,    -1,   264,   367,   251,    -1,   392,   393,   394,
     251,    -1,   273,    -1,   392,   307,   467,    -1,   392,   312,
     366,    -1,   392,   313,   366,    -1,    -1,   274,   367,   251,
      -1,    -1,   275,   367,   251,    -1,   396,   367,   251,   367,
      -1,   266,    -1,   396,   284,    -1,   396,   307,   467,    -1,
     396,   306,   582,    -1,   398,   367,   251,    -1,   267,    -1,
     398,   307,   467,    -1,   400,   367,   251,    -1,   268,    -1,
     400,   284,   366,    -1,   400,   307,   467,    -1,   402,   367,
     251,    -1,   269,    -1,   404,   367,   251,    -1,   270,    -1,
     404,   284,   366,    -1,   404,   311,   366,    -1,   404,   307,
     467,    -1,   404,   310,   366,    -1,   406,   367,   251,    -1,
     271,    -1,   406,   284,   366,    -1,   406,   307,   467,    -1,
     408,   367,   251,    -1,   272,    -1,   408,   284,   366,    -1,
     408,   311,   366,    -1,   410,   251,    -1,   276,    -1,   410,
     307,   467,    -1,   410,   297,    -1,   412,   367,   251,    -1,
     277,    -1,   412,   297,    -1,   412,   298,    -1,   414,   367,
     251,    -1,   278,    -1,   414,   307,   467,    -1,   415,    12,
     416,    -1,   416,    -1,   421,    -1,    36,    -1,   418,    -1,
      36,    -1,    30,    -1,   232,    40,   419,    41,    -1,   233,
      40,   652,    33,   420,    41,    -1,   652,    -1,   540,    -1,
     538,    -1,   540,    -1,   422,    -1,   417,   422,    -1,   418,
      36,   422,    -1,   418,    30,   422,    -1,   421,    36,   422,
      -1,   421,    30,   422,    -1,   423,   424,    -1,   533,    -1,
      71,    19,   533,    -1,    55,    19,   533,    -1,    20,   533,
      -1,    -1,   424,    21,   467,    22,    -1,   426,   429,    -1,
     426,   430,    -1,    -1,   186,   427,   435,    -1,   186,   427,
     428,   435,    -1,   186,   428,   435,    -1,   187,   125,    -1,
     176,   125,    -1,   432,   466,    -1,   431,   432,    -1,   190,
     173,   653,    37,   604,   435,    -1,    -1,   432,   433,   435,
      -1,   432,   434,   435,    -1,   432,   436,   435,    -1,   432,
     438,   435,    -1,   432,   452,   435,    -1,   432,   455,   435,
      -1,   432,   655,   435,    -1,   432,   439,   435,    -1,   432,
     440,   435,    -1,   432,   683,   435,    -1,   437,    -1,   446,
      -1,   447,    -1,   454,    -1,   441,    -1,   442,    -1,   639,
      -1,   443,    -1,   448,    -1,   451,    -1,    50,    -1,   180,
     173,   653,    37,   604,    -1,   180,    65,   171,    -1,   180,
      65,   172,    -1,   180,   183,   191,   173,   604,    -1,   180,
     183,   456,   173,   604,    -1,   180,   185,   684,   125,    -1,
     180,    66,   622,    -1,   180,   182,   120,    -1,   180,   182,
     121,    -1,   180,   183,   138,   142,   143,    -1,   180,   183,
     138,   142,   144,    -1,   180,   184,   444,    33,   445,    -1,
     171,    -1,   177,    -1,   178,    -1,   179,    -1,   180,   183,
     145,   604,    -1,   180,    67,   604,    -1,   188,   189,   450,
     604,   449,    -1,   188,   189,   604,   449,    -1,    -1,   114,
     604,    -1,   449,    33,   604,    -1,   173,   653,    37,    -1,
     183,   191,   173,    -1,   188,   190,   173,   653,    37,   604,
     449,    -1,   188,   190,   604,   449,    -1,   180,   126,     9,
     541,   581,   453,    -1,    10,   468,    -1,   175,    -1,   180,
     181,   171,    -1,   180,   181,   172,    -1,   180,   459,   456,
     685,   457,   462,   458,    -1,   192,    -1,   193,    -1,    40,
      41,    -1,    40,   463,    41,    -1,   465,    -1,   175,    -1,
      -1,   459,   460,    -1,   459,   461,    -1,   459,   231,    -1,
     246,    -1,   247,    -1,   248,    -1,   249,    -1,    -1,   152,
     582,    -1,   463,    33,   464,    -1,   464,    -1,     9,   541,
     581,    -1,    48,   467,    49,    -1,   467,    -1,   467,    33,
     468,    -1,   468,    -1,   469,    -1,   489,    -1,   492,    -1,
     498,    -1,   640,    -1,   642,    -1,   645,    -1,   644,    -1,
     646,    -1,   499,    -1,   661,    -1,   662,    -1,   470,   131,
     468,    -1,   471,    -1,   470,   483,    -1,   470,   472,    -1,
     473,    -1,   478,    -1,   471,    -1,   481,    -1,   482,    -1,
     132,   474,    -1,   474,    33,   475,    -1,   475,    -1,     9,
     541,   581,   476,   477,   133,   468,    -1,    -1,   114,     9,
     541,    -1,    -1,   194,     9,   541,    -1,   134,   479,    -1,
     479,    33,   480,    -1,   480,    -1,     9,   541,   581,    10,
     468,    -1,   194,     9,   541,    10,   468,    -1,   135,   468,
      -1,   136,     9,   541,    -1,   138,   137,   484,    -1,   139,
     138,   137,   484,    -1,   484,    33,   485,    -1,   485,    -1,
     486,   487,   488,    -1,   486,   487,   488,   145,   604,    -1,
     468,    -1,    -1,   140,    -1,   141,    -1,    -1,   142,   143,
      -1,   142,   144,    -1,   146,   490,   148,   468,    -1,   147,
     490,   148,   468,    -1,   490,    33,   491,    -1,   491,    -1,
       9,   541,   581,   133,   468,    -1,   149,    40,   467,    41,
     493,   494,    -1,   493,   495,    -1,   495,    -1,   183,     9,
     541,   131,   468,    -1,   183,   131,   468,    -1,   496,   131,
     468,    -1,   150,   497,   582,    -1,   496,    12,   582,    -1,
      -1,     9,   541,   152,    -1,   153,    40,   467,    41,   154,
     468,   155,   468,    -1,   499,   156,   500,    -1,   500,    -1,
     500,   157,   501,    -1,   501,    -1,   503,    37,   503,    -1,
     503,    13,   503,    -1,    -1,   503,    24,   502,   503,    -1,
     503,    14,   503,    -1,   503,    15,   503,    -1,   503,    16,
     503,    -1,   503,   108,   503,    -1,   503,   109,   503,    -1,
     503,   110,   503,    -1,   503,   111,   503,    -1,   503,   112,
     503,    -1,   503,   113,   503,    -1,   503,   170,   503,    -1,
     503,    17,   503,    -1,   503,    18,   503,    -1,   503,    -1,
     504,   195,    63,   605,    -1,   504,   195,    63,   605,   638,
      -1,   504,    -1,   505,   161,   505,    -1,   505,    -1,   505,
      34,   506,    -1,   505,    35,   506,    -1,   506,    -1,   506,
      11,   507,    -1,   506,   162,   507,    -1,   506,    70,   507,
      -1,   506,   163,   507,    -1,   507,    -1,   507,    12,   508,
      -1,   507,   164,   508,    -1,   508,    -1,   508,   165,   509,
      -1,   508,   166,   509,    -1,   509,    -1,   510,   158,   159,
     582,    -1,   510,    -1,   511,   169,   152,   582,    -1,   511,
      -1,   512,   160,   152,   579,    -1,   512,    -1,   513,   168,
     152,   579,    -1,   513,    -1,    35,   513,    -1,    34,   513,
      -1,   514,    -1,   515,    -1,   520,    -1,   516,    -1,   167,
      48,   467,    49,    -1,   167,    68,    48,   467,    49,    -1,
     167,    69,    48,   467,    49,    -1,   517,    48,    49,    -1,
     517,    48,   467,    49,    -1,   518,    -1,   517,   518,    -1,
      32,   554,   684,   519,    -1,   130,    -1,   105,   130,    -1,
     521,    -1,   521,   522,    -1,    30,   522,    -1,   522,    -1,
      36,    -1,   522,    36,   523,    -1,   522,    30,   523,    -1,
     523,    -1,   524,    -1,   536,    -1,   525,    -1,   526,    -1,
     527,    -1,   525,    21,   467,    22,    -1,   530,    -1,   526,
      21,   467,    22,    -1,   528,   533,    -1,   529,    -1,    71,
      19,    -1,    72,    19,    -1,    55,    19,    -1,    73,    19,
      -1,    74,    19,    -1,    75,    19,    -1,    76,    19,    -1,
     173,    19,    -1,    20,   533,    -1,   533,    -1,   531,   533,
      -1,   532,    -1,    77,    19,    -1,    78,    19,    -1,    79,
      19,    -1,    80,    19,    -1,    81,    19,    -1,    39,    -1,
     586,    -1,   534,    -1,   654,    -1,   535,    -1,    11,    -1,
     127,    -1,   128,    -1,   537,    -1,   536,    21,   467,    22,
      -1,   669,    -1,   538,    -1,   540,    -1,   542,    -1,   543,
      -1,   546,    -1,   549,    -1,   544,    -1,   545,    -1,   666,
      -1,   539,    -1,   652,    -1,   649,    -1,   650,    -1,   651,
      -1,     9,   541,    -1,   684,    -1,    40,   467,    41,    -1,
      40,    41,    -1,    38,    -1,   120,    48,   467,    49,    -1,
     121,    48,   467,    49,    -1,   685,    40,    41,    -1,   685,
      40,   547,    41,    -1,   547,    33,   548,    -1,   548,    -1,
     468,    -1,    23,    -1,   550,    -1,   566,    -1,   551,    -1,
     562,    -1,   564,    -1,    24,   552,   553,   554,    42,    -1,
      24,   552,   553,   554,    25,   561,    31,   552,   554,    26,
      -1,   122,    -1,   123,    -1,    -1,   553,   105,   122,   554,
      43,   554,   555,    -1,   553,   105,   123,   554,    43,   554,
     556,    -1,    -1,   105,    -1,    44,   557,    45,    -1,    46,
     559,    47,    -1,    44,   558,    45,    -1,    46,   560,    47,
      -1,    -1,   557,   465,    -1,   557,   115,    -1,    -1,   558,
     465,    -1,   558,   115,    -1,    -1,   559,   465,    -1,   559,
     116,    -1,    -1,   560,   465,    -1,   560,   116,    -1,    -1,
     561,   550,    -1,   561,   465,    -1,   561,   118,    -1,   561,
     117,    -1,    28,   563,    29,    -1,    -1,   107,    -1,    27,
     129,   565,    -1,   106,    -1,   105,   106,    -1,   567,    -1,
     568,    -1,   571,    -1,   573,    -1,   574,    -1,   575,    -1,
     576,    -1,    82,    48,   467,    49,    -1,   191,   569,   570,
      -1,   124,    -1,    48,   467,    49,    -1,    48,    49,    -1,
      48,   467,    49,    -1,    55,   572,   570,    -1,   124,    -1,
      48,   467,    49,    -1,   173,   577,   570,    -1,    63,    48,
     467,    49,    -1,    56,    48,   467,    49,    -1,    60,   577,
     578,    -1,   124,    -1,    48,   467,    49,    -1,    48,    49,
      -1,    48,   467,    49,    -1,   585,   580,    -1,    -1,    23,
      -1,    -1,   152,   582,    -1,   584,   583,    -1,    64,    40,
      41,    -1,    -1,    11,    -1,    34,    -1,    23,    -1,   174,
      40,    41,    -1,   585,    -1,   586,    -1,   670,    -1,   674,
      -1,   654,    -1,   588,    -1,   597,    -1,   593,    -1,   599,
      -1,   595,    -1,   592,    -1,   590,    -1,   589,    -1,   591,
      -1,   587,    -1,    59,    40,    41,    -1,    57,    40,    41,
      -1,    57,    40,   597,    41,    -1,    57,    40,   599,    41,
      -1,    63,    40,    41,    -1,    56,    40,    41,    -1,    58,
      40,    41,    -1,    60,    40,    41,    -1,    60,    40,   653,
      41,    -1,    60,    40,   125,    41,    -1,    55,    40,    41,
      -1,    55,    40,   594,    41,    -1,    55,    40,   594,    33,
     603,    41,    -1,   601,    -1,    11,    -1,    61,    40,   596,
      41,    -1,   601,    -1,   191,    40,    41,    -1,   191,    40,
     598,    41,    -1,   191,    40,   598,    33,   603,    41,    -1,
     191,    40,   598,    33,   603,    23,    41,    -1,   602,    -1,
      11,    -1,    62,    40,   600,    41,    -1,   602,    -1,   654,
      -1,   654,    -1,   654,    -1,   125,    -1,   608,   607,   606,
      -1,    -1,   196,   504,    -1,    -1,   607,   619,    -1,   608,
     243,   609,    -1,   609,    -1,   609,   244,   610,    -1,   610,
      -1,   610,    83,   133,   611,    -1,   611,    -1,   245,   612,
      -1,   612,    -1,   613,    -1,   613,   622,    -1,   614,   617,
      -1,    40,   605,    41,    -1,   615,    -1,   538,   616,    -1,
      48,   467,    49,   616,    -1,   517,    48,    49,    -1,   517,
      48,   605,    49,    -1,    -1,   208,    -1,   208,    97,    -1,
     209,    -1,   209,   213,    -1,   210,    -1,    -1,   199,   618,
     200,    -1,   211,   505,    -1,   119,   144,   505,    -1,   119,
     101,   505,    -1,   212,   505,   161,   505,    -1,   120,    -1,
     197,   505,   620,    -1,   198,   618,   620,    -1,   201,   621,
      -1,   202,   621,    -1,   114,    99,    -1,   114,   100,    -1,
      95,    96,    -1,   213,    -1,   214,    -1,   215,    -1,   216,
      -1,   217,    -1,    84,   623,    -1,   622,    84,   623,    -1,
     635,    -1,   636,    -1,   627,    -1,   626,    -1,   624,    -1,
     625,    -1,   630,    -1,   637,    -1,   151,    87,    -1,   151,
      86,    -1,   203,    -1,   204,    -1,    88,    87,    -1,    88,
      86,    -1,    91,    -1,    85,    91,    -1,    92,   629,    -1,
      92,   183,    -1,    92,    40,   629,   628,    41,    -1,    92,
      40,   183,   628,    41,    -1,    85,    92,    -1,    -1,   628,
      33,   629,    -1,   114,   604,    -1,   114,   604,   205,   652,
      -1,   114,   604,   618,   206,    -1,   114,   604,   205,   652,
     618,   206,    -1,    93,   213,   632,   631,    -1,    85,    93,
     213,    -1,    93,   213,   183,   631,    -1,    -1,   631,   634,
      -1,   114,   604,    -1,    40,   633,    41,    -1,   652,    -1,
     633,    33,   652,    -1,   164,   632,    -1,   166,   632,    -1,
     207,   652,    -1,    94,    -1,    85,    94,    -1,   185,   684,
     125,    -1,    90,    96,   507,    -1,   180,   224,    69,    -1,
     180,   224,    68,    -1,   180,   224,   102,    -1,   641,   468,
     152,   220,   230,   468,    -1,   641,   468,   152,   228,   230,
     468,    -1,   641,   468,   230,   468,    -1,   641,   468,   223,
     468,    -1,   641,   468,   222,   468,    -1,   221,    59,    -1,
     221,   226,    -1,   643,   468,    -1,   229,    59,    -1,   229,
     226,    -1,   218,   104,   159,    59,   468,   225,   468,    -1,
     218,    59,   468,   225,   468,    -1,   227,    59,   468,   152,
     468,    -1,   103,   647,   219,   468,   131,   468,    -1,   647,
      33,   648,    -1,   648,    -1,     9,   541,    10,   468,    -1,
      52,    -1,    53,    -1,    54,    -1,   125,    -1,   684,    -1,
     684,    -1,   180,   234,   238,   684,   465,    -1,   180,   234,
     238,   684,   657,   656,   465,    -1,   180,   234,   238,   684,
     658,   235,   415,   465,    -1,   180,   234,   238,   684,   658,
     235,   415,   657,   656,   465,    -1,   180,   234,   658,   235,
     415,   465,    -1,   180,   234,   658,   235,   415,   657,   656,
     465,    -1,    -1,   152,   582,    -1,    40,    41,    -1,    40,
     463,    41,    -1,    -1,   242,   659,    -1,   660,    -1,   659,
      33,   660,    -1,   122,    -1,   322,    -1,   323,    -1,   239,
     234,   684,    -1,   239,   234,   684,   225,    40,   664,    41,
      -1,   240,   241,   468,    -1,   240,   241,   468,   225,    40,
     664,    41,    -1,   240,   241,   468,   242,   663,    -1,   240,
     241,   468,   242,   663,   225,    40,   664,    41,    -1,   684,
      -1,   322,    -1,   324,    -1,   665,    -1,   664,    33,   665,
      -1,     9,   541,   581,    10,   468,    -1,   667,    -1,   668,
      -1,   685,    51,    52,    -1,   193,   457,   581,   465,    -1,
     536,    40,    41,    -1,   536,    40,   547,    41,    -1,   671,
      -1,   672,    -1,   193,    40,    11,    41,    -1,   193,    40,
      41,   152,   582,    -1,   193,    40,   673,    41,   152,   582,
      -1,   582,    -1,   673,    33,   582,    -1,    40,   584,    41,
      -1,   675,    -1,   678,    -1,   236,    40,   676,    41,    -1,
     236,    40,    41,    -1,   677,    -1,   676,    33,   677,    -1,
     684,   581,    -1,   237,    40,   585,    33,   582,    41,    -1,
     237,    40,    41,    -1,   679,    -1,   236,    48,   680,    49,
      -1,   236,    48,    49,    -1,   681,    -1,   680,    33,   681,
      -1,   684,   581,    10,   468,    -1,   682,    -1,   536,    20,
     684,    -1,   180,   250,   684,   152,   584,    -1,   685,    -1,
      55,    -1,    56,    -1,    57,    -1,   191,    -1,   174,    -1,
     153,    -1,    59,    -1,    60,    -1,    61,    -1,    62,    -1,
      63,    -1,   149,    -1,    64,    -1,   193,    -1,    58,    -1,
     122,    -1,    65,    -1,    66,    -1,    67,    -1,    68,    -1,
      69,    -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,
      74,    -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,
      79,    -1,    80,    -1,    81,    -1,    82,    -1,    83,    -1,
      86,    -1,    87,    -1,    88,    -1,    89,    -1,    91,    -1,
      92,    -1,    93,    -1,    94,    -1,    95,    -1,    96,    -1,
      97,    -1,    98,    -1,    99,    -1,   100,    -1,   101,    -1,
     102,    -1,   103,    -1,   104,    -1,   108,    -1,   109,    -1,
     110,    -1,   111,    -1,   112,    -1,   113,    -1,   114,    -1,
     126,    -1,   131,    -1,   132,    -1,   133,    -1,   134,    -1,
     135,    -1,   137,    -1,   138,    -1,   139,    -1,   140,    -1,
     141,    -1,   142,    -1,   143,    -1,   144,    -1,   145,    -1,
     146,    -1,   147,    -1,   148,    -1,   150,    -1,   152,    -1,
     154,    -1,   155,    -1,   156,    -1,   157,    -1,   158,    -1,
     159,    -1,   160,    -1,   161,    -1,   162,    -1,   163,    -1,
     164,    -1,   165,    -1,   166,    -1,   167,    -1,   168,    -1,
     169,    -1,   170,    -1,   171,    -1,   172,    -1,   173,    -1,
     175,    -1,   176,    -1,   177,    -1,   178,    -1,   179,    -1,
     180,    -1,   181,    -1,   182,    -1,   183,    -1,   184,    -1,
     185,    -1,   187,    -1,   188,    -1,   189,    -1,   192,    -1,
     194,    -1,    84,    -1,    85,    -1,   195,    -1,   196,    -1,
     197,    -1,   198,    -1,   199,    -1,   200,    -1,   201,    -1,
     202,    -1,   203,    -1,   204,    -1,   205,    -1,   206,    -1,
     207,    -1,   208,    -1,   209,    -1,   210,    -1,   211,    -1,
     212,    -1,   213,    -1,   214,    -1,   215,    -1,   216,    -1,
     217,    -1,   218,    -1,   219,    -1,   220,    -1,   221,    -1,
     222,    -1,   223,    -1,   224,    -1,   225,    -1,   226,    -1,
     227,    -1,   228,    -1,   229,    -1,   230,    -1,   231,    -1,
     120,    -1,   121,    -1,   232,    -1,   233,    -1,   234,    -1,
     235,    -1,   238,    -1,   239,    -1,   240,    -1,   241,    -1,
     242,    -1,   243,    -1,   244,    -1,   245,    -1,   246,    -1,
     247,    -1,   248,    -1,   249,    -1,   236,    -1,   250,    -1,
     237,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   773,   773,   775,   776,   778,   780,   781,   786,   792,
     802,   810,   810,   813,   822,   833,   871,   874,   880,   916,
     945,   948,   970,   972,   976,   983,   985,   986,   987,   988,
     989,   990,   991,   995,  1014,  1019,  1024,  1031,  1036,  1041,
    1050,  1053,  1059,  1064,  1071,  1071,  1071,  1074,  1087,  1092,
    1099,  1104,  1113,  1116,  1124,  1151,  1155,  1162,  1168,  1173,
    1178,  1187,  1211,  1215,  1222,  1227,  1232,  1237,  1248,  1266,
    1270,  1277,  1282,  1290,  1315,  1318,  1321,  1324,  1327,  1330,
    1333,  1336,  1339,  1342,  1345,  1348,  1351,  1354,  1357,  1360,
    1363,  1366,  1372,  1373,  1374,  1375,  1376,  1388,  1391,  1397,
    1411,  1415,  1422,  1429,  1432,  1437,  1442,  1450,  1458,  1469,
    1480,  1483,  1490,  1500,  1503,  1508,  1517,  1520,  1525,  1530,
    1538,  1539,  1540,  1541,  1542,  1543,  1544,  1545,  1546,  1547,
    1548,  1549,  1550,  1551,  1552,  1553,  1554,  1555,  1559,  1577,
    1581,  1586,  1595,  1601,  1601,  1604,  1624,  1628,  1633,  1641,
    1646,  1650,  1658,  1661,  1669,  1682,  1686,  1697,  1700,  1708,
    1726,  1730,  1737,  1742,  1747,  1755,  1761,  1769,  1777,  1784,
    1798,  1802,  1816,  1825,  1833,  1836,  1843,  1878,  1882,  1887,
    1893,  1903,  1906,  1914,  1917,  1924,  1942,  1946,  1953,  1958,
    1966,  1984,  1988,  1996,  2018,  2022,  2029,  2037,  2046,  2054,
    2092,  2096,  2103,  2110,  2119,  2128,  2155,  2159,  2166,  2178,
    2205,  2209,  2216,  2226,  2238,  2242,  2247,  2256,  2269,  2273,
    2278,  2287,  2301,  2305,  2318,  2323,  2335,  2339,  2347,  2360,
    2368,  2381,  2388,  2402,  2402,  2405,  2405,  2427,  2431,  2435,
    2453,  2471,  2481,  2495,  2503,  2509,  2515,  2521,  2533,  2536,
    2550,  2551,  2556,  2558,  2559,  2560,  2564,  2584,  2601,  2604,
    2608,  2620,  2622,  2626,  2630,  2634,  2638,  2642,  2648,  2654,
    2658,  2662,  2676,  2677,  2678,  2679,  2680,  2681,  2682,  2683,
    2687,  2687,  2690,  2694,  2702,  2707,  2716,  2721,  2730,  2801,
    2809,  2814,  2823,  2828,  2837,  2847,  2851,  2859,  2863,  2871,
    2887,  2896,  2908,  2917,  2920,  2925,  2934,  2938,  2946,  2956,
    2968,  2975,  2979,  2987,  2992,  3001,  3009,  3009,  3012,  3016,
    3024,  3025,  3034,  3037,  3050,  3063,  3073,  3073,  3076,  3076,
    3080,  3083,  3091,  3096,  3106,  3114,  3122,  3135,  3150,  3157,
    3158,  3159,  3160,  3161,  3162,  3163,  3164,  3165,  3166,  3167,
    3168,  3173,  3217,  3218,  3231,  3238,  3238,  3241,  3241,  3241,
    3246,  3253,  3257,  3261,  3273,  3276,  3287,  3290,  3300,  3307,
    3311,  3315,  3319,  3328,  3336,  3344,  3349,  3357,  3361,  3367,
    3374,  3389,  3404,  3407,  3411,  3419,  3427,  3431,  3440,  3448,
    3459,  3463,  3467,  3478,  3485,  3494,  3498,  3502,  3510,  3528,
    3533,  3543,  3546,  3554,  3562,  3571,  3576,  3585,  3595,  3599,
    3603,  3603,  3607,  3611,  3615,  3619,  3623,  3627,  3631,  3635,
    3639,  3643,  3647,  3651,  3655,  3660,  3664,  3668,  3673,  3680,
    3685,  3689,  3693,  3698,  3702,  3706,  3710,  3714,  3719,  3723,
    3727,  3732,  3736,  3740,  3745,  3762,  3767,  3772,  3777,  3781,
    3786,  3790,  3795,  3801,  3807,  3812,  3813,  3814,  3822,  3826,
    3830,  3838,  3845,  3854,  3854,  3858,  3878,  3879,  3887,  3888,
    3894,  3915,  3919,  3933,  3939,  3952,  3956,  3956,  3960,  3961,
    3970,  3971,  3977,  3978,  3987,  3999,  4010,  4014,  4018,  4022,
    4026,  4030,  4034,  4038,  4046,  4054,  4071,  4079,  4088,  4092,
    4096,  4100,  4104,  4112,  4124,  4129,  4134,  4141,  4146,  4153,
    4160,  4172,  4173,  4177,  4183,  4184,  4185,  4186,  4187,  4188,
    4189,  4190,  4191,  4195,  4195,  4198,  4198,  4198,  4202,  4209,
    4213,  4217,  4225,  4233,  4243,  4253,  4257,  4280,  4285,  4295,
    4296,  4305,  4309,  4318,  4318,  4318,  4322,  4328,  4337,  4337,
    4342,  4345,  4354,  4365,  4365,  4370,  4374,  4381,  4385,  4396,
    4399,  4404,  4413,  4416,  4420,  4432,  4435,  4440,  4449,  4452,
    4456,  4472,  4475,  4480,  4485,  4490,  4501,  4511,  4514,  4519,
    4529,  4530,  4544,  4545,  4546,  4547,  4548,  4549,  4550,  4555,
    4563,  4571,  4575,  4583,  4587,  4596,  4603,  4607,  4617,  4625,
    4633,  4641,  4648,  4656,  4663,  4667,  4675,  4683,  4686,  4695,
    4698,  4708,  4712,  4722,  4723,  4725,  4727,  4733,  4737,  4738,
    4739,  4740,  4745,  4761,  4762,  4763,  4764,  4765,  4766,  4767,
    4768,  4769,  4770,  4775,  4783,  4787,  4794,  4805,  4813,  4821,
    4830,  4834,  4838,  4846,  4850,  4854,  4862,  4863,  4871,  4879,
    4884,  4888,  4892,  4896,  4905,  4906,  4914,  4921,  4924,  4927,
    4930,  4934,  4946,  4962,  4964,  4971,  4974,  4983,  4995,  5000,
    5012,  5017,  5021,  5026,  5031,  5036,  5037,  5046,  5051,  5055,
    5061,  5065,  5073,  5078,  5088,  5091,  5095,  5099,  5103,  5107,
    5115,  5117,  5128,  5134,  5140,  5146,  5161,  5165,  5169,  5173,
    5177,  5181,  5185,  5189,  5197,  5201,  5205,  5213,  5217,  5225,
    5226,  5238,  5239,  5240,  5241,  5242,  5243,  5244,  5245,  5253,
    5257,  5261,  5265,  5274,  5278,  5286,  5290,  5300,  5304,  5308,
    5312,  5316,  5324,  5326,  5333,  5337,  5341,  5345,  5355,  5359,
    5363,  5371,  5373,  5381,  5385,  5392,  5396,  5404,  5408,  5416,
    5424,  5428,  5436,  5443,  5451,  5456,  5461,  5473,  5477,  5481,
    5485,  5489,  5495,  5495,  5500,  5506,  5506,  5511,  5515,  5525,
    5533,  5540,  5545,  5553,  5562,  5570,  5578,  5587,  5594,  5603,
    5615,  5620,  5625,  5631,  5637,  5643,  5653,  5656,  5664,  5668,
    5676,  5680,  5688,  5693,  5702,  5706,  5710,  5718,  5722,  5730,
    5734,  5738,  5742,  5750,  5754,  5758,  5766,  5771,  5781,  5794,
    5794,  5798,  5806,  5817,  5822,  5846,  5846,  5850,  5858,  5862,
    5869,  5874,  5883,  5892,  5892,  5896,  5900,  5907,  5913,  5923,
    5931,  5936,  5942,  5946,  5954,  5961,  5962,  5970,  5977,  5980,
    5988,  5997,  5997,  5997,  5997,  5997,  5997,  5997,  5997,  5998,
    5998,  5998,  5998,  5998,  5998,  5999,  5999,  6003,  6003,  6003,
    6003,  6003,  6003,  6003,  6003,  6003,  6003,  6004,  6004,  6004,
    6004,  6004,  6004,  6004,  6005,  6005,  6005,  6005,  6005,  6005,
    6005,  6005,  6006,  6006,  6006,  6006,  6006,  6006,  6006,  6006,
    6006,  6006,  6006,  6007,  6007,  6007,  6007,  6007,  6007,  6007,
    6007,  6007,  6007,  6007,  6007,  6008,  6008,  6008,  6008,  6008,
    6008,  6008,  6008,  6008,  6008,  6009,  6009,  6009,  6009,  6009,
    6009,  6009,  6009,  6009,  6009,  6009,  6009,  6010,  6010,  6010,
    6010,  6010,  6010,  6010,  6010,  6010,  6010,  6010,  6010,  6011,
    6011,  6011,  6011,  6011,  6011,  6011,  6011,  6011,  6012,  6012,
    6012,  6012,  6012,  6012,  6012,  6012,  6013,  6013,  6013,  6013,
    6013,  6013,  6013,  6013,  6013,  6013,  6013,  6014,  6014,  6014,
    6014,  6014,  6014,  6014,  6014,  6014,  6015,  6015,  6015,  6015,
    6015,  6015,  6015,  6015,  6015,  6015,  6016,  6016,  6016,  6016,
    6016,  6016,  6016,  6016,  6016,  6016,  6016,  6017,  6017,  6017,
    6017,  6017,  6017,  6017,  6017,  6017,  6017,  6017,  6018,  6018,
    6018,  6018,  6018,  6018,  6018,  6018,  6018,  6019
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
  "\"template\"", "\"matches\"", "\"tuple\"", "\"map\"", "\"name\"",
  "\"call\"", "\"apply\"", "\"templates\"", "\"mode\"", "\"ftor\"",
  "\"ftand\"", "\"ftnot\"", "\"private\"", "\"public\"",
  "\"deterministic\"", "\"nondeterministic\"", "\"type-alias\"",
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
  "\"<xsl:output...\"", "\"<xsl:import-schema...\"",
  "\"<xsl:type-alias...\"", "\"version='...'\"", "\"mode='...'\"",
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
     575,   576,   577,   578,   579,   580,   581,   582
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   328,   329,   329,   329,   329,   329,   329,   330,   331,
     332,   333,   333,   334,   335,   336,   337,   337,   338,   339,
     340,   340,   341,   341,   341,   342,   342,   342,   342,   342,
     342,   342,   342,   343,   344,   344,   344,   344,   344,   344,
     345,   345,   345,   345,   346,   346,   346,   347,   348,   348,
     348,   348,   349,   349,   350,   351,   351,   351,   351,   351,
     351,   352,   353,   353,   353,   353,   353,   353,   354,   355,
     355,   355,   355,   356,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   358,   358,   358,   358,   358,   359,   359,   360,
     361,   361,   361,   362,   363,   363,   363,   363,   363,   364,
     365,   365,   365,   366,   366,   366,   367,   367,   367,   367,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   369,   370,
     370,   370,   371,   372,   372,   373,   374,   374,   374,   375,
     375,   375,   376,   376,   377,   378,   378,   379,   379,   380,
     381,   381,   381,   381,   381,   382,   383,   384,   385,   386,
     387,   387,   388,   389,   390,   390,   391,   392,   392,   392,
     392,   393,   393,   394,   394,   395,   396,   396,   396,   396,
     397,   398,   398,   399,   400,   400,   400,   401,   402,   403,
     404,   404,   404,   404,   404,   405,   406,   406,   406,   407,
     408,   408,   408,   409,   410,   410,   410,   411,   412,   412,
     412,   413,   414,   414,   415,   415,   416,   416,   416,   417,
     417,   418,   418,   419,   419,   420,   420,   421,   421,   421,
     421,   421,   421,   422,   423,   423,   423,   423,   424,   424,
     425,   425,   426,   426,   426,   426,   427,   428,   429,   430,
     431,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   432,   433,   433,   433,   433,   433,   433,   433,   433,
     434,   434,   435,   436,   437,   437,   438,   438,   439,   440,
     441,   441,   442,   442,   443,   444,   444,   445,   445,   446,
     447,   448,   448,   449,   449,   449,   450,   450,   451,   451,
     452,   453,   453,   454,   454,   455,   456,   456,   457,   457,
     458,   458,   459,   459,   459,   459,   460,   460,   461,   461,
     462,   462,   463,   463,   464,   465,   466,   467,   467,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   469,   470,   470,   470,   471,   471,   472,   472,   472,
     473,   474,   474,   475,   476,   476,   477,   477,   478,   479,
     479,   480,   480,   481,   482,   483,   483,   484,   484,   485,
     485,   486,   487,   487,   487,   488,   488,   488,   489,   489,
     490,   490,   491,   492,   493,   493,   494,   494,   495,   496,
     496,   497,   497,   498,   499,   499,   500,   500,   501,   501,
     502,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   503,   503,   503,   504,   504,
     505,   505,   505,   506,   506,   506,   506,   506,   507,   507,
     507,   508,   508,   508,   509,   509,   510,   510,   511,   511,
     512,   512,   513,   513,   513,   514,   514,   514,   515,   515,
     515,   516,   516,   517,   517,   518,   519,   519,   520,   520,
     520,   520,   521,   522,   522,   522,   523,   523,   524,   524,
     525,   525,   526,   526,   527,   527,   528,   528,   528,   528,
     528,   528,   528,   528,   529,   529,   530,   530,   531,   531,
     531,   531,   531,   532,   533,   533,   534,   534,   535,   535,
     535,   536,   536,   536,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   538,   538,   539,   539,   539,   540,   541,
     542,   542,   543,   544,   545,   546,   546,   547,   547,   548,
     548,   549,   549,   550,   550,   550,   551,   551,   552,   552,
     553,   553,   553,   554,   554,   555,   555,   556,   556,   557,
     557,   557,   558,   558,   558,   559,   559,   559,   560,   560,
     560,   561,   561,   561,   561,   561,   562,   563,   563,   564,
     565,   565,   566,   566,   566,   566,   566,   566,   566,   567,
     568,   569,   569,   570,   570,   571,   572,   572,   573,   574,
     575,   576,   577,   577,   578,   578,   579,   580,   580,   581,
     581,   582,   582,   583,   583,   583,   583,   584,   584,   584,
     584,   584,   585,   586,   586,   586,   586,   586,   586,   586,
     586,   586,   586,   587,   588,   588,   588,   589,   590,   591,
     592,   592,   592,   593,   593,   593,   594,   594,   595,   596,
     597,   597,   597,   597,   598,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   606,   607,   607,   608,   608,   609,
     609,   610,   610,   611,   611,   612,   612,   613,   613,   613,
     614,   614,   615,   615,   616,   616,   616,   616,   616,   616,
     617,   617,   618,   618,   618,   618,   619,   619,   619,   619,
     619,   619,   619,   619,   620,   620,   620,   621,   621,   622,
     622,   623,   623,   623,   623,   623,   623,   623,   623,   624,
     624,   624,   624,   625,   625,   626,   626,   627,   627,   627,
     627,   627,   628,   628,   629,   629,   629,   629,   630,   630,
     630,   631,   631,   632,   632,   633,   633,   634,   634,   635,
     636,   636,   637,   638,   639,   639,   639,   640,   640,   640,
     640,   640,   641,   641,   642,   643,   643,   644,   644,   645,
     646,   647,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   655,   655,   655,   655,   655,   656,   656,   657,   657,
     658,   658,   659,   659,   660,   660,   660,   661,   661,   662,
     662,   662,   662,   663,   663,   663,   664,   664,   665,   666,
     666,   667,   668,   669,   669,   670,   670,   671,   672,   672,
     673,   673,   674,   584,   584,   675,   675,   676,   676,   677,
     678,   678,   537,   679,   679,   680,   680,   681,   536,   682,
     683,   684,   684,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   685,   685,   685,
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
     685,   685,   685,   685,   685,   685,   685,   685
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
       2,     2,     3,     0,     1,     1,     1,     3,     1,     1,
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
       1,     3,     3,     1,     1,     4,     3,     1,     3,     2,
       6,     3,     1,     4,     3,     1,     3,     4,     1,     3,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
       0,     8,     9,     0,     9,     0,   322,     0,     0,   252,
      22,   110,     5,    19,    21,     0,     0,     6,    16,     7,
       0,     1,     0,   508,     0,     0,     0,   577,     0,   553,
       0,     0,   472,   532,   503,     0,   774,   775,   776,   842,
     843,   844,   856,   848,   849,   850,   851,   852,   854,   858,
     859,   860,   861,   862,   863,   864,   865,   866,   867,   868,
     869,   870,   871,   872,   873,   874,   875,   876,   958,   959,
     877,   878,   879,   880,   881,   882,   883,   884,   885,   886,
     887,   888,   889,   890,   891,   892,   893,   894,   895,   896,
     897,   898,   899,   900,   901,   997,   998,   857,   777,   902,
     509,   510,   903,   904,   905,   906,   907,   908,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   918,   919,   853,
     920,   921,   847,   922,   923,   924,   925,   926,   927,   928,
     929,   930,   931,   932,   933,   934,   935,   936,   937,   938,
     939,   940,   941,   846,   942,   943,   944,   945,   946,   947,
     948,   949,   950,   951,   952,   953,   954,   955,   845,   956,
     855,   957,   960,   961,   962,   963,   964,   965,   966,   967,
     968,   969,   970,   971,   972,   973,   974,   975,   976,   977,
     978,   979,   980,   981,   982,   983,   984,   985,   986,   987,
     988,   989,   990,   991,   992,   993,   994,   995,   996,   999,
    1000,  1001,  1002,  1015,  1017,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,  1014,  1016,     2,   336,
     338,   339,     0,   352,   355,   356,   340,   341,   342,   348,
     405,   407,   424,   427,   429,   432,   437,   440,   443,   445,
     447,   449,   451,   454,   455,   457,     0,   463,   456,   468,
     471,   475,   476,   478,   479,   480,     0,   485,   482,     0,
     497,   495,   505,   507,   477,   511,   514,   523,   515,   516,
     517,   520,   521,   518,   519,   541,   543,   544,   545,   542,
     582,   583,   584,   585,   586,   587,   588,   504,   632,   623,
     630,   629,   631,   628,   625,   627,   624,   626,   343,     0,
     344,     0,   346,   345,   347,   525,   526,   527,   524,   506,
     349,   350,   522,   809,   810,   513,   832,   838,   779,   841,
       0,     3,   261,    25,   116,   322,     4,     0,    14,     0,
     325,   326,   327,   328,   329,   330,   323,   324,   842,   843,
     844,   856,   848,   849,   850,   851,   852,   864,   865,   866,
     867,   868,   869,   870,   871,   872,   873,   874,   875,   893,
     997,   998,   904,   906,   917,   918,   853,   847,   935,   941,
     845,   855,   983,   986,   992,   994,  1015,  1004,  1005,   528,
     529,   841,   842,   843,   849,   852,   845,   494,   548,   549,
     550,     0,   578,     0,   470,   554,     0,   453,   452,   531,
       0,   488,     0,     0,   596,     0,     0,     0,     0,     0,
       0,     0,     0,   602,     0,     0,     0,     0,     0,   486,
     487,   489,   490,   491,   492,   498,   499,   500,   501,   502,
       0,     0,     0,   772,     0,     0,     0,   360,   362,     0,
       0,   368,   370,     0,     0,   391,     0,     0,     0,     0,
       0,     0,   493,     0,     0,     0,   591,     0,   609,     0,
       0,   762,   763,     0,   765,   766,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   357,   354,   358,
     359,   353,     0,     0,     0,     0,     0,     0,     0,     0,
     410,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   464,   469,     0,     0,
       0,     0,   484,   496,     0,     0,     0,     0,   764,     0,
       0,     0,     0,     0,     0,     0,   250,   251,   261,     0,
      23,    24,     0,   112,   113,     0,     0,     0,   778,   322,
      17,     0,   318,     0,   333,     0,    13,   553,     0,   580,
     579,   576,     0,   530,   647,   643,     0,   646,   658,     0,
       0,   595,   638,     0,   634,     0,     0,     0,     0,   639,
     633,   640,     0,     0,     0,     0,   601,     0,   649,     0,
     657,   659,   637,     0,     0,     0,     0,     0,     0,     0,
     609,     0,   609,     0,     0,   609,     0,     0,     0,     0,
       0,     0,     0,     0,   598,   655,   650,     0,   654,     0,
     590,     0,     0,     0,     0,     0,   834,     0,   835,   609,
     797,   799,   337,   351,   373,     0,     0,     0,   404,   406,
     409,   412,   413,   414,   422,   423,     0,   408,   415,   416,
     417,   418,   419,   420,   421,     0,   430,   431,   428,   433,
     435,   434,   436,   438,   439,   441,   442,     0,     0,     0,
       0,   461,     0,   474,   473,     0,     0,   839,     0,   540,
     813,   539,     0,   538,     0,     0,     0,     0,   535,     0,
     811,   257,   256,   282,     0,   253,   255,     0,   259,   947,
     954,     0,     0,     0,   272,     0,     0,     0,   276,   277,
     279,   273,   274,   280,   281,     0,   275,     0,   258,   278,
       0,     0,    20,    34,    62,    48,    69,    74,   104,   100,
      26,    52,    27,    52,    28,   116,    29,   116,    30,     0,
      32,     0,    31,     0,   111,   109,   139,     0,   146,   155,
       0,     0,     0,   186,   191,   194,   198,   200,   206,   210,
     177,   214,   218,   222,   143,   144,   118,   119,   120,   116,
     121,   117,   122,   152,   123,   157,   124,     0,   126,   116,
     125,   134,   181,   127,   116,   128,   116,   129,   116,   130,
     116,   131,   116,   132,   116,   133,   116,   135,     0,   136,
     116,   137,   116,   316,   317,     0,     0,     0,   609,     0,
     319,     0,   854,   846,   855,  1015,  1017,   331,   613,   618,
     619,   622,   620,   815,   816,   621,   823,   824,   554,     0,
     581,     0,   466,   465,     0,   644,   597,   593,     0,   600,
     635,   636,   642,   641,   603,   604,     0,   648,   656,   599,
     589,     0,   771,     0,   533,   534,   364,   361,     0,     0,
     369,     0,   390,   388,   389,     0,     0,   458,     0,     0,
       0,   651,   592,   610,     0,   812,     0,     0,     0,     0,
     833,     0,     0,     0,     0,   374,   381,   375,   378,   382,
       0,   411,     0,     0,     0,     0,   684,   425,   665,   668,
     670,   672,   674,   675,   690,   679,   444,   446,   448,   607,
     450,   462,   481,   483,   512,     0,   814,     0,     0,   761,
     760,   759,   536,   254,     0,   322,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   790,     0,
       0,     0,     0,   262,   263,   264,   265,   269,   270,   266,
     267,   268,   271,   105,   106,    40,    36,     0,     0,     0,
     116,    49,    51,     0,   116,    63,    67,    66,     0,     0,
       0,    70,     0,     0,     0,    73,    91,    75,    79,    80,
      81,    85,    86,    88,    77,    82,    83,    84,    87,    89,
       0,     0,     0,    99,   101,     0,   103,   115,   114,     0,
       0,     0,   174,   170,   116,     0,     0,   113,     0,     0,
       0,     0,   156,     0,   165,     0,   116,     0,   113,   113,
     183,   187,     0,     0,     0,     0,     0,   113,     0,     0,
       0,   113,     0,   113,   113,     0,   113,     0,     0,   113,
     113,     0,   213,   216,     0,   219,   220,     0,     0,     0,
       0,   661,     0,     0,   334,   332,     0,     0,     0,     0,
       0,     0,   614,   616,   615,   611,   553,   553,   571,   546,
     467,     0,   660,   594,   605,   773,     0,     0,   366,     0,
       0,     0,   401,     0,   395,     0,     0,   459,   460,     0,
       0,   768,     0,   769,   836,     0,     0,     0,   804,   805,
     801,   803,     0,   383,   384,   385,   376,     0,     0,   673,
       0,   685,   687,   689,   680,     0,   426,     0,   663,     0,
       0,     0,   676,     0,   677,   608,   606,   537,     0,     0,
       0,   284,   285,   289,   300,     0,     0,   313,   314,   290,
     291,     0,     0,     0,     0,   295,   296,     0,     0,   755,
     754,   756,     0,     0,     0,     0,     0,     0,     0,     0,
     303,     0,   303,   107,   108,    38,     0,   230,   229,   842,
     864,   999,  1000,    35,   225,     0,   228,   226,   237,   248,
     244,    39,    44,    45,    46,    37,    55,    53,   116,     0,
      50,     0,    65,    64,    61,    72,    71,    68,    95,    96,
      92,    93,    94,    76,    97,    78,    90,   102,   142,   166,
       0,   116,   171,     0,     0,   168,   140,   141,   138,   149,
     150,   151,   148,   147,   145,   160,   153,   116,   154,   158,
     167,     0,   178,   179,   180,   116,     0,   189,   188,   116,
     192,   190,   195,   196,   193,   197,   201,   203,   204,   202,
     199,   207,   208,   205,   211,   212,   209,   215,   217,   223,
     221,   330,    15,     0,   822,   612,   617,     0,     0,   820,
       0,   826,     0,   827,   609,   831,     0,     0,     0,     0,
     645,   770,     0,     0,     0,   371,   372,   392,     0,     0,
       0,   393,   394,     0,     0,     0,     0,   652,   335,     0,
     837,     0,     0,   806,     0,     0,   377,     0,   379,   678,
     684,   682,     0,   686,   688,     0,   667,     0,     0,   696,
       0,     0,     0,     0,     0,   662,   666,   669,     0,     0,
       0,   725,     0,     0,   750,     0,     0,   721,   722,     0,
     709,   715,   716,   714,   713,   717,   711,   712,   718,     0,
       0,     0,     0,     0,   757,   758,     0,   609,     0,     0,
     299,     0,     0,     0,   288,   790,   794,   795,   796,   791,
     792,     0,     0,     0,     0,     0,   303,     0,   302,     0,
     309,    41,    42,    43,   247,     0,     0,     0,     0,     0,
     238,     0,     0,     0,     0,   243,    56,    60,    59,     0,
       0,     0,    33,    47,    98,   173,     0,   169,   172,   161,
     164,     0,     0,     0,   182,     0,   176,   185,     0,   330,
     817,     0,     0,     0,     0,   825,   829,     0,   553,   553,
       0,   575,   574,   573,   572,   365,     0,     0,     0,   399,
       0,     0,   400,   398,     0,   653,   767,   609,     0,   798,
     800,     0,   386,   387,     0,   681,   683,   753,   703,   701,
     702,   664,     0,     0,   707,   708,   699,   700,   671,   726,
     731,     0,   751,   724,   723,     0,     0,   728,   727,     0,
     720,   719,     0,   749,   710,     0,     0,   692,     0,   691,
     260,     0,   283,   292,   293,   286,   287,   297,   298,   294,
       0,   780,   786,     0,     0,     0,   840,   330,   306,   307,
     301,   304,     0,     0,   246,   245,     0,   234,   233,     0,
     224,   240,   239,   242,   241,     0,    58,    57,    54,   175,
     163,   162,   159,   184,    11,     0,   818,   821,     0,   828,
       0,     0,     0,   553,   367,   363,   402,     0,   397,   403,
       0,   807,     0,   380,   704,   705,   706,   697,   698,   739,
     732,   732,   734,     0,     0,   741,   741,   752,   694,   693,
       0,     0,   312,   310,   788,     0,     0,     0,     0,   793,
     784,   786,     0,   305,   303,   231,     0,     0,    10,    12,
       0,   819,   830,   559,   565,   551,   562,   568,   552,     0,
       0,     0,   802,     0,     0,     0,     0,     0,   745,   743,
     740,   738,   695,   311,   789,   787,   781,     0,     0,   321,
     315,   320,   308,     0,   235,   236,   249,    18,     0,     0,
       0,     0,   547,   396,   808,     0,   730,   729,   735,   736,
       0,   744,     0,     0,   742,   782,   786,   785,   232,   555,
     561,   560,   556,   567,   566,   557,   564,   563,   558,   570,
     569,   733,     0,   746,   747,   748,     0,   737,   783
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,   326,  1588,    19,    17,    18,   328,
     550,    12,    13,   323,   542,   730,   731,  1165,  1185,   732,
     733,   960,  1187,  1188,   734,   735,   736,   737,   738,   739,
    1203,  1205,   740,   741,   742,   743,   766,   324,   744,   545,
     767,   768,   769,   770,   771,   772,   773,  1222,  1011,   774,
     775,  1013,  1226,  1227,   776,   777,   778,   779,   780,  1002,
    1003,  1004,  1213,   781,   782,  1020,  1236,   783,   784,   785,
     786,   787,   788,   789,   790,   791,   792,   793,   794,   795,
     796,   797,   798,   799,   800,   801,   802,  1173,  1174,  1175,
    1176,  1516,  1623,  1177,  1178,  1179,  1395,   321,   322,   533,
     534,   536,   537,   538,   539,   701,   702,   695,   703,   704,
     705,   706,   707,   708,   709,   710,  1147,  1499,   711,   712,
     713,  1378,  1159,   714,   715,  1573,   716,   717,   805,   335,
    1620,   940,   336,   337,   556,   553,   554,   998,   218,   219,
     220,   221,   222,   223,   478,   224,   437,   438,  1078,  1284,
     225,   441,   442,   479,   480,   481,   887,   888,   889,  1105,
    1308,   226,   444,   445,   227,  1083,  1291,  1084,  1085,  1289,
     228,   229,   230,   231,   646,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   833,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   379,   269,   270,   271,   272,   273,   682,
     683,   274,   275,   276,   390,   557,   396,  1595,  1598,  1628,
    1630,  1629,  1631,  1279,   277,   393,   278,   560,   279,   280,
     281,   457,   571,   282,   405,   283,   284,   285,   286,   414,
     586,   908,  1126,   622,   817,  1065,   818,   819,   287,   288,
     289,   290,   291,   292,   293,   294,   566,   295,   587,   296,
     617,   297,   589,   567,   590,  1071,  1052,   897,  1325,  1118,
     898,   899,   900,   901,   902,   903,   904,   905,  1114,  1124,
    1353,  1326,  1557,  1466,  1122,  1340,  1341,  1342,  1343,  1344,
    1603,  1478,  1345,  1610,  1566,  1607,  1644,  1346,  1347,  1348,
    1116,   719,   298,   299,   300,   301,   302,   303,   304,   432,
     433,   305,   306,   307,   308,   547,   309,   720,  1577,  1502,
    1154,  1369,  1370,   310,   311,  1100,  1302,  1303,   312,   313,
     314,   315,   822,   823,   824,  1270,   825,   826,  1272,  1273,
     827,   316,   627,   628,   317,   721,   318,   319
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1429
static const yytype_int16 yypact[] =
{
     765, -1429, -1429,  -115, -1429,   -71, -1429,   147,  3481,    92,
   -1429, -1429, -1429, -1429, -1429,   131,   176, -1429, -1429, -1429,
      48, -1429,  7097, -1429,  4927,   598,   104,   274,  4207,   320,
    3723,  3723, -1429, -1429, -1429,  2271, -1429, -1429, -1429,   108,
     549,   432,   442,   452,    44,   502,   507,   567, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429,   534,   555,   569,   582,   589,
     592,   607,   651,   667,   674,   696,   575, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429,   640, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429,   680,   702, -1429, -1429, -1429,
   -1429, -1429, -1429,   728, -1429,    33, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429,   743,   743, -1429,   722,
   -1429, -1429,   746, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429,   284, -1429, -1429, -1429,
   -1429, -1429,    59, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,    56, -1429,
     748, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429,    35, -1429, -1429,   -11, -1429,
   -1429, -1429, -1429, -1429,   723, -1429,     5, -1429, -1429, -1429,
   -1429, -1429, -1429,   767, -1429, -1429,   613,   553, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,   778,
   -1429, -1429,   499, -1429, -1429, -1429, -1429, -1429, -1429,   685,
     666, -1429,   763,   661,    42,    46,    54,   474, -1429,   705,
     700,   717,   697, -1429, -1429, -1429,   303, -1429, -1429,  4207,
     333, -1429, -1429,   857,   865, -1429,  4927, -1429, -1429,  4927,
   -1429, -1429, -1429, -1429,   262, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,  3481,
   -1429,  3481, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,    69,
      97, -1429,   698,   263,   421, -1429, -1429,  7097,   707,   120,
   -1429, -1429, -1429, -1429, -1429,   737, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429,   850,   852,   853,   854,   855, -1429, -1429, -1429,
   -1429,   649, -1429,   868,   333, -1429,  7097, -1429, -1429, -1429,
     545, -1429,  5407,  3481, -1429,   851,   859,  3481,     8,   861,
     862,  6279,  3481, -1429,   856,  7097,  7097,   864,  3481, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
    3481,  7097,    10, -1429,  3481,  3481,  7097,   873, -1429,  7097,
     889,   874, -1429,  7097,    58, -1429,    77,  3481,  3481,  3481,
     860,   870, -1429,   851,  5647,  3481, -1429,   851,   758,  3481,
     753, -1429, -1429,  3481, -1429, -1429,  6901,  7097,  3481,  3481,
    3481,   728,    33,  3481,   904,   779,   781, -1429, -1429, -1429,
   -1429, -1429,  3723,  3723,  3723,  3723,  3723,  3723,  3723,  3723,
   -1429,  3723,  3723,  3723,  3723,  3723,  3723,  3723,  3723,   858,
    3723,  3723,  3723,  3723,  3723,  3723,  3723,  3723,  3723,  3723,
    3723,   761,   770,   771,   772,  2513, -1429,   333,  4207,  4207,
    3481,  3481, -1429, -1429,  7097,  3481,  1787,   -57, -1429,  2029,
     875,   800,   801,    47,   878,   756, -1429, -1429, -1429,  3965,
   -1429, -1429,   208, -1429, -1429,   961,    82,   893, -1429, -1429,
   -1429,  7097, -1429,   577, -1429,  5858, -1429,   826,   831, -1429,
   -1429, -1429,   171, -1429, -1429, -1429,   591, -1429, -1429,   306,
    2755, -1429, -1429,   367, -1429,   507,   855,   897,   899, -1429,
   -1429, -1429,   902,   908,   382,  2997, -1429,   910, -1429,   911,
   -1429, -1429, -1429,   416,   457,   924,   640,  3481,   485,   497,
     758,   728,   758,  7097,    33,   758,   743,  3481,  3481,   609,
     618,   503,  3481,  3481, -1429, -1429, -1429,   620, -1429,   523,
   -1429,  5858,   909,   720,   900,   806, -1429,   527, -1429,   758,
     738,  -120, -1429, -1429, -1429,  7097,  3481,   825,   666, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429,  3723, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429,    21,    46,    46,   725,    54,
      54,    54,    54,   474,   474, -1429, -1429,  5858,  5858,  7097,
    7097, -1429,   538, -1429, -1429,   321,   335, -1429,   355, -1429,
   -1429, -1429,   621, -1429,   436,  3481,  3481,  3481, -1429,   630,
   -1429, -1429, -1429, -1429,   878, -1429, -1429,  7097,   488,   517,
     585,   878,   878,   878, -1429,   878,   878,   878, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429,   878, -1429,   878, -1429, -1429,
     878,   878, -1429, -1429, -1429, -1429, -1429, -1429,   492, -1429,
   -1429,   146, -1429,    20, -1429,   209, -1429,   128, -1429,  1135,
   -1429,    16, -1429,   713,    67, -1429, -1429,   475, -1429, -1429,
     659,   704,   662, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,   225,
   -1429, -1429, -1429,  -128, -1429,   684, -1429,   721, -1429, -1429,
   -1429, -1429,    49, -1429,   193, -1429,   668, -1429,  -167, -1429,
   -1429, -1429,    91, -1429,   -19, -1429,  -181, -1429,  -145, -1429,
     500, -1429,   669, -1429, -1429,  7283,   845,    82,   758,   965,
   -1429,  6069,   937,   938,   939,   940,   941, -1429,   447, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,   679,   283,
   -1429,   863, -1429, -1429,  7097, -1429, -1429, -1429,   546, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429,   560, -1429, -1429, -1429,
   -1429,  3481, -1429,   876, -1429, -1429,   869, -1429,   972,   974,
   -1429,   866, -1429, -1429, -1429,   835,   833, -1429,   563,   565,
    7097, -1429, -1429, -1429,  3481, -1429,  3481,  3481,  3481,  7097,
   -1429,   981,   955,   964,  1514, -1429, -1429,   968, -1429,   663,
    3481, -1429,    21,  3481,   338,   568,   301,   915,   769,   762,
     925, -1429, -1429,   926,   814, -1429, -1429, -1429, -1429,   991,
   -1429, -1429, -1429, -1429, -1429,  3239, -1429,   789,   796, -1429,
   -1429, -1429, -1429, -1429,   990,   341,   585,   634,   926,   845,
    1019,  7097,   636,   689,   154,   138,  7097,    76,   383,  7097,
      82,   -23,   -24, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429,   739,   749, -1429, -1429,  4447,  5858,   654,
     774, -1429, -1429,  5858,   774, -1429, -1429, -1429,  5858,  3481,
    1070, -1429,  5858,  3481,  7284, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
     -40,   913,   913, -1429, -1429,  6069, -1429, -1429, -1429,   791,
    3481,   744,   550, -1429, -1429,  3481,  3481, -1429,  7312,   -82,
    3481,   199, -1429,   204, -1429,  7341, -1429,  3481, -1429, -1429,
     755, -1429,  5858,  3481,  7369,  3481,  7398, -1429,  3481,  7426,
    7455, -1429,  3481, -1429, -1429,  7483, -1429,  3481,  7512, -1429,
   -1429,  7540, -1429, -1429,  3481, -1429, -1429,  7569,  3481,  7597,
     748, -1429,   878,  7283, -1429, -1429,  1005,  1006,  1007,  5167,
    6489,  6699, -1429, -1429, -1429, -1429,   320,   320, -1429, -1429,
   -1429,  1013, -1429, -1429, -1429, -1429,  3481,  1046,   867,  3481,
    3481,  3481,  1047,   -42, -1429,    60,  3481, -1429, -1429,   296,
     570, -1429,   841, -1429, -1429,  3481,  1049,  1049, -1429, -1429,
     843, -1429,  3481, -1429, -1429,   918,   968,  1029,   573, -1429,
       6,   978,   872, -1429, -1429,   983, -1429,    21,   222,    21,
     948,   291,   999,    24, -1429, -1429, -1429, -1429,  3481,  3481,
     845, -1429, -1429,   999, -1429,  7097,  1050, -1429, -1429, -1429,
   -1429,   944,   845,   916,   919, -1429, -1429,  1058,   969, -1429,
   -1429, -1429,  7097,   -78,   871,   943,  7283,  7097,   906,   845,
     979,  7097,   979, -1429, -1429,   -59,  4927, -1429,  1213,   424,
    1079,  1059,  1061,  1090, -1429,  4687,   449,   637, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,   244,  7626,
   -1429,  7654, -1429,   778, -1429, -1429,   778, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429,   985,   985, -1429, -1429,   778,
    3481, -1429, -1429,   877,  7683,   778,   778,    67, -1429, -1429,
   -1429, -1429, -1429,   778, -1429, -1429, -1429,    66, -1429, -1429,
   -1429,  7711,   778,    67,    67, -1429,   880, -1429,   778, -1429,
     778, -1429,    67,   778, -1429, -1429,    67,   778,    67,    67,
   -1429,    67,   778, -1429,    67,    67, -1429,   778, -1429,   778,
   -1429,   737, -1429,   748, -1429, -1429, -1429,  1062,   953, -1429,
     639, -1429,   641, -1429,   758, -1429,  1077,  1068,  1069,   279,
   -1429, -1429,  7097,  1105,   982, -1429, -1429, -1429,  7097,  5858,
      74, -1429, -1429,  5858,  3481,   962,  1075, -1429, -1429,  3481,
   -1429,  7097,   644, -1429,   646,  1080, -1429,   673,   976, -1429,
     301, -1429,  1073, -1429, -1429,  3723,   762,  1027,   719, -1429,
    3723,  3723,    24,   604,   604, -1429, -1429,   925,    21,   699,
     742, -1429,    28,   912, -1429,   747,  7097, -1429, -1429,  1001,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,   291,
      37,  3723,  3723,   927, -1429, -1429,   878,   758,   845,   692,
   -1429,   845,   845,   660, -1429,    -3, -1429, -1429, -1429,  1096,
   -1429,  4447,  6069,   748,  1095,   960,   979,   845,  1103,  1100,
    1103, -1429, -1429, -1429, -1429,  4927,  4927,    62,  1001,  4447,
   -1429,  4687,  4687,  4687,  4687,  1117, -1429, -1429, -1429,  5858,
    3481,  7740, -1429, -1429, -1429,   778,  7768, -1429, -1429, -1429,
   -1429,  5858,  3481,  7797, -1429,  7825, -1429,  1512,   909,   737,
   -1429,  5858,  5858,   988,  7097, -1429, -1429,  5858,   320,   320,
     598, -1429, -1429, -1429, -1429, -1429,  7097,  3481,   989, -1429,
    7097,  3481, -1429, -1429,  3481, -1429, -1429,   758,  1049, -1429,
   -1429,  1049, -1429, -1429,   845, -1429, -1429,    54, -1429, -1429,
   -1429, -1429,    55,   530, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429,   929, -1429, -1429, -1429,   -14,   845, -1429, -1429,    39,
   -1429, -1429,  1018, -1429, -1429,  3723,  3723,   725,    52, -1429,
   -1429,    41, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
     123, -1429,   993,   914,   -78,    86, -1429,   737, -1429, -1429,
    1103, -1429,   845,   845, -1429, -1429,  1106, -1429, -1429,  1113,
   -1429, -1429, -1429, -1429, -1429,  3481, -1429,   778, -1429, -1429,
   -1429,   778, -1429, -1429,   878,   909, -1429, -1429,  5858, -1429,
    1107,   359,   672,   320, -1429, -1429, -1429,  1020, -1429, -1429,
    1140, -1429,   650, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429,   109,  1001,   845, -1429, -1429, -1429,   725,   725,
    3723,  3481, -1429, -1429, -1429,   655,  5858,   909,  4447, -1429,
   -1429,   993,    19, -1429,   979, -1429,   105,   464, -1429, -1429,
     878, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,  1128,
    3481,  3481, -1429,   664,   670,  1001,   949,   671, -1429, -1429,
     583,   583,   725, -1429, -1429, -1429, -1429,    86,   909, -1429,
   -1429, -1429,  1103,  1116, -1429, -1429, -1429, -1429,    73,    88,
      80,   224, -1429, -1429, -1429,  1044, -1429, -1429,    24, -1429,
    1001, -1429,    53,    53, -1429, -1429,   993, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429,   956, -1429, -1429, -1429,   909, -1429, -1429
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1429, -1429, -1429,  1155, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429,   428, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429,   172, -1429, -1429, -1429, -1429,  1160, -1429,  -470,   288,
   -1429, -1429, -1429, -1429,   419, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429,   155, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
     165, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1337,  -219, -1429,
   -1429, -1429, -1429, -1429, -1134, -1429, -1429, -1429, -1429, -1429,
     638, -1429, -1429, -1429,   635, -1429, -1429,  -531, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1138, -1429, -1429, -1429, -1429, -1429, -1429,  -742,  -159,
   -1429,     9, -1429, -1429, -1226,  -328,   366,  -566,   642,    -8,
    -249, -1429, -1429,   954, -1429, -1429, -1429,   576, -1429, -1429,
   -1429, -1429,   578, -1429, -1429, -1429,   289,    78, -1429, -1429,
   -1429, -1429,  1066,   579, -1429, -1429, -1429,   101, -1429, -1429,
   -1429, -1429,   708,   703, -1429,   238,  -133,  -497,   342,  -475,
     337,   340, -1429, -1429, -1429,   828, -1429, -1429, -1429,  -639,
    -238, -1429, -1429, -1429,    -2,   349, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429,   -10, -1429, -1429, -1429, -1429,
    -644, -1429, -1325,  -418, -1429, -1429, -1429, -1429, -1429,   665,
     276, -1429,   -90, -1429,  -237, -1429,  -547, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429,   285, -1429, -1429, -1429, -1429, -1429, -1429,  1054,
   -1429,   529, -1429,  -596,  -467, -1429,  -799,  -650,  -378, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,   792,
   -1429,   793, -1429,   782,   750,   336,  -818,  -856, -1429, -1429,
   -1429,    90,    84,  -123,   314, -1429, -1429, -1429,  -101, -1429,
   -1300, -1429,  -253,  -113,   293,  -136, -1429, -1429, -1429, -1429,
    -342, -1428, -1429,  -344,  -782, -1429, -1429, -1429, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,
     628, -1429, -1429, -1429, -1307,  -404,  -303, -1429, -1355, -1420,
    -129, -1429,  -264, -1429, -1429, -1429, -1080,  -207, -1429, -1429,
   -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429, -1429,  -182,
   -1429, -1429, -1429,   364, -1429, -1429,    17,   -22
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -323
static const yytype_int16 yytable[] =
{
     381,   458,   381,   696,   856,   658,   858,   583,   516,   861,
     829,   896,  1056,   595,   387,    20,   895,  1304,   600,   909,
     909,   602,  1463,  1198,  1380,   605,   394,   400,   659,   660,
     661,   662,  1483,   881,  1505,  1418,  1107,  1500,    29,   380,
    1219,  1390,   439,   596,  1366,   874,   892,  1561,   461,   574,
     527,  1571,   528,    29,   893,  1311,   875,   503,    36,    37,
      38,   892,  1517,  1381,   464,  1053,   507,   874,  1475,   893,
     575,    22,  1293,    36,    37,    38,   500,   501,   452,  1563,
    1518,  1519,  1199,  1440,   411,  1581,   500,   501,   329,   500,
     501,   606,   412,  1563,   459,   684,   454,   693,  1389,   568,
    1476,  1051,  1051,  1039,   455,   883,  1042,   412,  1082,   529,
     606,  1134,   568,   591,    22,   874,   504,  1027,  1649,    16,
     530,   874,   884,  1160,  1162,  1655,  1500,   401,   874,   551,
    1040,    98,   551,   808,   874,  1652,   874,    10,  1485,   460,
    1028,  1290,  1476,  1350,  1149,  1150,    98,    21,   402,  1161,
    1157,   591,  1043,  1564,   873,  1009,   403,    36,    37,    38,
    1158,   552,  1044,   923,  1574,   685,   686,  1564,   413,  1560,
     943,   944,   945,   687,   946,   947,   948,   820,  1151,  1010,
     456,  1486,   997,   413,   949,   859,   950,    98,  1650,   951,
     952,  1294,  1144,  1535,  1619,  1656,  1207,  1646,  1156,   576,
     906,   907,    11,   502,  1653,  1441,   607,  1661,   505,   506,
     623,  1477,  1054,  1570,   625,   462,  1572,   885,   508,   631,
     632,   633,  1565,   531,   634,   608,  1618,   440,  1350,   597,
      98,   465,   404,   391,   381,  1351,  1352,   381,  1510,  1153,
    1220,  1617,  1221,   820,  1367,  1368,   522,   517,   896,   523,
     896,   894,   821,   895,  1312,   895,  1608,  1521,  1522,  1523,
    1524,  1625,  1606,  1382,  1383,  1036,   894,   993,  1554,  1555,
    1556,  1658,   874,   531,   803,   804,   831,   681,   320,   330,
     681,  1582,   524,   525,   532,  1200,  1201,  1202,  1037,   820,
     820,  1666,  1141,   924,   331,   332,   333,   334,  1638,  1142,
     994,   832,   526,    25,   961,   381,    26,    27,  1068,  1145,
    1430,   325,  1356,   330,  1605,  1146,   962,  1317,   821,  1296,
    1351,  1352,   995,  1016,  1360,  1069,   963,   874,   331,   332,
     333,   334,   449,  1663,   546,    29,  1318,  1297,  1662,   469,
    1659,  1376,  1319,   912,   548,  1143,   803,   804,   853,   327,
    1409,   515,   450,   451,   469,   836,  1017,   913,   863,   864,
    1410,  1018,  1019,   518,   821,   821,   821,   821,   469,   519,
      29,  1552,  1411,  1412,   381,  1031,  1329,   914,   892,  1330,
     381,   392,  1331,  1332,  1333,  1334,   893,   886,   469,   381,
      36,    37,    38,   381,   381,   569,  1431,  1432,  1032,   573,
     469,  1033,  1034,  1593,   584,  1594,   927,   928,   929,   381,
     593,  1276,   971,   562,   381,   469,   839,   381,  1320,  1321,
    1322,   381,   594,  1323,  1324,   395,   598,   599,   548,   955,
     956,   844,   381,   820,   972,   973,   919,   920,   921,   609,
     610,   611,  1335,  1385,   381,   381,  1622,   619,   380,   469,
    1224,   957,   958,   380,   959,  1228,   380,  1225,  1062,   722,
     380,   723,  1225,    98,   402,   849,   896,   930,   724,   725,
    1063,   895,   408,   896,   726,   896,  1336,  1021,   895,  1391,
     895,  1064,   409,   629,   630,  1392,  1626,   727,   728,   729,
     469,  1181,   410,   965,  1337,  1338,  1190,   469,  1339,  1022,
    1023,  1192,   381,   966,   967,  1195,   850,   672,   821,  1111,
    1112,  1113,   675,   676,   931,   968,   969,   678,   469,  1277,
    1278,  1262,   932,   933,   934,   935,   936,  1136,  1396,   381,
     469,  1072,  1006,   381,   854,  1007,   469,  1217,  1397,  1398,
    1492,   677,   415,  1495,  1496,   540,   855,   416,  1233,  1234,
    1399,  1400,   867,   419,   541,  1237,   469,  1242,   807,  1511,
     879,  1246,   838,  1248,  1249,   937,  1251,  1072,   380,  1254,
    1255,   469,   872,  1506,   420,   938,   880,   846,   469,   469,
     820,   381,   927,   928,   929,   820,   563,   911,   421,   406,
     820,   939,  1269,   469,   820,  1073,   469,   407,   469,   381,
      29,   422,  1075,   469,   868,   869,   469,   417,   423,  1074,
     809,   424,  1087,   381,  1088,   418,  1110,   820,   810,  1298,
     380,  1152,  1310,   430,   834,  1153,   425,  1091,  1092,  1093,
     470,   471,   835,   472,   473,   474,  1553,   475,   476,   509,
     510,   886,   469,   930,   820,   381,   381,   381,   381,   431,
     865,   469,   380,   870,   915,   821,   917,   516,  1562,   866,
     821,   871,   916,   915,   918,   821,   681,  1393,   925,   821,
     426,   922,  1422,  1394,  1424,   381,   926,  1448,  1426,  1448,
    1423,   820,  1425,  1448,   896,  1449,   427,  1450,   809,   895,
     931,  1602,   821,   428,  1583,  1584,  1614,  1635,   932,   933,
     934,   935,   936,  1635,  1640,  1636,  1182,  1183,  1184,  -322,
    -322,  1637,  1641,  1433,   548,   429,  1596,  1357,  1597,   821,
     388,   389,   640,   641,   642,   643,   644,   645,   434,   647,
     648,   649,   650,   651,   652,   653,   654,   436,   614,   543,
     544,   937,   620,  1554,  1555,  1556,  1609,  1642,  -322,  1643,
     435,   938,   443,  1374,   558,   559,   821,  1379,   821,   500,
     501,  1491,   447,  -322,  -322,  -322,  -322,   939,     1,     2,
       3,     4,     5,     6,   941,   942,   484,   485,   486,   487,
     488,   489,   463,  1050,   953,   954,   448,   490,   329,   381,
    1469,  1470,  1471,  1472,   468,   764,   765,  1045,  1046,  1501,
     491,  1066,  1067,  1103,  1104,  1131,  1132,  1137,  1138,  1139,
    1140,   469,   381,  1001,  1211,   466,  1452,  1453,  1459,  1460,
    1464,  1465,  1439,   483,  1462,  1490,  1442,  1281,  1473,  1474,
    1285,  1286,  1287,  1480,  1481,  1493,  1494,  1295,  1497,  1498,
    1457,   482,   656,   657,   663,   664,  1300,   467,   381,   665,
     666,  1550,  1534,   886,  1487,  1488,   499,   381,   397,   398,
    1664,  1665,   381,   511,  1435,   514,  1090,   673,   674,   512,
    1438,   492,   493,   494,   495,   496,   497,   513,   520,  1354,
    1355,  1541,  1542,  1447,   891,  1108,   521,   549,   535,   555,
     402,  1261,   406,   411,   417,   454,   629,   561,   603,   570,
     572,  1101,   579,   580,   585,   592,   601,   604,   612,   381,
     621,   820,   624,   635,   381,   820,   636,   381,   613,   637,
     667,   655,   668,   669,   670,   691,   692,   690,   693,   697,
     806,   828,  1526,   498,   851,   381,   381,   830,   840,  1580,
     841,   381,  1624,   842,  1530,   876,   381,  1180,   548,   843,
     381,   847,   848,  1148,  1536,  1537,  1155,   874,   878,   877,
    1540,  1193,   890,   882,   996,  1196,  1000,  1001,  1012,  1590,
    1051,  1005,  1014,   381,   551,  1025,  1048,  1057,  1058,  1059,
    1060,  1061,  1079,  1077,  1080,  1082,   821,  1086,  1568,  1569,
     821,  1095,  1209,  1070,   820,  1096,  1599,  1215,  1216,  1081,
     381,  1102,  1223,  1589,  1097,  1115,  1119,  1076,  1120,  1232,
    1121,  1616,  1117,  1123,  1125,  1238,  1621,  1240,  1544,  1128,
    1243,   820,  1547,   970,  1247,   974,  1129,  1130,  1135,  1252,
    1235,  1263,  1163,   820,  1186,  1204,  1257,   381,   381,   381,
    1259,  1164,  1208,   820,   820,  1443,  1264,  1265,  1266,   820,
    1446,  1645,  1647,  1210,  1280,  1282,  1288,  1008,  1301,  1627,
    1307,  1283,  1651,  1654,  1657,  1660,  1299,  1015,  1305,   821,
    1309,  1591,  1024,  1612,  1026,  1313,  1029,  1274,  1030,  1315,
    1035,  1328,  1038,  1349,  1041,  1314,  1359,  1358,  1047,  1361,
    1049,  1363,  1362,  1377,  1364,  1372,   821,  1375,  1386,  1387,
    1668,  1388,  1389,  1420,  1419,  1421,  1371,  1404,   821,  1615,
    1427,  1428,  1429,   381,  1436,  1437,  1445,  1444,   821,   821,
    1451,  1454,  1456,  1458,   821,  1479,    98,  1489,  1407,  1504,
     381,  1416,  1508,  1509,  1373,   381,  1512,  1513,  1525,   381,
    1538,  1546,  1559,  1567,   381,  1576,  1586,  1585,  1592,  1578,
    1601,  1600,   380,   381,  1632,  1639,  1384,  1648,  1476,    15,
     820,   964,  1667,    14,  1206,  1180,   999,  1212,  1229,  1365,
    1520,   694,  1575,   698,   548,  1055,   477,   857,   548,  1106,
    1306,   718,   860,   446,  1292,   862,   639,  1461,  1545,  1434,
     638,  1127,  1548,  1543,   689,  1549,   453,   588,   820,   910,
     577,   578,  1405,  1327,   618,  1468,  1089,  1316,  1109,  1455,
    1558,  1467,   745,  1484,  1507,   746,   747,   748,   749,  1604,
     750,  1133,  1611,   751,   852,  -227,   752,   753,   754,   755,
     756,   757,   758,   759,   760,   821,  1503,   761,   762,   763,
    1579,  1551,  1539,  1094,     0,     0,     0,     0,  1189,     0,
       0,     0,  1191,  -227,     0,     0,     0,     0,     0,     0,
     381,  -227,     0,     0,     0,     0,   381,   381,     0,     0,
       0,   381,     0,   821,     0,     0,     0,     0,    11,   381,
       0,   764,   765,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1214,     0,     0,     0,     0,     0,     0,   380,
       0,     0,     0,     0,  1231,   380,     0,     0,     0,     0,
       0,     0,     0,     0,   381,     0,     0,     0,   380,     0,
       0,  1194,  1613,     0,   746,   747,   748,   749,     0,   750,
       0,     0,   751,     0,     0,   752,   753,   754,   755,   756,
     757,   758,   759,   760,     0,     0,   761,   762,   763,   381,
     381,  1633,  1634,  1482,     0,     0,     0,     0,     0,     0,
       0,  1180,     0,   381,   381,     0,     0,   381,     0,   381,
     381,   381,   381,     0,     0,  1514,  1515,   381,     0,  1180,
       0,  1180,  1180,  1180,  1180,     0,   975,    11,     0,   381,
     764,   765,  1527,     0,     0,     0,     0,     0,     0,   381,
     381,     0,   381,     0,  1531,   381,     0,     0,     0,     0,
       0,     0,     0,     0,   381,     0,     0,   976,   381,   977,
     978,   979,   980,   981,   982,   983,     0,     0,     0,     0,
       0,     0,     0,     0,   984,   985,   986,   987,   988,   989,
       0,  1274,     0,     0,     0,     0,     0,     0,     0,   990,
     991,   992,     0,   380,     0,     0,     0,   380,     0,     0,
       0,     0,     0,     0,  -227,     0,     0,  -227,  -227,  -227,
    -227,     0,  -227,  -227,     0,  -227,  1401,     0,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,     0,     0,  -227,
    -227,  -227,     0,     0,     0,     0,  -227,  -227,     0,  1406,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1413,   381,  1587,  -227,  -227,
       0,  -227,     0,  1415,     0,     0,     0,  1417,     0,     0,
    -227,     0,     0,  -227,  -227,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   381,     0,   381,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1180,   338,
     339,   340,   341,   342,   343,   344,   345,   346,    48,    49,
      50,    51,    52,    53,    54,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,    67,    68,    69,
      70,    71,    72,    73,     0,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,   359,    87,     0,
       0,     0,    88,    89,    90,    91,    92,    93,    94,     0,
       0,     0,     0,     0,   360,   361,    97,     0,     0,     0,
      99,     0,     0,     0,     0,   102,   362,   104,   363,   106,
       0,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     364,   365,   118,   366,   120,     0,   121,   367,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   368,   137,   138,   139,   140,   141,   369,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
       0,   155,   156,   157,     0,   370,   159,   371,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   372,   186,   187,   373,   189,   190,   191,   192,
     193,   374,   195,   375,   197,   198,   199,   200,   201,   202,
     376,   204,   205,   377,   378,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,     0,   746,   747,   748,   749,
       0,   750,     0,     0,   751,     0,     0,   752,   753,   754,
     755,   756,   757,   758,   759,   760,     0,     0,   761,   762,
     763,     0,     0,     0,     0,     0,    22,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
     679,    25,     0,     0,    26,    27,     0,    28,     0,    29,
       0,    30,    31,    32,     0,    33,    34,    35,   680,    11,
       0,     0,   764,   765,     0,     0,  1098,     0,  1099,    36,
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
     210,   211,   212,   213,   214,   215,   216,   217,    22,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,   679,    25,     0,     0,    26,    27,     0,    28,
       0,    29,     0,    30,    31,    32,     0,    33,    34,    35,
     688,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
      22,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,    25,     0,     0,    26,    27,
       0,    28,     0,    29,     0,    30,    31,    32,     0,    33,
      34,    35,   399,     0,     0,     0,     0,     0,     0,     0,
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
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,    22,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,    25,     0,     0,
      26,    27,     0,    28,     0,    29,     0,    30,    31,    32,
       0,    33,    34,    35,     0,     0,     0,     0,     0,     0,
       0,     0,   671,     0,     0,    36,    37,    38,    39,    40,
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
     214,   215,   216,   217,    22,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,    25,
       0,     0,    26,    27,     0,    28,     0,    29,     0,    30,
      31,    32,     0,    33,    34,    35,     0,     0,     0,     0,
       0,     0,     0,     0,   837,     0,     0,    36,    37,    38,
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
     212,   213,   214,   215,   216,   217,    22,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,    25,     0,     0,    26,    27,     0,    28,     0,    29,
       0,    30,    31,    32,     0,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,   845,     0,     0,    36,
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
     210,   211,   212,   213,   214,   215,   216,   217,    22,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,   679,    25,     0,     0,    26,    27,     0,    28,
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
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
      22,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,    25,     0,     0,    26,    27,
       0,    28,     0,    29,     0,    30,    31,    32,     0,    33,
      34,    35,     0,     0,     0,     0,     0,     0,     0,     0,
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
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,    22,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,    25,     0,     0,
      26,    27,     0,    28,     0,    29,     0,    30,    31,    32,
       0,    33,    34,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,     0,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   359,    87,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,     0,     0,
       0,     0,     0,    95,    96,    97,     0,     0,    98,    99,
     100,   101,     0,     0,   102,   362,   104,   363,   106,     0,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   364,
     365,   118,   366,   120,     0,   121,   367,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,     0,
     155,   156,   157,     0,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   372,   186,   187,   373,   189,   190,   191,   192,   193,
     374,   195,   375,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   377,   378,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,    22,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,    25,
       0,     0,    26,    27,     0,    28,     0,    29,     0,    30,
      31,    32,     0,    33,    34,    35,     0,     0,     0,     0,
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
     144,   145,   146,   147,   148,   699,   150,   151,   152,   153,
     154,     0,   155,   700,   157,     0,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,    22,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,    25,     0,     0,    26,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     359,    87,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     0,     0,    95,    96,    97,
       0,     0,    98,    99,   100,   101,     0,     0,   102,   362,
     104,   363,   106,     0,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   364,   365,   118,   366,   120,     0,   121,
     367,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   368,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,     0,   155,   156,   157,     0,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   372,   186,   187,   373,   189,
     190,   191,   192,   193,   374,   195,   375,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   377,   378,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,    23,     0,
       0,     0,     0,     0,     0,     0,     0,  1166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1167,     0,     0,
       0,     0,     0,  1168,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1169,   383,    41,    42,    43,   384,    45,    46,
     385,    48,    49,    50,    51,    52,    53,    54,  1170,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     359,    87,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     0,     0,   360,   361,    97,
       0,     0,     0,    99,   100,   101,     0,     0,   102,   362,
     104,   363,   106,     0,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   364,   365,   118,   366,   120,     0,   121,
     367,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   368,   137,   138,   139,   140,   141,
     369,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,     0,   155,   156,   157,     0,   386,   159,
     371,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   372,   186,   187,   373,   189,
     190,   191,   192,   193,   374,   195,   375,   197,   198,  1171,
    1172,   201,   202,   376,   204,   205,   377,   378,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,    23,     0,
       0,     0,     0,     0,     0,     0,     0,  1166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1169,   383,    41,    42,    43,   384,    45,    46,
     385,    48,    49,    50,    51,    52,    53,    54,  1170,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     359,    87,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     0,     0,   360,   361,    97,
       0,     0,     0,    99,   100,   101,     0,     0,   102,   362,
     104,   363,   106,     0,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   364,   365,   118,   366,   120,     0,   121,
     367,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   368,   137,   138,   139,   140,   141,
     369,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,     0,   155,   156,   157,     0,   386,   159,
     371,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   372,   186,   187,   373,   189,
     190,   191,   192,   193,   374,   195,   375,   197,   198,   199,
     200,   201,   202,   376,   204,   205,   377,   378,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   382,   383,    41,    42,    43,   384,    45,    46,
     385,    48,    49,    50,    51,    52,    53,    54,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     359,    87,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     0,     0,   360,   361,    97,
       0,     0,     0,    99,   100,   101,     0,     0,   102,   362,
     104,   363,   106,     0,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   364,   365,   118,   366,   120,     0,   121,
     367,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   368,   137,   138,   139,   140,   141,
     369,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,     0,   155,   156,   157,     0,   386,   159,
     371,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   372,   186,   187,   373,   189,
     190,   191,   192,   193,   374,   195,   375,   197,   198,   199,
     200,   201,   202,   376,   204,   205,   377,   378,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,  1267,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   811,  1268,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   382,   383,    41,    42,    43,   384,    45,    46,
     385,   812,    49,    50,    51,    52,    53,    54,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     359,    87,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     0,     0,   360,   361,    97,
       0,     0,     0,    99,     0,     0,     0,     0,   102,   362,
     104,   363,   106,     0,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   364,   365,   118,   366,   120,     0,   121,
     367,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   368,   137,   138,   139,   140,   141,
     369,   813,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,     0,   155,   156,   157,     0,   386,   159,
     814,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   372,   186,   187,   373,   189,
     190,   191,   192,   193,   374,   195,   375,   197,   198,   199,
     200,   201,   202,   815,   816,   205,   377,   378,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   564,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   565,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   338,   339,   340,   341,   342,   343,   344,   345,
     346,    48,    49,    50,    51,    52,    53,    54,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     359,    87,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     0,     0,   360,   361,    97,
       0,     0,     0,    99,     0,     0,     0,     0,   102,   362,
     104,   363,   106,     0,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   364,   365,   118,   366,   120,     0,   121,
     367,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   368,   137,   138,   139,   140,   141,
     369,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,     0,   155,   156,   157,     0,   370,   159,
     371,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   372,   186,   187,   373,   189,
     190,   191,   192,   193,   374,   195,   375,   197,   198,   199,
     200,   201,   202,   376,   204,   205,   377,   378,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   615,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   616,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   338,   339,   340,   341,   342,   343,   344,   345,
     346,    48,    49,    50,    51,    52,    53,    54,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     359,    87,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     0,     0,   360,   361,    97,
       0,     0,     0,    99,     0,     0,     0,     0,   102,   362,
     104,   363,   106,     0,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   364,   365,   118,   366,   120,     0,   121,
     367,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   368,   137,   138,   139,   140,   141,
     369,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,     0,   155,   156,   157,     0,   370,   159,
     371,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   372,   186,   187,   373,   189,
     190,   191,   192,   193,   374,   195,   375,   197,   198,   199,
     200,   201,   202,   376,   204,   205,   377,   378,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   811,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   382,   383,    41,    42,    43,   384,    45,
      46,   385,   812,    49,    50,    51,    52,    53,    54,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,    67,    68,    69,    70,    71,    72,    73,     0,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,   359,    87,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    94,     0,     0,     0,     0,     0,   360,   361,
      97,     0,     0,     0,    99,     0,     0,     0,     0,   102,
     362,   104,   363,   106,     0,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   364,   365,   118,   366,   120,     0,
     121,   367,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   368,   137,   138,   139,   140,
     141,   369,   813,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,     0,   155,   156,   157,     0,   386,
     159,   814,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   372,   186,   187,   373,
     189,   190,   191,   192,   193,   374,   195,   375,   197,   198,
     199,   200,   201,   202,   815,   816,   205,   377,   378,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   811,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   382,   383,    41,    42,    43,   384,
      45,    46,   385,    48,    49,    50,    51,    52,    53,    54,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,   359,    87,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,     0,     0,     0,     0,     0,   360,
     361,    97,     0,     0,     0,    99,     0,     0,     0,     0,
     102,   362,   104,   363,   106,     0,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   364,   365,   118,   366,   120,
       0,   121,   367,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   368,   137,   138,   139,
     140,   141,   369,   813,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,     0,   155,   156,   157,     0,
     386,   159,   814,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   372,   186,   187,
     373,   189,   190,   191,   192,   193,   374,   195,   375,   197,
     198,   199,   200,   201,   202,   815,   816,   205,   377,   378,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     581,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   338,   339,   340,   341,   342,   343,
     344,   345,   346,    48,    49,    50,    51,    52,    53,    54,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,   359,    87,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,     0,     0,     0,     0,     0,   360,
     361,    97,     0,     0,   582,    99,     0,     0,     0,     0,
     102,   362,   104,   363,   106,     0,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   364,   365,   118,   366,   120,
       0,   121,   367,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   368,   137,   138,   139,
     140,   141,   369,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,     0,   155,   156,   157,     0,
     370,   159,   371,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   372,   186,   187,
     373,   189,   190,   191,   192,   193,   374,   195,   375,   197,
     198,   199,   200,   201,   202,   376,   204,   205,   377,   378,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
    1271,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   338,   339,   340,   341,   342,   343,
     344,   345,   346,    48,    49,    50,    51,    52,    53,    54,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,   359,    87,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,     0,     0,     0,     0,     0,   360,
     361,    97,     0,     0,     0,    99,     0,     0,     0,     0,
     102,   362,   104,   363,   106,     0,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   364,   365,   118,   366,   120,
       0,   121,   367,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   368,   137,   138,   139,
     140,   141,   369,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,     0,   155,   156,   157,     0,
     370,   159,   371,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   372,   186,   187,
     373,   189,   190,   191,   192,   193,   374,   195,   375,   197,
     198,   199,   200,   201,   202,   376,   204,   205,   377,   378,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
    1275,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   338,   339,   340,   341,   342,   343,
     344,   345,   346,    48,    49,    50,    51,    52,    53,    54,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,   359,    87,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,     0,     0,     0,     0,     0,   360,
     361,    97,     0,     0,     0,    99,     0,     0,     0,     0,
     102,   362,   104,   363,   106,     0,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   364,   365,   118,   366,   120,
       0,   121,   367,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   368,   137,   138,   139,
     140,   141,   369,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,     0,   155,   156,   157,     0,
     370,   159,   371,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   372,   186,   187,
     373,   189,   190,   191,   192,   193,   374,   195,   375,   197,
     198,   199,   200,   201,   202,   376,   204,   205,   377,   378,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     626,     0,     0,     0,     0,     0,   338,   339,   340,   341,
     342,   343,   344,   345,   346,    48,    49,    50,    51,    52,
      53,    54,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,   359,    87,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,     0,     0,     0,     0,
       0,   360,   361,    97,     0,     0,     0,    99,     0,     0,
       0,     0,   102,   362,   104,   363,   106,     0,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   364,   365,   118,
     366,   120,     0,   121,   367,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   368,   137,
     138,   139,   140,   141,   369,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,     0,   155,   156,
     157,     0,   370,   159,   371,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   372,
     186,   187,   373,   189,   190,   191,   192,   193,   374,   195,
     375,   197,   198,   199,   200,   201,   202,   376,   204,   205,
     377,   378,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   338,   339,   340,   341,   342,   343,   344,   345,
     346,    48,    49,    50,    51,    52,    53,    54,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     359,    87,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     0,     0,   360,   361,    97,
       0,     0,     0,    99,     0,     0,     0,     0,   102,   362,
     104,   363,   106,     0,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   364,   365,   118,   366,   120,     0,   121,
     367,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   368,   137,   138,   139,   140,   141,
     369,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,     0,   155,   156,   157,     0,   370,   159,
     371,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   372,   186,   187,   373,   189,
     190,   191,   192,   193,   374,   195,   375,   197,   198,   199,
     200,   201,   202,   376,   204,   205,   377,   378,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,    49,    50,
      51,    52,    53,    54,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,    67,    68,    69,    70,
      71,    72,    73,     0,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   359,    87,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,     0,     0,
       0,     0,     0,   360,   361,    97,     0,     0,     0,    99,
       0,     0,     0,     0,   102,   362,   104,   363,   106,     0,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   364,
     365,   118,     0,   120,     0,   121,     0,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     368,   137,   138,   139,   140,   141,   369,     0,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,     0,
     155,   156,   157,     0,     0,   159,     0,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   372,   186,   187,   373,   189,   190,   191,   192,   193,
     374,   195,   375,   197,   198,   199,   200,   201,   202,   376,
     204,   205,   377,   378,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,     0,  1197,     0,     0,   746,   747,
     748,   749,     0,   750,     0,     0,   751,     0,     0,   752,
     753,   754,   755,   756,   757,   758,   759,   760,     0,     0,
     761,   762,   763,  1218,     0,     0,   746,   747,   748,   749,
       0,   750,     0,     0,   751,     0,     0,   752,   753,   754,
     755,   756,   757,   758,   759,   760,     0,     0,   761,   762,
     763,     0,  1230,     0,     0,   746,   747,   748,   749,     0,
     750,    11,     0,   751,   764,   765,   752,   753,   754,   755,
     756,   757,   758,   759,   760,     0,     0,   761,   762,   763,
    1239,     0,     0,   746,   747,   748,   749,     0,   750,    11,
       0,   751,   764,   765,   752,   753,   754,   755,   756,   757,
     758,   759,   760,     0,     0,   761,   762,   763,     0,  1241,
       0,     0,   746,   747,   748,   749,     0,   750,    11,     0,
     751,   764,   765,   752,   753,   754,   755,   756,   757,   758,
     759,   760,     0,     0,   761,   762,   763,  1244,     0,     0,
     746,   747,   748,   749,     0,   750,    11,     0,   751,   764,
     765,   752,   753,   754,   755,   756,   757,   758,   759,   760,
       0,     0,   761,   762,   763,     0,  1245,     0,     0,   746,
     747,   748,   749,     0,   750,    11,     0,   751,   764,   765,
     752,   753,   754,   755,   756,   757,   758,   759,   760,     0,
       0,   761,   762,   763,  1250,     0,     0,   746,   747,   748,
     749,     0,   750,    11,     0,   751,   764,   765,   752,   753,
     754,   755,   756,   757,   758,   759,   760,     0,     0,   761,
     762,   763,     0,  1253,     0,     0,   746,   747,   748,   749,
       0,   750,    11,     0,   751,   764,   765,   752,   753,   754,
     755,   756,   757,   758,   759,   760,     0,     0,   761,   762,
     763,  1256,     0,     0,   746,   747,   748,   749,     0,   750,
      11,     0,   751,   764,   765,   752,   753,   754,   755,   756,
     757,   758,   759,   760,     0,     0,   761,   762,   763,     0,
    1258,     0,     0,   746,   747,   748,   749,     0,   750,    11,
       0,   751,   764,   765,   752,   753,   754,   755,   756,   757,
     758,   759,   760,     0,     0,   761,   762,   763,  1260,     0,
       0,   746,   747,   748,   749,     0,   750,    11,     0,   751,
     764,   765,   752,   753,   754,   755,   756,   757,   758,   759,
     760,     0,     0,   761,   762,   763,     0,  1402,     0,     0,
     746,   747,   748,   749,     0,   750,    11,     0,   751,   764,
     765,   752,   753,   754,   755,   756,   757,   758,   759,   760,
       0,     0,   761,   762,   763,  1403,     0,     0,   746,   747,
     748,   749,     0,   750,    11,     0,   751,   764,   765,   752,
     753,   754,   755,   756,   757,   758,   759,   760,     0,     0,
     761,   762,   763,     0,  1408,     0,     0,   746,   747,   748,
     749,     0,   750,    11,     0,   751,   764,   765,   752,   753,
     754,   755,   756,   757,   758,   759,   760,     0,     0,   761,
     762,   763,  1414,     0,     0,   746,   747,   748,   749,     0,
     750,    11,     0,   751,   764,   765,   752,   753,   754,   755,
     756,   757,   758,   759,   760,     0,     0,   761,   762,   763,
       0,  1528,     0,     0,   746,   747,   748,   749,     0,   750,
      11,     0,   751,   764,   765,   752,   753,   754,   755,   756,
     757,   758,   759,   760,     0,     0,   761,   762,   763,  1529,
       0,     0,   746,   747,   748,   749,     0,   750,    11,     0,
     751,   764,   765,   752,   753,   754,   755,   756,   757,   758,
     759,   760,     0,     0,   761,   762,   763,     0,  1532,     0,
       0,   746,   747,   748,   749,     0,   750,    11,     0,   751,
     764,   765,   752,   753,   754,   755,   756,   757,   758,   759,
     760,     0,     0,   761,   762,   763,  1533,     0,     0,   746,
     747,   748,   749,     0,   750,    11,     0,   751,   764,   765,
     752,   753,   754,   755,   756,   757,   758,   759,   760,     0,
       0,   761,   762,   763,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,     0,     0,   764,   765,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,     0,   764,   765
};

static const yytype_int16 yycheck[] =
{
      22,   160,    24,   534,   600,   502,   602,   411,   246,   605,
     557,   655,   811,   431,    24,     6,   655,  1097,   436,   669,
     670,   439,  1322,    63,  1162,   443,    28,    35,   503,   504,
     505,   506,  1339,   629,  1371,  1261,   892,    40,    32,    22,
     122,  1175,     9,    33,   122,    48,    40,  1475,    59,    41,
     299,    10,   301,    32,    48,    49,   622,    11,    52,    53,
      54,    40,  1387,   122,    59,   807,    12,    48,    40,    48,
      62,     9,    12,    52,    53,    54,    34,    35,    19,    40,
    1387,  1388,   122,     9,    40,  1505,    34,    35,    40,    34,
      35,    33,    48,    40,    59,   152,    40,    50,    12,   402,
     114,   125,   125,   284,    48,   225,   251,    48,   150,    40,
      33,   929,   415,   416,     9,    48,    70,   284,    45,   190,
      51,    48,   242,   941,   942,    45,    40,    19,    48,     9,
     311,   125,     9,   551,    48,    47,    48,   252,   101,   104,
     307,   183,   114,   119,    68,    69,   125,     0,    40,   173,
     173,   454,   297,   114,   621,   283,    48,    52,    53,    54,
     183,    41,   307,   694,    41,   222,   223,   114,   124,   183,
     701,   702,   703,   230,   705,   706,   707,   555,   102,   307,
     124,   144,   115,   124,   715,   603,   717,   125,   115,   720,
     721,   131,   934,  1419,   175,   115,   995,  1617,   940,   191,
     667,   668,   317,   161,   116,   131,   148,  1635,   162,   163,
     459,   183,   808,   161,   463,   226,   175,   635,   164,   468,
     469,   470,   183,   176,   473,   148,  1581,   194,   119,   219,
     125,   226,   124,   129,   256,   211,   212,   259,  1376,   242,
     322,  1578,   324,   621,   322,   323,   256,   249,   892,   259,
     894,   245,   555,   892,  1110,   894,  1563,  1391,  1392,  1393,
    1394,  1586,  1562,   322,   323,   284,   245,   251,   213,   214,
     215,    47,    48,   176,   192,   193,   105,   526,   186,   231,
     529,  1507,    20,    21,   187,   325,   326,   327,   307,   667,
     668,  1646,   138,   697,   246,   247,   248,   249,  1605,   145,
     284,   130,    40,    24,   284,   327,    27,    28,    25,   171,
      31,   180,  1130,   231,   205,   177,   296,    95,   621,    23,
     211,   212,   306,   274,  1142,    42,   306,    48,   246,   247,
     248,   249,    48,  1640,   325,    32,   114,    41,  1638,    33,
     116,  1159,   120,    22,   327,   191,   192,   193,   597,   173,
     284,    48,    68,    69,    33,    49,   307,    22,   607,   608,
     294,   312,   313,    30,   667,   668,   669,   670,    33,    36,
      32,  1451,   306,   307,   396,   284,    85,    22,    40,    88,
     402,   107,    91,    92,    93,    94,    48,   636,    33,   411,
      52,    53,    54,   415,   416,   403,   117,   118,   307,   407,
      33,   310,   311,    44,   412,    46,    65,    66,    67,   431,
     418,  1061,   284,   396,   436,    33,    49,   439,   196,   197,
     198,   443,   430,   201,   202,   105,   434,   435,   411,   283,
     284,    49,   454,   811,   306,   307,   685,   686,   687,   447,
     448,   449,   151,    19,   466,   467,  1584,   455,   431,    33,
     251,   305,   306,   436,   308,   251,   439,   258,    11,   251,
     443,   253,   258,   125,    40,    49,  1110,   126,   260,   261,
      23,  1110,    40,  1117,   266,  1119,   185,   284,  1117,    30,
    1119,    34,    40,   466,   467,    36,    22,   279,   280,   281,
      33,   958,    40,   284,   203,   204,   963,    33,   207,   306,
     307,   968,   524,   294,   295,   972,    49,   515,   811,   208,
     209,   210,   520,   521,   173,   306,   307,   525,    33,  1066,
    1067,  1052,   181,   182,   183,   184,   185,   931,   284,   551,
      33,   834,   307,   555,    49,   310,    33,  1007,   294,   295,
    1358,   524,    40,  1361,  1362,   282,    49,    40,  1018,  1019,
     306,   307,    49,    19,   291,  1022,    33,  1027,   549,  1377,
      33,  1031,   570,  1033,  1034,   224,  1036,   870,   551,  1039,
    1040,    33,    49,  1372,    19,   234,    49,   585,    33,    33,
     958,   603,    65,    66,    67,   963,    41,    49,    19,    40,
     968,   250,  1059,    33,   972,    49,    33,    48,    33,   621,
      32,    19,   851,    33,   612,   613,    33,    40,    19,    49,
      33,    19,    49,   635,    49,    48,    48,   995,    41,    49,
     603,   238,    49,    48,    33,   242,    19,   876,   877,   878,
     131,   132,    41,   134,   135,   136,  1454,   138,   139,   165,
     166,   890,    33,   126,  1022,   667,   668,   669,   670,     9,
      41,    33,   635,    33,    33,   958,   220,   895,  1476,    41,
     963,    41,    41,    33,   228,   968,   915,    30,   180,   972,
      19,    41,    33,    36,    33,   697,   188,    33,  1274,    33,
      41,  1059,    41,    33,  1328,    41,    19,    41,    33,  1328,
     173,    41,   995,    19,  1512,  1513,    41,    33,   181,   182,
     183,   184,   185,    33,    33,    41,    52,    53,    54,   192,
     193,    41,    41,  1279,   697,    19,    44,  1135,    46,  1022,
     122,   123,   484,   485,   486,   487,   488,   489,    48,   491,
     492,   493,   494,   495,   496,   497,   498,     9,   453,   318,
     319,   224,   457,   213,   214,   215,  1564,   164,   231,   166,
      48,   234,     9,  1157,   105,   106,  1059,  1161,  1061,    34,
      35,  1357,    40,   246,   247,   248,   249,   250,     3,     4,
       5,     6,     7,     8,   189,   190,    13,    14,    15,    16,
      17,    18,    59,   805,   292,   293,    40,    24,    40,   811,
      91,    92,    93,    94,   241,   320,   321,   297,   298,  1365,
      37,   122,   123,   140,   141,   171,   172,   171,   172,   120,
     121,    33,   834,   263,   264,    48,   143,   144,    99,   100,
     216,   217,  1289,   157,  1321,  1356,  1293,  1076,    86,    87,
    1079,  1080,  1081,    86,    87,   143,   144,  1086,   178,   179,
    1315,   156,   500,   501,   507,   508,  1095,   234,   870,   509,
     510,  1447,  1418,  1102,  1351,  1352,   195,   879,    30,    31,
    1642,  1643,   884,   158,  1282,   168,   874,   518,   519,   169,
    1288,   108,   109,   110,   111,   112,   113,   160,    21,  1128,
    1129,  1428,  1429,  1301,   646,   893,    21,   180,   190,   152,
      40,  1050,    40,    40,    40,    40,   879,    29,     9,    48,
      41,   884,    41,    41,    48,    41,    33,    33,    48,   931,
     152,  1289,   159,     9,   936,  1293,   137,   939,    48,   138,
     159,    63,   152,   152,   152,   125,   125,    52,    50,   173,
      37,   105,  1399,   170,    10,   957,   958,   106,    41,  1505,
      41,   963,  1586,    41,  1411,   225,   968,   957,   931,    41,
     972,    41,    41,   936,  1421,  1422,   939,    48,   152,    59,
    1427,   969,   137,   225,   251,   973,   307,   263,   284,  1535,
     125,   309,   251,   995,     9,   307,   307,    40,    40,    40,
      40,    40,    10,   114,    10,   150,  1289,   154,  1485,  1486,
    1293,    10,  1000,   130,  1372,    40,  1543,  1005,  1006,   133,
    1022,    33,  1010,  1534,    40,    90,   244,   131,    83,  1017,
      84,  1577,   243,   199,    23,  1023,  1582,  1025,  1436,   230,
    1028,  1399,  1440,   735,  1032,   737,   230,    37,     9,  1037,
     275,  1053,   293,  1411,   260,   122,  1044,  1059,  1060,  1061,
    1048,   292,   251,  1421,  1422,  1294,    41,    41,    41,  1427,
    1299,  1617,  1618,   309,    41,     9,     9,   769,     9,  1590,
     142,   194,  1628,  1629,  1630,  1631,   225,   779,   225,  1372,
      41,  1538,   784,  1570,   786,    97,   788,  1060,   790,    96,
     792,   133,   794,    84,   796,   213,   142,    37,   800,   173,
     802,    33,   173,   114,   125,   152,  1399,   191,    19,    40,
    1666,    40,    12,    41,  1263,   152,   235,   122,  1411,  1576,
      33,    43,    43,  1135,     9,   133,    41,   155,  1421,  1422,
      40,   145,    49,    96,  1427,   213,   125,   200,   251,    33,
    1152,   251,    37,   173,  1156,  1157,    33,    37,    21,  1161,
     152,   152,   213,   125,  1166,   152,    33,    41,    41,   235,
      10,   131,  1135,  1175,    26,   206,  1166,    41,   114,     4,
    1538,   733,   206,     3,   992,  1175,   747,  1002,  1013,  1152,
    1389,   533,  1500,   538,  1157,   809,   222,   601,  1161,   890,
    1102,   539,   604,   117,  1083,   606,   483,  1320,  1437,  1279,
     482,   915,  1441,  1430,   529,  1444,   142,   415,  1576,   670,
     408,   408,  1210,  1119,   454,  1328,   870,  1117,   894,  1310,
    1463,  1324,   251,  1349,  1373,   254,   255,   256,   257,  1561,
     259,   928,  1566,   262,   596,    12,   265,   266,   267,   268,
     269,   270,   271,   272,   273,  1538,  1365,   276,   277,   278,
    1504,  1448,  1424,   879,    -1,    -1,    -1,    -1,   960,    -1,
      -1,    -1,   964,    40,    -1,    -1,    -1,    -1,    -1,    -1,
    1282,    48,    -1,    -1,    -1,    -1,  1288,  1289,    -1,    -1,
      -1,  1293,    -1,  1576,    -1,    -1,    -1,    -1,   317,  1301,
      -1,   320,   321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1004,    -1,    -1,    -1,    -1,    -1,    -1,  1282,
      -1,    -1,    -1,    -1,  1016,  1288,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1336,    -1,    -1,    -1,  1301,    -1,
      -1,   251,  1571,    -1,   254,   255,   256,   257,    -1,   259,
      -1,    -1,   262,    -1,    -1,   265,   266,   267,   268,   269,
     270,   271,   272,   273,    -1,    -1,   276,   277,   278,  1371,
    1372,  1600,  1601,  1336,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1371,    -1,  1385,  1386,    -1,    -1,  1389,    -1,  1391,
    1392,  1393,  1394,    -1,    -1,  1385,  1386,  1399,    -1,  1389,
      -1,  1391,  1392,  1393,  1394,    -1,   251,   317,    -1,  1411,
     320,   321,  1400,    -1,    -1,    -1,    -1,    -1,    -1,  1421,
    1422,    -1,  1424,    -1,  1412,  1427,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1436,    -1,    -1,   282,  1440,   284,
     285,   286,   287,   288,   289,   290,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   299,   300,   301,   302,   303,   304,
      -1,  1424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,
     315,   316,    -1,  1436,    -1,    -1,    -1,  1440,    -1,    -1,
      -1,    -1,    -1,    -1,   251,    -1,    -1,   254,   255,   256,
     257,    -1,   259,   260,    -1,   262,  1188,    -1,   265,   266,
     267,   268,   269,   270,   271,   272,   273,    -1,    -1,   276,
     277,   278,    -1,    -1,    -1,    -1,   283,   284,    -1,  1211,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1227,  1538,  1525,   305,   306,
      -1,   308,    -1,  1235,    -1,    -1,    -1,  1239,    -1,    -1,
     317,    -1,    -1,   320,   321,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1576,    -1,  1578,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1578,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,   108,   109,   110,   111,   112,   113,   114,    -1,
      -1,    -1,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
     126,    -1,    -1,    -1,    -1,   131,   132,   133,   134,   135,
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
     246,   247,   248,   249,   250,    -1,   254,   255,   256,   257,
      -1,   259,    -1,    -1,   262,    -1,    -1,   265,   266,   267,
     268,   269,   270,   271,   272,   273,    -1,    -1,   276,   277,
     278,    -1,    -1,    -1,    -1,    -1,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    -1,    38,    39,    40,    41,   317,
      -1,    -1,   320,   321,    -1,    -1,   322,    -1,   324,    52,
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
     243,   244,   245,   246,   247,   248,   249,   250,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    -1,    34,    35,    36,    -1,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    -1,    34,    35,    36,    -1,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     249,   250,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    52,    53,    54,    55,    56,
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
     247,   248,   249,   250,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,    34,
      35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    53,    54,
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
     245,   246,   247,   248,   249,   250,     9,    -1,    11,    -1,
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
     243,   244,   245,   246,   247,   248,   249,   250,     9,    -1,
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
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
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
     249,   250,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    -1,    34,    35,    36,
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
     247,   248,   249,   250,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,    34,
      35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
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
     245,   246,   247,   248,   249,   250,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    24,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
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
     243,   244,   245,   246,   247,   248,   249,   250,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,   108,   109,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,
      -1,    -1,    -1,   126,   127,   128,    -1,    -1,   131,   132,
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
     243,   244,   245,   246,   247,   248,   249,   250,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,   108,   109,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,
      -1,    -1,    -1,   126,   127,   128,    -1,    -1,   131,   132,
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
     243,   244,   245,   246,   247,   248,   249,   250,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,   108,   109,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,
      -1,    -1,    -1,   126,   127,   128,    -1,    -1,   131,   132,
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
     243,   244,   245,   246,   247,   248,   249,   250,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
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
     243,   244,   245,   246,   247,   248,   249,   250,    11,    -1,
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
     243,   244,   245,   246,   247,   248,   249,   250,    11,    -1,
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
     243,   244,   245,   246,   247,   248,   249,   250,    40,    -1,
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
     242,   243,   244,   245,   246,   247,   248,   249,   250,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,   108,   109,   110,
     111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,   120,
     121,   122,    -1,    -1,   125,   126,    -1,    -1,    -1,    -1,
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
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
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
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
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
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
      49,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
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
     249,   250,    55,    56,    57,    58,    59,    60,    61,    62,
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
     243,   244,   245,   246,   247,   248,   249,   250,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    -1,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,   108,   109,   110,   111,   112,   113,   114,    -1,    -1,
      -1,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,   126,
      -1,    -1,    -1,    -1,   131,   132,   133,   134,   135,    -1,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,    -1,   150,    -1,   152,    -1,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,    -1,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
     187,   188,   189,    -1,    -1,   192,    -1,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,    -1,   251,    -1,    -1,   254,   255,
     256,   257,    -1,   259,    -1,    -1,   262,    -1,    -1,   265,
     266,   267,   268,   269,   270,   271,   272,   273,    -1,    -1,
     276,   277,   278,   251,    -1,    -1,   254,   255,   256,   257,
      -1,   259,    -1,    -1,   262,    -1,    -1,   265,   266,   267,
     268,   269,   270,   271,   272,   273,    -1,    -1,   276,   277,
     278,    -1,   251,    -1,    -1,   254,   255,   256,   257,    -1,
     259,   317,    -1,   262,   320,   321,   265,   266,   267,   268,
     269,   270,   271,   272,   273,    -1,    -1,   276,   277,   278,
     251,    -1,    -1,   254,   255,   256,   257,    -1,   259,   317,
      -1,   262,   320,   321,   265,   266,   267,   268,   269,   270,
     271,   272,   273,    -1,    -1,   276,   277,   278,    -1,   251,
      -1,    -1,   254,   255,   256,   257,    -1,   259,   317,    -1,
     262,   320,   321,   265,   266,   267,   268,   269,   270,   271,
     272,   273,    -1,    -1,   276,   277,   278,   251,    -1,    -1,
     254,   255,   256,   257,    -1,   259,   317,    -1,   262,   320,
     321,   265,   266,   267,   268,   269,   270,   271,   272,   273,
      -1,    -1,   276,   277,   278,    -1,   251,    -1,    -1,   254,
     255,   256,   257,    -1,   259,   317,    -1,   262,   320,   321,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    -1,
      -1,   276,   277,   278,   251,    -1,    -1,   254,   255,   256,
     257,    -1,   259,   317,    -1,   262,   320,   321,   265,   266,
     267,   268,   269,   270,   271,   272,   273,    -1,    -1,   276,
     277,   278,    -1,   251,    -1,    -1,   254,   255,   256,   257,
      -1,   259,   317,    -1,   262,   320,   321,   265,   266,   267,
     268,   269,   270,   271,   272,   273,    -1,    -1,   276,   277,
     278,   251,    -1,    -1,   254,   255,   256,   257,    -1,   259,
     317,    -1,   262,   320,   321,   265,   266,   267,   268,   269,
     270,   271,   272,   273,    -1,    -1,   276,   277,   278,    -1,
     251,    -1,    -1,   254,   255,   256,   257,    -1,   259,   317,
      -1,   262,   320,   321,   265,   266,   267,   268,   269,   270,
     271,   272,   273,    -1,    -1,   276,   277,   278,   251,    -1,
      -1,   254,   255,   256,   257,    -1,   259,   317,    -1,   262,
     320,   321,   265,   266,   267,   268,   269,   270,   271,   272,
     273,    -1,    -1,   276,   277,   278,    -1,   251,    -1,    -1,
     254,   255,   256,   257,    -1,   259,   317,    -1,   262,   320,
     321,   265,   266,   267,   268,   269,   270,   271,   272,   273,
      -1,    -1,   276,   277,   278,   251,    -1,    -1,   254,   255,
     256,   257,    -1,   259,   317,    -1,   262,   320,   321,   265,
     266,   267,   268,   269,   270,   271,   272,   273,    -1,    -1,
     276,   277,   278,    -1,   251,    -1,    -1,   254,   255,   256,
     257,    -1,   259,   317,    -1,   262,   320,   321,   265,   266,
     267,   268,   269,   270,   271,   272,   273,    -1,    -1,   276,
     277,   278,   251,    -1,    -1,   254,   255,   256,   257,    -1,
     259,   317,    -1,   262,   320,   321,   265,   266,   267,   268,
     269,   270,   271,   272,   273,    -1,    -1,   276,   277,   278,
      -1,   251,    -1,    -1,   254,   255,   256,   257,    -1,   259,
     317,    -1,   262,   320,   321,   265,   266,   267,   268,   269,
     270,   271,   272,   273,    -1,    -1,   276,   277,   278,   251,
      -1,    -1,   254,   255,   256,   257,    -1,   259,   317,    -1,
     262,   320,   321,   265,   266,   267,   268,   269,   270,   271,
     272,   273,    -1,    -1,   276,   277,   278,    -1,   251,    -1,
      -1,   254,   255,   256,   257,    -1,   259,   317,    -1,   262,
     320,   321,   265,   266,   267,   268,   269,   270,   271,   272,
     273,    -1,    -1,   276,   277,   278,   251,    -1,    -1,   254,
     255,   256,   257,    -1,   259,   317,    -1,   262,   320,   321,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    -1,
      -1,   276,   277,   278,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   317,    -1,    -1,   320,   321,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   317,    -1,    -1,   320,   321
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,   329,   330,   331,
     252,   317,   339,   340,   364,   331,   190,   335,   336,   334,
     459,     0,     9,    11,    20,    24,    27,    28,    30,    32,
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
     243,   244,   245,   246,   247,   248,   249,   250,   466,   467,
     468,   469,   470,   471,   473,   478,   489,   492,   498,   499,
     500,   501,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   542,
     543,   544,   545,   546,   549,   550,   551,   562,   564,   566,
     567,   568,   571,   573,   574,   575,   576,   586,   587,   588,
     589,   590,   591,   592,   593,   595,   597,   599,   640,   641,
     642,   643,   644,   645,   646,   649,   650,   651,   652,   654,
     661,   662,   666,   667,   668,   669,   679,   682,   684,   685,
     186,   425,   426,   341,   365,   180,   332,   173,   337,    40,
     231,   246,   247,   248,   249,   457,   460,   461,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,   103,
     120,   121,   132,   134,   146,   147,   149,   153,   167,   173,
     191,   193,   218,   221,   227,   229,   236,   239,   240,   541,
     684,   685,    55,    56,    60,    63,   191,   533,   122,   123,
     552,   129,   107,   563,   522,   105,   554,   513,   513,    41,
     467,    19,    40,    48,   124,   572,    40,    48,    40,    40,
      40,    40,    48,   124,   577,    40,    40,    40,    48,    19,
      19,    19,    19,    19,    19,    19,    19,    19,    19,    19,
      48,     9,   647,   648,    48,    48,     9,   474,   475,     9,
     194,   479,   480,     9,   490,   491,   490,    40,    40,    48,
      68,    69,    19,   577,    40,    48,   124,   569,   457,    59,
     104,    59,   226,    59,    59,   226,    48,   234,   241,    33,
     131,   132,   134,   135,   136,   138,   139,   471,   472,   481,
     482,   483,   156,   157,    13,    14,    15,    16,    17,    18,
      24,    37,   108,   109,   110,   111,   112,   113,   170,   195,
      34,    35,   161,    11,    70,   162,   163,    12,   164,   165,
     166,   158,   169,   160,   168,    48,   518,   522,    30,    36,
      21,    21,   533,   533,    20,    21,    40,   468,   468,    40,
      51,   176,   187,   427,   428,   190,   429,   430,   431,   432,
     282,   291,   342,   318,   319,   367,   459,   653,   684,   180,
     338,     9,    41,   463,   464,   152,   462,   553,   105,   106,
     565,    29,   684,    41,    11,    41,   594,   601,   654,   467,
      48,   570,    41,   467,    41,    62,   191,   597,   599,    41,
      41,    41,   125,   653,   467,    48,   578,   596,   601,   600,
     602,   654,    41,   467,   467,   541,    33,   219,   467,   467,
     541,    33,   541,     9,    33,   541,    33,   148,   148,   467,
     467,   467,    48,    48,   570,    11,    41,   598,   602,   467,
     570,   152,   581,   468,   159,   468,    49,   680,   681,   684,
     684,   468,   468,   468,   468,     9,   137,   138,   500,   501,
     503,   503,   503,   503,   503,   503,   502,   503,   503,   503,
     503,   503,   503,   503,   503,    63,   506,   506,   505,   507,
     507,   507,   507,   508,   508,   509,   509,   159,   152,   152,
     152,    49,   467,   523,   523,   467,   467,   684,   467,    23,
      41,   468,   547,   548,   152,   222,   223,   230,    41,   547,
      52,   125,   125,    50,   428,   435,   435,   173,   432,   180,
     188,   433,   434,   436,   437,   438,   439,   440,   441,   442,
     443,   446,   447,   448,   451,   452,   454,   455,   466,   639,
     655,   683,   251,   253,   260,   261,   266,   279,   280,   281,
     343,   344,   347,   348,   352,   353,   354,   355,   356,   357,
     360,   361,   362,   363,   366,   251,   254,   255,   256,   257,
     259,   262,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   276,   277,   278,   320,   321,   364,   368,   369,   370,
     371,   372,   373,   374,   377,   378,   382,   383,   384,   385,
     386,   391,   392,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   192,   193,   456,    37,   459,   541,    33,
      41,    40,    64,   174,   193,   236,   237,   582,   584,   585,
     586,   654,   670,   671,   672,   674,   675,   678,   105,   554,
     106,   105,   130,   519,    33,    41,    49,    49,   467,    49,
      41,    41,    41,    41,    49,    49,   467,    41,    41,    49,
      49,    10,   648,   468,    49,    49,   581,   475,   581,   541,
     480,   581,   491,   468,   468,    41,    41,    49,   467,   467,
      33,    41,    49,   582,    48,   465,   225,    59,   152,    33,
      49,   581,   225,   225,   242,   541,   468,   484,   485,   486,
     137,   503,    40,    48,   245,   517,   538,   605,   608,   609,
     610,   611,   612,   613,   614,   615,   582,   582,   579,   585,
     579,    49,    22,    22,    22,    33,    41,   220,   228,   468,
     468,   468,    41,   435,   653,   180,   188,    65,    66,    67,
     126,   173,   181,   182,   183,   184,   185,   224,   234,   250,
     459,   189,   190,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   292,   293,   283,   284,   305,   306,   308,
     349,   284,   296,   306,   349,   284,   294,   295,   306,   307,
     367,   284,   306,   307,   367,   251,   282,   284,   285,   286,
     287,   288,   289,   290,   299,   300,   301,   302,   303,   304,
     314,   315,   316,   251,   284,   306,   251,   115,   465,   372,
     307,   263,   387,   388,   389,   309,   307,   310,   367,   283,
     307,   376,   284,   379,   251,   367,   274,   307,   312,   313,
     393,   284,   306,   307,   367,   307,   367,   284,   307,   367,
     367,   284,   307,   310,   311,   367,   284,   307,   367,   284,
     311,   367,   251,   297,   307,   297,   298,   367,   307,   367,
     685,   125,   604,   456,   581,   464,   584,    40,    40,    40,
      40,    40,    11,    23,    34,   583,   122,   123,    25,    42,
     130,   603,   654,    49,    49,   468,   131,   114,   476,    10,
      10,   133,   150,   493,   495,   496,   154,    49,    49,   603,
     467,   468,   468,   468,   681,    10,    40,    40,   322,   324,
     663,   684,    33,   140,   141,   487,   484,   605,   467,   612,
      48,   208,   209,   210,   616,    90,   638,   243,   607,   244,
      83,    84,   622,   199,   617,    23,   580,   548,   230,   230,
      37,   171,   172,   622,   604,     9,   653,   171,   172,   120,
     121,   138,   145,   191,   456,   171,   177,   444,   684,    68,
      69,   102,   238,   242,   658,   684,   456,   173,   183,   450,
     604,   173,   604,   293,   292,   345,    20,    30,    36,    55,
      71,   232,   233,   415,   416,   417,   418,   421,   422,   423,
     533,   582,    52,    53,    54,   346,   260,   350,   351,   367,
     582,   367,   582,   467,   251,   582,   467,   251,    63,   122,
     325,   326,   327,   358,   122,   359,   359,   584,   251,   467,
     309,   264,   388,   390,   367,   467,   467,   366,   251,   122,
     322,   324,   375,   467,   251,   258,   380,   381,   251,   380,
     251,   367,   467,   366,   366,   275,   394,   582,   467,   251,
     467,   251,   366,   467,   251,   251,   366,   467,   366,   366,
     251,   366,   467,   251,   366,   366,   251,   467,   251,   467,
     251,   457,   435,   685,    41,    41,    41,    11,    41,   582,
     673,    41,   676,   677,   684,    41,   585,   554,   554,   561,
      41,   468,     9,   194,   477,   468,   468,   468,     9,   497,
     183,   494,   495,    12,   131,   468,    23,    41,    49,   225,
     468,     9,   664,   665,   664,   225,   485,   142,   488,    41,
      49,    49,   605,    97,   213,    96,   609,    95,   114,   120,
     196,   197,   198,   201,   202,   606,   619,   610,   133,    85,
      88,    91,    92,    93,    94,   151,   185,   203,   204,   207,
     623,   624,   625,   626,   627,   630,   635,   636,   637,    84,
     119,   211,   212,   618,   468,   468,   604,   541,    37,   142,
     604,   173,   173,    33,   125,   684,   122,   322,   323,   659,
     660,   235,   152,   685,   653,   191,   604,   114,   449,   653,
     449,   122,   322,   323,   533,    19,    19,    40,    40,    12,
     422,    30,    36,    30,    36,   424,   284,   294,   295,   306,
     307,   367,   251,   251,   122,   467,   367,   251,   251,   284,
     294,   306,   307,   367,   251,   367,   251,   367,   462,   457,
      41,   152,    33,    41,    33,    41,   581,    33,    43,    43,
      31,   117,   118,   465,   550,   541,     9,   133,   541,   582,
       9,   131,   582,   468,   155,    41,   468,   541,    33,    41,
      41,    40,   143,   144,   145,   616,    49,   507,    96,    99,
     100,   504,   505,   618,   216,   217,   621,   621,   611,    91,
      92,    93,    94,    86,    87,    40,   114,   183,   629,   213,
      86,    87,   684,   652,   623,   101,   144,   505,   505,   200,
     435,   581,   604,   143,   144,   604,   604,   178,   179,   445,
      40,   465,   657,   658,    33,   415,   584,   457,    37,   173,
     449,   604,    33,    37,   533,   533,   419,   540,   652,   652,
     416,   422,   422,   422,   422,    21,   582,   467,   251,   251,
     582,   467,   251,   251,   465,   462,   582,   582,   152,   677,
     582,   554,   554,   552,   541,   468,   152,   541,   468,   468,
     581,   665,   664,   604,   213,   214,   215,   620,   620,   213,
     183,   629,   604,    40,   114,   183,   632,   125,   505,   505,
     161,    10,   175,   453,    41,   463,   152,   656,   235,   660,
     465,   657,   462,   604,   604,    41,    33,   467,   333,   435,
     465,   582,    41,    44,    46,   555,    44,    46,   556,   554,
     131,    10,    41,   628,   628,   205,   618,   633,   652,   604,
     631,   631,   505,   468,    41,   582,   465,   415,   656,   175,
     458,   465,   449,   420,   538,   540,    22,   435,   557,   559,
     558,   560,    26,   468,   468,    33,    41,    41,   652,   206,
      33,    41,   164,   166,   634,   465,   657,   465,    41,    45,
     115,   465,    47,   116,   465,    45,   115,   465,    47,   116,
     465,   629,   618,   652,   632,   632,   656,   206,   465
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
#line 786 "../src/parser/XQParser.y"
    {
    SET_BUILT_IN_NAMESPACE(XQillaFunction::XQillaPrefix, XQillaFunction::XMLChFunctionURI);
  }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 792 "../src/parser/XQParser.y"
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
#line 803 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (8)].signature)->argSpecs = (yyvsp[(5) - (8)].argSpecs);
    (yyvsp[(2) - (8)].signature)->returnType = (yyvsp[(6) - (8)].sequenceType);
    QP->_function = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(2) - (8)].signature), (yyvsp[(7) - (8)].astNode), true, MEMMGR));
  }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 814 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].signature)->argSpecs = (yyvsp[(2) - (3)].argSpecs);
    (yyvsp[(1) - (3)].signature)->returnType = (yyvsp[(3) - (3)].sequenceType);
    QP->_signature = (yyvsp[(1) - (3)].signature);
  }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 823 "../src/parser/XQParser.y"
    {
    printf("  { 0, 0, 0, 0, 0 }\n};\n\n");

    UTF8Str module(QP->_moduleName);
    printf("static const DelayedModule %s_module = { %s_file, %s_prefix, %s_uri, %s_functions };\n",
           module.str(), module.str(), module.str(), module.str(), module.str());
  }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 834 "../src/parser/XQParser.y"
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
#line 871 "../src/parser/XQParser.y"
    {
    printf("static const DelayedModule::FuncDef %s_functions[] = {\n", UTF8(QP->_moduleName));
  }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 875 "../src/parser/XQParser.y"
    {
  }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 881 "../src/parser/XQParser.y"
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
#line 917 "../src/parser/XQParser.y"
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
#line 946 "../src/parser/XQParser.y"
    {
  }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 949 "../src/parser/XQParser.y"
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
#line 973 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 977 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 996 "../src/parser/XQParser.y"
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
#line 1015 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, signature, 0, MEMMGR));
  }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 1020 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 1025 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 1032 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 1037 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 1042 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 1050 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 1054 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 1060 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 1065 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 1075 "../src/parser/XQParser.y"
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
#line 1088 "../src/parser/XQParser.y"
    {    
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, signature, 0, true, MEMMGR));
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1093 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 1100 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1105 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1113 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1117 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1125 "../src/parser/XQParser.y"
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
#line 1152 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1156 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 1163 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1169 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1174 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1179 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 1188 "../src/parser/XQParser.y"
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
#line 1212 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1216 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1223 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1228 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1233 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1238 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1249 "../src/parser/XQParser.y"
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
#line 1267 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1271 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1278 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1283 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1291 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1316 "../src/parser/XQParser.y"
    {
  }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1319 "../src/parser/XQParser.y"
    {
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1322 "../src/parser/XQParser.y"
    {
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1325 "../src/parser/XQParser.y"
    {
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1328 "../src/parser/XQParser.y"
    {
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1331 "../src/parser/XQParser.y"
    {
  }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1334 "../src/parser/XQParser.y"
    {
  }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1337 "../src/parser/XQParser.y"
    {
  }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1340 "../src/parser/XQParser.y"
    {
  }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1343 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1346 "../src/parser/XQParser.y"
    {
  }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1349 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1352 "../src/parser/XQParser.y"
    {
  }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1355 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1358 "../src/parser/XQParser.y"
    {
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1361 "../src/parser/XQParser.y"
    {
  }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1364 "../src/parser/XQParser.y"
    {
  }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1367 "../src/parser/XQParser.y"
    {
  }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1377 "../src/parser/XQParser.y"
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
#line 1389 "../src/parser/XQParser.y"
    {
  }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1392 "../src/parser/XQParser.y"
    {
  }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1398 "../src/parser/XQParser.y"
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
#line 1412 "../src/parser/XQParser.y"
    {
    (yyval.alias) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTypeAlias(0, 0, MEMMGR));
  }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1416 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].alias)->setURI(uri);
    (yyvsp[(1) - (2)].alias)->setName(name);
    (yyval.alias) = (yyvsp[(1) - (2)].alias);
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1423 "../src/parser/XQParser.y"
    {
    (yyval.alias) = (yyvsp[(1) - (3)].alias);
    (yyval.alias)->setType((yyvsp[(3) - (3)].itemType));
  }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1433 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1438 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1443 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1451 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1459 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1470 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1480 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1484 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1491 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1500 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1504 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1509 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1517 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1521 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1526 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1531 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1560 "../src/parser/XQParser.y"
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
#line 1578 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1582 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1587 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1596 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1605 "../src/parser/XQParser.y"
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
#line 1625 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1629 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1634 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1642 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1647 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1651 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1658 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1662 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1670 "../src/parser/XQParser.y"
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
#line 1683 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1687 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1697 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1701 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1709 "../src/parser/XQParser.y"
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
#line 1727 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1731 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1738 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1743 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1748 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1756 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1762 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1770 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1778 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1785 "../src/parser/XQParser.y"
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
#line 1799 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1803 "../src/parser/XQParser.y"
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
#line 1817 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1826 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1833 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1837 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1844 "../src/parser/XQParser.y"
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
#line 1879 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1883 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1888 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1894 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1903 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1907 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1914 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1918 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1925 "../src/parser/XQParser.y"
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
#line 1943 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), (XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1947 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1954 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1959 "../src/parser/XQParser.y"
    {
    const_cast<ArgumentSpec*>((yyvsp[(1) - (3)].letTuple)->getVar())->setType((yyvsp[(3) - (3)].sequenceType));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1967 "../src/parser/XQParser.y"
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
#line 1985 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1989 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1997 "../src/parser/XQParser.y"
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
#line 2019 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 2023 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 2030 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 2038 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 2047 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2055 "../src/parser/XQParser.y"
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
#line 2093 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2097 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 2104 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 2111 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 2120 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2129 "../src/parser/XQParser.y"
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
#line 2156 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 2160 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2167 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2179 "../src/parser/XQParser.y"
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
#line 2206 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2210 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 2217 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 2227 "../src/parser/XQParser.y"
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
#line 2239 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 2243 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 2248 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 2257 "../src/parser/XQParser.y"
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
#line 2270 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 2274 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 2279 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 2288 "../src/parser/XQParser.y"
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
#line 2302 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2306 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 2319 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 2324 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 2336 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 2340 "../src/parser/XQParser.y"
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
#line 2348 "../src/parser/XQParser.y"
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
#line 2361 "../src/parser/XQParser.y"
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
#line 2369 "../src/parser/XQParser.y"
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
#line 2382 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2389 "../src/parser/XQParser.y"
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
#line 2428 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 2432 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 2436 "../src/parser/XQParser.y"
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
#line 2454 "../src/parser/XQParser.y"
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
#line 2472 "../src/parser/XQParser.y"
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
#line 2482 "../src/parser/XQParser.y"
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
#line 2496 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2504 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2510 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 2516 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 2522 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 2533 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 2537 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 2565 "../src/parser/XQParser.y"
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
#line 2585 "../src/parser/XQParser.y"
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
#line 2609 "../src/parser/XQParser.y"
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
#line 2623 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 2627 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 2631 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 2635 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 2639 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 2643 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 2649 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 2655 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 2659 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 2663 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 2695 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 2703 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 2708 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 2717 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 2722 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 2731 "../src/parser/XQParser.y"
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
#line 2802 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2810 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2815 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2824 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2829 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 2838 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 2848 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 2852 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2860 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2864 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 2872 "../src/parser/XQParser.y"
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
#line 2888 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 2897 "../src/parser/XQParser.y"
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
#line 2909 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 2917 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2921 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 2926 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2935 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2939 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 2947 "../src/parser/XQParser.y"
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
#line 2957 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2969 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2976 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2980 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 2988 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 2993 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 3002 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (7)].signature)->argSpecs = (yyvsp[(5) - (7)].argSpecs);
    (yyvsp[(2) - (7)].signature)->returnType = (yyvsp[(6) - (7)].sequenceType);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), (yyvsp[(2) - (7)].signature), (yyvsp[(7) - (7)].astNode), true, MEMMGR));
  }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 3013 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 3017 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 3026 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 3034 "../src/parser/XQParser.y"
    {
    (yyval.signature) = new (MEMMGR) FunctionSignature(MEMMGR);
  }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 3038 "../src/parser/XQParser.y"
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
#line 3051 "../src/parser/XQParser.y"
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
#line 3064 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (2)].signature)->updating != FunctionSignature::OP_DEFAULT)
      yyerror((yylsp[(2) - (2)]), "Function option 'updating' already specified [err:XPST0003]");
    (yyvsp[(1) - (2)].signature)->updating = FunctionSignature::OP_TRUE;
    (yyval.signature) = (yyvsp[(1) - (2)].signature);
  }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 3073 "../src/parser/XQParser.y"
    { (yyval.boolean) = true; }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 3073 "../src/parser/XQParser.y"
    { (yyval.boolean) = false; }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 3076 "../src/parser/XQParser.y"
    { (yyval.boolean) = false; }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 3076 "../src/parser/XQParser.y"
    { (yyval.boolean) = true; }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 3080 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 3084 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 3092 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 3097 "../src/parser/XQParser.y"
    {
    ArgumentSpecs* paramList = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 3107 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 3115 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 3123 "../src/parser/XQParser.y"
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
#line 3136 "../src/parser/XQParser.y"
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
#line 3174 "../src/parser/XQParser.y"
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
#line 3219 "../src/parser/XQParser.y"
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
#line 3232 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 3247 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 3254 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 3262 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 3273 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 3277 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 3287 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 3291 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 3301 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 3308 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 3316 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 3320 "../src/parser/XQParser.y"
    {
    ASTNode *literal = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::INTEGER, X("0"), MEMMGR));
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(3) - (5)].str), literal, MEMMGR));
  }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 3329 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 3337 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) CountTuple(0, (yyvsp[(3) - (3)].str), MEMMGR));
  }
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 3345 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 3350 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 3358 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 3368 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 3375 "../src/parser/XQParser.y"
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
#line 3390 "../src/parser/XQParser.y"
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
#line 3404 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 3408 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 3412 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 3419 "../src/parser/XQParser.y"
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
#line 3428 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 3432 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 3441 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 3449 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 3460 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 3468 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 3479 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR));
  }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 3486 "../src/parser/XQParser.y"
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
#line 3499 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 3503 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 3511 "../src/parser/XQParser.y"
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
#line 3529 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses) = new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), 0)));
  }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 3534 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(SequenceTypeUnion, (yylsp[(2) - (3)]));
    (yyvsp[(1) - (3)].caseClauses)->push_back(WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(1) - (3)].caseClauses)->back()->getQName(), (yyvsp[(3) - (3)].sequenceType), 0)));
    (yyval.caseClauses) = (yyvsp[(1) - (3)].caseClauses);
  }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 3543 "../src/parser/XQParser.y"
    {
    (yyval.str) = 0;
  }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 3547 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 3555 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 3563 "../src/parser/XQParser.y"
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
#line 3577 "../src/parser/XQParser.y"
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
#line 3596 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 3600 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 3603 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 3604 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 3608 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 3612 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 3616 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3620 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 3624 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 3628 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 3632 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 3636 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 3640 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 3644 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 3648 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 3652 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3661 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 3665 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 3674 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionCall(0, BuiltInModules::core.uri, MEMMGR->getPooledString("to"), args, MEMMGR));
  }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 3686 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 3690 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 3699 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 3703 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 3707 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 3711 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3720 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 3724 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 3733 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 3737 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 3746 "../src/parser/XQParser.y"
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
#line 3768 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 3778 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 3787 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 3796 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 3802 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 3823 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 3827 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 3831 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 3839 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 3846 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 3859 "../src/parser/XQParser.y"
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
#line 3880 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 3889 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 3895 "../src/parser/XQParser.y"
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
#line 3920 "../src/parser/XQParser.y"
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
#line 3934 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 3940 "../src/parser/XQParser.y"
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
#line 3962 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 3972 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 3979 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 3988 "../src/parser/XQParser.y"
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
#line 4011 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::CHILD;
  }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 4015 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::DESCENDANT;
  }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 4019 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ATTRIBUTE;
  }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 4023 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::SELF;
  }
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 4027 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::DESCENDANT_OR_SELF;
  }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 4031 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::FOLLOWING_SIBLING;
  }
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 4035 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::FOLLOWING;
  }
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 4039 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::NAMESPACE;
  }
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 4047 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 4055 "../src/parser/XQParser.y"
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
#line 4072 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 4089 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PARENT;
  }
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 4093 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ANCESTOR;
  }
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 4097 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PRECEDING_SIBLING;
  }
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 4101 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PRECEDING;
  }
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 4105 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ANCESTOR_OR_SELF;
  }
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 4113 "../src/parser/XQParser.y"
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
#line 4125 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 4135 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 4147 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 4154 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 4161 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 4174 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 528:

/* Line 1455 of yacc.c  */
#line 4203 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 4214 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 4218 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 4226 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 4234 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 4244 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 4254 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 4258 "../src/parser/XQParser.y"
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
#line 4281 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 4286 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 4297 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 4306 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 4310 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 546:

/* Line 1455 of yacc.c  */
#line 4323 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 4329 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 550:

/* Line 1455 of yacc.c  */
#line 4342 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 551:

/* Line 1455 of yacc.c  */
#line 4346 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 4355 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 4371 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 4375 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 4382 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 4386 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 4396 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 4400 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 4405 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 4413 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 4417 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 4421 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 4432 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 4436 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 4441 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 4449 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 4453 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 4457 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 4472 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 4476 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 4481 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 4486 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 4491 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
    }
  }
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 4502 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 4511 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 4520 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(3) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor(WRAP((yylsp[(2) - (3)]), new (MEMMGR)
          XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (3)].str), MEMMGR)), value, MEMMGR));
  }
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 4531 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 4556 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 4564 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 4572 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 4576 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 4584 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 4588 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 4597 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 4604 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 4608 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 4618 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQNamespaceConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 4626 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 4634 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4642 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 4649 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 4657 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 4664 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 4668 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 4676 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType((yyvsp[(1) - (2)].itemType), (yyvsp[(2) - (2)].occurrence)));
  }
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 4683 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 4687 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 4695 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(WRAP((yyloc), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING)), SequenceType::STAR));
  }
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 4699 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 4709 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType((yyvsp[(1) - (2)].itemType), (yyvsp[(2) - (2)].occurrence)));
  }
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 4713 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 4722 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 4724 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 4726 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 4728 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 4734 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING));
  }
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 4746 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ItemType(ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName)));
  }
    break;

  case 633:

/* Line 1455 of yacc.c  */
#line 4776 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_NODE));
  }
    break;

  case 634:

/* Line 1455 of yacc.c  */
#line 4784 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_DOCUMENT));
  }
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 4788 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(ItemType::TEST_DOCUMENT);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.itemType)->setLocationInfo(&loc);
  }
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 4795 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(ItemType::TEST_SCHEMA_DOCUMENT);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.itemType)->setLocationInfo(&loc);
  }
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 4806 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_TEXT));
  }
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 4814 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_COMMENT));
  }
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 4822 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(NamespaceNodeTest, (yylsp[(1) - (3)]));
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_NAMESPACE));
  }
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 4831 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_PI));
  }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4835 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR)));
  }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4839 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR)));
  }
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 4847 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE));
  }
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 4851 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 4855 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName)));
  }
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 4864 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 648:

/* Line 1455 of yacc.c  */
#line 4872 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 4885 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT));
  }
    break;

  case 651:

/* Line 1455 of yacc.c  */
#line 4889 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 4893 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName)));
  }
    break;

  case 653:

/* Line 1455 of yacc.c  */
#line 4897 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName)));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 4907 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 656:

/* Line 1455 of yacc.c  */
#line 4915 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 4935 "../src/parser/XQParser.y"
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
#line 4947 "../src/parser/XQParser.y"
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
#line 4962 "../src/parser/XQParser.y"
    {
}
    break;

  case 664:

/* Line 1455 of yacc.c  */
#line 4965 "../src/parser/XQParser.y"
    {
}
    break;

  case 665:

/* Line 1455 of yacc.c  */
#line 4971 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 666:

/* Line 1455 of yacc.c  */
#line 4975 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 667:

/* Line 1455 of yacc.c  */
#line 4985 "../src/parser/XQParser.y"
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
#line 5002 "../src/parser/XQParser.y"
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
#line 5018 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 673:

/* Line 1455 of yacc.c  */
#line 5028 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 676:

/* Line 1455 of yacc.c  */
#line 5038 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 677:

/* Line 1455 of yacc.c  */
#line 5047 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 678:

/* Line 1455 of yacc.c  */
#line 5052 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 680:

/* Line 1455 of yacc.c  */
#line 5062 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 681:

/* Line 1455 of yacc.c  */
#line 5066 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 682:

/* Line 1455 of yacc.c  */
#line 5074 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 5079 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 5088 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 5092 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 5096 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 5100 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 5104 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 5108 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 691:

/* Line 1455 of yacc.c  */
#line 5118 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 692:

/* Line 1455 of yacc.c  */
#line 5129 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 693:

/* Line 1455 of yacc.c  */
#line 5135 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 5141 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 5147 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 696:

/* Line 1455 of yacc.c  */
#line 5162 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 697:

/* Line 1455 of yacc.c  */
#line 5166 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 698:

/* Line 1455 of yacc.c  */
#line 5170 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 699:

/* Line 1455 of yacc.c  */
#line 5174 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 5178 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 5182 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 5186 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 703:

/* Line 1455 of yacc.c  */
#line 5190 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 5198 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 5202 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 5206 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 707:

/* Line 1455 of yacc.c  */
#line 5214 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 708:

/* Line 1455 of yacc.c  */
#line 5218 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 719:

/* Line 1455 of yacc.c  */
#line 5254 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_INSENSITIVE);
  }
    break;

  case 720:

/* Line 1455 of yacc.c  */
#line 5258 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_SENSITIVE);
  }
    break;

  case 721:

/* Line 1455 of yacc.c  */
#line 5262 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::LOWERCASE);
  }
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 5266 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::UPPERCASE);
  }
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 5275 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 724:

/* Line 1455 of yacc.c  */
#line 5279 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 5287 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5291 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 5301 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 5305 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 5309 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5313 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 5317 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 5324 "../src/parser/XQParser.y"
    {
  }
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 5327 "../src/parser/XQParser.y"
    {
  }
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 5334 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 735:

/* Line 1455 of yacc.c  */
#line 5338 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 5342 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 5346 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 5356 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 739:

/* Line 1455 of yacc.c  */
#line 5360 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 740:

/* Line 1455 of yacc.c  */
#line 5364 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 5371 "../src/parser/XQParser.y"
    {
  }
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 5374 "../src/parser/XQParser.y"
    {
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5382 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5386 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5393 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 5397 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 5405 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 5409 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 5417 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 5425 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 5429 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 5437 "../src/parser/XQParser.y"
    {
}
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 5444 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 5452 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 5457 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 5462 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 5474 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 5478 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 759:

/* Line 1455 of yacc.c  */
#line 5482 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 760:

/* Line 1455 of yacc.c  */
#line 5486 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 5490 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 5501 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 5512 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 5516 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5526 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 5534 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 5541 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5546 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 5554 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5563 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::INTEGER, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5571 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::DECIMAL, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5579 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::DOUBLE, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5588 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5595 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5604 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5616 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, signature, (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5621 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(5) - (7)].argSpecs), (yyvsp[(6) - (7)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, signature, (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5626 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5632 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(8) - (10)].argSpecs), (yyvsp[(9) - (10)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), signature, (yyvsp[(10) - (10)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 5638 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), signature, (yyvsp[(6) - (6)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 5644 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(6) - (8)].argSpecs), (yyvsp[(7) - (8)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 5653 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 5657 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5665 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5669 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5676 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5681 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5689 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5694 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5703 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5707 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5711 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5719 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5723 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5731 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5735 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5739 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5743 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5751 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 5755 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5759 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5767 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5772 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 5782 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 811:

/* Line 1455 of yacc.c  */
#line 5799 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 5807 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(2) - (4)].argSpecs), (yyvsp[(3) - (4)].sequenceType), MEMMGR);
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, signature, (yyvsp[(4) - (4)].astNode), false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5818 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 5823 "../src/parser/XQParser.y"
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
#line 5851 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_FUNCTION));
  }
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 5859 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ItemType(new (MEMMGR) FunctionSignature(0, (yyvsp[(5) - (5)].sequenceType), MEMMGR), 0));
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5863 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(new (MEMMGR) FunctionSignature((yyvsp[(3) - (6)].argSpecs), (yyvsp[(6) - (6)].sequenceType), MEMMGR), 0));
  }
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 5870 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    (yyval.argSpecs)->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, (yyvsp[(1) - (1)].sequenceType), MEMMGR)));
  }
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 5875 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
    (yyval.argSpecs)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec(0, (yyvsp[(3) - (3)].sequenceType), MEMMGR)));
  }
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 5884 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 5897 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType((yyvsp[(3) - (4)].tupleMembers), 0));
  }
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 5901 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_TUPLE));
  }
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 5908 "../src/parser/XQParser.y"
    {
    (yyval.tupleMembers) = new (MEMMGR) TupleMembers(true, MEMMGR);
    (yyvsp[(1) - (1)].argSpec)->setIndex(0);
    (yyval.tupleMembers)->add(0, (yyvsp[(1) - (1)].argSpec));
  }
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 5914 "../src/parser/XQParser.y"
    {
    (yyval.tupleMembers) = (yyvsp[(1) - (3)].tupleMembers);
    (yyvsp[(3) - (3)].argSpec)->setIndex((yyval.tupleMembers)->size());
    (yyval.tupleMembers)->add(0, (yyvsp[(3) - (3)].argSpec));
  }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5924 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) ArgumentSpec((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].sequenceType), MEMMGR));
  }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5932 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(WRAP((yylsp[(3) - (6)]), new (MEMMGR)
          SequenceType((yyvsp[(3) - (6)].itemType), SequenceType::EXACTLY_ONE)), (yyvsp[(5) - (6)].sequenceType), 0));
  }
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 5937 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_MAP));
  }
    break;

  case 833:

/* Line 1455 of yacc.c  */
#line 5947 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tuples = setLastAncestor((yyvsp[(3) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the tuple constructor expression
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTupleConstructor(tuples, MEMMGR));
  }
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 5955 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTupleConstructor(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)), MEMMGR));
  }
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 5963 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 5971 "../src/parser/XQParser.y"
    {
    // TBD LetTuple doesn't give us the correct in-scope vars for the initializer - jpcs
    (yyval.tupleNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) LetTuple(0, (yyvsp[(1) - (4)].str), WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQTreatAs((yyvsp[(4) - (4)].astNode), (yyvsp[(2) - (4)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 839:

/* Line 1455 of yacc.c  */
#line 5981 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTupleMember((yyvsp[(3) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQMap((yyvsp[(1) - (3)].astNode), (yyval.astNode), MEMMGR));
  }
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 5989 "../src/parser/XQParser.y"
    {
    QP->_query->addTypeAlias(WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeAlias((yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].itemType), MEMMGR)));
  }
    break;



/* Line 1455 of yacc.c  */
#line 12262 "../src/parser/XQParser.cpp"
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
#line 6025 "../src/parser/XQParser.y"


}  // namespace XQParser


