
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
#line 398 "../src/parser/XQParser.cpp"

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
     _NAME_ = 491,
     _CALL_ = 492,
     _APPLY_ = 493,
     _TEMPLATES_ = 494,
     _MODE_ = 495,
     _FTOR_ = 496,
     _FTAND_ = 497,
     _FTNOT_ = 498,
     _PRIVATE_ = 499,
     _PUBLIC_ = 500,
     _DETERMINISTIC_ = 501,
     _NONDETERMINISTIC_ = 502,
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
     _XSLT_VERSION_ = 533,
     _XSLT_MODE_ = 534,
     _XSLT_NAME_ = 535,
     _XSLT_DOCTYPE_PUBLIC_ = 536,
     _XSLT_DOCTYPE_SYSTEM_ = 537,
     _XSLT_ENCODING_ = 538,
     _XSLT_MEDIA_TYPE_ = 539,
     _XSLT_NORMALIZATION_FORM_ = 540,
     _XSLT_STANDALONE_ = 541,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 542,
     _XSLT_NAMESPACE_STR_ = 543,
     _XSLT_SCHEMA_LOCATION_ = 544,
     _XSLT_TUNNEL_ = 545,
     _XSLT_REQUIRED_ = 546,
     _XSLT_OVERRIDE_ = 547,
     _XSLT_COPY_NAMESPACES_ = 548,
     _XSLT_INHERIT_NAMESPACES_ = 549,
     _XSLT_BYTE_ORDER_MARK_ = 550,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 551,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 552,
     _XSLT_INDENT_ = 553,
     _XSLT_OMIT_XML_DECLARATION_ = 554,
     _XSLT_UNDECLARE_PREFIXES_ = 555,
     _XSLT_MATCH_ = 556,
     _XSLT_AS_ = 557,
     _XSLT_SELECT_ = 558,
     _XSLT_PRIORITY_ = 559,
     _XSLT_TEST_ = 560,
     _XSLT_SEPARATOR_ = 561,
     _XSLT_NAMESPACE_A_ = 562,
     _XSLT_REGEX_ = 563,
     _XSLT_FLAGS_ = 564,
     _XSLT_METHOD_ = 565,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 566,
     _XSLT_USE_CHARACTER_MAPS_ = 567,
     _XSLT_ELEMENT_NAME_ = 568,
     _XSLT_XMLNS_ATTR_ = 569,
     _XSLT_ATTR_NAME_ = 570,
     _XSLT_TEXT_NODE_ = 571,
     _XSLT_WS_TEXT_NODE_ = 572,
     _HASH_DEFAULT_ = 573,
     _HASH_ALL_ = 574,
     _HASH_CURRENT_ = 575,
     _XML_ = 576,
     _HTML_ = 577,
     _XHTML_ = 578
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
#define _NAME_ 491
#define _CALL_ 492
#define _APPLY_ 493
#define _TEMPLATES_ 494
#define _MODE_ 495
#define _FTOR_ 496
#define _FTAND_ 497
#define _FTNOT_ 498
#define _PRIVATE_ 499
#define _PUBLIC_ 500
#define _DETERMINISTIC_ 501
#define _NONDETERMINISTIC_ 502
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
#define _XSLT_VERSION_ 533
#define _XSLT_MODE_ 534
#define _XSLT_NAME_ 535
#define _XSLT_DOCTYPE_PUBLIC_ 536
#define _XSLT_DOCTYPE_SYSTEM_ 537
#define _XSLT_ENCODING_ 538
#define _XSLT_MEDIA_TYPE_ 539
#define _XSLT_NORMALIZATION_FORM_ 540
#define _XSLT_STANDALONE_ 541
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 542
#define _XSLT_NAMESPACE_STR_ 543
#define _XSLT_SCHEMA_LOCATION_ 544
#define _XSLT_TUNNEL_ 545
#define _XSLT_REQUIRED_ 546
#define _XSLT_OVERRIDE_ 547
#define _XSLT_COPY_NAMESPACES_ 548
#define _XSLT_INHERIT_NAMESPACES_ 549
#define _XSLT_BYTE_ORDER_MARK_ 550
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 551
#define _XSLT_INCLUDE_CONTENT_TYPE_ 552
#define _XSLT_INDENT_ 553
#define _XSLT_OMIT_XML_DECLARATION_ 554
#define _XSLT_UNDECLARE_PREFIXES_ 555
#define _XSLT_MATCH_ 556
#define _XSLT_AS_ 557
#define _XSLT_SELECT_ 558
#define _XSLT_PRIORITY_ 559
#define _XSLT_TEST_ 560
#define _XSLT_SEPARATOR_ 561
#define _XSLT_NAMESPACE_A_ 562
#define _XSLT_REGEX_ 563
#define _XSLT_FLAGS_ 564
#define _XSLT_METHOD_ 565
#define _XSLT_CDATA_SECTION_ELEMENTS_ 566
#define _XSLT_USE_CHARACTER_MAPS_ 567
#define _XSLT_ELEMENT_NAME_ 568
#define _XSLT_XMLNS_ATTR_ 569
#define _XSLT_ATTR_NAME_ 570
#define _XSLT_TEXT_NODE_ 571
#define _XSLT_WS_TEXT_NODE_ 572
#define _HASH_DEFAULT_ 573
#define _HASH_ALL_ 574
#define _HASH_CURRENT_ 575
#define _XML_ 576
#define _HTML_ 577
#define _XHTML_ 578




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
#line 1100 "../src/parser/XQParser.cpp"

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
#define YYFINAL  322
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7338

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  324
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  346
/* YYNRULES -- Number of rules.  */
#define YYNRULES  990
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1618

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   578

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
     315,   316,   317,   318,   319,   320,   321,   322,   323
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    14,    17,    20,    23,
      32,    33,    35,    39,    42,    49,    50,    53,    62,    64,
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
     726,   730,   733,   734,   739,   742,   745,   747,   749,   753,
     758,   762,   765,   768,   771,   774,   781,   782,   786,   790,
     794,   798,   802,   806,   810,   814,   818,   820,   822,   824,
     826,   828,   830,   832,   834,   836,   838,   840,   846,   850,
     854,   860,   866,   871,   875,   879,   883,   889,   895,   901,
     903,   905,   907,   909,   914,   918,   924,   929,   930,   933,
     937,   941,   945,   953,   958,   965,   968,   970,   974,   978,
     986,   988,   990,   993,   997,   999,  1001,  1002,  1005,  1008,
    1011,  1013,  1015,  1017,  1019,  1020,  1023,  1027,  1029,  1033,
    1037,  1039,  1043,  1045,  1047,  1049,  1051,  1053,  1055,  1057,
    1059,  1061,  1063,  1065,  1067,  1069,  1073,  1075,  1078,  1081,
    1083,  1085,  1087,  1089,  1091,  1094,  1098,  1100,  1108,  1109,
    1113,  1114,  1118,  1121,  1125,  1127,  1133,  1139,  1142,  1146,
    1150,  1155,  1159,  1161,  1165,  1171,  1173,  1174,  1176,  1178,
    1179,  1182,  1185,  1190,  1195,  1199,  1201,  1207,  1214,  1217,
    1219,  1225,  1229,  1233,  1237,  1241,  1242,  1246,  1255,  1259,
    1261,  1265,  1267,  1271,  1275,  1276,  1281,  1285,  1289,  1293,
    1297,  1301,  1305,  1309,  1313,  1317,  1321,  1325,  1329,  1331,
    1336,  1342,  1344,  1348,  1350,  1354,  1358,  1360,  1364,  1368,
    1372,  1376,  1378,  1382,  1386,  1388,  1392,  1396,  1398,  1403,
    1405,  1410,  1412,  1417,  1419,  1424,  1426,  1429,  1432,  1434,
    1436,  1438,  1440,  1445,  1451,  1457,  1461,  1466,  1468,  1471,
    1476,  1478,  1481,  1483,  1486,  1489,  1491,  1493,  1497,  1501,
    1503,  1505,  1507,  1509,  1511,  1513,  1518,  1520,  1525,  1528,
    1530,  1533,  1536,  1539,  1542,  1545,  1548,  1551,  1554,  1557,
    1559,  1562,  1564,  1567,  1570,  1573,  1576,  1579,  1581,  1583,
    1585,  1587,  1589,  1591,  1593,  1595,  1597,  1602,  1604,  1606,
    1608,  1610,  1612,  1614,  1616,  1618,  1620,  1622,  1624,  1626,
    1628,  1630,  1632,  1635,  1637,  1641,  1644,  1646,  1651,  1656,
    1660,  1665,  1669,  1671,  1673,  1675,  1677,  1679,  1681,  1683,
    1685,  1691,  1702,  1704,  1706,  1707,  1715,  1723,  1724,  1726,
    1730,  1734,  1738,  1742,  1743,  1746,  1749,  1750,  1753,  1756,
    1757,  1760,  1763,  1764,  1767,  1770,  1771,  1774,  1777,  1780,
    1783,  1787,  1788,  1790,  1794,  1796,  1799,  1801,  1803,  1805,
    1807,  1809,  1811,  1813,  1818,  1822,  1824,  1828,  1831,  1835,
    1839,  1841,  1845,  1849,  1854,  1859,  1863,  1865,  1869,  1872,
    1876,  1879,  1880,  1882,  1883,  1886,  1889,  1893,  1894,  1896,
    1898,  1900,  1902,  1906,  1908,  1910,  1912,  1914,  1916,  1918,
    1920,  1922,  1924,  1926,  1928,  1930,  1932,  1934,  1938,  1942,
    1947,  1952,  1956,  1960,  1964,  1968,  1973,  1978,  1982,  1987,
    1994,  1996,  1998,  2003,  2005,  2009,  2014,  2021,  2029,  2031,
    2033,  2038,  2040,  2042,  2044,  2046,  2048,  2052,  2053,  2056,
    2057,  2060,  2064,  2066,  2070,  2072,  2077,  2079,  2082,  2084,
    2086,  2089,  2092,  2096,  2098,  2101,  2106,  2110,  2115,  2116,
    2118,  2121,  2123,  2126,  2128,  2129,  2133,  2136,  2140,  2144,
    2149,  2151,  2155,  2159,  2162,  2165,  2168,  2171,  2174,  2176,
    2178,  2180,  2182,  2184,  2187,  2191,  2193,  2195,  2197,  2199,
    2201,  2203,  2205,  2207,  2210,  2213,  2215,  2217,  2220,  2223,
    2225,  2228,  2231,  2234,  2240,  2246,  2249,  2250,  2254,  2257,
    2262,  2267,  2274,  2279,  2283,  2288,  2289,  2292,  2295,  2299,
    2301,  2305,  2308,  2311,  2314,  2316,  2319,  2323,  2327,  2331,
    2335,  2339,  2346,  2353,  2358,  2363,  2368,  2371,  2374,  2377,
    2380,  2383,  2391,  2397,  2403,  2410,  2414,  2416,  2421,  2423,
    2425,  2427,  2429,  2431,  2433,  2439,  2447,  2456,  2467,  2474,
    2483,  2484,  2487,  2490,  2494,  2495,  2498,  2500,  2504,  2506,
    2508,  2510,  2514,  2522,  2526,  2534,  2540,  2550,  2552,  2554,
    2556,  2558,  2562,  2568,  2570,  2572,  2576,  2581,  2585,  2590,
    2592,  2594,  2599,  2605,  2612,  2614,  2618,  2622,  2624,  2626,
    2628,  2630,  2632,  2634,  2636,  2638,  2640,  2642,  2644,  2646,
    2648,  2650,  2652,  2654,  2656,  2658,  2660,  2662,  2664,  2666,
    2668,  2670,  2672,  2674,  2676,  2678,  2680,  2682,  2684,  2686,
    2688,  2690,  2692,  2694,  2696,  2698,  2700,  2702,  2704,  2706,
    2708,  2710,  2712,  2714,  2716,  2718,  2720,  2722,  2724,  2726,
    2728,  2730,  2732,  2734,  2736,  2738,  2740,  2742,  2744,  2746,
    2748,  2750,  2752,  2754,  2756,  2758,  2760,  2762,  2764,  2766,
    2768,  2770,  2772,  2774,  2776,  2778,  2780,  2782,  2784,  2786,
    2788,  2790,  2792,  2794,  2796,  2798,  2800,  2802,  2804,  2806,
    2808,  2810,  2812,  2814,  2816,  2818,  2820,  2822,  2824,  2826,
    2828,  2830,  2832,  2834,  2836,  2838,  2840,  2842,  2844,  2846,
    2848,  2850,  2852,  2854,  2856,  2858,  2860,  2862,  2864,  2866,
    2868,  2870,  2872,  2874,  2876,  2878,  2880,  2882,  2884,  2886,
    2888,  2890,  2892,  2894,  2896,  2898,  2900,  2902,  2904,  2906,
    2908,  2910,  2912,  2914,  2916,  2918,  2920,  2922,  2924,  2926,
    2928,  2930,  2932,  2934,  2936,  2938,  2940,  2942,  2944,  2946,
    2948,  2950,  2952,  2954,  2956,  2958,  2960,  2962,  2964,  2966,
    2968
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     325,     0,    -1,     3,   459,    -1,   326,    -1,     5,   334,
      -1,     7,   330,    -1,     8,   329,    -1,     4,   418,    -1,
       6,   327,    -1,   180,   452,   449,   669,   450,   455,   458,
     328,    -1,    -1,   428,    -1,   452,   450,   455,    -1,   331,
     332,    -1,   190,   173,   646,    37,   597,   428,    -1,    -1,
     332,   333,    -1,   180,   452,   449,   669,   450,   455,   458,
     428,    -1,   335,    -1,   249,   336,   337,   248,    -1,   357,
      -1,    -1,   336,   278,    -1,   336,   287,    -1,    -1,   337,
     338,    -1,   337,   342,    -1,   337,   347,    -1,   337,   349,
      -1,   337,   351,    -1,   337,   355,    -1,   339,   344,   360,
     248,    -1,   250,    -1,   339,   301,   408,    -1,   339,   280,
      -1,   339,   304,   341,    -1,   339,   279,   340,    -1,   339,
     302,   575,    -1,    -1,   340,   122,    -1,   340,   318,    -1,
     340,   319,    -1,    52,    -1,    53,    -1,    54,    -1,   343,
     344,   360,   248,    -1,   258,    -1,   343,   280,    -1,   343,
     302,   575,    -1,   343,   292,    -1,    -1,   344,   345,    -1,
     346,   360,   248,    -1,   257,    -1,   346,   280,    -1,   346,
     303,   460,    -1,   346,   302,   575,    -1,   346,   291,    -1,
     346,   290,    -1,   348,   360,   248,    -1,   257,    -1,   348,
     280,    -1,   348,   303,   460,    -1,   348,   302,   575,    -1,
     348,   291,    -1,   348,   290,    -1,   350,   360,   248,    -1,
     263,    -1,   350,   280,    -1,   350,   303,   460,    -1,   350,
     302,   575,    -1,   352,   248,    -1,   276,    -1,   352,   280,
      -1,   352,   310,   353,    -1,   352,   295,    -1,   352,   311,
     354,    -1,   352,   281,    -1,   352,   282,    -1,   352,   283,
      -1,   352,   296,    -1,   352,   297,    -1,   352,   298,    -1,
     352,   284,    -1,   352,   285,    -1,   352,   299,    -1,   352,
     286,    -1,   352,   300,    -1,   352,   312,   354,    -1,   352,
     278,    -1,   321,    -1,   322,    -1,   323,    -1,    63,    -1,
     122,    -1,   122,    -1,   354,   122,    -1,   356,   248,    -1,
     277,    -1,   277,   288,    -1,   277,   289,    -1,   277,   288,
     289,    -1,   277,   289,   288,    -1,   313,   358,   360,   248,
      -1,    -1,   358,   315,   359,    -1,   358,   314,    -1,    -1,
     359,   458,    -1,   359,   115,    -1,    -1,   360,   365,    -1,
     360,   357,    -1,   360,   361,    -1,   362,    -1,   364,    -1,
     366,    -1,   370,    -1,   375,    -1,   379,    -1,   377,    -1,
     388,    -1,   390,    -1,   392,    -1,   394,    -1,   396,    -1,
     398,    -1,   400,    -1,   384,    -1,   402,    -1,   404,    -1,
     406,    -1,   363,   360,   248,    -1,   251,    -1,   363,   303,
     460,    -1,   363,   306,   359,    -1,   252,   365,   248,    -1,
     316,    -1,   317,    -1,   367,   369,   248,    -1,   253,    -1,
     367,   303,   460,    -1,   367,   279,   368,    -1,   122,    -1,
     318,    -1,   320,    -1,    -1,   369,   373,    -1,   371,   372,
     248,    -1,   254,    -1,   371,   280,    -1,    -1,   372,   373,
      -1,   374,   360,   248,    -1,   255,    -1,   374,   280,    -1,
     374,   303,   460,    -1,   374,   302,   575,    -1,   374,   290,
      -1,   376,   248,    -1,   256,   303,   460,    -1,   378,   360,
     248,    -1,   262,   305,   460,    -1,   259,   380,   383,   248,
      -1,   381,    -1,   380,   381,    -1,   382,   360,   248,    -1,
     260,   305,   460,    -1,    -1,   261,   360,   248,    -1,   385,
     386,   387,   248,    -1,   270,    -1,   385,   303,   460,    -1,
     385,   308,   359,    -1,   385,   309,   359,    -1,    -1,   271,
     360,   248,    -1,    -1,   272,   360,   248,    -1,   389,   360,
     248,   360,    -1,   263,    -1,   389,   280,    -1,   389,   303,
     460,    -1,   389,   302,   575,    -1,   391,   360,   248,    -1,
     264,    -1,   391,   303,   460,    -1,   393,   360,   248,    -1,
     265,    -1,   393,   280,   359,    -1,   393,   303,   460,    -1,
     395,   360,   248,    -1,   266,    -1,   397,   360,   248,    -1,
     267,    -1,   397,   280,   359,    -1,   397,   307,   359,    -1,
     397,   303,   460,    -1,   397,   306,   359,    -1,   399,   360,
     248,    -1,   268,    -1,   399,   280,   359,    -1,   399,   303,
     460,    -1,   401,   360,   248,    -1,   269,    -1,   401,   280,
     359,    -1,   401,   307,   359,    -1,   403,   248,    -1,   273,
      -1,   403,   303,   460,    -1,   403,   293,    -1,   405,   360,
     248,    -1,   274,    -1,   405,   293,    -1,   405,   294,    -1,
     407,   360,   248,    -1,   275,    -1,   407,   303,   460,    -1,
     408,    12,   409,    -1,   409,    -1,   414,    -1,    36,    -1,
     411,    -1,    36,    -1,    30,    -1,   232,    40,   412,    41,
      -1,   233,    40,   645,    33,   413,    41,    -1,   645,    -1,
     533,    -1,   531,    -1,   533,    -1,   415,    -1,   410,   415,
      -1,   411,    36,   415,    -1,   411,    30,   415,    -1,   414,
      36,   415,    -1,   414,    30,   415,    -1,   416,   417,    -1,
     526,    -1,    71,    19,   526,    -1,    55,    19,   526,    -1,
      20,   526,    -1,    -1,   417,    21,   460,    22,    -1,   419,
     422,    -1,   419,   423,    -1,   422,    -1,   423,    -1,   186,
     420,   428,    -1,   186,   420,   421,   428,    -1,   186,   421,
     428,    -1,   187,   125,    -1,   176,   125,    -1,   425,   459,
      -1,   424,   425,    -1,   190,   173,   646,    37,   597,   428,
      -1,    -1,   425,   426,   428,    -1,   425,   427,   428,    -1,
     425,   429,   428,    -1,   425,   431,   428,    -1,   425,   445,
     428,    -1,   425,   448,   428,    -1,   425,   648,   428,    -1,
     425,   432,   428,    -1,   425,   433,   428,    -1,   430,    -1,
     439,    -1,   440,    -1,   447,    -1,   434,    -1,   435,    -1,
     632,    -1,   436,    -1,   441,    -1,   444,    -1,    50,    -1,
     180,   173,   646,    37,   597,    -1,   180,    65,   171,    -1,
     180,    65,   172,    -1,   180,   183,   191,   173,   597,    -1,
     180,   183,   449,   173,   597,    -1,   180,   185,   668,   125,
      -1,   180,    66,   615,    -1,   180,   182,   120,    -1,   180,
     182,   121,    -1,   180,   183,   138,   142,   143,    -1,   180,
     183,   138,   142,   144,    -1,   180,   184,   437,    33,   438,
      -1,   171,    -1,   177,    -1,   178,    -1,   179,    -1,   180,
     183,   145,   597,    -1,   180,    67,   597,    -1,   188,   189,
     443,   597,   442,    -1,   188,   189,   597,   442,    -1,    -1,
     114,   597,    -1,   442,    33,   597,    -1,   173,   646,    37,
      -1,   183,   191,   173,    -1,   188,   190,   173,   646,    37,
     597,   442,    -1,   188,   190,   597,   442,    -1,   180,   126,
       9,   534,   574,   446,    -1,    10,   461,    -1,   175,    -1,
     180,   181,   171,    -1,   180,   181,   172,    -1,   180,   452,
     449,   669,   450,   455,   451,    -1,   192,    -1,   193,    -1,
      40,    41,    -1,    40,   456,    41,    -1,   458,    -1,   175,
      -1,    -1,   452,   453,    -1,   452,   454,    -1,   452,   231,
      -1,   244,    -1,   245,    -1,   246,    -1,   247,    -1,    -1,
     152,   575,    -1,   456,    33,   457,    -1,   457,    -1,     9,
     534,   574,    -1,    48,   460,    49,    -1,   460,    -1,   460,
      33,   461,    -1,   461,    -1,   462,    -1,   482,    -1,   485,
      -1,   491,    -1,   633,    -1,   635,    -1,   638,    -1,   637,
      -1,   639,    -1,   492,    -1,   654,    -1,   655,    -1,   463,
     131,   461,    -1,   464,    -1,   463,   476,    -1,   463,   465,
      -1,   466,    -1,   471,    -1,   464,    -1,   474,    -1,   475,
      -1,   132,   467,    -1,   467,    33,   468,    -1,   468,    -1,
       9,   534,   574,   469,   470,   133,   461,    -1,    -1,   114,
       9,   534,    -1,    -1,   194,     9,   534,    -1,   134,   472,
      -1,   472,    33,   473,    -1,   473,    -1,     9,   534,   574,
      10,   461,    -1,   194,     9,   534,    10,   461,    -1,   135,
     461,    -1,   136,     9,   534,    -1,   138,   137,   477,    -1,
     139,   138,   137,   477,    -1,   477,    33,   478,    -1,   478,
      -1,   479,   480,   481,    -1,   479,   480,   481,   145,   597,
      -1,   461,    -1,    -1,   140,    -1,   141,    -1,    -1,   142,
     143,    -1,   142,   144,    -1,   146,   483,   148,   461,    -1,
     147,   483,   148,   461,    -1,   483,    33,   484,    -1,   484,
      -1,     9,   534,   574,   133,   461,    -1,   149,    40,   460,
      41,   486,   487,    -1,   486,   488,    -1,   488,    -1,   183,
       9,   534,   131,   461,    -1,   183,   131,   461,    -1,   489,
     131,   461,    -1,   150,   490,   575,    -1,   489,    12,   575,
      -1,    -1,     9,   534,   152,    -1,   153,    40,   460,    41,
     154,   461,   155,   461,    -1,   492,   156,   493,    -1,   493,
      -1,   493,   157,   494,    -1,   494,    -1,   496,    37,   496,
      -1,   496,    13,   496,    -1,    -1,   496,    24,   495,   496,
      -1,   496,    14,   496,    -1,   496,    15,   496,    -1,   496,
      16,   496,    -1,   496,   108,   496,    -1,   496,   109,   496,
      -1,   496,   110,   496,    -1,   496,   111,   496,    -1,   496,
     112,   496,    -1,   496,   113,   496,    -1,   496,   170,   496,
      -1,   496,    17,   496,    -1,   496,    18,   496,    -1,   496,
      -1,   497,   195,    63,   598,    -1,   497,   195,    63,   598,
     631,    -1,   497,    -1,   498,   161,   498,    -1,   498,    -1,
     498,    34,   499,    -1,   498,    35,   499,    -1,   499,    -1,
     499,    11,   500,    -1,   499,   162,   500,    -1,   499,    70,
     500,    -1,   499,   163,   500,    -1,   500,    -1,   500,    12,
     501,    -1,   500,   164,   501,    -1,   501,    -1,   501,   165,
     502,    -1,   501,   166,   502,    -1,   502,    -1,   503,   158,
     159,   575,    -1,   503,    -1,   504,   169,   152,   575,    -1,
     504,    -1,   505,   160,   152,   572,    -1,   505,    -1,   506,
     168,   152,   572,    -1,   506,    -1,    35,   506,    -1,    34,
     506,    -1,   507,    -1,   508,    -1,   513,    -1,   509,    -1,
     167,    48,   460,    49,    -1,   167,    68,    48,   460,    49,
      -1,   167,    69,    48,   460,    49,    -1,   510,    48,    49,
      -1,   510,    48,   460,    49,    -1,   511,    -1,   510,   511,
      -1,    32,   547,   668,   512,    -1,   130,    -1,   105,   130,
      -1,   514,    -1,   514,   515,    -1,    30,   515,    -1,   515,
      -1,    36,    -1,   515,    36,   516,    -1,   515,    30,   516,
      -1,   516,    -1,   517,    -1,   529,    -1,   518,    -1,   519,
      -1,   520,    -1,   518,    21,   460,    22,    -1,   523,    -1,
     519,    21,   460,    22,    -1,   521,   526,    -1,   522,    -1,
      71,    19,    -1,    72,    19,    -1,    55,    19,    -1,    73,
      19,    -1,    74,    19,    -1,    75,    19,    -1,    76,    19,
      -1,   173,    19,    -1,    20,   526,    -1,   526,    -1,   524,
     526,    -1,   525,    -1,    77,    19,    -1,    78,    19,    -1,
      79,    19,    -1,    80,    19,    -1,    81,    19,    -1,    39,
      -1,   579,    -1,   527,    -1,   647,    -1,   528,    -1,    11,
      -1,   127,    -1,   128,    -1,   530,    -1,   529,    21,   460,
      22,    -1,   662,    -1,   531,    -1,   533,    -1,   535,    -1,
     536,    -1,   539,    -1,   542,    -1,   537,    -1,   538,    -1,
     659,    -1,   532,    -1,   645,    -1,   642,    -1,   643,    -1,
     644,    -1,     9,   534,    -1,   668,    -1,    40,   460,    41,
      -1,    40,    41,    -1,    38,    -1,   120,    48,   460,    49,
      -1,   121,    48,   460,    49,    -1,   669,    40,    41,    -1,
     669,    40,   540,    41,    -1,   540,    33,   541,    -1,   541,
      -1,   461,    -1,    23,    -1,   543,    -1,   559,    -1,   544,
      -1,   555,    -1,   557,    -1,    24,   545,   546,   547,    42,
      -1,    24,   545,   546,   547,    25,   554,    31,   545,   547,
      26,    -1,   122,    -1,   123,    -1,    -1,   546,   105,   122,
     547,    43,   547,   548,    -1,   546,   105,   123,   547,    43,
     547,   549,    -1,    -1,   105,    -1,    44,   550,    45,    -1,
      46,   552,    47,    -1,    44,   551,    45,    -1,    46,   553,
      47,    -1,    -1,   550,   458,    -1,   550,   115,    -1,    -1,
     551,   458,    -1,   551,   115,    -1,    -1,   552,   458,    -1,
     552,   116,    -1,    -1,   553,   458,    -1,   553,   116,    -1,
      -1,   554,   543,    -1,   554,   458,    -1,   554,   118,    -1,
     554,   117,    -1,    28,   556,    29,    -1,    -1,   107,    -1,
      27,   129,   558,    -1,   106,    -1,   105,   106,    -1,   560,
      -1,   561,    -1,   564,    -1,   566,    -1,   567,    -1,   568,
      -1,   569,    -1,    82,    48,   460,    49,    -1,   191,   562,
     563,    -1,   124,    -1,    48,   460,    49,    -1,    48,    49,
      -1,    48,   460,    49,    -1,    55,   565,   563,    -1,   124,
      -1,    48,   460,    49,    -1,   173,   570,   563,    -1,    63,
      48,   460,    49,    -1,    56,    48,   460,    49,    -1,    60,
     570,   571,    -1,   124,    -1,    48,   460,    49,    -1,    48,
      49,    -1,    48,   460,    49,    -1,   578,   573,    -1,    -1,
      23,    -1,    -1,   152,   575,    -1,   577,   576,    -1,    64,
      40,    41,    -1,    -1,    11,    -1,    34,    -1,    23,    -1,
     578,    -1,   174,    40,    41,    -1,   579,    -1,   663,    -1,
     667,    -1,   647,    -1,   581,    -1,   590,    -1,   586,    -1,
     592,    -1,   588,    -1,   585,    -1,   583,    -1,   582,    -1,
     584,    -1,   580,    -1,    59,    40,    41,    -1,    57,    40,
      41,    -1,    57,    40,   590,    41,    -1,    57,    40,   592,
      41,    -1,    63,    40,    41,    -1,    56,    40,    41,    -1,
      58,    40,    41,    -1,    60,    40,    41,    -1,    60,    40,
     646,    41,    -1,    60,    40,   125,    41,    -1,    55,    40,
      41,    -1,    55,    40,   587,    41,    -1,    55,    40,   587,
      33,   596,    41,    -1,   594,    -1,    11,    -1,    61,    40,
     589,    41,    -1,   594,    -1,   191,    40,    41,    -1,   191,
      40,   591,    41,    -1,   191,    40,   591,    33,   596,    41,
      -1,   191,    40,   591,    33,   596,    23,    41,    -1,   595,
      -1,    11,    -1,    62,    40,   593,    41,    -1,   595,    -1,
     647,    -1,   647,    -1,   647,    -1,   125,    -1,   601,   600,
     599,    -1,    -1,   196,   497,    -1,    -1,   600,   612,    -1,
     601,   241,   602,    -1,   602,    -1,   602,   242,   603,    -1,
     603,    -1,   603,    83,   133,   604,    -1,   604,    -1,   243,
     605,    -1,   605,    -1,   606,    -1,   606,   615,    -1,   607,
     610,    -1,    40,   598,    41,    -1,   608,    -1,   531,   609,
      -1,    48,   460,    49,   609,    -1,   510,    48,    49,    -1,
     510,    48,   598,    49,    -1,    -1,   208,    -1,   208,    97,
      -1,   209,    -1,   209,   213,    -1,   210,    -1,    -1,   199,
     611,   200,    -1,   211,   498,    -1,   119,   144,   498,    -1,
     119,   101,   498,    -1,   212,   498,   161,   498,    -1,   120,
      -1,   197,   498,   613,    -1,   198,   611,   613,    -1,   201,
     614,    -1,   202,   614,    -1,   114,    99,    -1,   114,   100,
      -1,    95,    96,    -1,   213,    -1,   214,    -1,   215,    -1,
     216,    -1,   217,    -1,    84,   616,    -1,   615,    84,   616,
      -1,   628,    -1,   629,    -1,   620,    -1,   619,    -1,   617,
      -1,   618,    -1,   623,    -1,   630,    -1,   151,    87,    -1,
     151,    86,    -1,   203,    -1,   204,    -1,    88,    87,    -1,
      88,    86,    -1,    91,    -1,    85,    91,    -1,    92,   622,
      -1,    92,   183,    -1,    92,    40,   622,   621,    41,    -1,
      92,    40,   183,   621,    41,    -1,    85,    92,    -1,    -1,
     621,    33,   622,    -1,   114,   597,    -1,   114,   597,   205,
     645,    -1,   114,   597,   611,   206,    -1,   114,   597,   205,
     645,   611,   206,    -1,    93,   213,   625,   624,    -1,    85,
      93,   213,    -1,    93,   213,   183,   624,    -1,    -1,   624,
     627,    -1,   114,   597,    -1,    40,   626,    41,    -1,   645,
      -1,   626,    33,   645,    -1,   164,   625,    -1,   166,   625,
      -1,   207,   645,    -1,    94,    -1,    85,    94,    -1,   185,
     668,   125,    -1,    90,    96,   500,    -1,   180,   224,    69,
      -1,   180,   224,    68,    -1,   180,   224,   102,    -1,   634,
     461,   152,   220,   230,   461,    -1,   634,   461,   152,   228,
     230,   461,    -1,   634,   461,   230,   461,    -1,   634,   461,
     223,   461,    -1,   634,   461,   222,   461,    -1,   221,    59,
      -1,   221,   226,    -1,   636,   461,    -1,   229,    59,    -1,
     229,   226,    -1,   218,   104,   159,    59,   461,   225,   461,
      -1,   218,    59,   461,   225,   461,    -1,   227,    59,   461,
     152,   461,    -1,   103,   640,   219,   461,   131,   461,    -1,
     640,    33,   641,    -1,   641,    -1,     9,   534,    10,   461,
      -1,    52,    -1,    53,    -1,    54,    -1,   125,    -1,   668,
      -1,   668,    -1,   180,   234,   236,   668,   458,    -1,   180,
     234,   236,   668,   650,   649,   458,    -1,   180,   234,   236,
     668,   651,   235,   408,   458,    -1,   180,   234,   236,   668,
     651,   235,   408,   650,   649,   458,    -1,   180,   234,   651,
     235,   408,   458,    -1,   180,   234,   651,   235,   408,   650,
     649,   458,    -1,    -1,   152,   575,    -1,    40,    41,    -1,
      40,   456,    41,    -1,    -1,   240,   652,    -1,   653,    -1,
     652,    33,   653,    -1,   122,    -1,   318,    -1,   319,    -1,
     237,   234,   668,    -1,   237,   234,   668,   225,    40,   657,
      41,    -1,   238,   239,   461,    -1,   238,   239,   461,   225,
      40,   657,    41,    -1,   238,   239,   461,   240,   656,    -1,
     238,   239,   461,   240,   656,   225,    40,   657,    41,    -1,
     668,    -1,   318,    -1,   320,    -1,   658,    -1,   657,    33,
     658,    -1,     9,   534,   574,    10,   461,    -1,   660,    -1,
     661,    -1,   669,    51,    52,    -1,   193,   450,   574,   458,
      -1,   529,    40,    41,    -1,   529,    40,   540,    41,    -1,
     664,    -1,   665,    -1,   193,    40,    11,    41,    -1,   193,
      40,    41,   152,   575,    -1,   193,    40,   666,    41,   152,
     575,    -1,   575,    -1,   666,    33,   575,    -1,    40,   577,
      41,    -1,   669,    -1,    55,    -1,    56,    -1,    57,    -1,
     191,    -1,   174,    -1,   153,    -1,    59,    -1,    60,    -1,
      61,    -1,    62,    -1,    63,    -1,   149,    -1,    64,    -1,
     193,    -1,    58,    -1,   122,    -1,    65,    -1,    66,    -1,
      67,    -1,    68,    -1,    69,    -1,    70,    -1,    71,    -1,
      72,    -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,
      77,    -1,    78,    -1,    79,    -1,    80,    -1,    81,    -1,
      82,    -1,    83,    -1,    86,    -1,    87,    -1,    88,    -1,
      89,    -1,    91,    -1,    92,    -1,    93,    -1,    94,    -1,
      95,    -1,    96,    -1,    97,    -1,    98,    -1,    99,    -1,
     100,    -1,   101,    -1,   102,    -1,   103,    -1,   104,    -1,
     108,    -1,   109,    -1,   110,    -1,   111,    -1,   112,    -1,
     113,    -1,   114,    -1,   126,    -1,   131,    -1,   132,    -1,
     133,    -1,   134,    -1,   135,    -1,   137,    -1,   138,    -1,
     139,    -1,   140,    -1,   141,    -1,   142,    -1,   143,    -1,
     144,    -1,   145,    -1,   146,    -1,   147,    -1,   148,    -1,
     150,    -1,   152,    -1,   154,    -1,   155,    -1,   156,    -1,
     157,    -1,   158,    -1,   159,    -1,   160,    -1,   161,    -1,
     162,    -1,   163,    -1,   164,    -1,   165,    -1,   166,    -1,
     167,    -1,   168,    -1,   169,    -1,   170,    -1,   171,    -1,
     172,    -1,   173,    -1,   175,    -1,   176,    -1,   177,    -1,
     178,    -1,   179,    -1,   180,    -1,   181,    -1,   182,    -1,
     183,    -1,   184,    -1,   185,    -1,   187,    -1,   188,    -1,
     189,    -1,   192,    -1,   194,    -1,    84,    -1,    85,    -1,
     195,    -1,   196,    -1,   197,    -1,   198,    -1,   199,    -1,
     200,    -1,   201,    -1,   202,    -1,   203,    -1,   204,    -1,
     205,    -1,   206,    -1,   207,    -1,   208,    -1,   209,    -1,
     210,    -1,   211,    -1,   212,    -1,   213,    -1,   214,    -1,
     215,    -1,   216,    -1,   217,    -1,   218,    -1,   219,    -1,
     220,    -1,   221,    -1,   222,    -1,   223,    -1,   224,    -1,
     225,    -1,   226,    -1,   227,    -1,   228,    -1,   229,    -1,
     230,    -1,   231,    -1,   120,    -1,   121,    -1,   232,    -1,
     233,    -1,   234,    -1,   235,    -1,   236,    -1,   237,    -1,
     238,    -1,   239,    -1,   240,    -1,   241,    -1,   242,    -1,
     243,    -1,   244,    -1,   245,    -1,   246,    -1,   247,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   764,   764,   769,   779,   781,   782,   786,   787,   791,
     799,   799,   802,   811,   822,   860,   863,   869,   905,   936,
     939,   961,   963,   967,   974,   976,   977,   978,   979,   980,
     981,   985,  1004,  1009,  1014,  1021,  1026,  1031,  1040,  1043,
    1049,  1054,  1061,  1061,  1061,  1064,  1077,  1082,  1089,  1094,
    1103,  1106,  1114,  1141,  1145,  1152,  1158,  1163,  1168,  1177,
    1201,  1205,  1212,  1217,  1222,  1227,  1238,  1256,  1260,  1267,
    1272,  1280,  1305,  1308,  1311,  1314,  1317,  1320,  1323,  1326,
    1329,  1332,  1335,  1338,  1341,  1344,  1347,  1350,  1353,  1356,
    1362,  1363,  1364,  1365,  1366,  1378,  1381,  1386,  1389,  1394,
    1399,  1407,  1415,  1426,  1437,  1440,  1447,  1457,  1460,  1465,
    1476,  1479,  1484,  1489,  1497,  1498,  1499,  1500,  1501,  1502,
    1503,  1504,  1505,  1506,  1507,  1508,  1509,  1510,  1511,  1512,
    1513,  1514,  1518,  1536,  1540,  1545,  1554,  1560,  1560,  1563,
    1583,  1587,  1592,  1600,  1605,  1609,  1617,  1620,  1628,  1641,
    1645,  1656,  1659,  1667,  1685,  1689,  1696,  1701,  1706,  1714,
    1720,  1728,  1736,  1743,  1757,  1761,  1775,  1784,  1792,  1795,
    1802,  1837,  1841,  1846,  1852,  1862,  1865,  1873,  1876,  1883,
    1901,  1905,  1912,  1917,  1925,  1943,  1947,  1955,  1977,  1981,
    1988,  1996,  2005,  2013,  2051,  2055,  2062,  2069,  2078,  2087,
    2114,  2118,  2125,  2137,  2164,  2168,  2175,  2185,  2197,  2201,
    2206,  2215,  2228,  2232,  2237,  2246,  2260,  2264,  2277,  2282,
    2294,  2298,  2306,  2319,  2327,  2340,  2347,  2361,  2361,  2364,
    2364,  2386,  2390,  2394,  2412,  2430,  2440,  2454,  2462,  2468,
    2474,  2480,  2492,  2495,  2509,  2510,  2511,  2512,  2518,  2519,
    2520,  2524,  2544,  2561,  2564,  2568,  2580,  2582,  2586,  2590,
    2594,  2598,  2602,  2608,  2614,  2618,  2632,  2633,  2634,  2635,
    2636,  2637,  2638,  2639,  2643,  2643,  2646,  2650,  2658,  2663,
    2672,  2677,  2686,  2746,  2754,  2759,  2768,  2773,  2782,  2792,
    2796,  2804,  2808,  2816,  2832,  2841,  2853,  2862,  2865,  2870,
    2879,  2883,  2891,  2901,  2913,  2920,  2924,  2932,  2937,  2946,
    2954,  2954,  2957,  2961,  2969,  2970,  2979,  2982,  2995,  3008,
    3018,  3018,  3021,  3021,  3025,  3028,  3036,  3041,  3051,  3059,
    3067,  3080,  3095,  3102,  3103,  3104,  3105,  3106,  3107,  3108,
    3109,  3110,  3111,  3112,  3113,  3118,  3162,  3163,  3176,  3183,
    3183,  3186,  3186,  3186,  3191,  3198,  3202,  3206,  3218,  3221,
    3232,  3235,  3245,  3252,  3256,  3260,  3264,  3277,  3285,  3293,
    3298,  3306,  3310,  3316,  3323,  3338,  3355,  3358,  3362,  3370,
    3378,  3382,  3391,  3399,  3410,  3414,  3418,  3429,  3436,  3445,
    3449,  3453,  3461,  3479,  3484,  3494,  3497,  3505,  3513,  3522,
    3527,  3536,  3546,  3550,  3554,  3554,  3558,  3562,  3566,  3570,
    3574,  3578,  3582,  3586,  3590,  3594,  3598,  3602,  3606,  3611,
    3615,  3619,  3624,  3631,  3636,  3640,  3644,  3649,  3653,  3657,
    3661,  3665,  3670,  3674,  3678,  3683,  3687,  3691,  3696,  3713,
    3718,  3723,  3728,  3732,  3737,  3741,  3746,  3752,  3758,  3763,
    3764,  3765,  3773,  3777,  3781,  3789,  3796,  3805,  3805,  3809,
    3829,  3830,  3838,  3839,  3845,  3866,  3870,  3884,  3890,  3903,
    3907,  3907,  3911,  3912,  3921,  3922,  3928,  3929,  3938,  3950,
    3961,  3965,  3969,  3973,  3977,  3981,  3985,  3989,  3997,  4005,
    4022,  4030,  4039,  4043,  4047,  4051,  4055,  4063,  4075,  4080,
    4085,  4092,  4097,  4104,  4111,  4123,  4124,  4128,  4134,  4135,
    4136,  4137,  4138,  4139,  4140,  4141,  4142,  4146,  4146,  4149,
    4149,  4149,  4153,  4160,  4164,  4168,  4176,  4184,  4194,  4204,
    4208,  4231,  4236,  4246,  4247,  4256,  4260,  4269,  4269,  4269,
    4273,  4279,  4288,  4288,  4293,  4296,  4305,  4316,  4316,  4321,
    4325,  4332,  4336,  4347,  4350,  4355,  4366,  4369,  4373,  4387,
    4390,  4395,  4406,  4409,  4413,  4431,  4434,  4439,  4444,  4451,
    4464,  4478,  4481,  4486,  4505,  4506,  4520,  4521,  4522,  4523,
    4524,  4525,  4526,  4531,  4539,  4547,  4551,  4559,  4563,  4572,
    4579,  4583,  4593,  4601,  4609,  4617,  4624,  4634,  4641,  4645,
    4653,  4664,  4667,  4676,  4679,  4689,  4696,  4706,  4707,  4709,
    4711,  4717,  4721,  4725,  4726,  4727,  4731,  4743,  4744,  4745,
    4746,  4747,  4748,  4749,  4750,  4751,  4752,  4757,  4765,  4769,
    4774,  4783,  4791,  4799,  4808,  4812,  4816,  4824,  4828,  4832,
    4840,  4841,  4849,  4857,  4862,  4866,  4870,  4874,  4883,  4884,
    4892,  4899,  4902,  4905,  4908,  4912,  4924,  4940,  4942,  4949,
    4952,  4961,  4973,  4978,  4990,  4995,  4999,  5004,  5009,  5014,
    5015,  5024,  5029,  5033,  5039,  5043,  5051,  5056,  5066,  5069,
    5073,  5077,  5081,  5085,  5093,  5095,  5106,  5112,  5118,  5124,
    5139,  5143,  5147,  5151,  5155,  5159,  5163,  5167,  5175,  5179,
    5183,  5191,  5195,  5203,  5204,  5216,  5217,  5218,  5219,  5220,
    5221,  5222,  5223,  5231,  5235,  5239,  5243,  5252,  5256,  5264,
    5268,  5278,  5282,  5286,  5290,  5294,  5302,  5304,  5311,  5315,
    5319,  5323,  5333,  5337,  5341,  5349,  5351,  5359,  5363,  5370,
    5374,  5382,  5386,  5394,  5402,  5406,  5414,  5421,  5429,  5434,
    5439,  5451,  5455,  5459,  5463,  5467,  5473,  5473,  5478,  5484,
    5484,  5489,  5493,  5503,  5511,  5518,  5523,  5531,  5540,  5552,
    5564,  5577,  5588,  5597,  5609,  5614,  5619,  5625,  5631,  5637,
    5647,  5650,  5658,  5662,  5670,  5674,  5682,  5687,  5696,  5700,
    5704,  5712,  5716,  5724,  5728,  5732,  5736,  5744,  5748,  5752,
    5760,  5765,  5775,  5788,  5788,  5792,  5800,  5811,  5816,  5840,
    5840,  5844,  5852,  5856,  5863,  5868,  5877,  5886,  5886,  5886,
    5886,  5886,  5886,  5886,  5886,  5887,  5887,  5887,  5887,  5887,
    5887,  5888,  5888,  5892,  5892,  5892,  5892,  5892,  5892,  5892,
    5892,  5892,  5892,  5893,  5893,  5893,  5893,  5893,  5893,  5893,
    5894,  5894,  5894,  5894,  5894,  5894,  5894,  5894,  5895,  5895,
    5895,  5895,  5895,  5895,  5895,  5895,  5895,  5895,  5895,  5896,
    5896,  5896,  5896,  5896,  5896,  5896,  5896,  5896,  5896,  5896,
    5896,  5897,  5897,  5897,  5897,  5897,  5897,  5897,  5897,  5897,
    5897,  5898,  5898,  5898,  5898,  5898,  5898,  5898,  5898,  5898,
    5898,  5898,  5898,  5899,  5899,  5899,  5899,  5899,  5899,  5899,
    5899,  5899,  5899,  5899,  5899,  5900,  5900,  5900,  5900,  5900,
    5900,  5900,  5900,  5900,  5901,  5901,  5901,  5901,  5901,  5901,
    5901,  5901,  5902,  5902,  5902,  5902,  5902,  5902,  5902,  5902,
    5902,  5902,  5902,  5903,  5903,  5903,  5903,  5903,  5903,  5903,
    5903,  5903,  5904,  5904,  5904,  5904,  5904,  5904,  5904,  5904,
    5904,  5904,  5905,  5905,  5905,  5905,  5905,  5905,  5905,  5905,
    5905,  5905,  5905,  5906,  5906,  5906,  5906,  5906,  5906,  5906,
    5906,  5906,  5906,  5906,  5907,  5907,  5907,  5907,  5907,  5907,
    5907
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
     575,   576,   577,   578
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   324,   325,   325,   325,   325,   325,   326,   326,   327,
     328,   328,   329,   330,   331,   332,   332,   333,   334,   335,
     335,   336,   336,   336,   337,   337,   337,   337,   337,   337,
     337,   338,   339,   339,   339,   339,   339,   339,   340,   340,
     340,   340,   341,   341,   341,   342,   343,   343,   343,   343,
     344,   344,   345,   346,   346,   346,   346,   346,   346,   347,
     348,   348,   348,   348,   348,   348,   349,   350,   350,   350,
     350,   351,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     353,   353,   353,   353,   353,   354,   354,   355,   356,   356,
     356,   356,   356,   357,   358,   358,   358,   359,   359,   359,
     360,   360,   360,   360,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   362,   363,   363,   363,   364,   365,   365,   366,
     367,   367,   367,   368,   368,   368,   369,   369,   370,   371,
     371,   372,   372,   373,   374,   374,   374,   374,   374,   375,
     376,   377,   378,   379,   380,   380,   381,   382,   383,   383,
     384,   385,   385,   385,   385,   386,   386,   387,   387,   388,
     389,   389,   389,   389,   390,   391,   391,   392,   393,   393,
     393,   394,   395,   396,   397,   397,   397,   397,   397,   398,
     399,   399,   399,   400,   401,   401,   401,   402,   403,   403,
     403,   404,   405,   405,   405,   406,   407,   407,   408,   408,
     409,   409,   409,   410,   410,   411,   411,   412,   412,   413,
     413,   414,   414,   414,   414,   414,   414,   415,   416,   416,
     416,   416,   417,   417,   418,   418,   418,   418,   419,   419,
     419,   420,   421,   422,   423,   424,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   425,   426,   426,   426,   426,
     426,   426,   426,   426,   427,   427,   428,   429,   430,   430,
     431,   431,   432,   433,   434,   434,   435,   435,   436,   437,
     437,   438,   438,   439,   440,   441,   441,   442,   442,   442,
     443,   443,   444,   444,   445,   446,   446,   447,   447,   448,
     449,   449,   450,   450,   451,   451,   452,   452,   452,   452,
     453,   453,   454,   454,   455,   455,   456,   456,   457,   458,
     459,   460,   460,   461,   461,   461,   461,   461,   461,   461,
     461,   461,   461,   461,   461,   462,   463,   463,   463,   464,
     464,   465,   465,   465,   466,   467,   467,   468,   469,   469,
     470,   470,   471,   472,   472,   473,   473,   474,   475,   476,
     476,   477,   477,   478,   478,   479,   480,   480,   480,   481,
     481,   481,   482,   482,   483,   483,   484,   485,   486,   486,
     487,   487,   488,   489,   489,   490,   490,   491,   492,   492,
     493,   493,   494,   494,   495,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   496,
     496,   496,   497,   497,   498,   498,   498,   499,   499,   499,
     499,   499,   500,   500,   500,   501,   501,   501,   502,   502,
     503,   503,   504,   504,   505,   505,   506,   506,   506,   507,
     507,   507,   508,   508,   508,   509,   509,   510,   510,   511,
     512,   512,   513,   513,   513,   513,   514,   515,   515,   515,
     516,   516,   517,   517,   518,   518,   519,   519,   520,   520,
     521,   521,   521,   521,   521,   521,   521,   521,   522,   522,
     523,   523,   524,   524,   524,   524,   524,   525,   526,   526,
     527,   527,   528,   528,   528,   529,   529,   529,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   531,   531,   532,
     532,   532,   533,   534,   535,   535,   536,   537,   538,   539,
     539,   540,   540,   541,   541,   542,   542,   543,   543,   543,
     544,   544,   545,   545,   546,   546,   546,   547,   547,   548,
     548,   549,   549,   550,   550,   550,   551,   551,   551,   552,
     552,   552,   553,   553,   553,   554,   554,   554,   554,   554,
     555,   556,   556,   557,   558,   558,   559,   559,   559,   559,
     559,   559,   559,   560,   561,   562,   562,   563,   563,   564,
     565,   565,   566,   567,   568,   569,   570,   570,   571,   571,
     572,   573,   573,   574,   574,   575,   575,   576,   576,   576,
     576,   577,   577,   577,   577,   577,   578,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   579,   580,   581,   581,
     581,   582,   583,   584,   585,   585,   585,   586,   586,   586,
     587,   587,   588,   589,   590,   590,   590,   590,   591,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   599,   600,
     600,   601,   601,   602,   602,   603,   603,   604,   604,   605,
     605,   606,   606,   606,   607,   607,   608,   608,   609,   609,
     609,   609,   609,   609,   610,   610,   611,   611,   611,   611,
     612,   612,   612,   612,   612,   612,   612,   612,   613,   613,
     613,   614,   614,   615,   615,   616,   616,   616,   616,   616,
     616,   616,   616,   617,   617,   617,   617,   618,   618,   619,
     619,   620,   620,   620,   620,   620,   621,   621,   622,   622,
     622,   622,   623,   623,   623,   624,   624,   625,   625,   626,
     626,   627,   627,   628,   629,   629,   630,   631,   632,   632,
     632,   633,   633,   633,   633,   633,   634,   634,   635,   636,
     636,   637,   637,   638,   639,   640,   640,   641,   642,   643,
     644,   645,   646,   647,   648,   648,   648,   648,   648,   648,
     649,   649,   650,   650,   651,   651,   652,   652,   653,   653,
     653,   654,   654,   655,   655,   655,   655,   656,   656,   656,
     657,   657,   658,   659,   659,   660,   661,   662,   662,   663,
     663,   664,   665,   665,   666,   666,   667,   668,   668,   668,
     668,   668,   668,   668,   668,   668,   668,   668,   668,   668,
     668,   668,   668,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     2,     2,     2,     8,
       0,     1,     3,     2,     6,     0,     2,     8,     1,     4,
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
       3,     2,     0,     4,     2,     2,     1,     1,     3,     4,
       3,     2,     2,     2,     2,     6,     0,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     3,     3,
       5,     5,     4,     3,     3,     3,     5,     5,     5,     1,
       1,     1,     1,     4,     3,     5,     4,     0,     2,     3,
       3,     3,     7,     4,     6,     2,     1,     3,     3,     7,
       1,     1,     2,     3,     1,     1,     0,     2,     2,     2,
       1,     1,     1,     1,     0,     2,     3,     1,     3,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     2,     1,
       1,     1,     1,     1,     2,     3,     1,     7,     0,     3,
       0,     3,     2,     3,     1,     5,     5,     2,     3,     3,
       4,     3,     1,     3,     5,     1,     0,     1,     1,     0,
       2,     2,     4,     4,     3,     1,     5,     6,     2,     1,
       5,     3,     3,     3,     3,     0,     3,     8,     3,     1,
       3,     1,     3,     3,     0,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     4,
       5,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     4,     1,
       4,     1,     4,     1,     4,     1,     2,     2,     1,     1,
       1,     1,     4,     5,     5,     3,     4,     1,     2,     4,
       1,     2,     1,     2,     2,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     4,     1,     4,     2,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     1,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     2,     1,     4,     4,     3,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       5,    10,     1,     1,     0,     7,     7,     0,     1,     3,
       3,     3,     3,     0,     2,     2,     0,     2,     2,     0,
       2,     2,     0,     2,     2,     0,     2,     2,     2,     2,
       3,     0,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     1,     3,     2,     3,     3,
       1,     3,     3,     4,     4,     3,     1,     3,     2,     3,
       2,     0,     1,     0,     2,     2,     3,     0,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     4,
       4,     3,     3,     3,     3,     4,     4,     3,     4,     6,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   256,     0,     0,     0,   316,     0,     3,     0,
     502,     0,     0,     0,   571,     0,   547,     0,     0,   466,
     526,   497,     0,   768,   769,   770,   818,   819,   820,   832,
     824,   825,   826,   827,   828,   830,   834,   835,   836,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
     848,   849,   850,   851,   852,   934,   935,   853,   854,   855,
     856,   857,   858,   859,   860,   861,   862,   863,   864,   865,
     866,   867,   868,   869,   870,   871,   872,   873,   874,   875,
     876,   877,   973,   974,   833,   771,   878,   503,   504,   879,
     880,   881,   882,   883,   884,   885,   886,   887,   888,   889,
     890,   891,   892,   893,   894,   895,   829,   896,   897,   823,
     898,   899,   900,   901,   902,   903,   904,   905,   906,   907,
     908,   909,   910,   911,   912,   913,   914,   915,   916,   917,
     822,   918,   919,   920,   921,   922,   923,   924,   925,   926,
     927,   928,   929,   930,   931,   821,   932,   831,   933,   936,
     937,   938,   939,   940,   941,   942,   943,   944,   945,   946,
     947,   948,   949,   950,   951,   952,   953,   954,   955,   956,
     957,   958,   959,   960,   961,   962,   963,   964,   965,   966,
     967,   968,   969,   970,   971,   972,   975,   976,   977,   978,
     979,   980,   981,   982,   983,   984,   985,   986,   987,   988,
     989,   990,     2,   330,   332,   333,     0,   346,   349,   350,
     334,   335,   336,   342,   399,   401,   418,   421,   423,   426,
     431,   434,   437,   439,   441,   443,   445,   448,   449,   451,
       0,   457,   450,   462,   465,   469,   470,   472,   473,   474,
       0,   479,   476,     0,   491,   489,   499,   501,   471,   505,
     508,   517,   509,   510,   511,   514,   515,   512,   513,   535,
     537,   538,   539,   536,   576,   577,   578,   579,   580,   581,
     582,   498,   626,   617,   624,   623,   625,   622,   619,   621,
     618,   620,   337,     0,   338,     0,   340,   339,   341,   519,
     520,   521,   518,   500,   343,   344,   516,   803,   804,   507,
     773,   817,     0,     0,     7,   256,   246,   247,   256,     0,
      21,   104,     4,    18,    20,   316,     8,     0,     5,    15,
       6,     0,     1,   818,   819,   820,   832,   824,   825,   826,
     827,   828,   840,   841,   842,   843,   844,   845,   846,   847,
     848,   849,   850,   851,   869,   973,   974,   880,   882,   893,
     894,   829,   823,   911,   917,   821,   831,   959,   962,   968,
     970,   980,   981,   522,   523,   817,   818,   819,   825,   828,
     821,   488,   542,   543,   544,     0,   572,     0,   464,   548,
       0,   447,   446,   525,     0,   482,     0,     0,   590,     0,
       0,     0,     0,     0,     0,     0,     0,   596,     0,     0,
       0,     0,     0,   480,   481,   483,   484,   485,   486,   492,
     493,   494,   495,   496,     0,     0,     0,   766,     0,     0,
       0,   354,   356,     0,     0,   362,   364,     0,     0,   385,
       0,     0,     0,     0,     0,     0,   487,     0,     0,     0,
     585,     0,     0,   603,     0,     0,   756,   757,     0,   759,
     760,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   351,   348,   352,   353,   347,     0,     0,     0,     0,
       0,     0,     0,     0,   404,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     458,   463,     0,     0,     0,     0,   478,   490,     0,     0,
       0,   758,     0,     0,     0,     0,     0,     0,     0,   244,
     245,   254,   923,   930,     0,     0,     0,   266,     0,     0,
       0,   270,   271,   273,   267,   268,   274,   275,     0,   269,
       0,   253,   272,     0,    24,   110,     0,     0,    13,   319,
     320,   321,   322,   323,   324,   317,   318,   547,     0,   574,
     573,   570,     0,   524,   641,   637,     0,   640,   652,     0,
       0,   589,   632,     0,   628,     0,     0,     0,     0,   633,
     627,   634,     0,     0,   772,     0,     0,   595,     0,   643,
       0,   651,   653,   631,     0,     0,     0,     0,     0,     0,
       0,   603,     0,   603,     0,     0,   603,     0,     0,     0,
       0,     0,     0,     0,     0,   592,   649,   644,     0,   648,
       0,   584,     0,   312,     0,   327,     0,     0,     0,     0,
       0,   791,   793,   331,   345,   367,     0,     0,     0,   398,
     400,   403,   406,   407,   408,   416,   417,     0,   402,   409,
     410,   411,   412,   413,   414,   415,     0,   424,   425,   422,
     427,   429,   428,   430,   432,   433,   435,   436,     0,     0,
       0,     0,   455,     0,   468,   467,     0,     0,     0,   534,
     807,   533,     0,   532,     0,     0,     0,     0,   529,     0,
     805,   252,   251,   276,     0,   248,   250,     0,   316,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   784,     0,     0,     0,   257,   258,   259,   260,   264,
     265,   261,   262,   263,    22,    23,     0,   106,   107,     0,
     310,   311,     0,     0,   316,    16,     0,    12,   548,     0,
     575,     0,   460,   459,     0,   638,   591,   587,     0,   594,
     629,   630,   636,   635,   597,   598,     0,   642,   650,   593,
     583,     0,   765,     0,   527,   528,   358,   355,     0,     0,
     363,     0,   384,   382,   383,     0,     0,   452,     0,     0,
       0,   645,   586,   603,     0,   313,     0,   830,   822,   831,
     604,   607,   611,   613,   616,   614,   809,   810,   615,     0,
     806,     0,     0,     0,     0,     0,     0,   368,   375,   369,
     372,   376,     0,   405,     0,     0,     0,     0,   678,   419,
     659,   662,   664,   666,   668,   669,   684,   673,   438,   440,
     442,   601,   444,   456,   475,   477,   506,     0,   808,     0,
       0,   755,   754,   753,   530,   249,     0,   278,   279,     0,
     283,   655,   294,     0,     0,   307,   308,   284,   285,     0,
       0,     0,     0,   289,   290,     0,     0,   749,   748,   750,
       0,     0,     0,     0,     0,     0,     0,   297,     0,   297,
      19,    32,    60,    46,    67,    72,    98,    25,    50,    26,
      50,    27,   110,    28,   110,    29,     0,    30,     0,   105,
     103,   133,     0,   140,   149,     0,     0,     0,   180,   185,
     188,   192,   194,   200,   204,   171,   208,   212,   216,   137,
     138,   112,   113,   114,   110,   115,   111,   116,   146,   117,
     151,   118,     0,   120,   110,   119,   128,   175,   121,   110,
     122,   110,   123,   110,   124,   110,   125,   110,   126,   110,
     127,   110,   129,     0,   130,   110,   131,   110,     0,     0,
       0,   325,   547,   547,   565,   540,   461,     0,   654,   588,
     599,   767,     0,     0,   360,     0,     0,     0,   395,     0,
     389,     0,     0,   453,   454,     0,   328,   326,     0,     0,
       0,     0,   608,   610,   609,   605,     0,   762,     0,   763,
       0,     0,   798,   799,   795,   797,     0,   377,   378,   379,
     370,     0,     0,   667,     0,   679,   681,   683,   674,     0,
     420,     0,   657,     0,     0,   670,     0,   671,   602,   600,
     531,     0,     0,     0,     0,     0,   719,     0,     0,   744,
       0,     0,   715,   716,     0,   703,   709,   710,   708,   707,
     711,   705,   706,   712,     0,   603,     0,     0,   293,     0,
       0,     0,   282,   784,   788,   789,   790,   785,   786,     0,
       0,     0,     0,   297,     0,   296,     0,   303,    99,   100,
      38,    34,     0,     0,     0,   110,    47,    49,     0,   110,
      61,    65,    64,     0,     0,     0,    68,     0,     0,     0,
      71,    89,    73,    77,    78,    79,    83,    84,    86,    75,
      80,    81,    82,    85,    87,     0,     0,     0,    97,   109,
     108,     0,     0,     0,   168,   164,   110,     0,     0,   107,
       0,     0,     0,     0,   150,     0,   159,     0,   110,     0,
     107,   107,   177,   181,     0,     0,     0,     0,     0,   107,
       0,     0,     0,   107,     0,   107,   107,     0,   107,     0,
       0,   107,   107,     0,   207,   210,     0,   213,   214,     0,
       0,     0,   324,     0,     0,     0,     0,     0,   639,   764,
       0,     0,     0,   365,   366,   386,     0,     0,     0,   387,
     388,     0,     0,     0,     0,   646,   816,   606,   612,     0,
       0,   814,     0,   329,     0,     0,     0,   800,     0,     0,
     371,     0,   373,   672,   678,   676,     0,   680,   682,     0,
     661,     0,     0,   690,     0,     0,     0,     0,     0,   656,
     660,   663,     0,     0,     0,     0,     0,   751,   752,   255,
     720,   725,     0,   745,   718,   717,     0,     0,   722,   721,
       0,   714,   713,     0,   743,   704,     0,   277,   286,   287,
     280,   281,   291,   292,   288,     0,   774,   780,     0,     0,
       0,   224,   223,   818,   840,   975,   976,     0,   219,     0,
     222,   220,   231,   242,   238,   324,   300,   301,   295,   298,
       0,     0,   101,   102,    36,    33,    37,    42,    43,    44,
      35,    53,    51,   110,     0,    48,     0,    63,    62,    59,
      70,    69,    66,    93,    94,    90,    91,    92,    74,    95,
      76,    88,   136,   160,     0,   110,   165,     0,     0,   162,
     134,   135,   132,   143,   144,   145,   142,   141,   139,   154,
     147,   110,   148,   152,   161,     0,   172,   173,   174,   110,
       0,   183,   182,   110,   186,   184,   189,   190,   187,   191,
     195,   197,   198,   196,   193,   201,   202,   199,   205,   206,
     203,   209,   211,   217,   215,     0,    14,     0,   547,   547,
       0,   569,   568,   567,   566,   359,     0,     0,     0,   393,
       0,     0,   394,   392,     0,   647,   811,     0,     0,     0,
     761,   603,     0,   792,   794,     0,   380,   381,     0,   675,
     677,   747,   697,   695,   696,   658,     0,     0,   701,   702,
     693,   694,   665,     0,     0,   686,     0,   685,   733,   726,
     726,   728,     0,     0,   735,   735,   746,     0,   306,   304,
     782,     0,     0,     0,     0,   787,   241,     0,     0,     0,
       0,     0,   778,   780,   232,     0,     0,     0,     0,   237,
       0,   299,   297,    39,    40,    41,    54,    58,    57,     0,
       0,     0,    31,    45,    96,   167,     0,   163,   166,   155,
     158,     0,     0,     0,   176,     0,   170,   179,    10,   324,
       0,     0,   547,   361,   357,   396,     0,   391,   397,   812,
     815,     0,     0,   801,     0,   374,   698,   699,   700,   691,
     692,   688,   687,     0,     0,     0,     0,     0,     0,   739,
     737,   734,   732,   305,   783,   781,   775,     0,   240,   239,
       0,   228,   227,     0,   218,     0,   234,   233,   236,   235,
       0,   315,   309,   314,   302,    56,    55,    52,   169,   157,
     156,   153,   178,     9,    11,     0,   553,   559,   545,   556,
     562,   546,     0,     0,   813,     0,   796,   689,     0,   724,
     723,   729,   730,     0,   738,     0,     0,   736,   776,   780,
     225,     0,   779,     0,     0,     0,     0,     0,     0,   541,
     390,   802,   727,     0,   740,   741,   742,     0,     0,   229,
     230,   243,    17,   549,   555,   554,   550,   561,   560,   551,
     558,   557,   552,   564,   563,   731,   777,   226
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,   316,  1553,   320,   318,   319,   548,   735,
     312,   313,   544,   726,   887,   888,  1294,  1300,   889,   890,
    1085,  1302,  1303,   891,   892,   893,   894,   895,   896,  1318,
    1320,   897,   898,   921,   545,   899,   729,   922,   923,   924,
     925,   926,   927,   928,  1336,  1133,   929,   930,  1135,  1340,
    1341,   931,   932,   933,   934,   935,  1124,  1125,  1126,  1327,
     936,   937,  1142,  1350,   938,   939,   940,   941,   942,   943,
     944,   945,   946,   947,   948,   949,   950,   951,   952,   953,
     954,   955,   956,   957,  1277,  1278,  1279,  1280,  1530,  1598,
    1281,  1282,  1283,  1459,   304,   305,   516,   517,   306,   307,
     308,   309,   524,   525,   695,   526,   527,   528,   529,   530,
     531,   532,   533,   865,  1264,   534,   535,   536,  1075,   876,
     537,   538,  1439,   539,   540,   732,   443,  1542,   712,   555,
     556,   737,   624,   625,  1120,   202,   203,   204,   205,   206,
     207,   462,   208,   421,   422,   974,  1182,   209,   425,   426,
     463,   464,   465,   809,   810,   811,  1009,  1212,   210,   428,
     429,   211,   979,  1189,   980,   981,  1187,   212,   213,   214,
     215,   647,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   743,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     363,   253,   254,   255,   256,   257,   682,   683,   258,   259,
     260,   374,   557,   380,  1558,  1561,  1585,  1587,  1586,  1588,
    1177,   261,   377,   262,   560,   263,   264,   265,   441,   571,
     266,   389,   267,   268,   269,   270,   398,   587,   830,  1029,
     627,   790,   995,   791,   792,   271,   272,   273,   274,   275,
     276,   277,   278,   566,   279,   588,   280,   618,   281,   590,
     567,   591,   967,   852,   819,  1229,  1022,   820,   821,   822,
     823,   824,   825,   826,   827,  1018,  1027,  1236,  1230,  1509,
    1420,   850,  1045,  1046,  1047,  1048,  1049,  1514,  1249,  1050,
    1521,  1435,  1518,  1577,  1051,  1052,  1053,  1020,   542,   282,
     283,   284,   285,   286,   287,   288,   416,   417,   289,   290,
     291,   292,   583,   293,   543,  1443,  1267,   872,  1067,  1068,
     294,   295,  1004,  1206,  1207,   296,   297,   298,   299,   795,
     796,   797,  1202,   798,   300,   301
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1413
static const yytype_int16 yypact[] =
{
     803,  3406,   419,  -149,    90,   -49, -1413,   202, -1413,  6361,
   -1413,  4834,   643,   203,   255,  4123,   322,  3645,  3645, -1413,
   -1413, -1413,  2211, -1413, -1413, -1413,   126,   560,   399,   458,
     492,   235,   497,   519,   600, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413,   571,   585,   615,   640,   666,   685,   730,   742,
     751,   755,   757,   614, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413,   657, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413,   694,   738, -1413, -1413, -1413, -1413, -1413, -1413,
     779, -1413,    47, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413,   787,   787, -1413,   759, -1413, -1413,   764,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413,   276, -1413, -1413, -1413, -1413, -1413,    76,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413,   248, -1413,   793, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413,    42, -1413, -1413,    -6, -1413, -1413, -1413, -1413,
   -1413,   408, -1413,     6, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413,   587,   539, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413,   802, -1413, -1413,   575, -1413, -1413, -1413,
   -1413, -1413, -1413,   695,   711, -1413,   942,   681,    50,    46,
      51,   517, -1413,   740,   715,   743,   741, -1413, -1413, -1413,
     162, -1413, -1413,  4123,   520, -1413, -1413,   892,   899, -1413,
    4834, -1413, -1413,  4834, -1413, -1413, -1413, -1413,   118, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413,  3406, -1413,  3406, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413,   283,   237,   750, -1413,   734, -1413, -1413, -1413,  3884,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413,   752, -1413, -1413,
   -1413,    22, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413,   887,   889,   893,   894,
     896, -1413, -1413, -1413, -1413,   678, -1413,   910,   520, -1413,
    6361, -1413, -1413, -1413,   581, -1413,  5308,  3406, -1413,   895,
     900,  3406,    63,   903,   904,  6168,  3406, -1413,   901,  6361,
    6361,   907,  3406, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413,  3406,  6361,    26, -1413,  3406,  3406,
    6361,   918, -1413,  6361,   943,   920, -1413,  6361,    56, -1413,
      85,  3406,  3406,  3406,   906,   919, -1413,   895,  5545,  3406,
   -1413,   895,   119,   816,  3406,   810, -1413, -1413,  3406, -1413,
   -1413,  6361,  3406,  3406,  3406,   779,    47,  3406,   962,   835,
     837, -1413, -1413, -1413, -1413, -1413,  3645,  3645,  3645,  3645,
    3645,  3645,  3645,  3645, -1413,  3645,  3645,  3645,  3645,  3645,
    3645,  3645,  3645,   913,  3645,  3645,  3645,  3645,  3645,  3645,
    3645,  3645,  3645,  3645,  3645,   818,   828,   829,   831,  2450,
   -1413,   520,  4123,  4123,  3406,  3406, -1413, -1413,  3406,  1733,
     -55, -1413,  1972,   932,   860,   861,    20,   937,  6361, -1413,
   -1413,   461,   661,   605,   937,   937,   937, -1413,   937,   937,
     937, -1413, -1413, -1413, -1413, -1413, -1413, -1413,   937, -1413,
     937, -1413, -1413,   937,   215,   488,   427,  6361,   808, -1413,
   -1413, -1413, -1413, -1413,   839, -1413, -1413,   888,   883, -1413,
   -1413, -1413,   211, -1413, -1413, -1413,   620, -1413, -1413,   392,
    2689, -1413, -1413,   397, -1413,   519,   896,   951,   953, -1413,
   -1413, -1413,   954,   955, -1413,   486,  2928, -1413,   956, -1413,
     958, -1413, -1413, -1413,   511,   512,   990,   657,  3406,   514,
     516,   816,   779,   816,  6361,    47,   816,   787,  3406,  3406,
     624,   648,   534,  3406,  3406, -1413, -1413, -1413,   653, -1413,
     535, -1413,  6361, -1413,   654, -1413,  5753,   960,   785,   944,
     859,   788,    37, -1413, -1413, -1413,  6361,  3406,   877,   711,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413,  3645, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413,    82,    46,    46,   778,
      51,    51,    51,    51,   517,   517, -1413, -1413,  5753,  5753,
    6361,  6361, -1413,   544, -1413, -1413,   411,   454,   536, -1413,
   -1413, -1413,   682, -1413,   496,  3406,  3406,  3406, -1413,   688,
   -1413, -1413, -1413, -1413,   937, -1413, -1413,   987,   706,   605,
     644,   946,   908,  1022,  6361,   647,   705,   323,   409,  6361,
     262,   410,   427,   160,   -33, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413,   339, -1413, -1413,   753,
   -1413, -1413,  6544,   995, -1413, -1413,  5753, -1413,   708,   106,
   -1413,   905, -1413, -1413,  6361, -1413, -1413, -1413,   545, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413,   562, -1413, -1413, -1413,
   -1413,  3406, -1413,   911, -1413, -1413,   923, -1413,  1024,  1028,
   -1413,   912, -1413, -1413, -1413,   891,   885, -1413,   568,   574,
    6361, -1413, -1413,   816,  1034, -1413,  5961,  1004,  1006,  1007,
   -1413,   478, -1413, -1413, -1413, -1413, -1413, -1413, -1413,  3406,
   -1413,  3406,  3406,  3406,  1008,  1016,  1464, -1413, -1413,  1025,
   -1413,   687,  3406, -1413,    82,  3406,   426,   578,   510,   969,
     819,   820,   978, -1413, -1413,   946,   864, -1413, -1413, -1413,
   -1413,  1041, -1413, -1413, -1413, -1413, -1413,  3167, -1413,   841,
     843, -1413, -1413, -1413, -1413, -1413,   908, -1413, -1413,   448,
     981, -1413, -1413,  6361,  1030, -1413, -1413, -1413, -1413,   933,
     908,   915,   916, -1413, -1413,  1044,   961, -1413, -1413, -1413,
    6361,   -67,   844,  6544,  6361,   902,   908,   964,  6361,   964,
   -1413, -1413, -1413, -1413, -1413, -1413,   552, -1413,   398, -1413,
     251, -1413,   182, -1413,   208, -1413,  1126, -1413,   832,    57,
   -1413, -1413,   531, -1413, -1413,   780,   825,   786, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413,   270, -1413, -1413, -1413,    81, -1413,
     814, -1413,   842, -1413, -1413, -1413, -1413,   112, -1413,   225,
   -1413,   792, -1413,   -21, -1413, -1413, -1413,    83, -1413,   102,
   -1413,     7, -1413,    88, -1413,   556, -1413,   795,   793,   908,
     427, -1413,   322,   322, -1413, -1413, -1413,  1058, -1413, -1413,
   -1413, -1413,  3406,  1092,   909,  3406,  3406,  3406,  1093,   188,
   -1413,    62,  3406, -1413, -1413,   430, -1413, -1413,  1063,  1066,
    1067,  5071, -1413, -1413, -1413, -1413,   594, -1413,   886, -1413,
    1100,  1100, -1413, -1413,   890, -1413,  3406, -1413, -1413,   971,
    1025,  1073,   596, -1413,    28,  1019,   914, -1413, -1413,  1023,
   -1413,    82,   298,    82,   985,   981,    52, -1413, -1413, -1413,
   -1413,  3406,  3406,   937,   645,   769, -1413,    18,   917, -1413,
     771,  6361, -1413, -1413,   996, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413,   448,   816,   908,   716, -1413,   908,
     908,   684, -1413,     3, -1413, -1413, -1413,  1087, -1413,  4360,
     793,  1085,   963,   964,   908,  1091,  1089,  1091,   840,   845,
   -1413, -1413,  4360,  5753,   728,   874, -1413, -1413,  5753,   874,
   -1413, -1413, -1413,  5753,  3406,   975, -1413,  5753,  3406,  1047,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413,    -2,  1012,  1012, -1413, -1413,
   -1413,   897,  3406,   830,   604, -1413, -1413,  3406,  3406, -1413,
    1103,   -74,  3406,  -104, -1413,  -101, -1413,  6545, -1413,  3406,
   -1413, -1413,   866, -1413,  5753,  3406,  6573,  3406,  6601, -1413,
    3406,  6629,  6657, -1413,  3406, -1413, -1413,  6685, -1413,  3406,
    6713, -1413, -1413,  6741, -1413, -1413,  3406, -1413, -1413,  6769,
    3406,  6797,   839,   937,  6544,  1096,  1097,   325, -1413, -1413,
    6361,  1132,  1009, -1413, -1413, -1413,  6361,  5753,    66, -1413,
   -1413,  5753,  3406,   991,  1106, -1413, -1413, -1413, -1413,  1108,
     998, -1413,   689, -1413,  3406,  6361,   692, -1413,   699,  1111,
   -1413,   731,  1010, -1413,   510, -1413,  1104, -1413, -1413,  3645,
     820,  1056,   781, -1413,  3645,  3645,    52,   677,   677, -1413,
   -1413,   978,    82,   155,  3645,  3645,   957, -1413, -1413, -1413,
   -1413, -1413,   941, -1413, -1413, -1413,    12,   908, -1413, -1413,
      29, -1413, -1413,  1033, -1413, -1413,    39, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413,   124, -1413,  1013,   924,   -67,
    4834, -1413,    38,   347,  1142,  1122,  1124,   310, -1413,  4597,
     662,   733, -1413, -1413, -1413,   839, -1413, -1413,  1091, -1413,
     908,   908, -1413, -1413,   -39,  1154, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413,   201,  6825, -1413,  6853, -1413,   802, -1413,
   -1413,   802, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
    1045,  1045, -1413,   802,  3406, -1413, -1413,   921,  6881,   802,
     802,    57, -1413, -1413, -1413, -1413, -1413,   802, -1413, -1413,
   -1413,   167, -1413, -1413, -1413,  6909,   802,    57,    57, -1413,
     922, -1413,   802, -1413,   802, -1413,    57,   802, -1413, -1413,
      57,   802,    57,    57, -1413,    57,   802, -1413,    57,    57,
   -1413,   802, -1413,   802, -1413,   960, -1413,   793,   322,   322,
     643, -1413, -1413, -1413, -1413, -1413,  6361,  3406,  1020, -1413,
    6361,  3406, -1413, -1413,  3406, -1413, -1413,  5753,  5753,  1026,
   -1413,   816,  1100, -1413, -1413,  1100, -1413, -1413,   908, -1413,
   -1413,    51, -1413, -1413, -1413, -1413,    59,   576, -1413, -1413,
   -1413, -1413, -1413,  3645,  3645,   778,    64, -1413, -1413, -1413,
   -1413,   190,   996,   908, -1413, -1413, -1413,  3406, -1413, -1413,
   -1413,   714,  5753,   960,  4360, -1413, -1413,  4834,  4834,    78,
     996,  4360, -1413,  1013, -1413,  4597,  4597,  4597,  4597,  1147,
      31, -1413,   964, -1413, -1413, -1413, -1413, -1413, -1413,  5753,
    3406,  6937, -1413, -1413, -1413,   802,  6965, -1413, -1413, -1413,
   -1413,  5753,  3406,  6993, -1413,  7021, -1413,  1462,   937,   839,
     291,   476,   322, -1413, -1413, -1413,  1040, -1413, -1413, -1413,
   -1413,  5753,  1164, -1413,   721, -1413, -1413, -1413, -1413, -1413,
   -1413,   778,   778,  3645,   723,   726,   996,   970,   727, -1413,
   -1413,   473,   473, -1413, -1413, -1413, -1413,   310, -1413, -1413,
    1134, -1413, -1413,  1144, -1413,   960, -1413, -1413, -1413, -1413,
    3406, -1413, -1413, -1413,  1091, -1413,   802, -1413, -1413, -1413,
     802, -1413, -1413, -1413, -1413,   960, -1413, -1413, -1413, -1413,
   -1413, -1413,  1155,  3406, -1413,  3406, -1413,   778,  1068, -1413,
   -1413,    52, -1413,   996, -1413,    48,    48, -1413, -1413,  1013,
   -1413,   103, -1413,   609,   937,   104,    43,   125,    60, -1413,
   -1413, -1413, -1413,   974, -1413, -1413, -1413,   960,  1143, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
     293, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
      70, -1413, -1413,  1186, -1413,  -465,  -828, -1413, -1413, -1413,
   -1413,   289, -1413, -1413, -1413, -1413, -1413, -1413, -1413,    58,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413,    68, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1069,  -256, -1413, -1413, -1413, -1413,
   -1413, -1129, -1413, -1413, -1413, -1413, -1413,   680,   898,   925,
   -1413,   938, -1413, -1413,  -510, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,  -874, -1413,
   -1413, -1413, -1413, -1413, -1413,  -667,  -320, -1413,     0, -1413,
   -1413, -1143,   -68,   414,  -623,   945,   -22,  -231, -1413, -1413,
     993, -1413, -1413, -1413,   598, -1413, -1413, -1413, -1413,   597,
   -1413, -1413, -1413,   389,   199, -1413, -1413, -1413, -1413,  1105,
     601, -1413, -1413, -1413,   228, -1413, -1413, -1413, -1413,   744,
     745, -1413,  -290,   -13,  -477,   386,  -466,   405,   406, -1413,
   -1413, -1413,   884, -1413, -1413, -1413,  -585,  -219, -1413, -1413,
   -1413,    27,   412, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413,    15, -1413, -1413, -1413, -1413,  -653, -1413, -1412,
    -388, -1413, -1413, -1413, -1413, -1413,   702,   378, -1413,    40,
   -1413,  -164, -1413,  -555, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,   264,
   -1413, -1413, -1413, -1413, -1413, -1413,  1090, -1413,   547, -1413,
    -565,  -531, -1413,   434,   246,  -559, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413,   833, -1413,   855, -1413,
     822,   784,   444,  -611,  -767, -1413, -1413, -1413,   212,   209,
      19,   436, -1413, -1413, -1413,    41, -1413, -1195, -1413,  -161,
      25,   432,   204, -1413, -1413, -1413, -1413,  -171, -1221, -1413,
    -175,  -657, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413,   664, -1413, -1413,
   -1413,  -998,  -474,  -162, -1413, -1381, -1243,   200, -1413,    -7,
   -1413, -1413, -1413,  -989,  -138, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413,     8,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -317
static const yytype_int16 yytable[] =
{
     384,   554,   739,   818,   800,  1077,   321,   696,   365,   659,
     365,   500,  1208,  1295,   715,   716,   717,   364,   718,   719,
     720,   660,   661,   662,   663,  1430,   371,   596,   721,  1375,
     722,  1417,   601,   723,  1453,   603,   766,  1531,   768,   606,
     862,   771,   378,  1265,   697,   873,  1254,  1011,  1333,  1437,
    -221,   799,   510,   446,   511,  1064,   423,   487,  1246,   597,
      16,  1313,   442,   491,  1095,   449,  1099,   793,   814,  1432,
     693,   817,  1535,   733,  1191,  1390,   815,  1215,  -221,   799,
      23,    24,    25,  1463,   484,   485,  -221,     9,  1432,   607,
    1606,   799,   851,   484,   485,   436,  1130,   684,   484,   485,
     310,   444,   877,   879,   574,   799,  1137,  1612,   799,   793,
     793,  1146,     9,  1148,    16,  1151,   488,  1152,   607,  1157,
    1314,  1160,   814,  1163,   396,   575,  1247,  1169,   622,  1171,
     815,   964,  1247,   622,    23,    24,    25,   828,   829,   508,
     878,   317,  1460,  1433,  1338,   385,   445,  1342,   965,  1603,
    1454,  1339,   799,    85,  1339,    23,    24,    25,   509,  1607,
     623,   818,  1433,   818,   311,  1440,   386,   685,   686,  1600,
    1609,  1233,  1119,   799,   387,   687,  1613,   793,   641,   642,
     643,   644,   645,   646,   845,   648,   649,   650,   651,   652,
     653,   654,   655,  1192,    16,  1429,   514,  1391,  1597,  1288,
     397,  1248,   322,    85,   608,   961,  1541,    85,   489,   490,
     499,   486,  1434,   628,  1438,   492,   769,   630,   986,  1604,
     447,   632,   633,   634,   568,  1513,   635,   793,    85,   817,
     854,   817,   450,   609,   783,  1033,  1517,   568,   592,   365,
    1610,   424,   365,   871,  1334,   598,  1335,  1216,   807,  1058,
     388,  1065,  1066,   549,   576,   506,  1423,  1304,   507,  1149,
     501,  1306,   805,  1234,  1235,  1073,   550,   551,   552,   553,
     315,   816,  1506,  1507,  1508,   395,   592,   806,   681,  1464,
    1465,   681,  1150,   396,  1579,   851,  -221,  1161,   438,  -221,
    -221,  -221,  -221,  1174,  -221,  -221,   439,  -221,  1328,  1424,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  1233,
    1345,  -221,  -221,  -221,  1162,   546,   741,  -221,  -221,  1315,
    1316,  1317,  1451,   512,   433,   816,  1536,  1537,  1538,  1539,
     867,   868,   375,   874,   513,  1556,  1164,  1557,   978,  -221,
    -221,   742,  -221,   875,   434,   435,  1555,  1592,  1173,    12,
    1265,  -221,    13,    14,  -221,  -221,  1380,   813,   799,   397,
    1131,   818,   376,  1153,   869,   569,  1447,   763,   818,   573,
     818,  1188,   440,   799,   585,  1527,  1593,   773,   774,   365,
     594,  1165,  1158,  1138,  1132,   365,  1154,   386,   562,  1155,
    1156,  1166,   595,  1221,   365,  1516,   599,   600,   365,   365,
    1071,  1234,  1235,   584,  1076,  1159,   808,  1175,  1176,   610,
     611,   612,  1222,   514,   365,  1139,  1504,   620,  1223,   365,
    1140,  1141,   365,   364,   515,   453,   365,   379,   364,   817,
     453,   364,   793,   834,  1519,   364,   817,   365,   817,   392,
    1266,   746,  1381,  1382,   453,  1257,   749,  1479,  1260,  1261,
     365,  1532,  1533,  1194,   841,   842,   843,  1480,    16,   631,
    1201,   859,  1090,  1289,   794,  1055,   814,   448,   860,  1481,
    1482,  1195,  1091,  1092,   815,  1471,   835,   673,    23,    24,
      25,  1466,   676,   677,  1093,  1094,   678,   453,  1096,   992,
    1256,  1467,  1468,   724,  1224,  1225,  1226,  1476,   393,  1227,
    1228,   993,   725,  1469,  1470,  1143,   794,   794,   794,   794,
    1097,  1098,   994,  1483,   861,   730,   731,   365,  1571,   453,
    1559,  1485,  1560,  1239,   793,  1487,   584,  1144,  1145,   793,
     971,  1086,   394,  1034,   793,   754,  1035,   399,   793,  1036,
    1037,  1038,  1039,  1087,   453,   453,   365,   453,   748,   453,
     502,    85,  1296,  1088,  1383,   584,   503,  1305,   836,   400,
     759,   760,  1307,   764,   756,   765,  1310,   453,   453,   453,
     997,   998,   999,  1128,   794,  1594,  1129,   453,   453,   818,
     863,   808,   968,   777,   782,   793,   864,   880,  1544,   881,
     403,   778,   779,   833,   969,   453,   882,   883,   500,  1040,
     390,   453,   884,   365,   404,   302,   681,   453,   391,   303,
      16,   970,   364,  1351,   453,   885,   886,   983,   968,   730,
     731,   365,   563,   984,   794,   365,  1014,   453,   793,   453,
     364,  1601,   793,  1041,   405,   365,  1431,  1575,  1172,  1576,
     401,   698,   453,  1203,   364,  1214,   870,   817,   402,   699,
     871,  1042,  1043,   744,  1452,  1044,  1389,   453,   549,   406,
    1392,   745,   414,  1376,  1331,   775,   415,   365,   365,   365,
     365,   550,   551,   552,   553,  1347,  1348,  1080,  1081,  1461,
    1462,   453,   493,   494,  1356,   407,   780,   784,  1360,   776,
    1362,  1363,  1455,  1365,   781,   785,  1368,  1369,  1456,  1082,
    1083,   615,  1084,   365,   408,   621,   454,   455,   365,   456,
     457,   458,   584,   459,   460,   837,   839,   866,  1015,  1016,
    1017,   837,  1398,   838,   840,  1402,   700,   701,   702,   844,
    1399,   958,  1402,  1403,   960,   365,  1240,  1241,  1242,  1243,
    1404,  1179,   418,   365,  1183,  1184,  1185,   784,  1416,   409,
    1285,  1193,  1488,  1411,  1402,  1524,  1568,  1425,  1426,  1568,
    1573,   410,  1566,  1457,  1569,   372,   373,  1570,  1574,  1458,
     411,   700,   701,   702,   412,   808,   413,   996,   452,   365,
    1297,  1298,  1299,   558,   559,   365,   419,   703,   420,  1506,
    1507,  1508,  1385,  1012,   713,   714,   427,  1505,  1388,   431,
    1237,  1238,   727,   728,   432,   365,     1,     2,     3,     4,
       5,     6,   484,   485,  1005,   847,   848,  1401,   855,   856,
    1526,   451,  1520,  1490,  1491,   857,   858,  1007,  1008,   794,
     962,   963,   703,   442,   704,   453,  1502,  1543,   793,   793,
    1078,  1079,   705,   706,   707,   708,   709,   919,   920,  1167,
    1168,   466,   365,  -316,  -316,  1244,  1245,  1251,  1252,  1258,
    1259,   364,  1262,  1263,  1123,  1325,  1499,  1500,   467,   365,
     657,   658,  1070,   365,  1406,  1407,   483,   365,  1063,   704,
    1413,  1414,   584,   793,   496,   710,   584,   705,   706,   707,
     708,   709,  -316,  1418,  1419,   711,   664,   665,   495,   666,
     667,   381,   382,   497,  1578,  -316,  -316,  -316,  -316,   498,
     793,  1525,  1582,   504,   674,   675,   831,   831,  1595,  1596,
     505,   794,   793,   518,   303,   547,   794,   386,  1599,   390,
     710,   794,  1584,   395,   401,   794,   438,  1562,  1545,   561,
     711,   572,   793,   570,   579,   580,  1511,  1512,   593,   586,
    1549,   602,   604,   605,   613,   468,   469,   470,   471,   472,
     473,  1393,  1605,  1608,  1611,  1614,   474,   614,   626,   629,
    1564,   636,   637,  1400,  1616,   638,   656,   668,  1554,   475,
     669,   670,   794,   671,   690,   691,   692,   693,   734,   740,
     365,   736,   750,   738,   751,   752,   753,   757,  1493,   758,
     761,   900,  1496,   802,   901,   902,   903,   904,   799,   905,
     801,   803,   906,   804,   812,   907,   908,   909,   910,   911,
     912,   913,   914,   915,   846,   794,   916,   917,   918,   794,
     849,   853,   959,   851,   975,   966,  1567,   973,   976,   982,
     365,   978,   972,   622,   989,   977,   990,   991,  1000,  1253,
     476,   477,   478,   479,   480,   481,  1001,  1489,  1006,  1019,
    1021,  1024,  1023,  1026,  1028,  1054,   311,  1056,   365,   919,
     920,  1031,  1308,  1032,  1602,  1057,  1311,  1061,  1074,  1069,
    1118,   365,   365,  1122,  1284,  1123,  1062,   365,  1059,  1060,
    1136,  1127,   365,  1072,  1134,  1147,   365,  1284,  1170,  1178,
    1323,  1180,  1186,  1181,  1196,  1329,  1330,  1197,  1198,  1205,
    1337,  1204,   482,  1211,  1213,  1209,  1217,  1346,  1232,  1219,
    1269,    85,  1286,  1352,  1290,  1354,  1291,  1218,  1357,  1292,
    1250,  1301,  1361,  1293,  1319,  1324,  1287,  1366,  1349,  1378,
    1379,  1386,  1387,   365,  1371,  1322,  1394,  1395,  1373,  1396,
    1397,  1405,  1412,  1410,  1428,  1408,  1494,  1427,  1436,  1444,
    1497,  1448,  1449,  1498,  1450,  1442,  1451,  1474,  1540,  1477,
    1486,  1563,  1495,  1377,  1565,  1580,  1572,  1581,  1501,   365,
    1615,  1589,  1247,  1089,  1617,   365,   365,  1321,   364,   314,
     365,  1121,  1326,  1343,   364,  1534,   694,  1441,   987,   461,
     767,  1010,   770,   519,   365,  1210,  1523,  1190,   772,   430,
     639,  1415,   640,   364,   689,  1030,  1492,  1384,   832,   437,
     988,   589,   619,  1309,   985,   577,   901,   902,   903,   904,
     520,   905,  1231,  1220,   906,   794,   794,   907,   908,   909,
     910,   911,   912,   913,   914,   915,   521,   578,   916,   917,
     918,  1422,  1013,  1421,   541,  1409,  1510,  1025,  1255,  1515,
    1522,   762,  1445,  1268,  1503,     0,     0,     0,     0,   365,
       0,     0,     0,     0,     0,     0,     0,     0,   365,     0,
     794,     0,     0,     0,     0,  1446,     0,     0,   311,     0,
       0,   919,   920,     0,  1284,  1312,     0,     0,   901,   902,
     903,   904,  1475,   905,     0,     0,   906,   794,     0,   907,
     908,   909,   910,   911,   912,   913,   914,   915,     0,   794,
     916,   917,   918,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1590,     0,  1591,     0,     0,     0,     0,   794,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1332,     0,     0,   901,   902,   903,   904,     0,   905,
     311,     0,   906,   919,   920,   907,   908,   909,   910,   911,
     912,   913,   914,   915,  1100,     0,   916,   917,   918,     0,
       0,     0,     0,     0,     0,   365,     0,     0,     0,   365,
       0,     0,     0,     0,   364,     0,   365,   365,   364,     0,
       0,     0,     0,     0,  1101,     0,  1102,  1103,  1104,  1105,
    1106,  1107,  1108,     0,     0,     0,   311,     0,     0,   919,
     920,  1109,  1110,  1111,  1112,  1113,  1114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1115,  1116,  1117,     0,
       0,   365,     0,   365,     0,     0,   365,   365,  1546,     0,
     365,     0,     0,     0,   365,   365,   365,   365,     0,  1284,
    1550,     0,  1528,  1529,     0,     0,  1284,     0,   365,     0,
    1284,  1284,  1284,  1284,     0,     0,     0,     0,     0,     0,
     365,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     365,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1583,   323,
     324,   325,   326,   327,   328,   329,   330,   331,    35,    36,
      37,    38,    39,    40,    41,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,    54,    55,    56,
      57,    58,    59,    60,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,   344,    74,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,     0,
       0,     0,     0,     0,   345,   346,    84,     0,     0,     0,
      86,     0,     0,     0,     0,    89,   347,    91,   348,    93,
       0,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     349,   350,   105,   351,   107,     0,   108,   352,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   353,   124,   125,   126,   127,   128,   354,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
       0,   142,   143,   144,     0,   355,   146,   356,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   357,   173,   174,   358,   176,   177,   178,   179,
     180,   359,   182,   360,   184,   185,   186,   187,   188,   189,
     190,   361,   362,   193,   194,   195,   196,   197,   198,   199,
     200,   201,     0,   901,   902,   903,   904,     0,   905,     0,
       0,   906,     0,     0,   907,   908,   909,   910,   911,   912,
     913,   914,   915,     0,     0,   916,   917,   918,     0,     0,
       0,     0,     9,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,    11,     0,     0,   679,    12,     0,     0,
      13,    14,     0,    15,     0,    16,     0,    17,    18,    19,
       0,    20,    21,    22,   680,   311,     0,     0,   919,   920,
       0,     0,  1002,     0,  1003,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,     0,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    81,     0,     0,
       0,     0,     0,    82,    83,    84,     0,     0,    85,    86,
      87,    88,     0,     0,    89,    90,    91,    92,    93,     0,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,     0,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,     0,
     142,   143,   144,     0,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,     9,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,     0,   679,    12,     0,     0,    13,
      14,     0,    15,     0,    16,     0,    17,    18,    19,     0,
      20,    21,    22,   688,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
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
       9,     0,    10,     0,     0,     0,     0,     0,     0,     0,
       0,    11,     0,     0,     0,    12,     0,     0,    13,    14,
       0,    15,     0,    16,     0,    17,    18,    19,     0,    20,
      21,    22,   383,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,     0,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,    83,    84,     0,     0,    85,    86,    87,    88,
       0,     0,    89,    90,    91,    92,    93,     0,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,     0,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,     0,   142,   143,
     144,     0,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,     9,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
      11,     0,     0,     0,    12,     0,     0,    13,    14,     0,
      15,     0,    16,     0,    17,    18,    19,     0,    20,    21,
      22,     0,     0,     0,     0,     0,     0,     0,     0,   672,
       0,     0,    23,    24,    25,    26,    27,    28,    29,    30,
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
     194,   195,   196,   197,   198,   199,   200,   201,     9,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,    11,
       0,     0,     0,    12,     0,     0,    13,    14,     0,    15,
       0,    16,     0,    17,    18,    19,     0,    20,    21,    22,
       0,     0,     0,     0,     0,     0,     0,     0,   747,     0,
       0,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,     0,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,     0,     0,     0,     0,     0,    82,
      83,    84,     0,     0,    85,    86,    87,    88,     0,     0,
      89,    90,    91,    92,    93,     0,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       0,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,     0,   142,   143,   144,     0,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,     9,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,    11,     0,
       0,     0,    12,     0,     0,    13,    14,     0,    15,     0,
      16,     0,    17,    18,    19,     0,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,   755,     0,     0,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
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
     196,   197,   198,   199,   200,   201,     9,     0,    10,     0,
       0,     0,     0,     0,     0,     0,     0,    11,     0,     0,
     679,    12,     0,     0,    13,    14,     0,    15,     0,    16,
       0,    17,    18,    19,     0,    20,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,     0,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,     0,     0,     0,     0,     0,    82,    83,    84,
       0,     0,    85,    86,    87,    88,     0,     0,    89,    90,
      91,    92,    93,     0,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,     0,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,     0,   142,   143,   144,     0,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,     9,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,    11,     0,     0,     0,
      12,     0,     0,    13,    14,     0,    15,     0,    16,     0,
      17,    18,    19,     0,    20,    21,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,    24,
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
     198,   199,   200,   201,     9,     0,    10,     0,     0,     0,
       0,     0,     0,     0,     0,    11,     0,     0,     0,    12,
       0,     0,    13,    14,     0,    15,     0,    16,     0,    17,
      18,    19,     0,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,     0,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,   344,    74,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
       0,     0,     0,     0,     0,    82,    83,    84,     0,     0,
      85,    86,    87,    88,     0,     0,    89,   347,    91,   348,
      93,     0,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   349,   350,   105,   351,   107,     0,   108,   352,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,     0,   142,   143,   144,     0,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   357,   173,   174,   358,   176,   177,   178,
     179,   180,   359,   182,   360,   184,   185,   186,   187,   188,
     189,   190,   361,   362,   193,   194,   195,   196,   197,   198,
     199,   200,   201,     9,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,    11,     0,     0,     0,    12,     0,
       0,    13,    14,     0,    15,     0,    16,     0,    17,    18,
      19,     0,    20,    21,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
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
     132,   133,   134,   135,   522,   137,   138,   139,   140,   141,
       0,   142,   523,   144,     0,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,     9,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,    11,     0,     0,     0,    12,     0,     0,
      13,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,     0,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,   344,    74,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    81,     0,     0,
       0,     0,     0,    82,    83,    84,     0,     0,    85,    86,
      87,    88,     0,     0,    89,   347,    91,   348,    93,     0,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   349,
     350,   105,   351,   107,     0,   108,   352,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     353,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,     0,
     142,   143,   144,     0,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   357,   173,   174,   358,   176,   177,   178,   179,   180,
     359,   182,   360,   184,   185,   186,   187,   188,   189,   190,
     361,   362,   193,   194,   195,   196,   197,   198,   199,   200,
     201,    10,     0,     0,     0,     0,     0,     0,     0,     0,
    1270,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1271,     0,     0,     0,     0,     0,  1272,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1273,   367,    28,    29,    30,
     368,    32,    33,   369,    35,    36,    37,    38,    39,    40,
      41,  1274,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,    54,    55,    56,    57,    58,    59,    60,
       0,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,   344,    74,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,     0,     0,     0,     0,     0,
     345,   346,    84,     0,     0,     0,    86,    87,    88,     0,
       0,    89,   347,    91,   348,    93,     0,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   349,   350,   105,   351,
     107,     0,   108,   352,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   353,   124,   125,
     126,   127,   128,   354,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,     0,   142,   143,   144,
       0,   370,   146,   356,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   357,   173,
     174,   358,   176,   177,   178,   179,   180,   359,   182,   360,
     184,   185,  1275,  1276,   188,   189,   190,   361,   362,   193,
     194,   195,   196,   197,   198,   199,   200,   201,    10,     0,
       0,     0,     0,     0,     0,     0,     0,  1270,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1273,   367,    28,    29,    30,   368,    32,    33,
     369,    35,    36,    37,    38,    39,    40,    41,  1274,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
      54,    55,    56,    57,    58,    59,    60,     0,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
     344,    74,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,     0,     0,     0,     0,     0,   345,   346,    84,
       0,     0,     0,    86,    87,    88,     0,     0,    89,   347,
      91,   348,    93,     0,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   349,   350,   105,   351,   107,     0,   108,
     352,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   353,   124,   125,   126,   127,   128,
     354,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,     0,   142,   143,   144,     0,   370,   146,
     356,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   357,   173,   174,   358,   176,
     177,   178,   179,   180,   359,   182,   360,   184,   185,   186,
     187,   188,   189,   190,   361,   362,   193,   194,   195,   196,
     197,   198,   199,   200,   201,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   366,
     367,    28,    29,    30,   368,    32,    33,   369,    35,    36,
      37,    38,    39,    40,    41,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,    54,    55,    56,
      57,    58,    59,    60,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,   344,    74,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,     0,
       0,     0,     0,     0,   345,   346,    84,     0,     0,     0,
      86,    87,    88,     0,     0,    89,   347,    91,   348,    93,
       0,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     349,   350,   105,   351,   107,     0,   108,   352,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   353,   124,   125,   126,   127,   128,   354,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
       0,   142,   143,   144,     0,   370,   146,   356,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   357,   173,   174,   358,   176,   177,   178,   179,
     180,   359,   182,   360,   184,   185,   186,   187,   188,   189,
     190,   361,   362,   193,   194,   195,   196,   197,   198,   199,
     200,   201,  1199,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   786,  1200,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   366,   367,    28,    29,
      30,   368,    32,    33,   369,   787,    36,    37,    38,    39,
      40,    41,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,    54,    55,    56,    57,    58,    59,
      60,     0,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,   344,    74,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    81,     0,     0,     0,     0,
       0,   345,   346,    84,     0,     0,     0,    86,     0,     0,
       0,     0,    89,   347,    91,   348,    93,     0,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   349,   350,   105,
     351,   107,     0,   108,   352,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   353,   124,
     125,   126,   127,   128,   354,   788,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,     0,   142,   143,
     144,     0,   370,   146,   789,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   357,
     173,   174,   358,   176,   177,   178,   179,   180,   359,   182,
     360,   184,   185,   186,   187,   188,   189,   190,   361,   362,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   564,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   565,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   323,   324,   325,   326,   327,   328,   329,
     330,   331,    35,    36,    37,    38,    39,    40,    41,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,    54,    55,    56,    57,    58,    59,    60,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   344,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,   345,   346,
      84,     0,     0,     0,    86,     0,     0,     0,     0,    89,
     347,    91,   348,    93,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   349,   350,   105,   351,   107,     0,
     108,   352,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   353,   124,   125,   126,   127,
     128,   354,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,     0,   142,   143,   144,     0,   355,
     146,   356,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   357,   173,   174,   358,
     176,   177,   178,   179,   180,   359,   182,   360,   184,   185,
     186,   187,   188,   189,   190,   361,   362,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   616,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   617,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     323,   324,   325,   326,   327,   328,   329,   330,   331,    35,
      36,    37,    38,    39,    40,    41,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,    54,    55,
      56,    57,    58,    59,    60,     0,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,   344,    74,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
       0,     0,     0,     0,     0,   345,   346,    84,     0,     0,
       0,    86,     0,     0,     0,     0,    89,   347,    91,   348,
      93,     0,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   349,   350,   105,   351,   107,     0,   108,   352,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   353,   124,   125,   126,   127,   128,   354,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,     0,   142,   143,   144,     0,   355,   146,   356,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   357,   173,   174,   358,   176,   177,   178,
     179,   180,   359,   182,   360,   184,   185,   186,   187,   188,
     189,   190,   361,   362,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   786,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   366,   367,
      28,    29,    30,   368,    32,    33,   369,   787,    36,    37,
      38,    39,    40,    41,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,    54,    55,    56,    57,
      58,    59,    60,     0,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,   344,    74,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    81,     0,     0,
       0,     0,     0,   345,   346,    84,     0,     0,     0,    86,
       0,     0,     0,     0,    89,   347,    91,   348,    93,     0,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   349,
     350,   105,   351,   107,     0,   108,   352,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     353,   124,   125,   126,   127,   128,   354,   788,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,     0,
     142,   143,   144,     0,   370,   146,   789,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   357,   173,   174,   358,   176,   177,   178,   179,   180,
     359,   182,   360,   184,   185,   186,   187,   188,   189,   190,
     361,   362,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   786,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   366,   367,    28,    29,
      30,   368,    32,    33,   369,    35,    36,    37,    38,    39,
      40,    41,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,    54,    55,    56,    57,    58,    59,
      60,     0,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,   344,    74,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    81,     0,     0,     0,     0,
       0,   345,   346,    84,     0,     0,     0,    86,     0,     0,
       0,     0,    89,   347,    91,   348,    93,     0,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   349,   350,   105,
     351,   107,     0,   108,   352,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   353,   124,
     125,   126,   127,   128,   354,   788,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,     0,   142,   143,
     144,     0,   370,   146,   789,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   357,
     173,   174,   358,   176,   177,   178,   179,   180,   359,   182,
     360,   184,   185,   186,   187,   188,   189,   190,   361,   362,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   581,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   323,   324,   325,   326,   327,   328,   329,
     330,   331,    35,    36,    37,    38,    39,    40,    41,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,    54,    55,    56,    57,    58,    59,    60,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   344,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,   345,   346,
      84,     0,     0,   582,    86,     0,     0,     0,     0,    89,
     347,    91,   348,    93,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   349,   350,   105,   351,   107,     0,
     108,   352,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   353,   124,   125,   126,   127,
     128,   354,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,     0,   142,   143,   144,     0,   355,
     146,   356,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   357,   173,   174,   358,
     176,   177,   178,   179,   180,   359,   182,   360,   184,   185,
     186,   187,   188,   189,   190,   361,   362,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   323,   324,   325,   326,
     327,   328,   329,   330,   331,    35,    36,    37,    38,    39,
      40,    41,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,    54,    55,    56,    57,    58,    59,
      60,     0,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,   344,    74,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    81,     0,     0,     0,     0,
       0,   345,   346,    84,     0,     0,     0,    86,     0,     0,
       0,     0,    89,   347,    91,   348,    93,     0,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   349,   350,   105,
     351,   107,     0,   108,   352,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   353,   124,
     125,   126,   127,   128,   354,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,     0,   142,   143,
     144,     0,   355,   146,   356,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   357,
     173,   174,   358,   176,   177,   178,   179,   180,   359,   182,
     360,   184,   185,   186,   187,   188,   189,   190,   361,   362,
     193,   194,   195,   196,   197,   198,   199,   200,   201,    36,
      37,    38,    39,    40,    41,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,    54,    55,    56,
      57,    58,    59,    60,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,   344,    74,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,     0,
       0,     0,     0,     0,   345,   346,    84,     0,     0,     0,
      86,     0,     0,     0,     0,    89,   347,    91,   348,    93,
       0,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     349,   350,   105,     0,   107,     0,   108,     0,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   353,   124,   125,   126,   127,   128,   354,     0,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
       0,   142,   143,   144,     0,     0,   146,     0,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   357,   173,   174,   358,   176,   177,   178,   179,
     180,   359,   182,   360,   184,   185,   186,   187,   188,   189,
     190,   361,   362,   193,   194,   195,   196,   197,   198,   199,
     200,   201,     0,  1344,     0,     0,   901,   902,   903,   904,
       0,   905,     0,     0,   906,     0,     0,   907,   908,   909,
     910,   911,   912,   913,   914,   915,     0,     0,   916,   917,
     918,  1353,     0,     0,   901,   902,   903,   904,     0,   905,
       0,     0,   906,     0,     0,   907,   908,   909,   910,   911,
     912,   913,   914,   915,     0,     0,   916,   917,   918,  1355,
       0,     0,   901,   902,   903,   904,     0,   905,   311,     0,
     906,   919,   920,   907,   908,   909,   910,   911,   912,   913,
     914,   915,     0,     0,   916,   917,   918,  1358,     0,     0,
     901,   902,   903,   904,     0,   905,   311,     0,   906,   919,
     920,   907,   908,   909,   910,   911,   912,   913,   914,   915,
       0,     0,   916,   917,   918,  1359,     0,     0,   901,   902,
     903,   904,     0,   905,   311,     0,   906,   919,   920,   907,
     908,   909,   910,   911,   912,   913,   914,   915,     0,     0,
     916,   917,   918,  1364,     0,     0,   901,   902,   903,   904,
       0,   905,   311,     0,   906,   919,   920,   907,   908,   909,
     910,   911,   912,   913,   914,   915,     0,     0,   916,   917,
     918,  1367,     0,     0,   901,   902,   903,   904,     0,   905,
     311,     0,   906,   919,   920,   907,   908,   909,   910,   911,
     912,   913,   914,   915,     0,     0,   916,   917,   918,  1370,
       0,     0,   901,   902,   903,   904,     0,   905,   311,     0,
     906,   919,   920,   907,   908,   909,   910,   911,   912,   913,
     914,   915,     0,     0,   916,   917,   918,  1372,     0,     0,
     901,   902,   903,   904,     0,   905,   311,     0,   906,   919,
     920,   907,   908,   909,   910,   911,   912,   913,   914,   915,
       0,     0,   916,   917,   918,  1374,     0,     0,   901,   902,
     903,   904,     0,   905,   311,     0,   906,   919,   920,   907,
     908,   909,   910,   911,   912,   913,   914,   915,     0,     0,
     916,   917,   918,  1472,     0,     0,   901,   902,   903,   904,
       0,   905,   311,     0,   906,   919,   920,   907,   908,   909,
     910,   911,   912,   913,   914,   915,     0,     0,   916,   917,
     918,  1473,     0,     0,   901,   902,   903,   904,     0,   905,
     311,     0,   906,   919,   920,   907,   908,   909,   910,   911,
     912,   913,   914,   915,     0,     0,   916,   917,   918,  1478,
       0,     0,   901,   902,   903,   904,     0,   905,   311,     0,
     906,   919,   920,   907,   908,   909,   910,   911,   912,   913,
     914,   915,     0,     0,   916,   917,   918,  1484,     0,     0,
     901,   902,   903,   904,     0,   905,   311,     0,   906,   919,
     920,   907,   908,   909,   910,   911,   912,   913,   914,   915,
       0,     0,   916,   917,   918,  1547,     0,     0,   901,   902,
     903,   904,     0,   905,   311,     0,   906,   919,   920,   907,
     908,   909,   910,   911,   912,   913,   914,   915,     0,     0,
     916,   917,   918,  1548,     0,     0,   901,   902,   903,   904,
       0,   905,   311,     0,   906,   919,   920,   907,   908,   909,
     910,   911,   912,   913,   914,   915,     0,     0,   916,   917,
     918,  1551,     0,     0,   901,   902,   903,   904,     0,   905,
     311,     0,   906,   919,   920,   907,   908,   909,   910,   911,
     912,   913,   914,   915,     0,     0,   916,   917,   918,  1552,
       0,     0,   901,   902,   903,   904,     0,   905,   311,     0,
     906,   919,   920,   907,   908,   909,   910,   911,   912,   913,
     914,   915,     0,     0,   916,   917,   918,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   311,     0,     0,   919,
     920,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   311,     0,     0,   919,   920
};

static const yytype_int16 yycheck[] =
{
      22,   321,   557,   656,   627,   879,     6,   517,     9,   486,
      11,   230,  1001,  1082,   524,   525,   526,     9,   528,   529,
     530,   487,   488,   489,   490,  1246,    11,   415,   538,  1172,
     540,  1226,   420,   543,  1277,   423,   601,  1449,   603,   427,
     707,   606,    15,    40,   518,   712,  1044,   814,   122,    10,
      12,    48,   283,    59,   285,   122,     9,    11,    40,    33,
      32,    63,    40,    12,   892,    59,   894,   626,    40,    40,
      50,   656,  1453,   547,    12,     9,    48,    49,    40,    48,
      52,    53,    54,   122,    34,    35,    48,     9,    40,    33,
      47,    48,   125,    34,    35,    19,   924,   152,    34,    35,
     249,    59,   713,   714,    41,    48,   934,    47,    48,   668,
     669,   939,     9,   941,    32,   943,    70,   945,    33,   947,
     122,   949,    40,   951,    48,    62,   114,   955,     9,   957,
      48,    25,   114,     9,    52,    53,    54,   668,   669,    21,
     173,   190,  1285,   114,   248,    19,   104,   248,    42,    45,
    1279,   255,    48,   125,   255,    52,    53,    54,    40,   116,
      41,   814,   114,   816,   313,    41,    40,   222,   223,  1581,
      45,   119,   115,    48,    48,   230,   116,   736,   468,   469,
     470,   471,   472,   473,   694,   475,   476,   477,   478,   479,
     480,   481,   482,   131,    32,   183,   176,   131,  1579,  1073,
     124,   183,     0,   125,   148,   736,   175,   125,   162,   163,
      48,   161,   183,   444,   175,   164,   604,   448,   783,   115,
     226,   452,   453,   454,   386,   161,   457,   786,   125,   814,
     704,   816,   226,   148,   622,   846,  1431,   399,   400,   240,
     115,   194,   243,   240,   318,   219,   320,  1014,   636,   860,
     124,   318,   319,   231,   191,   240,   101,  1085,   243,   280,
     233,  1089,   225,   211,   212,   876,   244,   245,   246,   247,
     180,   243,   213,   214,   215,    40,   438,   240,   509,   318,
     319,   512,   303,    48,  1527,   125,   248,   280,    40,   251,
     252,   253,   254,   960,   256,   257,    48,   259,  1126,   144,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   119,
    1138,   273,   274,   275,   307,   315,   105,   279,   280,   321,
     322,   323,    12,    40,    48,   243,  1455,  1456,  1457,  1458,
      68,    69,   129,   173,    51,    44,   248,    46,   150,   301,
     302,   130,   304,   183,    68,    69,  1489,  1568,   959,    24,
      40,   313,    27,    28,   316,   317,    31,   647,    48,   124,
     279,  1014,   107,   280,   102,   387,    19,   598,  1021,   391,
    1023,   183,   124,    48,   396,  1444,  1571,   608,   609,   380,
     402,   293,   280,   271,   303,   386,   303,    40,   380,   306,
     307,   303,   414,    95,   395,   205,   418,   419,   399,   400,
     874,   211,   212,   395,   878,   303,   637,   962,   963,   431,
     432,   433,   114,   176,   415,   303,  1405,   439,   120,   420,
     308,   309,   423,   415,   187,    33,   427,   105,   420,  1014,
      33,   423,   991,    22,  1432,   427,  1021,   438,  1023,    40,
    1063,    49,   117,   118,    33,  1056,    49,   280,  1059,  1060,
     451,  1449,  1450,    23,   685,   686,   687,   290,    32,   451,
     991,   138,   280,  1074,   626,   853,    40,    59,   145,   302,
     303,    41,   290,   291,    48,  1303,    22,   499,    52,    53,
      54,   280,   504,   505,   302,   303,   508,    33,   280,    11,
    1055,   290,   291,   278,   196,   197,   198,  1325,    40,   201,
     202,    23,   287,   302,   303,   280,   668,   669,   670,   671,
     302,   303,    34,  1341,   191,   192,   193,   518,  1516,    33,
      44,  1349,    46,  1033,  1083,  1353,   518,   302,   303,  1088,
     761,   280,    40,    85,  1093,    49,    88,    40,  1097,    91,
      92,    93,    94,   292,    33,    33,   547,    33,   570,    33,
      30,   125,  1083,   302,  1177,   547,    36,  1088,    22,    40,
      49,    49,  1093,    49,   586,    49,  1097,    33,    33,    33,
     801,   802,   803,   303,   736,  1573,   306,    33,    33,  1232,
     171,   812,   744,    49,    49,  1144,   177,   248,  1462,   250,
      19,   613,   614,    49,    49,    33,   257,   258,   817,   151,
      40,    33,   263,   604,    19,   186,   837,    33,    48,   190,
      32,    49,   604,  1144,    33,   276,   277,    49,   780,   192,
     193,   622,    41,    49,   786,   626,    48,    33,  1187,    33,
     622,    22,  1191,   185,    19,   636,  1247,   164,   958,   166,
      40,   180,    33,    49,   636,    49,   236,  1232,    48,   188,
     240,   203,   204,    33,  1277,   207,  1187,    33,   231,    19,
    1191,    41,    48,  1173,  1129,    41,     9,   668,   669,   670,
     671,   244,   245,   246,   247,  1140,  1141,   279,   280,  1290,
    1291,    33,   165,   166,  1149,    19,    33,    33,  1153,    41,
    1155,  1156,    30,  1158,    41,    41,  1161,  1162,    36,   301,
     302,   437,   304,   704,    19,   441,   131,   132,   709,   134,
     135,   136,   704,   138,   139,    33,   220,   709,   208,   209,
     210,    33,    33,    41,   228,    33,    65,    66,    67,    41,
      41,   732,    33,    41,   734,   736,    91,    92,    93,    94,
      41,   972,    48,   744,   975,   976,   977,    33,  1225,    19,
    1070,   982,  1375,  1219,    33,    41,    33,  1234,  1235,    33,
      33,    19,    41,    30,    41,   122,   123,    41,    41,    36,
      19,    65,    66,    67,    19,  1006,    19,   799,   239,   780,
      52,    53,    54,   105,   106,   786,    48,   126,     9,   213,
     214,   215,  1180,   815,   189,   190,     9,  1408,  1186,    40,
    1031,  1032,   314,   315,    40,   806,     3,     4,     5,     6,
       7,     8,    34,    35,   806,   171,   172,  1205,   171,   172,
    1443,   234,  1433,  1378,  1379,   120,   121,   140,   141,   991,
     122,   123,   126,    40,   173,    33,  1401,  1460,  1397,  1398,
     288,   289,   181,   182,   183,   184,   185,   316,   317,   293,
     294,   156,   853,   192,   193,    86,    87,    86,    87,   143,
     144,   853,   178,   179,   260,   261,  1397,  1398,   157,   870,
     484,   485,   873,   874,   143,   144,   195,   878,   870,   173,
      99,   100,   874,  1442,   169,   224,   878,   181,   182,   183,
     184,   185,   231,   216,   217,   234,   491,   492,   158,   493,
     494,    17,    18,   160,  1527,   244,   245,   246,   247,   168,
    1469,  1442,  1535,    21,   502,   503,   670,   671,  1575,  1576,
      21,  1083,  1481,   173,   190,   173,  1088,    40,  1581,    40,
     224,  1093,  1555,    40,    40,  1097,    40,  1492,  1469,    29,
     234,    41,  1501,    48,    41,    41,  1423,  1424,    41,    48,
    1481,    33,     9,    33,    48,    13,    14,    15,    16,    17,
      18,  1192,  1585,  1586,  1587,  1588,    24,    48,   152,   159,
    1501,     9,   137,  1204,  1597,   138,    63,   159,  1488,    37,
     152,   152,  1144,   152,    52,   125,   125,    50,   180,   106,
     991,   152,    41,   105,    41,    41,    41,    41,  1386,    41,
      10,   248,  1390,    59,   251,   252,   253,   254,    48,   256,
     225,   152,   259,   225,   137,   262,   263,   264,   265,   266,
     267,   268,   269,   270,    37,  1187,   273,   274,   275,  1191,
      84,     9,    37,   125,    10,   130,  1513,   114,    10,   154,
    1041,   150,   131,     9,    40,   133,    40,    40,    40,  1041,
     108,   109,   110,   111,   112,   113,    40,  1377,    33,    90,
     241,    83,   242,   199,    23,    84,   313,    37,  1069,   316,
     317,   230,  1094,   230,  1584,   142,  1098,    33,   114,   235,
     248,  1082,  1083,   303,  1069,   260,   125,  1088,   173,   173,
     248,   305,  1093,   191,   280,   303,  1097,  1082,   303,    41,
    1122,     9,     9,   194,    41,  1127,  1128,    41,    41,     9,
    1132,   225,   170,   142,    41,   225,    97,  1139,   133,    96,
      33,   125,    37,  1145,    33,  1147,    37,   213,  1150,   289,
     213,   257,  1154,   288,   122,   305,   173,  1159,   272,    43,
      43,     9,   133,  1144,  1166,   248,   155,    41,  1170,    41,
     152,    40,    96,    49,   213,   145,  1387,   200,   125,   235,
    1391,    19,    40,  1394,    40,   152,    12,   122,    21,   248,
     248,   131,   152,  1174,    10,    41,   206,    33,   152,  1180,
     206,    26,   114,   890,    41,  1186,  1187,  1117,  1180,     3,
    1191,   902,  1124,  1135,  1186,  1451,   516,  1265,   784,   206,
     602,   812,   605,   305,  1205,  1006,  1437,   979,   607,   104,
     466,  1224,   467,  1205,   512,   837,  1380,  1177,   671,   129,
     786,   399,   438,   248,   780,   392,   251,   252,   253,   254,
     305,   256,  1023,  1021,   259,  1397,  1398,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   308,   392,   273,   274,
     275,  1232,   816,  1228,   309,  1214,  1417,   825,  1054,  1430,
    1435,   597,  1269,  1063,  1402,    -1,    -1,    -1,    -1,  1270,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1279,    -1,
    1442,    -1,    -1,    -1,    -1,  1270,    -1,    -1,   313,    -1,
      -1,   316,   317,    -1,  1279,   248,    -1,    -1,   251,   252,
     253,   254,  1324,   256,    -1,    -1,   259,  1469,    -1,   262,
     263,   264,   265,   266,   267,   268,   269,   270,    -1,  1481,
     273,   274,   275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1563,    -1,  1565,    -1,    -1,    -1,    -1,  1501,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   248,    -1,    -1,   251,   252,   253,   254,    -1,   256,
     313,    -1,   259,   316,   317,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   248,    -1,   273,   274,   275,    -1,
      -1,    -1,    -1,    -1,    -1,  1386,    -1,    -1,    -1,  1390,
      -1,    -1,    -1,    -1,  1386,    -1,  1397,  1398,  1390,    -1,
      -1,    -1,    -1,    -1,   278,    -1,   280,   281,   282,   283,
     284,   285,   286,    -1,    -1,    -1,   313,    -1,    -1,   316,
     317,   295,   296,   297,   298,   299,   300,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   310,   311,   312,    -1,
      -1,  1442,    -1,  1444,    -1,    -1,  1447,  1448,  1470,    -1,
    1451,    -1,    -1,    -1,  1455,  1456,  1457,  1458,    -1,  1444,
    1482,    -1,  1447,  1448,    -1,    -1,  1451,    -1,  1469,    -1,
    1455,  1456,  1457,  1458,    -1,    -1,    -1,    -1,    -1,    -1,
    1481,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1501,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1540,    55,
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
     246,   247,    -1,   251,   252,   253,   254,    -1,   256,    -1,
      -1,   259,    -1,    -1,   262,   263,   264,   265,   266,   267,
     268,   269,   270,    -1,    -1,   273,   274,   275,    -1,    -1,
      -1,    -1,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      -1,    38,    39,    40,    41,   313,    -1,    -1,   316,   317,
      -1,    -1,   318,    -1,   320,    52,    53,    54,    55,    56,
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
     247,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    -1,    34,    35,    36,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
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
     239,   240,   241,   242,   243,   244,   245,   246,   247,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    -1,    34,    35,    36,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
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
     240,   241,   242,   243,   244,   245,   246,   247,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    -1,    34,    35,    36,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
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
     241,   242,   243,   244,   245,   246,   247,     9,    -1,    11,
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
     242,   243,   244,   245,   246,   247,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    -1,    38,    39,    40,    -1,    -1,
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
     243,   244,   245,   246,   247,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
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
     244,   245,   246,   247,     9,    -1,    11,    -1,    -1,    -1,
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
     245,   246,   247,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    -1,    34,    35,
      36,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
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
     246,   247,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
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
     247,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
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
     240,   241,   242,   243,   244,   245,   246,   247,    11,    -1,
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
     243,   244,   245,   246,   247,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,   108,   109,   110,   111,   112,   113,   114,    -1,
      -1,    -1,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
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
     246,   247,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
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
     239,   240,   241,   242,   243,   244,   245,   246,   247,    11,
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
     242,   243,   244,   245,   246,   247,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
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
     245,   246,   247,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    -1,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,   108,   109,   110,   111,   112,   113,   114,    -1,    -1,
      -1,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,   126,
      -1,    -1,    -1,    -1,   131,   132,   133,   134,   135,    -1,
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
     247,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
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
     239,   240,   241,   242,   243,   244,   245,   246,   247,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,   108,   109,   110,   111,
     112,   113,   114,    -1,    -1,    -1,    -1,    -1,   120,   121,
     122,    -1,    -1,   125,   126,    -1,    -1,    -1,    -1,   131,
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
     242,   243,   244,   245,   246,   247,    55,    56,    57,    58,
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
     239,   240,   241,   242,   243,   244,   245,   246,   247,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,   108,   109,   110,   111,   112,   113,   114,    -1,
      -1,    -1,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
     126,    -1,    -1,    -1,    -1,   131,   132,   133,   134,   135,
      -1,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,    -1,   150,    -1,   152,    -1,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,    -1,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      -1,   187,   188,   189,    -1,    -1,   192,    -1,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,    -1,   248,    -1,    -1,   251,   252,   253,   254,
      -1,   256,    -1,    -1,   259,    -1,    -1,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    -1,    -1,   273,   274,
     275,   248,    -1,    -1,   251,   252,   253,   254,    -1,   256,
      -1,    -1,   259,    -1,    -1,   262,   263,   264,   265,   266,
     267,   268,   269,   270,    -1,    -1,   273,   274,   275,   248,
      -1,    -1,   251,   252,   253,   254,    -1,   256,   313,    -1,
     259,   316,   317,   262,   263,   264,   265,   266,   267,   268,
     269,   270,    -1,    -1,   273,   274,   275,   248,    -1,    -1,
     251,   252,   253,   254,    -1,   256,   313,    -1,   259,   316,
     317,   262,   263,   264,   265,   266,   267,   268,   269,   270,
      -1,    -1,   273,   274,   275,   248,    -1,    -1,   251,   252,
     253,   254,    -1,   256,   313,    -1,   259,   316,   317,   262,
     263,   264,   265,   266,   267,   268,   269,   270,    -1,    -1,
     273,   274,   275,   248,    -1,    -1,   251,   252,   253,   254,
      -1,   256,   313,    -1,   259,   316,   317,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    -1,    -1,   273,   274,
     275,   248,    -1,    -1,   251,   252,   253,   254,    -1,   256,
     313,    -1,   259,   316,   317,   262,   263,   264,   265,   266,
     267,   268,   269,   270,    -1,    -1,   273,   274,   275,   248,
      -1,    -1,   251,   252,   253,   254,    -1,   256,   313,    -1,
     259,   316,   317,   262,   263,   264,   265,   266,   267,   268,
     269,   270,    -1,    -1,   273,   274,   275,   248,    -1,    -1,
     251,   252,   253,   254,    -1,   256,   313,    -1,   259,   316,
     317,   262,   263,   264,   265,   266,   267,   268,   269,   270,
      -1,    -1,   273,   274,   275,   248,    -1,    -1,   251,   252,
     253,   254,    -1,   256,   313,    -1,   259,   316,   317,   262,
     263,   264,   265,   266,   267,   268,   269,   270,    -1,    -1,
     273,   274,   275,   248,    -1,    -1,   251,   252,   253,   254,
      -1,   256,   313,    -1,   259,   316,   317,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    -1,    -1,   273,   274,
     275,   248,    -1,    -1,   251,   252,   253,   254,    -1,   256,
     313,    -1,   259,   316,   317,   262,   263,   264,   265,   266,
     267,   268,   269,   270,    -1,    -1,   273,   274,   275,   248,
      -1,    -1,   251,   252,   253,   254,    -1,   256,   313,    -1,
     259,   316,   317,   262,   263,   264,   265,   266,   267,   268,
     269,   270,    -1,    -1,   273,   274,   275,   248,    -1,    -1,
     251,   252,   253,   254,    -1,   256,   313,    -1,   259,   316,
     317,   262,   263,   264,   265,   266,   267,   268,   269,   270,
      -1,    -1,   273,   274,   275,   248,    -1,    -1,   251,   252,
     253,   254,    -1,   256,   313,    -1,   259,   316,   317,   262,
     263,   264,   265,   266,   267,   268,   269,   270,    -1,    -1,
     273,   274,   275,   248,    -1,    -1,   251,   252,   253,   254,
      -1,   256,   313,    -1,   259,   316,   317,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    -1,    -1,   273,   274,
     275,   248,    -1,    -1,   251,   252,   253,   254,    -1,   256,
     313,    -1,   259,   316,   317,   262,   263,   264,   265,   266,
     267,   268,   269,   270,    -1,    -1,   273,   274,   275,   248,
      -1,    -1,   251,   252,   253,   254,    -1,   256,   313,    -1,
     259,   316,   317,   262,   263,   264,   265,   266,   267,   268,
     269,   270,    -1,    -1,   273,   274,   275,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,   316,
     317,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   313,    -1,    -1,   316,   317
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,   325,   326,     9,
      11,    20,    24,    27,    28,    30,    32,    34,    35,    36,
      38,    39,    40,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   108,   109,   110,   111,   112,
     113,   114,   120,   121,   122,   125,   126,   127,   128,   131,
     132,   133,   134,   135,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   187,   188,   189,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   459,   460,   461,   462,   463,   464,   466,   471,
     482,   485,   491,   492,   493,   494,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   535,   536,   537,   538,   539,   542,   543,
     544,   555,   557,   559,   560,   561,   564,   566,   567,   568,
     569,   579,   580,   581,   582,   583,   584,   585,   586,   588,
     590,   592,   633,   634,   635,   636,   637,   638,   639,   642,
     643,   644,   645,   647,   654,   655,   659,   660,   661,   662,
     668,   669,   186,   190,   418,   419,   422,   423,   424,   425,
     249,   313,   334,   335,   357,   180,   327,   190,   330,   331,
     329,   452,     0,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,   103,   120,   121,   132,   134,   146,
     147,   149,   153,   167,   173,   191,   193,   218,   221,   227,
     229,   237,   238,   534,   668,   669,    55,    56,    60,    63,
     191,   526,   122,   123,   545,   129,   107,   556,   515,   105,
     547,   506,   506,    41,   460,    19,    40,    48,   124,   565,
      40,    48,    40,    40,    40,    40,    48,   124,   570,    40,
      40,    40,    48,    19,    19,    19,    19,    19,    19,    19,
      19,    19,    19,    19,    48,     9,   640,   641,    48,    48,
       9,   467,   468,     9,   194,   472,   473,     9,   483,   484,
     483,    40,    40,    48,    68,    69,    19,   570,    40,    48,
     124,   562,    40,   450,    59,   104,    59,   226,    59,    59,
     226,   234,   239,    33,   131,   132,   134,   135,   136,   138,
     139,   464,   465,   474,   475,   476,   156,   157,    13,    14,
      15,    16,    17,    18,    24,    37,   108,   109,   110,   111,
     112,   113,   170,   195,    34,    35,   161,    11,    70,   162,
     163,    12,   164,   165,   166,   158,   169,   160,   168,    48,
     511,   515,    30,    36,    21,    21,   526,   526,    21,    40,
     461,   461,    40,    51,   176,   187,   420,   421,   173,   422,
     423,   425,   180,   188,   426,   427,   429,   430,   431,   432,
     433,   434,   435,   436,   439,   440,   441,   444,   445,   447,
     448,   459,   632,   648,   336,   358,   452,   173,   332,   231,
     244,   245,   246,   247,   450,   453,   454,   546,   105,   106,
     558,    29,   668,    41,    11,    41,   587,   594,   647,   460,
      48,   563,    41,   460,    41,    62,   191,   590,   592,    41,
      41,    41,   125,   646,   668,   460,    48,   571,   589,   594,
     593,   595,   647,    41,   460,   460,   534,    33,   219,   460,
     460,   534,    33,   534,     9,    33,   534,    33,   148,   148,
     460,   460,   460,    48,    48,   563,    11,    41,   591,   595,
     460,   563,     9,    41,   456,   457,   152,   574,   461,   159,
     461,   668,   461,   461,   461,   461,     9,   137,   138,   493,
     494,   496,   496,   496,   496,   496,   496,   495,   496,   496,
     496,   496,   496,   496,   496,   496,    63,   499,   499,   498,
     500,   500,   500,   500,   501,   501,   502,   502,   159,   152,
     152,   152,    49,   460,   516,   516,   460,   460,   460,    23,
      41,   461,   540,   541,   152,   222,   223,   230,    41,   540,
      52,   125,   125,    50,   421,   428,   428,   646,   180,   188,
      65,    66,    67,   126,   173,   181,   182,   183,   184,   185,
     224,   234,   452,   189,   190,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   278,   287,   337,   314,   315,   360,
     192,   193,   449,   646,   180,   333,   152,   455,   105,   547,
     106,   105,   130,   512,    33,    41,    49,    49,   460,    49,
      41,    41,    41,    41,    49,    49,   460,    41,    41,    49,
      49,    10,   641,   461,    49,    49,   574,   468,   574,   534,
     473,   574,   484,   461,   461,    41,    41,    49,   460,   460,
      33,    41,    49,   534,    33,    41,    40,    64,   174,   193,
     575,   577,   578,   579,   647,   663,   664,   665,   667,    48,
     458,   225,    59,   152,   225,   225,   240,   534,   461,   477,
     478,   479,   137,   496,    40,    48,   243,   510,   531,   598,
     601,   602,   603,   604,   605,   606,   607,   608,   575,   575,
     572,   578,   572,    49,    22,    22,    22,    33,    41,   220,
     228,   461,   461,   461,    41,   428,    37,   171,   172,    84,
     615,   125,   597,     9,   646,   171,   172,   120,   121,   138,
     145,   191,   449,   171,   177,   437,   668,    68,    69,   102,
     236,   240,   651,   449,   173,   183,   443,   597,   173,   597,
     248,   250,   257,   258,   263,   276,   277,   338,   339,   342,
     343,   347,   348,   349,   350,   351,   352,   355,   356,   359,
     248,   251,   252,   253,   254,   256,   259,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   273,   274,   275,   316,
     317,   357,   361,   362,   363,   364,   365,   366,   367,   370,
     371,   375,   376,   377,   378,   379,   384,   385,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   669,    37,
     452,   575,   122,   123,    25,    42,   130,   596,   647,    49,
      49,   461,   131,   114,   469,    10,    10,   133,   150,   486,
     488,   489,   154,    49,    49,   596,   574,   457,   577,    40,
      40,    40,    11,    23,    34,   576,   460,   461,   461,   461,
      40,    40,   318,   320,   656,   668,    33,   140,   141,   480,
     477,   598,   460,   605,    48,   208,   209,   210,   609,    90,
     631,   241,   600,   242,    83,   615,   199,   610,    23,   573,
     541,   230,   230,   597,    85,    88,    91,    92,    93,    94,
     151,   185,   203,   204,   207,   616,   617,   618,   619,   620,
     623,   628,   629,   630,    84,   534,    37,   142,   597,   173,
     173,    33,   125,   668,   122,   318,   319,   652,   653,   235,
     669,   646,   191,   597,   114,   442,   646,   442,   288,   289,
     279,   280,   301,   302,   304,   344,   280,   292,   302,   344,
     280,   290,   291,   302,   303,   360,   280,   302,   303,   360,
     248,   278,   280,   281,   282,   283,   284,   285,   286,   295,
     296,   297,   298,   299,   300,   310,   311,   312,   248,   115,
     458,   365,   303,   260,   380,   381,   382,   305,   303,   306,
     360,   279,   303,   369,   280,   372,   248,   360,   271,   303,
     308,   309,   386,   280,   302,   303,   360,   303,   360,   280,
     303,   360,   360,   280,   303,   306,   307,   360,   280,   303,
     360,   280,   307,   360,   248,   293,   303,   293,   294,   360,
     303,   360,   450,   597,   449,   547,   547,   554,    41,   461,
       9,   194,   470,   461,   461,   461,     9,   490,   183,   487,
     488,    12,   131,   461,    23,    41,    41,    41,    41,    11,
      41,   575,   666,    49,   225,     9,   657,   658,   657,   225,
     478,   142,   481,    41,    49,    49,   598,    97,   213,    96,
     602,    95,   114,   120,   196,   197,   198,   201,   202,   599,
     612,   603,   133,   119,   211,   212,   611,   461,   461,   428,
      91,    92,    93,    94,    86,    87,    40,   114,   183,   622,
     213,    86,    87,   668,   645,   616,   574,   597,   143,   144,
     597,   597,   178,   179,   438,    40,   458,   650,   651,    33,
      20,    30,    36,    55,    71,   232,   233,   408,   409,   410,
     411,   414,   415,   416,   526,   450,    37,   173,   442,   597,
      33,    37,   289,   288,   340,   408,   575,    52,    53,    54,
     341,   257,   345,   346,   360,   575,   360,   575,   460,   248,
     575,   460,   248,    63,   122,   321,   322,   323,   353,   122,
     354,   354,   248,   460,   305,   261,   381,   383,   360,   460,
     460,   359,   248,   122,   318,   320,   368,   460,   248,   255,
     373,   374,   248,   373,   248,   360,   460,   359,   359,   272,
     387,   575,   460,   248,   460,   248,   359,   460,   248,   248,
     359,   460,   359,   359,   248,   359,   460,   248,   359,   359,
     248,   460,   248,   460,   248,   455,   428,   669,    43,    43,
      31,   117,   118,   458,   543,   534,     9,   133,   534,   575,
       9,   131,   575,   461,   155,    41,    41,   152,    33,    41,
     461,   534,    33,    41,    41,    40,   143,   144,   145,   609,
      49,   500,    96,    99,   100,   497,   498,   611,   216,   217,
     614,   614,   604,   101,   144,   498,   498,   200,   213,   183,
     622,   597,    40,   114,   183,   625,   125,    10,   175,   446,
      41,   456,   152,   649,   235,   653,   526,    19,    19,    40,
      40,    12,   458,   650,   415,    30,    36,    30,    36,   417,
     455,   597,   597,   122,   318,   319,   280,   290,   291,   302,
     303,   360,   248,   248,   122,   460,   360,   248,   248,   280,
     290,   302,   303,   360,   248,   360,   248,   360,   458,   450,
     547,   547,   545,   534,   461,   152,   534,   461,   461,   575,
     575,   152,   574,   658,   657,   597,   213,   214,   215,   613,
     613,   498,   498,   161,   621,   621,   205,   611,   626,   645,
     597,   624,   624,   461,    41,   575,   458,   408,   526,   526,
     412,   533,   645,   645,   409,   649,   415,   415,   415,   415,
      21,   175,   451,   458,   442,   575,   460,   248,   248,   575,
     460,   248,   248,   328,   428,   455,    44,    46,   548,    44,
      46,   549,   547,   131,   575,    10,    41,   498,    33,    41,
      41,   645,   206,    33,    41,   164,   166,   627,   458,   650,
      41,    33,   458,   460,   458,   550,   552,   551,   553,    26,
     461,   461,   622,   611,   645,   625,   625,   649,   413,   531,
     533,    22,   428,    45,   115,   458,    47,   116,   458,    45,
     115,   458,    47,   116,   458,   206,   458,    41
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
#line 765 "../src/parser/XQParser.y"
    {
    SET_BUILT_IN_NAMESPACE(XQillaFunction::XQillaPrefix, XQillaFunction::XMLChFunctionURI);
  }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 770 "../src/parser/XQParser.y"
    {
    SET_BUILT_IN_NAMESPACE(XMLChXS, SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
    SET_BUILT_IN_NAMESPACE(XMLChXSI, SchemaSymbols::fgURI_XSI);
    SET_BUILT_IN_NAMESPACE(XMLChFN, XQFunction::XMLChFunctionURI);
    SET_BUILT_IN_NAMESPACE(XMLChLOCAL, XQUserFunction::XMLChXQueryLocalFunctionsURI);
    SET_BUILT_IN_NAMESPACE(XMLChERR, FunctionError::XMLChXQueryErrorURI);
    SET_BUILT_IN_NAMESPACE(XQillaFunction::XQillaPrefix, XQillaFunction::XMLChFunctionURI);
  }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 792 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (8)].signature)->argSpecs = (yyvsp[(5) - (8)].argSpecs);
    (yyvsp[(2) - (8)].signature)->returnType = (yyvsp[(6) - (8)].sequenceType);
    QP->_function = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(2) - (8)].signature), (yyvsp[(7) - (8)].astNode), true, MEMMGR));
  }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 803 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].signature)->argSpecs = (yyvsp[(2) - (3)].argSpecs);
    (yyvsp[(1) - (3)].signature)->returnType = (yyvsp[(3) - (3)].sequenceType);
    QP->_signature = (yyvsp[(1) - (3)].signature);
  }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 812 "../src/parser/XQParser.y"
    {
    printf("  { 0, 0, 0, 0, 0 }\n};\n\n");

    UTF8Str module(QP->_moduleName);
    printf("static const DelayedModule %s_module = { %s_file, %s_prefix, %s_uri, %s_functions };\n",
           module.str(), module.str(), module.str(), module.str(), module.str());
  }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 823 "../src/parser/XQParser.y"
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

  case 15:

/* Line 1455 of yacc.c  */
#line 860 "../src/parser/XQParser.y"
    {
    printf("static const DelayedModule::FuncDef %s_functions[] = {\n", UTF8(QP->_moduleName));
  }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 864 "../src/parser/XQParser.y"
    {
  }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 870 "../src/parser/XQParser.y"
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

  case 18:

/* Line 1455 of yacc.c  */
#line 906 "../src/parser/XQParser.y"
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

  case 19:

/* Line 1455 of yacc.c  */
#line 937 "../src/parser/XQParser.y"
    {
  }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 940 "../src/parser/XQParser.y"
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

  case 22:

/* Line 1455 of yacc.c  */
#line 964 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 968 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 986 "../src/parser/XQParser.y"
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

  case 32:

/* Line 1455 of yacc.c  */
#line 1005 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, signature, 0, MEMMGR));
  }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 1010 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 1015 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 1022 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 1027 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 1032 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 1040 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 1044 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 1050 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 1055 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 1065 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:function declaration does not have a {}name attribute");
    }

    (yyvsp[(1) - (4)].functDecl)->getSignature()->argSpecs = (yyvsp[(2) - (4)].argSpecs);
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 1078 "../src/parser/XQParser.y"
    {    
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, signature, 0, true, MEMMGR));
  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 1083 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 1090 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1095 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 1103 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
  }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1107 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1115 "../src/parser/XQParser.y"
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
#line 1142 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1146 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 1153 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1159 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 1164 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1169 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1178 "../src/parser/XQParser.y"
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
#line 1202 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 1206 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 1213 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1218 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1223 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1228 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1239 "../src/parser/XQParser.y"
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
#line 1257 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1261 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1268 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1273 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1281 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1306 "../src/parser/XQParser.y"
    {
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1309 "../src/parser/XQParser.y"
    {
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1312 "../src/parser/XQParser.y"
    {
  }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1315 "../src/parser/XQParser.y"
    {
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1318 "../src/parser/XQParser.y"
    {
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1321 "../src/parser/XQParser.y"
    {
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1324 "../src/parser/XQParser.y"
    {
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1327 "../src/parser/XQParser.y"
    {
  }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1330 "../src/parser/XQParser.y"
    {
  }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1333 "../src/parser/XQParser.y"
    {
  }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1336 "../src/parser/XQParser.y"
    {
  }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1339 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1342 "../src/parser/XQParser.y"
    {
  }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1345 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1348 "../src/parser/XQParser.y"
    {
  }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1351 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1354 "../src/parser/XQParser.y"
    {
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1357 "../src/parser/XQParser.y"
    {
  }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1367 "../src/parser/XQParser.y"
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
#line 1379 "../src/parser/XQParser.y"
    {
  }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1382 "../src/parser/XQParser.y"
    {
  }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1390 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1395 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1400 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1408 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1416 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1427 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1437 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1441 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1448 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1457 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1461 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1466 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1476 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1480 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1485 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1490 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1519 "../src/parser/XQParser.y"
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
#line 1537 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1541 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1546 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1555 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1564 "../src/parser/XQParser.y"
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
#line 1584 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1588 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1593 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1601 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1606 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1610 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1617 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1621 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1629 "../src/parser/XQParser.y"
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
#line 1642 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1646 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1656 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1660 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1668 "../src/parser/XQParser.y"
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
#line 1686 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1690 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1697 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1702 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1707 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1715 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1721 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1729 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1737 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1744 "../src/parser/XQParser.y"
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
#line 1758 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1762 "../src/parser/XQParser.y"
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
#line 1776 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1785 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1792 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1796 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1803 "../src/parser/XQParser.y"
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
#line 1838 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1842 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1847 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1853 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1862 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1866 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1873 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1877 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1884 "../src/parser/XQParser.y"
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
#line 1902 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), 0, 0, MEMMGR));
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1906 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1913 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1918 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->seqType = (yyvsp[(3) - (3)].sequenceType);
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1926 "../src/parser/XQParser.y"
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
#line 1944 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1948 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1956 "../src/parser/XQParser.y"
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
#line 1978 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1982 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1989 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1997 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 2006 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 2014 "../src/parser/XQParser.y"
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

  case 194:

/* Line 1455 of yacc.c  */
#line 2052 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 2056 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 2063 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 2070 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 2079 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2088 "../src/parser/XQParser.y"
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
#line 2115 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2119 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 2126 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 2138 "../src/parser/XQParser.y"
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

  case 204:

/* Line 1455 of yacc.c  */
#line 2165 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2169 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 2176 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 2186 "../src/parser/XQParser.y"
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
#line 2198 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2202 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 2207 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2216 "../src/parser/XQParser.y"
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
#line 2229 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 2233 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 2238 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 2247 "../src/parser/XQParser.y"
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
#line 2261 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 2265 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 2278 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 2283 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 2295 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 2299 "../src/parser/XQParser.y"
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
#line 2307 "../src/parser/XQParser.y"
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
#line 2320 "../src/parser/XQParser.y"
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
#line 2328 "../src/parser/XQParser.y"
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
#line 2341 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 2348 "../src/parser/XQParser.y"
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
#line 2387 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2391 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 2395 "../src/parser/XQParser.y"
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
#line 2413 "../src/parser/XQParser.y"
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
#line 2431 "../src/parser/XQParser.y"
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
#line 2441 "../src/parser/XQParser.y"
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
#line 2455 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 2463 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 2469 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 2475 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 2481 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 2492 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2496 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 2525 "../src/parser/XQParser.y"
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

  case 252:

/* Line 1455 of yacc.c  */
#line 2545 "../src/parser/XQParser.y"
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

  case 255:

/* Line 1455 of yacc.c  */
#line 2569 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 2583 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 2587 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 2591 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 2595 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 2599 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 2603 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 2609 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 2615 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 2619 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 2651 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 2659 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 2664 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 2673 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 2678 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 2687 "../src/parser/XQParser.y"
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

  case 283:

/* Line 1455 of yacc.c  */
#line 2747 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 2755 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 2760 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 2769 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 2774 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 2783 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2793 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2797 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2805 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2809 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2817 "../src/parser/XQParser.y"
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

  case 294:

/* Line 1455 of yacc.c  */
#line 2833 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 2842 "../src/parser/XQParser.y"
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

  case 296:

/* Line 1455 of yacc.c  */
#line 2854 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2862 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2866 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 2871 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 2880 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 2884 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 2892 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), &loc);
  }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 2902 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2914 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 2921 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2925 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2933 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 2938 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 2947 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (7)].signature)->argSpecs = (yyvsp[(5) - (7)].argSpecs);
    (yyvsp[(2) - (7)].signature)->returnType = (yyvsp[(6) - (7)].sequenceType);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), (yyvsp[(2) - (7)].signature), (yyvsp[(7) - (7)].astNode), true, MEMMGR));
  }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2958 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 2962 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 2971 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 2979 "../src/parser/XQParser.y"
    {
    (yyval.signature) = new (MEMMGR) FunctionSignature(MEMMGR);
  }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 2983 "../src/parser/XQParser.y"
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

  case 318:

/* Line 1455 of yacc.c  */
#line 2996 "../src/parser/XQParser.y"
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

  case 319:

/* Line 1455 of yacc.c  */
#line 3009 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (2)].signature)->updating != FunctionSignature::OP_DEFAULT)
      yyerror((yylsp[(2) - (2)]), "Function option 'updating' already specified [err:XPST0003]");
    (yyvsp[(1) - (2)].signature)->updating = FunctionSignature::OP_TRUE;
    (yyval.signature) = (yyvsp[(1) - (2)].signature);
  }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 3018 "../src/parser/XQParser.y"
    { (yyval.boolean) = true; }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 3018 "../src/parser/XQParser.y"
    { (yyval.boolean) = false; }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 3021 "../src/parser/XQParser.y"
    { (yyval.boolean) = false; }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 3021 "../src/parser/XQParser.y"
    { (yyval.boolean) = true; }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 3025 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 3029 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 3037 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 3042 "../src/parser/XQParser.y"
    {
    ArgumentSpecs* paramList = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 3052 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 3060 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 3068 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 3081 "../src/parser/XQParser.y"
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

  case 345:

/* Line 1455 of yacc.c  */
#line 3119 "../src/parser/XQParser.y"
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

  case 347:

/* Line 1455 of yacc.c  */
#line 3164 "../src/parser/XQParser.y"
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

  case 348:

/* Line 1455 of yacc.c  */
#line 3177 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 3192 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 3199 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 3207 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 3218 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 3222 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 3232 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 3236 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 3246 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 3253 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 3261 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 3265 "../src/parser/XQParser.y"
    {
    ASTNode *literal = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  X("0"), AnyAtomicType::DECIMAL,
                  MEMMGR));
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(3) - (5)].str), literal, MEMMGR));
  }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 3278 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 3286 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) CountTuple(0, (yyvsp[(3) - (3)].str), MEMMGR));
  }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 3294 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 3299 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 3307 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 3317 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 3324 "../src/parser/XQParser.y"
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

  case 375:

/* Line 1455 of yacc.c  */
#line 3339 "../src/parser/XQParser.y"
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

  case 376:

/* Line 1455 of yacc.c  */
#line 3355 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 3359 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 3363 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 3370 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 3379 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 3383 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 3392 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 3400 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 3411 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 3419 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 3430 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR));
  }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 3437 "../src/parser/XQParser.y"
    {
    XQTypeswitch::Cases::iterator it = (yyvsp[(2) - (2)].caseClauses)->begin();
    for(; it != (yyvsp[(2) - (2)].caseClauses)->end(); ++it) {
      (yyvsp[(1) - (2)].caseClauses)->push_back(*it);
    }

    (yyval.caseClauses) = (yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 3450 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 3454 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 3462 "../src/parser/XQParser.y"
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

  case 393:

/* Line 1455 of yacc.c  */
#line 3480 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses) = new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), 0)));
  }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 3485 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(SequenceTypeUnion, (yylsp[(2) - (3)]));
    (yyvsp[(1) - (3)].caseClauses)->push_back(WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(1) - (3)].caseClauses)->back()->getQName(), (yyvsp[(3) - (3)].sequenceType), 0)));
    (yyval.caseClauses) = (yyvsp[(1) - (3)].caseClauses);
  }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 3494 "../src/parser/XQParser.y"
    {
    (yyval.str) = 0;
  }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 3498 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 3506 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 3514 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OR) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 3528 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::AND) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 3547 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 3551 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 3554 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 3555 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 3559 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 3563 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 3567 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 3571 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 3575 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 3579 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 3583 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 3587 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 3591 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3595 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 3599 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 3603 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 3612 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 3616 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 3625 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionCall(0, BuiltInModules::core.uri, MEMMGR->getPooledString("to"), args, MEMMGR));
  }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 3637 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3641 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 3650 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 3654 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 3658 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 3662 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 3671 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 3675 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 3684 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 3688 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3697 "../src/parser/XQParser.y"
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

  case 440:

/* Line 1455 of yacc.c  */
#line 3719 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 3729 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 3738 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 3747 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 3753 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 3774 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 3778 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 3782 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 3790 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 3797 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 3810 "../src/parser/XQParser.y"
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

  case 461:

/* Line 1455 of yacc.c  */
#line 3831 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 3840 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 3846 "../src/parser/XQParser.y"
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

  case 466:

/* Line 1455 of yacc.c  */
#line 3871 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 3885 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 3891 "../src/parser/XQParser.y"
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

  case 473:

/* Line 1455 of yacc.c  */
#line 3913 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 3923 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 3930 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 3939 "../src/parser/XQParser.y"
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

  case 480:

/* Line 1455 of yacc.c  */
#line 3962 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 3966 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 3970 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 3974 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 3978 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 3982 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 3986 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 3990 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 3998 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 4006 "../src/parser/XQParser.y"
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

  case 490:

/* Line 1455 of yacc.c  */
#line 4023 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 4040 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 4044 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 4048 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 4052 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 4056 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 4064 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 4076 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 4086 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 4098 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 4105 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 504:

/* Line 1455 of yacc.c  */
#line 4112 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 4125 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 522:

/* Line 1455 of yacc.c  */
#line 4154 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 4165 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 525:

/* Line 1455 of yacc.c  */
#line 4169 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 4177 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 4185 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 528:

/* Line 1455 of yacc.c  */
#line 4195 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 529:

/* Line 1455 of yacc.c  */
#line 4205 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 4209 "../src/parser/XQParser.y"
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

  case 531:

/* Line 1455 of yacc.c  */
#line 4232 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 4237 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 4248 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 4257 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 4261 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 4274 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 4280 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 4293 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 4297 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 546:

/* Line 1455 of yacc.c  */
#line 4306 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 4322 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 550:

/* Line 1455 of yacc.c  */
#line 4326 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 551:

/* Line 1455 of yacc.c  */
#line 4333 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 4337 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 553:

/* Line 1455 of yacc.c  */
#line 4347 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 4351 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 4356 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 4366 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 4370 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 4374 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 4387 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 4391 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 4396 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 4406 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 4410 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 4414 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
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
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 4445 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 4452 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                 SchemaSymbols::fgDT_STRING,
                                 (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
    }
  }
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 4465 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(2) - (3)].str), AnyAtomicType::STRING,
                  MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 4478 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 4487 "../src/parser/XQParser.y"
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

  case 575:

/* Line 1455 of yacc.c  */
#line 4507 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 4532 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 4540 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 585:

/* Line 1455 of yacc.c  */
#line 4548 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 586:

/* Line 1455 of yacc.c  */
#line 4552 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 587:

/* Line 1455 of yacc.c  */
#line 4560 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 588:

/* Line 1455 of yacc.c  */
#line 4564 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 4573 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 4580 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 4584 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 4594 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQNamespaceConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 4602 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 4610 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 4618 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 4625 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(1) - (1)].str), AnyAtomicType::STRING, MEMMGR));
  }
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 4635 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 4642 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 4646 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 4654 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4664 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 4668 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 4676 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 4680 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 4690 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 4697 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 4706 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 4708 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 4710 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 4712 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 4718 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 4722 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 627:

/* Line 1455 of yacc.c  */
#line 4758 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 628:

/* Line 1455 of yacc.c  */
#line 4766 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 629:

/* Line 1455 of yacc.c  */
#line 4770 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 630:

/* Line 1455 of yacc.c  */
#line 4775 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_SCHEMA_DOCUMENT);
  }
    break;

  case 631:

/* Line 1455 of yacc.c  */
#line 4784 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 632:

/* Line 1455 of yacc.c  */
#line 4792 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 633:

/* Line 1455 of yacc.c  */
#line 4800 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(NamespaceNodeTest, (yylsp[(1) - (3)]));
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NAMESPACE);
  }
    break;

  case 634:

/* Line 1455 of yacc.c  */
#line 4809 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 4813 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 4817 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 4825 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 4829 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 4833 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4842 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4850 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 4863 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 4867 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 646:

/* Line 1455 of yacc.c  */
#line 4871 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 4875 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 4885 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 4893 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 4913 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 656:

/* Line 1455 of yacc.c  */
#line 4925 "../src/parser/XQParser.y"
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

  case 657:

/* Line 1455 of yacc.c  */
#line 4940 "../src/parser/XQParser.y"
    {
}
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 4943 "../src/parser/XQParser.y"
    {
}
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 4949 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 4953 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 4963 "../src/parser/XQParser.y"
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

  case 663:

/* Line 1455 of yacc.c  */
#line 4980 "../src/parser/XQParser.y"
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

  case 665:

/* Line 1455 of yacc.c  */
#line 4996 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 667:

/* Line 1455 of yacc.c  */
#line 5006 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 670:

/* Line 1455 of yacc.c  */
#line 5016 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 671:

/* Line 1455 of yacc.c  */
#line 5025 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 672:

/* Line 1455 of yacc.c  */
#line 5030 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 674:

/* Line 1455 of yacc.c  */
#line 5040 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 675:

/* Line 1455 of yacc.c  */
#line 5044 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 676:

/* Line 1455 of yacc.c  */
#line 5052 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 677:

/* Line 1455 of yacc.c  */
#line 5057 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 678:

/* Line 1455 of yacc.c  */
#line 5066 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 679:

/* Line 1455 of yacc.c  */
#line 5070 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 680:

/* Line 1455 of yacc.c  */
#line 5074 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 681:

/* Line 1455 of yacc.c  */
#line 5078 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 682:

/* Line 1455 of yacc.c  */
#line 5082 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 5086 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 5096 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 5107 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 5113 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 5119 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 5125 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 5140 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 691:

/* Line 1455 of yacc.c  */
#line 5144 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 692:

/* Line 1455 of yacc.c  */
#line 5148 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 693:

/* Line 1455 of yacc.c  */
#line 5152 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 5156 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 5160 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 696:

/* Line 1455 of yacc.c  */
#line 5164 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 697:

/* Line 1455 of yacc.c  */
#line 5168 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 698:

/* Line 1455 of yacc.c  */
#line 5176 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 699:

/* Line 1455 of yacc.c  */
#line 5180 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 5184 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 5192 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 5196 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 713:

/* Line 1455 of yacc.c  */
#line 5232 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_INSENSITIVE);
  }
    break;

  case 714:

/* Line 1455 of yacc.c  */
#line 5236 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_SENSITIVE);
  }
    break;

  case 715:

/* Line 1455 of yacc.c  */
#line 5240 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::LOWERCASE);
  }
    break;

  case 716:

/* Line 1455 of yacc.c  */
#line 5244 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::UPPERCASE);
  }
    break;

  case 717:

/* Line 1455 of yacc.c  */
#line 5253 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 718:

/* Line 1455 of yacc.c  */
#line 5257 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 719:

/* Line 1455 of yacc.c  */
#line 5265 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 720:

/* Line 1455 of yacc.c  */
#line 5269 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 721:

/* Line 1455 of yacc.c  */
#line 5279 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 5283 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 5287 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 724:

/* Line 1455 of yacc.c  */
#line 5291 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 5295 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5302 "../src/parser/XQParser.y"
    {
  }
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 5305 "../src/parser/XQParser.y"
    {
  }
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 5312 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 5316 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5320 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 5324 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 5334 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 5338 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 5342 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 735:

/* Line 1455 of yacc.c  */
#line 5349 "../src/parser/XQParser.y"
    {
  }
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 5352 "../src/parser/XQParser.y"
    {
  }
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 5360 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 5364 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 739:

/* Line 1455 of yacc.c  */
#line 5371 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 740:

/* Line 1455 of yacc.c  */
#line 5375 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 5383 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 5387 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5395 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5403 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5407 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 5415 "../src/parser/XQParser.y"
    {
}
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 5422 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 5430 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 5435 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 5440 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 5452 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 5456 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 5460 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 5464 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 5468 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 5479 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 5490 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 762:

/* Line 1455 of yacc.c  */
#line 5494 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 763:

/* Line 1455 of yacc.c  */
#line 5504 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 5512 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 765:

/* Line 1455 of yacc.c  */
#line 5519 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 5524 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 5532 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 5541 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5553 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 5565 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE,
                  MEMMGR));
  }
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 5578 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING,
                  MEMMGR));
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5589 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 5598 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5610 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, signature, (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5615 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(5) - (7)].argSpecs), (yyvsp[(6) - (7)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, signature, (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5620 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5626 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(8) - (10)].argSpecs), (yyvsp[(9) - (10)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), signature, (yyvsp[(10) - (10)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5632 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), signature, (yyvsp[(6) - (6)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5638 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(6) - (8)].argSpecs), (yyvsp[(7) - (8)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5647 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5651 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5659 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5663 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 5670 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 5675 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 5683 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 5688 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5697 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5701 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5705 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5713 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5717 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5725 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5729 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5733 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5737 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5745 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5749 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5753 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5761 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5766 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5776 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5793 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5801 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(2) - (4)].argSpecs), (yyvsp[(3) - (4)].sequenceType), MEMMGR);
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, signature, (yyvsp[(4) - (4)].astNode), false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5812 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 5817 "../src/parser/XQParser.y"
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

  case 811:

/* Line 1455 of yacc.c  */
#line 5845 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  }
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 5853 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5857 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  }
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 5864 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  }
    break;

  case 815:

/* Line 1455 of yacc.c  */
#line 5869 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 816:

/* Line 1455 of yacc.c  */
#line 5878 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;



/* Line 1455 of yacc.c  */
#line 11910 "../src/parser/XQParser.cpp"
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
#line 5913 "../src/parser/XQParser.y"


}  // namespace XQParser


