
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
#include <xqilla/ast/XQRewriteRule.hpp>
#include <xqilla/ast/XQFunctionCall.hpp>
#include <xqilla/ast/XQExprSubstitution.hpp>
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

#define REJECT_NOT_XQUERY(where,pos)    if(!QP->_lexer->isXQuery()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }
#define REJECT_NOT_VERSION11(where,pos) if(!QP->_lexer->isVersion11()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }

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
static const XMLCh sz3_0[] = { chDigit_3, chPeriod, chDigit_0, chNull };
static const XMLCh option_projection[] = { 'p', 'r', 'o', 'j', 'e', 'c', 't', 'i', 'o', 'n', 0 };
static const XMLCh option_psvi[] = { 'p', 's', 'v', 'i', 0 };
static const XMLCh option_lint[] = { 'l', 'i', 'n', 't', 0 };
static const XMLCh option_extensions[] = { 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', 0 };
static const XMLCh option_rule[] = { 'r', 'u', 'l', 'e', 0 };
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
    return WRAP(pos, new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING,
        XMLUni::fgZeroLenString, MEMMGR));
  }

  return WRAP(pos, new (MEMMGR) XQFunctionConversion(WRAP(pos, new (MEMMGR) XQSequence(MEMMGR)), seqType, MEMMGR));
}

static void DM_outputDecl(const char *type, const char *name, int size, bool privte, int line, int column, const XMLCh *body, int bodylen)
{
  XMLBuffer buf;
  printf("  {\n    DelayedModule::Decl::%s, \"%s\", %d, %s, %d, %d,\n", type, name, size,
         privte ? "true" : "false", line, column);
  printf("    \"");
  const XMLCh *ptr = body;
  const XMLCh *start = ptr;
  const XMLCh *end = body + bodylen;
  for(;ptr < end; ++ptr) {
    if(*ptr == '"') {
      if((ptr - start) == 0) buf.reset();
      else buf.set(start, ptr - start);
      printf("%s\\\"", UTF8(buf.getRawBuffer()));
      start = ptr + 1;
    }
    else if(*ptr == '\\') {
      if((ptr - start) == 0) buf.reset();
      else buf.set(start, ptr - start);
      printf("%s\\\\", UTF8(buf.getRawBuffer()));
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
  printf("%s\"\n", UTF8(buf.getRawBuffer()));
  printf("  },\n");
}

namespace XQParser {



/* Line 189 of yacc.c  */
#line 425 "../src/parser/XQParser.cpp"

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
     _LANG_REWRITE_RULE_ = 264,
     _LANG_REWRITE_PATTERN_ = 265,
     _LANG_SEQUENCE_TYPE_ = 266,
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
     _PERCENT_ = 310,
     _COLON_ = 311,
     _TILDE_ = 312,
     _MINUS_GREATER_THAN_ = 313,
     _BAR_BAR_ = 314,
     _BANG_ = 315,
     _INTEGER_LITERAL_ = 316,
     _DECIMAL_LITERAL_ = 317,
     _DOUBLE_LITERAL_ = 318,
     _ATTRIBUTE_ = 319,
     _COMMENT_ = 320,
     _DOCUMENT_NODE_ = 321,
     _NAMESPACE_NODE_ = 322,
     _NODE_ = 323,
     _PROCESSING_INSTRUCTION_ = 324,
     _SCHEMA_ATTRIBUTE_ = 325,
     _SCHEMA_ELEMENT_ = 326,
     _TEXT_ = 327,
     _EMPTY_SEQUENCE_ = 328,
     _BOUNDARY_SPACE_ = 329,
     _FT_OPTION_ = 330,
     _BASE_URI_ = 331,
     _LAX_ = 332,
     _STRICT_ = 333,
     _IDIV_ = 334,
     _CHILD_ = 335,
     _DESCENDANT_ = 336,
     _SELF_ = 337,
     _DESCENDANT_OR_SELF_ = 338,
     _FOLLOWING_SIBLING_ = 339,
     _FOLLOWING_ = 340,
     _PARENT_ = 341,
     _ANCESTOR_ = 342,
     _PRECEDING_SIBLING_ = 343,
     _PRECEDING_ = 344,
     _ANCESTOR_OR_SELF_ = 345,
     _DOCUMENT_ = 346,
     _NOT_ = 347,
     _USING_ = 348,
     _NO_ = 349,
     _SENSITIVE_ = 350,
     _INSENSITIVE_ = 351,
     _DIACRITICS_ = 352,
     _WITHOUT_ = 353,
     _WITHOUT_C_ = 354,
     _STEMMING_ = 355,
     _THESAURUS_ = 356,
     _STOP_ = 357,
     _WILDCARDS_ = 358,
     _ENTIRE_ = 359,
     _CONTENT_ = 360,
     _WORD_ = 361,
     _TYPE_ = 362,
     _START_ = 363,
     _END_ = 364,
     _MOST_ = 365,
     _SKIP_ = 366,
     _COPY_ = 367,
     _VALUE_ = 368,
     _WHITESPACE_ = 369,
     _PI_CONTENT_ = 370,
     _XML_COMMENT_CONTENT_ = 371,
     _EQ_ = 372,
     _NE_ = 373,
     _LT_ = 374,
     _LE_ = 375,
     _GT_ = 376,
     _GE_ = 377,
     _AT_ = 378,
     _QUOT_ATTR_CONTENT_ = 379,
     _APOS_ATTR_CONTENT_ = 380,
     _WHITESPACE_ELEMENT_CONTENT_ = 381,
     _ELEMENT_CONTENT_ = 382,
     _AT_LM_ = 383,
     _ORDERED_ = 384,
     _UNORDERED_ = 385,
     _QNAME_ = 386,
     _XMLNS_QNAME_ = 387,
     _CONSTR_QNAME_ = 388,
     _STRING_LITERAL_ = 389,
     _VARIABLE_ = 390,
     _NCNAME_COLON_STAR_ = 391,
     _STAR_COLON_NCNAME_ = 392,
     _PI_TARGET_ = 393,
     _PRAGMA_CONTENT_ = 394,
     _RETURN_ = 395,
     _FOR_ = 396,
     _IN_ = 397,
     _LET_ = 398,
     _WHERE_ = 399,
     _COUNT_ = 400,
     _BY_ = 401,
     _ORDER_ = 402,
     _STABLE_ = 403,
     _ASCENDING_ = 404,
     _DESCENDING_ = 405,
     _EMPTY_ = 406,
     _GREATEST_ = 407,
     _LEAST_ = 408,
     _COLLATION_ = 409,
     _SOME_ = 410,
     _EVERY_ = 411,
     _SATISFIES_ = 412,
     _TYPESWITCH_ = 413,
     _CASE_ = 414,
     _CASE_S_ = 415,
     _AS_ = 416,
     _IF_ = 417,
     _THEN_ = 418,
     _ELSE_ = 419,
     _OR_ = 420,
     _AND_ = 421,
     _INSTANCE_ = 422,
     _OF_ = 423,
     _CASTABLE_ = 424,
     _TO_ = 425,
     _DIV_ = 426,
     _MOD_ = 427,
     _UNION_ = 428,
     _INTERSECT_ = 429,
     _EXCEPT_ = 430,
     _VALIDATE_ = 431,
     _CAST_ = 432,
     _TREAT_ = 433,
     _IS_ = 434,
     _PRESERVE_ = 435,
     _STRIP_ = 436,
     _NAMESPACE_ = 437,
     _ITEM_ = 438,
     _EXTERNAL_ = 439,
     _ENCODING_ = 440,
     _NO_PRESERVE_ = 441,
     _INHERIT_ = 442,
     _NO_INHERIT_ = 443,
     _DECLARE_ = 444,
     _CONSTRUCTION_ = 445,
     _ORDERING_ = 446,
     _DEFAULT_ = 447,
     _COPY_NAMESPACES_ = 448,
     _OPTION_ = 449,
     _XQUERY_ = 450,
     _VERSION_ = 451,
     _IMPORT_ = 452,
     _SCHEMA_ = 453,
     _MODULE_ = 454,
     _ELEMENT_ = 455,
     _FUNCTION_ = 456,
     _FUNCTION_EXT_ = 457,
     _SCORE_ = 458,
     _CONTAINS_ = 459,
     _WEIGHT_ = 460,
     _WINDOW_ = 461,
     _DISTANCE_ = 462,
     _OCCURS_ = 463,
     _TIMES_ = 464,
     _SAME_ = 465,
     _DIFFERENT_ = 466,
     _LOWERCASE_ = 467,
     _UPPERCASE_ = 468,
     _RELATIONSHIP_ = 469,
     _LEVELS_ = 470,
     _LANGUAGE_ = 471,
     _ANY_ = 472,
     _ALL_ = 473,
     _PHRASE_ = 474,
     _EXACTLY_ = 475,
     _FROM_ = 476,
     _WORDS_ = 477,
     _SENTENCES_ = 478,
     _PARAGRAPHS_ = 479,
     _SENTENCE_ = 480,
     _PARAGRAPH_ = 481,
     _REPLACE_ = 482,
     _MODIFY_ = 483,
     _FIRST_ = 484,
     _INSERT_ = 485,
     _BEFORE_ = 486,
     _AFTER_ = 487,
     _REVALIDATION_ = 488,
     _WITH_ = 489,
     _NODES_ = 490,
     _RENAME_ = 491,
     _LAST_ = 492,
     _DELETE_ = 493,
     _INTO_ = 494,
     _UPDATING_ = 495,
     _ID_ = 496,
     _KEY_ = 497,
     _TEMPLATE_ = 498,
     _MATCHES_ = 499,
     _TUPLE_ = 500,
     _MAP_ = 501,
     _NAME_ = 502,
     _CALL_ = 503,
     _APPLY_ = 504,
     _TEMPLATES_ = 505,
     _MODE_ = 506,
     _FTOR_ = 507,
     _FTAND_ = 508,
     _FTNOT_ = 509,
     _TYPE_ALIAS_ = 510,
     _XSLT_END_ELEMENT_ = 511,
     _XSLT_STYLESHEET_ = 512,
     _XSLT_TEMPLATE_ = 513,
     _XSLT_VALUE_OF_ = 514,
     _XSLT_TEXT_ = 515,
     _XSLT_APPLY_TEMPLATES_ = 516,
     _XSLT_CALL_TEMPLATE_ = 517,
     _XSLT_WITH_PARAM_ = 518,
     _XSLT_SEQUENCE_ = 519,
     _XSLT_PARAM_ = 520,
     _XSLT_FUNCTION_ = 521,
     _XSLT_CHOOSE_ = 522,
     _XSLT_WHEN_ = 523,
     _XSLT_OTHERWISE_ = 524,
     _XSLT_IF_ = 525,
     _XSLT_VARIABLE_ = 526,
     _XSLT_COMMENT_ = 527,
     _XSLT_PI_ = 528,
     _XSLT_DOCUMENT_ = 529,
     _XSLT_ATTRIBUTE_ = 530,
     _XSLT_NAMESPACE_ = 531,
     _XSLT_ELEMENT_ = 532,
     _XSLT_ANALYZE_STRING_ = 533,
     _XSLT_MATCHING_SUBSTRING_ = 534,
     _XSLT_NON_MATCHING_SUBSTRING_ = 535,
     _XSLT_COPY_OF_ = 536,
     _XSLT_COPY_ = 537,
     _XSLT_FOR_EACH_ = 538,
     _XSLT_OUTPUT_ = 539,
     _XSLT_IMPORT_SCHEMA_ = 540,
     _XSLT_TYPE_ALIAS_ = 541,
     _XSLT_VERSION_ = 542,
     _XSLT_MODE_ = 543,
     _XSLT_NAME_ = 544,
     _XSLT_DOCTYPE_PUBLIC_ = 545,
     _XSLT_DOCTYPE_SYSTEM_ = 546,
     _XSLT_ENCODING_ = 547,
     _XSLT_MEDIA_TYPE_ = 548,
     _XSLT_NORMALIZATION_FORM_ = 549,
     _XSLT_STANDALONE_ = 550,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 551,
     _XSLT_NAMESPACE_STR_ = 552,
     _XSLT_SCHEMA_LOCATION_ = 553,
     _XSLT_TUNNEL_ = 554,
     _XSLT_REQUIRED_ = 555,
     _XSLT_OVERRIDE_ = 556,
     _XSLT_COPY_NAMESPACES_ = 557,
     _XSLT_INHERIT_NAMESPACES_ = 558,
     _XSLT_BYTE_ORDER_MARK_ = 559,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 560,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 561,
     _XSLT_INDENT_ = 562,
     _XSLT_OMIT_XML_DECLARATION_ = 563,
     _XSLT_UNDECLARE_PREFIXES_ = 564,
     _XSLT_MATCH_ = 565,
     _XSLT_AS_ = 566,
     _XSLT_SELECT_ = 567,
     _XSLT_PRIORITY_ = 568,
     _XSLT_TEST_ = 569,
     _XSLT_SEPARATOR_ = 570,
     _XSLT_NAMESPACE_A_ = 571,
     _XSLT_REGEX_ = 572,
     _XSLT_FLAGS_ = 573,
     _XSLT_METHOD_ = 574,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 575,
     _XSLT_USE_CHARACTER_MAPS_ = 576,
     _XSLT_ELEMENT_NAME_ = 577,
     _XSLT_XMLNS_ATTR_ = 578,
     _XSLT_ATTR_NAME_ = 579,
     _XSLT_TEXT_NODE_ = 580,
     _XSLT_WS_TEXT_NODE_ = 581,
     _HASH_DEFAULT_ = 582,
     _HASH_ALL_ = 583,
     _HASH_CURRENT_ = 584,
     _XML_ = 585,
     _HTML_ = 586,
     _XHTML_ = 587
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
#define _LANG_REWRITE_RULE_ 264
#define _LANG_REWRITE_PATTERN_ 265
#define _LANG_SEQUENCE_TYPE_ 266
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
#define _PERCENT_ 310
#define _COLON_ 311
#define _TILDE_ 312
#define _MINUS_GREATER_THAN_ 313
#define _BAR_BAR_ 314
#define _BANG_ 315
#define _INTEGER_LITERAL_ 316
#define _DECIMAL_LITERAL_ 317
#define _DOUBLE_LITERAL_ 318
#define _ATTRIBUTE_ 319
#define _COMMENT_ 320
#define _DOCUMENT_NODE_ 321
#define _NAMESPACE_NODE_ 322
#define _NODE_ 323
#define _PROCESSING_INSTRUCTION_ 324
#define _SCHEMA_ATTRIBUTE_ 325
#define _SCHEMA_ELEMENT_ 326
#define _TEXT_ 327
#define _EMPTY_SEQUENCE_ 328
#define _BOUNDARY_SPACE_ 329
#define _FT_OPTION_ 330
#define _BASE_URI_ 331
#define _LAX_ 332
#define _STRICT_ 333
#define _IDIV_ 334
#define _CHILD_ 335
#define _DESCENDANT_ 336
#define _SELF_ 337
#define _DESCENDANT_OR_SELF_ 338
#define _FOLLOWING_SIBLING_ 339
#define _FOLLOWING_ 340
#define _PARENT_ 341
#define _ANCESTOR_ 342
#define _PRECEDING_SIBLING_ 343
#define _PRECEDING_ 344
#define _ANCESTOR_OR_SELF_ 345
#define _DOCUMENT_ 346
#define _NOT_ 347
#define _USING_ 348
#define _NO_ 349
#define _SENSITIVE_ 350
#define _INSENSITIVE_ 351
#define _DIACRITICS_ 352
#define _WITHOUT_ 353
#define _WITHOUT_C_ 354
#define _STEMMING_ 355
#define _THESAURUS_ 356
#define _STOP_ 357
#define _WILDCARDS_ 358
#define _ENTIRE_ 359
#define _CONTENT_ 360
#define _WORD_ 361
#define _TYPE_ 362
#define _START_ 363
#define _END_ 364
#define _MOST_ 365
#define _SKIP_ 366
#define _COPY_ 367
#define _VALUE_ 368
#define _WHITESPACE_ 369
#define _PI_CONTENT_ 370
#define _XML_COMMENT_CONTENT_ 371
#define _EQ_ 372
#define _NE_ 373
#define _LT_ 374
#define _LE_ 375
#define _GT_ 376
#define _GE_ 377
#define _AT_ 378
#define _QUOT_ATTR_CONTENT_ 379
#define _APOS_ATTR_CONTENT_ 380
#define _WHITESPACE_ELEMENT_CONTENT_ 381
#define _ELEMENT_CONTENT_ 382
#define _AT_LM_ 383
#define _ORDERED_ 384
#define _UNORDERED_ 385
#define _QNAME_ 386
#define _XMLNS_QNAME_ 387
#define _CONSTR_QNAME_ 388
#define _STRING_LITERAL_ 389
#define _VARIABLE_ 390
#define _NCNAME_COLON_STAR_ 391
#define _STAR_COLON_NCNAME_ 392
#define _PI_TARGET_ 393
#define _PRAGMA_CONTENT_ 394
#define _RETURN_ 395
#define _FOR_ 396
#define _IN_ 397
#define _LET_ 398
#define _WHERE_ 399
#define _COUNT_ 400
#define _BY_ 401
#define _ORDER_ 402
#define _STABLE_ 403
#define _ASCENDING_ 404
#define _DESCENDING_ 405
#define _EMPTY_ 406
#define _GREATEST_ 407
#define _LEAST_ 408
#define _COLLATION_ 409
#define _SOME_ 410
#define _EVERY_ 411
#define _SATISFIES_ 412
#define _TYPESWITCH_ 413
#define _CASE_ 414
#define _CASE_S_ 415
#define _AS_ 416
#define _IF_ 417
#define _THEN_ 418
#define _ELSE_ 419
#define _OR_ 420
#define _AND_ 421
#define _INSTANCE_ 422
#define _OF_ 423
#define _CASTABLE_ 424
#define _TO_ 425
#define _DIV_ 426
#define _MOD_ 427
#define _UNION_ 428
#define _INTERSECT_ 429
#define _EXCEPT_ 430
#define _VALIDATE_ 431
#define _CAST_ 432
#define _TREAT_ 433
#define _IS_ 434
#define _PRESERVE_ 435
#define _STRIP_ 436
#define _NAMESPACE_ 437
#define _ITEM_ 438
#define _EXTERNAL_ 439
#define _ENCODING_ 440
#define _NO_PRESERVE_ 441
#define _INHERIT_ 442
#define _NO_INHERIT_ 443
#define _DECLARE_ 444
#define _CONSTRUCTION_ 445
#define _ORDERING_ 446
#define _DEFAULT_ 447
#define _COPY_NAMESPACES_ 448
#define _OPTION_ 449
#define _XQUERY_ 450
#define _VERSION_ 451
#define _IMPORT_ 452
#define _SCHEMA_ 453
#define _MODULE_ 454
#define _ELEMENT_ 455
#define _FUNCTION_ 456
#define _FUNCTION_EXT_ 457
#define _SCORE_ 458
#define _CONTAINS_ 459
#define _WEIGHT_ 460
#define _WINDOW_ 461
#define _DISTANCE_ 462
#define _OCCURS_ 463
#define _TIMES_ 464
#define _SAME_ 465
#define _DIFFERENT_ 466
#define _LOWERCASE_ 467
#define _UPPERCASE_ 468
#define _RELATIONSHIP_ 469
#define _LEVELS_ 470
#define _LANGUAGE_ 471
#define _ANY_ 472
#define _ALL_ 473
#define _PHRASE_ 474
#define _EXACTLY_ 475
#define _FROM_ 476
#define _WORDS_ 477
#define _SENTENCES_ 478
#define _PARAGRAPHS_ 479
#define _SENTENCE_ 480
#define _PARAGRAPH_ 481
#define _REPLACE_ 482
#define _MODIFY_ 483
#define _FIRST_ 484
#define _INSERT_ 485
#define _BEFORE_ 486
#define _AFTER_ 487
#define _REVALIDATION_ 488
#define _WITH_ 489
#define _NODES_ 490
#define _RENAME_ 491
#define _LAST_ 492
#define _DELETE_ 493
#define _INTO_ 494
#define _UPDATING_ 495
#define _ID_ 496
#define _KEY_ 497
#define _TEMPLATE_ 498
#define _MATCHES_ 499
#define _TUPLE_ 500
#define _MAP_ 501
#define _NAME_ 502
#define _CALL_ 503
#define _APPLY_ 504
#define _TEMPLATES_ 505
#define _MODE_ 506
#define _FTOR_ 507
#define _FTAND_ 508
#define _FTNOT_ 509
#define _TYPE_ALIAS_ 510
#define _XSLT_END_ELEMENT_ 511
#define _XSLT_STYLESHEET_ 512
#define _XSLT_TEMPLATE_ 513
#define _XSLT_VALUE_OF_ 514
#define _XSLT_TEXT_ 515
#define _XSLT_APPLY_TEMPLATES_ 516
#define _XSLT_CALL_TEMPLATE_ 517
#define _XSLT_WITH_PARAM_ 518
#define _XSLT_SEQUENCE_ 519
#define _XSLT_PARAM_ 520
#define _XSLT_FUNCTION_ 521
#define _XSLT_CHOOSE_ 522
#define _XSLT_WHEN_ 523
#define _XSLT_OTHERWISE_ 524
#define _XSLT_IF_ 525
#define _XSLT_VARIABLE_ 526
#define _XSLT_COMMENT_ 527
#define _XSLT_PI_ 528
#define _XSLT_DOCUMENT_ 529
#define _XSLT_ATTRIBUTE_ 530
#define _XSLT_NAMESPACE_ 531
#define _XSLT_ELEMENT_ 532
#define _XSLT_ANALYZE_STRING_ 533
#define _XSLT_MATCHING_SUBSTRING_ 534
#define _XSLT_NON_MATCHING_SUBSTRING_ 535
#define _XSLT_COPY_OF_ 536
#define _XSLT_COPY_ 537
#define _XSLT_FOR_EACH_ 538
#define _XSLT_OUTPUT_ 539
#define _XSLT_IMPORT_SCHEMA_ 540
#define _XSLT_TYPE_ALIAS_ 541
#define _XSLT_VERSION_ 542
#define _XSLT_MODE_ 543
#define _XSLT_NAME_ 544
#define _XSLT_DOCTYPE_PUBLIC_ 545
#define _XSLT_DOCTYPE_SYSTEM_ 546
#define _XSLT_ENCODING_ 547
#define _XSLT_MEDIA_TYPE_ 548
#define _XSLT_NORMALIZATION_FORM_ 549
#define _XSLT_STANDALONE_ 550
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 551
#define _XSLT_NAMESPACE_STR_ 552
#define _XSLT_SCHEMA_LOCATION_ 553
#define _XSLT_TUNNEL_ 554
#define _XSLT_REQUIRED_ 555
#define _XSLT_OVERRIDE_ 556
#define _XSLT_COPY_NAMESPACES_ 557
#define _XSLT_INHERIT_NAMESPACES_ 558
#define _XSLT_BYTE_ORDER_MARK_ 559
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 560
#define _XSLT_INCLUDE_CONTENT_TYPE_ 561
#define _XSLT_INDENT_ 562
#define _XSLT_OMIT_XML_DECLARATION_ 563
#define _XSLT_UNDECLARE_PREFIXES_ 564
#define _XSLT_MATCH_ 565
#define _XSLT_AS_ 566
#define _XSLT_SELECT_ 567
#define _XSLT_PRIORITY_ 568
#define _XSLT_TEST_ 569
#define _XSLT_SEPARATOR_ 570
#define _XSLT_NAMESPACE_A_ 571
#define _XSLT_REGEX_ 572
#define _XSLT_FLAGS_ 573
#define _XSLT_METHOD_ 574
#define _XSLT_CDATA_SECTION_ELEMENTS_ 575
#define _XSLT_USE_CHARACTER_MAPS_ 576
#define _XSLT_ELEMENT_NAME_ 577
#define _XSLT_XMLNS_ATTR_ 578
#define _XSLT_ATTR_NAME_ 579
#define _XSLT_TEXT_NODE_ 580
#define _XSLT_WS_TEXT_NODE_ 581
#define _HASH_DEFAULT_ 582
#define _HASH_ALL_ 583
#define _HASH_CURRENT_ 584
#define _XML_ 585
#define _HTML_ 586
#define _XHTML_ 587




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
#line 1145 "../src/parser/XQParser.cpp"

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
#define YYFINAL  405
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   9130

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  333
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  382
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1074
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1788

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   587

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
     325,   326,   327,   328,   329,   330,   331,   332
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    14,    17,    21,    24,    27,
      30,    33,    34,    43,    44,    46,    50,    54,    61,    62,
      65,    68,    71,    80,    86,    93,    95,   100,   102,   103,
     106,   109,   110,   113,   116,   119,   122,   125,   128,   131,
     136,   138,   142,   145,   149,   153,   157,   158,   161,   164,
     167,   169,   171,   173,   178,   180,   183,   187,   190,   191,
     194,   198,   200,   203,   207,   211,   214,   217,   221,   223,
     226,   230,   234,   237,   240,   244,   246,   249,   253,   257,
     260,   262,   265,   269,   272,   276,   279,   282,   285,   288,
     291,   294,   297,   300,   303,   306,   309,   313,   316,   318,
     320,   322,   324,   326,   328,   331,   334,   336,   339,   343,
     346,   348,   351,   354,   358,   362,   367,   368,   372,   375,
     376,   379,   382,   383,   386,   389,   392,   394,   396,   398,
     400,   402,   404,   406,   408,   410,   412,   414,   416,   418,
     420,   422,   424,   426,   428,   432,   434,   438,   442,   446,
     448,   450,   454,   456,   460,   464,   466,   468,   470,   471,
     474,   478,   480,   483,   484,   487,   491,   493,   496,   500,
     504,   507,   510,   514,   518,   522,   527,   529,   532,   536,
     540,   541,   545,   550,   552,   556,   560,   564,   565,   569,
     570,   574,   579,   581,   584,   588,   592,   596,   598,   602,
     606,   608,   612,   616,   620,   622,   626,   628,   632,   636,
     640,   644,   648,   650,   654,   658,   662,   664,   668,   672,
     675,   677,   681,   684,   688,   690,   693,   696,   700,   702,
     706,   710,   712,   714,   716,   718,   720,   722,   727,   734,
     736,   738,   740,   742,   744,   747,   751,   755,   759,   763,
     766,   768,   772,   776,   779,   780,   785,   788,   791,   792,
     796,   801,   805,   808,   811,   814,   817,   824,   825,   829,
     833,   837,   841,   845,   849,   853,   857,   861,   865,   867,
     869,   871,   873,   875,   877,   879,   881,   883,   885,   887,
     893,   897,   901,   907,   913,   918,   922,   926,   930,   936,
     942,   948,   950,   952,   954,   956,   961,   965,   971,   976,
     977,   980,   984,   988,   992,  1000,  1005,  1009,  1013,  1014,
    1017,  1019,  1021,  1023,  1031,  1034,  1036,  1044,  1047,  1051,
    1052,  1055,  1057,  1059,  1062,  1068,  1070,  1074,  1078,  1080,
    1084,  1088,  1090,  1094,  1096,  1098,  1100,  1102,  1104,  1106,
    1108,  1110,  1112,  1114,  1116,  1118,  1120,  1124,  1126,  1129,
    1132,  1134,  1136,  1138,  1140,  1142,  1145,  1149,  1151,  1159,
    1160,  1164,  1165,  1169,  1172,  1176,  1178,  1184,  1190,  1193,
    1197,  1201,  1206,  1210,  1212,  1216,  1222,  1224,  1225,  1227,
    1229,  1230,  1233,  1236,  1241,  1246,  1250,  1252,  1258,  1265,
    1268,  1270,  1276,  1280,  1284,  1288,  1292,  1293,  1297,  1306,
    1310,  1312,  1316,  1318,  1322,  1326,  1327,  1332,  1336,  1340,
    1344,  1348,  1352,  1356,  1360,  1364,  1368,  1372,  1376,  1380,
    1382,  1387,  1393,  1395,  1399,  1401,  1405,  1407,  1411,  1415,
    1417,  1421,  1425,  1429,  1433,  1435,  1439,  1443,  1445,  1449,
    1453,  1455,  1460,  1462,  1467,  1469,  1474,  1476,  1481,  1483,
    1486,  1489,  1491,  1493,  1495,  1497,  1502,  1508,  1514,  1518,
    1523,  1525,  1528,  1533,  1535,  1538,  1540,  1543,  1546,  1548,
    1550,  1554,  1558,  1562,  1564,  1566,  1568,  1570,  1572,  1574,
    1579,  1581,  1586,  1589,  1591,  1594,  1597,  1600,  1603,  1606,
    1609,  1612,  1615,  1618,  1620,  1623,  1625,  1628,  1631,  1634,
    1637,  1640,  1642,  1644,  1646,  1648,  1650,  1652,  1654,  1656,
    1658,  1663,  1665,  1667,  1669,  1671,  1673,  1675,  1677,  1679,
    1681,  1683,  1685,  1687,  1689,  1691,  1693,  1696,  1698,  1702,
    1705,  1707,  1712,  1717,  1721,  1726,  1730,  1732,  1734,  1736,
    1738,  1740,  1742,  1744,  1746,  1752,  1763,  1765,  1767,  1768,
    1776,  1784,  1785,  1787,  1791,  1795,  1799,  1803,  1804,  1807,
    1810,  1811,  1814,  1817,  1818,  1821,  1824,  1825,  1828,  1831,
    1832,  1835,  1838,  1841,  1844,  1848,  1849,  1851,  1855,  1857,
    1860,  1862,  1864,  1866,  1868,  1870,  1872,  1874,  1879,  1883,
    1885,  1889,  1892,  1896,  1900,  1902,  1906,  1910,  1915,  1920,
    1924,  1926,  1930,  1933,  1937,  1940,  1941,  1943,  1944,  1947,
    1950,  1954,  1955,  1957,  1959,  1961,  1965,  1967,  1969,  1971,
    1973,  1975,  1977,  1979,  1981,  1983,  1985,  1987,  1989,  1991,
    1993,  1995,  1999,  2003,  2008,  2013,  2017,  2021,  2025,  2029,
    2034,  2039,  2043,  2048,  2055,  2057,  2059,  2064,  2066,  2070,
    2075,  2082,  2090,  2092,  2094,  2099,  2101,  2103,  2105,  2107,
    2109,  2113,  2114,  2117,  2118,  2121,  2125,  2127,  2131,  2133,
    2138,  2140,  2143,  2145,  2147,  2150,  2153,  2157,  2159,  2162,
    2167,  2171,  2176,  2177,  2179,  2182,  2184,  2187,  2189,  2190,
    2194,  2197,  2201,  2205,  2210,  2212,  2216,  2220,  2223,  2226,
    2229,  2232,  2235,  2237,  2239,  2241,  2243,  2245,  2248,  2252,
    2254,  2256,  2258,  2260,  2262,  2264,  2266,  2268,  2271,  2274,
    2276,  2278,  2281,  2284,  2286,  2289,  2292,  2295,  2301,  2307,
    2310,  2311,  2315,  2318,  2323,  2328,  2335,  2340,  2344,  2349,
    2350,  2353,  2356,  2360,  2362,  2366,  2369,  2372,  2375,  2377,
    2380,  2384,  2388,  2392,  2396,  2400,  2407,  2414,  2419,  2424,
    2429,  2432,  2435,  2438,  2441,  2444,  2452,  2458,  2464,  2471,
    2475,  2477,  2482,  2484,  2486,  2488,  2490,  2492,  2494,  2500,
    2508,  2517,  2528,  2535,  2544,  2545,  2548,  2551,  2555,  2556,
    2559,  2561,  2565,  2567,  2569,  2571,  2575,  2583,  2587,  2595,
    2601,  2611,  2613,  2615,  2617,  2619,  2623,  2629,  2631,  2633,
    2637,  2642,  2646,  2651,  2653,  2655,  2661,  2662,  2665,  2672,
    2680,  2682,  2686,  2690,  2692,  2694,  2699,  2703,  2705,  2709,
    2712,  2719,  2723,  2725,  2727,  2732,  2736,  2738,  2742,  2747,
    2752,  2756,  2758,  2762,  2766,  2768,  2772,  2778,  2780,  2782,
    2788,  2791,  2792,  2795,  2799,  2808,  2810,  2814,  2816,  2820,
    2822,  2826,  2830,  2834,  2838,  2842,  2846,  2848,  2852,  2856,
    2858,  2862,  2866,  2870,  2874,  2876,  2879,  2882,  2884,  2889,
    2891,  2896,  2900,  2903,  2905,  2907,  2909,  2911,  2912,  2914,
    2916,  2920,  2922,  2925,  2927,  2929,  2931,  2933,  2935,  2937,
    2939,  2941,  2943,  2945,  2947,  2949,  2951,  2953,  2955,  2957,
    2959,  2961,  2963,  2965,  2967,  2969,  2971,  2973,  2975,  2977,
    2979,  2981,  2983,  2985,  2987,  2989,  2991,  2993,  2995,  2997,
    2999,  3001,  3003,  3005,  3007,  3009,  3011,  3013,  3015,  3017,
    3019,  3021,  3023,  3025,  3027,  3029,  3031,  3033,  3035,  3037,
    3039,  3041,  3043,  3045,  3047,  3049,  3051,  3053,  3055,  3057,
    3059,  3061,  3063,  3065,  3067,  3069,  3071,  3073,  3075,  3077,
    3079,  3081,  3083,  3085,  3087,  3089,  3091,  3093,  3095,  3097,
    3099,  3101,  3103,  3105,  3107,  3109,  3111,  3113,  3115,  3117,
    3119,  3121,  3123,  3125,  3127,  3129,  3131,  3133,  3135,  3137,
    3139,  3141,  3143,  3145,  3147,  3149,  3151,  3153,  3155,  3157,
    3159,  3161,  3163,  3165,  3167,  3169,  3171,  3173,  3175,  3177,
    3179,  3181,  3183,  3185,  3187,  3189,  3191,  3193,  3195,  3197,
    3199,  3201,  3203,  3205,  3207,  3209,  3211,  3213,  3215,  3217,
    3219,  3221,  3223,  3225,  3227,  3229,  3231,  3233,  3235,  3237,
    3239,  3241,  3243,  3245,  3247,  3249,  3251,  3253,  3255,  3257,
    3259,  3261,  3263,  3265,  3267
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     334,     0,    -1,     3,   473,    -1,     4,   335,   431,    -1,
       6,   335,   336,    -1,     5,   345,    -1,     7,   335,   339,
      -1,     8,   338,    -1,     9,   696,    -1,    10,   697,    -1,
      11,   590,    -1,    -1,   189,   459,   201,   714,   465,   466,
     472,   337,    -1,    -1,   441,    -1,   459,   465,   466,    -1,
     432,   340,   341,    -1,   199,   182,   661,    40,   612,   441,
      -1,    -1,   341,   342,    -1,   341,   343,    -1,   341,   344,
      -1,   189,   459,   201,   714,   465,   466,   472,   441,    -1,
     189,   194,   713,   134,   441,    -1,   189,   182,   661,    40,
     612,   441,    -1,   346,    -1,   257,   347,   348,   256,    -1,
     370,    -1,    -1,   347,   287,    -1,   347,   296,    -1,    -1,
     348,   349,    -1,   348,   353,    -1,   348,   358,    -1,   348,
     360,    -1,   348,   362,    -1,   348,   368,    -1,   348,   366,
      -1,   350,   355,   373,   256,    -1,   258,    -1,   350,   310,
     421,    -1,   350,   289,    -1,   350,   313,   352,    -1,   350,
     288,   351,    -1,   350,   311,   590,    -1,    -1,   351,   131,
      -1,   351,   327,    -1,   351,   328,    -1,    61,    -1,    62,
      -1,    63,    -1,   354,   355,   373,   256,    -1,   266,    -1,
     354,   289,    -1,   354,   311,   590,    -1,   354,   301,    -1,
      -1,   355,   356,    -1,   357,   373,   256,    -1,   265,    -1,
     357,   289,    -1,   357,   312,   474,    -1,   357,   311,   590,
      -1,   357,   300,    -1,   357,   299,    -1,   359,   373,   256,
      -1,   265,    -1,   359,   289,    -1,   359,   312,   474,    -1,
     359,   311,   590,    -1,   359,   300,    -1,   359,   299,    -1,
     361,   373,   256,    -1,   271,    -1,   361,   289,    -1,   361,
     312,   474,    -1,   361,   311,   590,    -1,   363,   256,    -1,
     284,    -1,   363,   289,    -1,   363,   319,   364,    -1,   363,
     304,    -1,   363,   320,   365,    -1,   363,   290,    -1,   363,
     291,    -1,   363,   292,    -1,   363,   305,    -1,   363,   306,
      -1,   363,   307,    -1,   363,   293,    -1,   363,   294,    -1,
     363,   308,    -1,   363,   295,    -1,   363,   309,    -1,   363,
     321,   365,    -1,   363,   287,    -1,   330,    -1,   331,    -1,
     332,    -1,    72,    -1,   131,    -1,   131,    -1,   365,   131,
      -1,   367,   256,    -1,   286,    -1,   367,   289,    -1,   367,
     311,   592,    -1,   369,   256,    -1,   285,    -1,   285,   297,
      -1,   285,   298,    -1,   285,   297,   298,    -1,   285,   298,
     297,    -1,   322,   371,   373,   256,    -1,    -1,   371,   324,
     372,    -1,   371,   323,    -1,    -1,   372,   472,    -1,   372,
     124,    -1,    -1,   373,   378,    -1,   373,   370,    -1,   373,
     374,    -1,   375,    -1,   377,    -1,   379,    -1,   383,    -1,
     388,    -1,   392,    -1,   390,    -1,   401,    -1,   403,    -1,
     405,    -1,   407,    -1,   409,    -1,   411,    -1,   413,    -1,
     397,    -1,   415,    -1,   417,    -1,   419,    -1,   376,   373,
     256,    -1,   259,    -1,   376,   312,   474,    -1,   376,   315,
     372,    -1,   260,   378,   256,    -1,   325,    -1,   326,    -1,
     380,   382,   256,    -1,   261,    -1,   380,   312,   474,    -1,
     380,   288,   381,    -1,   131,    -1,   327,    -1,   329,    -1,
      -1,   382,   386,    -1,   384,   385,   256,    -1,   262,    -1,
     384,   289,    -1,    -1,   385,   386,    -1,   387,   373,   256,
      -1,   263,    -1,   387,   289,    -1,   387,   312,   474,    -1,
     387,   311,   590,    -1,   387,   299,    -1,   389,   256,    -1,
     264,   312,   474,    -1,   391,   373,   256,    -1,   270,   314,
     474,    -1,   267,   393,   396,   256,    -1,   394,    -1,   393,
     394,    -1,   395,   373,   256,    -1,   268,   314,   474,    -1,
      -1,   269,   373,   256,    -1,   398,   399,   400,   256,    -1,
     278,    -1,   398,   312,   474,    -1,   398,   317,   372,    -1,
     398,   318,   372,    -1,    -1,   279,   373,   256,    -1,    -1,
     280,   373,   256,    -1,   402,   373,   256,   373,    -1,   271,
      -1,   402,   289,    -1,   402,   312,   474,    -1,   402,   311,
     590,    -1,   404,   373,   256,    -1,   272,    -1,   404,   312,
     474,    -1,   406,   373,   256,    -1,   273,    -1,   406,   289,
     372,    -1,   406,   312,   474,    -1,   408,   373,   256,    -1,
     274,    -1,   410,   373,   256,    -1,   275,    -1,   410,   289,
     372,    -1,   410,   316,   372,    -1,   410,   312,   474,    -1,
     410,   315,   372,    -1,   412,   373,   256,    -1,   276,    -1,
     412,   289,   372,    -1,   412,   312,   474,    -1,   414,   373,
     256,    -1,   277,    -1,   414,   289,   372,    -1,   414,   316,
     372,    -1,   416,   256,    -1,   281,    -1,   416,   312,   474,
      -1,   416,   302,    -1,   418,   373,   256,    -1,   282,    -1,
     418,   302,    -1,   418,   303,    -1,   420,   373,   256,    -1,
     283,    -1,   420,   312,   474,    -1,   421,    15,   422,    -1,
     422,    -1,   427,    -1,    39,    -1,   424,    -1,    39,    -1,
      33,    -1,   241,    43,   425,    44,    -1,   242,    43,   660,
      36,   426,    44,    -1,   660,    -1,   548,    -1,   546,    -1,
     548,    -1,   428,    -1,   423,   428,    -1,   424,    39,   428,
      -1,   424,    33,   428,    -1,   427,    39,   428,    -1,   427,
      33,   428,    -1,   429,   430,    -1,   541,    -1,    80,    22,
     541,    -1,    64,    22,   541,    -1,    23,   541,    -1,    -1,
     430,    24,   474,    25,    -1,   432,   435,    -1,   432,   436,
      -1,    -1,   195,   433,   441,    -1,   195,   433,   434,   441,
      -1,   195,   434,   441,    -1,   196,   134,    -1,   185,   134,
      -1,   438,   473,    -1,   437,   438,    -1,   199,   182,   661,
      40,   612,   441,    -1,    -1,   438,   439,   441,    -1,   438,
     440,   441,    -1,   438,   442,   441,    -1,   438,   444,   441,
      -1,   438,   462,   441,    -1,   438,   464,   441,    -1,   438,
     663,   441,    -1,   438,   445,   441,    -1,   438,   446,   441,
      -1,   438,   695,   441,    -1,   443,    -1,   452,    -1,   453,
      -1,   458,    -1,   447,    -1,   448,    -1,   647,    -1,   449,
      -1,   454,    -1,   457,    -1,    53,    -1,   189,   182,   661,
      40,   612,    -1,   189,    74,   180,    -1,   189,    74,   181,
      -1,   189,   192,   200,   182,   612,    -1,   189,   192,   201,
     182,   612,    -1,   189,   194,   713,   134,    -1,   189,    75,
     630,    -1,   189,   191,   129,    -1,   189,   191,   130,    -1,
     189,   192,   147,   151,   152,    -1,   189,   192,   147,   151,
     153,    -1,   189,   193,   450,    36,   451,    -1,   180,    -1,
     186,    -1,   187,    -1,   188,    -1,   189,   192,   154,   612,
      -1,   189,    76,   612,    -1,   197,   198,   456,   612,   455,
      -1,   197,   198,   612,   455,    -1,    -1,   123,   612,    -1,
     455,    36,   612,    -1,   182,   661,    40,    -1,   192,   200,
     182,    -1,   197,   199,   182,   661,    40,   612,   455,    -1,
     197,   199,   612,   455,    -1,   189,   190,   180,    -1,   189,
     190,   181,    -1,    -1,   459,   460,    -1,   461,    -1,   468,
      -1,   240,    -1,   189,   459,   135,    12,   549,   589,   463,
      -1,    13,   475,    -1,   184,    -1,   189,   459,   201,   714,
     465,   466,   467,    -1,    43,    44,    -1,    43,   470,    44,
      -1,    -1,   161,   590,    -1,   472,    -1,   184,    -1,    55,
     713,    -1,    55,   713,    43,   469,    44,    -1,   546,    -1,
     469,    36,   546,    -1,   470,    36,   471,    -1,   471,    -1,
      12,   549,   589,    -1,    51,   474,    52,    -1,   474,    -1,
     474,    36,   475,    -1,   475,    -1,   476,    -1,   496,    -1,
     499,    -1,   505,    -1,   648,    -1,   650,    -1,   653,    -1,
     652,    -1,   654,    -1,   506,    -1,   669,    -1,   670,    -1,
     477,   140,   475,    -1,   478,    -1,   477,   490,    -1,   477,
     479,    -1,   480,    -1,   485,    -1,   478,    -1,   488,    -1,
     489,    -1,   141,   481,    -1,   481,    36,   482,    -1,   482,
      -1,    12,   549,   589,   483,   484,   142,   475,    -1,    -1,
     123,    12,   549,    -1,    -1,   203,    12,   549,    -1,   143,
     486,    -1,   486,    36,   487,    -1,   487,    -1,    12,   549,
     589,    13,   475,    -1,   203,    12,   549,    13,   475,    -1,
     144,   475,    -1,   145,    12,   549,    -1,   147,   146,   491,
      -1,   148,   147,   146,   491,    -1,   491,    36,   492,    -1,
     492,    -1,   493,   494,   495,    -1,   493,   494,   495,   154,
     612,    -1,   475,    -1,    -1,   149,    -1,   150,    -1,    -1,
     151,   152,    -1,   151,   153,    -1,   155,   497,   157,   475,
      -1,   156,   497,   157,   475,    -1,   497,    36,   498,    -1,
     498,    -1,    12,   549,   589,   142,   475,    -1,   158,    43,
     474,    44,   500,   501,    -1,   500,   502,    -1,   502,    -1,
     192,    12,   549,   140,   475,    -1,   192,   140,   475,    -1,
     503,   140,   475,    -1,   159,   504,   590,    -1,   503,    15,
     590,    -1,    -1,    12,   549,   161,    -1,   162,    43,   474,
      44,   163,   475,   164,   475,    -1,   506,   165,   507,    -1,
     507,    -1,   507,   166,   508,    -1,   508,    -1,   510,    40,
     510,    -1,   510,    16,   510,    -1,    -1,   510,    27,   509,
     510,    -1,   510,    17,   510,    -1,   510,    18,   510,    -1,
     510,    19,   510,    -1,   510,   117,   510,    -1,   510,   118,
     510,    -1,   510,   119,   510,    -1,   510,   120,   510,    -1,
     510,   121,   510,    -1,   510,   122,   510,    -1,   510,   179,
     510,    -1,   510,    20,   510,    -1,   510,    21,   510,    -1,
     510,    -1,   511,   204,    72,   613,    -1,   511,   204,    72,
     613,   646,    -1,   511,    -1,   511,    59,   512,    -1,   512,
      -1,   513,   170,   513,    -1,   513,    -1,   513,    37,   514,
      -1,   513,    38,   514,    -1,   514,    -1,   514,    14,   515,
      -1,   514,   171,   515,    -1,   514,    79,   515,    -1,   514,
     172,   515,    -1,   515,    -1,   515,    15,   516,    -1,   515,
     173,   516,    -1,   516,    -1,   516,   174,   517,    -1,   516,
     175,   517,    -1,   517,    -1,   518,   167,   168,   590,    -1,
     518,    -1,   519,   178,   161,   590,    -1,   519,    -1,   520,
     169,   161,   587,    -1,   520,    -1,   521,   177,   161,   587,
      -1,   521,    -1,    38,   521,    -1,    37,   521,    -1,   522,
      -1,   523,    -1,   528,    -1,   524,    -1,   176,    51,   474,
      52,    -1,   176,    77,    51,   474,    52,    -1,   176,    78,
      51,   474,    52,    -1,   525,    51,    52,    -1,   525,    51,
     474,    52,    -1,   526,    -1,   525,   526,    -1,    35,   562,
     713,   527,    -1,   139,    -1,   114,   139,    -1,   529,    -1,
     529,   530,    -1,    33,   530,    -1,   530,    -1,    39,    -1,
     530,    39,   531,    -1,   530,    33,   531,    -1,   530,    60,
     531,    -1,   531,    -1,   532,    -1,   544,    -1,   533,    -1,
     534,    -1,   535,    -1,   533,    24,   474,    25,    -1,   538,
      -1,   534,    24,   474,    25,    -1,   536,   541,    -1,   537,
      -1,    80,    22,    -1,    81,    22,    -1,    64,    22,    -1,
      82,    22,    -1,    83,    22,    -1,    84,    22,    -1,    85,
      22,    -1,   182,    22,    -1,    23,   541,    -1,   541,    -1,
     539,   541,    -1,   540,    -1,    86,    22,    -1,    87,    22,
      -1,    88,    22,    -1,    89,    22,    -1,    90,    22,    -1,
      42,    -1,   594,    -1,   542,    -1,   662,    -1,   543,    -1,
      14,    -1,   136,    -1,   137,    -1,   545,    -1,   544,    24,
     474,    25,    -1,   677,    -1,   546,    -1,   548,    -1,   550,
      -1,   551,    -1,   554,    -1,   557,    -1,   552,    -1,   553,
      -1,   674,    -1,   547,    -1,   660,    -1,   657,    -1,   658,
      -1,   659,    -1,    12,   549,    -1,   713,    -1,    43,   474,
      44,    -1,    43,    44,    -1,    41,    -1,   129,    51,   474,
      52,    -1,   130,    51,   474,    52,    -1,   714,    43,    44,
      -1,   714,    43,   555,    44,    -1,   555,    36,   556,    -1,
     556,    -1,   475,    -1,    26,    -1,   558,    -1,   574,    -1,
     559,    -1,   570,    -1,   572,    -1,    27,   560,   561,   562,
      45,    -1,    27,   560,   561,   562,    28,   569,    34,   560,
     562,    29,    -1,   131,    -1,   132,    -1,    -1,   561,   114,
     131,   562,    46,   562,   563,    -1,   561,   114,   132,   562,
      46,   562,   564,    -1,    -1,   114,    -1,    47,   565,    48,
      -1,    49,   567,    50,    -1,    47,   566,    48,    -1,    49,
     568,    50,    -1,    -1,   565,   472,    -1,   565,   124,    -1,
      -1,   566,   472,    -1,   566,   124,    -1,    -1,   567,   472,
      -1,   567,   125,    -1,    -1,   568,   472,    -1,   568,   125,
      -1,    -1,   569,   558,    -1,   569,   472,    -1,   569,   127,
      -1,   569,   126,    -1,    31,   571,    32,    -1,    -1,   116,
      -1,    30,   138,   573,    -1,   115,    -1,   114,   115,    -1,
     575,    -1,   576,    -1,   579,    -1,   581,    -1,   582,    -1,
     583,    -1,   584,    -1,    91,    51,   474,    52,    -1,   200,
     577,   578,    -1,   133,    -1,    51,   474,    52,    -1,    51,
      52,    -1,    51,   474,    52,    -1,    64,   580,   578,    -1,
     133,    -1,    51,   474,    52,    -1,   182,   585,   578,    -1,
      72,    51,   474,    52,    -1,    65,    51,   474,    52,    -1,
      69,   585,   586,    -1,   133,    -1,    51,   474,    52,    -1,
      51,    52,    -1,    51,   474,    52,    -1,   593,   588,    -1,
      -1,    26,    -1,    -1,   161,   590,    -1,   592,   591,    -1,
      73,    43,    44,    -1,    -1,    14,    -1,    37,    -1,    26,
      -1,   183,    43,    44,    -1,   593,    -1,   594,    -1,   678,
      -1,   683,    -1,   662,    -1,   596,    -1,   605,    -1,   601,
      -1,   607,    -1,   603,    -1,   600,    -1,   598,    -1,   597,
      -1,   599,    -1,   595,    -1,    68,    43,    44,    -1,    66,
      43,    44,    -1,    66,    43,   605,    44,    -1,    66,    43,
     607,    44,    -1,    72,    43,    44,    -1,    65,    43,    44,
      -1,    67,    43,    44,    -1,    69,    43,    44,    -1,    69,
      43,   661,    44,    -1,    69,    43,   134,    44,    -1,    64,
      43,    44,    -1,    64,    43,   602,    44,    -1,    64,    43,
     602,    36,   611,    44,    -1,   609,    -1,    14,    -1,    70,
      43,   604,    44,    -1,   609,    -1,   200,    43,    44,    -1,
     200,    43,   606,    44,    -1,   200,    43,   606,    36,   611,
      44,    -1,   200,    43,   606,    36,   611,    26,    44,    -1,
     610,    -1,    14,    -1,    71,    43,   608,    44,    -1,   610,
      -1,   662,    -1,   662,    -1,   662,    -1,   134,    -1,   616,
     615,   614,    -1,    -1,   205,   512,    -1,    -1,   615,   627,
      -1,   616,   252,   617,    -1,   617,    -1,   617,   253,   618,
      -1,   618,    -1,   618,    92,   142,   619,    -1,   619,    -1,
     254,   620,    -1,   620,    -1,   621,    -1,   621,   630,    -1,
     622,   625,    -1,    43,   613,    44,    -1,   623,    -1,   546,
     624,    -1,    51,   474,    52,   624,    -1,   525,    51,    52,
      -1,   525,    51,   613,    52,    -1,    -1,   217,    -1,   217,
     106,    -1,   218,    -1,   218,   222,    -1,   219,    -1,    -1,
     208,   626,   209,    -1,   220,   513,    -1,   128,   153,   513,
      -1,   128,   110,   513,    -1,   221,   513,   170,   513,    -1,
     129,    -1,   206,   513,   628,    -1,   207,   626,   628,    -1,
     210,   629,    -1,   211,   629,    -1,   123,   108,    -1,   123,
     109,    -1,   104,   105,    -1,   222,    -1,   223,    -1,   224,
      -1,   225,    -1,   226,    -1,    93,   631,    -1,   630,    93,
     631,    -1,   643,    -1,   644,    -1,   635,    -1,   634,    -1,
     632,    -1,   633,    -1,   638,    -1,   645,    -1,   160,    96,
      -1,   160,    95,    -1,   212,    -1,   213,    -1,    97,    96,
      -1,    97,    95,    -1,   100,    -1,    94,   100,    -1,   101,
     637,    -1,   101,   192,    -1,   101,    43,   637,   636,    44,
      -1,   101,    43,   192,   636,    44,    -1,    94,   101,    -1,
      -1,   636,    36,   637,    -1,   123,   612,    -1,   123,   612,
     214,   660,    -1,   123,   612,   626,   215,    -1,   123,   612,
     214,   660,   626,   215,    -1,   102,   222,   640,   639,    -1,
      94,   102,   222,    -1,   102,   222,   192,   639,    -1,    -1,
     639,   642,    -1,   123,   612,    -1,    43,   641,    44,    -1,
     660,    -1,   641,    36,   660,    -1,   173,   640,    -1,   175,
     640,    -1,   216,   660,    -1,   103,    -1,    94,   103,    -1,
     194,   713,   134,    -1,    99,   105,   515,    -1,   189,   233,
      78,    -1,   189,   233,    77,    -1,   189,   233,   111,    -1,
     649,   475,   161,   229,   239,   475,    -1,   649,   475,   161,
     237,   239,   475,    -1,   649,   475,   239,   475,    -1,   649,
     475,   232,   475,    -1,   649,   475,   231,   475,    -1,   230,
      68,    -1,   230,   235,    -1,   651,   475,    -1,   238,    68,
      -1,   238,   235,    -1,   227,   113,   168,    68,   475,   234,
     475,    -1,   227,    68,   475,   234,   475,    -1,   236,    68,
     475,   161,   475,    -1,   112,   655,   228,   475,   140,   475,
      -1,   655,    36,   656,    -1,   656,    -1,    12,   549,    13,
     475,    -1,    61,    -1,    62,    -1,    63,    -1,   134,    -1,
     713,    -1,   713,    -1,   189,   243,   247,   713,   472,    -1,
     189,   243,   247,   713,   665,   664,   472,    -1,   189,   243,
     247,   713,   666,   244,   421,   472,    -1,   189,   243,   247,
     713,   666,   244,   421,   665,   664,   472,    -1,   189,   243,
     666,   244,   421,   472,    -1,   189,   243,   666,   244,   421,
     665,   664,   472,    -1,    -1,   161,   590,    -1,    43,    44,
      -1,    43,   470,    44,    -1,    -1,   251,   667,    -1,   668,
      -1,   667,    36,   668,    -1,   131,    -1,   327,    -1,   328,
      -1,   248,   243,   713,    -1,   248,   243,   713,   234,    43,
     672,    44,    -1,   249,   250,   475,    -1,   249,   250,   475,
     234,    43,   672,    44,    -1,   249,   250,   475,   251,   671,
      -1,   249,   250,   475,   251,   671,   234,    43,   672,    44,
      -1,   713,    -1,   327,    -1,   329,    -1,   673,    -1,   672,
      36,   673,    -1,    12,   549,   589,    13,   475,    -1,   675,
      -1,   676,    -1,   714,    54,    61,    -1,   202,   465,   589,
     472,    -1,   544,    43,    44,    -1,   544,    43,   555,    44,
      -1,   679,    -1,   681,    -1,   680,   202,    43,    14,    44,
      -1,    -1,   680,   468,    -1,   680,   202,    43,    44,   161,
     590,    -1,   680,   202,    43,   682,    44,   161,   590,    -1,
     590,    -1,   682,    36,   590,    -1,    43,   592,    44,    -1,
     684,    -1,   687,    -1,   245,    43,   685,    44,    -1,   245,
      43,    44,    -1,   686,    -1,   685,    36,   686,    -1,   713,
     589,    -1,   246,    43,   593,    36,   590,    44,    -1,   246,
      43,    44,    -1,   688,    -1,   691,    -1,   245,    51,   689,
      52,    -1,   245,    51,    52,    -1,   690,    -1,   689,    36,
     690,    -1,   713,   589,    13,   475,    -1,   246,    51,   692,
      52,    -1,   246,    51,    52,    -1,   693,    -1,   692,    36,
     693,    -1,   475,    13,   475,    -1,   694,    -1,   544,    23,
     713,    -1,   189,   255,   713,   161,   592,    -1,   698,    -1,
     701,    -1,   713,    56,   701,   699,   700,    -1,   698,   700,
      -1,    -1,   144,   475,    -1,    58,   712,   699,    -1,   162,
      43,   701,    44,   163,   701,   164,   701,    -1,   702,    -1,
     702,   165,   703,    -1,   703,    -1,   703,   166,   704,    -1,
     704,    -1,   705,   117,   705,    -1,   705,   118,   705,    -1,
     705,   121,   705,    -1,   705,   122,   705,    -1,   705,   119,
     705,    -1,   705,   120,   705,    -1,   705,    -1,   705,    37,
     706,    -1,   705,    38,   706,    -1,   706,    -1,   706,    14,
     707,    -1,   706,   171,   707,    -1,   706,    79,   707,    -1,
     706,   172,   707,    -1,   707,    -1,    37,   707,    -1,    38,
     707,    -1,   708,    -1,   708,    24,   701,    25,    -1,   709,
      -1,   714,    43,   710,    44,    -1,    43,   710,    44,    -1,
      57,   713,    -1,    61,    -1,    62,    -1,    63,    -1,   134,
      -1,    -1,   711,    -1,   701,    -1,   711,    36,   701,    -1,
     475,    -1,    57,   713,    -1,   714,    -1,    64,    -1,    65,
      -1,    66,    -1,   200,    -1,   183,    -1,   162,    -1,    68,
      -1,    69,    -1,    70,    -1,    71,    -1,    72,    -1,   158,
      -1,    73,    -1,    67,    -1,   131,    -1,    74,    -1,    75,
      -1,    76,    -1,    77,    -1,    78,    -1,    79,    -1,    80,
      -1,    81,    -1,    82,    -1,    83,    -1,    84,    -1,    85,
      -1,    86,    -1,    87,    -1,    88,    -1,    89,    -1,    90,
      -1,    91,    -1,    92,    -1,    95,    -1,    96,    -1,    97,
      -1,    98,    -1,   100,    -1,   101,    -1,   102,    -1,   103,
      -1,   104,    -1,   105,    -1,   106,    -1,   107,    -1,   108,
      -1,   109,    -1,   110,    -1,   111,    -1,   112,    -1,   113,
      -1,   117,    -1,   118,    -1,   119,    -1,   120,    -1,   121,
      -1,   122,    -1,   123,    -1,   135,    -1,   140,    -1,   141,
      -1,   142,    -1,   143,    -1,   144,    -1,   146,    -1,   147,
      -1,   148,    -1,   149,    -1,   150,    -1,   151,    -1,   152,
      -1,   153,    -1,   154,    -1,   155,    -1,   156,    -1,   157,
      -1,   159,    -1,   161,    -1,   163,    -1,   164,    -1,   165,
      -1,   166,    -1,   167,    -1,   168,    -1,   169,    -1,   170,
      -1,   171,    -1,   172,    -1,   173,    -1,   174,    -1,   175,
      -1,   176,    -1,   177,    -1,   178,    -1,   179,    -1,   180,
      -1,   181,    -1,   182,    -1,   184,    -1,   185,    -1,   186,
      -1,   187,    -1,   188,    -1,   189,    -1,   190,    -1,   191,
      -1,   192,    -1,   193,    -1,   194,    -1,   196,    -1,   197,
      -1,   198,    -1,   201,    -1,   203,    -1,    93,    -1,    94,
      -1,   204,    -1,   205,    -1,   206,    -1,   207,    -1,   208,
      -1,   209,    -1,   210,    -1,   211,    -1,   212,    -1,   213,
      -1,   214,    -1,   215,    -1,   216,    -1,   217,    -1,   218,
      -1,   219,    -1,   220,    -1,   221,    -1,   222,    -1,   223,
      -1,   224,    -1,   225,    -1,   226,    -1,   227,    -1,   228,
      -1,   229,    -1,   230,    -1,   231,    -1,   232,    -1,   233,
      -1,   234,    -1,   235,    -1,   236,    -1,   237,    -1,   238,
      -1,   239,    -1,   240,    -1,   129,    -1,   130,    -1,   241,
      -1,   242,    -1,   243,    -1,   244,    -1,   247,    -1,   248,
      -1,   249,    -1,   250,    -1,   251,    -1,   252,    -1,   253,
      -1,   254,    -1,   245,    -1,   255,    -1,   246,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   807,   807,   809,   810,   812,   814,   815,   817,   818,
     820,   828,   833,   841,   841,   844,   853,   864,   904,   907,
     908,   909,   913,   929,   956,   969,   998,  1001,  1023,  1025,
    1029,  1036,  1038,  1039,  1040,  1041,  1042,  1043,  1044,  1048,
    1067,  1072,  1077,  1084,  1089,  1094,  1103,  1106,  1112,  1117,
    1124,  1124,  1124,  1127,  1140,  1145,  1152,  1157,  1166,  1169,
    1177,  1204,  1208,  1215,  1221,  1226,  1231,  1240,  1264,  1268,
    1275,  1280,  1285,  1290,  1301,  1319,  1323,  1330,  1335,  1343,
    1368,  1371,  1374,  1377,  1380,  1383,  1386,  1389,  1392,  1395,
    1398,  1401,  1404,  1407,  1410,  1413,  1416,  1419,  1425,  1426,
    1427,  1428,  1429,  1441,  1444,  1450,  1464,  1468,  1475,  1482,
    1485,  1490,  1495,  1503,  1511,  1522,  1533,  1536,  1543,  1553,
    1556,  1561,  1570,  1573,  1578,  1583,  1591,  1592,  1593,  1594,
    1595,  1596,  1597,  1598,  1599,  1600,  1601,  1602,  1603,  1604,
    1605,  1606,  1607,  1608,  1612,  1630,  1634,  1639,  1648,  1654,
    1654,  1657,  1677,  1681,  1686,  1694,  1699,  1703,  1711,  1714,
    1722,  1735,  1739,  1750,  1753,  1761,  1779,  1783,  1790,  1795,
    1800,  1808,  1814,  1822,  1830,  1837,  1851,  1855,  1869,  1878,
    1886,  1889,  1896,  1931,  1935,  1940,  1946,  1956,  1959,  1967,
    1970,  1977,  1995,  1999,  2006,  2011,  2019,  2037,  2041,  2049,
    2071,  2075,  2082,  2090,  2099,  2107,  2145,  2149,  2156,  2163,
    2172,  2181,  2208,  2212,  2219,  2231,  2258,  2262,  2269,  2279,
    2291,  2295,  2300,  2309,  2322,  2326,  2331,  2340,  2354,  2358,
    2371,  2376,  2388,  2392,  2400,  2413,  2421,  2434,  2441,  2455,
    2455,  2458,  2458,  2480,  2484,  2488,  2506,  2524,  2534,  2548,
    2556,  2562,  2568,  2574,  2586,  2589,  2603,  2604,  2609,  2611,
    2612,  2613,  2617,  2637,  2654,  2657,  2661,  2673,  2675,  2679,
    2683,  2687,  2691,  2695,  2701,  2707,  2711,  2715,  2729,  2730,
    2731,  2732,  2733,  2734,  2735,  2736,  2740,  2740,  2743,  2747,
    2755,  2760,  2769,  2774,  2783,  2864,  2872,  2877,  2886,  2891,
    2900,  2910,  2914,  2922,  2926,  2934,  2950,  2959,  2971,  2980,
    2983,  2988,  2997,  3001,  3009,  3019,  3031,  3036,  3046,  3049,
    3056,  3056,  3060,  3072,  3079,  3083,  3091,  3100,  3104,  3112,
    3115,  3123,  3124,  3132,  3139,  3146,  3151,  3160,  3165,  3175,
    3183,  3191,  3204,  3219,  3226,  3227,  3228,  3229,  3230,  3231,
    3232,  3233,  3234,  3235,  3236,  3237,  3242,  3286,  3287,  3300,
    3307,  3307,  3310,  3310,  3310,  3315,  3322,  3326,  3330,  3342,
    3345,  3356,  3359,  3369,  3376,  3380,  3384,  3388,  3397,  3405,
    3413,  3418,  3426,  3430,  3436,  3443,  3458,  3473,  3476,  3480,
    3488,  3496,  3500,  3509,  3517,  3528,  3532,  3536,  3547,  3554,
    3563,  3567,  3571,  3579,  3597,  3602,  3612,  3615,  3623,  3631,
    3640,  3645,  3654,  3664,  3668,  3672,  3672,  3676,  3680,  3684,
    3688,  3692,  3696,  3700,  3704,  3708,  3712,  3716,  3720,  3724,
    3729,  3733,  3737,  3741,  3748,  3753,  3760,  3765,  3769,  3773,
    3778,  3782,  3786,  3790,  3794,  3799,  3803,  3807,  3812,  3816,
    3820,  3825,  3842,  3847,  3852,  3857,  3861,  3866,  3870,  3875,
    3881,  3887,  3892,  3893,  3894,  3902,  3906,  3910,  3918,  3925,
    3934,  3934,  3938,  3958,  3959,  3967,  3968,  3974,  3995,  3999,
    4013,  4019,  4032,  4036,  4040,  4040,  4044,  4045,  4054,  4055,
    4061,  4062,  4071,  4083,  4094,  4098,  4102,  4106,  4110,  4114,
    4118,  4122,  4130,  4138,  4155,  4163,  4172,  4176,  4180,  4184,
    4188,  4196,  4208,  4213,  4218,  4225,  4230,  4237,  4244,  4256,
    4257,  4261,  4267,  4268,  4269,  4270,  4271,  4272,  4273,  4274,
    4275,  4279,  4279,  4282,  4282,  4282,  4286,  4293,  4297,  4301,
    4309,  4317,  4327,  4337,  4341,  4364,  4369,  4379,  4380,  4389,
    4393,  4402,  4402,  4402,  4406,  4412,  4421,  4421,  4426,  4429,
    4438,  4449,  4449,  4454,  4458,  4465,  4469,  4480,  4483,  4488,
    4497,  4500,  4504,  4516,  4519,  4524,  4533,  4536,  4540,  4556,
    4559,  4564,  4569,  4574,  4585,  4595,  4598,  4603,  4613,  4614,
    4628,  4629,  4630,  4631,  4632,  4633,  4634,  4639,  4647,  4655,
    4659,  4667,  4671,  4680,  4687,  4691,  4701,  4709,  4717,  4725,
    4732,  4740,  4747,  4751,  4759,  4767,  4770,  4779,  4782,  4792,
    4796,  4806,  4807,  4809,  4811,  4817,  4821,  4822,  4823,  4824,
    4829,  4845,  4846,  4847,  4848,  4849,  4850,  4851,  4852,  4853,
    4854,  4859,  4867,  4871,  4878,  4889,  4897,  4905,  4914,  4918,
    4922,  4930,  4934,  4938,  4946,  4947,  4955,  4963,  4968,  4972,
    4976,  4980,  4989,  4990,  4998,  5005,  5008,  5011,  5014,  5018,
    5030,  5046,  5048,  5055,  5058,  5067,  5079,  5084,  5096,  5101,
    5105,  5110,  5115,  5120,  5121,  5130,  5135,  5139,  5145,  5149,
    5157,  5162,  5172,  5175,  5179,  5183,  5187,  5191,  5199,  5201,
    5212,  5218,  5224,  5230,  5245,  5249,  5253,  5257,  5261,  5265,
    5269,  5273,  5281,  5285,  5289,  5297,  5301,  5309,  5310,  5322,
    5323,  5324,  5325,  5326,  5327,  5328,  5329,  5337,  5341,  5345,
    5349,  5358,  5362,  5370,  5374,  5384,  5388,  5392,  5396,  5400,
    5408,  5410,  5417,  5421,  5425,  5429,  5439,  5443,  5447,  5455,
    5457,  5465,  5469,  5476,  5480,  5488,  5492,  5500,  5508,  5512,
    5520,  5527,  5535,  5540,  5545,  5557,  5561,  5565,  5569,  5573,
    5579,  5579,  5584,  5590,  5590,  5595,  5599,  5609,  5617,  5624,
    5629,  5637,  5646,  5654,  5662,  5671,  5678,  5687,  5699,  5704,
    5709,  5715,  5721,  5727,  5737,  5740,  5748,  5752,  5760,  5764,
    5772,  5777,  5786,  5790,  5794,  5802,  5806,  5814,  5818,  5822,
    5826,  5834,  5838,  5842,  5850,  5855,  5865,  5878,  5878,  5882,
    5890,  5901,  5906,  5930,  5930,  5934,  5940,  5942,  5946,  5950,
    5957,  5962,  5971,  5980,  5980,  5984,  5988,  5995,  6001,  6011,
    6019,  6024,  6030,  6030,  6034,  6042,  6049,  6050,  6058,  6067,
    6071,  6079,  6087,  6097,  6108,  6111,  6119,  6129,  6136,  6143,
    6148,  6157,  6160,  6167,  6174,  6178,  6182,  6192,  6196,  6206,
    6210,  6214,  6218,  6222,  6226,  6230,  6234,  6238,  6242,  6246,
    6250,  6254,  6258,  6262,  6266,  6270,  6274,  6278,  6282,  6286,
    6290,  6298,  6304,  6308,  6312,  6316,  6320,  6328,  6331,  6335,
    6339,  6347,  6351,  6362,  6362,  6362,  6362,  6362,  6362,  6362,
    6362,  6363,  6363,  6363,  6363,  6363,  6363,  6364,  6368,  6368,
    6368,  6368,  6368,  6368,  6368,  6368,  6368,  6368,  6369,  6369,
    6369,  6369,  6369,  6369,  6369,  6370,  6370,  6370,  6370,  6370,
    6370,  6370,  6370,  6371,  6371,  6371,  6371,  6371,  6371,  6371,
    6371,  6371,  6371,  6371,  6372,  6372,  6372,  6372,  6372,  6372,
    6372,  6372,  6372,  6372,  6372,  6372,  6373,  6373,  6373,  6373,
    6373,  6373,  6373,  6373,  6373,  6373,  6374,  6374,  6374,  6374,
    6374,  6374,  6374,  6374,  6374,  6374,  6374,  6374,  6375,  6375,
    6375,  6375,  6375,  6375,  6375,  6375,  6375,  6375,  6375,  6375,
    6376,  6376,  6376,  6376,  6376,  6376,  6376,  6376,  6376,  6377,
    6377,  6377,  6377,  6377,  6377,  6377,  6377,  6378,  6378,  6378,
    6378,  6378,  6378,  6378,  6378,  6378,  6378,  6378,  6379,  6379,
    6379,  6379,  6379,  6379,  6379,  6379,  6379,  6380,  6380,  6380,
    6380,  6380,  6380,  6380,  6380,  6380,  6380,  6381,  6381,  6381,
    6381,  6381,  6381,  6381,  6381,  6381,  6381,  6381,  6382,  6382,
    6382,  6382,  6382,  6382,  6382,  6382,  6382,  6382,  6382,  6383,
    6383,  6383,  6383,  6383,  6383
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
  "\"<Language: Function Signature>\"", "\"<Language: Rewrite Rule>\"",
  "\"<Language: Rewrite Pattern>\"", "\"<Language: SequenceType>\"",
  "\"$\"", "\":=\"", "\"*\"", "\"|\"", "\"!=\"", "\"<=\"",
  "\"> (comparison operator)\"", "\">=\"", "\"<<\"", "\">>\"", "\"::\"",
  "\"@\"", "\"[\"", "\"]\"", "\"?\"", "\"<\"", "\"> (start tag close)\"",
  "\"> (end tag close)\"", "\"<?\"", "\"<!--\"", "\"-->\"", "\"//\"",
  "\"</\"", "\"(#\"", "\",\"", "\"+\"", "\"-\"", "\"/\"",
  "\"= (comparison operator)\"", "\".\"", "\"..\"", "\"(\"", "\")\"",
  "\"/>\"", "\"=\"", "\"\\\" (open)\"", "\"\\\" (close)\"", "\"' (open)\"",
  "\"' (close)\"", "\"{\"", "\"}\"", "\";\"", "\"#\"", "\"%\"", "\":\"",
  "\"~\"", "\"->\"", "\"||\"", "\"!\"", "\"<integer literal>\"",
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
  "SelectLanguage", "XQueryNamespaces", "Start_FunctionDecl",
  "FunctionDecl_MaybeSemicolon", "Start_FunctionSignature",
  "Start_DelayedModule", "DM_ModuleDecl", "DM_Prolog", "DM_FunctionDecl",
  "DM_OptionDecl", "DM_NamespaceDecl", "Start_XSLT", "Stylesheet_XSLT",
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
  "$@1", "FTContainsExpr", "StringConcatExpr", "RangeExpr", "AdditiveExpr",
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
  "TupleEntryList", "TupleEntry", "MapConstructor", "MapEntryList",
  "MapEntry", "TupleMemberExpr", "TypeAlias", "RewriteRule",
  "RewritePattern", "RW_Rule", "RW_WhereCondition", "RW_Case",
  "RW_Pattern", "RW_OrExpr", "RW_AndExpr", "RW_ComparisonExpr",
  "RW_AdditiveExpr", "RW_MultiplicativeExpr", "RW_UnaryExpr",
  "RW_PostfixExpr", "RW_PrimaryExpr", "RW_OptionalCommaList",
  "RW_CommaList", "RW_Result", "QNameValue", "FunctionName", 0
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
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   333,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   335,   336,   337,   337,   338,   339,   340,   341,   341,
     341,   341,   342,   343,   344,   345,   346,   346,   347,   347,
     347,   348,   348,   348,   348,   348,   348,   348,   348,   349,
     350,   350,   350,   350,   350,   350,   351,   351,   351,   351,
     352,   352,   352,   353,   354,   354,   354,   354,   355,   355,
     356,   357,   357,   357,   357,   357,   357,   358,   359,   359,
     359,   359,   359,   359,   360,   361,   361,   361,   361,   362,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   364,   364,
     364,   364,   364,   365,   365,   366,   367,   367,   367,   368,
     369,   369,   369,   369,   369,   370,   371,   371,   371,   372,
     372,   372,   373,   373,   373,   373,   374,   374,   374,   374,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   375,   376,   376,   376,   377,   378,
     378,   379,   380,   380,   380,   381,   381,   381,   382,   382,
     383,   384,   384,   385,   385,   386,   387,   387,   387,   387,
     387,   388,   389,   390,   391,   392,   393,   393,   394,   395,
     396,   396,   397,   398,   398,   398,   398,   399,   399,   400,
     400,   401,   402,   402,   402,   402,   403,   404,   404,   405,
     406,   406,   406,   407,   408,   409,   410,   410,   410,   410,
     410,   411,   412,   412,   412,   413,   414,   414,   414,   415,
     416,   416,   416,   417,   418,   418,   418,   419,   420,   420,
     421,   421,   422,   422,   422,   423,   423,   424,   424,   425,
     425,   426,   426,   427,   427,   427,   427,   427,   427,   428,
     429,   429,   429,   429,   430,   430,   431,   431,   432,   432,
     432,   432,   433,   434,   435,   436,   437,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   439,   439,
     439,   439,   439,   439,   439,   439,   440,   440,   441,   442,
     443,   443,   444,   444,   445,   446,   447,   447,   448,   448,
     449,   450,   450,   451,   451,   452,   453,   454,   454,   455,
     455,   455,   456,   456,   457,   457,   458,   458,   459,   459,
     460,   460,   461,   462,   463,   463,   464,   465,   465,   466,
     466,   467,   467,   468,   468,   469,   469,   470,   470,   471,
     472,   473,   474,   474,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   476,   477,   477,   477,
     478,   478,   479,   479,   479,   480,   481,   481,   482,   483,
     483,   484,   484,   485,   486,   486,   487,   487,   488,   489,
     490,   490,   491,   491,   492,   492,   493,   494,   494,   494,
     495,   495,   495,   496,   496,   497,   497,   498,   499,   500,
     500,   501,   501,   502,   503,   503,   504,   504,   505,   506,
     506,   507,   507,   508,   508,   509,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     510,   510,   510,   511,   511,   512,   512,   513,   513,   513,
     514,   514,   514,   514,   514,   515,   515,   515,   516,   516,
     516,   517,   517,   518,   518,   519,   519,   520,   520,   521,
     521,   521,   522,   522,   522,   523,   523,   523,   524,   524,
     525,   525,   526,   527,   527,   528,   528,   528,   528,   529,
     530,   530,   530,   530,   531,   531,   532,   532,   533,   533,
     534,   534,   535,   535,   536,   536,   536,   536,   536,   536,
     536,   536,   537,   537,   538,   538,   539,   539,   539,   539,
     539,   540,   541,   541,   542,   542,   543,   543,   543,   544,
     544,   544,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   546,   546,   547,   547,   547,   548,   549,   550,   550,
     551,   552,   553,   554,   554,   555,   555,   556,   556,   557,
     557,   558,   558,   558,   559,   559,   560,   560,   561,   561,
     561,   562,   562,   563,   563,   564,   564,   565,   565,   565,
     566,   566,   566,   567,   567,   567,   568,   568,   568,   569,
     569,   569,   569,   569,   570,   571,   571,   572,   573,   573,
     574,   574,   574,   574,   574,   574,   574,   575,   576,   577,
     577,   578,   578,   579,   580,   580,   581,   582,   583,   584,
     585,   585,   586,   586,   587,   588,   588,   589,   589,   590,
     590,   591,   591,   591,   591,   592,   592,   592,   592,   592,
     593,   594,   594,   594,   594,   594,   594,   594,   594,   594,
     594,   595,   596,   596,   596,   597,   598,   599,   600,   600,
     600,   601,   601,   601,   602,   602,   603,   604,   605,   605,
     605,   605,   606,   606,   607,   608,   609,   610,   611,   612,
     613,   614,   614,   615,   615,   616,   616,   617,   617,   618,
     618,   619,   619,   620,   620,   621,   621,   621,   622,   622,
     623,   623,   624,   624,   624,   624,   624,   624,   625,   625,
     626,   626,   626,   626,   627,   627,   627,   627,   627,   627,
     627,   627,   628,   628,   628,   629,   629,   630,   630,   631,
     631,   631,   631,   631,   631,   631,   631,   632,   632,   632,
     632,   633,   633,   634,   634,   635,   635,   635,   635,   635,
     636,   636,   637,   637,   637,   637,   638,   638,   638,   639,
     639,   640,   640,   641,   641,   642,   642,   643,   644,   644,
     645,   646,   647,   647,   647,   648,   648,   648,   648,   648,
     649,   649,   650,   651,   651,   652,   652,   653,   654,   655,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   663,
     663,   663,   663,   663,   664,   664,   665,   665,   666,   666,
     667,   667,   668,   668,   668,   669,   669,   670,   670,   670,
     670,   671,   671,   671,   672,   672,   673,   674,   674,   675,
     676,   677,   677,   678,   678,   679,   680,   680,   681,   681,
     682,   682,   683,   592,   592,   684,   684,   685,   685,   686,
     687,   687,   545,   545,   688,   688,   689,   689,   690,   691,
     691,   692,   692,   693,   544,   694,   695,   696,   697,   698,
     698,   699,   699,   700,   701,   701,   702,   702,   703,   703,
     704,   704,   704,   704,   704,   704,   704,   705,   705,   705,
     706,   706,   706,   706,   706,   707,   707,   707,   708,   708,
     709,   709,   709,   709,   709,   709,   709,   710,   710,   711,
     711,   712,   545,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     3,     2,     3,     2,     2,     2,
       2,     0,     8,     0,     1,     3,     3,     6,     0,     2,
       2,     2,     8,     5,     6,     1,     4,     1,     0,     2,
       2,     0,     2,     2,     2,     2,     2,     2,     2,     4,
       1,     3,     2,     3,     3,     3,     0,     2,     2,     2,
       1,     1,     1,     4,     1,     2,     3,     2,     0,     2,
       3,     1,     2,     3,     3,     2,     2,     3,     1,     2,
       3,     3,     2,     2,     3,     1,     2,     3,     3,     2,
       1,     2,     3,     2,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     2,     3,     2,
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
       1,     3,     3,     2,     0,     4,     2,     2,     0,     3,
       4,     3,     2,     2,     2,     2,     6,     0,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       3,     3,     5,     5,     4,     3,     3,     3,     5,     5,
       5,     1,     1,     1,     1,     4,     3,     5,     4,     0,
       2,     3,     3,     3,     7,     4,     3,     3,     0,     2,
       1,     1,     1,     7,     2,     1,     7,     2,     3,     0,
       2,     1,     1,     2,     5,     1,     3,     3,     1,     3,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     2,
       1,     1,     1,     1,     1,     2,     3,     1,     7,     0,
       3,     0,     3,     2,     3,     1,     5,     5,     2,     3,
       3,     4,     3,     1,     3,     5,     1,     0,     1,     1,
       0,     2,     2,     4,     4,     3,     1,     5,     6,     2,
       1,     5,     3,     3,     3,     3,     0,     3,     8,     3,
       1,     3,     1,     3,     3,     0,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       4,     5,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     4,     1,     4,     1,     4,     1,     4,     1,     2,
       2,     1,     1,     1,     1,     4,     5,     5,     3,     4,
       1,     2,     4,     1,     2,     1,     2,     2,     1,     1,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     4,
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
       1,     1,     1,     1,     1,     1,     1,     4,     3,     1,
       3,     2,     3,     3,     1,     3,     3,     4,     4,     3,
       1,     3,     2,     3,     2,     0,     1,     0,     2,     2,
       3,     0,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     4,     4,     3,     3,     3,     3,     4,
       4,     3,     4,     6,     1,     1,     4,     1,     3,     4,
       6,     7,     1,     1,     4,     1,     1,     1,     1,     1,
       3,     0,     2,     0,     2,     3,     1,     3,     1,     4,
       1,     2,     1,     1,     2,     2,     3,     1,     2,     4,
       3,     4,     0,     1,     2,     1,     2,     1,     0,     3,
       2,     3,     3,     4,     1,     3,     3,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     2,     2,     1,     2,     2,     2,     5,     5,     2,
       0,     3,     2,     4,     4,     6,     4,     3,     4,     0,
       2,     2,     3,     1,     3,     2,     2,     2,     1,     2,
       3,     3,     3,     3,     3,     6,     6,     4,     4,     4,
       2,     2,     2,     2,     2,     7,     5,     5,     6,     3,
       1,     4,     1,     1,     1,     1,     1,     1,     5,     7,
       8,    10,     6,     8,     0,     2,     2,     3,     0,     2,
       1,     3,     1,     1,     1,     3,     7,     3,     7,     5,
       9,     1,     1,     1,     1,     3,     5,     1,     1,     3,
       4,     3,     4,     1,     1,     5,     0,     2,     6,     7,
       1,     3,     3,     1,     1,     4,     3,     1,     3,     2,
       6,     3,     1,     1,     4,     3,     1,     3,     4,     4,
       3,     1,     3,     3,     1,     3,     5,     1,     1,     5,
       2,     0,     2,     3,     8,     1,     3,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     2,     2,     1,     4,     1,
       4,     3,     2,     1,     1,     1,     1,     0,     1,     1,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
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
       0,     0,    11,     0,    11,    11,   318,     0,     0,   826,
       0,     0,   516,     0,     0,     0,   585,     0,   561,     0,
       0,   479,   540,   511,     0,     0,   782,   783,   784,   904,
     905,   906,   917,   910,   911,   912,   913,   914,   916,   919,
     920,   921,   922,   923,   924,   925,   926,   927,   928,   929,
     930,   931,   932,   933,   934,   935,   936,   937,  1019,  1020,
     938,   939,   940,   941,   942,   943,   944,   945,   946,   947,
     948,   949,   950,   951,   952,   953,   954,   955,   956,   957,
     958,   959,   960,   961,   962,  1058,  1059,   918,   785,   963,
     517,   518,   964,   965,   966,   967,   968,   969,   970,   971,
     972,   973,   974,   975,   976,   977,   978,   979,   980,   915,
     981,   982,   909,   983,   984,   985,   986,   987,   988,   989,
     990,   991,   992,   993,   994,   995,   996,   997,   998,   999,
    1000,  1001,  1002,   908,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,   907,  1017,
       0,  1018,  1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,
    1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,
    1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,
    1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,  1060,
    1061,  1062,  1063,  1072,  1074,  1064,  1065,  1066,  1067,  1068,
    1069,  1070,  1071,  1073,     2,   341,   343,   344,     0,   357,
     360,   361,   345,   346,   347,   353,   410,   412,   429,   432,
     434,   436,   439,   444,   447,   450,   452,   454,   456,   458,
     461,   462,   464,     0,   470,   463,   475,   478,   483,   484,
     486,   487,   488,     0,   493,   490,     0,   505,   503,   513,
     515,   485,   519,   522,   531,   523,   524,   525,   528,   529,
     526,   527,   549,   551,   552,   553,   550,   590,   591,   592,
     593,   594,   595,   596,   512,   640,   631,   638,   637,   639,
     636,   633,   635,   632,   634,   348,     0,   349,     0,   351,
     350,   352,   533,   534,   535,   532,   514,   354,   355,   530,
     817,   818,   521,   842,   843,   854,   787,   903,   258,    28,
     116,     5,    25,    27,     0,   258,     7,     0,   904,   905,
     906,   917,   910,   911,   912,   913,   914,   925,   926,   927,
     928,   929,   930,   931,   932,   933,   934,   935,   936,   954,
    1058,  1059,   965,   967,   978,   979,   915,   909,   996,  1002,
     907,  1044,  1047,  1053,  1055,  1072,  1074,  1065,  1066,     8,
     857,     0,   903,     0,     0,   897,     0,   893,   894,   895,
     896,     0,     9,   858,   865,   867,   869,   876,   879,   884,
     887,   889,     0,   826,   904,   905,   911,   914,   916,   908,
     907,  1072,  1074,    10,   621,   626,   627,   630,   628,   823,
       0,   824,   629,   833,   834,     1,   536,   537,   502,   556,
     557,   558,     0,   586,     0,   477,   562,     0,   460,   459,
     539,     0,   902,   496,     0,     0,   604,     0,     0,     0,
       0,     0,     0,     0,     0,   610,     0,     0,     0,     0,
       0,   494,   495,   497,   498,   499,   500,   506,   507,   508,
     509,   510,     0,     0,     0,   780,     0,     0,     0,   365,
     367,     0,     0,   373,   375,     0,     0,   396,     0,     0,
       0,     0,     0,     0,   501,     0,     0,     0,   599,     0,
       0,   617,     0,     0,   770,   771,     0,   773,   774,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   362,   359,   363,   364,   358,     0,     0,     0,     0,
       0,     0,     0,     0,   415,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   471,   476,     0,     0,     0,     0,     0,   492,   504,
       0,     0,     0,     0,   772,     0,     0,     0,     3,   267,
      31,   122,   318,     4,     6,     0,     0,   322,   319,   320,
     329,   321,     0,   860,     0,   885,   886,   899,     0,   898,
     892,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   897,     0,     0,
       0,     0,     0,   622,   624,   623,   619,     0,   827,   561,
       0,   588,   587,   584,     0,   538,   655,   651,     0,   654,
     666,     0,     0,   603,   646,     0,   642,     0,     0,     0,
       0,   647,   641,   648,     0,     0,   786,     0,     0,   609,
       0,   657,     0,   665,   667,   645,     0,     0,     0,     0,
       0,     0,     0,   617,     0,   617,     0,     0,   617,     0,
       0,     0,     0,     0,     0,     0,     0,   606,   663,   658,
       0,   662,     0,   598,     0,   327,     0,   338,   826,     0,
       0,     0,     0,   845,     0,   846,   617,   850,     0,     0,
     851,   805,   807,   342,   356,   378,     0,     0,     0,   409,
     411,   414,   417,   418,   419,   427,   428,     0,   413,   420,
     421,   422,   423,   424,   425,   426,   433,     0,   437,   438,
     435,   440,   442,   441,   443,   445,   446,   448,   449,   826,
     826,     0,     0,   468,     0,   481,   480,   482,     0,     0,
     855,     0,   548,   821,   547,     0,   546,     0,     0,     0,
       0,   543,     0,   819,     0,     0,     0,     0,     0,   256,
     257,   267,     0,    29,    30,     0,   118,   119,     0,     0,
       0,    18,   333,   826,    15,   901,   861,   861,   891,     0,
       0,   866,   868,   877,   878,   870,   871,   874,   875,   872,
     873,   880,   882,   881,   883,     0,     0,   832,   620,   625,
     836,     0,   837,   617,   841,     0,   826,   562,     0,   589,
       0,   473,   472,     0,   652,   605,   601,     0,   608,   643,
     644,   650,   649,   611,   612,     0,   656,   664,   607,   597,
       0,   779,     0,   541,   542,   369,   366,     0,     0,   374,
       0,   395,   393,   394,     0,     0,   465,     0,     0,     0,
     659,   600,   617,     0,   328,   618,     0,   820,     0,     0,
       0,     0,   844,     0,     0,     0,   849,     0,     0,     0,
     379,   386,   380,   383,   387,     0,   416,     0,     0,     0,
       0,   692,   430,   673,   676,   678,   680,   682,   683,   698,
     687,   451,   453,   455,   615,   457,   469,   489,   491,   520,
       0,   822,     0,     0,   769,   768,   767,   544,   263,   262,
     288,     0,   259,   261,     0,   265,  1008,  1015,     0,     0,
       0,   278,     0,     0,     0,   282,   283,   285,   279,   280,
     286,   287,   281,     0,     0,   264,   284,     0,     0,    26,
      40,    68,    54,    75,    80,   110,   106,    32,    58,    33,
      58,    34,   122,    35,   122,    36,     0,    38,     0,    37,
       0,   117,   115,   145,     0,   152,   161,     0,     0,     0,
     192,   197,   200,   204,   206,   212,   216,   183,   220,   224,
     228,   149,   150,   124,   125,   126,   122,   127,   123,   128,
     158,   129,   163,   130,     0,   132,   122,   131,   140,   187,
     133,   122,   134,   122,   135,   122,   136,   122,   137,   122,
     138,   122,   139,   122,   141,     0,   142,   122,   143,   122,
       0,     0,    16,     0,   330,     0,   863,     0,   900,     0,
     888,   890,     0,   835,   839,   826,     0,     0,   830,     0,
     561,   561,   579,   554,   474,     0,   668,   602,   613,   781,
       0,     0,   371,     0,     0,     0,   406,     0,   400,     0,
       0,   466,   467,     0,   339,   337,     0,   776,     0,   777,
     847,     0,   853,   852,     0,     0,   812,   813,   809,   811,
       0,   388,   389,   390,   381,     0,     0,   681,     0,   693,
     695,   697,   688,     0,   431,     0,   671,     0,     0,     0,
     684,     0,   685,   616,   614,   545,     0,     0,   260,     0,
     318,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   798,     0,     0,     0,     0,   268,   269,   270,
     271,   275,   276,   272,   273,   274,   277,   111,   112,    46,
      42,     0,   826,     0,   122,    55,    57,   826,   122,    69,
      73,    72,   826,     0,     0,    76,   826,     0,     0,    79,
      97,    81,    85,    86,    87,    91,    92,    94,    83,    88,
      89,    90,    93,    95,     0,     0,     0,   105,   107,   826,
     109,   121,   120,     0,     0,     0,   180,   176,   122,     0,
       0,   119,     0,     0,     0,     0,   162,     0,   171,     0,
     122,     0,   119,   119,   189,   193,   826,     0,     0,     0,
       0,   119,     0,     0,     0,   119,     0,   119,   119,     0,
     119,     0,     0,   119,   119,     0,   219,   222,     0,   225,
     226,     0,     0,     0,     0,     0,   318,    19,    20,    21,
       0,   335,   862,   859,     0,   838,     0,   825,   826,   826,
       0,     0,     0,     0,   653,   778,     0,     0,     0,   376,
     377,   397,     0,   826,     0,   398,   399,   826,     0,     0,
       0,   660,   340,     0,   848,     0,     0,   814,     0,     0,
     382,     0,   384,   686,   692,   690,     0,   694,   696,     0,
     675,     0,     0,   704,     0,     0,     0,     0,     0,   670,
     674,   677,     0,     0,     0,   733,     0,     0,   758,     0,
       0,   729,   730,     0,   717,   723,   724,   722,   721,   725,
     719,   720,   726,     0,     0,     0,     0,     0,   765,   766,
       0,   290,   291,   295,   669,   306,     0,   316,   317,   296,
     297,     0,     0,     0,     0,   301,   302,     0,     0,   763,
     762,   764,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   309,     0,   309,   113,   114,    44,     0,   236,   235,
     904,   925,  1060,  1061,    41,   231,     0,   234,   232,   243,
     254,   250,    45,    50,    51,    52,    43,    61,    59,   122,
       0,    56,     0,    71,    70,    67,    78,    77,    74,   101,
     102,    98,    99,   100,    82,   103,    84,    96,   108,   148,
     172,     0,   122,   177,     0,     0,   174,   146,   147,   144,
     155,   156,   157,   154,   153,   151,   166,   159,   122,   160,
     164,   173,     0,   184,   185,   186,   122,     0,   195,   194,
     122,   198,   196,   201,   202,   199,   203,   207,   209,   210,
     208,   205,   213,   214,   211,   217,   218,   215,   221,   223,
     229,   227,   329,     0,     0,     0,     0,     0,   334,     0,
     840,   828,   831,   826,   561,   561,     0,   583,   582,   581,
     580,   370,     0,     0,     0,   404,     0,     0,   405,   403,
       0,   661,   775,   617,     0,   806,   808,     0,   391,   392,
       0,   689,   691,   761,   711,   709,   710,   672,     0,     0,
     715,   716,   707,   708,   679,   734,   739,     0,   759,   732,
     731,     0,     0,   736,   735,     0,   728,   727,     0,   757,
     718,     0,     0,   700,     0,   699,     0,     0,     0,   305,
       0,     0,     0,   294,   798,   802,   803,   804,   799,   800,
       0,   826,     0,     0,     0,     0,   309,     0,   308,     0,
     315,    47,    48,    49,   253,     0,     0,     0,     0,     0,
     244,     0,     0,     0,     0,   249,    62,    66,    65,   826,
       0,     0,    39,    53,   104,   179,     0,   175,   178,   167,
     170,   826,     0,     0,   188,     0,   182,   191,     0,     0,
       0,     0,     0,   336,     0,   829,     0,     0,   561,   372,
     368,   407,     0,   402,   408,     0,   815,     0,   385,   712,
     713,   714,   705,   706,   747,   740,   740,   742,     0,     0,
     749,   749,   760,   702,   701,     0,   266,   289,   298,   299,
     292,   293,   303,   304,   300,     0,   788,   794,     0,     0,
       0,   856,   617,   329,   312,   313,   307,   310,     0,     0,
     252,   251,     0,   240,   239,     0,   230,   246,   245,   248,
     247,     0,    64,    63,    60,   181,   169,   168,   165,   190,
      13,    17,     0,     0,     0,   864,   567,   573,   559,   570,
     576,   560,     0,     0,     0,   810,     0,     0,     0,     0,
       0,   753,   751,   748,   746,   703,   796,     0,   826,     0,
       0,   801,   792,   794,     0,     0,   311,   309,   237,     0,
       0,    12,    14,     0,    23,   329,     0,     0,     0,     0,
     555,   401,   816,     0,   738,   737,   743,   744,     0,   752,
       0,     0,   750,   797,   795,   789,     0,     0,     0,   325,
     323,   332,   326,   331,   314,     0,   241,   242,   255,    24,
       0,   563,   569,   568,   564,   575,   574,   565,   572,   571,
     566,   578,   577,   741,     0,   754,   755,   756,   790,   794,
     793,   324,   238,     0,   745,     0,    22,   791
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,   308,   563,  1721,   316,   564,   771,  1022,  1237,
    1238,  1239,   311,   312,   560,   765,   947,   948,  1366,  1386,
     949,   950,  1144,  1388,  1389,   951,   952,   953,   954,   955,
     956,  1404,  1406,   957,   958,   959,   960,   983,   561,   961,
     768,   984,   985,   986,   987,   988,   989,   990,  1423,  1195,
     991,   992,  1197,  1427,  1428,   993,   994,   995,   996,   997,
    1186,  1187,  1188,  1414,   998,   999,  1204,  1437,  1000,  1001,
    1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1374,  1375,
    1376,  1377,  1662,  1755,  1378,  1379,  1380,  1575,   558,   559,
     756,   757,   759,   760,   761,   762,   918,   919,   912,   920,
     921,   922,   923,   924,   925,   926,   927,  1347,  1644,   928,
     929,   930,  1558,  1360,   931,   932,  1124,   568,   569,   933,
    1750,   934,   481,   774,  1752,   571,  1240,   676,   677,  1182,
     204,   205,   206,   207,   208,   209,   502,   210,   459,   460,
    1052,  1258,   211,   463,   464,   503,   504,   505,   872,   873,
     874,  1083,  1282,   212,   466,   467,   213,  1057,  1265,  1058,
    1059,  1263,   214,   215,   216,   217,   707,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   812,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   406,   256,   257,   258,
     259,   260,   745,   746,   261,   262,   263,   411,   609,   417,
    1688,  1691,  1726,  1728,  1727,  1729,  1253,   264,   414,   265,
     612,   266,   267,   268,   479,   623,   269,   427,   270,   271,
     272,   273,   436,   639,   893,  1104,   679,   393,   606,   394,
     395,   274,   275,   276,   277,   278,   279,   280,   281,   618,
     282,   640,   283,   670,   284,   642,   619,   643,  1045,  1335,
     882,  1299,  1096,   883,   884,   885,   886,   887,   888,   889,
     890,  1092,  1102,  1327,  1300,  1622,  1512,  1100,  1314,  1315,
    1316,  1317,  1318,  1696,  1524,  1319,  1703,  1631,  1700,  1742,
    1320,  1321,  1322,  1094,   936,   285,   286,   287,   288,   289,
     290,   291,   454,   455,   292,   293,   294,   295,   635,   296,
     937,  1709,  1647,  1354,  1548,  1549,   297,   298,  1078,  1276,
    1277,   299,   300,   301,   302,   398,   399,   400,   401,  1039,
     402,   403,   801,   802,   404,   303,   684,   685,   304,   689,
     690,   305,   938,   359,   372,   360,  1026,   573,   577,   374,
     375,   376,   377,   378,   379,   380,   381,   578,   579,   776,
     306,   307
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1561
static const yytype_int16 yypact[] =
{
     875,  4171, -1561,    45, -1561, -1561, -1561,  8251,  6574,  7006,
     251,  8251, -1561,  5629,   564,   190,   177,  4903,   236,  4415,
    4415, -1561, -1561, -1561,  2707,  8251, -1561, -1561, -1561,   286,
     246,   312,   368,   392,    63,   431,   449,   362, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561,   358,   495,   505,   514,   548,
     574,   588,   591,   611,   623,   629,   462, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561,   660, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561,   665,   681, -1561, -1561, -1561,
   -1561, -1561, -1561,   722, -1561,    40, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561,   757,   757, -1561,   700,
   -1561, -1561,   705, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561,   350, -1561, -1561, -1561,
   -1561, -1561,   279, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,   101, -1561,
     739, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561,    52, -1561, -1561,   -15, -1561,
   -1561, -1561, -1561, -1561,   709, -1561,     0, -1561, -1561, -1561,
   -1561, -1561, -1561,   733,   754, -1561,   579,   599, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561,   771, -1561, -1561,   748, -1561,
   -1561, -1561, -1561, -1561, -1561,   659,   680, -1561,   820,    12,
   -1561,    59,   145,    55,   639, -1561,   694,   689,   725,   686,
   -1561, -1561, -1561,   335, -1561, -1561,  4903,   330, -1561, -1561,
     863,   880, -1561,  5629, -1561, -1561,  5629, -1561, -1561, -1561,
   -1561,   483, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561,  4171, -1561,  4171, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561,   506,   726, -1561,
   -1561, -1561, -1561, -1561,   717,   726, -1561,     5, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
     878,   894, -1561,  6793,  6793,  6574,  8251, -1561, -1561, -1561,
   -1561,   910, -1561, -1561,   809,   822, -1561,   585,   203, -1561,
     947, -1561,   950,  7219,   957,   958,   959,   960,   962,   963,
     964,   965,   968, -1561,   418, -1561, -1561, -1561, -1561, -1561,
      20, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561,   716, -1561,   980,   330, -1561,  8251, -1561, -1561,
   -1561,   397, -1561, -1561,  6113,  4171, -1561,   966,   974,  4171,
      80,   975,   976,  7431,  4171, -1561,   970,  8251,  8251,   979,
    4171, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561,  4171,  8251,    13, -1561,  4171,  4171,  8251,   988,
   -1561,  8251,  1004,   993, -1561,  8251,   120, -1561,   126,  4171,
    4171,  4171,   981,   982, -1561,   966,  6355,  4171, -1561,   966,
     155,   870,  4171,   862, -1561, -1561,  4171, -1561, -1561,  8059,
    2951,  8251,  4171,  4171,  4171,   722,    40,  4171,  1022,   890,
     891, -1561, -1561, -1561, -1561, -1561,  4415,  4415,  4415,  4415,
    4415,  4415,  4415,  4415, -1561,  4415,  4415,  4415,  4415,  4415,
    4415,  4415,  4415,  4415,   969,  4415,  4415,  4415,  4415,  4415,
    4415,  4415,  4415,  4415,  4415,  4415,   872,   876,   881,   882,
    3195, -1561,   330,  4903,  4903,  4903,  4171,  4171, -1561, -1561,
    8251,  4171,  2219,   221, -1561,  2463,   983,   360, -1561,   847,
      28,   504, -1561, -1561, -1561,   848,  8251, -1561, -1561, -1561,
     887, -1561,  4171, -1561,  6574, -1561, -1561, -1561,  1005,  1014,
   -1561,  6574,  6793,  6793,  6793,  6793,  6793,  6793,  6793,  6793,
    6793,  6793,  6793,  6793,  6793,  6793,  6574,  6574,  1007,  1009,
    1010,  7643,  7855, -1561, -1561, -1561, -1561,  1012, -1561,   943,
     944, -1561, -1561, -1561,   232, -1561, -1561, -1561,   527, -1561,
   -1561,   393,  3439, -1561, -1561,   451, -1561,   449,   964,  1017,
    1018, -1561, -1561, -1561,  1020,  1021, -1561,   466,  3683, -1561,
    1027, -1561,  1035, -1561, -1561, -1561,   469,   476,  1071,   660,
    4171,   478,   502,   870,   722,   870,  8251,    40,   870,   757,
    4171,  4171,   567,   594,   503,  4171,  4171, -1561, -1561, -1561,
     664, -1561,   510, -1561,  8251, -1561,   675, -1561,  7006,  1034,
     852,  1025,   933, -1561,   517, -1561,   870, -1561,  1082,   521,
   -1561,   864,   174, -1561, -1561, -1561,  8251,  4171,   951,   680,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561,  4415, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561,    16,   145,   145,
     806,    55,    55,    55,    55,   639,   639, -1561, -1561,  7006,
    7006,  8251,  8251, -1561,   557, -1561, -1561, -1561,   612,   627,
   -1561,   655, -1561, -1561, -1561,   682, -1561,   491,  4171,  4171,
    4171, -1561,   685, -1561,   971,   973,    38,  1043,   917, -1561,
   -1561, -1561,  4659, -1561, -1561,   428, -1561, -1561,   641,    31,
     924, -1561,  1066,  7006, -1561, -1561,   967,   967, -1561,  6574,
    1068,   822, -1561,   203,   203,   815,   815,   815,   815,   815,
     815, -1561, -1561, -1561, -1561,  1085,  1073, -1561, -1561, -1561,
   -1561,   691, -1561,   870, -1561,  1079,  5871,   734,   412, -1561,
     984, -1561, -1561,  8251, -1561, -1561, -1561,   572, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561,   580, -1561, -1561, -1561, -1561,
    4171, -1561,   985, -1561, -1561,   995, -1561,  1106,  1107, -1561,
     986, -1561, -1561, -1561,   977,   961, -1561,   582,   584,  8251,
   -1561, -1561,   870,  1109, -1561, -1561,  4171, -1561,  4171,  4171,
    4171,  8251, -1561,  1113,  4171,  4171, -1561,  1084,  1086,  1950,
   -1561, -1561,  1095, -1561,   719,  4171, -1561,    16,  4171,   596,
     605,   575,  1033,   885,   888,  1041, -1561, -1561,  1045,   934,
   -1561, -1561, -1561, -1561,  1117, -1561, -1561, -1561, -1561, -1561,
    3927, -1561,   905,   907, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561,  1043, -1561, -1561,  8251,   547,    67,   673,  1043,  1043,
    1043, -1561,  1043,  1043,  1043, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561,  1043,  1043, -1561, -1561,  1043,  1043, -1561,
   -1561, -1561, -1561, -1561, -1561,   577, -1561, -1561,   212, -1561,
     103, -1561,   354, -1561,   161, -1561,   783, -1561,    92, -1561,
     895,   167, -1561, -1561,   619, -1561, -1561,   835,   886,   836,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561,  -146, -1561, -1561, -1561,
    -115, -1561,   866, -1561,   897, -1561, -1561, -1561, -1561,    48,
   -1561,   186, -1561,   844, -1561,  -128, -1561, -1561, -1561,   147,
   -1561,    84, -1561,  -106, -1561,    42, -1561,   607, -1561,   846,
    8433,  8251,   991,   130, -1561,  4171, -1561,   878, -1561,   997,
   -1561, -1561,  8251, -1561, -1561,  7006,  1119,  1000, -1561,   701,
     236,   236, -1561, -1561, -1561,  1120, -1561, -1561, -1561, -1561,
    4171,  1156,   987,  4171,  4171,  4171,  1157,    -5, -1561,    74,
    4171, -1561, -1561,   262, -1561, -1561,   608, -1561,   937, -1561,
   -1561,  4171, -1561, -1561,  1161,  1161, -1561, -1561,   940, -1561,
    4171, -1561, -1561,  1036,  1095,  1140,   633, -1561,    11,  1080,
     989, -1561, -1561,  1083, -1561,    16,   260,    16,  1049,   321,
    1099,   -26, -1561, -1561, -1561, -1561,  4171,  4171, -1561,  1154,
     435,   673,   753,  1045,  1061,  8251,   766,   819,   341,   297,
    8251,   242,   -43,  8251,    14,   169,    21, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561,   898,   900, -1561,
   -1561,  5145,  7006,   740,   935, -1561, -1561,  7006,   935, -1561,
   -1561, -1561,  7006,  4171,  1167, -1561,  7006,  4171,  1253, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561,   -36,  1067,  1067, -1561, -1561,  7219,
   -1561, -1561, -1561,   945,  4171,   889,   687, -1561, -1561,  4171,
    4171, -1561,  1364,  -102,  4171,   508, -1561,   518, -1561,  1452,
   -1561,  4171, -1561, -1561,   925, -1561,  7006,  4171,  1621,  4171,
    1649, -1561,  4171,  1678,  8434, -1561,  4171, -1561, -1561,  8462,
   -1561,  4171,  8491, -1561, -1561,  8519, -1561, -1561,  4171, -1561,
   -1561,  8548,  4171,  8576,   739,  1164,   337, -1561, -1561, -1561,
     702, -1561, -1561, -1561,  6574, -1561,  1162, -1561,  7006,  7006,
    1046,  1163,  1168,   311, -1561, -1561,  8251,  1196,  1075, -1561,
   -1561, -1561,  8251,  7006,    71, -1561, -1561,  7006,  4171,  1051,
    1166, -1561, -1561,  4171, -1561,  8251,   711, -1561,   713,  1170,
   -1561,   805,  1065, -1561,   575, -1561,  1169, -1561, -1561,  4415,
     888,  1115,   851, -1561,  4415,  4415,   -26,   736,   736, -1561,
   -1561,  1041,    16,   755,   869, -1561,    58,  1001, -1561,   874,
    8251, -1561, -1561,  1088, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561,   321,    47,  4415,  4415,  1015, -1561, -1561,
    1061, -1561, -1561,  1099, -1561, -1561,  1185, -1561, -1561, -1561,
   -1561,  1076,  1061,  1044,  1048, -1561, -1561,  1192,  1097, -1561,
   -1561, -1561,  8251,   -81,   990,  1072,  1220,  8433,  8251,  1038,
    1061,  1121,  8251,  1121, -1561, -1561,   -65,  5629, -1561,  1553,
     377,  1214,  1197,  1200,  1230, -1561,  5387,   746,   747, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,   398,
    8605, -1561,  8633, -1561,   771, -1561, -1561,   771, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561,  1116,  1116, -1561, -1561,
     771,  4171, -1561, -1561,   994,  8662,   771,   771,   167, -1561,
   -1561, -1561, -1561, -1561,   771, -1561, -1561, -1561,   179, -1561,
   -1561, -1561,  8690,   771,   167,   167, -1561,   998, -1561,   771,
   -1561,   771, -1561,   167,   771, -1561, -1561,   167,   771,   167,
     167, -1561,   167,   771, -1561,   167,   167, -1561,   771, -1561,
     771, -1561,   887,  1061,  8251,  8251,    32,   130, -1561,  1087,
   -1561, -1561, -1561,  7006,   236,   236,   564, -1561, -1561, -1561,
   -1561, -1561,  8251,  4171,  1092, -1561,  8251,  4171, -1561, -1561,
    4171, -1561, -1561,   870,  1161, -1561, -1561,  1161, -1561, -1561,
    1061, -1561, -1561,    55, -1561, -1561, -1561, -1561,   109,   595,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561,  1024, -1561, -1561,
   -1561,     9,  1061, -1561, -1561,    75, -1561, -1561,  1123, -1561,
   -1561,  4415,  4415,   806,    61, -1561,  1043,  1061,   824, -1561,
    1061,  1061,   793, -1561,     4, -1561, -1561, -1561,  1225, -1561,
    5145,  7219,  8251,   739,  1223,  1093,  1121,  1061,  1228,  1226,
    1228, -1561, -1561, -1561, -1561,  5629,  5629,    96,  1088,  5145,
   -1561,  5387,  5387,  5387,  5387,  1241, -1561, -1561, -1561,  7006,
    4171,  8719, -1561, -1561, -1561,   771,  8747, -1561, -1561, -1561,
   -1561,  7006,  4171,  8776, -1561,  8804, -1561,  1947,  1034,  1043,
    1227,  1135,  8433, -1561,  6574, -1561,   501,   626,   236, -1561,
   -1561, -1561,  1130, -1561, -1561,  1261, -1561,   714, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561,   158,  1088,  1061,
   -1561, -1561, -1561,   806,   806,  4415, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561,   340, -1561,  1122,  1032,   -81,
     334, -1561,   870,   887, -1561, -1561,  1228, -1561,  1061,  1061,
   -1561, -1561,  1234, -1561, -1561,  1244, -1561, -1561, -1561, -1561,
   -1561,  4171, -1561,   771, -1561, -1561, -1561,   771, -1561, -1561,
    1043, -1561,  1061,  1043,   739, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561,  1252,  4171,  4171, -1561,   718,   729,  1088,  1077,
     731, -1561, -1561,   -63,   -63,   806, -1561,   732,  7006,  1034,
    5145, -1561, -1561,  1122,    72,    29, -1561,  1121, -1561,   273,
     656, -1561, -1561,  1043, -1561,   887,   270,    43,   292,    53,
   -1561, -1561, -1561,  1159, -1561, -1561,   -26, -1561,  1088, -1561,
      41,    41, -1561, -1561, -1561, -1561,   334,  1034,  4171, -1561,
   -1561, -1561, -1561, -1561,  1228,  1243, -1561, -1561, -1561, -1561,
    1034, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561,  1078, -1561, -1561, -1561, -1561,  1122,
   -1561, -1561, -1561,  1043, -1561,  1034, -1561, -1561
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1561, -1561,   978, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561,   338, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561,   115, -1561, -1561, -1561, -1561,  1291, -1561,  -541,
    -896, -1561, -1561, -1561, -1561,   331, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561,   100, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561,   112, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1489,  -270,
   -1561, -1561, -1561, -1561, -1561, -1260, -1561, -1561, -1561,   999,
   -1561,   544, -1561, -1561, -1561,   540, -1561, -1561,  -748, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1349, -1561, -1561, -1561,    -1, -1561, -1561, -1561,
   -1561, -1561,  -314, -1441, -1561,   906, -1561,  -340,   456,  -646,
     546,    95,   318, -1561, -1561,  1102, -1561, -1561, -1561,   658,
   -1561, -1561, -1561, -1561,   661, -1561, -1561, -1561,   438,   235,
   -1561, -1561, -1561, -1561,  1210,   662, -1561, -1561, -1561,   263,
   -1561, -1561, -1561, -1561,   816,   817, -1561,  -382, -1561,  -516,
    -505,   459,  -491,   454,   455, -1561, -1561, -1561,   972, -1561,
   -1561, -1561,  -700,  -225, -1561, -1561, -1561,    17,   290, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,    44, -1561,
   -1561, -1561, -1561,  -697, -1561, -1479,  -430, -1561, -1561, -1561,
   -1561, -1561,   770,   426, -1561,    76, -1561,  -148, -1561,  -598,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561,   316, -1561, -1561, -1561, -1561,
   -1561, -1561,  1199, -1561,   600, -1561,  -643,  -648, -1561,  -370,
    -526,    23, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561,   903, -1561,   904, -1561,   899,   859,   488, -1061,
    -850, -1561, -1561, -1561,   243,   244,    37,   461, -1561, -1561,
   -1561,    60, -1561, -1280, -1561,  -167,    49,   233,    25, -1561,
   -1561, -1561, -1561,  -277, -1496, -1561,  -279,  -745, -1561, -1561,
   -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561,   704, -1561, -1561, -1561, -1289,  -873,    10,
   -1561, -1560, -1558,  -190, -1561,  -293, -1561, -1561, -1561, -1033,
    -137, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561, -1561,
   -1561, -1561, -1561,   326, -1561, -1561, -1561,   498, -1561, -1561,
     496, -1561, -1561, -1561, -1561, -1561,   586,   347,    18, -1561,
     780,   781,   339,   413,  -319, -1561, -1561,   768, -1561, -1561,
     298,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -319
static const yytype_int16 yytable[] =
{
     362,   382,   362,   570,   362,   317,   362,   716,   541,   913,
     835,   808,   837,   598,  1560,   840,  1509,   880,   362,   397,
     881,  1598,   720,   648,  1529,  1626,   373,  1085,   653,  1420,
     855,   655,   396,   857,   415,   658,  1399,   721,   722,   723,
     724,  1109,  1278,   863,   575,   576,    18,  1645,   480,   649,
    1545,    18,   461,   484,   877,   856,  1154,   408,  1158,   877,
     566,  1650,   878,  1285,  1361,  1363,  1561,   878,   487,   566,
     532,   523,    26,    27,    28,   566,   805,    26,    27,    28,
     856,   891,   892,  1486,  1628,  1748,   566,   566,  1663,  1267,
    1192,   910,  1713,  1764,   856,  1400,   525,   526,   525,   526,
    1199,  1521,  1324,  1770,   856,  1208,   433,  1210,    11,  1213,
    1740,  1214,  1741,  1219,   434,  1222,  1570,  1225,  1628,   421,
     482,  1231,  -318,  1233,   626,  1024,   701,   702,   703,   704,
     705,   706,  1522,   708,   709,   710,   711,   712,   713,   714,
     715,  1112,  1113,  1114,   476,    88,   525,   526,  1235,  1356,
      88,   627,   477,  1747,  1056,  1334,   659,  1531,  1038,   528,
    1034,  1211,   659,  1108,  1629,   483,  1190,   674,  1765,  1191,
    1127,  1128,  1129,  1193,  1130,  1131,  1132,   880,  1771,   880,
     881,  1522,   881,  1223,  1212,  1133,  1134,  1264,  1779,  1135,
    1136,    26,    27,    28,  1325,  1326,   435,  1194,  1629,   675,
    1532,  1625,  -318,  1362,  1352,   894,   894,  1656,  1353,  1064,
    1224,  1487,  1715,  1751,  1268,  1357,   524,   592,   856,  1785,
     485,  1746,   607,   754,   529,  1421,   838,  1422,   533,   527,
      88,  1635,  1020,  1602,   478,   488,   362,  1773,  1286,   362,
    1757,   650,  1336,   462,   852,   567,  1546,  1547,  1390,  1115,
    1523,   405,  1392,   542,   567,  1353,  1749,  1116,  1117,  1118,
    1119,  1120,  1562,  1563,    88,   879,   870,  1630,  -318,  1536,
     879,   567,   567,   791,   792,   793,   794,   660,  1664,  1665,
     628,  1539,   593,   661,  1760,    11,  1324,   548,  1270,   428,
     549,  1181,  1415,   413,  1401,  1402,  1403,   429,  1226,  1556,
    1121,   474,   309,  1334,  1432,   361,  1271,  -318,   423,   407,
    1122,  1667,  1668,  1669,  1670,   763,   530,   531,  1761,  1349,
    1350,   856,  1123,   422,   764,   876,  1241,  1200,   412,   424,
     434,  1619,  1620,  1621,    26,    27,    28,   425,    14,  1701,
    1767,    15,    16,   856,  1227,  1476,   810,  1699,  1177,  1569,
     416,  1358,   674,  1351,  1228,   430,   382,   382,   382,   362,
    1201,  1359,   856,   543,  1291,  1202,  1203,   310,  1754,   544,
      18,   811,  1698,  1220,   594,   595,   362,  1645,  1325,  1326,
     441,  1178,   747,  1292,  1706,   856,   540,  1246,   880,  1293,
     545,   881,  1145,   397,  1762,   880,  1221,   880,   881,  1565,
     881,   471,  1599,  1179,  1146,   439,   396,    88,   868,  1736,
     362,   431,   435,   440,  1147,  1303,  1768,   362,  1304,   426,
     424,  1305,  1306,  1307,  1308,   869,   362,   472,   473,   493,
     362,   362,   603,   493,   620,   432,  1215,  1477,  1478,  1618,
    1042,   615,  1251,  1252,   604,   815,   362,   620,   644,  1775,
    1155,   362,   748,   749,   362,   605,  1774,  1043,   362,  1216,
     750,  1627,  1217,  1218,  1617,  1294,  1295,  1296,  1589,   362,
    1297,  1298,  1156,  1157,   437,  1205,  1637,  1345,  1590,  1640,
    1641,  1309,   362,  1346,   362,  1554,   644,   493,  1341,  1559,
    1591,  1592,   438,  1581,  1382,  1342,  1657,  1206,  1207,  1391,
    1139,  1140,   493,   818,  1393,   493,   550,   551,  1396,  1112,
    1113,  1114,   493,   452,   493,  1310,  1586,   442,   823,  1464,
     621,   828,  1141,  1142,   625,  1143,   552,   443,   829,   637,
     833,  1465,  1593,  1311,  1312,   646,   444,  1313,   493,   493,
    1595,  1343,  1344,   362,  1597,   754,   493,   647,  1686,   555,
    1687,   651,   652,   861,   834,   846,   755,   865,  1438,   362,
     556,   769,   851,   813,   662,   663,   664,   382,  1702,   862,
     445,   814,   672,   866,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     382,  1600,   777,   493,   362,   362,   446,  1716,  1717,   780,
    1471,  1472,   880,   493,   553,   881,   554,  1479,   493,   896,
     447,   844,   397,   448,   795,  1485,   493,  1115,   493,  1488,
     493,  1723,   584,   585,  1047,  1116,  1117,  1118,  1119,  1120,
     493,    18,  1048,   449,  1061,   734,  1062,   897,   845,   877,
      18,   738,   739,  1149,   493,   450,   741,   878,   493,   362,
    1418,   451,   898,  1150,  1151,   541,  1088,    26,    27,    28,
    1272,  1434,  1435,   493,   580,  1152,  1153,   362,  1121,   493,
    1443,   362,   453,  1689,  1447,  1690,  1449,  1450,  1122,  1452,
     899,  1758,  1455,  1456,   939,  1284,   940,  1576,   397,   362,
    1123,   493,   493,   941,   942,   409,   410,  1577,  1578,   943,
     849,   396,   586,   587,   588,   589,   590,   591,   850,  1579,
    1580,   853,   944,   945,   946,   614,   456,   817,   900,   854,
     902,   900,   362,   362,   362,   362,   901,  1032,   903,   907,
      88,   636,   457,   825,   458,  1033,  1110,  1249,  1467,   397,
     397,   397,   397,   469,  1111,  1250,  1468,  1494,   470,  1494,
    1494,   407,   396,   396,  1733,  1495,   407,  1496,  1695,   407,
     847,   848,  1734,   407,  1425,  1733,   362,  1738,   853,   465,
    1603,  1426,   382,  1735,  1429,  1739,  1743,   486,  1507,  1571,
    1573,  1426,   480,   397,   489,  1572,  1574,   686,  1636,   691,
    1508,   667,  1089,  1090,  1091,   673,   396,  1028,  1503,   362,
     680,  1383,  1384,  1385,   682,   490,   362,   493,   688,  1408,
     692,   693,   694,   534,   535,   695,   397,  1619,  1620,  1621,
    1533,  1534,   491,  1046,   506,  1605,  1481,   766,   767,   396,
     610,   611,  1484,   735,   736,   737,   508,   509,   510,   511,
     512,   513,   362,   525,   526,  1493,   507,   514,   740,   492,
    1615,  1681,   584,   585,   362,  1515,  1516,  1517,  1518,  1046,
     515,   536,   362,   539,   772,  1040,  1041,   537,  1081,  1082,
     744,  1125,  1126,   744,  1137,  1138,  1606,  1607,     1,     2,
       3,     4,     5,     6,     7,     8,     9,   546,   494,   495,
     775,   496,   497,   498,   538,   499,   500,   962,  1646,   803,
     963,   964,   965,   966,   547,   967,   562,   362,   968,  1229,
    1230,   969,   970,   971,   972,   973,   974,   975,   976,   977,
    1462,   557,   978,   979,   980,   785,   786,   787,   788,   789,
     790,  1672,  1722,  1331,  1332,  1724,   572,   516,   517,   518,
     519,   520,   521,  1676,   981,   982,  1337,  1338,  1339,  1340,
     574,  1066,  1680,   581,   407,  1185,  1412,  1498,  1499,  1505,
    1506,  1510,  1511,   310,  1519,  1520,   981,   982,   832,  1526,
    1527,   596,   407,  1086,   582,  1759,  1638,  1639,   842,   843,
    1642,  1643,   314,   315,   718,   719,   725,   726,   583,   727,
     728,   418,   419,   597,   407,  1776,  1777,   783,   784,   522,
     424,   428,   433,   439,  1712,   599,   600,   476,   601,  1714,
    1692,   602,   613,  1234,   362,   871,   656,   622,   624,   631,
     632,   638,  1756,   645,   654,   362,  1633,  1634,   362,   657,
     681,   678,   665,   666,   696,  1786,   697,   730,   698,  1159,
     729,   717,   731,   732,   753,   397,   758,   770,   773,   778,
     779,   797,  1609,   798,   799,   806,  1612,   807,   396,   809,
    1744,   819,   820,  1745,   821,   822,   904,   905,   906,  1753,
    1160,   826,  1161,  1162,  1163,  1164,  1165,  1166,  1167,   827,
    1763,  1766,  1769,  1772,   830,   856,   858,  1168,  1169,  1170,
    1171,  1172,  1173,   859,   860,   864,   910,   875,   867,   914,
    1778,  1780,  1174,  1175,  1176,   908,  1021,   909,   362,  1023,
    1030,  1025,  1029,   362,  1783,  1035,   362,  1031,  1051,  1053,
    1054,   674,  1652,  1044,  1060,  1050,  1071,  1074,  1055,  1075,
    1705,  1080,  1093,  1098,   362,   362,  1056,  1095,  1099,  1787,
     362,  1097,  1101,  1103,  1106,   362,  1107,  1184,  1049,   362,
    1189,  1180,   397,  1198,  1185,  1196,  1209,   397,  1232,   686,
    1244,  1248,   397,  1247,  1254,   396,   397,  1079,  1256,  1262,
     396,  1273,   362,  1275,  1279,   396,  1067,  1068,  1069,   396,
    1236,  1651,  1072,   688,  1283,  1381,  1287,  1281,  1289,   397,
    1257,  1302,  1323,   871,  1330,  1334,  1364,  1365,  1405,   362,
    1387,  1409,   396,  1411,  1463,  1436,  1470,  1473,  1482,  1474,
    1491,  1288,   636,  1497,  1475,  1490,   397,  1483,   744,  1500,
    1504,  1502,    88,  1525,  1535,  1537,  1540,  1538,  1542,   396,
    1541,  1543,  1552,  1551,  1550,  1466,  1566,   382,  1555,  1653,
    1567,   362,   362,  1568,  1557,  1569,  1624,  1584,  1394,   362,
    1587,  1604,  1397,  1611,  1596,   362,   362,  1632,   397,   397,
     362,  1649,  1469,  1654,  1658,  1671,  1659,  1682,   362,  1683,
    1693,   396,   396,   397,  1694,  1655,  1710,   397,  1718,  1410,
    1719,  1730,  1522,  1708,  1416,  1417,   396,  1782,  1148,  1424,
     396,  1407,  1737,  1784,   313,  1183,  1433,  1430,  1413,  1666,
     911,   915,  1439,   362,  1441,  1707,   608,  1444,   935,  1065,
     501,  1448,   836,  1084,   565,  1280,  1453,   468,   839,   636,
    1266,   841,   699,  1458,   700,   752,  1105,  1460,  1608,  1480,
     803,   475,   895,   629,   630,   671,   641,  1063,  1290,  1514,
    1087,  1301,  1623,  1242,  1501,   362,  1333,  1513,  1530,  1697,
    1553,   362,  1704,   831,  1648,   362,  1711,  1616,  1245,  1070,
     362,  1073,   781,  1027,   782,   796,     0,     0,  1255,   362,
    1725,  1259,  1260,  1261,  1243,     0,     0,     0,  1269,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1274,
       0,     0,     0,     0,     0,     0,     0,     0,   871,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1564,     0,   636,     0,     0,     0,     0,  1348,     0,
    1381,  1355,     0,  1395,  1328,  1329,   963,   964,   965,   966,
       0,   967,     0,     0,   968,     0,     0,   969,   970,   971,
     972,   973,   974,   975,   976,   977,     0,     0,   978,   979,
     980,     0,     0,     0,     0,     0,     0,   362,   362,     0,
       0,     0,     0,     0,     0,     0,   362,     0,     0,     0,
       0,     0,     0,     0,     0,   362,     0,     0,     0,   362,
       0,     0,     0,   397,     0,     0,     0,     0,     0,   310,
       0,     0,   981,   982,     0,     0,   396,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1585,     0,     0,  1398,
       0,     0,   963,   964,   965,   966,     0,   967,     0,     0,
     968,     0,     0,   969,   970,   971,   972,   973,   974,   975,
     976,   977,     0,     0,   978,   979,   980,     0,     0,     0,
       0,     0,     0,   362,   362,   362,     0,     0,     0,     0,
       0,     0,     0,     0,   407,     0,     0,     0,   362,   362,
     407,   397,   362,     0,   362,   362,   362,   362,  -233,     0,
       0,     0,   362,   407,   396,   310,     0,     0,   981,   982,
       0,     0,     0,     0,   362,     0,  1489,     0,     0,   397,
       0,  1492,     0,     0,  1381,  1684,  -233,   382,     0,     0,
       0,   397,   396,     0,  -233,     0,     0,     0,  1528,  1660,
    1661,     0,     0,  1381,   396,  1381,  1381,  1381,  1381,     0,
    1419,     0,  1685,   963,   964,   965,   966,     0,   967,     0,
       0,   968,     0,     0,   969,   970,   971,   972,   973,   974,
     975,   976,   977,     0,     0,   978,   979,   980,     0,     0,
    1544,     0,     0,     0,     0,     0,   636,     0,     0,     0,
     636,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1673,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   310,  1677,     0,   981,
     982,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   362,     0,   362,     0,     0,     0,     0,  1431,     0,
       0,   963,   964,   965,   966,     0,   967,     0,   397,   968,
       0,     0,   969,   970,   971,   972,   973,   974,   975,   976,
     977,   396,     0,   978,   979,   980,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1381,     0,     0,     0,     0,     0,
       0,     0,   636,  1601,     0,     0,  1720,     0,     0,     0,
       0,     0,     0,     0,   310,     0,     0,   981,   982,     0,
     407,     0,     0,     0,   407,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1610,     0,     0,     0,  1613,     0,     0,  1614,  -233,
       0,     0,  -233,  -233,  -233,  -233,     0,  -233,  -233,     0,
    -233,     0,     0,  -233,  -233,  -233,  -233,  -233,  -233,  -233,
    -233,  -233,     0,     0,  -233,  -233,  -233,     0,     0,     0,
       0,  -233,  -233,     0,     0,     0,     0,     0,     0,     0,
     407,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -233,  -233,     0,  -233,     0,     0,     0,
       0,     0,     0,     0,     0,  -233,     0,  1440,  -233,  -233,
     963,   964,   965,   966,     0,   967,     0,     0,   968,     0,
       0,   969,   970,   971,   972,   973,   974,   975,   976,   977,
       0,     0,   978,   979,   980,  1442,     0,     0,   963,   964,
     965,   966,     0,   967,     0,     0,   968,     0,     0,   969,
     970,   971,   972,   973,   974,   975,   976,   977,     0,     0,
     978,   979,   980,     0,  1445,     0,     0,   963,   964,   965,
     966,     0,   967,   310,     0,   968,   981,   982,   969,   970,
     971,   972,   973,   974,   975,   976,   977,     0,     0,   978,
     979,   980,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   310,     0,     0,   981,   982,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     310,     0,     0,   981,   982,     0,     0,     0,     0,     0,
       0,  1731,  1732,     0,   318,   319,   320,   321,   322,   323,
     324,   325,   326,    38,    39,    40,    41,    42,    43,    44,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    57,    58,    59,    60,    61,    62,    63,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,   339,    77,     0,     0,  1781,    78,    79,    80,
      81,    82,    83,    84,     0,     0,     0,     0,     0,   340,
     341,    87,     0,     0,     0,    89,     0,     0,     0,     0,
      92,   342,    94,   343,    96,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   344,   345,   108,   346,   110,
       0,   111,   347,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   348,   127,   128,   129,
     130,   131,   349,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,     0,   145,   146,   147,     0,
     350,   149,     0,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   351,   176,   177,
     352,   179,   180,   181,   182,   183,   353,   185,   354,   187,
     188,   189,   190,   191,   192,   355,   356,   195,   357,   358,
     198,   199,   200,   201,   202,   203,   963,   964,   965,   966,
       0,   967,     0,     0,   968,     0,     0,   969,   970,   971,
     972,   973,   974,   975,   976,   977,     0,     0,   978,   979,
     980,    11,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,   742,    14,     0,     0,    15,
      16,     0,    17,     0,    18,     0,    19,    20,    21,     0,
      22,    23,    24,   743,     0,     0,     0,     0,     0,   310,
       0,     0,   981,   982,     0,     0,    25,  1076,     0,  1077,
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
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,   145,   146,   147,     0,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,    11,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,   742,
      14,     0,     0,    15,    16,     0,    17,     0,    18,     0,
      19,    20,    21,     0,    22,    23,    24,   751,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,    26,    27,    28,    29,    30,    31,
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
     195,   196,   197,   198,   199,   200,   201,   202,   203,    11,
       0,    12,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     0,     0,     0,    14,     0,     0,    15,    16,     0,
      17,     0,    18,     0,    19,    20,    21,     0,    22,    23,
      24,   420,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,     0,    26,    27,
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
     201,   202,   203,    11,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     0,     0,     0,    14,     0,
       0,    15,    16,     0,    17,     0,    18,     0,    19,    20,
      21,     0,    22,    23,    24,     0,     0,     0,     0,     0,
       0,     0,     0,   687,     0,     0,     0,     0,    25,     0,
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
     197,   198,   199,   200,   201,   202,   203,    11,     0,    12,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,    14,     0,     0,    15,    16,     0,    17,     0,
      18,     0,    19,    20,    21,     0,    22,    23,    24,     0,
       0,     0,     0,     0,     0,     0,     0,   733,     0,     0,
       0,     0,    25,     0,     0,     0,    26,    27,    28,    29,
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
     203,    11,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,     0,    14,     0,     0,    15,
      16,     0,    17,     0,    18,     0,    19,    20,    21,     0,
      22,    23,    24,     0,     0,     0,     0,     0,     0,     0,
       0,   816,     0,     0,     0,     0,    25,     0,     0,     0,
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
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,   145,   146,   147,     0,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,    11,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,     0,
      14,     0,     0,    15,    16,     0,    17,     0,    18,     0,
      19,    20,    21,     0,    22,    23,    24,     0,     0,     0,
       0,     0,     0,     0,     0,   824,     0,     0,     0,     0,
      25,     0,     0,     0,    26,    27,    28,    29,    30,    31,
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
     195,   196,   197,   198,   199,   200,   201,   202,   203,    11,
       0,    12,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     0,     0,   742,    14,     0,     0,    15,    16,     0,
      17,     0,    18,     0,    19,    20,    21,     0,    22,    23,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,     0,    26,    27,
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
     201,   202,   203,    11,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     0,     0,     0,    14,     0,
       0,    15,    16,     0,    17,     0,    18,     0,    19,    20,
      21,     0,    22,    23,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
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
     197,   198,   199,   200,   201,   202,   203,    11,     0,    12,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,    14,     0,     0,    15,    16,     0,    17,     0,
      18,     0,    19,    20,    21,     0,    22,    23,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,     0,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,   339,    77,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,     0,
       0,     0,     0,     0,    85,    86,    87,     0,     0,    88,
      89,    90,    91,     0,     0,    92,   342,    94,   343,    96,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     344,   345,   108,   346,   110,     0,   111,   347,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,   145,   146,   147,     0,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   351,   176,   177,   352,   179,   180,   181,   182,
     183,   353,   185,   354,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   357,   358,   198,   199,   200,   201,   202,
     203,    11,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,     0,    14,     0,     0,    15,
      16,     0,    17,     0,    18,     0,    19,    20,    21,     0,
      22,    23,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
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
     131,   132,   133,   134,   135,   136,   137,   138,   916,   140,
     141,   142,   143,   144,     0,   145,   917,   147,     0,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,    11,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,     0,
      14,     0,     0,    15,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   339,    77,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,    85,    86,    87,     0,     0,    88,    89,    90,
      91,     0,     0,    92,   342,    94,   343,    96,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   344,   345,
     108,   346,   110,     0,   111,   347,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   348,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,     0,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     351,   176,   177,   352,   179,   180,   181,   182,   183,   353,
     185,   354,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   357,   358,   198,   199,   200,   201,   202,   203,    12,
       0,     0,     0,     0,     0,     0,     0,     0,  1367,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1368,     0,
       0,     0,     0,     0,  1369,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1370,
     385,    31,    32,    33,   386,    35,    36,   387,    38,    39,
      40,    41,    42,    43,    44,  1371,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,   339,    77,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,     0,
       0,     0,     0,     0,   340,   341,    87,     0,     0,     0,
      89,    90,    91,     0,     0,    92,   342,    94,   343,    96,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     344,   345,   108,   346,   110,     0,   111,   347,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   348,   127,   128,   129,   130,   131,   349,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,   145,   146,   147,     0,   390,   149,     0,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   351,   176,   177,   352,   179,   180,   181,   182,
     183,   353,   185,   354,   187,   188,  1372,  1373,   191,   192,
     355,   356,   195,   357,   358,   198,   199,   200,   201,   202,
     203,    12,     0,     0,     0,     0,     0,     0,     0,     0,
    1367,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1370,   385,    31,    32,    33,   386,    35,    36,   387,
      38,    39,    40,    41,    42,    43,    44,  1371,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   339,
      77,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,   340,   341,    87,     0,
       0,     0,    89,    90,    91,     0,     0,    92,   342,    94,
     343,    96,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   344,   345,   108,   346,   110,     0,   111,   347,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   348,   127,   128,   129,   130,   131,   349,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,     0,   390,   149,     0,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   351,   176,   177,   352,   179,   180,
     181,   182,   183,   353,   185,   354,   187,   188,   189,   190,
     191,   192,   355,   356,   195,   357,   358,   198,   199,   200,
     201,   202,   203,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   384,   385,    31,    32,    33,   386,    35,
      36,   387,    38,    39,    40,    41,    42,    43,    44,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    57,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,   339,    77,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,     0,     0,     0,     0,     0,   340,   341,
      87,     0,     0,     0,    89,    90,    91,     0,     0,    92,
     342,    94,   343,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   344,   345,   108,   346,   110,     0,
     111,   347,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   348,   127,   128,   129,   130,
     131,   349,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,   145,   146,   147,     0,   390,
     149,     0,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   351,   176,   177,   352,
     179,   180,   181,   182,   183,   353,   185,   354,   187,   188,
     189,   190,   191,   192,   355,   356,   195,   357,   358,   198,
     199,   200,   201,   202,   203,  1036,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   383,  1037,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   384,   385,    31,    32,    33,
     386,    35,    36,   387,   388,    39,    40,    41,    42,    43,
      44,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,    57,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,   339,    77,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    84,     0,     0,     0,     0,     0,
     340,   341,    87,     0,     0,     0,    89,     0,     0,     0,
       0,    92,   342,    94,   343,    96,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   344,   345,   108,   346,
     110,     0,   111,   347,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   348,   127,   128,
     129,   130,   131,   349,   389,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,     0,   145,   146,   147,
       0,   390,   149,     0,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   351,   176,
     177,   352,   179,   180,   181,   182,   183,   353,   185,   354,
     187,   188,   189,   190,   191,   192,   391,   392,   195,   357,
     358,   198,   199,   200,   201,   202,   203,   616,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   617,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   318,   319,   320,
     321,   322,   323,   324,   325,   326,    38,    39,    40,    41,
      42,    43,    44,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   339,    77,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,   340,   341,    87,     0,     0,     0,    89,     0,
       0,     0,     0,    92,   342,    94,   343,    96,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   344,   345,
     108,   346,   110,     0,   111,   347,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   348,
     127,   128,   129,   130,   131,   349,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,     0,   350,   149,     0,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     351,   176,   177,   352,   179,   180,   181,   182,   183,   353,
     185,   354,   187,   188,   189,   190,   191,   192,   355,   356,
     195,   357,   358,   198,   199,   200,   201,   202,   203,   668,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   669,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   318,
     319,   320,   321,   322,   323,   324,   325,   326,    38,    39,
      40,    41,    42,    43,    44,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,   339,    77,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,     0,
       0,     0,     0,     0,   340,   341,    87,     0,     0,     0,
      89,     0,     0,     0,     0,    92,   342,    94,   343,    96,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     344,   345,   108,   346,   110,     0,   111,   347,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   348,   127,   128,   129,   130,   131,   349,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,   145,   146,   147,     0,   350,   149,     0,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   351,   176,   177,   352,   179,   180,   181,   182,
     183,   353,   185,   354,   187,   188,   189,   190,   191,   192,
     355,   356,   195,   357,   358,   198,   199,   200,   201,   202,
     203,   363,   364,     0,     0,     0,     0,   365,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   366,     0,     0,     0,   367,   368,   369,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
      41,    42,    43,    44,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,   339,    77,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    84,     0,     0,
       0,     0,     0,   340,   341,    87,     0,     0,   370,    89,
       0,     0,     0,     0,    92,   342,    94,   343,    96,     0,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   344,
     345,   108,     0,   110,     0,   111,   371,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     348,   127,   128,   129,   130,   131,   349,     0,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,     0,
     145,   146,   147,     0,     0,   149,     0,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   351,   176,   177,   352,   179,   180,   181,   182,   183,
     353,   185,   354,   187,   188,   189,   190,   191,   192,   355,
     356,   195,   357,   358,   198,   199,   200,   201,   202,   203,
     363,   364,     0,     0,     0,     0,   365,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     366,     0,     0,     0,   367,   368,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    41,
      42,    43,    44,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   339,    77,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,   340,   341,    87,     0,     0,   370,    89,     0,
       0,     0,     0,    92,   342,    94,   343,    96,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   344,   345,
     108,     0,   110,     0,   111,     0,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   348,
     127,   128,   129,   130,   131,   349,     0,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,     0,     0,   149,     0,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     351,   176,   177,   352,   179,   180,   181,   182,   183,   353,
     185,   354,   187,   188,   189,   190,   191,   192,   355,   356,
     195,   357,   358,   198,   199,   200,   201,   202,   203,   383,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     384,   385,    31,    32,    33,   386,    35,    36,   387,   388,
      39,    40,    41,    42,    43,    44,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,    57,    58,
      59,    60,    61,    62,    63,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,   339,    77,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    84,
       0,     0,     0,     0,     0,   340,   341,    87,     0,     0,
       0,    89,     0,     0,     0,     0,    92,   342,    94,   343,
      96,     0,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   344,   345,   108,   346,   110,     0,   111,   347,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   348,   127,   128,   129,   130,   131,   349,   389,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     0,   145,   146,   147,     0,   390,   149,     0,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   351,   176,   177,   352,   179,   180,   181,
     182,   183,   353,   185,   354,   187,   188,   189,   190,   191,
     192,   391,   392,   195,   357,   358,   198,   199,   200,   201,
     202,   203,   383,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   384,   385,    31,    32,    33,   386,    35,
      36,   387,    38,    39,    40,    41,    42,    43,    44,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    57,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,   339,    77,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,     0,     0,     0,     0,     0,   340,   341,
      87,     0,     0,     0,    89,     0,     0,     0,     0,    92,
     342,    94,   343,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   344,   345,   108,   346,   110,     0,
     111,   347,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   348,   127,   128,   129,   130,
     131,   349,   389,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,   145,   146,   147,     0,   390,
     149,     0,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   351,   176,   177,   352,
     179,   180,   181,   182,   183,   353,   185,   354,   187,   188,
     189,   190,   191,   192,   391,   392,   195,   357,   358,   198,
     199,   200,   201,   202,   203,   633,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,   325,   326,    38,    39,    40,    41,    42,    43,
      44,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,    57,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,   339,    77,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    84,     0,     0,     0,     0,     0,
     340,   341,    87,     0,     0,   634,    89,     0,     0,     0,
       0,    92,   342,    94,   343,    96,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   344,   345,   108,   346,
     110,     0,   111,   347,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   348,   127,   128,
     129,   130,   131,   349,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,     0,   145,   146,   147,
       0,   350,   149,     0,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   351,   176,
     177,   352,   179,   180,   181,   182,   183,   353,   185,   354,
     187,   188,   189,   190,   191,   192,   355,   356,   195,   357,
     358,   198,   199,   200,   201,   202,   203,   800,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   318,   319,   320,
     321,   322,   323,   324,   325,   326,    38,    39,    40,    41,
      42,    43,    44,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   339,    77,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,   340,   341,    87,     0,     0,     0,    89,     0,
       0,     0,     0,    92,   342,    94,   343,    96,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   344,   345,
     108,   346,   110,     0,   111,   347,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   348,
     127,   128,   129,   130,   131,   349,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,     0,   350,   149,     0,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     351,   176,   177,   352,   179,   180,   181,   182,   183,   353,
     185,   354,   187,   188,   189,   190,   191,   192,   355,   356,
     195,   357,   358,   198,   199,   200,   201,   202,   203,   804,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   318,
     319,   320,   321,   322,   323,   324,   325,   326,    38,    39,
      40,    41,    42,    43,    44,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,   339,    77,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,     0,
       0,     0,     0,     0,   340,   341,    87,     0,     0,     0,
      89,     0,     0,     0,     0,    92,   342,    94,   343,    96,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     344,   345,   108,   346,   110,     0,   111,   347,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   348,   127,   128,   129,   130,   131,   349,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,   145,   146,   147,     0,   350,   149,     0,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   351,   176,   177,   352,   179,   180,   181,   182,
     183,   353,   185,   354,   187,   188,   189,   190,   191,   192,
     355,   356,   195,   357,   358,   198,   199,   200,   201,   202,
     203,   683,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   318,   319,   320,   321,   322,   323,   324,
     325,   326,    38,    39,    40,    41,    42,    43,    44,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    57,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,   339,    77,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,     0,     0,     0,     0,     0,   340,   341,
      87,     0,     0,     0,    89,     0,     0,     0,     0,    92,
     342,    94,   343,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   344,   345,   108,   346,   110,     0,
     111,   347,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   348,   127,   128,   129,   130,
     131,   349,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,   145,   146,   147,     0,   350,
     149,     0,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   351,   176,   177,   352,
     179,   180,   181,   182,   183,   353,   185,   354,   187,   188,
     189,   190,   191,   192,   355,   356,   195,   357,   358,   198,
     199,   200,   201,   202,   203,   318,   319,   320,   321,   322,
     323,   324,   325,   326,    38,    39,    40,    41,    42,    43,
      44,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,    57,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,   339,    77,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    84,     0,     0,     0,     0,     0,
     340,   341,    87,     0,     0,     0,    89,     0,     0,     0,
       0,    92,   342,    94,   343,    96,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   344,   345,   108,   346,
     110,     0,   111,   347,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   348,   127,   128,
     129,   130,   131,   349,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,     0,   145,   146,   147,
       0,   350,   149,     0,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   351,   176,
     177,   352,   179,   180,   181,   182,   183,   353,   185,   354,
     187,   188,   189,   190,   191,   192,   355,   356,   195,   357,
     358,   198,   199,   200,   201,   202,   203,    39,    40,    41,
      42,    43,    44,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   339,    77,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,   340,   341,    87,     0,     0,     0,    89,     0,
       0,     0,     0,    92,   342,    94,   343,    96,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   344,   345,
     108,     0,   110,     0,   111,     0,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   348,
     127,   128,   129,   130,   131,   349,     0,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,     0,     0,   149,     0,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     351,   176,   177,   352,   179,   180,   181,   182,   183,   353,
     185,   354,   187,   188,   189,   190,   191,   192,   355,   356,
     195,   357,   358,   198,   199,   200,   201,   202,   203,     0,
    1446,     0,     0,   963,   964,   965,   966,     0,   967,     0,
       0,   968,     0,     0,   969,   970,   971,   972,   973,   974,
     975,   976,   977,     0,     0,   978,   979,   980,  1451,     0,
       0,   963,   964,   965,   966,     0,   967,     0,     0,   968,
       0,     0,   969,   970,   971,   972,   973,   974,   975,   976,
     977,     0,     0,   978,   979,   980,     0,  1454,     0,     0,
     963,   964,   965,   966,     0,   967,   310,     0,   968,   981,
     982,   969,   970,   971,   972,   973,   974,   975,   976,   977,
       0,     0,   978,   979,   980,  1457,     0,     0,   963,   964,
     965,   966,     0,   967,   310,     0,   968,   981,   982,   969,
     970,   971,   972,   973,   974,   975,   976,   977,     0,     0,
     978,   979,   980,     0,  1459,     0,     0,   963,   964,   965,
     966,     0,   967,   310,     0,   968,   981,   982,   969,   970,
     971,   972,   973,   974,   975,   976,   977,     0,     0,   978,
     979,   980,  1461,     0,     0,   963,   964,   965,   966,     0,
     967,   310,     0,   968,   981,   982,   969,   970,   971,   972,
     973,   974,   975,   976,   977,     0,     0,   978,   979,   980,
       0,  1582,     0,     0,   963,   964,   965,   966,     0,   967,
     310,     0,   968,   981,   982,   969,   970,   971,   972,   973,
     974,   975,   976,   977,     0,     0,   978,   979,   980,  1583,
       0,     0,   963,   964,   965,   966,     0,   967,   310,     0,
     968,   981,   982,   969,   970,   971,   972,   973,   974,   975,
     976,   977,     0,     0,   978,   979,   980,     0,  1588,     0,
       0,   963,   964,   965,   966,     0,   967,   310,     0,   968,
     981,   982,   969,   970,   971,   972,   973,   974,   975,   976,
     977,     0,     0,   978,   979,   980,  1594,     0,     0,   963,
     964,   965,   966,     0,   967,   310,     0,   968,   981,   982,
     969,   970,   971,   972,   973,   974,   975,   976,   977,     0,
       0,   978,   979,   980,     0,  1674,     0,     0,   963,   964,
     965,   966,     0,   967,   310,     0,   968,   981,   982,   969,
     970,   971,   972,   973,   974,   975,   976,   977,     0,     0,
     978,   979,   980,  1675,     0,     0,   963,   964,   965,   966,
       0,   967,   310,     0,   968,   981,   982,   969,   970,   971,
     972,   973,   974,   975,   976,   977,     0,     0,   978,   979,
     980,     0,  1678,     0,     0,   963,   964,   965,   966,     0,
     967,   310,     0,   968,   981,   982,   969,   970,   971,   972,
     973,   974,   975,   976,   977,     0,     0,   978,   979,   980,
    1679,     0,     0,   963,   964,   965,   966,     0,   967,   310,
       0,   968,   981,   982,   969,   970,   971,   972,   973,   974,
     975,   976,   977,     0,     0,   978,   979,   980,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   310,     0,
       0,   981,   982,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   310,     0,     0,   981,
     982
};

static const yytype_int16 yycheck[] =
{
       7,     8,     9,   317,    11,     6,    13,   523,   233,   757,
     653,   609,   655,   383,  1363,   658,  1296,   717,    25,     9,
     717,  1462,   527,   453,  1313,  1521,     8,   877,   458,   131,
     678,   461,     9,   679,    17,   465,    72,   528,   529,   530,
     531,   914,  1075,   686,   363,   364,    35,    43,    43,    36,
     131,    35,    12,    68,    43,    51,   952,    13,   954,    43,
      55,  1550,    51,    52,  1125,  1126,   131,    51,    68,    55,
      15,    59,    61,    62,    63,    55,   602,    61,    62,    63,
      51,   729,   730,    12,    43,    13,    55,    55,  1567,    15,
     986,    53,  1650,    50,    51,   131,    37,    38,    37,    38,
     996,    43,   128,    50,    51,  1001,    43,  1003,    12,  1005,
     173,  1007,   175,  1009,    51,  1011,  1376,  1013,    43,    24,
      68,  1017,    55,  1019,    44,   773,   508,   509,   510,   511,
     512,   513,   123,   515,   516,   517,   518,   519,   520,   521,
     522,    74,    75,    76,    43,   134,    37,    38,  1021,   135,
     134,    71,    51,  1713,   159,   134,    36,   110,   806,    14,
     803,   289,    36,   911,   123,   113,   312,    12,   125,   315,
     918,   919,   920,   288,   922,   923,   924,   877,   125,   879,
     877,   123,   879,   289,   312,   933,   934,   192,  1746,   937,
     938,    61,    62,    63,   220,   221,   133,   312,   123,    44,
     153,   192,   135,   182,   247,   731,   732,  1556,   251,   852,
     316,   140,  1653,   184,   140,   201,   204,    14,    51,  1779,
     235,  1710,   202,   185,    79,   327,   656,   329,   173,   170,
     134,   170,   201,   201,   133,   235,   243,  1733,  1088,   246,
    1719,   228,  1115,   203,   674,   240,   327,   328,  1144,   182,
     192,     0,  1148,   236,   240,   251,   184,   190,   191,   192,
     193,   194,   327,   328,   134,   254,   696,   192,   201,  1330,
     254,   240,   240,   592,   593,   594,   595,   157,  1567,  1568,
     200,  1342,    79,   157,  1725,    12,   128,   243,    26,    43,
     246,   124,  1188,   116,   330,   331,   332,    51,   256,  1360,
     233,    22,   257,   134,  1200,     7,    44,   240,    22,    11,
     243,  1571,  1572,  1573,  1574,   287,   171,   172,    48,    77,
      78,    51,   255,    25,   296,   707,  1023,   279,   138,    43,
      51,   222,   223,   224,    61,    62,    63,    51,    27,  1628,
      48,    30,    31,    51,   302,    34,   114,  1627,   256,    15,
     114,   182,    12,   111,   312,    43,   363,   364,   365,   366,
     312,   192,    51,    33,   104,   317,   318,   322,  1717,    39,
      35,   139,   214,   289,   171,   172,   383,    43,   220,   221,
      22,   289,   161,   123,    44,    51,    51,  1035,  1088,   129,
      60,  1088,   289,   383,   124,  1095,   312,  1097,  1095,    22,
    1097,    51,  1463,   311,   301,    43,   383,   134,   234,  1698,
     417,    43,   133,    51,   311,    94,   124,   424,    97,   133,
      43,   100,   101,   102,   103,   251,   433,    77,    78,    36,
     437,   438,    14,    36,   424,    43,   289,   126,   127,  1500,
      28,    44,  1040,  1041,    26,    52,   453,   437,   438,  1738,
     289,   458,   231,   232,   461,    37,  1736,    45,   465,   312,
     239,  1522,   315,   316,  1497,   205,   206,   207,   289,   476,
     210,   211,   311,   312,    43,   289,  1537,   180,   299,  1540,
    1541,   160,   489,   186,   491,  1358,   476,    36,   147,  1362,
     311,   312,    43,  1389,  1142,   154,  1557,   311,   312,  1147,
     288,   289,    36,    52,  1152,    36,    23,    24,  1156,    74,
      75,    76,    36,    51,    36,   194,  1412,    22,    52,   182,
     425,    52,   310,   311,   429,   313,    43,    22,    52,   434,
      52,   194,  1428,   212,   213,   440,    22,   216,    36,    36,
    1436,   200,   201,   550,  1440,   185,    36,   452,    47,    43,
      49,   456,   457,    36,    52,    52,   196,    36,  1206,   566,
      54,   562,    52,    36,   469,   470,   471,   574,  1629,    52,
      22,    44,   477,    52,   581,   582,   583,   584,   585,   586,
     587,   588,   589,   590,   591,   592,   593,   594,   595,   596,
     597,  1464,   574,    36,   601,   602,    22,  1658,  1659,   581,
    1248,  1249,  1302,    36,   286,  1302,   288,  1253,    36,    52,
      22,    44,   602,    22,   596,  1263,    36,   182,    36,  1267,
      36,  1682,    37,    38,    52,   190,   191,   192,   193,   194,
      36,    35,    52,    22,    52,   540,    52,    25,    44,    43,
      35,   546,   547,   289,    36,    22,   551,    51,    36,   656,
    1191,    22,    25,   299,   300,   880,    51,    61,    62,    63,
      52,  1202,  1203,    36,   366,   311,   312,   674,   233,    36,
    1211,   678,    12,    47,  1215,    49,  1217,  1218,   243,  1220,
      25,    25,  1223,  1224,   256,    52,   258,   289,   678,   696,
     255,    36,    36,   265,   266,   131,   132,   299,   300,   271,
      36,   678,   117,   118,   119,   120,   121,   122,    44,   311,
     312,    36,   284,   285,   286,   417,    51,   622,    36,    44,
     229,    36,   729,   730,   731,   732,    44,    36,   237,    44,
     134,   433,    51,   638,    12,    44,   189,    36,    36,   729,
     730,   731,   732,    43,   197,    44,    44,    36,    43,    36,
      36,   453,   729,   730,    36,    44,   458,    44,    44,   461,
     665,   666,    44,   465,   256,    36,   773,    36,    36,    12,
    1467,   263,   779,    44,   256,    44,    44,    68,  1294,    33,
      33,   263,    43,   773,    51,    39,    39,   489,  1536,   491,
    1295,   475,   217,   218,   219,   479,   773,   779,  1289,   806,
     482,    61,    62,    63,   486,    51,   813,    36,   490,  1179,
     492,   493,   494,   174,   175,   497,   806,   222,   223,   224,
    1325,  1326,   243,   813,   165,  1473,  1256,   323,   324,   806,
     114,   115,  1262,   543,   544,   545,    16,    17,    18,    19,
      20,    21,   849,    37,    38,  1275,   166,    27,   550,   250,
    1493,  1599,    37,    38,   861,   100,   101,   102,   103,   849,
      40,   167,   869,   177,   566,   131,   132,   178,   149,   150,
     552,   198,   199,   555,   297,   298,  1474,  1475,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    24,   140,   141,
     572,   143,   144,   145,   169,   147,   148,   256,  1544,   601,
     259,   260,   261,   262,    24,   264,   189,   914,   267,   302,
     303,   270,   271,   272,   273,   274,   275,   276,   277,   278,
    1234,   195,   281,   282,   283,   586,   587,   588,   589,   590,
     591,  1579,  1680,   180,   181,  1683,    58,   117,   118,   119,
     120,   121,   122,  1591,   325,   326,   180,   181,   129,   130,
      56,   856,  1598,    43,   656,   268,   269,   152,   153,   108,
     109,   225,   226,   322,    95,    96,   325,   326,   650,    95,
      96,    24,   674,   878,   165,  1723,   152,   153,   660,   661,
     187,   188,     4,     5,   525,   526,   532,   533,   166,   534,
     535,    19,    20,    43,   696,  1740,  1741,   584,   585,   179,
      43,    43,    43,    43,  1650,    43,    43,    43,    43,  1652,
    1608,    43,    32,  1020,  1021,   697,    12,    51,    44,    44,
      44,    51,  1719,    44,    36,  1032,  1531,  1532,  1035,    36,
     168,   161,    51,    51,    12,  1783,   146,   161,   147,   256,
     168,    72,   161,   161,    61,  1035,   199,   199,   161,    44,
      36,    44,  1482,    44,    44,    43,  1486,   114,  1035,   115,
    1708,    44,    44,  1709,    44,    44,   748,   749,   750,  1715,
     287,    44,   289,   290,   291,   292,   293,   294,   295,    44,
    1726,  1727,  1728,  1729,    13,    51,   234,   304,   305,   306,
     307,   308,   309,    68,   161,    13,    53,   146,   234,   182,
    1746,  1747,   319,   320,   321,   134,   182,   134,  1115,    43,
      25,   144,    44,  1120,  1760,    36,  1123,    44,   123,    13,
      13,    12,  1552,   139,   163,   140,    13,    43,   142,    43,
    1635,    36,    99,    92,  1141,  1142,   159,   252,    93,  1785,
    1147,   253,   208,    26,   239,  1152,   239,   312,   830,  1156,
     314,   256,  1142,   256,   268,   289,   312,  1147,   312,   861,
     163,   161,  1152,    44,    44,  1142,  1156,   869,    12,    12,
    1147,   234,  1179,    12,   234,  1152,   858,   859,   860,  1156,
     189,  1551,   864,   865,    44,  1141,   106,   151,   105,  1179,
     203,   142,    93,   875,    40,   134,   298,   297,   131,  1206,
     265,   256,  1179,   314,    40,   280,    44,   161,    12,    46,
      44,   222,   914,    43,    46,   164,  1206,   142,   900,   154,
     105,    52,   134,   222,   209,    40,   182,   151,    36,  1206,
     182,   134,    12,   161,   244,  1236,    22,  1244,   200,  1553,
      43,  1248,  1249,    43,   123,    15,   222,   131,  1153,  1256,
     256,   164,  1157,   161,   256,  1262,  1263,   134,  1248,  1249,
    1267,    36,  1244,    40,    36,    24,    40,    40,  1275,   134,
     140,  1248,  1249,  1263,    13,   182,   244,  1267,    44,  1184,
      36,    29,   123,   161,  1189,  1190,  1263,    44,   950,  1194,
    1267,  1176,   215,   215,     3,   964,  1201,  1197,  1186,  1569,
     756,   761,  1207,  1310,  1209,  1645,   400,  1212,   762,   853,
     208,  1216,   654,   875,   315,  1080,  1221,   107,   657,  1021,
    1057,   659,   506,  1228,   507,   555,   900,  1232,  1476,  1253,
    1032,   132,   732,   430,   430,   476,   437,   849,  1095,  1302,
     879,  1097,  1509,  1025,  1284,  1352,  1113,  1298,  1323,  1626,
    1357,  1358,  1631,   649,  1544,  1362,  1649,  1494,  1032,   861,
    1367,   865,   582,   777,   583,   597,    -1,    -1,  1050,  1376,
    1684,  1053,  1054,  1055,  1027,    -1,    -1,    -1,  1060,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1071,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1080,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1367,    -1,  1115,    -1,    -1,    -1,    -1,  1120,    -1,
    1376,  1123,    -1,   256,  1106,  1107,   259,   260,   261,   262,
      -1,   264,    -1,    -1,   267,    -1,    -1,   270,   271,   272,
     273,   274,   275,   276,   277,   278,    -1,    -1,   281,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,  1464,  1465,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1473,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1482,    -1,    -1,    -1,  1486,
      -1,    -1,    -1,  1473,    -1,    -1,    -1,    -1,    -1,   322,
      -1,    -1,   325,   326,    -1,    -1,  1473,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1411,    -1,    -1,   256,
      -1,    -1,   259,   260,   261,   262,    -1,   264,    -1,    -1,
     267,    -1,    -1,   270,   271,   272,   273,   274,   275,   276,
     277,   278,    -1,    -1,   281,   282,   283,    -1,    -1,    -1,
      -1,    -1,    -1,  1550,  1551,  1552,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1256,    -1,    -1,    -1,  1565,  1566,
    1262,  1551,  1569,    -1,  1571,  1572,  1573,  1574,    15,    -1,
      -1,    -1,  1579,  1275,  1551,   322,    -1,    -1,   325,   326,
      -1,    -1,    -1,    -1,  1591,    -1,  1268,    -1,    -1,  1579,
      -1,  1273,    -1,    -1,  1550,  1602,    43,  1604,    -1,    -1,
      -1,  1591,  1579,    -1,    51,    -1,    -1,    -1,  1310,  1565,
    1566,    -1,    -1,  1569,  1591,  1571,  1572,  1573,  1574,    -1,
     256,    -1,  1604,   259,   260,   261,   262,    -1,   264,    -1,
      -1,   267,    -1,    -1,   270,   271,   272,   273,   274,   275,
     276,   277,   278,    -1,    -1,   281,   282,   283,    -1,    -1,
    1352,    -1,    -1,    -1,    -1,    -1,  1358,    -1,    -1,    -1,
    1362,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1580,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,  1592,    -1,   325,
     326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1708,    -1,  1710,    -1,    -1,    -1,    -1,   256,    -1,
      -1,   259,   260,   261,   262,    -1,   264,    -1,  1708,   267,
      -1,    -1,   270,   271,   272,   273,   274,   275,   276,   277,
     278,  1708,    -1,   281,   282,   283,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1710,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1464,  1465,    -1,    -1,  1671,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   322,    -1,    -1,   325,   326,    -1,
    1482,    -1,    -1,    -1,  1486,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1483,    -1,    -1,    -1,  1487,    -1,    -1,  1490,   256,
      -1,    -1,   259,   260,   261,   262,    -1,   264,   265,    -1,
     267,    -1,    -1,   270,   271,   272,   273,   274,   275,   276,
     277,   278,    -1,    -1,   281,   282,   283,    -1,    -1,    -1,
      -1,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1552,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   310,   311,    -1,   313,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,    -1,   256,   325,   326,
     259,   260,   261,   262,    -1,   264,    -1,    -1,   267,    -1,
      -1,   270,   271,   272,   273,   274,   275,   276,   277,   278,
      -1,    -1,   281,   282,   283,   256,    -1,    -1,   259,   260,
     261,   262,    -1,   264,    -1,    -1,   267,    -1,    -1,   270,
     271,   272,   273,   274,   275,   276,   277,   278,    -1,    -1,
     281,   282,   283,    -1,   256,    -1,    -1,   259,   260,   261,
     262,    -1,   264,   322,    -1,   267,   325,   326,   270,   271,
     272,   273,   274,   275,   276,   277,   278,    -1,    -1,   281,
     282,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,    -1,    -1,   325,   326,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,    -1,    -1,   325,   326,    -1,    -1,    -1,    -1,    -1,
      -1,  1693,  1694,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,  1748,   117,   118,   119,
     120,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,   129,
     130,   131,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,
     140,   141,   142,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
      -1,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,    -1,   196,   197,   198,    -1,
     200,   201,    -1,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   259,   260,   261,   262,
      -1,   264,    -1,    -1,   267,    -1,    -1,   270,   271,   272,
     273,   274,   275,   276,   277,   278,    -1,    -1,   281,   282,
     283,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,    30,
      31,    -1,    33,    -1,    35,    -1,    37,    38,    39,    -1,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,   322,
      -1,    -1,   325,   326,    -1,    -1,    57,   327,    -1,   329,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,    -1,    -1,   134,   135,   136,   137,    -1,    -1,   140,
     141,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,    -1,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    -1,   196,   197,   198,    -1,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,
      37,    38,    39,    -1,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
     117,   118,   119,   120,   121,   122,   123,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,    -1,    -1,   140,   141,   142,   143,   144,    -1,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,    -1,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    -1,   196,
     197,   198,    -1,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,
      33,    -1,    35,    -1,    37,    38,    39,    -1,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,   117,   118,   119,   120,   121,   122,
     123,    -1,    -1,    -1,    -1,    -1,   129,   130,   131,    -1,
      -1,   134,   135,   136,   137,    -1,    -1,   140,   141,   142,
     143,   144,    -1,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,    -1,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,    -1,   196,   197,   198,    -1,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,
      -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,    38,
      39,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,   117,   118,
     119,   120,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,
     129,   130,   131,    -1,    -1,   134,   135,   136,   137,    -1,
      -1,   140,   141,   142,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,    -1,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,    -1,   196,   197,   198,
      -1,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    30,    31,    -1,    33,    -1,
      35,    -1,    37,    38,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,   117,   118,   119,   120,   121,   122,   123,    -1,
      -1,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,   134,
     135,   136,   137,    -1,    -1,   140,   141,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,    -1,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,   196,   197,   198,    -1,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    30,
      31,    -1,    33,    -1,    35,    -1,    37,    38,    39,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,    -1,    -1,   134,   135,   136,   137,    -1,    -1,   140,
     141,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,    -1,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    -1,   196,   197,   198,    -1,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,
      37,    38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
     117,   118,   119,   120,   121,   122,   123,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,    -1,    -1,   140,   141,   142,   143,   144,    -1,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,    -1,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    -1,   196,
     197,   198,    -1,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    -1,
      33,    -1,    35,    -1,    37,    38,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,   117,   118,   119,   120,   121,   122,
     123,    -1,    -1,    -1,    -1,    -1,   129,   130,   131,    -1,
      -1,   134,   135,   136,   137,    -1,    -1,   140,   141,   142,
     143,   144,    -1,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,    -1,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,    -1,   196,   197,   198,    -1,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,
      -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,    38,
      39,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,   117,   118,
     119,   120,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,
     129,   130,   131,    -1,    -1,   134,   135,   136,   137,    -1,
      -1,   140,   141,   142,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,    -1,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,    -1,   196,   197,   198,
      -1,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    30,    31,    -1,    33,    -1,
      35,    -1,    37,    38,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,   117,   118,   119,   120,   121,   122,   123,    -1,
      -1,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,   134,
     135,   136,   137,    -1,    -1,   140,   141,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,    -1,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,   196,   197,   198,    -1,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    30,
      31,    -1,    33,    -1,    35,    -1,    37,    38,    39,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,    -1,    -1,   134,   135,   136,   137,    -1,    -1,   140,
     141,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,    -1,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    -1,   196,   197,   198,    -1,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
     117,   118,   119,   120,   121,   122,   123,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,    -1,    -1,   140,   141,   142,   143,   144,    -1,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,    -1,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    -1,   196,
     197,   198,    -1,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,   117,   118,   119,   120,   121,   122,   123,    -1,
      -1,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,    -1,
     135,   136,   137,    -1,    -1,   140,   141,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,    -1,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,   196,   197,   198,    -1,   200,   201,    -1,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,   117,   118,   119,   120,   121,   122,
     123,    -1,    -1,    -1,    -1,    -1,   129,   130,   131,    -1,
      -1,    -1,   135,   136,   137,    -1,    -1,   140,   141,   142,
     143,   144,    -1,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,    -1,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,    -1,   196,   197,   198,    -1,   200,   201,    -1,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,   140,
     141,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,    -1,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    -1,   196,   197,   198,    -1,   200,
     201,    -1,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,   117,   118,
     119,   120,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,
     129,   130,   131,    -1,    -1,    -1,   135,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,    -1,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,    -1,   196,   197,   198,
      -1,   200,   201,    -1,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
     117,   118,   119,   120,   121,   122,   123,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,    -1,    -1,    -1,   135,    -1,
      -1,    -1,    -1,   140,   141,   142,   143,   144,    -1,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,    -1,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    -1,   196,
     197,   198,    -1,   200,   201,    -1,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,   117,   118,   119,   120,   121,   122,   123,    -1,
      -1,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,    -1,
     135,    -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,    -1,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,   196,   197,   198,    -1,   200,   201,    -1,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,    37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    -1,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,   117,   118,   119,   120,   121,   122,   123,    -1,    -1,
      -1,    -1,    -1,   129,   130,   131,    -1,    -1,   134,   135,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,    -1,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,    -1,   159,    -1,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,    -1,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,    -1,
     196,   197,   198,    -1,    -1,   201,    -1,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
      37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
     117,   118,   119,   120,   121,   122,   123,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,    -1,    -1,   134,   135,    -1,
      -1,    -1,    -1,   140,   141,   142,   143,   144,    -1,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,    -1,   159,    -1,   161,    -1,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,    -1,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    -1,   196,
     197,   198,    -1,    -1,   201,    -1,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,
      -1,   135,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,    -1,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,    -1,   196,   197,   198,    -1,   200,   201,    -1,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,    -1,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    -1,   196,   197,   198,    -1,   200,
     201,    -1,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,   117,   118,
     119,   120,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,
     129,   130,   131,    -1,    -1,   134,   135,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,    -1,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,    -1,   196,   197,   198,
      -1,   200,   201,    -1,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
     117,   118,   119,   120,   121,   122,   123,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,    -1,    -1,    -1,   135,    -1,
      -1,    -1,    -1,   140,   141,   142,   143,   144,    -1,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,    -1,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    -1,   196,
     197,   198,    -1,   200,   201,    -1,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,   117,   118,   119,   120,   121,   122,   123,    -1,
      -1,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,    -1,
     135,    -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,    -1,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,   196,   197,   198,    -1,   200,   201,    -1,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,    -1,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    -1,   196,   197,   198,    -1,   200,
     201,    -1,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,   117,   118,
     119,   120,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,
     129,   130,   131,    -1,    -1,    -1,   135,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,    -1,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,    -1,   196,   197,   198,
      -1,   200,   201,    -1,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
     117,   118,   119,   120,   121,   122,   123,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,    -1,    -1,    -1,   135,    -1,
      -1,    -1,    -1,   140,   141,   142,   143,   144,    -1,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,    -1,   159,    -1,   161,    -1,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,    -1,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    -1,   196,
     197,   198,    -1,    -1,   201,    -1,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,    -1,
     256,    -1,    -1,   259,   260,   261,   262,    -1,   264,    -1,
      -1,   267,    -1,    -1,   270,   271,   272,   273,   274,   275,
     276,   277,   278,    -1,    -1,   281,   282,   283,   256,    -1,
      -1,   259,   260,   261,   262,    -1,   264,    -1,    -1,   267,
      -1,    -1,   270,   271,   272,   273,   274,   275,   276,   277,
     278,    -1,    -1,   281,   282,   283,    -1,   256,    -1,    -1,
     259,   260,   261,   262,    -1,   264,   322,    -1,   267,   325,
     326,   270,   271,   272,   273,   274,   275,   276,   277,   278,
      -1,    -1,   281,   282,   283,   256,    -1,    -1,   259,   260,
     261,   262,    -1,   264,   322,    -1,   267,   325,   326,   270,
     271,   272,   273,   274,   275,   276,   277,   278,    -1,    -1,
     281,   282,   283,    -1,   256,    -1,    -1,   259,   260,   261,
     262,    -1,   264,   322,    -1,   267,   325,   326,   270,   271,
     272,   273,   274,   275,   276,   277,   278,    -1,    -1,   281,
     282,   283,   256,    -1,    -1,   259,   260,   261,   262,    -1,
     264,   322,    -1,   267,   325,   326,   270,   271,   272,   273,
     274,   275,   276,   277,   278,    -1,    -1,   281,   282,   283,
      -1,   256,    -1,    -1,   259,   260,   261,   262,    -1,   264,
     322,    -1,   267,   325,   326,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    -1,    -1,   281,   282,   283,   256,
      -1,    -1,   259,   260,   261,   262,    -1,   264,   322,    -1,
     267,   325,   326,   270,   271,   272,   273,   274,   275,   276,
     277,   278,    -1,    -1,   281,   282,   283,    -1,   256,    -1,
      -1,   259,   260,   261,   262,    -1,   264,   322,    -1,   267,
     325,   326,   270,   271,   272,   273,   274,   275,   276,   277,
     278,    -1,    -1,   281,   282,   283,   256,    -1,    -1,   259,
     260,   261,   262,    -1,   264,   322,    -1,   267,   325,   326,
     270,   271,   272,   273,   274,   275,   276,   277,   278,    -1,
      -1,   281,   282,   283,    -1,   256,    -1,    -1,   259,   260,
     261,   262,    -1,   264,   322,    -1,   267,   325,   326,   270,
     271,   272,   273,   274,   275,   276,   277,   278,    -1,    -1,
     281,   282,   283,   256,    -1,    -1,   259,   260,   261,   262,
      -1,   264,   322,    -1,   267,   325,   326,   270,   271,   272,
     273,   274,   275,   276,   277,   278,    -1,    -1,   281,   282,
     283,    -1,   256,    -1,    -1,   259,   260,   261,   262,    -1,
     264,   322,    -1,   267,   325,   326,   270,   271,   272,   273,
     274,   275,   276,   277,   278,    -1,    -1,   281,   282,   283,
     256,    -1,    -1,   259,   260,   261,   262,    -1,   264,   322,
      -1,   267,   325,   326,   270,   271,   272,   273,   274,   275,
     276,   277,   278,    -1,    -1,   281,   282,   283,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,
      -1,   325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,    -1,   325,
     326
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
     334,    12,    14,    23,    27,    30,    31,    33,    35,    37,
      38,    39,    41,    42,    43,    57,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   117,   118,
     119,   120,   121,   122,   123,   129,   130,   131,   134,   135,
     136,   137,   140,   141,   142,   143,   144,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   196,   197,   198,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   473,   474,   475,   476,   477,   478,
     480,   485,   496,   499,   505,   506,   507,   508,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   550,   551,   552,   553,
     554,   557,   558,   559,   570,   572,   574,   575,   576,   579,
     581,   582,   583,   584,   594,   595,   596,   597,   598,   599,
     600,   601,   603,   605,   607,   648,   649,   650,   651,   652,
     653,   654,   657,   658,   659,   660,   662,   669,   670,   674,
     675,   676,   677,   688,   691,   694,   713,   714,   335,   257,
     322,   345,   346,   370,   335,   335,   338,   459,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,   112,
     129,   130,   141,   143,   155,   156,   158,   162,   176,   182,
     200,   227,   230,   236,   238,   245,   246,   248,   249,   696,
     698,   713,   714,    37,    38,    43,    57,    61,    62,    63,
     134,   162,   697,   701,   702,   703,   704,   705,   706,   707,
     708,   709,   714,    43,    64,    65,    69,    72,    73,   183,
     200,   245,   246,   590,   592,   593,   594,   662,   678,   679,
     680,   681,   683,   684,   687,     0,   549,   713,   541,   131,
     132,   560,   138,   116,   571,   530,   114,   562,   521,   521,
      44,   474,   713,    22,    43,    51,   133,   580,    43,    51,
      43,    43,    43,    43,    51,   133,   585,    43,    43,    43,
      51,    22,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    51,    12,   655,   656,    51,    51,    12,   481,
     482,    12,   203,   486,   487,    12,   497,   498,   497,    43,
      43,    51,    77,    78,    22,   585,    43,    51,   133,   577,
      43,   465,    68,   113,    68,   235,    68,    68,   235,    51,
      51,   243,   250,    36,   140,   141,   143,   144,   145,   147,
     148,   478,   479,   488,   489,   490,   165,   166,    16,    17,
      18,    19,    20,    21,    27,    40,   117,   118,   119,   120,
     121,   122,   179,    59,   204,    37,    38,   170,    14,    79,
     171,   172,    15,   173,   174,   175,   167,   178,   169,   177,
      51,   526,   530,    33,    39,    60,    24,    24,   541,   541,
      23,    24,    43,   475,   475,    43,    54,   195,   431,   432,
     347,   371,   189,   336,   339,   432,    55,   240,   460,   461,
     465,   468,    58,   700,    56,   707,   707,   701,   710,   711,
     713,    43,   165,   166,    37,    38,   117,   118,   119,   120,
     121,   122,    14,    79,   171,   172,    24,    43,   592,    43,
      43,    43,    43,    14,    26,    37,   591,   202,   468,   561,
     114,   115,   573,    32,   713,    44,    14,    44,   602,   609,
     662,   474,    51,   578,    44,   474,    44,    71,   200,   605,
     607,    44,    44,    44,   134,   661,   713,   474,    51,   586,
     604,   609,   608,   610,   662,    44,   474,   474,   549,    36,
     228,   474,   474,   549,    36,   549,    12,    36,   549,    36,
     157,   157,   474,   474,   474,    51,    51,   578,    14,    44,
     606,   610,   474,   578,    12,    44,   470,   471,   161,   589,
     475,   168,   475,    52,   689,   690,   713,    52,   475,   692,
     693,   713,   475,   475,   475,   475,    12,   146,   147,   507,
     508,   510,   510,   510,   510,   510,   510,   509,   510,   510,
     510,   510,   510,   510,   510,   510,   512,    72,   514,   514,
     513,   515,   515,   515,   515,   516,   516,   517,   517,   168,
     161,   161,   161,    52,   474,   531,   531,   531,   474,   474,
     713,   474,    26,    44,   475,   555,   556,   161,   231,   232,
     239,    44,   555,    61,   185,   196,   433,   434,   199,   435,
     436,   437,   438,   287,   296,   348,   323,   324,   373,   459,
     199,   340,   713,   161,   466,   475,   712,   701,    44,    36,
     701,   703,   704,   706,   706,   705,   705,   705,   705,   705,
     705,   707,   707,   707,   707,   701,   710,    44,    44,    44,
      44,   685,   686,   713,    44,   593,    43,   114,   562,   115,
     114,   139,   527,    36,    44,    52,    52,   474,    52,    44,
      44,    44,    44,    52,    52,   474,    44,    44,    52,    52,
      13,   656,   475,    52,    52,   589,   482,   589,   549,   487,
     589,   498,   475,   475,    44,    44,    52,   474,   474,    36,
      44,    52,   549,    36,    44,   590,    51,   472,   234,    68,
     161,    36,    52,   589,    13,    36,    52,   234,   234,   251,
     549,   475,   491,   492,   493,   146,   510,    43,    51,   254,
     525,   546,   613,   616,   617,   618,   619,   620,   621,   622,
     623,   590,   590,   587,   593,   587,    52,    25,    25,    25,
      36,    44,   229,   237,   475,   475,   475,    44,   134,   134,
      53,   434,   441,   441,   182,   438,   189,   197,   439,   440,
     442,   443,   444,   445,   446,   447,   448,   449,   452,   453,
     454,   457,   458,   462,   464,   473,   647,   663,   695,   256,
     258,   265,   266,   271,   284,   285,   286,   349,   350,   353,
     354,   358,   359,   360,   361,   362,   363,   366,   367,   368,
     369,   372,   256,   259,   260,   261,   262,   264,   267,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   281,   282,
     283,   325,   326,   370,   374,   375,   376,   377,   378,   379,
     380,   383,   384,   388,   389,   390,   391,   392,   397,   398,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     201,   182,   341,    43,   590,   144,   699,   699,   701,    44,
      25,    44,    36,    44,   589,    36,    14,    44,   590,   682,
     131,   132,    28,    45,   139,   611,   662,    52,    52,   475,
     140,   123,   483,    13,    13,   142,   159,   500,   502,   503,
     163,    52,    52,   611,   589,   471,   474,   475,   475,   475,
     690,    13,   475,   693,    43,    43,   327,   329,   671,   713,
      36,   149,   150,   494,   491,   613,   474,   620,    51,   217,
     218,   219,   624,    99,   646,   252,   615,   253,    92,    93,
     630,   208,   625,    26,   588,   556,   239,   239,   441,   661,
     189,   197,    74,    75,    76,   182,   190,   191,   192,   193,
     194,   233,   243,   255,   459,   198,   199,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   297,   298,   288,
     289,   310,   311,   313,   355,   289,   301,   311,   355,   289,
     299,   300,   311,   312,   373,   289,   311,   312,   373,   256,
     287,   289,   290,   291,   292,   293,   294,   295,   304,   305,
     306,   307,   308,   309,   319,   320,   321,   256,   289,   311,
     256,   124,   472,   378,   312,   268,   393,   394,   395,   314,
     312,   315,   373,   288,   312,   382,   289,   385,   256,   373,
     279,   312,   317,   318,   399,   289,   311,   312,   373,   312,
     373,   289,   312,   373,   373,   289,   312,   315,   316,   373,
     289,   312,   373,   289,   316,   373,   256,   302,   312,   302,
     303,   373,   312,   373,   714,   661,   189,   342,   343,   344,
     469,   546,   475,   700,   163,   686,   590,    44,   161,    36,
      44,   562,   562,   569,    44,   475,    12,   203,   484,   475,
     475,   475,    12,   504,   192,   501,   502,    15,   140,   475,
      26,    44,    52,   234,   475,    12,   672,   673,   672,   234,
     492,   151,   495,    44,    52,    52,   613,   106,   222,   105,
     617,   104,   123,   129,   205,   206,   207,   210,   211,   614,
     627,   618,   142,    94,    97,   100,   101,   102,   103,   160,
     194,   212,   213,   216,   631,   632,   633,   634,   635,   638,
     643,   644,   645,    93,   128,   220,   221,   626,   475,   475,
      40,   180,   181,   630,   134,   612,   661,   180,   181,   129,
     130,   147,   154,   200,   201,   180,   186,   450,   713,    77,
      78,   111,   247,   251,   666,   713,   135,   201,   182,   192,
     456,   612,   182,   612,   298,   297,   351,    23,    33,    39,
      64,    80,   241,   242,   421,   422,   423,   424,   427,   428,
     429,   541,   590,    61,    62,    63,   352,   265,   356,   357,
     373,   590,   373,   590,   474,   256,   590,   474,   256,    72,
     131,   330,   331,   332,   364,   131,   365,   365,   592,   256,
     474,   314,   269,   394,   396,   373,   474,   474,   372,   256,
     131,   327,   329,   381,   474,   256,   263,   386,   387,   256,
     386,   256,   373,   474,   372,   372,   280,   400,   590,   474,
     256,   474,   256,   372,   474,   256,   256,   372,   474,   372,
     372,   256,   372,   474,   256,   372,   372,   256,   474,   256,
     474,   256,   465,    40,   182,   194,   459,    36,    44,   701,
      44,   590,   590,   161,    46,    46,    34,   126,   127,   472,
     558,   549,    12,   142,   549,   590,    12,   140,   590,   475,
     164,    44,   475,   549,    36,    44,    44,    43,   152,   153,
     154,   624,    52,   515,   105,   108,   109,   512,   513,   626,
     225,   226,   629,   629,   619,   100,   101,   102,   103,    95,
      96,    43,   123,   192,   637,   222,    95,    96,   713,   660,
     631,   110,   153,   513,   513,   209,   612,    40,   151,   612,
     182,   182,    36,   134,   713,   131,   327,   328,   667,   668,
     244,   161,    12,   714,   661,   200,   612,   123,   455,   661,
     455,   131,   327,   328,   541,    22,    22,    43,    43,    15,
     428,    33,    39,    33,    39,   430,   289,   299,   300,   311,
     312,   373,   256,   256,   131,   474,   373,   256,   256,   289,
     299,   311,   312,   373,   256,   373,   256,   373,   466,   612,
     661,   713,   201,   546,   164,   590,   562,   562,   560,   549,
     475,   161,   549,   475,   475,   589,   673,   672,   612,   222,
     223,   224,   628,   628,   222,   192,   637,   612,    43,   123,
     192,   640,   134,   513,   513,   170,   441,   612,   152,   153,
     612,   612,   187,   188,   451,    43,   472,   665,   666,    36,
     421,   592,   549,   465,    40,   182,   455,   612,    36,    40,
     541,   541,   425,   548,   660,   660,   422,   428,   428,   428,
     428,    24,   590,   474,   256,   256,   590,   474,   256,   256,
     472,   441,    40,   134,   714,   701,    47,    49,   563,    47,
      49,   564,   562,   140,    13,    44,   636,   636,   214,   626,
     641,   660,   612,   639,   639,   513,    44,   470,   161,   664,
     244,   668,   472,   665,   589,   466,   612,   612,    44,    36,
     474,   337,   441,   612,   441,   465,   565,   567,   566,   568,
      29,   475,   475,    36,    44,    44,   660,   215,    36,    44,
     173,   175,   642,    44,   590,   472,   421,   664,    13,   184,
     463,   184,   467,   472,   455,   426,   546,   548,    25,   441,
     466,    48,   124,   472,    50,   125,   472,    48,   124,   472,
      50,   125,   472,   637,   626,   660,   640,   640,   472,   665,
     472,   475,    44,   472,   215,   664,   441,   472
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
#line 821 "../src/parser/XQParser.y"
    {
    QP->_seqType = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 828 "../src/parser/XQParser.y"
    {
    BuiltInModules::addNamespaces(CONTEXT);
  }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 834 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (8)].signature)->argSpecs = (yyvsp[(5) - (8)].argSpecs);
    (yyvsp[(2) - (8)].signature)->returnType = (yyvsp[(6) - (8)].sequenceType);
    QP->_function = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(2) - (8)].signature), (yyvsp[(7) - (8)].astNode), true, MEMMGR));
  }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 845 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].signature)->argSpecs = (yyvsp[(2) - (3)].argSpecs);
    (yyvsp[(1) - (3)].signature)->returnType = (yyvsp[(3) - (3)].sequenceType);
    QP->_signature = (yyvsp[(1) - (3)].signature);
  }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 854 "../src/parser/XQParser.y"
    {
    printf("  { DelayedModule::Decl::NONE, 0, 0, 0, 0, 0 }\n};\n\n");

    UTF8Str module(QP->_moduleName);
    printf("static const DelayedModule %s_module = { %s_file, %s_prefix, %s_uri, %s_declarations };\n",
           module.str(), module.str(), module.str(), module.str(), module.str());
  }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 865 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));

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
#line 904 "../src/parser/XQParser.y"
    {
    printf("static const DelayedModule::Decl %s_declarations[] = {\n", UTF8(QP->_moduleName));
  }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 914 "../src/parser/XQParser.y"
    {
    XMLBuffer buf;

    // Call staticResolution on the function signature, to resolve the annotation names
    (yyvsp[(2) - (8)].signature)->staticResolution(CONTEXT);

    const XMLCh *localname = XPath2NSUtils::getLocalName((yyvsp[(4) - (8)].str));
    DM_outputDecl("FUNCTION", UTF8(localname), (int)((yyvsp[(5) - (8)].argSpecs) ? (yyvsp[(5) - (8)].argSpecs)->size() : 0),
                  (yyvsp[(2) - (8)].signature)->isPrivate(), (yylsp[(1) - (8)]).first_line, (yylsp[(1) - (8)]).first_column,
                  ((XQLexer*)QP->_lexer)->getQueryString() + (yylsp[(1) - (8)]).first_offset,
                  (yylsp[(8) - (8)]).last_offset - (yylsp[(1) - (8)]).first_offset);
  }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 930 "../src/parser/XQParser.y"
    {
    // validate the QName
    QualifiedName qName((yyvsp[(3) - (5)].str));
    const XMLCh* prefix = qName.getPrefix();
    if(prefix == 0 || *prefix == 0)
      yyerror((yylsp[(3) - (5)]), "The option name must have a prefix [err:XPST0081]");

    const XMLCh *uri = 0;
    try {
      LOCATION((yylsp[(3) - (5)]), loc);
      uri = CONTEXT->getUriBoundToPrefix(prefix, &loc);
    }
    catch(NamespaceLookupException&) {
      yyerror((yylsp[(3) - (5)]), "The option name is using an undefined namespace prefix [err:XPST0081]");
    }

    if(XPath2Utils::equals(uri, XQRewriteRule::URI)) {
      if(XPath2Utils::equals(qName.getName(), option_rule)) {
        DM_outputDecl("REWRITE_RULE", "", 0, false, (yylsp[(4) - (5)]).first_line, (yylsp[(4) - (5)]).first_column + 1,
                      (yyvsp[(4) - (5)].str), XPath2Utils::intStrlen((yyvsp[(4) - (5)].str)));
      }
    }
  }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 957 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
    DM_outputDecl("NAMESPACE", UTF8((yyvsp[(3) - (6)].str)), 0, false, (yylsp[(1) - (6)]).first_line, (yylsp[(1) - (6)]).first_column,
                  (yyvsp[(5) - (6)].str), XPath2Utils::intStrlen((yyvsp[(5) - (6)].str)));
  }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 970 "../src/parser/XQParser.y"
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

  case 26:

/* Line 1455 of yacc.c  */
#line 999 "../src/parser/XQParser.y"
    {
  }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 1002 "../src/parser/XQParser.y"
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

  case 29:

/* Line 1455 of yacc.c  */
#line 1026 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 1030 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 1049 "../src/parser/XQParser.y"
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

  case 40:

/* Line 1455 of yacc.c  */
#line 1068 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, signature, 0, MEMMGR));
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 1073 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 1078 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 1085 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 1090 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 1095 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 1103 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 1107 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 1113 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1118 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1128 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:function declaration does not have a {}name attribute");
    }

    (yyvsp[(1) - (4)].functDecl)->getSignature()->argSpecs = (yyvsp[(2) - (4)].argSpecs);
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1141 "../src/parser/XQParser.y"
    {    
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, signature, 0, true, MEMMGR));
  }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 1146 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1153 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 1158 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1166 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1170 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1178 "../src/parser/XQParser.y"
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

  case 61:

/* Line 1455 of yacc.c  */
#line 1205 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 1209 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1216 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1222 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1227 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1232 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1241 "../src/parser/XQParser.y"
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

  case 68:

/* Line 1455 of yacc.c  */
#line 1265 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1269 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1276 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1281 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1286 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1291 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1302 "../src/parser/XQParser.y"
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

  case 75:

/* Line 1455 of yacc.c  */
#line 1320 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1324 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1331 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1336 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1344 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1369 "../src/parser/XQParser.y"
    {
  }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1372 "../src/parser/XQParser.y"
    {
  }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1375 "../src/parser/XQParser.y"
    {
  }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1378 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1381 "../src/parser/XQParser.y"
    {
  }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1384 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1387 "../src/parser/XQParser.y"
    {
  }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1390 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1393 "../src/parser/XQParser.y"
    {
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1396 "../src/parser/XQParser.y"
    {
  }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1399 "../src/parser/XQParser.y"
    {
  }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1402 "../src/parser/XQParser.y"
    {
  }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1405 "../src/parser/XQParser.y"
    {
  }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1408 "../src/parser/XQParser.y"
    {
  }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1411 "../src/parser/XQParser.y"
    {
  }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1414 "../src/parser/XQParser.y"
    {
  }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1417 "../src/parser/XQParser.y"
    {
  }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1420 "../src/parser/XQParser.y"
    {
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1430 "../src/parser/XQParser.y"
    {
//     $$ = $1;
    const XMLCh *p = (yyvsp[(1) - (1)].str);
    while(*p && *p != ':') ++p;
    if(*p == 0) {
      yyerror((yylsp[(1) - (1)]), "The method for the xsl:output declaration does not have a prefix");
    }
  }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1442 "../src/parser/XQParser.y"
    {
  }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1445 "../src/parser/XQParser.y"
    {
  }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1451 "../src/parser/XQParser.y"
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

  case 106:

/* Line 1455 of yacc.c  */
#line 1465 "../src/parser/XQParser.y"
    {
    (yyval.alias) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTypeAlias(0, 0, MEMMGR));
  }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1469 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].alias)->setURI(uri);
    (yyvsp[(1) - (2)].alias)->setName(name);
    (yyval.alias) = (yyvsp[(1) - (2)].alias);
  }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1476 "../src/parser/XQParser.y"
    {
    (yyval.alias) = (yyvsp[(1) - (3)].alias);
    (yyval.alias)->setType((yyvsp[(3) - (3)].itemType));
  }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1486 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1491 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1496 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1504 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1512 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1523 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1533 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1537 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1544 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1553 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1557 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1562 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1570 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1574 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1579 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1584 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1613 "../src/parser/XQParser.y"
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

  case 145:

/* Line 1455 of yacc.c  */
#line 1631 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1635 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1640 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1649 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1658 "../src/parser/XQParser.y"
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

  case 152:

/* Line 1455 of yacc.c  */
#line 1678 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1682 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1687 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1695 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1700 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1704 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1711 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1715 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1723 "../src/parser/XQParser.y"
    {
    XQCallTemplate *call = (XQCallTemplate*)(yyvsp[(1) - (3)].astNode);
    call->setArguments((yyvsp[(2) - (3)].templateArgs));
    (yyval.astNode) = call;

    if(call->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:call-template instruction does not have a {}name attribute");
    }
  }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1736 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1740 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1750 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1754 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1762 "../src/parser/XQParser.y"
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

  case 166:

/* Line 1455 of yacc.c  */
#line 1780 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1784 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1791 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1796 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1801 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1809 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1815 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1823 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1831 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1838 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(2) - (4)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = (yyvsp[(2) - (4)].astNode);
  }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1852 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1856 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (2)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(2) - (2)].astNode));

    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1870 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1879 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1886 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1890 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1897 "../src/parser/XQParser.y"
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

  case 183:

/* Line 1455 of yacc.c  */
#line 1932 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1936 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1941 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1947 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1956 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1960 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1967 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1971 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1978 "../src/parser/XQParser.y"
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

  case 192:

/* Line 1455 of yacc.c  */
#line 1996 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), (XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 2000 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 2007 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 2012 "../src/parser/XQParser.y"
    {
    const_cast<ArgumentSpec*>((yyvsp[(1) - (3)].letTuple)->getVar())->setType((yyvsp[(3) - (3)].sequenceType));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 2020 "../src/parser/XQParser.y"
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

  case 197:

/* Line 1455 of yacc.c  */
#line 2038 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 2042 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2050 "../src/parser/XQParser.y"
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

  case 200:

/* Line 1455 of yacc.c  */
#line 2072 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2076 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 2083 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 2091 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 2100 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2108 "../src/parser/XQParser.y"
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

  case 206:

/* Line 1455 of yacc.c  */
#line 2146 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 2150 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2157 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2164 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 2173 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2182 "../src/parser/XQParser.y"
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

  case 212:

/* Line 1455 of yacc.c  */
#line 2209 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 2213 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 2220 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 2232 "../src/parser/XQParser.y"
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

  case 216:

/* Line 1455 of yacc.c  */
#line 2259 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 2263 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 2270 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 2280 "../src/parser/XQParser.y"
    {
    XQCopyOf *as = (XQCopyOf*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:copy-of instruction does not have a {}select attribute");
    }
  }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 2292 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 2296 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 2301 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2310 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    XQCopy *as = (XQCopy*)(yyval.astNode);

    XQContextItem *ci = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQContextItem(MEMMGR));
    as->setExpression(ci);

    as->setChildren((yyvsp[(2) - (3)].parenExpr)->getChildren());
  }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 2323 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 2327 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 2332 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 2341 "../src/parser/XQParser.y"
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

  case 228:

/* Line 1455 of yacc.c  */
#line 2355 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 2359 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 2372 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 2377 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2389 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 2393 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::SELF, nt, MEMMGR));
  }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 2401 "../src/parser/XQParser.y"
    {
    // . intersect id("a")

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR)));
    oargs.push_back((yyvsp[(1) - (1)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Intersect(oargs, MEMMGR));
  }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 2414 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::PARENT, nt, MEMMGR));
  }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 2422 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::ANCESTOR, nt, MEMMGR));
  }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 2435 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 2442 "../src/parser/XQParser.y"
    {
//     VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
//     fargs.push_back($3);
//     fargs.push_back($5);

//     $$ = WRAP(@1, new (MEMMGR) FunctionKey(fargs, MEMMGR));

    // TBD key() - jpcs
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2481 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2485 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2489 "../src/parser/XQParser.y"
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

  case 246:

/* Line 1455 of yacc.c  */
#line 2507 "../src/parser/XQParser.y"
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

  case 247:

/* Line 1455 of yacc.c  */
#line 2525 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(Node::PARENT);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 2535 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(Node::ANCESTOR);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 2549 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 2557 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 2563 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 2569 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 2575 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 2586 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 2590 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 2618 "../src/parser/XQParser.y"
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

  case 263:

/* Line 1455 of yacc.c  */
#line 2638 "../src/parser/XQParser.y"
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

  case 266:

/* Line 1455 of yacc.c  */
#line 2662 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 2676 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 2680 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 2684 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 2688 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 2692 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 2696 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 2702 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 2708 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 2712 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 2716 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2748 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2756 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2761 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2770 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2775 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 2784 "../src/parser/XQParser.y"
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
    else if(XPath2Utils::equals(uri, XQRewriteRule::URI)) {
      if(XPath2Utils::equals(qName.getName(), option_rule)) {
        LOCATION((yylsp[(4) - (4)]), loc);
        loc.setLocationInfo(loc.getFile(), loc.getLine(), loc.getColumn() + 1);
        QP->_query->addRewriteRule(XQRewriteRule::parse((yyvsp[(4) - (4)].str), MEMMGR, &loc));
      }
      else {
        yyerror((yylsp[(3) - (4)]), "Unknown option name in the xqilla rewrite namespace [err:XQILLA]");
      }
    }
  }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 2865 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 2873 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2878 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2887 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 2892 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 2901 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 2911 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 2915 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 2923 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2927 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 2935 "../src/parser/XQParser.y"
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

  case 306:

/* Line 1455 of yacc.c  */
#line 2951 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2960 "../src/parser/XQParser.y"
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

  case 308:

/* Line 1455 of yacc.c  */
#line 2972 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 2980 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2984 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2989 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2998 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 3002 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 3010 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), &loc);
  }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 3020 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 3032 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 3037 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 3046 "../src/parser/XQParser.y"
    {
    (yyval.signature) = new (MEMMGR) FunctionSignature(MEMMGR);
  }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 3050 "../src/parser/XQParser.y"
    {
    (yyval.signature) = (yyvsp[(1) - (2)].signature);
    (yyval.signature)->annotations.push_back((yyvsp[(2) - (2)].annotation));
  }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 3061 "../src/parser/XQParser.y"
    {
    ASTNode *trueExpr =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                           MEMMGR->getPooledString("true"), 0, MEMMGR));
    (yyval.annotation) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Annotation(0, XQFunction::XMLChFunctionURI, (yyvsp[(1) - (1)].str), trueExpr, MEMMGR));
  }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 3073 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQGlobalVariable((yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode), MEMMGR)));
  }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 3080 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 3084 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 3092 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (7)].signature)->argSpecs = (yyvsp[(5) - (7)].argSpecs);
    (yyvsp[(2) - (7)].signature)->returnType = (yyvsp[(6) - (7)].sequenceType);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), (yyvsp[(2) - (7)].signature), (yyvsp[(7) - (7)].astNode), true, MEMMGR));
  }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 3101 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 3105 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 3112 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 3116 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 3125 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 3133 "../src/parser/XQParser.y"
    {
    ASTNode *trueExpr =
      WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                           MEMMGR->getPooledString("true"), 0, MEMMGR));
    (yyval.annotation) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) Annotation((yyvsp[(2) - (2)].str), trueExpr));
  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 3140 "../src/parser/XQParser.y"
    {
    (yyval.annotation) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) Annotation((yyvsp[(2) - (5)].str), (yyvsp[(4) - (5)].parenExpr)));
  }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 3147 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.parenExpr)->addItem((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 3152 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (3)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(3) - (3)].astNode));
  }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 3161 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 3166 "../src/parser/XQParser.y"
    {
    ArgumentSpecs* paramList = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 3176 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 3184 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 3192 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 3205 "../src/parser/XQParser.y"
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

  case 356:

/* Line 1455 of yacc.c  */
#line 3243 "../src/parser/XQParser.y"
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

  case 358:

/* Line 1455 of yacc.c  */
#line 3288 "../src/parser/XQParser.y"
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

  case 359:

/* Line 1455 of yacc.c  */
#line 3301 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 3316 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 3323 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 3331 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 3342 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 3346 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 3356 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 3360 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 3370 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 3377 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 3385 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 3389 "../src/parser/XQParser.y"
    {
    ASTNode *literal = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::INTEGER, X("0"), MEMMGR));
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(3) - (5)].str), literal, MEMMGR));
  }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 3398 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 3406 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) CountTuple(0, (yyvsp[(3) - (3)].str), MEMMGR));
  }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 3414 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 3419 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 3427 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 3437 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 3444 "../src/parser/XQParser.y"
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

  case 386:

/* Line 1455 of yacc.c  */
#line 3459 "../src/parser/XQParser.y"
    {
    SequenceType *zero_or_one = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType((ItemType*)&ItemType::ITEM, SequenceType::QUESTION_MARK));

    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAtomize((yyval.astNode), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPromoteUntyped((yyval.astNode), (ItemType*)&ItemType::STRING, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs((yyval.astNode), zero_or_one, MEMMGR));
  }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 3473 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 3477 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 3481 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 3488 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 3497 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 3501 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 3510 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 3518 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 3529 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 3537 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 3548 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR));
  }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 3555 "../src/parser/XQParser.y"
    {
    XQTypeswitch::Cases::iterator it = (yyvsp[(2) - (2)].caseClauses)->begin();
    for(; it != (yyvsp[(2) - (2)].caseClauses)->end(); ++it) {
      (yyvsp[(1) - (2)].caseClauses)->push_back(*it);
    }

    (yyval.caseClauses) = (yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 3568 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 3572 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 3580 "../src/parser/XQParser.y"
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

  case 404:

/* Line 1455 of yacc.c  */
#line 3598 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses) = new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), 0)));
  }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 3603 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(SequenceTypeUnion, (yylsp[(2) - (3)]));
    (yyvsp[(1) - (3)].caseClauses)->push_back(WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(1) - (3)].caseClauses)->back()->getQName(), (yyvsp[(3) - (3)].sequenceType), 0)));
    (yyval.caseClauses) = (yyvsp[(1) - (3)].caseClauses);
  }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 3612 "../src/parser/XQParser.y"
    {
    (yyval.str) = 0;
  }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 3616 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 3624 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 3632 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OR) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 3646 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::AND) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 3665 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 3669 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3672 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 3673 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 3677 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 3681 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 3685 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 3689 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 3693 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 3697 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 3701 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 3705 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3709 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 3713 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 3717 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 3721 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 3730 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 3734 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 3742 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionCall(0, BuiltInModules::fn.uri, MEMMGR->getPooledString("concat"), args, MEMMGR));
  }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 3754 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionCall(0, BuiltInModules::core.uri, MEMMGR->getPooledString("to"), args, MEMMGR));
  }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 3766 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3770 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 3779 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 3783 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 3787 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 3791 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 3800 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 3804 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 3813 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 3817 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 3826 "../src/parser/XQParser.y"
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

  case 453:

/* Line 1455 of yacc.c  */
#line 3848 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 3858 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 3867 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 3876 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 3882 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 3903 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 3907 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 3911 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 3919 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 3926 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 3939 "../src/parser/XQParser.y"
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

  case 474:

/* Line 1455 of yacc.c  */
#line 3960 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 3969 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 3975 "../src/parser/XQParser.y"
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

  case 479:

/* Line 1455 of yacc.c  */
#line 4000 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ItemType(ItemType::TEST_DOCUMENT))));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 4014 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 4020 "../src/parser/XQParser.y"
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

  case 482:

/* Line 1455 of yacc.c  */
#line 4033 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQMap((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 4046 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 4056 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 4063 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 4072 "../src/parser/XQParser.y"
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

  case 494:

/* Line 1455 of yacc.c  */
#line 4095 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::CHILD;
  }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 4099 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::DESCENDANT;
  }
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 4103 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ATTRIBUTE;
  }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 4107 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::SELF;
  }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 4111 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::DESCENDANT_OR_SELF;
  }
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 4115 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::FOLLOWING_SIBLING;
  }
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 4119 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::FOLLOWING;
  }
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 4123 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::NAMESPACE;
  }
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 4131 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 4139 "../src/parser/XQParser.y"
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

  case 504:

/* Line 1455 of yacc.c  */
#line 4156 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 4173 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PARENT;
  }
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 4177 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ANCESTOR;
  }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 4181 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PRECEDING_SIBLING;
  }
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 4185 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PRECEDING;
  }
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 4189 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ANCESTOR_OR_SELF;
  }
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 4197 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::PARENT, step, MEMMGR));
  }
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 4209 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 4219 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 4231 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 4238 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 4245 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 4258 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 4287 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 4298 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 4302 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 4310 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 4318 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 4328 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 4338 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 4342 "../src/parser/XQParser.y"
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

  case 545:

/* Line 1455 of yacc.c  */
#line 4365 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 546:

/* Line 1455 of yacc.c  */
#line 4370 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 548:

/* Line 1455 of yacc.c  */
#line 4381 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 4390 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 550:

/* Line 1455 of yacc.c  */
#line 4394 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 4407 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 4413 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 4426 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 4430 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 4439 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 4455 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 4459 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 4466 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 4470 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 4480 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 4484 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 4489 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 4497 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 4501 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 4505 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 4516 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 4520 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 4525 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 4533 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 4537 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 4541 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 4556 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 580:

/* Line 1455 of yacc.c  */
#line 4560 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 4565 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 582:

/* Line 1455 of yacc.c  */
#line 4570 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 4575 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
    }
  }
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 4586 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 585:

/* Line 1455 of yacc.c  */
#line 4595 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 587:

/* Line 1455 of yacc.c  */
#line 4604 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(3) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor(WRAP((yylsp[(2) - (3)]), new (MEMMGR)
          XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (3)].str), MEMMGR)), value, MEMMGR));
  }
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 4615 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 4640 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 4648 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 4656 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 4660 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4668 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 4672 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 4681 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 4688 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 4692 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 4702 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQNamespaceConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 4710 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 4718 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 4726 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 4733 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 4741 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 4748 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 4752 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 4760 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType((yyvsp[(1) - (2)].itemType), (yyvsp[(2) - (2)].occurrence)));
  }
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 4767 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 4771 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 4779 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(WRAP((yyloc), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING)), SequenceType::STAR));
  }
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 4783 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 4793 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType((yyvsp[(1) - (2)].itemType), (yyvsp[(2) - (2)].occurrence)));
  }
    break;

  case 620:

/* Line 1455 of yacc.c  */
#line 4797 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 4806 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 4808 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 623:

/* Line 1455 of yacc.c  */
#line 4810 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 624:

/* Line 1455 of yacc.c  */
#line 4812 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 625:

/* Line 1455 of yacc.c  */
#line 4818 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING));
  }
    break;

  case 630:

/* Line 1455 of yacc.c  */
#line 4830 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ItemType(ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName)));
  }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4860 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_NODE));
  }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4868 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_DOCUMENT));
  }
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 4872 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(ItemType::TEST_DOCUMENT);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.itemType)->setLocationInfo(&loc);
  }
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 4879 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(ItemType::TEST_SCHEMA_DOCUMENT);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.itemType)->setLocationInfo(&loc);
  }
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 4890 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_TEXT));
  }
    break;

  case 646:

/* Line 1455 of yacc.c  */
#line 4898 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_COMMENT));
  }
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 4906 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(NamespaceNodeTest, (yylsp[(1) - (3)]));
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_NAMESPACE));
  }
    break;

  case 648:

/* Line 1455 of yacc.c  */
#line 4915 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_PI));
  }
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 4919 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR)));
  }
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 4923 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR)));
  }
    break;

  case 651:

/* Line 1455 of yacc.c  */
#line 4931 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE));
  }
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 4935 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 653:

/* Line 1455 of yacc.c  */
#line 4939 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName)));
  }
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 4948 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 656:

/* Line 1455 of yacc.c  */
#line 4956 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 4969 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT));
  }
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 4973 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 4977 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName)));
  }
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 4981 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName)));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 663:

/* Line 1455 of yacc.c  */
#line 4991 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 664:

/* Line 1455 of yacc.c  */
#line 4999 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 669:

/* Line 1455 of yacc.c  */
#line 5019 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 670:

/* Line 1455 of yacc.c  */
#line 5031 "../src/parser/XQParser.y"
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

  case 671:

/* Line 1455 of yacc.c  */
#line 5046 "../src/parser/XQParser.y"
    {
}
    break;

  case 672:

/* Line 1455 of yacc.c  */
#line 5049 "../src/parser/XQParser.y"
    {
}
    break;

  case 673:

/* Line 1455 of yacc.c  */
#line 5055 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 674:

/* Line 1455 of yacc.c  */
#line 5059 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 675:

/* Line 1455 of yacc.c  */
#line 5069 "../src/parser/XQParser.y"
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

  case 677:

/* Line 1455 of yacc.c  */
#line 5086 "../src/parser/XQParser.y"
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

  case 679:

/* Line 1455 of yacc.c  */
#line 5102 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 681:

/* Line 1455 of yacc.c  */
#line 5112 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 5122 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 5131 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 5136 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 5146 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 5150 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 5158 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 691:

/* Line 1455 of yacc.c  */
#line 5163 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 692:

/* Line 1455 of yacc.c  */
#line 5172 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 693:

/* Line 1455 of yacc.c  */
#line 5176 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 5180 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 5184 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 696:

/* Line 1455 of yacc.c  */
#line 5188 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 697:

/* Line 1455 of yacc.c  */
#line 5192 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 699:

/* Line 1455 of yacc.c  */
#line 5202 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 5213 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 5219 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 5225 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 703:

/* Line 1455 of yacc.c  */
#line 5231 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 5246 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 5250 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 5254 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 707:

/* Line 1455 of yacc.c  */
#line 5258 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 708:

/* Line 1455 of yacc.c  */
#line 5262 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 709:

/* Line 1455 of yacc.c  */
#line 5266 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 710:

/* Line 1455 of yacc.c  */
#line 5270 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 711:

/* Line 1455 of yacc.c  */
#line 5274 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 712:

/* Line 1455 of yacc.c  */
#line 5282 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 713:

/* Line 1455 of yacc.c  */
#line 5286 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 714:

/* Line 1455 of yacc.c  */
#line 5290 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 715:

/* Line 1455 of yacc.c  */
#line 5298 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 716:

/* Line 1455 of yacc.c  */
#line 5302 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 5338 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_INSENSITIVE);
  }
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 5342 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_SENSITIVE);
  }
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 5346 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::LOWERCASE);
  }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5350 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::UPPERCASE);
  }
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 5359 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 5363 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 5371 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 5375 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 735:

/* Line 1455 of yacc.c  */
#line 5385 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 5389 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 5393 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 5397 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 739:

/* Line 1455 of yacc.c  */
#line 5401 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 740:

/* Line 1455 of yacc.c  */
#line 5408 "../src/parser/XQParser.y"
    {
  }
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 5411 "../src/parser/XQParser.y"
    {
  }
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 5418 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5422 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5426 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5430 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 5440 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 5444 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 5448 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 5455 "../src/parser/XQParser.y"
    {
  }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 5458 "../src/parser/XQParser.y"
    {
  }
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 5466 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 5470 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 5477 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 5481 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 5489 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 5493 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 5501 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 5509 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 759:

/* Line 1455 of yacc.c  */
#line 5513 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 760:

/* Line 1455 of yacc.c  */
#line 5521 "../src/parser/XQParser.y"
    {
}
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 5528 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 762:

/* Line 1455 of yacc.c  */
#line 5536 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 763:

/* Line 1455 of yacc.c  */
#line 5541 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 5546 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 765:

/* Line 1455 of yacc.c  */
#line 5558 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 5562 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 5566 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 5570 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5574 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5585 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5596 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5600 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5610 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5618 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5625 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5630 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5638 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5647 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::INTEGER, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5655 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::DECIMAL, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 5663 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::DOUBLE, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 5672 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 5679 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 5688 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5700 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, signature, (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5705 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(5) - (7)].argSpecs), (yyvsp[(6) - (7)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, signature, (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5710 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5716 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(8) - (10)].argSpecs), (yyvsp[(9) - (10)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), signature, (yyvsp[(10) - (10)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5722 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), signature, (yyvsp[(6) - (6)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5728 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(6) - (8)].argSpecs), (yyvsp[(7) - (8)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5737 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5741 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5749 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5753 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5760 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5765 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5773 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5778 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5787 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5791 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 5795 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5803 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5807 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5815 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 5819 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 5823 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 5827 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 811:

/* Line 1455 of yacc.c  */
#line 5835 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 5839 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5843 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 5851 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 815:

/* Line 1455 of yacc.c  */
#line 5856 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 816:

/* Line 1455 of yacc.c  */
#line 5866 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5883 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 5891 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(2) - (4)].argSpecs), (yyvsp[(3) - (4)].sequenceType), MEMMGR);
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, signature, (yyvsp[(4) - (4)].astNode), false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 5902 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 5907 "../src/parser/XQParser.y"
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

  case 825:

/* Line 1455 of yacc.c  */
#line 5935 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ItemType(ItemType::TEST_FUNCTION));
  }
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 5947 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(new (MEMMGR) FunctionSignature(0, (yyvsp[(6) - (6)].sequenceType), MEMMGR), 0));
  }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5951 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ItemType(new (MEMMGR) FunctionSignature((yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].sequenceType), MEMMGR), 0));
  }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5958 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    (yyval.argSpecs)->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, (yyvsp[(1) - (1)].sequenceType), MEMMGR)));
  }
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 5963 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
    (yyval.argSpecs)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec(0, (yyvsp[(3) - (3)].sequenceType), MEMMGR)));
  }
    break;

  case 832:

/* Line 1455 of yacc.c  */
#line 5972 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 5985 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType((yyvsp[(3) - (4)].tupleMembers), 0));
  }
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 5989 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_TUPLE));
  }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 5996 "../src/parser/XQParser.y"
    {
    (yyval.tupleMembers) = new (MEMMGR) TupleMembers(true, MEMMGR);
    (yyvsp[(1) - (1)].argSpec)->setIndex(0);
    (yyval.tupleMembers)->add(0, (yyvsp[(1) - (1)].argSpec));
  }
    break;

  case 838:

/* Line 1455 of yacc.c  */
#line 6002 "../src/parser/XQParser.y"
    {
    (yyval.tupleMembers) = (yyvsp[(1) - (3)].tupleMembers);
    (yyvsp[(3) - (3)].argSpec)->setIndex((yyval.tupleMembers)->size());
    (yyval.tupleMembers)->add(0, (yyvsp[(3) - (3)].argSpec));
  }
    break;

  case 839:

/* Line 1455 of yacc.c  */
#line 6012 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) ArgumentSpec((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].sequenceType), MEMMGR));
  }
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 6020 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(WRAP((yylsp[(3) - (6)]), new (MEMMGR)
          SequenceType((yyvsp[(3) - (6)].itemType), SequenceType::EXACTLY_ONE)), (yyvsp[(5) - (6)].sequenceType), 0));
  }
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 6025 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_MAP));
  }
    break;

  case 844:

/* Line 1455 of yacc.c  */
#line 6035 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tuples = setLastAncestor((yyvsp[(3) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the tuple constructor expression
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTupleConstructor(tuples, MEMMGR));
  }
    break;

  case 845:

/* Line 1455 of yacc.c  */
#line 6043 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTupleConstructor(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)), MEMMGR));
  }
    break;

  case 847:

/* Line 1455 of yacc.c  */
#line 6051 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 848:

/* Line 1455 of yacc.c  */
#line 6059 "../src/parser/XQParser.y"
    {
    // TBD LetTuple doesn't give us the correct in-scope vars for the initializer - jpcs
    (yyval.tupleNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) LetTuple(0, (yyvsp[(1) - (4)].str), WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQTreatAs((yyvsp[(4) - (4)].astNode), (yyvsp[(2) - (4)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 849:

/* Line 1455 of yacc.c  */
#line 6068 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 850:

/* Line 1455 of yacc.c  */
#line 6072 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
        MEMMGR->getPooledString("empty-map"), 0, MEMMGR));
  }
    break;

  case 851:

/* Line 1455 of yacc.c  */
#line 6080 "../src/parser/XQParser.y"
    {
    XQFunctionCall *func = (XQFunctionCall*)(yyvsp[(1) - (1)].astNode);
    const_cast<VectorOfASTNodes&>(*func->getArguments())[0] =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
          MEMMGR->getPooledString("empty-map"), 0, MEMMGR));
    (yyval.astNode) = func;
  }
    break;

  case 852:

/* Line 1455 of yacc.c  */
#line 6088 "../src/parser/XQParser.y"
    {
    XQFunctionCall *func = (XQFunctionCall*)(yyvsp[(3) - (3)].astNode);
    const_cast<VectorOfASTNodes&>(*func->getArguments())[0] = (yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = func;
  }
    break;

  case 853:

/* Line 1455 of yacc.c  */
#line 6098 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back(0);
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
        MEMMGR->getPooledString("map-put"), args, MEMMGR));
  }
    break;

  case 855:

/* Line 1455 of yacc.c  */
#line 6112 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTupleMember((yyvsp[(3) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQMap((yyvsp[(1) - (3)].astNode), (yyval.astNode), MEMMGR));
  }
    break;

  case 856:

/* Line 1455 of yacc.c  */
#line 6120 "../src/parser/XQParser.y"
    {
    QP->_query->addTypeAlias(WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeAlias((yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].itemType), MEMMGR)));
  }
    break;

  case 857:

/* Line 1455 of yacc.c  */
#line 6130 "../src/parser/XQParser.y"
    {
    QP->_rwrule = (yyvsp[(1) - (1)].rwrule);
  }
    break;

  case 858:

/* Line 1455 of yacc.c  */
#line 6137 "../src/parser/XQParser.y"
    {
    QP->_rwpattern = (yyvsp[(1) - (1)].rwpattern);
  }
    break;

  case 859:

/* Line 1455 of yacc.c  */
#line 6144 "../src/parser/XQParser.y"
    {
    (yyval.rwrule) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQRewriteRule((yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].rwpattern), (yyvsp[(4) - (5)].astNode), MEMMGR));
    (yyval.rwrule)->addCase((yyvsp[(5) - (5)].rwcase));
  }
    break;

  case 860:

/* Line 1455 of yacc.c  */
#line 6149 "../src/parser/XQParser.y"
    {
    (yyval.rwrule) = (yyvsp[(1) - (2)].rwrule);
    (yyval.rwrule)->addCase((yyvsp[(2) - (2)].rwcase));
  }
    break;

  case 861:

/* Line 1455 of yacc.c  */
#line 6157 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 862:

/* Line 1455 of yacc.c  */
#line 6161 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 863:

/* Line 1455 of yacc.c  */
#line 6168 "../src/parser/XQParser.y"
    {
    (yyval.rwcase) = new (MEMMGR) RewriteCase((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 864:

/* Line 1455 of yacc.c  */
#line 6175 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) RewritePattern(ASTNode::IF, (yyvsp[(3) - (8)].rwpattern), (yyvsp[(6) - (8)].rwpattern), (yyvsp[(8) - (8)].rwpattern), MEMMGR));
  }
    break;

  case 866:

/* Line 1455 of yacc.c  */
#line 6183 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].rwpattern)->type == ASTNode::OR) {
      (yyval.rwpattern) = (yyvsp[(1) - (3)].rwpattern);
      (yyval.rwpattern)->children.push_back((yyvsp[(3) - (3)].rwpattern));
    }
    else {
      (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::OR, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
    }
  }
    break;

  case 868:

/* Line 1455 of yacc.c  */
#line 6197 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].rwpattern)->type == ASTNode::AND) {
      (yyval.rwpattern) = (yyvsp[(1) - (3)].rwpattern);
      (yyval.rwpattern)->children.push_back((yyvsp[(3) - (3)].rwpattern));
    }
    else {
      (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::AND, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
    }
  }
    break;

  case 870:

/* Line 1455 of yacc.c  */
#line 6211 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::EQUALS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 871:

/* Line 1455 of yacc.c  */
#line 6215 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::NOT_EQUALS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 872:

/* Line 1455 of yacc.c  */
#line 6219 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::GREATER_THAN, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 873:

/* Line 1455 of yacc.c  */
#line 6223 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::GREATER_THAN_EQUAL, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 874:

/* Line 1455 of yacc.c  */
#line 6227 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::LESS_THAN, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 875:

/* Line 1455 of yacc.c  */
#line 6231 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::LESS_THAN_EQUAL, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 877:

/* Line 1455 of yacc.c  */
#line 6239 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::PLUS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 878:

/* Line 1455 of yacc.c  */
#line 6243 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::MINUS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 880:

/* Line 1455 of yacc.c  */
#line 6251 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::MULTIPLY, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 881:

/* Line 1455 of yacc.c  */
#line 6255 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::DIVIDE, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 882:

/* Line 1455 of yacc.c  */
#line 6259 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::INTEGER_DIVIDE, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 883:

/* Line 1455 of yacc.c  */
#line 6263 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::MOD, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 885:

/* Line 1455 of yacc.c  */
#line 6271 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(2) - (2)].rwpattern);
  }
    break;

  case 886:

/* Line 1455 of yacc.c  */
#line 6275 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) RewritePattern(ASTNode::UNARY_MINUS, (yyvsp[(2) - (2)].rwpattern), MEMMGR));
  }
    break;

  case 888:

/* Line 1455 of yacc.c  */
#line 6283 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) RewritePattern(ASTNode::PREDICATE, (yyvsp[(1) - (4)].rwpattern), (yyvsp[(3) - (4)].rwpattern), MEMMGR));
  }
    break;

  case 890:

/* Line 1455 of yacc.c  */
#line 6291 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(3) - (4)].rwpattern);
    (yyval.rwpattern)->type = ASTNode::FUNCTION;
    (yyval.rwpattern)->value = (yyvsp[(1) - (4)].str);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.rwpattern)->setLocationInfo(&loc);
  }
    break;

  case 891:

/* Line 1455 of yacc.c  */
#line 6299 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(2) - (3)].rwpattern);
    LOCATION((yylsp[(1) - (3)]), loc);
    (yyval.rwpattern)->setLocationInfo(&loc);
  }
    break;

  case 892:

/* Line 1455 of yacc.c  */
#line 6305 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) RewritePattern(ASTNode::EXPR_SUBSTITUTION, (yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 893:

/* Line 1455 of yacc.c  */
#line 6309 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::DECIMAL, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 894:

/* Line 1455 of yacc.c  */
#line 6313 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::DECIMAL, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 895:

/* Line 1455 of yacc.c  */
#line 6317 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::DOUBLE, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 896:

/* Line 1455 of yacc.c  */
#line 6321 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 897:

/* Line 1455 of yacc.c  */
#line 6328 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yyloc), new (MEMMGR) RewritePattern(ASTNode::SEQUENCE, MEMMGR));
  }
    break;

  case 899:

/* Line 1455 of yacc.c  */
#line 6336 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(ASTNode::SEQUENCE, (yyvsp[(1) - (1)].rwpattern), MEMMGR));
  }
    break;

  case 900:

/* Line 1455 of yacc.c  */
#line 6340 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(1) - (3)].rwpattern);
    (yyval.rwpattern)->children.push_back((yyvsp[(3) - (3)].rwpattern));
  }
    break;

  case 902:

/* Line 1455 of yacc.c  */
#line 6352 "../src/parser/XQParser.y"
    {
    if(!QP->_rewriteRule)
      yyerror((yylsp[(1) - (2)]), "Expression substitutions are only allowed in rewrite rules");
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQExprSubstitution((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;



/* Line 1455 of yacc.c  */
#line 13023 "../src/parser/XQParser.cpp"
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
#line 6389 "../src/parser/XQParser.y"


}  // namespace XQParser


