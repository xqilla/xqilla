
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
     _INTEGER_LITERAL_ = 315,
     _DECIMAL_LITERAL_ = 316,
     _DOUBLE_LITERAL_ = 317,
     _ATTRIBUTE_ = 318,
     _COMMENT_ = 319,
     _DOCUMENT_NODE_ = 320,
     _NAMESPACE_NODE_ = 321,
     _NODE_ = 322,
     _PROCESSING_INSTRUCTION_ = 323,
     _SCHEMA_ATTRIBUTE_ = 324,
     _SCHEMA_ELEMENT_ = 325,
     _TEXT_ = 326,
     _EMPTY_SEQUENCE_ = 327,
     _BOUNDARY_SPACE_ = 328,
     _FT_OPTION_ = 329,
     _BASE_URI_ = 330,
     _LAX_ = 331,
     _STRICT_ = 332,
     _IDIV_ = 333,
     _CHILD_ = 334,
     _DESCENDANT_ = 335,
     _SELF_ = 336,
     _DESCENDANT_OR_SELF_ = 337,
     _FOLLOWING_SIBLING_ = 338,
     _FOLLOWING_ = 339,
     _PARENT_ = 340,
     _ANCESTOR_ = 341,
     _PRECEDING_SIBLING_ = 342,
     _PRECEDING_ = 343,
     _ANCESTOR_OR_SELF_ = 344,
     _DOCUMENT_ = 345,
     _NOT_ = 346,
     _USING_ = 347,
     _NO_ = 348,
     _SENSITIVE_ = 349,
     _INSENSITIVE_ = 350,
     _DIACRITICS_ = 351,
     _WITHOUT_ = 352,
     _WITHOUT_C_ = 353,
     _STEMMING_ = 354,
     _THESAURUS_ = 355,
     _STOP_ = 356,
     _WILDCARDS_ = 357,
     _ENTIRE_ = 358,
     _CONTENT_ = 359,
     _WORD_ = 360,
     _TYPE_ = 361,
     _START_ = 362,
     _END_ = 363,
     _MOST_ = 364,
     _SKIP_ = 365,
     _COPY_ = 366,
     _VALUE_ = 367,
     _WHITESPACE_ = 368,
     _PI_CONTENT_ = 369,
     _XML_COMMENT_CONTENT_ = 370,
     _EQ_ = 371,
     _NE_ = 372,
     _LT_ = 373,
     _LE_ = 374,
     _GT_ = 375,
     _GE_ = 376,
     _AT_ = 377,
     _QUOT_ATTR_CONTENT_ = 378,
     _APOS_ATTR_CONTENT_ = 379,
     _WHITESPACE_ELEMENT_CONTENT_ = 380,
     _ELEMENT_CONTENT_ = 381,
     _AT_LM_ = 382,
     _ORDERED_ = 383,
     _UNORDERED_ = 384,
     _QNAME_ = 385,
     _XMLNS_QNAME_ = 386,
     _CONSTR_QNAME_ = 387,
     _STRING_LITERAL_ = 388,
     _VARIABLE_ = 389,
     _NCNAME_COLON_STAR_ = 390,
     _STAR_COLON_NCNAME_ = 391,
     _PI_TARGET_ = 392,
     _PRAGMA_CONTENT_ = 393,
     _RETURN_ = 394,
     _FOR_ = 395,
     _IN_ = 396,
     _LET_ = 397,
     _WHERE_ = 398,
     _COUNT_ = 399,
     _BY_ = 400,
     _ORDER_ = 401,
     _STABLE_ = 402,
     _ASCENDING_ = 403,
     _DESCENDING_ = 404,
     _EMPTY_ = 405,
     _GREATEST_ = 406,
     _LEAST_ = 407,
     _COLLATION_ = 408,
     _SOME_ = 409,
     _EVERY_ = 410,
     _SATISFIES_ = 411,
     _TYPESWITCH_ = 412,
     _CASE_ = 413,
     _CASE_S_ = 414,
     _AS_ = 415,
     _IF_ = 416,
     _THEN_ = 417,
     _ELSE_ = 418,
     _OR_ = 419,
     _AND_ = 420,
     _INSTANCE_ = 421,
     _OF_ = 422,
     _CASTABLE_ = 423,
     _TO_ = 424,
     _DIV_ = 425,
     _MOD_ = 426,
     _UNION_ = 427,
     _INTERSECT_ = 428,
     _EXCEPT_ = 429,
     _VALIDATE_ = 430,
     _CAST_ = 431,
     _TREAT_ = 432,
     _IS_ = 433,
     _PRESERVE_ = 434,
     _STRIP_ = 435,
     _NAMESPACE_ = 436,
     _ITEM_ = 437,
     _EXTERNAL_ = 438,
     _ENCODING_ = 439,
     _NO_PRESERVE_ = 440,
     _INHERIT_ = 441,
     _NO_INHERIT_ = 442,
     _DECLARE_ = 443,
     _CONSTRUCTION_ = 444,
     _ORDERING_ = 445,
     _DEFAULT_ = 446,
     _COPY_NAMESPACES_ = 447,
     _OPTION_ = 448,
     _XQUERY_ = 449,
     _VERSION_ = 450,
     _IMPORT_ = 451,
     _SCHEMA_ = 452,
     _MODULE_ = 453,
     _ELEMENT_ = 454,
     _FUNCTION_ = 455,
     _FUNCTION_EXT_ = 456,
     _SCORE_ = 457,
     _CONTAINS_ = 458,
     _WEIGHT_ = 459,
     _WINDOW_ = 460,
     _DISTANCE_ = 461,
     _OCCURS_ = 462,
     _TIMES_ = 463,
     _SAME_ = 464,
     _DIFFERENT_ = 465,
     _LOWERCASE_ = 466,
     _UPPERCASE_ = 467,
     _RELATIONSHIP_ = 468,
     _LEVELS_ = 469,
     _LANGUAGE_ = 470,
     _ANY_ = 471,
     _ALL_ = 472,
     _PHRASE_ = 473,
     _EXACTLY_ = 474,
     _FROM_ = 475,
     _WORDS_ = 476,
     _SENTENCES_ = 477,
     _PARAGRAPHS_ = 478,
     _SENTENCE_ = 479,
     _PARAGRAPH_ = 480,
     _REPLACE_ = 481,
     _MODIFY_ = 482,
     _FIRST_ = 483,
     _INSERT_ = 484,
     _BEFORE_ = 485,
     _AFTER_ = 486,
     _REVALIDATION_ = 487,
     _WITH_ = 488,
     _NODES_ = 489,
     _RENAME_ = 490,
     _LAST_ = 491,
     _DELETE_ = 492,
     _INTO_ = 493,
     _UPDATING_ = 494,
     _ID_ = 495,
     _KEY_ = 496,
     _TEMPLATE_ = 497,
     _MATCHES_ = 498,
     _TUPLE_ = 499,
     _MAP_ = 500,
     _NAME_ = 501,
     _CALL_ = 502,
     _APPLY_ = 503,
     _TEMPLATES_ = 504,
     _MODE_ = 505,
     _FTOR_ = 506,
     _FTAND_ = 507,
     _FTNOT_ = 508,
     _TYPE_ALIAS_ = 509,
     _XSLT_END_ELEMENT_ = 510,
     _XSLT_STYLESHEET_ = 511,
     _XSLT_TEMPLATE_ = 512,
     _XSLT_VALUE_OF_ = 513,
     _XSLT_TEXT_ = 514,
     _XSLT_APPLY_TEMPLATES_ = 515,
     _XSLT_CALL_TEMPLATE_ = 516,
     _XSLT_WITH_PARAM_ = 517,
     _XSLT_SEQUENCE_ = 518,
     _XSLT_PARAM_ = 519,
     _XSLT_FUNCTION_ = 520,
     _XSLT_CHOOSE_ = 521,
     _XSLT_WHEN_ = 522,
     _XSLT_OTHERWISE_ = 523,
     _XSLT_IF_ = 524,
     _XSLT_VARIABLE_ = 525,
     _XSLT_COMMENT_ = 526,
     _XSLT_PI_ = 527,
     _XSLT_DOCUMENT_ = 528,
     _XSLT_ATTRIBUTE_ = 529,
     _XSLT_NAMESPACE_ = 530,
     _XSLT_ELEMENT_ = 531,
     _XSLT_ANALYZE_STRING_ = 532,
     _XSLT_MATCHING_SUBSTRING_ = 533,
     _XSLT_NON_MATCHING_SUBSTRING_ = 534,
     _XSLT_COPY_OF_ = 535,
     _XSLT_COPY_ = 536,
     _XSLT_FOR_EACH_ = 537,
     _XSLT_OUTPUT_ = 538,
     _XSLT_IMPORT_SCHEMA_ = 539,
     _XSLT_TYPE_ALIAS_ = 540,
     _XSLT_VERSION_ = 541,
     _XSLT_MODE_ = 542,
     _XSLT_NAME_ = 543,
     _XSLT_DOCTYPE_PUBLIC_ = 544,
     _XSLT_DOCTYPE_SYSTEM_ = 545,
     _XSLT_ENCODING_ = 546,
     _XSLT_MEDIA_TYPE_ = 547,
     _XSLT_NORMALIZATION_FORM_ = 548,
     _XSLT_STANDALONE_ = 549,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 550,
     _XSLT_NAMESPACE_STR_ = 551,
     _XSLT_SCHEMA_LOCATION_ = 552,
     _XSLT_TUNNEL_ = 553,
     _XSLT_REQUIRED_ = 554,
     _XSLT_OVERRIDE_ = 555,
     _XSLT_COPY_NAMESPACES_ = 556,
     _XSLT_INHERIT_NAMESPACES_ = 557,
     _XSLT_BYTE_ORDER_MARK_ = 558,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 559,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 560,
     _XSLT_INDENT_ = 561,
     _XSLT_OMIT_XML_DECLARATION_ = 562,
     _XSLT_UNDECLARE_PREFIXES_ = 563,
     _XSLT_MATCH_ = 564,
     _XSLT_AS_ = 565,
     _XSLT_SELECT_ = 566,
     _XSLT_PRIORITY_ = 567,
     _XSLT_TEST_ = 568,
     _XSLT_SEPARATOR_ = 569,
     _XSLT_NAMESPACE_A_ = 570,
     _XSLT_REGEX_ = 571,
     _XSLT_FLAGS_ = 572,
     _XSLT_METHOD_ = 573,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 574,
     _XSLT_USE_CHARACTER_MAPS_ = 575,
     _XSLT_ELEMENT_NAME_ = 576,
     _XSLT_XMLNS_ATTR_ = 577,
     _XSLT_ATTR_NAME_ = 578,
     _XSLT_TEXT_NODE_ = 579,
     _XSLT_WS_TEXT_NODE_ = 580,
     _HASH_DEFAULT_ = 581,
     _HASH_ALL_ = 582,
     _HASH_CURRENT_ = 583,
     _XML_ = 584,
     _HTML_ = 585,
     _XHTML_ = 586
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
#define _INTEGER_LITERAL_ 315
#define _DECIMAL_LITERAL_ 316
#define _DOUBLE_LITERAL_ 317
#define _ATTRIBUTE_ 318
#define _COMMENT_ 319
#define _DOCUMENT_NODE_ 320
#define _NAMESPACE_NODE_ 321
#define _NODE_ 322
#define _PROCESSING_INSTRUCTION_ 323
#define _SCHEMA_ATTRIBUTE_ 324
#define _SCHEMA_ELEMENT_ 325
#define _TEXT_ 326
#define _EMPTY_SEQUENCE_ 327
#define _BOUNDARY_SPACE_ 328
#define _FT_OPTION_ 329
#define _BASE_URI_ 330
#define _LAX_ 331
#define _STRICT_ 332
#define _IDIV_ 333
#define _CHILD_ 334
#define _DESCENDANT_ 335
#define _SELF_ 336
#define _DESCENDANT_OR_SELF_ 337
#define _FOLLOWING_SIBLING_ 338
#define _FOLLOWING_ 339
#define _PARENT_ 340
#define _ANCESTOR_ 341
#define _PRECEDING_SIBLING_ 342
#define _PRECEDING_ 343
#define _ANCESTOR_OR_SELF_ 344
#define _DOCUMENT_ 345
#define _NOT_ 346
#define _USING_ 347
#define _NO_ 348
#define _SENSITIVE_ 349
#define _INSENSITIVE_ 350
#define _DIACRITICS_ 351
#define _WITHOUT_ 352
#define _WITHOUT_C_ 353
#define _STEMMING_ 354
#define _THESAURUS_ 355
#define _STOP_ 356
#define _WILDCARDS_ 357
#define _ENTIRE_ 358
#define _CONTENT_ 359
#define _WORD_ 360
#define _TYPE_ 361
#define _START_ 362
#define _END_ 363
#define _MOST_ 364
#define _SKIP_ 365
#define _COPY_ 366
#define _VALUE_ 367
#define _WHITESPACE_ 368
#define _PI_CONTENT_ 369
#define _XML_COMMENT_CONTENT_ 370
#define _EQ_ 371
#define _NE_ 372
#define _LT_ 373
#define _LE_ 374
#define _GT_ 375
#define _GE_ 376
#define _AT_ 377
#define _QUOT_ATTR_CONTENT_ 378
#define _APOS_ATTR_CONTENT_ 379
#define _WHITESPACE_ELEMENT_CONTENT_ 380
#define _ELEMENT_CONTENT_ 381
#define _AT_LM_ 382
#define _ORDERED_ 383
#define _UNORDERED_ 384
#define _QNAME_ 385
#define _XMLNS_QNAME_ 386
#define _CONSTR_QNAME_ 387
#define _STRING_LITERAL_ 388
#define _VARIABLE_ 389
#define _NCNAME_COLON_STAR_ 390
#define _STAR_COLON_NCNAME_ 391
#define _PI_TARGET_ 392
#define _PRAGMA_CONTENT_ 393
#define _RETURN_ 394
#define _FOR_ 395
#define _IN_ 396
#define _LET_ 397
#define _WHERE_ 398
#define _COUNT_ 399
#define _BY_ 400
#define _ORDER_ 401
#define _STABLE_ 402
#define _ASCENDING_ 403
#define _DESCENDING_ 404
#define _EMPTY_ 405
#define _GREATEST_ 406
#define _LEAST_ 407
#define _COLLATION_ 408
#define _SOME_ 409
#define _EVERY_ 410
#define _SATISFIES_ 411
#define _TYPESWITCH_ 412
#define _CASE_ 413
#define _CASE_S_ 414
#define _AS_ 415
#define _IF_ 416
#define _THEN_ 417
#define _ELSE_ 418
#define _OR_ 419
#define _AND_ 420
#define _INSTANCE_ 421
#define _OF_ 422
#define _CASTABLE_ 423
#define _TO_ 424
#define _DIV_ 425
#define _MOD_ 426
#define _UNION_ 427
#define _INTERSECT_ 428
#define _EXCEPT_ 429
#define _VALIDATE_ 430
#define _CAST_ 431
#define _TREAT_ 432
#define _IS_ 433
#define _PRESERVE_ 434
#define _STRIP_ 435
#define _NAMESPACE_ 436
#define _ITEM_ 437
#define _EXTERNAL_ 438
#define _ENCODING_ 439
#define _NO_PRESERVE_ 440
#define _INHERIT_ 441
#define _NO_INHERIT_ 442
#define _DECLARE_ 443
#define _CONSTRUCTION_ 444
#define _ORDERING_ 445
#define _DEFAULT_ 446
#define _COPY_NAMESPACES_ 447
#define _OPTION_ 448
#define _XQUERY_ 449
#define _VERSION_ 450
#define _IMPORT_ 451
#define _SCHEMA_ 452
#define _MODULE_ 453
#define _ELEMENT_ 454
#define _FUNCTION_ 455
#define _FUNCTION_EXT_ 456
#define _SCORE_ 457
#define _CONTAINS_ 458
#define _WEIGHT_ 459
#define _WINDOW_ 460
#define _DISTANCE_ 461
#define _OCCURS_ 462
#define _TIMES_ 463
#define _SAME_ 464
#define _DIFFERENT_ 465
#define _LOWERCASE_ 466
#define _UPPERCASE_ 467
#define _RELATIONSHIP_ 468
#define _LEVELS_ 469
#define _LANGUAGE_ 470
#define _ANY_ 471
#define _ALL_ 472
#define _PHRASE_ 473
#define _EXACTLY_ 474
#define _FROM_ 475
#define _WORDS_ 476
#define _SENTENCES_ 477
#define _PARAGRAPHS_ 478
#define _SENTENCE_ 479
#define _PARAGRAPH_ 480
#define _REPLACE_ 481
#define _MODIFY_ 482
#define _FIRST_ 483
#define _INSERT_ 484
#define _BEFORE_ 485
#define _AFTER_ 486
#define _REVALIDATION_ 487
#define _WITH_ 488
#define _NODES_ 489
#define _RENAME_ 490
#define _LAST_ 491
#define _DELETE_ 492
#define _INTO_ 493
#define _UPDATING_ 494
#define _ID_ 495
#define _KEY_ 496
#define _TEMPLATE_ 497
#define _MATCHES_ 498
#define _TUPLE_ 499
#define _MAP_ 500
#define _NAME_ 501
#define _CALL_ 502
#define _APPLY_ 503
#define _TEMPLATES_ 504
#define _MODE_ 505
#define _FTOR_ 506
#define _FTAND_ 507
#define _FTNOT_ 508
#define _TYPE_ALIAS_ 509
#define _XSLT_END_ELEMENT_ 510
#define _XSLT_STYLESHEET_ 511
#define _XSLT_TEMPLATE_ 512
#define _XSLT_VALUE_OF_ 513
#define _XSLT_TEXT_ 514
#define _XSLT_APPLY_TEMPLATES_ 515
#define _XSLT_CALL_TEMPLATE_ 516
#define _XSLT_WITH_PARAM_ 517
#define _XSLT_SEQUENCE_ 518
#define _XSLT_PARAM_ 519
#define _XSLT_FUNCTION_ 520
#define _XSLT_CHOOSE_ 521
#define _XSLT_WHEN_ 522
#define _XSLT_OTHERWISE_ 523
#define _XSLT_IF_ 524
#define _XSLT_VARIABLE_ 525
#define _XSLT_COMMENT_ 526
#define _XSLT_PI_ 527
#define _XSLT_DOCUMENT_ 528
#define _XSLT_ATTRIBUTE_ 529
#define _XSLT_NAMESPACE_ 530
#define _XSLT_ELEMENT_ 531
#define _XSLT_ANALYZE_STRING_ 532
#define _XSLT_MATCHING_SUBSTRING_ 533
#define _XSLT_NON_MATCHING_SUBSTRING_ 534
#define _XSLT_COPY_OF_ 535
#define _XSLT_COPY_ 536
#define _XSLT_FOR_EACH_ 537
#define _XSLT_OUTPUT_ 538
#define _XSLT_IMPORT_SCHEMA_ 539
#define _XSLT_TYPE_ALIAS_ 540
#define _XSLT_VERSION_ 541
#define _XSLT_MODE_ 542
#define _XSLT_NAME_ 543
#define _XSLT_DOCTYPE_PUBLIC_ 544
#define _XSLT_DOCTYPE_SYSTEM_ 545
#define _XSLT_ENCODING_ 546
#define _XSLT_MEDIA_TYPE_ 547
#define _XSLT_NORMALIZATION_FORM_ 548
#define _XSLT_STANDALONE_ 549
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 550
#define _XSLT_NAMESPACE_STR_ 551
#define _XSLT_SCHEMA_LOCATION_ 552
#define _XSLT_TUNNEL_ 553
#define _XSLT_REQUIRED_ 554
#define _XSLT_OVERRIDE_ 555
#define _XSLT_COPY_NAMESPACES_ 556
#define _XSLT_INHERIT_NAMESPACES_ 557
#define _XSLT_BYTE_ORDER_MARK_ 558
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 559
#define _XSLT_INCLUDE_CONTENT_TYPE_ 560
#define _XSLT_INDENT_ 561
#define _XSLT_OMIT_XML_DECLARATION_ 562
#define _XSLT_UNDECLARE_PREFIXES_ 563
#define _XSLT_MATCH_ 564
#define _XSLT_AS_ 565
#define _XSLT_SELECT_ 566
#define _XSLT_PRIORITY_ 567
#define _XSLT_TEST_ 568
#define _XSLT_SEPARATOR_ 569
#define _XSLT_NAMESPACE_A_ 570
#define _XSLT_REGEX_ 571
#define _XSLT_FLAGS_ 572
#define _XSLT_METHOD_ 573
#define _XSLT_CDATA_SECTION_ELEMENTS_ 574
#define _XSLT_USE_CHARACTER_MAPS_ 575
#define _XSLT_ELEMENT_NAME_ 576
#define _XSLT_XMLNS_ATTR_ 577
#define _XSLT_ATTR_NAME_ 578
#define _XSLT_TEXT_NODE_ 579
#define _XSLT_WS_TEXT_NODE_ 580
#define _HASH_DEFAULT_ 581
#define _HASH_ALL_ 582
#define _HASH_CURRENT_ 583
#define _XML_ 584
#define _HTML_ 585
#define _XHTML_ 586




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
#line 1143 "../src/parser/XQParser.cpp"

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
#define YYLAST   9067

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  332
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  382
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1073
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1786

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   586

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
     325,   326,   327,   328,   329,   330,   331
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
    1550,  1554,  1558,  1560,  1562,  1564,  1566,  1568,  1570,  1575,
    1577,  1582,  1585,  1587,  1590,  1593,  1596,  1599,  1602,  1605,
    1608,  1611,  1614,  1616,  1619,  1621,  1624,  1627,  1630,  1633,
    1636,  1638,  1640,  1642,  1644,  1646,  1648,  1650,  1652,  1654,
    1659,  1661,  1663,  1665,  1667,  1669,  1671,  1673,  1675,  1677,
    1679,  1681,  1683,  1685,  1687,  1689,  1692,  1694,  1698,  1701,
    1703,  1708,  1713,  1717,  1722,  1726,  1728,  1730,  1732,  1734,
    1736,  1738,  1740,  1742,  1748,  1759,  1761,  1763,  1764,  1772,
    1780,  1781,  1783,  1787,  1791,  1795,  1799,  1800,  1803,  1806,
    1807,  1810,  1813,  1814,  1817,  1820,  1821,  1824,  1827,  1828,
    1831,  1834,  1837,  1840,  1844,  1845,  1847,  1851,  1853,  1856,
    1858,  1860,  1862,  1864,  1866,  1868,  1870,  1875,  1879,  1881,
    1885,  1888,  1892,  1896,  1898,  1902,  1906,  1911,  1916,  1920,
    1922,  1926,  1929,  1933,  1936,  1937,  1939,  1940,  1943,  1946,
    1950,  1951,  1953,  1955,  1957,  1961,  1963,  1965,  1967,  1969,
    1971,  1973,  1975,  1977,  1979,  1981,  1983,  1985,  1987,  1989,
    1991,  1995,  1999,  2004,  2009,  2013,  2017,  2021,  2025,  2030,
    2035,  2039,  2044,  2051,  2053,  2055,  2060,  2062,  2066,  2071,
    2078,  2086,  2088,  2090,  2095,  2097,  2099,  2101,  2103,  2105,
    2109,  2110,  2113,  2114,  2117,  2121,  2123,  2127,  2129,  2134,
    2136,  2139,  2141,  2143,  2146,  2149,  2153,  2155,  2158,  2163,
    2167,  2172,  2173,  2175,  2178,  2180,  2183,  2185,  2186,  2190,
    2193,  2197,  2201,  2206,  2208,  2212,  2216,  2219,  2222,  2225,
    2228,  2231,  2233,  2235,  2237,  2239,  2241,  2244,  2248,  2250,
    2252,  2254,  2256,  2258,  2260,  2262,  2264,  2267,  2270,  2272,
    2274,  2277,  2280,  2282,  2285,  2288,  2291,  2297,  2303,  2306,
    2307,  2311,  2314,  2319,  2324,  2331,  2336,  2340,  2345,  2346,
    2349,  2352,  2356,  2358,  2362,  2365,  2368,  2371,  2373,  2376,
    2380,  2384,  2388,  2392,  2396,  2403,  2410,  2415,  2420,  2425,
    2428,  2431,  2434,  2437,  2440,  2448,  2454,  2460,  2467,  2471,
    2473,  2478,  2480,  2482,  2484,  2486,  2488,  2490,  2496,  2504,
    2513,  2524,  2531,  2540,  2541,  2544,  2547,  2551,  2552,  2555,
    2557,  2561,  2563,  2565,  2567,  2571,  2579,  2583,  2591,  2597,
    2607,  2609,  2611,  2613,  2615,  2619,  2625,  2627,  2629,  2633,
    2638,  2642,  2647,  2649,  2651,  2657,  2658,  2661,  2668,  2676,
    2678,  2682,  2686,  2688,  2690,  2695,  2699,  2701,  2705,  2708,
    2715,  2719,  2721,  2723,  2728,  2732,  2734,  2738,  2743,  2748,
    2752,  2754,  2758,  2762,  2764,  2768,  2774,  2776,  2778,  2784,
    2787,  2788,  2791,  2795,  2804,  2806,  2810,  2812,  2816,  2818,
    2822,  2826,  2830,  2834,  2838,  2842,  2844,  2848,  2852,  2854,
    2858,  2862,  2866,  2870,  2872,  2875,  2878,  2880,  2885,  2887,
    2892,  2896,  2899,  2901,  2903,  2905,  2907,  2908,  2910,  2912,
    2916,  2918,  2921,  2923,  2925,  2927,  2929,  2931,  2933,  2935,
    2937,  2939,  2941,  2943,  2945,  2947,  2949,  2951,  2953,  2955,
    2957,  2959,  2961,  2963,  2965,  2967,  2969,  2971,  2973,  2975,
    2977,  2979,  2981,  2983,  2985,  2987,  2989,  2991,  2993,  2995,
    2997,  2999,  3001,  3003,  3005,  3007,  3009,  3011,  3013,  3015,
    3017,  3019,  3021,  3023,  3025,  3027,  3029,  3031,  3033,  3035,
    3037,  3039,  3041,  3043,  3045,  3047,  3049,  3051,  3053,  3055,
    3057,  3059,  3061,  3063,  3065,  3067,  3069,  3071,  3073,  3075,
    3077,  3079,  3081,  3083,  3085,  3087,  3089,  3091,  3093,  3095,
    3097,  3099,  3101,  3103,  3105,  3107,  3109,  3111,  3113,  3115,
    3117,  3119,  3121,  3123,  3125,  3127,  3129,  3131,  3133,  3135,
    3137,  3139,  3141,  3143,  3145,  3147,  3149,  3151,  3153,  3155,
    3157,  3159,  3161,  3163,  3165,  3167,  3169,  3171,  3173,  3175,
    3177,  3179,  3181,  3183,  3185,  3187,  3189,  3191,  3193,  3195,
    3197,  3199,  3201,  3203,  3205,  3207,  3209,  3211,  3213,  3215,
    3217,  3219,  3221,  3223,  3225,  3227,  3229,  3231,  3233,  3235,
    3237,  3239,  3241,  3243,  3245,  3247,  3249,  3251,  3253,  3255,
    3257,  3259,  3261,  3263
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     333,     0,    -1,     3,   472,    -1,     4,   334,   430,    -1,
       6,   334,   335,    -1,     5,   344,    -1,     7,   334,   338,
      -1,     8,   337,    -1,     9,   695,    -1,    10,   696,    -1,
      11,   589,    -1,    -1,   188,   458,   200,   713,   464,   465,
     471,   336,    -1,    -1,   440,    -1,   458,   464,   465,    -1,
     431,   339,   340,    -1,   198,   181,   660,    40,   611,   440,
      -1,    -1,   340,   341,    -1,   340,   342,    -1,   340,   343,
      -1,   188,   458,   200,   713,   464,   465,   471,   440,    -1,
     188,   193,   712,   133,   440,    -1,   188,   181,   660,    40,
     611,   440,    -1,   345,    -1,   256,   346,   347,   255,    -1,
     369,    -1,    -1,   346,   286,    -1,   346,   295,    -1,    -1,
     347,   348,    -1,   347,   352,    -1,   347,   357,    -1,   347,
     359,    -1,   347,   361,    -1,   347,   367,    -1,   347,   365,
      -1,   349,   354,   372,   255,    -1,   257,    -1,   349,   309,
     420,    -1,   349,   288,    -1,   349,   312,   351,    -1,   349,
     287,   350,    -1,   349,   310,   589,    -1,    -1,   350,   130,
      -1,   350,   326,    -1,   350,   327,    -1,    60,    -1,    61,
      -1,    62,    -1,   353,   354,   372,   255,    -1,   265,    -1,
     353,   288,    -1,   353,   310,   589,    -1,   353,   300,    -1,
      -1,   354,   355,    -1,   356,   372,   255,    -1,   264,    -1,
     356,   288,    -1,   356,   311,   473,    -1,   356,   310,   589,
      -1,   356,   299,    -1,   356,   298,    -1,   358,   372,   255,
      -1,   264,    -1,   358,   288,    -1,   358,   311,   473,    -1,
     358,   310,   589,    -1,   358,   299,    -1,   358,   298,    -1,
     360,   372,   255,    -1,   270,    -1,   360,   288,    -1,   360,
     311,   473,    -1,   360,   310,   589,    -1,   362,   255,    -1,
     283,    -1,   362,   288,    -1,   362,   318,   363,    -1,   362,
     303,    -1,   362,   319,   364,    -1,   362,   289,    -1,   362,
     290,    -1,   362,   291,    -1,   362,   304,    -1,   362,   305,
      -1,   362,   306,    -1,   362,   292,    -1,   362,   293,    -1,
     362,   307,    -1,   362,   294,    -1,   362,   308,    -1,   362,
     320,   364,    -1,   362,   286,    -1,   329,    -1,   330,    -1,
     331,    -1,    71,    -1,   130,    -1,   130,    -1,   364,   130,
      -1,   366,   255,    -1,   285,    -1,   366,   288,    -1,   366,
     310,   591,    -1,   368,   255,    -1,   284,    -1,   284,   296,
      -1,   284,   297,    -1,   284,   296,   297,    -1,   284,   297,
     296,    -1,   321,   370,   372,   255,    -1,    -1,   370,   323,
     371,    -1,   370,   322,    -1,    -1,   371,   471,    -1,   371,
     123,    -1,    -1,   372,   377,    -1,   372,   369,    -1,   372,
     373,    -1,   374,    -1,   376,    -1,   378,    -1,   382,    -1,
     387,    -1,   391,    -1,   389,    -1,   400,    -1,   402,    -1,
     404,    -1,   406,    -1,   408,    -1,   410,    -1,   412,    -1,
     396,    -1,   414,    -1,   416,    -1,   418,    -1,   375,   372,
     255,    -1,   258,    -1,   375,   311,   473,    -1,   375,   314,
     371,    -1,   259,   377,   255,    -1,   324,    -1,   325,    -1,
     379,   381,   255,    -1,   260,    -1,   379,   311,   473,    -1,
     379,   287,   380,    -1,   130,    -1,   326,    -1,   328,    -1,
      -1,   381,   385,    -1,   383,   384,   255,    -1,   261,    -1,
     383,   288,    -1,    -1,   384,   385,    -1,   386,   372,   255,
      -1,   262,    -1,   386,   288,    -1,   386,   311,   473,    -1,
     386,   310,   589,    -1,   386,   298,    -1,   388,   255,    -1,
     263,   311,   473,    -1,   390,   372,   255,    -1,   269,   313,
     473,    -1,   266,   392,   395,   255,    -1,   393,    -1,   392,
     393,    -1,   394,   372,   255,    -1,   267,   313,   473,    -1,
      -1,   268,   372,   255,    -1,   397,   398,   399,   255,    -1,
     277,    -1,   397,   311,   473,    -1,   397,   316,   371,    -1,
     397,   317,   371,    -1,    -1,   278,   372,   255,    -1,    -1,
     279,   372,   255,    -1,   401,   372,   255,   372,    -1,   270,
      -1,   401,   288,    -1,   401,   311,   473,    -1,   401,   310,
     589,    -1,   403,   372,   255,    -1,   271,    -1,   403,   311,
     473,    -1,   405,   372,   255,    -1,   272,    -1,   405,   288,
     371,    -1,   405,   311,   473,    -1,   407,   372,   255,    -1,
     273,    -1,   409,   372,   255,    -1,   274,    -1,   409,   288,
     371,    -1,   409,   315,   371,    -1,   409,   311,   473,    -1,
     409,   314,   371,    -1,   411,   372,   255,    -1,   275,    -1,
     411,   288,   371,    -1,   411,   311,   473,    -1,   413,   372,
     255,    -1,   276,    -1,   413,   288,   371,    -1,   413,   315,
     371,    -1,   415,   255,    -1,   280,    -1,   415,   311,   473,
      -1,   415,   301,    -1,   417,   372,   255,    -1,   281,    -1,
     417,   301,    -1,   417,   302,    -1,   419,   372,   255,    -1,
     282,    -1,   419,   311,   473,    -1,   420,    15,   421,    -1,
     421,    -1,   426,    -1,    39,    -1,   423,    -1,    39,    -1,
      33,    -1,   240,    43,   424,    44,    -1,   241,    43,   659,
      36,   425,    44,    -1,   659,    -1,   547,    -1,   545,    -1,
     547,    -1,   427,    -1,   422,   427,    -1,   423,    39,   427,
      -1,   423,    33,   427,    -1,   426,    39,   427,    -1,   426,
      33,   427,    -1,   428,   429,    -1,   540,    -1,    79,    22,
     540,    -1,    63,    22,   540,    -1,    23,   540,    -1,    -1,
     429,    24,   473,    25,    -1,   431,   434,    -1,   431,   435,
      -1,    -1,   194,   432,   440,    -1,   194,   432,   433,   440,
      -1,   194,   433,   440,    -1,   195,   133,    -1,   184,   133,
      -1,   437,   472,    -1,   436,   437,    -1,   198,   181,   660,
      40,   611,   440,    -1,    -1,   437,   438,   440,    -1,   437,
     439,   440,    -1,   437,   441,   440,    -1,   437,   443,   440,
      -1,   437,   461,   440,    -1,   437,   463,   440,    -1,   437,
     662,   440,    -1,   437,   444,   440,    -1,   437,   445,   440,
      -1,   437,   694,   440,    -1,   442,    -1,   451,    -1,   452,
      -1,   457,    -1,   446,    -1,   447,    -1,   646,    -1,   448,
      -1,   453,    -1,   456,    -1,    53,    -1,   188,   181,   660,
      40,   611,    -1,   188,    73,   179,    -1,   188,    73,   180,
      -1,   188,   191,   199,   181,   611,    -1,   188,   191,   200,
     181,   611,    -1,   188,   193,   712,   133,    -1,   188,    74,
     629,    -1,   188,   190,   128,    -1,   188,   190,   129,    -1,
     188,   191,   146,   150,   151,    -1,   188,   191,   146,   150,
     152,    -1,   188,   192,   449,    36,   450,    -1,   179,    -1,
     185,    -1,   186,    -1,   187,    -1,   188,   191,   153,   611,
      -1,   188,    75,   611,    -1,   196,   197,   455,   611,   454,
      -1,   196,   197,   611,   454,    -1,    -1,   122,   611,    -1,
     454,    36,   611,    -1,   181,   660,    40,    -1,   191,   199,
     181,    -1,   196,   198,   181,   660,    40,   611,   454,    -1,
     196,   198,   611,   454,    -1,   188,   189,   179,    -1,   188,
     189,   180,    -1,    -1,   458,   459,    -1,   460,    -1,   467,
      -1,   239,    -1,   188,   458,   134,    12,   548,   588,   462,
      -1,    13,   474,    -1,   183,    -1,   188,   458,   200,   713,
     464,   465,   466,    -1,    43,    44,    -1,    43,   469,    44,
      -1,    -1,   160,   589,    -1,   471,    -1,   183,    -1,    55,
     712,    -1,    55,   712,    43,   468,    44,    -1,   545,    -1,
     468,    36,   545,    -1,   469,    36,   470,    -1,   470,    -1,
      12,   548,   588,    -1,    51,   473,    52,    -1,   473,    -1,
     473,    36,   474,    -1,   474,    -1,   475,    -1,   495,    -1,
     498,    -1,   504,    -1,   647,    -1,   649,    -1,   652,    -1,
     651,    -1,   653,    -1,   505,    -1,   668,    -1,   669,    -1,
     476,   139,   474,    -1,   477,    -1,   476,   489,    -1,   476,
     478,    -1,   479,    -1,   484,    -1,   477,    -1,   487,    -1,
     488,    -1,   140,   480,    -1,   480,    36,   481,    -1,   481,
      -1,    12,   548,   588,   482,   483,   141,   474,    -1,    -1,
     122,    12,   548,    -1,    -1,   202,    12,   548,    -1,   142,
     485,    -1,   485,    36,   486,    -1,   486,    -1,    12,   548,
     588,    13,   474,    -1,   202,    12,   548,    13,   474,    -1,
     143,   474,    -1,   144,    12,   548,    -1,   146,   145,   490,
      -1,   147,   146,   145,   490,    -1,   490,    36,   491,    -1,
     491,    -1,   492,   493,   494,    -1,   492,   493,   494,   153,
     611,    -1,   474,    -1,    -1,   148,    -1,   149,    -1,    -1,
     150,   151,    -1,   150,   152,    -1,   154,   496,   156,   474,
      -1,   155,   496,   156,   474,    -1,   496,    36,   497,    -1,
     497,    -1,    12,   548,   588,   141,   474,    -1,   157,    43,
     473,    44,   499,   500,    -1,   499,   501,    -1,   501,    -1,
     191,    12,   548,   139,   474,    -1,   191,   139,   474,    -1,
     502,   139,   474,    -1,   158,   503,   589,    -1,   502,    15,
     589,    -1,    -1,    12,   548,   160,    -1,   161,    43,   473,
      44,   162,   474,   163,   474,    -1,   505,   164,   506,    -1,
     506,    -1,   506,   165,   507,    -1,   507,    -1,   509,    40,
     509,    -1,   509,    16,   509,    -1,    -1,   509,    27,   508,
     509,    -1,   509,    17,   509,    -1,   509,    18,   509,    -1,
     509,    19,   509,    -1,   509,   116,   509,    -1,   509,   117,
     509,    -1,   509,   118,   509,    -1,   509,   119,   509,    -1,
     509,   120,   509,    -1,   509,   121,   509,    -1,   509,   178,
     509,    -1,   509,    20,   509,    -1,   509,    21,   509,    -1,
     509,    -1,   510,   203,    71,   612,    -1,   510,   203,    71,
     612,   645,    -1,   510,    -1,   510,    59,   511,    -1,   511,
      -1,   512,   169,   512,    -1,   512,    -1,   512,    37,   513,
      -1,   512,    38,   513,    -1,   513,    -1,   513,    14,   514,
      -1,   513,   170,   514,    -1,   513,    78,   514,    -1,   513,
     171,   514,    -1,   514,    -1,   514,    15,   515,    -1,   514,
     172,   515,    -1,   515,    -1,   515,   173,   516,    -1,   515,
     174,   516,    -1,   516,    -1,   517,   166,   167,   589,    -1,
     517,    -1,   518,   177,   160,   589,    -1,   518,    -1,   519,
     168,   160,   586,    -1,   519,    -1,   520,   176,   160,   586,
      -1,   520,    -1,    38,   520,    -1,    37,   520,    -1,   521,
      -1,   522,    -1,   527,    -1,   523,    -1,   175,    51,   473,
      52,    -1,   175,    76,    51,   473,    52,    -1,   175,    77,
      51,   473,    52,    -1,   524,    51,    52,    -1,   524,    51,
     473,    52,    -1,   525,    -1,   524,   525,    -1,    35,   561,
     712,   526,    -1,   138,    -1,   113,   138,    -1,   528,    -1,
     528,   529,    -1,    33,   529,    -1,   529,    -1,    39,    -1,
     529,    39,   530,    -1,   529,    33,   530,    -1,   530,    -1,
     531,    -1,   543,    -1,   532,    -1,   533,    -1,   534,    -1,
     532,    24,   473,    25,    -1,   537,    -1,   533,    24,   473,
      25,    -1,   535,   540,    -1,   536,    -1,    79,    22,    -1,
      80,    22,    -1,    63,    22,    -1,    81,    22,    -1,    82,
      22,    -1,    83,    22,    -1,    84,    22,    -1,   181,    22,
      -1,    23,   540,    -1,   540,    -1,   538,   540,    -1,   539,
      -1,    85,    22,    -1,    86,    22,    -1,    87,    22,    -1,
      88,    22,    -1,    89,    22,    -1,    42,    -1,   593,    -1,
     541,    -1,   661,    -1,   542,    -1,    14,    -1,   135,    -1,
     136,    -1,   544,    -1,   543,    24,   473,    25,    -1,   676,
      -1,   545,    -1,   547,    -1,   549,    -1,   550,    -1,   553,
      -1,   556,    -1,   551,    -1,   552,    -1,   673,    -1,   546,
      -1,   659,    -1,   656,    -1,   657,    -1,   658,    -1,    12,
     548,    -1,   712,    -1,    43,   473,    44,    -1,    43,    44,
      -1,    41,    -1,   128,    51,   473,    52,    -1,   129,    51,
     473,    52,    -1,   713,    43,    44,    -1,   713,    43,   554,
      44,    -1,   554,    36,   555,    -1,   555,    -1,   474,    -1,
      26,    -1,   557,    -1,   573,    -1,   558,    -1,   569,    -1,
     571,    -1,    27,   559,   560,   561,    45,    -1,    27,   559,
     560,   561,    28,   568,    34,   559,   561,    29,    -1,   130,
      -1,   131,    -1,    -1,   560,   113,   130,   561,    46,   561,
     562,    -1,   560,   113,   131,   561,    46,   561,   563,    -1,
      -1,   113,    -1,    47,   564,    48,    -1,    49,   566,    50,
      -1,    47,   565,    48,    -1,    49,   567,    50,    -1,    -1,
     564,   471,    -1,   564,   123,    -1,    -1,   565,   471,    -1,
     565,   123,    -1,    -1,   566,   471,    -1,   566,   124,    -1,
      -1,   567,   471,    -1,   567,   124,    -1,    -1,   568,   557,
      -1,   568,   471,    -1,   568,   126,    -1,   568,   125,    -1,
      31,   570,    32,    -1,    -1,   115,    -1,    30,   137,   572,
      -1,   114,    -1,   113,   114,    -1,   574,    -1,   575,    -1,
     578,    -1,   580,    -1,   581,    -1,   582,    -1,   583,    -1,
      90,    51,   473,    52,    -1,   199,   576,   577,    -1,   132,
      -1,    51,   473,    52,    -1,    51,    52,    -1,    51,   473,
      52,    -1,    63,   579,   577,    -1,   132,    -1,    51,   473,
      52,    -1,   181,   584,   577,    -1,    71,    51,   473,    52,
      -1,    64,    51,   473,    52,    -1,    68,   584,   585,    -1,
     132,    -1,    51,   473,    52,    -1,    51,    52,    -1,    51,
     473,    52,    -1,   592,   587,    -1,    -1,    26,    -1,    -1,
     160,   589,    -1,   591,   590,    -1,    72,    43,    44,    -1,
      -1,    14,    -1,    37,    -1,    26,    -1,   182,    43,    44,
      -1,   592,    -1,   593,    -1,   677,    -1,   682,    -1,   661,
      -1,   595,    -1,   604,    -1,   600,    -1,   606,    -1,   602,
      -1,   599,    -1,   597,    -1,   596,    -1,   598,    -1,   594,
      -1,    67,    43,    44,    -1,    65,    43,    44,    -1,    65,
      43,   604,    44,    -1,    65,    43,   606,    44,    -1,    71,
      43,    44,    -1,    64,    43,    44,    -1,    66,    43,    44,
      -1,    68,    43,    44,    -1,    68,    43,   660,    44,    -1,
      68,    43,   133,    44,    -1,    63,    43,    44,    -1,    63,
      43,   601,    44,    -1,    63,    43,   601,    36,   610,    44,
      -1,   608,    -1,    14,    -1,    69,    43,   603,    44,    -1,
     608,    -1,   199,    43,    44,    -1,   199,    43,   605,    44,
      -1,   199,    43,   605,    36,   610,    44,    -1,   199,    43,
     605,    36,   610,    26,    44,    -1,   609,    -1,    14,    -1,
      70,    43,   607,    44,    -1,   609,    -1,   661,    -1,   661,
      -1,   661,    -1,   133,    -1,   615,   614,   613,    -1,    -1,
     204,   511,    -1,    -1,   614,   626,    -1,   615,   251,   616,
      -1,   616,    -1,   616,   252,   617,    -1,   617,    -1,   617,
      91,   141,   618,    -1,   618,    -1,   253,   619,    -1,   619,
      -1,   620,    -1,   620,   629,    -1,   621,   624,    -1,    43,
     612,    44,    -1,   622,    -1,   545,   623,    -1,    51,   473,
      52,   623,    -1,   524,    51,    52,    -1,   524,    51,   612,
      52,    -1,    -1,   216,    -1,   216,   105,    -1,   217,    -1,
     217,   221,    -1,   218,    -1,    -1,   207,   625,   208,    -1,
     219,   512,    -1,   127,   152,   512,    -1,   127,   109,   512,
      -1,   220,   512,   169,   512,    -1,   128,    -1,   205,   512,
     627,    -1,   206,   625,   627,    -1,   209,   628,    -1,   210,
     628,    -1,   122,   107,    -1,   122,   108,    -1,   103,   104,
      -1,   221,    -1,   222,    -1,   223,    -1,   224,    -1,   225,
      -1,    92,   630,    -1,   629,    92,   630,    -1,   642,    -1,
     643,    -1,   634,    -1,   633,    -1,   631,    -1,   632,    -1,
     637,    -1,   644,    -1,   159,    95,    -1,   159,    94,    -1,
     211,    -1,   212,    -1,    96,    95,    -1,    96,    94,    -1,
      99,    -1,    93,    99,    -1,   100,   636,    -1,   100,   191,
      -1,   100,    43,   636,   635,    44,    -1,   100,    43,   191,
     635,    44,    -1,    93,   100,    -1,    -1,   635,    36,   636,
      -1,   122,   611,    -1,   122,   611,   213,   659,    -1,   122,
     611,   625,   214,    -1,   122,   611,   213,   659,   625,   214,
      -1,   101,   221,   639,   638,    -1,    93,   101,   221,    -1,
     101,   221,   191,   638,    -1,    -1,   638,   641,    -1,   122,
     611,    -1,    43,   640,    44,    -1,   659,    -1,   640,    36,
     659,    -1,   172,   639,    -1,   174,   639,    -1,   215,   659,
      -1,   102,    -1,    93,   102,    -1,   193,   712,   133,    -1,
      98,   104,   514,    -1,   188,   232,    77,    -1,   188,   232,
      76,    -1,   188,   232,   110,    -1,   648,   474,   160,   228,
     238,   474,    -1,   648,   474,   160,   236,   238,   474,    -1,
     648,   474,   238,   474,    -1,   648,   474,   231,   474,    -1,
     648,   474,   230,   474,    -1,   229,    67,    -1,   229,   234,
      -1,   650,   474,    -1,   237,    67,    -1,   237,   234,    -1,
     226,   112,   167,    67,   474,   233,   474,    -1,   226,    67,
     474,   233,   474,    -1,   235,    67,   474,   160,   474,    -1,
     111,   654,   227,   474,   139,   474,    -1,   654,    36,   655,
      -1,   655,    -1,    12,   548,    13,   474,    -1,    60,    -1,
      61,    -1,    62,    -1,   133,    -1,   712,    -1,   712,    -1,
     188,   242,   246,   712,   471,    -1,   188,   242,   246,   712,
     664,   663,   471,    -1,   188,   242,   246,   712,   665,   243,
     420,   471,    -1,   188,   242,   246,   712,   665,   243,   420,
     664,   663,   471,    -1,   188,   242,   665,   243,   420,   471,
      -1,   188,   242,   665,   243,   420,   664,   663,   471,    -1,
      -1,   160,   589,    -1,    43,    44,    -1,    43,   469,    44,
      -1,    -1,   250,   666,    -1,   667,    -1,   666,    36,   667,
      -1,   130,    -1,   326,    -1,   327,    -1,   247,   242,   712,
      -1,   247,   242,   712,   233,    43,   671,    44,    -1,   248,
     249,   474,    -1,   248,   249,   474,   233,    43,   671,    44,
      -1,   248,   249,   474,   250,   670,    -1,   248,   249,   474,
     250,   670,   233,    43,   671,    44,    -1,   712,    -1,   326,
      -1,   328,    -1,   672,    -1,   671,    36,   672,    -1,    12,
     548,   588,    13,   474,    -1,   674,    -1,   675,    -1,   713,
      54,    60,    -1,   201,   464,   588,   471,    -1,   543,    43,
      44,    -1,   543,    43,   554,    44,    -1,   678,    -1,   680,
      -1,   679,   201,    43,    14,    44,    -1,    -1,   679,   467,
      -1,   679,   201,    43,    44,   160,   589,    -1,   679,   201,
      43,   681,    44,   160,   589,    -1,   589,    -1,   681,    36,
     589,    -1,    43,   591,    44,    -1,   683,    -1,   686,    -1,
     244,    43,   684,    44,    -1,   244,    43,    44,    -1,   685,
      -1,   684,    36,   685,    -1,   712,   588,    -1,   245,    43,
     592,    36,   589,    44,    -1,   245,    43,    44,    -1,   687,
      -1,   690,    -1,   244,    51,   688,    52,    -1,   244,    51,
      52,    -1,   689,    -1,   688,    36,   689,    -1,   712,   588,
      13,   474,    -1,   245,    51,   691,    52,    -1,   245,    51,
      52,    -1,   692,    -1,   691,    36,   692,    -1,   474,    13,
     474,    -1,   693,    -1,   543,    23,   712,    -1,   188,   254,
     712,   160,   591,    -1,   697,    -1,   700,    -1,   712,    56,
     700,   698,   699,    -1,   697,   699,    -1,    -1,   143,   474,
      -1,    58,   711,   698,    -1,   161,    43,   700,    44,   162,
     700,   163,   700,    -1,   701,    -1,   701,   164,   702,    -1,
     702,    -1,   702,   165,   703,    -1,   703,    -1,   704,   116,
     704,    -1,   704,   117,   704,    -1,   704,   120,   704,    -1,
     704,   121,   704,    -1,   704,   118,   704,    -1,   704,   119,
     704,    -1,   704,    -1,   704,    37,   705,    -1,   704,    38,
     705,    -1,   705,    -1,   705,    14,   706,    -1,   705,   170,
     706,    -1,   705,    78,   706,    -1,   705,   171,   706,    -1,
     706,    -1,    37,   706,    -1,    38,   706,    -1,   707,    -1,
     707,    24,   700,    25,    -1,   708,    -1,   713,    43,   709,
      44,    -1,    43,   709,    44,    -1,    57,   712,    -1,    60,
      -1,    61,    -1,    62,    -1,   133,    -1,    -1,   710,    -1,
     700,    -1,   710,    36,   700,    -1,   474,    -1,    57,   712,
      -1,   713,    -1,    63,    -1,    64,    -1,    65,    -1,   199,
      -1,   182,    -1,   161,    -1,    67,    -1,    68,    -1,    69,
      -1,    70,    -1,    71,    -1,   157,    -1,    72,    -1,    66,
      -1,   130,    -1,    73,    -1,    74,    -1,    75,    -1,    76,
      -1,    77,    -1,    78,    -1,    79,    -1,    80,    -1,    81,
      -1,    82,    -1,    83,    -1,    84,    -1,    85,    -1,    86,
      -1,    87,    -1,    88,    -1,    89,    -1,    90,    -1,    91,
      -1,    94,    -1,    95,    -1,    96,    -1,    97,    -1,    99,
      -1,   100,    -1,   101,    -1,   102,    -1,   103,    -1,   104,
      -1,   105,    -1,   106,    -1,   107,    -1,   108,    -1,   109,
      -1,   110,    -1,   111,    -1,   112,    -1,   116,    -1,   117,
      -1,   118,    -1,   119,    -1,   120,    -1,   121,    -1,   122,
      -1,   134,    -1,   139,    -1,   140,    -1,   141,    -1,   142,
      -1,   143,    -1,   145,    -1,   146,    -1,   147,    -1,   148,
      -1,   149,    -1,   150,    -1,   151,    -1,   152,    -1,   153,
      -1,   154,    -1,   155,    -1,   156,    -1,   158,    -1,   160,
      -1,   162,    -1,   163,    -1,   164,    -1,   165,    -1,   166,
      -1,   167,    -1,   168,    -1,   169,    -1,   170,    -1,   171,
      -1,   172,    -1,   173,    -1,   174,    -1,   175,    -1,   176,
      -1,   177,    -1,   178,    -1,   179,    -1,   180,    -1,   181,
      -1,   183,    -1,   184,    -1,   185,    -1,   186,    -1,   187,
      -1,   188,    -1,   189,    -1,   190,    -1,   191,    -1,   192,
      -1,   193,    -1,   195,    -1,   196,    -1,   197,    -1,   200,
      -1,   202,    -1,    92,    -1,    93,    -1,   203,    -1,   204,
      -1,   205,    -1,   206,    -1,   207,    -1,   208,    -1,   209,
      -1,   210,    -1,   211,    -1,   212,    -1,   213,    -1,   214,
      -1,   215,    -1,   216,    -1,   217,    -1,   218,    -1,   219,
      -1,   220,    -1,   221,    -1,   222,    -1,   223,    -1,   224,
      -1,   225,    -1,   226,    -1,   227,    -1,   228,    -1,   229,
      -1,   230,    -1,   231,    -1,   232,    -1,   233,    -1,   234,
      -1,   235,    -1,   236,    -1,   237,    -1,   238,    -1,   239,
      -1,   128,    -1,   129,    -1,   240,    -1,   241,    -1,   242,
      -1,   243,    -1,   246,    -1,   247,    -1,   248,    -1,   249,
      -1,   250,    -1,   251,    -1,   252,    -1,   253,    -1,   244,
      -1,   254,    -1,   245,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   806,   806,   808,   809,   811,   813,   814,   816,   817,
     819,   827,   832,   840,   840,   843,   852,   863,   903,   906,
     907,   908,   912,   928,   955,   968,   997,  1000,  1022,  1024,
    1028,  1035,  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1047,
    1066,  1071,  1076,  1083,  1088,  1093,  1102,  1105,  1111,  1116,
    1123,  1123,  1123,  1126,  1139,  1144,  1151,  1156,  1165,  1168,
    1176,  1203,  1207,  1214,  1220,  1225,  1230,  1239,  1263,  1267,
    1274,  1279,  1284,  1289,  1300,  1318,  1322,  1329,  1334,  1342,
    1367,  1370,  1373,  1376,  1379,  1382,  1385,  1388,  1391,  1394,
    1397,  1400,  1403,  1406,  1409,  1412,  1415,  1418,  1424,  1425,
    1426,  1427,  1428,  1440,  1443,  1449,  1463,  1467,  1474,  1481,
    1484,  1489,  1494,  1502,  1510,  1521,  1532,  1535,  1542,  1552,
    1555,  1560,  1569,  1572,  1577,  1582,  1590,  1591,  1592,  1593,
    1594,  1595,  1596,  1597,  1598,  1599,  1600,  1601,  1602,  1603,
    1604,  1605,  1606,  1607,  1611,  1629,  1633,  1638,  1647,  1653,
    1653,  1656,  1676,  1680,  1685,  1693,  1698,  1702,  1710,  1713,
    1721,  1734,  1738,  1749,  1752,  1760,  1778,  1782,  1789,  1794,
    1799,  1807,  1813,  1821,  1829,  1836,  1850,  1854,  1868,  1877,
    1885,  1888,  1895,  1930,  1934,  1939,  1945,  1955,  1958,  1966,
    1969,  1976,  1994,  1998,  2005,  2010,  2018,  2036,  2040,  2048,
    2070,  2074,  2081,  2089,  2098,  2106,  2144,  2148,  2155,  2162,
    2171,  2180,  2207,  2211,  2218,  2230,  2257,  2261,  2268,  2278,
    2290,  2294,  2299,  2308,  2321,  2325,  2330,  2339,  2353,  2357,
    2370,  2375,  2387,  2391,  2399,  2412,  2420,  2433,  2440,  2454,
    2454,  2457,  2457,  2479,  2483,  2487,  2505,  2523,  2533,  2547,
    2555,  2561,  2567,  2573,  2585,  2588,  2602,  2603,  2608,  2610,
    2611,  2612,  2616,  2636,  2653,  2656,  2660,  2672,  2674,  2678,
    2682,  2686,  2690,  2694,  2700,  2706,  2710,  2714,  2728,  2729,
    2730,  2731,  2732,  2733,  2734,  2735,  2739,  2739,  2742,  2746,
    2754,  2759,  2768,  2773,  2782,  2863,  2871,  2876,  2885,  2890,
    2899,  2909,  2913,  2921,  2925,  2933,  2949,  2958,  2970,  2979,
    2982,  2987,  2996,  3000,  3008,  3018,  3030,  3035,  3045,  3048,
    3055,  3055,  3059,  3071,  3078,  3082,  3090,  3099,  3103,  3111,
    3114,  3122,  3123,  3131,  3138,  3145,  3150,  3159,  3164,  3174,
    3182,  3190,  3203,  3218,  3225,  3226,  3227,  3228,  3229,  3230,
    3231,  3232,  3233,  3234,  3235,  3236,  3241,  3285,  3286,  3299,
    3306,  3306,  3309,  3309,  3309,  3314,  3321,  3325,  3329,  3341,
    3344,  3355,  3358,  3368,  3375,  3379,  3383,  3387,  3396,  3404,
    3412,  3417,  3425,  3429,  3435,  3442,  3457,  3472,  3475,  3479,
    3487,  3495,  3499,  3508,  3516,  3527,  3531,  3535,  3546,  3553,
    3562,  3566,  3570,  3578,  3596,  3601,  3611,  3614,  3622,  3630,
    3639,  3644,  3653,  3663,  3667,  3671,  3671,  3675,  3679,  3683,
    3687,  3691,  3695,  3699,  3703,  3707,  3711,  3715,  3719,  3723,
    3728,  3732,  3736,  3740,  3747,  3752,  3759,  3764,  3768,  3772,
    3777,  3781,  3785,  3789,  3793,  3798,  3802,  3806,  3811,  3815,
    3819,  3824,  3841,  3846,  3851,  3856,  3860,  3865,  3869,  3874,
    3880,  3886,  3891,  3892,  3893,  3901,  3905,  3909,  3917,  3924,
    3933,  3933,  3937,  3957,  3958,  3966,  3967,  3973,  3994,  3998,
    4012,  4018,  4031,  4035,  4035,  4039,  4040,  4049,  4050,  4056,
    4057,  4066,  4078,  4089,  4093,  4097,  4101,  4105,  4109,  4113,
    4117,  4125,  4133,  4150,  4158,  4167,  4171,  4175,  4179,  4183,
    4191,  4203,  4208,  4213,  4220,  4225,  4232,  4239,  4251,  4252,
    4256,  4262,  4263,  4264,  4265,  4266,  4267,  4268,  4269,  4270,
    4274,  4274,  4277,  4277,  4277,  4281,  4288,  4292,  4296,  4304,
    4312,  4322,  4332,  4336,  4359,  4364,  4374,  4375,  4384,  4388,
    4397,  4397,  4397,  4401,  4407,  4416,  4416,  4421,  4424,  4433,
    4444,  4444,  4449,  4453,  4460,  4464,  4475,  4478,  4483,  4492,
    4495,  4499,  4511,  4514,  4519,  4528,  4531,  4535,  4551,  4554,
    4559,  4564,  4569,  4580,  4590,  4593,  4598,  4608,  4609,  4623,
    4624,  4625,  4626,  4627,  4628,  4629,  4634,  4642,  4650,  4654,
    4662,  4666,  4675,  4682,  4686,  4696,  4704,  4712,  4720,  4727,
    4735,  4742,  4746,  4754,  4762,  4765,  4774,  4777,  4787,  4791,
    4801,  4802,  4804,  4806,  4812,  4816,  4817,  4818,  4819,  4824,
    4840,  4841,  4842,  4843,  4844,  4845,  4846,  4847,  4848,  4849,
    4854,  4862,  4866,  4873,  4884,  4892,  4900,  4909,  4913,  4917,
    4925,  4929,  4933,  4941,  4942,  4950,  4958,  4963,  4967,  4971,
    4975,  4984,  4985,  4993,  5000,  5003,  5006,  5009,  5013,  5025,
    5041,  5043,  5050,  5053,  5062,  5074,  5079,  5091,  5096,  5100,
    5105,  5110,  5115,  5116,  5125,  5130,  5134,  5140,  5144,  5152,
    5157,  5167,  5170,  5174,  5178,  5182,  5186,  5194,  5196,  5207,
    5213,  5219,  5225,  5240,  5244,  5248,  5252,  5256,  5260,  5264,
    5268,  5276,  5280,  5284,  5292,  5296,  5304,  5305,  5317,  5318,
    5319,  5320,  5321,  5322,  5323,  5324,  5332,  5336,  5340,  5344,
    5353,  5357,  5365,  5369,  5379,  5383,  5387,  5391,  5395,  5403,
    5405,  5412,  5416,  5420,  5424,  5434,  5438,  5442,  5450,  5452,
    5460,  5464,  5471,  5475,  5483,  5487,  5495,  5503,  5507,  5515,
    5522,  5530,  5535,  5540,  5552,  5556,  5560,  5564,  5568,  5574,
    5574,  5579,  5585,  5585,  5590,  5594,  5604,  5612,  5619,  5624,
    5632,  5641,  5649,  5657,  5666,  5673,  5682,  5694,  5699,  5704,
    5710,  5716,  5722,  5732,  5735,  5743,  5747,  5755,  5759,  5767,
    5772,  5781,  5785,  5789,  5797,  5801,  5809,  5813,  5817,  5821,
    5829,  5833,  5837,  5845,  5850,  5860,  5873,  5873,  5877,  5885,
    5896,  5901,  5925,  5925,  5929,  5935,  5937,  5941,  5945,  5952,
    5957,  5966,  5975,  5975,  5979,  5983,  5990,  5996,  6006,  6014,
    6019,  6025,  6025,  6029,  6037,  6044,  6045,  6053,  6062,  6066,
    6074,  6082,  6092,  6103,  6106,  6114,  6124,  6131,  6138,  6143,
    6152,  6155,  6162,  6169,  6173,  6177,  6187,  6191,  6201,  6205,
    6209,  6213,  6217,  6221,  6225,  6229,  6233,  6237,  6241,  6245,
    6249,  6253,  6257,  6261,  6265,  6269,  6273,  6277,  6281,  6285,
    6293,  6299,  6303,  6307,  6311,  6315,  6323,  6326,  6330,  6334,
    6342,  6346,  6357,  6357,  6357,  6357,  6357,  6357,  6357,  6357,
    6358,  6358,  6358,  6358,  6358,  6358,  6359,  6363,  6363,  6363,
    6363,  6363,  6363,  6363,  6363,  6363,  6363,  6364,  6364,  6364,
    6364,  6364,  6364,  6364,  6365,  6365,  6365,  6365,  6365,  6365,
    6365,  6365,  6366,  6366,  6366,  6366,  6366,  6366,  6366,  6366,
    6366,  6366,  6366,  6367,  6367,  6367,  6367,  6367,  6367,  6367,
    6367,  6367,  6367,  6367,  6367,  6368,  6368,  6368,  6368,  6368,
    6368,  6368,  6368,  6368,  6368,  6369,  6369,  6369,  6369,  6369,
    6369,  6369,  6369,  6369,  6369,  6369,  6369,  6370,  6370,  6370,
    6370,  6370,  6370,  6370,  6370,  6370,  6370,  6370,  6370,  6371,
    6371,  6371,  6371,  6371,  6371,  6371,  6371,  6371,  6372,  6372,
    6372,  6372,  6372,  6372,  6372,  6372,  6373,  6373,  6373,  6373,
    6373,  6373,  6373,  6373,  6373,  6373,  6373,  6374,  6374,  6374,
    6374,  6374,  6374,  6374,  6374,  6374,  6375,  6375,  6375,  6375,
    6375,  6375,  6375,  6375,  6375,  6375,  6376,  6376,  6376,  6376,
    6376,  6376,  6376,  6376,  6376,  6376,  6376,  6377,  6377,  6377,
    6377,  6377,  6377,  6377,  6377,  6377,  6377,  6377,  6378,  6378,
    6378,  6378,  6378,  6378
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
  "\"~\"", "\"->\"", "\"||\"", "\"<integer literal>\"",
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
     585,   586
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   332,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   334,   335,   336,   336,   337,   338,   339,   340,   340,
     340,   340,   341,   342,   343,   344,   345,   345,   346,   346,
     346,   347,   347,   347,   347,   347,   347,   347,   347,   348,
     349,   349,   349,   349,   349,   349,   350,   350,   350,   350,
     351,   351,   351,   352,   353,   353,   353,   353,   354,   354,
     355,   356,   356,   356,   356,   356,   356,   357,   358,   358,
     358,   358,   358,   358,   359,   360,   360,   360,   360,   361,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   363,   363,
     363,   363,   363,   364,   364,   365,   366,   366,   366,   367,
     368,   368,   368,   368,   368,   369,   370,   370,   370,   371,
     371,   371,   372,   372,   372,   372,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   374,   375,   375,   375,   376,   377,
     377,   378,   379,   379,   379,   380,   380,   380,   381,   381,
     382,   383,   383,   384,   384,   385,   386,   386,   386,   386,
     386,   387,   388,   389,   390,   391,   392,   392,   393,   394,
     395,   395,   396,   397,   397,   397,   397,   398,   398,   399,
     399,   400,   401,   401,   401,   401,   402,   403,   403,   404,
     405,   405,   405,   406,   407,   408,   409,   409,   409,   409,
     409,   410,   411,   411,   411,   412,   413,   413,   413,   414,
     415,   415,   415,   416,   417,   417,   417,   418,   419,   419,
     420,   420,   421,   421,   421,   422,   422,   423,   423,   424,
     424,   425,   425,   426,   426,   426,   426,   426,   426,   427,
     428,   428,   428,   428,   429,   429,   430,   430,   431,   431,
     431,   431,   432,   433,   434,   435,   436,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   438,   438,
     438,   438,   438,   438,   438,   438,   439,   439,   440,   441,
     442,   442,   443,   443,   444,   445,   446,   446,   447,   447,
     448,   449,   449,   450,   450,   451,   452,   453,   453,   454,
     454,   454,   455,   455,   456,   456,   457,   457,   458,   458,
     459,   459,   460,   461,   462,   462,   463,   464,   464,   465,
     465,   466,   466,   467,   467,   468,   468,   469,   469,   470,
     471,   472,   473,   473,   474,   474,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   475,   476,   476,   476,
     477,   477,   478,   478,   478,   479,   480,   480,   481,   482,
     482,   483,   483,   484,   485,   485,   486,   486,   487,   488,
     489,   489,   490,   490,   491,   491,   492,   493,   493,   493,
     494,   494,   494,   495,   495,   496,   496,   497,   498,   499,
     499,   500,   500,   501,   502,   502,   503,   503,   504,   505,
     505,   506,   506,   507,   507,   508,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     509,   509,   509,   510,   510,   511,   511,   512,   512,   512,
     513,   513,   513,   513,   513,   514,   514,   514,   515,   515,
     515,   516,   516,   517,   517,   518,   518,   519,   519,   520,
     520,   520,   521,   521,   521,   522,   522,   522,   523,   523,
     524,   524,   525,   526,   526,   527,   527,   527,   527,   528,
     529,   529,   529,   530,   530,   531,   531,   532,   532,   533,
     533,   534,   534,   535,   535,   535,   535,   535,   535,   535,
     535,   536,   536,   537,   537,   538,   538,   538,   538,   538,
     539,   540,   540,   541,   541,   542,   542,   542,   543,   543,
     543,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     545,   545,   546,   546,   546,   547,   548,   549,   549,   550,
     551,   552,   553,   553,   554,   554,   555,   555,   556,   556,
     557,   557,   557,   558,   558,   559,   559,   560,   560,   560,
     561,   561,   562,   562,   563,   563,   564,   564,   564,   565,
     565,   565,   566,   566,   566,   567,   567,   567,   568,   568,
     568,   568,   568,   569,   570,   570,   571,   572,   572,   573,
     573,   573,   573,   573,   573,   573,   574,   575,   576,   576,
     577,   577,   578,   579,   579,   580,   581,   582,   583,   584,
     584,   585,   585,   586,   587,   587,   588,   588,   589,   589,
     590,   590,   590,   590,   591,   591,   591,   591,   591,   592,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     594,   595,   595,   595,   596,   597,   598,   599,   599,   599,
     600,   600,   600,   601,   601,   602,   603,   604,   604,   604,
     604,   605,   605,   606,   607,   608,   609,   610,   611,   612,
     613,   613,   614,   614,   615,   615,   616,   616,   617,   617,
     618,   618,   619,   619,   620,   620,   620,   621,   621,   622,
     622,   623,   623,   623,   623,   623,   623,   624,   624,   625,
     625,   625,   625,   626,   626,   626,   626,   626,   626,   626,
     626,   627,   627,   627,   628,   628,   629,   629,   630,   630,
     630,   630,   630,   630,   630,   630,   631,   631,   631,   631,
     632,   632,   633,   633,   634,   634,   634,   634,   634,   635,
     635,   636,   636,   636,   636,   637,   637,   637,   638,   638,
     639,   639,   640,   640,   641,   641,   642,   643,   643,   644,
     645,   646,   646,   646,   647,   647,   647,   647,   647,   648,
     648,   649,   650,   650,   651,   651,   652,   653,   654,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   662,   662,
     662,   662,   662,   663,   663,   664,   664,   665,   665,   666,
     666,   667,   667,   667,   668,   668,   669,   669,   669,   669,
     670,   670,   670,   671,   671,   672,   673,   673,   674,   675,
     676,   676,   677,   677,   678,   679,   679,   680,   680,   681,
     681,   682,   591,   591,   683,   683,   684,   684,   685,   686,
     686,   544,   544,   687,   687,   688,   688,   689,   690,   690,
     691,   691,   692,   543,   693,   694,   695,   696,   697,   697,
     698,   698,   699,   700,   700,   701,   701,   702,   702,   703,
     703,   703,   703,   703,   703,   703,   704,   704,   704,   705,
     705,   705,   705,   705,   706,   706,   706,   707,   707,   708,
     708,   708,   708,   708,   708,   708,   709,   709,   710,   710,
     711,   544,   712,   712,   712,   712,   712,   712,   712,   712,
     712,   712,   712,   712,   712,   712,   712,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713
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
       3,     3,     1,     1,     1,     1,     1,     1,     4,     1,
       4,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     1,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     2,     1,
       4,     4,     3,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     5,    10,     1,     1,     0,     7,     7,
       0,     1,     3,     3,     3,     3,     0,     2,     2,     0,
       2,     2,     0,     2,     2,     0,     2,     2,     0,     2,
       2,     2,     2,     3,     0,     1,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     1,     3,
       2,     3,     3,     1,     3,     3,     4,     4,     3,     1,
       3,     2,     3,     2,     0,     1,     0,     2,     2,     3,
       0,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     4,     4,     3,     3,     3,     3,     4,     4,
       3,     4,     6,     1,     1,     4,     1,     3,     4,     6,
       7,     1,     1,     4,     1,     1,     1,     1,     1,     3,
       0,     2,     0,     2,     3,     1,     3,     1,     4,     1,
       2,     1,     1,     2,     2,     3,     1,     2,     4,     3,
       4,     0,     1,     2,     1,     2,     1,     0,     3,     2,
       3,     3,     4,     1,     3,     3,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       2,     2,     1,     2,     2,     2,     5,     5,     2,     0,
       3,     2,     4,     4,     6,     4,     3,     4,     0,     2,
       2,     3,     1,     3,     2,     2,     2,     1,     2,     3,
       3,     3,     3,     3,     6,     6,     4,     4,     4,     2,
       2,     2,     2,     2,     7,     5,     5,     6,     3,     1,
       4,     1,     1,     1,     1,     1,     1,     5,     7,     8,
      10,     6,     8,     0,     2,     2,     3,     0,     2,     1,
       3,     1,     1,     1,     3,     7,     3,     7,     5,     9,
       1,     1,     1,     1,     3,     5,     1,     1,     3,     4,
       3,     4,     1,     1,     5,     0,     2,     6,     7,     1,
       3,     3,     1,     1,     4,     3,     1,     3,     2,     6,
       3,     1,     1,     4,     3,     1,     3,     4,     4,     3,
       1,     3,     3,     1,     3,     5,     1,     1,     5,     2,
       0,     2,     3,     8,     1,     3,     1,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     2,     2,     1,     4,     1,     4,
       3,     2,     1,     1,     1,     1,     0,     1,     1,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
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
       0,     0,    11,     0,    11,    11,   318,     0,     0,   825,
       0,     0,   515,     0,     0,     0,   584,     0,   560,     0,
       0,   479,   539,   510,     0,     0,   781,   782,   783,   903,
     904,   905,   916,   909,   910,   911,   912,   913,   915,   918,
     919,   920,   921,   922,   923,   924,   925,   926,   927,   928,
     929,   930,   931,   932,   933,   934,   935,   936,  1018,  1019,
     937,   938,   939,   940,   941,   942,   943,   944,   945,   946,
     947,   948,   949,   950,   951,   952,   953,   954,   955,   956,
     957,   958,   959,   960,   961,  1057,  1058,   917,   784,   962,
     516,   517,   963,   964,   965,   966,   967,   968,   969,   970,
     971,   972,   973,   974,   975,   976,   977,   978,   979,   914,
     980,   981,   908,   982,   983,   984,   985,   986,   987,   988,
     989,   990,   991,   992,   993,   994,   995,   996,   997,   998,
     999,  1000,  1001,   907,  1002,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,   906,  1016,
       0,  1017,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,
    1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,
    1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,
    1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1059,
    1060,  1061,  1062,  1071,  1073,  1063,  1064,  1065,  1066,  1067,
    1068,  1069,  1070,  1072,     2,   341,   343,   344,     0,   357,
     360,   361,   345,   346,   347,   353,   410,   412,   429,   432,
     434,   436,   439,   444,   447,   450,   452,   454,   456,   458,
     461,   462,   464,     0,   470,   463,   475,   478,   482,   483,
     485,   486,   487,     0,   492,   489,     0,   504,   502,   512,
     514,   484,   518,   521,   530,   522,   523,   524,   527,   528,
     525,   526,   548,   550,   551,   552,   549,   589,   590,   591,
     592,   593,   594,   595,   511,   639,   630,   637,   636,   638,
     635,   632,   634,   631,   633,   348,     0,   349,     0,   351,
     350,   352,   532,   533,   534,   531,   513,   354,   355,   529,
     816,   817,   520,   841,   842,   853,   786,   902,   258,    28,
     116,     5,    25,    27,     0,   258,     7,     0,   903,   904,
     905,   916,   909,   910,   911,   912,   913,   924,   925,   926,
     927,   928,   929,   930,   931,   932,   933,   934,   935,   953,
    1057,  1058,   964,   966,   977,   978,   914,   908,   995,  1001,
     906,  1043,  1046,  1052,  1054,  1071,  1073,  1064,  1065,     8,
     856,     0,   902,     0,     0,   896,     0,   892,   893,   894,
     895,     0,     9,   857,   864,   866,   868,   875,   878,   883,
     886,   888,     0,   825,   903,   904,   910,   913,   915,   907,
     906,  1071,  1073,    10,   620,   625,   626,   629,   627,   822,
       0,   823,   628,   832,   833,     1,   535,   536,   501,   555,
     556,   557,     0,   585,     0,   477,   561,     0,   460,   459,
     538,     0,   901,   495,     0,     0,   603,     0,     0,     0,
       0,     0,     0,     0,     0,   609,     0,     0,     0,     0,
       0,   493,   494,   496,   497,   498,   499,   505,   506,   507,
     508,   509,     0,     0,     0,   779,     0,     0,     0,   365,
     367,     0,     0,   373,   375,     0,     0,   396,     0,     0,
       0,     0,     0,     0,   500,     0,     0,     0,   598,     0,
       0,   616,     0,     0,   769,   770,     0,   772,   773,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   362,   359,   363,   364,   358,     0,     0,     0,     0,
       0,     0,     0,     0,   415,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   471,   476,     0,     0,     0,     0,   491,   503,     0,
       0,     0,     0,   771,     0,     0,     0,     3,   267,    31,
     122,   318,     4,     6,     0,     0,   322,   319,   320,   329,
     321,     0,   859,     0,   884,   885,   898,     0,   897,   891,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   896,     0,     0,     0,
       0,     0,   621,   623,   622,   618,     0,   826,   560,     0,
     587,   586,   583,     0,   537,   654,   650,     0,   653,   665,
       0,     0,   602,   645,     0,   641,     0,     0,     0,     0,
     646,   640,   647,     0,     0,   785,     0,     0,   608,     0,
     656,     0,   664,   666,   644,     0,     0,     0,     0,     0,
       0,     0,   616,     0,   616,     0,     0,   616,     0,     0,
       0,     0,     0,     0,     0,     0,   605,   662,   657,     0,
     661,     0,   597,     0,   327,     0,   338,   825,     0,     0,
       0,     0,   844,     0,   845,   616,   849,     0,     0,   850,
     804,   806,   342,   356,   378,     0,     0,     0,   409,   411,
     414,   417,   418,   419,   427,   428,     0,   413,   420,   421,
     422,   423,   424,   425,   426,   433,     0,   437,   438,   435,
     440,   442,   441,   443,   445,   446,   448,   449,   825,   825,
       0,     0,   468,     0,   481,   480,     0,     0,   854,     0,
     547,   820,   546,     0,   545,     0,     0,     0,     0,   542,
       0,   818,     0,     0,     0,     0,     0,   256,   257,   267,
       0,    29,    30,     0,   118,   119,     0,     0,     0,    18,
     333,   825,    15,   900,   860,   860,   890,     0,     0,   865,
     867,   876,   877,   869,   870,   873,   874,   871,   872,   879,
     881,   880,   882,     0,     0,   831,   619,   624,   835,     0,
     836,   616,   840,     0,   825,   561,     0,   588,     0,   473,
     472,     0,   651,   604,   600,     0,   607,   642,   643,   649,
     648,   610,   611,     0,   655,   663,   606,   596,     0,   778,
       0,   540,   541,   369,   366,     0,     0,   374,     0,   395,
     393,   394,     0,     0,   465,     0,     0,     0,   658,   599,
     616,     0,   328,   617,     0,   819,     0,     0,     0,     0,
     843,     0,     0,     0,   848,     0,     0,     0,   379,   386,
     380,   383,   387,     0,   416,     0,     0,     0,     0,   691,
     430,   672,   675,   677,   679,   681,   682,   697,   686,   451,
     453,   455,   614,   457,   469,   488,   490,   519,     0,   821,
       0,     0,   768,   767,   766,   543,   263,   262,   288,     0,
     259,   261,     0,   265,  1007,  1014,     0,     0,     0,   278,
       0,     0,     0,   282,   283,   285,   279,   280,   286,   287,
     281,     0,     0,   264,   284,     0,     0,    26,    40,    68,
      54,    75,    80,   110,   106,    32,    58,    33,    58,    34,
     122,    35,   122,    36,     0,    38,     0,    37,     0,   117,
     115,   145,     0,   152,   161,     0,     0,     0,   192,   197,
     200,   204,   206,   212,   216,   183,   220,   224,   228,   149,
     150,   124,   125,   126,   122,   127,   123,   128,   158,   129,
     163,   130,     0,   132,   122,   131,   140,   187,   133,   122,
     134,   122,   135,   122,   136,   122,   137,   122,   138,   122,
     139,   122,   141,     0,   142,   122,   143,   122,     0,     0,
      16,     0,   330,     0,   862,     0,   899,     0,   887,   889,
       0,   834,   838,   825,     0,     0,   829,     0,   560,   560,
     578,   553,   474,     0,   667,   601,   612,   780,     0,     0,
     371,     0,     0,     0,   406,     0,   400,     0,     0,   466,
     467,     0,   339,   337,     0,   775,     0,   776,   846,     0,
     852,   851,     0,     0,   811,   812,   808,   810,     0,   388,
     389,   390,   381,     0,     0,   680,     0,   692,   694,   696,
     687,     0,   431,     0,   670,     0,     0,     0,   683,     0,
     684,   615,   613,   544,     0,     0,   260,     0,   318,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     797,     0,     0,     0,     0,   268,   269,   270,   271,   275,
     276,   272,   273,   274,   277,   111,   112,    46,    42,     0,
     825,     0,   122,    55,    57,   825,   122,    69,    73,    72,
     825,     0,     0,    76,   825,     0,     0,    79,    97,    81,
      85,    86,    87,    91,    92,    94,    83,    88,    89,    90,
      93,    95,     0,     0,     0,   105,   107,   825,   109,   121,
     120,     0,     0,     0,   180,   176,   122,     0,     0,   119,
       0,     0,     0,     0,   162,     0,   171,     0,   122,     0,
     119,   119,   189,   193,   825,     0,     0,     0,     0,   119,
       0,     0,     0,   119,     0,   119,   119,     0,   119,     0,
       0,   119,   119,     0,   219,   222,     0,   225,   226,     0,
       0,     0,     0,     0,   318,    19,    20,    21,     0,   335,
     861,   858,     0,   837,     0,   824,   825,   825,     0,     0,
       0,     0,   652,   777,     0,     0,     0,   376,   377,   397,
       0,   825,     0,   398,   399,   825,     0,     0,     0,   659,
     340,     0,   847,     0,     0,   813,     0,     0,   382,     0,
     384,   685,   691,   689,     0,   693,   695,     0,   674,     0,
       0,   703,     0,     0,     0,     0,     0,   669,   673,   676,
       0,     0,     0,   732,     0,     0,   757,     0,     0,   728,
     729,     0,   716,   722,   723,   721,   720,   724,   718,   719,
     725,     0,     0,     0,     0,     0,   764,   765,     0,   290,
     291,   295,   668,   306,     0,   316,   317,   296,   297,     0,
       0,     0,     0,   301,   302,     0,     0,   762,   761,   763,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   309,
       0,   309,   113,   114,    44,     0,   236,   235,   903,   924,
    1059,  1060,    41,   231,     0,   234,   232,   243,   254,   250,
      45,    50,    51,    52,    43,    61,    59,   122,     0,    56,
       0,    71,    70,    67,    78,    77,    74,   101,   102,    98,
      99,   100,    82,   103,    84,    96,   108,   148,   172,     0,
     122,   177,     0,     0,   174,   146,   147,   144,   155,   156,
     157,   154,   153,   151,   166,   159,   122,   160,   164,   173,
       0,   184,   185,   186,   122,     0,   195,   194,   122,   198,
     196,   201,   202,   199,   203,   207,   209,   210,   208,   205,
     213,   214,   211,   217,   218,   215,   221,   223,   229,   227,
     329,     0,     0,     0,     0,     0,   334,     0,   839,   827,
     830,   825,   560,   560,     0,   582,   581,   580,   579,   370,
       0,     0,     0,   404,     0,     0,   405,   403,     0,   660,
     774,   616,     0,   805,   807,     0,   391,   392,     0,   688,
     690,   760,   710,   708,   709,   671,     0,     0,   714,   715,
     706,   707,   678,   733,   738,     0,   758,   731,   730,     0,
       0,   735,   734,     0,   727,   726,     0,   756,   717,     0,
       0,   699,     0,   698,     0,     0,     0,   305,     0,     0,
       0,   294,   797,   801,   802,   803,   798,   799,     0,   825,
       0,     0,     0,     0,   309,     0,   308,     0,   315,    47,
      48,    49,   253,     0,     0,     0,     0,     0,   244,     0,
       0,     0,     0,   249,    62,    66,    65,   825,     0,     0,
      39,    53,   104,   179,     0,   175,   178,   167,   170,   825,
       0,     0,   188,     0,   182,   191,     0,     0,     0,     0,
       0,   336,     0,   828,     0,     0,   560,   372,   368,   407,
       0,   402,   408,     0,   814,     0,   385,   711,   712,   713,
     704,   705,   746,   739,   739,   741,     0,     0,   748,   748,
     759,   701,   700,     0,   266,   289,   298,   299,   292,   293,
     303,   304,   300,     0,   787,   793,     0,     0,     0,   855,
     616,   329,   312,   313,   307,   310,     0,     0,   252,   251,
       0,   240,   239,     0,   230,   246,   245,   248,   247,     0,
      64,    63,    60,   181,   169,   168,   165,   190,    13,    17,
       0,     0,     0,   863,   566,   572,   558,   569,   575,   559,
       0,     0,     0,   809,     0,     0,     0,     0,     0,   752,
     750,   747,   745,   702,   795,     0,   825,     0,     0,   800,
     791,   793,     0,     0,   311,   309,   237,     0,     0,    12,
      14,     0,    23,   329,     0,     0,     0,     0,   554,   401,
     815,     0,   737,   736,   742,   743,     0,   751,     0,     0,
     749,   796,   794,   788,     0,     0,     0,   325,   323,   332,
     326,   331,   314,     0,   241,   242,   255,    24,     0,   562,
     568,   567,   563,   574,   573,   564,   571,   570,   565,   577,
     576,   740,     0,   753,   754,   755,   789,   793,   792,   324,
     238,     0,   744,     0,    22,   790
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,   308,   562,  1719,   316,   563,   769,  1020,  1235,
    1236,  1237,   311,   312,   559,   763,   945,   946,  1364,  1384,
     947,   948,  1142,  1386,  1387,   949,   950,   951,   952,   953,
     954,  1402,  1404,   955,   956,   957,   958,   981,   560,   959,
     766,   982,   983,   984,   985,   986,   987,   988,  1421,  1193,
     989,   990,  1195,  1425,  1426,   991,   992,   993,   994,   995,
    1184,  1185,  1186,  1412,   996,   997,  1202,  1435,   998,   999,
    1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,
    1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1372,  1373,
    1374,  1375,  1660,  1753,  1376,  1377,  1378,  1573,   557,   558,
     754,   755,   757,   758,   759,   760,   916,   917,   910,   918,
     919,   920,   921,   922,   923,   924,   925,  1345,  1642,   926,
     927,   928,  1556,  1358,   929,   930,  1122,   567,   568,   931,
    1748,   932,   481,   772,  1750,   570,  1238,   675,   676,  1180,
     204,   205,   206,   207,   208,   209,   502,   210,   459,   460,
    1050,  1256,   211,   463,   464,   503,   504,   505,   870,   871,
     872,  1081,  1280,   212,   466,   467,   213,  1055,  1263,  1056,
    1057,  1261,   214,   215,   216,   217,   706,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   810,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   406,   256,   257,   258,
     259,   260,   743,   744,   261,   262,   263,   411,   608,   417,
    1686,  1689,  1724,  1726,  1725,  1727,  1251,   264,   414,   265,
     611,   266,   267,   268,   479,   622,   269,   427,   270,   271,
     272,   273,   436,   638,   891,  1102,   678,   393,   605,   394,
     395,   274,   275,   276,   277,   278,   279,   280,   281,   617,
     282,   639,   283,   669,   284,   641,   618,   642,  1043,  1333,
     880,  1297,  1094,   881,   882,   883,   884,   885,   886,   887,
     888,  1090,  1100,  1325,  1298,  1620,  1510,  1098,  1312,  1313,
    1314,  1315,  1316,  1694,  1522,  1317,  1701,  1629,  1698,  1740,
    1318,  1319,  1320,  1092,   934,   285,   286,   287,   288,   289,
     290,   291,   454,   455,   292,   293,   294,   295,   634,   296,
     935,  1707,  1645,  1352,  1546,  1547,   297,   298,  1076,  1274,
    1275,   299,   300,   301,   302,   398,   399,   400,   401,  1037,
     402,   403,   799,   800,   404,   303,   683,   684,   304,   688,
     689,   305,   936,   359,   372,   360,  1024,   572,   576,   374,
     375,   376,   377,   378,   379,   380,   381,   577,   578,   774,
     306,   307
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1627
static const yytype_int16 yypact[] =
{
     739,  4069, -1627,  -147, -1627, -1627, -1627,  8132,  6462,  6892,
     125,  8132, -1627,  5521,   604,    46,   231,  4798,   262,  4312,
    4312, -1627, -1627, -1627,  2611,  8132, -1627, -1627, -1627,   187,
     126,   361,   407,   438,   105,   453,   463,   559, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627,   479,   515,   525,   545,   550,
     570,   583,   682,   694,   709,   744,   472, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627,   759, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627,   725,   735, -1627, -1627, -1627,
   -1627, -1627, -1627,   803, -1627,    42, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627,   814,   814, -1627,   816,
   -1627, -1627,   821, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627,   388, -1627, -1627, -1627,
   -1627, -1627,   130, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,   286, -1627,
     834, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627,   112, -1627, -1627,   -21, -1627,
   -1627, -1627, -1627, -1627,   602, -1627,   -11, -1627, -1627, -1627,
   -1627, -1627, -1627,   836,   840, -1627,   673,   636, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627,   881, -1627, -1627,   616, -1627,
   -1627, -1627, -1627, -1627, -1627,   738,   766, -1627,   863,    -4,
   -1627,    60,    94,    38,   580, -1627,   773,   789,   761,   765,
   -1627, -1627, -1627,   374, -1627, -1627,  4798,   612, -1627, -1627,
     911,   931, -1627,  5521, -1627, -1627,  5521, -1627, -1627, -1627,
   -1627,   312, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627,  4069, -1627,  4069, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627,   121,   781, -1627,
   -1627, -1627, -1627, -1627,   790,   781, -1627,    17, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
     914,   933, -1627,  6680,  6680,  6462,  8132, -1627, -1627, -1627,
   -1627,   948, -1627, -1627,   833,   835, -1627,   303,   114, -1627,
     974, -1627,   956,  7104,   958,   959,   961,   963,   965,   967,
     971,   975,   976, -1627,   519, -1627, -1627, -1627, -1627, -1627,
      11, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627,   720, -1627,   977,   612, -1627,  8132, -1627, -1627,
   -1627,   605, -1627, -1627,  6003,  4069, -1627,   969,   973,  4069,
      29,   980,   981,  7315,  4069, -1627,   970,  8132,  8132,   983,
    4069, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627,  4069,  8132,    33, -1627,  4069,  4069,  8132,   993,
   -1627,  8132,  1018,   998, -1627,  8132,    47, -1627,    71,  4069,
    4069,  4069,   984,   985, -1627,   969,  6244,  4069, -1627,   969,
     274,   877,  4069,   872, -1627, -1627,  4069, -1627, -1627,  7940,
    2854,  8132,  4069,  4069,  4069,   803,    42,  4069,  1032,   900,
     901, -1627, -1627, -1627, -1627, -1627,  4312,  4312,  4312,  4312,
    4312,  4312,  4312,  4312, -1627,  4312,  4312,  4312,  4312,  4312,
    4312,  4312,  4312,  4312,   982,  4312,  4312,  4312,  4312,  4312,
    4312,  4312,  4312,  4312,  4312,  4312,   885,   888,   894,   895,
    3097, -1627,   612,  4798,  4798,  4069,  4069, -1627, -1627,  8132,
    4069,  2125,   202, -1627,  2368,  1000,   369, -1627,   865,   273,
     528, -1627, -1627, -1627,   868,  8132, -1627, -1627, -1627,   904,
   -1627,  4069, -1627,  6462, -1627, -1627, -1627,  1017,  1031, -1627,
    6462,  6680,  6680,  6680,  6680,  6680,  6680,  6680,  6680,  6680,
    6680,  6680,  6680,  6680,  6680,  6462,  6462,  1028,  1029,  1030,
    7526,  7737, -1627, -1627, -1627, -1627,  1033, -1627,   962,   972,
   -1627, -1627, -1627,   234, -1627, -1627, -1627,   606, -1627, -1627,
     408,  3340, -1627, -1627,   440, -1627,   463,   971,  1034,  1035,
   -1627, -1627, -1627,  1036,  1037, -1627,   491,  3583, -1627,  1039,
   -1627,  1043, -1627, -1627, -1627,   513,   554,  1064,   759,  4069,
     567,   568,   877,   803,   877,  8132,    42,   877,   814,  4069,
    4069,   610,   637,   586,  4069,  4069, -1627, -1627, -1627,   671,
   -1627,   611, -1627,  8132, -1627,   674, -1627,  6892,  1040,   857,
    1025,   934, -1627,   639, -1627,   877, -1627,  1082,   642, -1627,
     867,   179, -1627, -1627, -1627,  8132,  4069,   951,   766, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627,  4312, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627,    28,    94,    94,   817,
      38,    38,    38,    38,   580,   580, -1627, -1627,  6892,  6892,
    8132,  8132, -1627,   643, -1627, -1627,   587,   646, -1627,   647,
   -1627, -1627, -1627,   675, -1627,   529,  4069,  4069,  4069, -1627,
     693, -1627,   987,   988,    22,  1044,   917, -1627, -1627, -1627,
    4555, -1627, -1627,   256, -1627, -1627,  1250,    -5,   918, -1627,
    1060,  6892, -1627, -1627,   979,   979, -1627,  6462,  1061,   835,
   -1627,   114,   114,   830,   830,   830,   830,   830,   830, -1627,
   -1627, -1627, -1627,  1083,  1063, -1627, -1627, -1627, -1627,   731,
   -1627,   877, -1627,  1073,  5762,   758,   469, -1627,   978, -1627,
   -1627,  8132, -1627, -1627, -1627,   650, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627,   654, -1627, -1627, -1627, -1627,  4069, -1627,
     986, -1627, -1627,   991, -1627,  1097,  1102, -1627,   989, -1627,
   -1627, -1627,   960,   955, -1627,   656,   657,  8132, -1627, -1627,
     877,  1111, -1627, -1627,  4069, -1627,  4069,  4069,  4069,  8132,
   -1627,  1113,  4069,  4069, -1627,  1081,  1085,  1855, -1627, -1627,
    1093, -1627,   721,  4069, -1627,    28,  4069,   501,   436,   613,
    1038,   880,   882,  1046, -1627, -1627,  1047,   928, -1627, -1627,
   -1627, -1627,  1114, -1627, -1627, -1627, -1627, -1627,  3826, -1627,
     903,   906, -1627, -1627, -1627, -1627, -1627, -1627, -1627,  1044,
   -1627, -1627,  8132,   581,   435,   703,  1044,  1044,  1044, -1627,
    1044,  1044,  1044, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627,  1044,  1044, -1627, -1627,  1044,  1044, -1627, -1627, -1627,
   -1627, -1627, -1627,   617, -1627, -1627,   321, -1627,   175, -1627,
     157, -1627,   244, -1627,   618, -1627,  -143, -1627,   887,    65,
   -1627, -1627,   595, -1627, -1627,   837,   878,   838, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627,   138, -1627, -1627, -1627,  -151, -1627,
     858, -1627,   897, -1627, -1627, -1627, -1627,    49, -1627,   260,
   -1627,   842, -1627,   117, -1627, -1627, -1627,    66, -1627,   148,
   -1627,    96, -1627,    52, -1627,   626, -1627,   843,  8314,  8132,
     968,   468, -1627,  4069, -1627,   914, -1627,   995, -1627, -1627,
    8132, -1627, -1627,  6892,  1105,   999, -1627,   736,   262,   262,
   -1627, -1627, -1627,  1117, -1627, -1627, -1627, -1627,  4069,  1146,
     990,  4069,  4069,  4069,  1150,   -36, -1627,    43,  4069, -1627,
   -1627,   364, -1627, -1627,   660, -1627,   932, -1627, -1627,  4069,
   -1627, -1627,  1154,  1154, -1627, -1627,   936, -1627,  4069, -1627,
   -1627,  1021,  1093,  1123,   665, -1627,    16,  1067,   954, -1627,
   -1627,  1072, -1627,    28,   193,    28,  1041,   268,  1086,   132,
   -1627, -1627, -1627, -1627,  4069,  4069, -1627,  1139,   141,   703,
     754,  1047,  1048,  8132,   764,   820,   289,   551,  8132,    70,
      45,  8132,    31,   -15,   -13, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627,   883,   889, -1627, -1627,  5039,
    6892,   801,   920, -1627, -1627,  6892,   920, -1627, -1627, -1627,
    6892,  4069,  1373, -1627,  6892,  4069,  1407, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627,   -30,  1056,  1056, -1627, -1627,  7104, -1627, -1627,
   -1627,   935,  4069,   875,   684, -1627, -1627,  4069,  4069, -1627,
    1484,   -65,  4069,   458, -1627,   470, -1627,  1512, -1627,  4069,
   -1627, -1627,   910, -1627,  6892,  4069,  1583,  4069,  8315, -1627,
    4069,  8343,  8372, -1627,  4069, -1627, -1627,  8400, -1627,  4069,
    8429, -1627, -1627,  8457, -1627, -1627,  4069, -1627, -1627,  8486,
    4069,  8514,   834,  1151,   -67, -1627, -1627, -1627,   746, -1627,
   -1627, -1627,  6462, -1627,  1149, -1627,  6892,  6892,  1042,  1148,
    1152,   275, -1627, -1627,  8132,  1183,  1055, -1627, -1627, -1627,
    8132,  6892,    80, -1627, -1627,  6892,  4069,  1045,  1155, -1627,
   -1627,  4069, -1627,  8132,   747, -1627,   752,  1158, -1627,   794,
    1051, -1627,   613, -1627,  1153, -1627, -1627,  4312,   882,  1099,
     846, -1627,  4312,  4312,   132,   732,   732, -1627, -1627,  1046,
      28,   745,   864, -1627,    41,   992, -1627,   866,  8132, -1627,
   -1627,  1074, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627,   268,   235,  4312,  4312,  1001, -1627, -1627,  1048, -1627,
   -1627,  1086, -1627, -1627,  1166, -1627, -1627, -1627, -1627,  1062,
    1048,  1049,  1057, -1627, -1627,  1174,  1078, -1627, -1627, -1627,
    8132,   -81,  1002,  1058,  1203,  8314,  8132,  1020,  1048,  1094,
    8132,  1094, -1627, -1627,   -50,  5521, -1627,  1050,   372,  1195,
    1177,  1178,  1207, -1627,  5280,   779,   784, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627,   206,  8543, -1627,
    8571, -1627,   881, -1627, -1627,   881, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627,  1095,  1095, -1627, -1627,   881,  4069,
   -1627, -1627,   994,  8600,   881,   881,    65, -1627, -1627, -1627,
   -1627, -1627,   881, -1627, -1627, -1627,   214, -1627, -1627, -1627,
    8628,   881,    65,    65, -1627,   997, -1627,   881, -1627,   881,
   -1627,    65,   881, -1627, -1627,    65,   881,    65,    65, -1627,
      65,   881, -1627,    65,    65, -1627,   881, -1627,   881, -1627,
     904,  1048,  8132,  8132,    55,   468, -1627,  1065, -1627, -1627,
   -1627,  6892,   262,   262,   604, -1627, -1627, -1627, -1627, -1627,
    8132,  4069,  1069, -1627,  8132,  4069, -1627, -1627,  4069, -1627,
   -1627,   877,  1154, -1627, -1627,  1154, -1627, -1627,  1048, -1627,
   -1627,    38, -1627, -1627, -1627, -1627,    57,   653, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627,  1003, -1627, -1627, -1627,   -29,
    1048, -1627, -1627,    62, -1627, -1627,  1090, -1627, -1627,  4312,
    4312,   817,    64, -1627,  1044,  1048,   811, -1627,  1048,  1048,
     778, -1627,    -3, -1627, -1627, -1627,  1196, -1627,  5039,  7104,
    8132,   834,  1191,  1080,  1094,  1048,  1200,  1201,  1200, -1627,
   -1627, -1627, -1627,  5521,  5521,    75,  1074,  5039, -1627,  5280,
    5280,  5280,  5280,  1218, -1627, -1627, -1627,  6892,  4069,  8657,
   -1627, -1627, -1627,   881,  8685, -1627, -1627, -1627, -1627,  6892,
    4069,  8714, -1627,  8742, -1627,  1852,  1040,  1044,  1204,  1110,
    8314, -1627,  6462, -1627,   740,   792,   262, -1627, -1627, -1627,
    1109, -1627, -1627,  1237, -1627,   757, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627,    84,  1074,  1048, -1627, -1627,
   -1627,   817,   817,  4312, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627,   327, -1627,  1103,  1012,   -81,   299, -1627,
     877,   904, -1627, -1627,  1200, -1627,  1048,  1048, -1627, -1627,
    1215, -1627, -1627,  1226, -1627, -1627, -1627, -1627, -1627,  4069,
   -1627,   881, -1627, -1627, -1627,   881, -1627, -1627,  1044, -1627,
    1048,  1044,   834, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
    1235,  4069,  4069, -1627,   762,   763,  1074,  1053,   769, -1627,
   -1627,   443,   443,   817, -1627,   775,  6892,  1040,  5039, -1627,
   -1627,  1103,    39,    19, -1627,  1094, -1627,   263,   678, -1627,
   -1627,  1044, -1627,   904,   102,   143,   265,   261, -1627, -1627,
   -1627,  1143, -1627, -1627,   132, -1627,  1074, -1627,    48,    48,
   -1627, -1627, -1627, -1627,   299,  1040,  4069, -1627, -1627, -1627,
   -1627, -1627,  1200,  1224, -1627, -1627, -1627, -1627,  1040, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627,  1059, -1627, -1627, -1627, -1627,  1103, -1627, -1627,
   -1627,  1044, -1627,  1040, -1627, -1627
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1627, -1627,   964, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627,   324, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627,   100, -1627, -1627, -1627, -1627,  1273, -1627,  -557,
    -888, -1627, -1627, -1627, -1627,   315, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627,    83, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627,    97, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1487,  -287,
   -1627, -1627, -1627, -1627, -1627, -1329, -1627, -1627, -1627,  1013,
   -1627,   531, -1627, -1627, -1627,   523, -1627, -1627,  -731, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1336, -1627, -1627, -1627,    -1, -1627, -1627, -1627,
   -1627, -1627,  -314, -1431, -1627,   886, -1627,  -360,   439,  -656,
     527,   228,   -20, -1627, -1627,  1084, -1627, -1627, -1627,   638,
   -1627, -1627, -1627, -1627,   633, -1627, -1627, -1627,   420,   216,
   -1627, -1627, -1627, -1627,  1188,   640, -1627, -1627, -1627,   241,
   -1627, -1627, -1627, -1627,   791,   793, -1627,  -378, -1627,  -507,
    -514,   445,  -495,   441,   442, -1627, -1627, -1627,   966, -1627,
   -1627, -1627,  -679,  -223, -1627, -1627, -1627,    14,   444, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,    44, -1627,
   -1627, -1627, -1627,  -704, -1627, -1491,  -438, -1627, -1627, -1627,
   -1627, -1627,   748,   401, -1627,    53, -1627,  -171, -1627,  -601,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627,  -130, -1627, -1627, -1627, -1627,
   -1627, -1627,  1175, -1627,   575, -1627,  -643,  -647, -1627,  -375,
    -442,    23, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627,   899, -1627,   905, -1627,   896,   839,   465, -1020,
    -837, -1627, -1627, -1627,   224,   223,    34,   459, -1627, -1627,
   -1627,    58, -1627, -1277, -1627,  -168,    50,   230,    21, -1627,
   -1627, -1627, -1627,  -280, -1480, -1627,  -284,  -745, -1627, -1627,
   -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627,   699, -1627, -1627, -1627, -1283,  -865,    10,
   -1627, -1626, -1451,  -192, -1627,  -296, -1627, -1627, -1627, -1052,
    -140, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627, -1627,
   -1627, -1627, -1627,   325, -1627, -1627, -1627,   495, -1627, -1627,
     493, -1627, -1627, -1627, -1627, -1627,   582,   336,    18, -1627,
     782,   783,   309,   412,  -320, -1627, -1627,   768, -1627, -1627,
     367,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -319
static const yytype_int16 yytable[] =
{
     362,   382,   362,   569,   362,   317,   362,   806,   597,   833,
     541,   835,   879,   719,   838,   647,   715,  1507,   362,   397,
     652,  1276,   855,   654,   911,  1558,   373,   657,  1527,  1596,
     853,   415,   396,   720,   721,   722,   723,   878,  1083,  1624,
    1643,  1397,   861,   574,   575,  1568,   484,  1107,   854,  1543,
     565,    18,  1746,   532,   461,   523,   487,   408,  1265,   875,
     480,  1648,  1152,    18,  1156,  1418,   565,   876,  1283,   648,
     854,   875,   565,   625,  1661,   908,    26,    27,    28,   876,
    1559,   889,   890,   658,  1519,  1745,   565,    11,    26,    27,
      28,  1626,  1484,  1520,   525,   526,  1190,   525,   526,   626,
    1398,   525,   526,  1359,  1361,  1626,  1197,   658,   528,   309,
     565,  1206,  1175,  1208,  1462,  1211,   854,  1212,  1332,  1217,
    1332,  1220,  1054,  1223,  1022,   405,  1463,  1229,   591,  1231,
     700,   701,   702,   703,   704,   705,  1191,   707,   708,   709,
     710,   711,   712,   713,   714,  1176,  1347,  1348,   433,    88,
    1759,  1783,   474,   854,  1233,  1262,   434,  1036,  1032,   803,
    1192,    88,  1623,  1520,   554,  1354,  1356,  1177,  1360,   428,
    1627,   879,   529,   879,   310,   555,  1357,   429,  1106,   482,
    1349,   434,  1266,   412,  1627,  1125,  1126,  1127,  1179,  1128,
    1129,  1130,   592,  1762,   854,  1018,   878,  1711,   878,   524,
    1131,  1132,  1749,   659,  1133,  1134,   752,  1062,    88,   423,
     533,  1322,   606,   485,  1110,  1111,  1112,   836,  1654,  1485,
    1713,  1744,  1747,   488,   483,  1760,  1755,   660,   627,   527,
     424,  1355,  1521,  1633,   566,   850,   362,   435,   425,   362,
    1665,  1666,  1667,  1668,   462,  1544,  1545,  1351,  1334,  1284,
     542,  1771,   421,  1628,  1388,  1600,   566,   868,  1390,  1322,
     649,  1419,   435,  1420,   530,   531,   552,  1763,   553,   877,
     566,   789,   790,   791,   792,    11,  1560,  1561,  1617,  1618,
    1619,   877,  1662,  1663,   593,   594,   673,   547,   892,   892,
     548,  1350,  1758,  1777,   566,  1351,  1289,  1696,  1413,  1399,
    1400,  1401,    14,  1323,  1324,    15,    16,  1224,  1534,  1474,
    1430,  1768,   854,  1765,  1567,  1290,   854,  1239,   674,   426,
    1537,  1291,  1113,    26,    27,    28,   854,  1198,   874,   476,
    1114,  1115,  1116,  1117,  1118,   549,   550,   477,  1554,   673,
     583,   584,  1643,  1699,  1529,   666,   413,   808,  1697,   672,
     854,  1323,  1324,  1225,  1213,   551,   382,   382,   382,   362,
    1199,  1301,   745,  1226,  1302,  1200,  1201,  1303,  1304,  1305,
    1306,  1704,   809,  1119,   361,   416,   362,  1214,   407,  1752,
    1215,  1216,   879,  1120,  1221,  1769,  1244,  1530,  1766,   879,
    1268,   879,   422,   397,  1563,  1121,    88,  1292,  1293,  1294,
    1475,  1476,  1295,  1296,   430,  1209,   396,   878,  1269,    18,
     362,  1222,   866,  1734,   878,   424,   878,   362,   478,   585,
     586,   587,   588,   589,   590,   540,   362,  1307,  1210,   867,
     362,   362,   746,   747,   619,  1339,  1218,  1249,  1250,   471,
     748,  1597,  1340,  1615,   493,  1147,   362,   619,   643,  1188,
     431,   362,  1189,  1773,   362,  1148,  1149,  1772,   362,  1219,
     813,  1308,   679,  1143,   472,   473,   681,  1150,  1151,   362,
     687,    18,   691,   692,   693,  1144,   493,   694,  1616,  1309,
    1310,   432,   362,  1311,   362,  1145,   643,  1086,  1341,  1342,
    -318,  1552,   816,  1380,  1574,  1557,   437,  1040,  1389,  1579,
    1625,   441,  1587,  1391,  1575,  1576,   438,  1394,  1110,  1111,
    1112,   937,  1588,   938,  1041,  1635,  1577,  1578,  1638,  1639,
     939,   940,  1584,   452,  1589,  1590,   941,   493,    26,    27,
      28,   742,  1153,   602,   742,  1655,    18,   442,  1591,   942,
     943,   944,   362,   821,   875,   603,  1593,   443,  1203,   493,
    1595,   773,   876,   752,  1154,  1155,   604,  1436,   362,   761,
     767,    26,    27,    28,   753,   826,   382,   444,   762,  -318,
    1204,  1205,   445,   382,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     493,   775,   446,   362,   362,  1477,   879,  1598,   778,  1469,
    1470,    88,   439,   493,   493,   447,   827,  1700,  1137,  1138,
     440,   397,   895,   793,  1483,  1738,  1113,  1739,  1486,   831,
     832,   878,   493,   493,  1114,  1115,  1116,  1117,  1118,   830,
    1139,  1140,  1416,  1141,    88,  -318,  1714,  1715,   844,   840,
     841,   493,   811,  1432,  1433,   543,   493,   493,   362,   614,
     812,   544,  1441,   620,   842,   541,  1445,   624,  1447,  1448,
    1721,  1450,   636,   849,  1453,  1454,   362,  1119,   645,   486,
     362,   896,   897,   493,  -318,   859,   869,  1120,   863,   493,
     646,   843,   493,   493,   650,   651,   493,   397,   362,  1121,
     493,   860,   493,   493,   864,   894,   493,   661,   662,   663,
     396,   493,  1045,  1756,   448,   671,  1046,   847,  1059,  1060,
     851,   898,  1270,  1423,   493,   848,   449,  1282,   852,   899,
    1424,   362,   362,   362,   362,  1427,   902,   903,   904,   898,
    1343,   450,  1424,   579,   409,   410,  1344,   905,   397,   397,
     397,   397,     1,     2,     3,     4,     5,     6,     7,     8,
       9,   396,   396,   534,   535,   494,   495,   900,   496,   497,
     498,  1601,   499,   500,   362,   901,   451,  1030,   733,  1108,
     382,   453,  1247,   736,   737,  1031,   456,  1109,   739,  1506,
    1248,   397,  1465,  1492,   613,  1505,   457,  1684,  1492,  1685,
    1466,  1493,  1501,  1492,   396,  1026,  1494,   362,  1731,  1731,
     635,  1693,  1406,  1634,   362,  1736,  1732,  1733,  1047,  1531,
    1532,   851,  1569,  1737,   397,   458,  1479,  1571,  1570,  1741,
     407,  1044,  1482,  1572,  1603,   407,   465,   396,   407,  1087,
    1088,  1089,   407,   609,   610,  1491,  1065,  1066,  1067,  1687,
     362,  1688,  1070,   687,  1513,  1514,  1515,  1516,  1613,   815,
     764,   765,   362,   869,   525,   526,   685,  1044,   690,   469,
     362,  1381,  1382,  1383,   470,   823,  1679,   583,   584,  1079,
    1080,  1604,  1605,  1157,  1617,  1618,  1619,   480,   742,   508,
     509,   510,   511,   512,   513,   492,  1644,   489,  1038,  1039,
     514,   490,   845,   846,   783,   784,   785,   786,   787,   788,
    1123,  1124,   506,   515,  1158,   362,  1159,  1160,  1161,  1162,
    1163,  1164,  1165,  1135,  1136,   491,   738,   493,  1460,   979,
     980,  1166,  1167,  1168,  1169,  1170,  1171,  1227,  1228,   538,
    1670,   507,   770,  1329,  1330,   545,  1172,  1173,  1174,   536,
    1678,   539,  1674,  1335,  1336,  1496,  1497,  1720,  1337,  1338,
    1722,  1183,  1410,  1503,  1504,   546,  1508,  1509,  1517,  1518,
    1524,  1525,  1636,  1637,  1640,  1641,   537,   801,   314,   315,
     717,   718,   571,   724,   725,   556,   726,   727,   561,   516,
     517,   518,   519,   520,   521,   418,   419,   734,   735,   573,
    1757,   580,  1710,  1774,  1775,   781,   782,   581,   595,   596,
     582,   424,   428,  1240,   433,  1690,   439,  1712,   598,   612,
     599,  1232,   362,  1754,   476,  1631,  1632,   623,   600,   601,
     621,   637,   407,   362,   630,   631,   362,   644,  1253,   653,
     655,  1257,  1258,  1259,   656,   664,   665,   677,  1267,   680,
     407,   522,  1607,   397,   695,   696,  1610,   697,   729,  1272,
    1784,  1743,   728,   716,   730,   731,   396,  1751,   869,  1742,
     751,   776,   407,   756,   771,  -233,   768,   777,  1761,  1764,
    1767,  1770,   795,   796,   797,   805,   804,   828,   817,   818,
     819,   820,  1064,   824,  1326,  1327,   807,   825,  1776,  1778,
     856,   854,   857,  -233,   858,   862,   873,   908,   912,  1019,
     865,  -233,  1781,  1021,  1084,  1027,   362,  1029,  1028,  1033,
    1051,   362,  1650,  1049,   362,  1052,  1042,  1058,  1054,  1703,
     906,   907,  1023,   673,  1072,  1048,  1069,  1785,  1073,  1078,
    1053,  1093,   362,   362,  1095,  1099,  1091,  1096,   362,  1097,
    1101,  1104,  1178,   362,  1105,  1183,  1194,   362,  1182,  1245,
     397,  1187,  1196,  1207,  1230,   397,  1234,  1242,  1254,  1246,
     397,  1252,  1260,   396,   397,  1271,  1273,  1281,   396,  1277,
     362,  1279,  1285,   396,  1649,  1286,  1287,   396,  1321,  1328,
    1362,  1332,  1300,  1379,  1385,  1363,  1403,   397,  1409,  1434,
    1407,  1461,  1255,  1468,  1472,  1480,  1481,   362,  1473,  1489,
     396,  1495,  1471,  1502,  1498,  1500,  1535,    88,  1488,  1533,
    1540,  1541,  1536,  1523,   397,  1550,  1555,  1564,  1549,  1553,
    1565,  1566,  1567,  1630,  1622,  1582,   685,   396,  1602,  1609,
    1538,  1652,  1647,  1464,  1077,   382,  1656,  1651,  1539,   362,
     362,  1657,  1669,  1681,  1680,  1548,  1487,   362,  1691,  1585,
    1692,  1490,  1594,   362,   362,  1708,   397,   397,   362,  1716,
    1467,  1653,  1717,  1706,  1728,  1520,   362,  1735,  1780,   396,
     396,   397,  1146,  1782,  1405,   397,   313,  1181,  1428,   635,
    1664,  1411,   913,  1705,   396,   909,   607,   933,   396,   837,
    1063,   834,   501,  1082,  1278,   468,  1264,   698,   839,  1103,
     699,   362,   750,  1606,  1478,  -233,   893,   475,  -233,  -233,
    -233,  -233,  1061,  -233,  -233,   670,  -233,  1288,  1299,  -233,
    -233,  -233,  -233,  -233,  -233,  -233,  -233,  -233,   564,   628,
    -233,  -233,  -233,   640,  1512,   629,  1085,  -233,  -233,  1621,
    1499,  1331,  1528,   362,  1695,  1702,  1511,   829,  1551,   362,
    1646,  1709,  1614,   362,  1068,  1243,  1071,  1025,   362,  -233,
    -233,  1241,  -233,   779,   794,   780,     0,   362,  1723,     0,
       0,  -233,     0,     0,  -233,  -233,     0,     0,     0,  1392,
       0,     0,     0,  1395,     0,     0,   635,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   801,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1562,
    1408,     0,     0,     0,     0,  1414,  1415,     0,  1379,     0,
    1422,     0,     0,     0,     0,     0,     0,  1431,     0,     0,
       0,     0,     0,  1437,     0,  1439,     0,     0,  1442,     0,
       0,     0,  1446,     0,     0,     0,     0,  1451,     0,     0,
       0,     0,     0,     0,  1456,   362,   362,     0,  1458,     0,
       0,  1608,     0,     0,   362,  1611,     0,     0,  1612,     0,
       0,     0,     0,   362,     0,     0,     0,   362,     0,     0,
     635,   397,     0,     0,     0,  1346,     0,     0,  1353,     0,
       0,     0,     0,     0,   396,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   960,     0,     0,   961,   962,
     963,   964,     0,   965,     0,     0,   966,     0,     0,   967,
     968,   969,   970,   971,   972,   973,   974,   975,     0,     0,
     976,   977,   978,     0,     0,     0,     0,     0,     0,     0,
       0,   362,   362,   362,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   362,   362,     0,   397,
     362,     0,   362,   362,   362,   362,     0,     0,     0,     0,
     362,   310,   396,     0,   979,   980,     0,     0,     0,     0,
       0,     0,   362,     0,     0,     0,     0,   397,     0,     0,
       0,     0,  1379,  1682,     0,   382,     0,     0,     0,   397,
     396,     0,     0,     0,     0,     0,     0,  1658,  1659,     0,
       0,  1379,   396,  1379,  1379,  1379,  1379,     0,     0,     0,
    1683,   407,     0,     0,     0,     0,     0,   407,  1393,     0,
       0,   961,   962,   963,   964,     0,   965,  1583,     0,   966,
     407,     0,   967,   968,   969,   970,   971,   972,   973,   974,
     975,     0,     0,   976,   977,   978,     0,     0,     0,     0,
       0,     0,  1396,     0,     0,   961,   962,   963,   964,     0,
     965,  1729,  1730,   966,     0,  1526,   967,   968,   969,   970,
     971,   972,   973,   974,   975,     0,     0,   976,   977,   978,
       0,     0,     0,     0,   310,     0,     0,   979,   980,   362,
       0,   362,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   397,  1542,     0,     0,
       0,     0,     0,   635,     0,     0,  1779,   635,   310,   396,
       0,   979,   980,     0,     0,     0,     0,     0,     0,  1417,
       0,     0,   961,   962,   963,   964,     0,   965,     0,     0,
     966,     0,  1379,   967,   968,   969,   970,   971,   972,   973,
     974,   975,     0,     0,   976,   977,   978,  1429,     0,     0,
     961,   962,   963,   964,     0,   965,     0,     0,   966,     0,
       0,   967,   968,   969,   970,   971,   972,   973,   974,   975,
       0,     0,   976,   977,   978,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   310,  1671,     0,   979,   980,
       0,     0,     0,     0,     0,     0,     0,     0,  1675,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   635,
    1599,     0,     0,   310,     0,     0,   979,   980,  1438,     0,
       0,   961,   962,   963,   964,     0,   965,   407,     0,   966,
       0,   407,   967,   968,   969,   970,   971,   972,   973,   974,
     975,     0,     0,   976,   977,   978,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1718,     0,     0,
       0,     0,     0,     0,   310,     0,     0,   979,   980,     0,
       0,     0,     0,     0,     0,     0,     0,   407,   318,   319,
     320,   321,   322,   323,   324,   325,   326,    38,    39,    40,
      41,    42,    43,    44,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,   339,    77,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    84,     0,     0,
       0,     0,     0,   340,   341,    87,     0,     0,     0,    89,
       0,     0,     0,     0,    92,   342,    94,   343,    96,     0,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   344,
     345,   108,   346,   110,     0,   111,   347,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     348,   127,   128,   129,   130,   131,   349,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,     0,
     145,   146,   147,     0,   350,   149,     0,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   351,   176,   177,   352,   179,   180,   181,   182,   183,
     353,   185,   354,   187,   188,   189,   190,   191,   192,   355,
     356,   195,   357,   358,   198,   199,   200,   201,   202,   203,
     961,   962,   963,   964,     0,   965,     0,     0,   966,     0,
       0,   967,   968,   969,   970,   971,   972,   973,   974,   975,
       0,     0,   976,   977,   978,     0,     0,    11,     0,    12,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,   740,    14,     0,     0,    15,    16,     0,    17,     0,
      18,     0,    19,    20,    21,     0,    22,    23,    24,   741,
       0,     0,     0,   310,     0,     0,   979,   980,     0,     0,
       0,  1074,    25,  1075,     0,    26,    27,    28,    29,    30,
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
      11,     0,    12,     0,     0,     0,     0,     0,     0,     0,
       0,    13,     0,     0,   740,    14,     0,     0,    15,    16,
       0,    17,     0,    18,     0,    19,    20,    21,     0,    22,
      23,    24,   749,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,    26,    27,
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
      21,     0,    22,    23,    24,   420,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
       0,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,     0,     0,     0,     0,     0,    85,
      86,    87,     0,     0,    88,    89,    90,    91,     0,     0,
      92,    93,    94,    95,    96,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
       0,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,     0,   145,   146,   147,     0,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,    11,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,    13,     0,     0,
       0,    14,     0,     0,    15,    16,     0,    17,     0,    18,
       0,    19,    20,    21,     0,    22,    23,    24,     0,     0,
       0,     0,     0,     0,     0,     0,   686,     0,     0,     0,
       0,    25,     0,     0,    26,    27,    28,    29,    30,    31,
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
      24,     0,     0,     0,     0,     0,     0,     0,     0,   732,
       0,     0,     0,     0,    25,     0,     0,    26,    27,    28,
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
     202,   203,    11,     0,    12,     0,     0,     0,     0,     0,
       0,     0,     0,    13,     0,     0,     0,    14,     0,     0,
      15,    16,     0,    17,     0,    18,     0,    19,    20,    21,
       0,    22,    23,    24,     0,     0,     0,     0,     0,     0,
       0,     0,   814,     0,     0,     0,     0,    25,     0,     0,
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
       0,     0,     0,     0,     0,   822,     0,     0,     0,     0,
      25,     0,     0,    26,    27,    28,    29,    30,    31,    32,
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
     196,   197,   198,   199,   200,   201,   202,   203,    11,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       0,     0,   740,    14,     0,     0,    15,    16,     0,    17,
       0,    18,     0,    19,    20,    21,     0,    22,    23,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,     0,    26,    27,    28,    29,
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
       0,     0,     0,     0,     0,     0,    25,     0,     0,    26,
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
     200,   201,   202,   203,    11,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,    14,
       0,     0,    15,    16,     0,    17,     0,    18,     0,    19,
      20,    21,     0,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
       0,     0,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,   339,    77,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    84,     0,     0,     0,     0,     0,
      85,    86,    87,     0,     0,    88,    89,    90,    91,     0,
       0,    92,   342,    94,   343,    96,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   344,   345,   108,   346,
     110,     0,   111,   347,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,     0,   145,   146,   147,
       0,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   351,   176,
     177,   352,   179,   180,   181,   182,   183,   353,   185,   354,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   357,
     358,   198,   199,   200,   201,   202,   203,    11,     0,    12,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,    14,     0,     0,    15,    16,     0,    17,     0,
      18,     0,    19,    20,    21,     0,    22,    23,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,    26,    27,    28,    29,    30,
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
     136,   137,   138,   914,   140,   141,   142,   143,   144,     0,
     145,   915,   147,     0,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
      11,     0,    12,     0,     0,     0,     0,     0,     0,     0,
       0,    13,     0,     0,     0,    14,     0,     0,    15,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   339,
      77,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,    85,    86,    87,     0,
       0,    88,    89,    90,    91,     0,     0,    92,   342,    94,
     343,    96,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   344,   345,   108,   346,   110,     0,   111,   347,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   348,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,     0,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   351,   176,   177,   352,   179,   180,
     181,   182,   183,   353,   185,   354,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   357,   358,   198,   199,   200,
     201,   202,   203,    12,     0,     0,     0,     0,     0,     0,
       0,     0,  1365,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1366,     0,     0,     0,     0,     0,  1367,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1368,   385,    31,    32,    33,   386,    35,    36,
     387,    38,    39,    40,    41,    42,    43,    44,  1369,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
      57,    58,    59,    60,    61,    62,    63,     0,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     339,    77,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    84,     0,     0,     0,     0,     0,   340,   341,    87,
       0,     0,     0,    89,    90,    91,     0,     0,    92,   342,
      94,   343,    96,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   344,   345,   108,   346,   110,     0,   111,
     347,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   348,   127,   128,   129,   130,   131,
     349,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,     0,   145,   146,   147,     0,   390,   149,
       0,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   351,   176,   177,   352,   179,
     180,   181,   182,   183,   353,   185,   354,   187,   188,  1370,
    1371,   191,   192,   355,   356,   195,   357,   358,   198,   199,
     200,   201,   202,   203,    12,     0,     0,     0,     0,     0,
       0,     0,     0,  1365,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1368,   385,    31,    32,    33,   386,    35,
      36,   387,    38,    39,    40,    41,    42,    43,    44,  1369,
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
     199,   200,   201,   202,   203,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   384,   385,    31,    32,    33,   386,
      35,    36,   387,    38,    39,    40,    41,    42,    43,    44,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    57,    58,    59,    60,    61,    62,    63,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,   339,    77,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,     0,     0,     0,     0,     0,   340,
     341,    87,     0,     0,     0,    89,    90,    91,     0,     0,
      92,   342,    94,   343,    96,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   344,   345,   108,   346,   110,
       0,   111,   347,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   348,   127,   128,   129,
     130,   131,   349,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,     0,   145,   146,   147,     0,
     390,   149,     0,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   351,   176,   177,
     352,   179,   180,   181,   182,   183,   353,   185,   354,   187,
     188,   189,   190,   191,   192,   355,   356,   195,   357,   358,
     198,   199,   200,   201,   202,   203,  1034,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   383,  1035,     0,     0,     0,
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
     358,   198,   199,   200,   201,   202,   203,   615,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   616,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   318,   319,   320,   321,
     322,   323,   324,   325,   326,    38,    39,    40,    41,    42,
      43,    44,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    57,    58,    59,    60,    61,    62,
      63,     0,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,   339,    77,     0,     0,     0,    78,
      79,    80,    81,    82,    83,    84,     0,     0,     0,     0,
       0,   340,   341,    87,     0,     0,     0,    89,     0,     0,
       0,     0,    92,   342,    94,   343,    96,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   344,   345,   108,
     346,   110,     0,   111,   347,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   348,   127,
     128,   129,   130,   131,   349,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,     0,   145,   146,
     147,     0,   350,   149,     0,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   351,
     176,   177,   352,   179,   180,   181,   182,   183,   353,   185,
     354,   187,   188,   189,   190,   191,   192,   355,   356,   195,
     357,   358,   198,   199,   200,   201,   202,   203,   667,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   668,     0,
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
     195,   357,   358,   198,   199,   200,   201,   202,   203,   363,
     364,     0,     0,     0,     0,   365,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   366,
       0,     0,   367,   368,   369,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    43,
      44,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,    57,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,   339,    77,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    84,     0,     0,     0,     0,     0,
     340,   341,    87,     0,     0,   370,    89,     0,     0,     0,
       0,    92,   342,    94,   343,    96,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   344,   345,   108,     0,
     110,     0,   111,   371,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   348,   127,   128,
     129,   130,   131,   349,     0,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,     0,   145,   146,   147,
       0,     0,   149,     0,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   351,   176,
     177,   352,   179,   180,   181,   182,   183,   353,   185,   354,
     187,   188,   189,   190,   191,   192,   355,   356,   195,   357,
     358,   198,   199,   200,   201,   202,   203,   363,   364,     0,
       0,     0,     0,   365,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   366,     0,     0,
     367,   368,   369,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    57,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,   339,    77,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,     0,     0,     0,     0,     0,   340,   341,
      87,     0,     0,   370,    89,     0,     0,     0,     0,    92,
     342,    94,   343,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   344,   345,   108,     0,   110,     0,
     111,     0,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   348,   127,   128,   129,   130,
     131,   349,     0,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,   145,   146,   147,     0,     0,
     149,     0,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   351,   176,   177,   352,
     179,   180,   181,   182,   183,   353,   185,   354,   187,   188,
     189,   190,   191,   192,   355,   356,   195,   357,   358,   198,
     199,   200,   201,   202,   203,   383,     0,     0,     0,     0,
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
     358,   198,   199,   200,   201,   202,   203,   383,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   384,   385,    31,
      32,    33,   386,    35,    36,   387,    38,    39,    40,    41,
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
     127,   128,   129,   130,   131,   349,   389,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,     0,   390,   149,     0,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     351,   176,   177,   352,   179,   180,   181,   182,   183,   353,
     185,   354,   187,   188,   189,   190,   191,   192,   391,   392,
     195,   357,   358,   198,   199,   200,   201,   202,   203,   632,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   318,   319,
     320,   321,   322,   323,   324,   325,   326,    38,    39,    40,
      41,    42,    43,    44,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,   339,    77,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    84,     0,     0,
       0,     0,     0,   340,   341,    87,     0,     0,   633,    89,
       0,     0,     0,     0,    92,   342,    94,   343,    96,     0,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   344,
     345,   108,   346,   110,     0,   111,   347,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     348,   127,   128,   129,   130,   131,   349,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,     0,
     145,   146,   147,     0,   350,   149,     0,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   351,   176,   177,   352,   179,   180,   181,   182,   183,
     353,   185,   354,   187,   188,   189,   190,   191,   192,   355,
     356,   195,   357,   358,   198,   199,   200,   201,   202,   203,
     798,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     203,   802,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     318,   319,   320,   321,   322,   323,   324,   325,   326,    38,
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
     124,   125,   348,   127,   128,   129,   130,   131,   349,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     0,   145,   146,   147,     0,   350,   149,     0,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   351,   176,   177,   352,   179,   180,   181,
     182,   183,   353,   185,   354,   187,   188,   189,   190,   191,
     192,   355,   356,   195,   357,   358,   198,   199,   200,   201,
     202,   203,   682,     0,     0,     0,     0,     0,     0,     0,
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
    1440,     0,     0,   961,   962,   963,   964,     0,   965,     0,
       0,   966,     0,     0,   967,   968,   969,   970,   971,   972,
     973,   974,   975,     0,     0,   976,   977,   978,  1443,     0,
       0,   961,   962,   963,   964,     0,   965,     0,     0,   966,
       0,     0,   967,   968,   969,   970,   971,   972,   973,   974,
     975,     0,     0,   976,   977,   978,     0,  1444,     0,     0,
     961,   962,   963,   964,     0,   965,   310,     0,   966,   979,
     980,   967,   968,   969,   970,   971,   972,   973,   974,   975,
       0,     0,   976,   977,   978,  1449,     0,     0,   961,   962,
     963,   964,     0,   965,   310,     0,   966,   979,   980,   967,
     968,   969,   970,   971,   972,   973,   974,   975,     0,     0,
     976,   977,   978,     0,  1452,     0,     0,   961,   962,   963,
     964,     0,   965,   310,     0,   966,   979,   980,   967,   968,
     969,   970,   971,   972,   973,   974,   975,     0,     0,   976,
     977,   978,  1455,     0,     0,   961,   962,   963,   964,     0,
     965,   310,     0,   966,   979,   980,   967,   968,   969,   970,
     971,   972,   973,   974,   975,     0,     0,   976,   977,   978,
       0,  1457,     0,     0,   961,   962,   963,   964,     0,   965,
     310,     0,   966,   979,   980,   967,   968,   969,   970,   971,
     972,   973,   974,   975,     0,     0,   976,   977,   978,  1459,
       0,     0,   961,   962,   963,   964,     0,   965,   310,     0,
     966,   979,   980,   967,   968,   969,   970,   971,   972,   973,
     974,   975,     0,     0,   976,   977,   978,     0,  1580,     0,
       0,   961,   962,   963,   964,     0,   965,   310,     0,   966,
     979,   980,   967,   968,   969,   970,   971,   972,   973,   974,
     975,     0,     0,   976,   977,   978,  1581,     0,     0,   961,
     962,   963,   964,     0,   965,   310,     0,   966,   979,   980,
     967,   968,   969,   970,   971,   972,   973,   974,   975,     0,
       0,   976,   977,   978,     0,  1586,     0,     0,   961,   962,
     963,   964,     0,   965,   310,     0,   966,   979,   980,   967,
     968,   969,   970,   971,   972,   973,   974,   975,     0,     0,
     976,   977,   978,  1592,     0,     0,   961,   962,   963,   964,
       0,   965,   310,     0,   966,   979,   980,   967,   968,   969,
     970,   971,   972,   973,   974,   975,     0,     0,   976,   977,
     978,     0,  1672,     0,     0,   961,   962,   963,   964,     0,
     965,   310,     0,   966,   979,   980,   967,   968,   969,   970,
     971,   972,   973,   974,   975,     0,     0,   976,   977,   978,
    1673,     0,     0,   961,   962,   963,   964,     0,   965,   310,
       0,   966,   979,   980,   967,   968,   969,   970,   971,   972,
     973,   974,   975,     0,     0,   976,   977,   978,     0,  1676,
       0,     0,   961,   962,   963,   964,     0,   965,   310,     0,
     966,   979,   980,   967,   968,   969,   970,   971,   972,   973,
     974,   975,     0,     0,   976,   977,   978,  1677,     0,     0,
     961,   962,   963,   964,     0,   965,   310,     0,   966,   979,
     980,   967,   968,   969,   970,   971,   972,   973,   974,   975,
       0,     0,   976,   977,   978,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   310,     0,     0,   979,   980,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   310,     0,     0,   979,   980
};

static const yytype_int16 yycheck[] =
{
       7,     8,     9,   317,    11,     6,    13,   608,   383,   652,
     233,   654,   716,   527,   657,   453,   523,  1294,    25,     9,
     458,  1073,   678,   461,   755,  1361,     8,   465,  1311,  1460,
     677,    17,     9,   528,   529,   530,   531,   716,   875,  1519,
      43,    71,   685,   363,   364,  1374,    67,   912,    51,   130,
      55,    35,    13,    15,    12,    59,    67,    13,    15,    43,
      43,  1548,   950,    35,   952,   130,    55,    51,    52,    36,
      51,    43,    55,    44,  1565,    53,    60,    61,    62,    51,
     130,   728,   729,    36,    43,  1711,    55,    12,    60,    61,
      62,    43,    12,   122,    37,    38,   984,    37,    38,    70,
     130,    37,    38,  1123,  1124,    43,   994,    36,    14,   256,
      55,   999,   255,  1001,   181,  1003,    51,  1005,   133,  1007,
     133,  1009,   158,  1011,   771,     0,   193,  1015,    14,  1017,
     508,   509,   510,   511,   512,   513,   287,   515,   516,   517,
     518,   519,   520,   521,   522,   288,    76,    77,    43,   133,
      48,  1777,    22,    51,  1019,   191,    51,   804,   801,   601,
     311,   133,   191,   122,    43,   134,   181,   310,   181,    43,
     122,   875,    78,   877,   321,    54,   191,    51,   909,    67,
     110,    51,   139,   137,   122,   916,   917,   918,   123,   920,
     921,   922,    78,    50,    51,   200,   875,  1648,   877,   203,
     931,   932,   183,   156,   935,   936,   184,   850,   133,    22,
     172,   127,   201,   234,    73,    74,    75,   655,  1554,   139,
    1651,  1708,   183,   234,   112,   123,  1717,   156,   199,   169,
      43,   200,   191,   169,   239,   673,   243,   132,    51,   246,
    1569,  1570,  1571,  1572,   202,   326,   327,   250,  1113,  1086,
     236,  1731,    24,   191,  1142,   200,   239,   695,  1146,   127,
     227,   326,   132,   328,   170,   171,   286,   124,   288,   253,
     239,   591,   592,   593,   594,    12,   326,   327,   221,   222,
     223,   253,  1565,  1566,   170,   171,    12,   243,   730,   731,
     246,   246,  1723,  1744,   239,   250,   103,   213,  1186,   329,
     330,   331,    27,   219,   220,    30,    31,   255,  1328,    34,
    1198,    50,    51,    48,    15,   122,    51,  1021,    44,   132,
    1340,   128,   181,    60,    61,    62,    51,   278,   706,    43,
     189,   190,   191,   192,   193,    23,    24,    51,  1358,    12,
      37,    38,    43,  1626,   109,   475,   115,   113,  1625,   479,
      51,   219,   220,   301,   288,    43,   363,   364,   365,   366,
     311,    93,   160,   311,    96,   316,   317,    99,   100,   101,
     102,    44,   138,   232,     7,   113,   383,   311,    11,  1715,
     314,   315,  1086,   242,   288,   124,  1033,   152,   123,  1093,
      26,  1095,    25,   383,    22,   254,   133,   204,   205,   206,
     125,   126,   209,   210,    43,   288,   383,  1086,    44,    35,
     417,   315,   233,  1696,  1093,    43,  1095,   424,   132,   116,
     117,   118,   119,   120,   121,    51,   433,   159,   311,   250,
     437,   438,   230,   231,   424,   146,   288,  1038,  1039,    51,
     238,  1461,   153,  1495,    36,   288,   453,   437,   438,   311,
      43,   458,   314,  1736,   461,   298,   299,  1734,   465,   311,
      52,   193,   482,   288,    76,    77,   486,   310,   311,   476,
     490,    35,   492,   493,   494,   300,    36,   497,  1498,   211,
     212,    43,   489,   215,   491,   310,   476,    51,   199,   200,
      55,  1356,    52,  1140,   288,  1360,    43,    28,  1145,  1387,
    1520,    22,   288,  1150,   298,   299,    43,  1154,    73,    74,
      75,   255,   298,   257,    45,  1535,   310,   311,  1538,  1539,
     264,   265,  1410,    51,   310,   311,   270,    36,    60,    61,
      62,   551,   288,    14,   554,  1555,    35,    22,  1426,   283,
     284,   285,   549,    52,    43,    26,  1434,    22,   288,    36,
    1438,   571,    51,   184,   310,   311,    37,  1204,   565,   286,
     561,    60,    61,    62,   195,    52,   573,    22,   295,   134,
     310,   311,    22,   580,   581,   582,   583,   584,   585,   586,
     587,   588,   589,   590,   591,   592,   593,   594,   595,   596,
      36,   573,    22,   600,   601,  1251,  1300,  1462,   580,  1246,
    1247,   133,    43,    36,    36,    22,    52,  1627,   287,   288,
      51,   601,    25,   595,  1261,   172,   181,   174,  1265,    52,
      52,  1300,    36,    36,   189,   190,   191,   192,   193,   649,
     309,   310,  1189,   312,   133,   200,  1656,  1657,    52,   659,
     660,    36,    36,  1200,  1201,    33,    36,    36,   655,    44,
      44,    39,  1209,   425,    44,   878,  1213,   429,  1215,  1216,
    1680,  1218,   434,    52,  1221,  1222,   673,   232,   440,    67,
     677,    25,    25,    36,   239,    36,   696,   242,    36,    36,
     452,    44,    36,    36,   456,   457,    36,   677,   695,   254,
      36,    52,    36,    36,    52,    52,    36,   469,   470,   471,
     677,    36,    52,    25,    22,   477,    52,    36,    52,    52,
      36,    36,    52,   255,    36,    44,    22,    52,    44,    44,
     262,   728,   729,   730,   731,   255,   746,   747,   748,    36,
     179,    22,   262,   366,   130,   131,   185,    44,   728,   729,
     730,   731,     3,     4,     5,     6,     7,     8,     9,    10,
      11,   728,   729,   173,   174,   139,   140,   228,   142,   143,
     144,  1465,   146,   147,   771,   236,    22,    36,   540,   188,
     777,    12,    36,   545,   546,    44,    51,   196,   550,  1293,
      44,   771,    36,    36,   417,  1292,    51,    47,    36,    49,
      44,    44,  1287,    36,   771,   777,    44,   804,    36,    36,
     433,    44,  1177,  1534,   811,    36,    44,    44,   828,  1323,
    1324,    36,    33,    44,   804,    12,  1254,    33,    39,    44,
     453,   811,  1260,    39,  1471,   458,    12,   804,   461,   216,
     217,   218,   465,   113,   114,  1273,   856,   857,   858,    47,
     847,    49,   862,   863,    99,   100,   101,   102,  1491,   621,
     322,   323,   859,   873,    37,    38,   489,   847,   491,    43,
     867,    60,    61,    62,    43,   637,  1597,    37,    38,   148,
     149,  1472,  1473,   255,   221,   222,   223,    43,   898,    16,
      17,    18,    19,    20,    21,   249,  1542,    51,   130,   131,
      27,    51,   664,   665,   585,   586,   587,   588,   589,   590,
     197,   198,   164,    40,   286,   912,   288,   289,   290,   291,
     292,   293,   294,   296,   297,   242,   549,    36,  1232,   324,
     325,   303,   304,   305,   306,   307,   308,   301,   302,   168,
    1577,   165,   565,   179,   180,    24,   318,   319,   320,   166,
    1596,   176,  1589,   179,   180,   151,   152,  1678,   128,   129,
    1681,   267,   268,   107,   108,    24,   224,   225,    94,    95,
      94,    95,   151,   152,   186,   187,   177,   600,     4,     5,
     525,   526,    58,   532,   533,   194,   534,   535,   188,   116,
     117,   118,   119,   120,   121,    19,    20,   543,   544,    56,
    1721,    43,  1648,  1738,  1739,   583,   584,   164,    24,    43,
     165,    43,    43,  1023,    43,  1606,    43,  1650,    43,    32,
      43,  1018,  1019,  1717,    43,  1529,  1530,    44,    43,    43,
      51,    51,   655,  1030,    44,    44,  1033,    44,  1048,    36,
      12,  1051,  1052,  1053,    36,    51,    51,   160,  1058,   167,
     673,   178,  1480,  1033,    12,   145,  1484,   146,   160,  1069,
    1781,  1707,   167,    71,   160,   160,  1033,  1713,  1078,  1706,
      60,    44,   695,   198,   160,    15,   198,    36,  1724,  1725,
    1726,  1727,    44,    44,    44,   113,    43,    13,    44,    44,
      44,    44,   854,    44,  1104,  1105,   114,    44,  1744,  1745,
     233,    51,    67,    43,   160,    13,   145,    53,   181,   181,
     233,    51,  1758,    43,   876,    44,  1113,    44,    25,    36,
      13,  1118,  1550,   122,  1121,    13,   138,   162,   158,  1633,
     133,   133,   143,    12,    43,   139,    13,  1783,    43,    36,
     141,   251,  1139,  1140,   252,   207,    98,    91,  1145,    92,
      26,   238,   255,  1150,   238,   267,   288,  1154,   311,    44,
    1140,   313,   255,   311,   311,  1145,   188,   162,    12,   160,
    1150,    44,    12,  1140,  1154,   233,    12,    44,  1145,   233,
    1177,   150,   105,  1150,  1549,   221,   104,  1154,    92,    40,
     297,   133,   141,  1139,   264,   296,   130,  1177,   313,   279,
     255,    40,   202,    44,    46,    12,   141,  1204,    46,    44,
    1177,    43,   160,   104,   153,    52,    40,   133,   163,   208,
      36,   133,   150,   221,  1204,    12,   122,    22,   160,   199,
      43,    43,    15,   133,   221,   130,   859,  1204,   163,   160,
     181,    40,    36,  1234,   867,  1242,    36,  1551,   181,  1246,
    1247,    40,    24,   133,    40,   243,  1266,  1254,   139,   255,
      13,  1271,   255,  1260,  1261,   243,  1246,  1247,  1265,    44,
    1242,   181,    36,   160,    29,   122,  1273,   214,    44,  1246,
    1247,  1261,   948,   214,  1174,  1265,     3,   962,  1195,   912,
    1567,  1184,   759,  1643,  1261,   754,   400,   760,  1265,   656,
     851,   653,   208,   873,  1078,   107,  1055,   506,   658,   898,
     507,  1308,   554,  1474,  1251,   255,   731,   132,   258,   259,
     260,   261,   847,   263,   264,   476,   266,  1093,  1095,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   315,   430,
     280,   281,   282,   437,  1300,   430,   877,   287,   288,  1507,
    1282,  1111,  1321,  1350,  1624,  1629,  1296,   648,  1355,  1356,
    1542,  1647,  1492,  1360,   859,  1030,   863,   775,  1365,   309,
     310,  1025,   312,   581,   596,   582,    -1,  1374,  1682,    -1,
      -1,   321,    -1,    -1,   324,   325,    -1,    -1,    -1,  1151,
      -1,    -1,    -1,  1155,    -1,    -1,  1019,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1030,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1365,
    1182,    -1,    -1,    -1,    -1,  1187,  1188,    -1,  1374,    -1,
    1192,    -1,    -1,    -1,    -1,    -1,    -1,  1199,    -1,    -1,
      -1,    -1,    -1,  1205,    -1,  1207,    -1,    -1,  1210,    -1,
      -1,    -1,  1214,    -1,    -1,    -1,    -1,  1219,    -1,    -1,
      -1,    -1,    -1,    -1,  1226,  1462,  1463,    -1,  1230,    -1,
      -1,  1481,    -1,    -1,  1471,  1485,    -1,    -1,  1488,    -1,
      -1,    -1,    -1,  1480,    -1,    -1,    -1,  1484,    -1,    -1,
    1113,  1471,    -1,    -1,    -1,  1118,    -1,    -1,  1121,    -1,
      -1,    -1,    -1,    -1,  1471,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,   259,
     260,   261,    -1,   263,    -1,    -1,   266,    -1,    -1,   269,
     270,   271,   272,   273,   274,   275,   276,   277,    -1,    -1,
     280,   281,   282,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1548,  1549,  1550,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1563,  1564,    -1,  1549,
    1567,    -1,  1569,  1570,  1571,  1572,    -1,    -1,    -1,    -1,
    1577,   321,  1549,    -1,   324,   325,    -1,    -1,    -1,    -1,
      -1,    -1,  1589,    -1,    -1,    -1,    -1,  1577,    -1,    -1,
      -1,    -1,  1548,  1600,    -1,  1602,    -1,    -1,    -1,  1589,
    1577,    -1,    -1,    -1,    -1,    -1,    -1,  1563,  1564,    -1,
      -1,  1567,  1589,  1569,  1570,  1571,  1572,    -1,    -1,    -1,
    1602,  1254,    -1,    -1,    -1,    -1,    -1,  1260,   255,    -1,
      -1,   258,   259,   260,   261,    -1,   263,  1409,    -1,   266,
    1273,    -1,   269,   270,   271,   272,   273,   274,   275,   276,
     277,    -1,    -1,   280,   281,   282,    -1,    -1,    -1,    -1,
      -1,    -1,   255,    -1,    -1,   258,   259,   260,   261,    -1,
     263,  1691,  1692,   266,    -1,  1308,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    -1,    -1,   280,   281,   282,
      -1,    -1,    -1,    -1,   321,    -1,    -1,   324,   325,  1706,
      -1,  1708,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1706,  1350,    -1,    -1,
      -1,    -1,    -1,  1356,    -1,    -1,  1746,  1360,   321,  1706,
      -1,   324,   325,    -1,    -1,    -1,    -1,    -1,    -1,   255,
      -1,    -1,   258,   259,   260,   261,    -1,   263,    -1,    -1,
     266,    -1,  1708,   269,   270,   271,   272,   273,   274,   275,
     276,   277,    -1,    -1,   280,   281,   282,   255,    -1,    -1,
     258,   259,   260,   261,    -1,   263,    -1,    -1,   266,    -1,
      -1,   269,   270,   271,   272,   273,   274,   275,   276,   277,
      -1,    -1,   280,   281,   282,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   321,  1578,    -1,   324,   325,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1590,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1462,
    1463,    -1,    -1,   321,    -1,    -1,   324,   325,   255,    -1,
      -1,   258,   259,   260,   261,    -1,   263,  1480,    -1,   266,
      -1,  1484,   269,   270,   271,   272,   273,   274,   275,   276,
     277,    -1,    -1,   280,   281,   282,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1669,    -1,    -1,
      -1,    -1,    -1,    -1,   321,    -1,    -1,   324,   325,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1550,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    -1,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,   116,   117,   118,   119,   120,   121,   122,    -1,    -1,
      -1,    -1,    -1,   128,   129,   130,    -1,    -1,    -1,   134,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,    -1,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,    -1,
     195,   196,   197,    -1,   199,   200,    -1,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     258,   259,   260,   261,    -1,   263,    -1,    -1,   266,    -1,
      -1,   269,   270,   271,   272,   273,   274,   275,   276,   277,
      -1,    -1,   280,   281,   282,    -1,    -1,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    -1,    33,    -1,
      35,    -1,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    -1,    -1,   321,    -1,    -1,   324,   325,    -1,    -1,
      -1,   326,    57,   328,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    -1,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,   116,   117,   118,   119,   120,   121,   122,    -1,    -1,
      -1,    -1,    -1,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,    -1,    -1,   139,   140,   141,   142,   143,    -1,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,    -1,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,    -1,
     195,   196,   197,    -1,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,
      -1,    33,    -1,    35,    -1,    37,    38,    39,    -1,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    -1,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,    -1,    -1,    -1,   116,   117,   118,   119,   120,   121,
     122,    -1,    -1,    -1,    -1,    -1,   128,   129,   130,    -1,
      -1,   133,   134,   135,   136,    -1,    -1,   139,   140,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,    -1,   195,   196,   197,    -1,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,
      -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    -1,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,   128,
     129,   130,    -1,    -1,   133,   134,   135,   136,    -1,    -1,
     139,   140,   141,   142,   143,    -1,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
      -1,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,    -1,   195,   196,   197,    -1,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,
      -1,    37,    38,    39,    -1,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    -1,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    -1,    -1,    -1,
     116,   117,   118,   119,   120,   121,   122,    -1,    -1,    -1,
      -1,    -1,   128,   129,   130,    -1,    -1,   133,   134,   135,
     136,    -1,    -1,   139,   140,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,    -1,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,    -1,   195,
     196,   197,    -1,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,
      33,    -1,    35,    -1,    37,    38,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    -1,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      -1,    -1,    -1,   116,   117,   118,   119,   120,   121,   122,
      -1,    -1,    -1,    -1,    -1,   128,   129,   130,    -1,    -1,
     133,   134,   135,   136,    -1,    -1,   139,   140,   141,   142,
     143,    -1,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,    -1,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,    -1,   195,   196,   197,    -1,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,
      30,    31,    -1,    33,    -1,    35,    -1,    37,    38,    39,
      -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    -1,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,   116,   117,   118,   119,
     120,   121,   122,    -1,    -1,    -1,    -1,    -1,   128,   129,
     130,    -1,    -1,   133,   134,   135,   136,    -1,    -1,   139,
     140,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,    -1,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,    -1,   195,   196,   197,    -1,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,
      37,    38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    -1,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,    -1,    -1,   116,
     117,   118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,
      -1,   128,   129,   130,    -1,    -1,   133,   134,   135,   136,
      -1,    -1,   139,   140,   141,   142,   143,    -1,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,    -1,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,    -1,   195,   196,
     197,    -1,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    26,    27,    -1,    -1,    30,    31,    -1,    33,
      -1,    35,    -1,    37,    38,    39,    -1,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    -1,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,    -1,   128,   129,   130,    -1,    -1,   133,
     134,   135,   136,    -1,    -1,   139,   140,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
      -1,   195,   196,   197,    -1,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    30,
      31,    -1,    33,    -1,    35,    -1,    37,    38,    39,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,    -1,    -1,    -1,   116,   117,   118,   119,   120,
     121,   122,    -1,    -1,    -1,    -1,    -1,   128,   129,   130,
      -1,    -1,   133,   134,   135,   136,    -1,    -1,   139,   140,
     141,   142,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,    -1,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,    -1,   195,   196,   197,    -1,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,
      38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      -1,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    -1,    -1,    -1,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,
     128,   129,   130,    -1,    -1,   133,   134,   135,   136,    -1,
      -1,   139,   140,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,    -1,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,    -1,   195,   196,   197,
      -1,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    30,    31,    -1,    33,    -1,
      35,    -1,    37,    38,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    -1,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,   116,   117,   118,   119,   120,   121,   122,    -1,    -1,
      -1,    -1,    -1,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,    -1,    -1,   139,   140,   141,   142,   143,    -1,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,    -1,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,    -1,
     195,   196,   197,    -1,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    -1,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,    -1,    -1,    -1,   116,   117,   118,   119,   120,   121,
     122,    -1,    -1,    -1,    -1,    -1,   128,   129,   130,    -1,
      -1,   133,   134,   135,   136,    -1,    -1,   139,   140,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,    -1,   195,   196,   197,    -1,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,    -1,    -1,    -1,   116,   117,   118,   119,   120,
     121,   122,    -1,    -1,    -1,    -1,    -1,   128,   129,   130,
      -1,    -1,    -1,   134,   135,   136,    -1,    -1,   139,   140,
     141,   142,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,    -1,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,    -1,   195,   196,   197,    -1,   199,   200,
      -1,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    -1,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,   116,   117,   118,   119,
     120,   121,   122,    -1,    -1,    -1,    -1,    -1,   128,   129,
     130,    -1,    -1,    -1,   134,   135,   136,    -1,    -1,   139,
     140,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,    -1,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,    -1,   195,   196,   197,    -1,   199,
     200,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    -1,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,   128,
     129,   130,    -1,    -1,    -1,   134,   135,   136,    -1,    -1,
     139,   140,   141,   142,   143,    -1,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
      -1,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,    -1,   195,   196,   197,    -1,
     199,   200,    -1,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      -1,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    -1,    -1,    -1,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,
     128,   129,   130,    -1,    -1,    -1,   134,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,    -1,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,    -1,   195,   196,   197,
      -1,   199,   200,    -1,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    -1,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,    -1,    -1,   116,
     117,   118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,
      -1,   128,   129,   130,    -1,    -1,    -1,   134,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,   143,    -1,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,    -1,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,    -1,   195,   196,
     197,    -1,   199,   200,    -1,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    -1,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    -1,    -1,    -1,
     116,   117,   118,   119,   120,   121,   122,    -1,    -1,    -1,
      -1,    -1,   128,   129,   130,    -1,    -1,    -1,   134,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,    -1,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,    -1,   195,
     196,   197,    -1,   199,   200,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,    37,
      38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      -1,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    -1,    -1,    -1,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,
     128,   129,   130,    -1,    -1,   133,   134,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,    -1,
     158,    -1,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,    -1,   195,   196,   197,
      -1,    -1,   200,    -1,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,    37,    38,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    -1,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,   116,   117,   118,   119,
     120,   121,   122,    -1,    -1,    -1,    -1,    -1,   128,   129,
     130,    -1,    -1,   133,   134,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    -1,   158,    -1,
     160,    -1,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,    -1,   195,   196,   197,    -1,    -1,
     200,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      -1,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    -1,    -1,    -1,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,
     128,   129,   130,    -1,    -1,    -1,   134,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,    -1,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,    -1,   195,   196,   197,
      -1,   199,   200,    -1,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    -1,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    -1,    -1,    -1,
     116,   117,   118,   119,   120,   121,   122,    -1,    -1,    -1,
      -1,    -1,   128,   129,   130,    -1,    -1,    -1,   134,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,    -1,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,    -1,   195,
     196,   197,    -1,   199,   200,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    -1,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,   116,   117,   118,   119,   120,   121,   122,    -1,    -1,
      -1,    -1,    -1,   128,   129,   130,    -1,    -1,   133,   134,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,    -1,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,    -1,
     195,   196,   197,    -1,   199,   200,    -1,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    -1,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,    -1,   128,   129,   130,    -1,    -1,    -1,
     134,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
      -1,   195,   196,   197,    -1,   199,   200,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    -1,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      -1,    -1,    -1,   116,   117,   118,   119,   120,   121,   122,
      -1,    -1,    -1,    -1,    -1,   128,   129,   130,    -1,    -1,
      -1,   134,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
     143,    -1,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,    -1,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,    -1,   195,   196,   197,    -1,   199,   200,    -1,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    -1,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,   116,   117,   118,   119,
     120,   121,   122,    -1,    -1,    -1,    -1,    -1,   128,   129,
     130,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,    -1,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,    -1,   195,   196,   197,    -1,   199,
     200,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      -1,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    -1,    -1,    -1,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,
     128,   129,   130,    -1,    -1,    -1,   134,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,    -1,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,    -1,   195,   196,   197,
      -1,   199,   200,    -1,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    -1,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    -1,    -1,    -1,
     116,   117,   118,   119,   120,   121,   122,    -1,    -1,    -1,
      -1,    -1,   128,   129,   130,    -1,    -1,    -1,   134,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,    -1,   160,    -1,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,    -1,   195,
     196,   197,    -1,    -1,   200,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,    -1,
     255,    -1,    -1,   258,   259,   260,   261,    -1,   263,    -1,
      -1,   266,    -1,    -1,   269,   270,   271,   272,   273,   274,
     275,   276,   277,    -1,    -1,   280,   281,   282,   255,    -1,
      -1,   258,   259,   260,   261,    -1,   263,    -1,    -1,   266,
      -1,    -1,   269,   270,   271,   272,   273,   274,   275,   276,
     277,    -1,    -1,   280,   281,   282,    -1,   255,    -1,    -1,
     258,   259,   260,   261,    -1,   263,   321,    -1,   266,   324,
     325,   269,   270,   271,   272,   273,   274,   275,   276,   277,
      -1,    -1,   280,   281,   282,   255,    -1,    -1,   258,   259,
     260,   261,    -1,   263,   321,    -1,   266,   324,   325,   269,
     270,   271,   272,   273,   274,   275,   276,   277,    -1,    -1,
     280,   281,   282,    -1,   255,    -1,    -1,   258,   259,   260,
     261,    -1,   263,   321,    -1,   266,   324,   325,   269,   270,
     271,   272,   273,   274,   275,   276,   277,    -1,    -1,   280,
     281,   282,   255,    -1,    -1,   258,   259,   260,   261,    -1,
     263,   321,    -1,   266,   324,   325,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    -1,    -1,   280,   281,   282,
      -1,   255,    -1,    -1,   258,   259,   260,   261,    -1,   263,
     321,    -1,   266,   324,   325,   269,   270,   271,   272,   273,
     274,   275,   276,   277,    -1,    -1,   280,   281,   282,   255,
      -1,    -1,   258,   259,   260,   261,    -1,   263,   321,    -1,
     266,   324,   325,   269,   270,   271,   272,   273,   274,   275,
     276,   277,    -1,    -1,   280,   281,   282,    -1,   255,    -1,
      -1,   258,   259,   260,   261,    -1,   263,   321,    -1,   266,
     324,   325,   269,   270,   271,   272,   273,   274,   275,   276,
     277,    -1,    -1,   280,   281,   282,   255,    -1,    -1,   258,
     259,   260,   261,    -1,   263,   321,    -1,   266,   324,   325,
     269,   270,   271,   272,   273,   274,   275,   276,   277,    -1,
      -1,   280,   281,   282,    -1,   255,    -1,    -1,   258,   259,
     260,   261,    -1,   263,   321,    -1,   266,   324,   325,   269,
     270,   271,   272,   273,   274,   275,   276,   277,    -1,    -1,
     280,   281,   282,   255,    -1,    -1,   258,   259,   260,   261,
      -1,   263,   321,    -1,   266,   324,   325,   269,   270,   271,
     272,   273,   274,   275,   276,   277,    -1,    -1,   280,   281,
     282,    -1,   255,    -1,    -1,   258,   259,   260,   261,    -1,
     263,   321,    -1,   266,   324,   325,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    -1,    -1,   280,   281,   282,
     255,    -1,    -1,   258,   259,   260,   261,    -1,   263,   321,
      -1,   266,   324,   325,   269,   270,   271,   272,   273,   274,
     275,   276,   277,    -1,    -1,   280,   281,   282,    -1,   255,
      -1,    -1,   258,   259,   260,   261,    -1,   263,   321,    -1,
     266,   324,   325,   269,   270,   271,   272,   273,   274,   275,
     276,   277,    -1,    -1,   280,   281,   282,   255,    -1,    -1,
     258,   259,   260,   261,    -1,   263,   321,    -1,   266,   324,
     325,   269,   270,   271,   272,   273,   274,   275,   276,   277,
      -1,    -1,   280,   281,   282,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   321,    -1,    -1,   324,   325,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   321,    -1,    -1,   324,   325
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
     333,    12,    14,    23,    27,    30,    31,    33,    35,    37,
      38,    39,    41,    42,    43,    57,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   116,   117,
     118,   119,   120,   121,   122,   128,   129,   130,   133,   134,
     135,   136,   139,   140,   141,   142,   143,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   195,   196,   197,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   472,   473,   474,   475,   476,   477,
     479,   484,   495,   498,   504,   505,   506,   507,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   549,   550,   551,   552,
     553,   556,   557,   558,   569,   571,   573,   574,   575,   578,
     580,   581,   582,   583,   593,   594,   595,   596,   597,   598,
     599,   600,   602,   604,   606,   647,   648,   649,   650,   651,
     652,   653,   656,   657,   658,   659,   661,   668,   669,   673,
     674,   675,   676,   687,   690,   693,   712,   713,   334,   256,
     321,   344,   345,   369,   334,   334,   337,   458,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,   111,
     128,   129,   140,   142,   154,   155,   157,   161,   175,   181,
     199,   226,   229,   235,   237,   244,   245,   247,   248,   695,
     697,   712,   713,    37,    38,    43,    57,    60,    61,    62,
     133,   161,   696,   700,   701,   702,   703,   704,   705,   706,
     707,   708,   713,    43,    63,    64,    68,    71,    72,   182,
     199,   244,   245,   589,   591,   592,   593,   661,   677,   678,
     679,   680,   682,   683,   686,     0,   548,   712,   540,   130,
     131,   559,   137,   115,   570,   529,   113,   561,   520,   520,
      44,   473,   712,    22,    43,    51,   132,   579,    43,    51,
      43,    43,    43,    43,    51,   132,   584,    43,    43,    43,
      51,    22,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    51,    12,   654,   655,    51,    51,    12,   480,
     481,    12,   202,   485,   486,    12,   496,   497,   496,    43,
      43,    51,    76,    77,    22,   584,    43,    51,   132,   576,
      43,   464,    67,   112,    67,   234,    67,    67,   234,    51,
      51,   242,   249,    36,   139,   140,   142,   143,   144,   146,
     147,   477,   478,   487,   488,   489,   164,   165,    16,    17,
      18,    19,    20,    21,    27,    40,   116,   117,   118,   119,
     120,   121,   178,    59,   203,    37,    38,   169,    14,    78,
     170,   171,    15,   172,   173,   174,   166,   177,   168,   176,
      51,   525,   529,    33,    39,    24,    24,   540,   540,    23,
      24,    43,   474,   474,    43,    54,   194,   430,   431,   346,
     370,   188,   335,   338,   431,    55,   239,   459,   460,   464,
     467,    58,   699,    56,   706,   706,   700,   709,   710,   712,
      43,   164,   165,    37,    38,   116,   117,   118,   119,   120,
     121,    14,    78,   170,   171,    24,    43,   591,    43,    43,
      43,    43,    14,    26,    37,   590,   201,   467,   560,   113,
     114,   572,    32,   712,    44,    14,    44,   601,   608,   661,
     473,    51,   577,    44,   473,    44,    70,   199,   604,   606,
      44,    44,    44,   133,   660,   712,   473,    51,   585,   603,
     608,   607,   609,   661,    44,   473,   473,   548,    36,   227,
     473,   473,   548,    36,   548,    12,    36,   548,    36,   156,
     156,   473,   473,   473,    51,    51,   577,    14,    44,   605,
     609,   473,   577,    12,    44,   469,   470,   160,   588,   474,
     167,   474,    52,   688,   689,   712,    52,   474,   691,   692,
     712,   474,   474,   474,   474,    12,   145,   146,   506,   507,
     509,   509,   509,   509,   509,   509,   508,   509,   509,   509,
     509,   509,   509,   509,   509,   511,    71,   513,   513,   512,
     514,   514,   514,   514,   515,   515,   516,   516,   167,   160,
     160,   160,    52,   473,   530,   530,   473,   473,   712,   473,
      26,    44,   474,   554,   555,   160,   230,   231,   238,    44,
     554,    60,   184,   195,   432,   433,   198,   434,   435,   436,
     437,   286,   295,   347,   322,   323,   372,   458,   198,   339,
     712,   160,   465,   474,   711,   700,    44,    36,   700,   702,
     703,   705,   705,   704,   704,   704,   704,   704,   704,   706,
     706,   706,   706,   700,   709,    44,    44,    44,    44,   684,
     685,   712,    44,   592,    43,   113,   561,   114,   113,   138,
     526,    36,    44,    52,    52,   473,    52,    44,    44,    44,
      44,    52,    52,   473,    44,    44,    52,    52,    13,   655,
     474,    52,    52,   588,   481,   588,   548,   486,   588,   497,
     474,   474,    44,    44,    52,   473,   473,    36,    44,    52,
     548,    36,    44,   589,    51,   471,   233,    67,   160,    36,
      52,   588,    13,    36,    52,   233,   233,   250,   548,   474,
     490,   491,   492,   145,   509,    43,    51,   253,   524,   545,
     612,   615,   616,   617,   618,   619,   620,   621,   622,   589,
     589,   586,   592,   586,    52,    25,    25,    25,    36,    44,
     228,   236,   474,   474,   474,    44,   133,   133,    53,   433,
     440,   440,   181,   437,   188,   196,   438,   439,   441,   442,
     443,   444,   445,   446,   447,   448,   451,   452,   453,   456,
     457,   461,   463,   472,   646,   662,   694,   255,   257,   264,
     265,   270,   283,   284,   285,   348,   349,   352,   353,   357,
     358,   359,   360,   361,   362,   365,   366,   367,   368,   371,
     255,   258,   259,   260,   261,   263,   266,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   280,   281,   282,   324,
     325,   369,   373,   374,   375,   376,   377,   378,   379,   382,
     383,   387,   388,   389,   390,   391,   396,   397,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   200,   181,
     340,    43,   589,   143,   698,   698,   700,    44,    25,    44,
      36,    44,   588,    36,    14,    44,   589,   681,   130,   131,
      28,    45,   138,   610,   661,    52,    52,   474,   139,   122,
     482,    13,    13,   141,   158,   499,   501,   502,   162,    52,
      52,   610,   588,   470,   473,   474,   474,   474,   689,    13,
     474,   692,    43,    43,   326,   328,   670,   712,    36,   148,
     149,   493,   490,   612,   473,   619,    51,   216,   217,   218,
     623,    98,   645,   251,   614,   252,    91,    92,   629,   207,
     624,    26,   587,   555,   238,   238,   440,   660,   188,   196,
      73,    74,    75,   181,   189,   190,   191,   192,   193,   232,
     242,   254,   458,   197,   198,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   296,   297,   287,   288,   309,
     310,   312,   354,   288,   300,   310,   354,   288,   298,   299,
     310,   311,   372,   288,   310,   311,   372,   255,   286,   288,
     289,   290,   291,   292,   293,   294,   303,   304,   305,   306,
     307,   308,   318,   319,   320,   255,   288,   310,   255,   123,
     471,   377,   311,   267,   392,   393,   394,   313,   311,   314,
     372,   287,   311,   381,   288,   384,   255,   372,   278,   311,
     316,   317,   398,   288,   310,   311,   372,   311,   372,   288,
     311,   372,   372,   288,   311,   314,   315,   372,   288,   311,
     372,   288,   315,   372,   255,   301,   311,   301,   302,   372,
     311,   372,   713,   660,   188,   341,   342,   343,   468,   545,
     474,   699,   162,   685,   589,    44,   160,    36,    44,   561,
     561,   568,    44,   474,    12,   202,   483,   474,   474,   474,
      12,   503,   191,   500,   501,    15,   139,   474,    26,    44,
      52,   233,   474,    12,   671,   672,   671,   233,   491,   150,
     494,    44,    52,    52,   612,   105,   221,   104,   616,   103,
     122,   128,   204,   205,   206,   209,   210,   613,   626,   617,
     141,    93,    96,    99,   100,   101,   102,   159,   193,   211,
     212,   215,   630,   631,   632,   633,   634,   637,   642,   643,
     644,    92,   127,   219,   220,   625,   474,   474,    40,   179,
     180,   629,   133,   611,   660,   179,   180,   128,   129,   146,
     153,   199,   200,   179,   185,   449,   712,    76,    77,   110,
     246,   250,   665,   712,   134,   200,   181,   191,   455,   611,
     181,   611,   297,   296,   350,    23,    33,    39,    63,    79,
     240,   241,   420,   421,   422,   423,   426,   427,   428,   540,
     589,    60,    61,    62,   351,   264,   355,   356,   372,   589,
     372,   589,   473,   255,   589,   473,   255,    71,   130,   329,
     330,   331,   363,   130,   364,   364,   591,   255,   473,   313,
     268,   393,   395,   372,   473,   473,   371,   255,   130,   326,
     328,   380,   473,   255,   262,   385,   386,   255,   385,   255,
     372,   473,   371,   371,   279,   399,   589,   473,   255,   473,
     255,   371,   473,   255,   255,   371,   473,   371,   371,   255,
     371,   473,   255,   371,   371,   255,   473,   255,   473,   255,
     464,    40,   181,   193,   458,    36,    44,   700,    44,   589,
     589,   160,    46,    46,    34,   125,   126,   471,   557,   548,
      12,   141,   548,   589,    12,   139,   589,   474,   163,    44,
     474,   548,    36,    44,    44,    43,   151,   152,   153,   623,
      52,   514,   104,   107,   108,   511,   512,   625,   224,   225,
     628,   628,   618,    99,   100,   101,   102,    94,    95,    43,
     122,   191,   636,   221,    94,    95,   712,   659,   630,   109,
     152,   512,   512,   208,   611,    40,   150,   611,   181,   181,
      36,   133,   712,   130,   326,   327,   666,   667,   243,   160,
      12,   713,   660,   199,   611,   122,   454,   660,   454,   130,
     326,   327,   540,    22,    22,    43,    43,    15,   427,    33,
      39,    33,    39,   429,   288,   298,   299,   310,   311,   372,
     255,   255,   130,   473,   372,   255,   255,   288,   298,   310,
     311,   372,   255,   372,   255,   372,   465,   611,   660,   712,
     200,   545,   163,   589,   561,   561,   559,   548,   474,   160,
     548,   474,   474,   588,   672,   671,   611,   221,   222,   223,
     627,   627,   221,   191,   636,   611,    43,   122,   191,   639,
     133,   512,   512,   169,   440,   611,   151,   152,   611,   611,
     186,   187,   450,    43,   471,   664,   665,    36,   420,   591,
     548,   464,    40,   181,   454,   611,    36,    40,   540,   540,
     424,   547,   659,   659,   421,   427,   427,   427,   427,    24,
     589,   473,   255,   255,   589,   473,   255,   255,   471,   440,
      40,   133,   713,   700,    47,    49,   562,    47,    49,   563,
     561,   139,    13,    44,   635,   635,   213,   625,   640,   659,
     611,   638,   638,   512,    44,   469,   160,   663,   243,   667,
     471,   664,   588,   465,   611,   611,    44,    36,   473,   336,
     440,   611,   440,   464,   564,   566,   565,   567,    29,   474,
     474,    36,    44,    44,   659,   214,    36,    44,   172,   174,
     641,    44,   589,   471,   420,   663,    13,   183,   462,   183,
     466,   471,   454,   425,   545,   547,    25,   440,   465,    48,
     123,   471,    50,   124,   471,    48,   123,   471,    50,   124,
     471,   636,   625,   659,   639,   639,   471,   664,   471,   474,
      44,   471,   214,   663,   440,   471
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
#line 820 "../src/parser/XQParser.y"
    {
    QP->_seqType = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 827 "../src/parser/XQParser.y"
    {
    BuiltInModules::addNamespaces(CONTEXT);
  }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 833 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (8)].signature)->argSpecs = (yyvsp[(5) - (8)].argSpecs);
    (yyvsp[(2) - (8)].signature)->returnType = (yyvsp[(6) - (8)].sequenceType);
    QP->_function = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(2) - (8)].signature), (yyvsp[(7) - (8)].astNode), true, MEMMGR));
  }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 844 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].signature)->argSpecs = (yyvsp[(2) - (3)].argSpecs);
    (yyvsp[(1) - (3)].signature)->returnType = (yyvsp[(3) - (3)].sequenceType);
    QP->_signature = (yyvsp[(1) - (3)].signature);
  }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 853 "../src/parser/XQParser.y"
    {
    printf("  { DelayedModule::Decl::NONE, 0, 0, 0, 0, 0 }\n};\n\n");

    UTF8Str module(QP->_moduleName);
    printf("static const DelayedModule %s_module = { %s_file, %s_prefix, %s_uri, %s_declarations };\n",
           module.str(), module.str(), module.str(), module.str(), module.str());
  }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 864 "../src/parser/XQParser.y"
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
#line 903 "../src/parser/XQParser.y"
    {
    printf("static const DelayedModule::Decl %s_declarations[] = {\n", UTF8(QP->_moduleName));
  }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 913 "../src/parser/XQParser.y"
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
#line 929 "../src/parser/XQParser.y"
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
#line 956 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
    DM_outputDecl("NAMESPACE", UTF8((yyvsp[(3) - (6)].str)), 0, false, (yylsp[(1) - (6)]).first_line, (yylsp[(1) - (6)]).first_column,
                  (yyvsp[(5) - (6)].str), XPath2Utils::intStrlen((yyvsp[(5) - (6)].str)));
  }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 969 "../src/parser/XQParser.y"
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
#line 998 "../src/parser/XQParser.y"
    {
  }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 1001 "../src/parser/XQParser.y"
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
#line 1025 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 1029 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 1048 "../src/parser/XQParser.y"
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
#line 1067 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, signature, 0, MEMMGR));
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 1072 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 1077 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 1084 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 1089 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 1094 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 1102 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 1106 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 1112 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1117 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1127 "../src/parser/XQParser.y"
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
#line 1140 "../src/parser/XQParser.y"
    {    
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, signature, 0, true, MEMMGR));
  }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 1145 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1152 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 1157 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1165 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1169 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1177 "../src/parser/XQParser.y"
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
#line 1204 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 1208 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1215 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1221 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1226 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1231 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1240 "../src/parser/XQParser.y"
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
#line 1264 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1268 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1275 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1280 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1285 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1290 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1301 "../src/parser/XQParser.y"
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
#line 1319 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1323 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1330 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1335 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1343 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1368 "../src/parser/XQParser.y"
    {
  }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1371 "../src/parser/XQParser.y"
    {
  }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1374 "../src/parser/XQParser.y"
    {
  }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1377 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1380 "../src/parser/XQParser.y"
    {
  }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1383 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1386 "../src/parser/XQParser.y"
    {
  }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1389 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1392 "../src/parser/XQParser.y"
    {
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1395 "../src/parser/XQParser.y"
    {
  }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1398 "../src/parser/XQParser.y"
    {
  }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1401 "../src/parser/XQParser.y"
    {
  }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1404 "../src/parser/XQParser.y"
    {
  }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1407 "../src/parser/XQParser.y"
    {
  }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1410 "../src/parser/XQParser.y"
    {
  }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1413 "../src/parser/XQParser.y"
    {
  }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1416 "../src/parser/XQParser.y"
    {
  }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1419 "../src/parser/XQParser.y"
    {
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1429 "../src/parser/XQParser.y"
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
#line 1441 "../src/parser/XQParser.y"
    {
  }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1444 "../src/parser/XQParser.y"
    {
  }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1450 "../src/parser/XQParser.y"
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
#line 1464 "../src/parser/XQParser.y"
    {
    (yyval.alias) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTypeAlias(0, 0, MEMMGR));
  }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1468 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].alias)->setURI(uri);
    (yyvsp[(1) - (2)].alias)->setName(name);
    (yyval.alias) = (yyvsp[(1) - (2)].alias);
  }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1475 "../src/parser/XQParser.y"
    {
    (yyval.alias) = (yyvsp[(1) - (3)].alias);
    (yyval.alias)->setType((yyvsp[(3) - (3)].itemType));
  }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1485 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1490 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1495 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1503 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1511 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1522 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1532 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1536 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1543 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1552 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1556 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1561 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1569 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1573 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1578 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1583 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1612 "../src/parser/XQParser.y"
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
#line 1630 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1634 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1639 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1648 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1657 "../src/parser/XQParser.y"
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
#line 1677 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1681 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1686 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1694 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1699 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1703 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1710 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1714 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1722 "../src/parser/XQParser.y"
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
#line 1735 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1739 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1749 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1753 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1761 "../src/parser/XQParser.y"
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
#line 1779 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1783 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1790 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1795 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1800 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1808 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1814 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1822 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1830 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1837 "../src/parser/XQParser.y"
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
#line 1851 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1855 "../src/parser/XQParser.y"
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
#line 1869 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1878 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1885 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1889 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1896 "../src/parser/XQParser.y"
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
#line 1931 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1935 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1940 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1946 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1955 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1959 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1966 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1970 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1977 "../src/parser/XQParser.y"
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
#line 1995 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), (XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1999 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 2006 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 2011 "../src/parser/XQParser.y"
    {
    const_cast<ArgumentSpec*>((yyvsp[(1) - (3)].letTuple)->getVar())->setType((yyvsp[(3) - (3)].sequenceType));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 2019 "../src/parser/XQParser.y"
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
#line 2037 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 2041 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2049 "../src/parser/XQParser.y"
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
#line 2071 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2075 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 2082 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 2090 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 2099 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2107 "../src/parser/XQParser.y"
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
#line 2145 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 2149 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2156 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2163 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 2172 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2181 "../src/parser/XQParser.y"
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
#line 2208 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 2212 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 2219 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 2231 "../src/parser/XQParser.y"
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
#line 2258 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 2262 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 2269 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 2279 "../src/parser/XQParser.y"
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
#line 2291 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 2295 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 2300 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2309 "../src/parser/XQParser.y"
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
#line 2322 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 2326 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 2331 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 2340 "../src/parser/XQParser.y"
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
#line 2354 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 2358 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 2371 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 2376 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2388 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 2392 "../src/parser/XQParser.y"
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
#line 2400 "../src/parser/XQParser.y"
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
#line 2413 "../src/parser/XQParser.y"
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
#line 2421 "../src/parser/XQParser.y"
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
#line 2434 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 2441 "../src/parser/XQParser.y"
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
#line 2480 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2484 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2488 "../src/parser/XQParser.y"
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
#line 2506 "../src/parser/XQParser.y"
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
#line 2524 "../src/parser/XQParser.y"
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
#line 2534 "../src/parser/XQParser.y"
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
#line 2548 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 2556 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 2562 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 2568 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 2574 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 2585 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 2589 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 2617 "../src/parser/XQParser.y"
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
#line 2637 "../src/parser/XQParser.y"
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
#line 2661 "../src/parser/XQParser.y"
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
#line 2675 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 2679 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 2683 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 2687 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 2691 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 2695 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 2701 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 2707 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 2711 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 2715 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2747 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2755 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2760 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2769 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2774 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 2783 "../src/parser/XQParser.y"
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
#line 2864 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 2872 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2877 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2886 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 2891 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 2900 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 2910 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 2914 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 2922 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2926 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 2934 "../src/parser/XQParser.y"
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
#line 2950 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2959 "../src/parser/XQParser.y"
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
#line 2971 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 2979 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2983 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2988 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2997 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 3001 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 3009 "../src/parser/XQParser.y"
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
#line 3019 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 3031 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 3036 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 3045 "../src/parser/XQParser.y"
    {
    (yyval.signature) = new (MEMMGR) FunctionSignature(MEMMGR);
  }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 3049 "../src/parser/XQParser.y"
    {
    (yyval.signature) = (yyvsp[(1) - (2)].signature);
    (yyval.signature)->annotations.push_back((yyvsp[(2) - (2)].annotation));
  }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 3060 "../src/parser/XQParser.y"
    {
    ASTNode *trueExpr =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                           MEMMGR->getPooledString("true"), 0, MEMMGR));
    (yyval.annotation) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Annotation(0, XQFunction::XMLChFunctionURI, (yyvsp[(1) - (1)].str), trueExpr, MEMMGR));
  }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 3072 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQGlobalVariable((yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode), MEMMGR)));
  }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 3079 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 3083 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 3091 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (7)].signature)->argSpecs = (yyvsp[(5) - (7)].argSpecs);
    (yyvsp[(2) - (7)].signature)->returnType = (yyvsp[(6) - (7)].sequenceType);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), (yyvsp[(2) - (7)].signature), (yyvsp[(7) - (7)].astNode), true, MEMMGR));
  }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 3100 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 3104 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 3111 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 3115 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 3124 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 3132 "../src/parser/XQParser.y"
    {
    ASTNode *trueExpr =
      WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                           MEMMGR->getPooledString("true"), 0, MEMMGR));
    (yyval.annotation) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) Annotation((yyvsp[(2) - (2)].str), trueExpr));
  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 3139 "../src/parser/XQParser.y"
    {
    (yyval.annotation) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) Annotation((yyvsp[(2) - (5)].str), (yyvsp[(4) - (5)].parenExpr)));
  }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 3146 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.parenExpr)->addItem((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 3151 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (3)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(3) - (3)].astNode));
  }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 3160 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 3165 "../src/parser/XQParser.y"
    {
    ArgumentSpecs* paramList = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 3175 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 3183 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 3191 "../src/parser/XQParser.y"
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
#line 3204 "../src/parser/XQParser.y"
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
#line 3242 "../src/parser/XQParser.y"
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
#line 3287 "../src/parser/XQParser.y"
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
#line 3300 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 3315 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 3322 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 3330 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 3341 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 3345 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 3355 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 3359 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 3369 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 3376 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 3384 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 3388 "../src/parser/XQParser.y"
    {
    ASTNode *literal = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::INTEGER, X("0"), MEMMGR));
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(3) - (5)].str), literal, MEMMGR));
  }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 3397 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 3405 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) CountTuple(0, (yyvsp[(3) - (3)].str), MEMMGR));
  }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 3413 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 3418 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 3426 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 3436 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 3443 "../src/parser/XQParser.y"
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
#line 3458 "../src/parser/XQParser.y"
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
#line 3472 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 3476 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 3480 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 3487 "../src/parser/XQParser.y"
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
#line 3496 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 3500 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 3509 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 3517 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 3528 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 3536 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 3547 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR));
  }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 3554 "../src/parser/XQParser.y"
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
#line 3567 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 3571 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 3579 "../src/parser/XQParser.y"
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
#line 3597 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses) = new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), 0)));
  }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 3602 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(SequenceTypeUnion, (yylsp[(2) - (3)]));
    (yyvsp[(1) - (3)].caseClauses)->push_back(WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(1) - (3)].caseClauses)->back()->getQName(), (yyvsp[(3) - (3)].sequenceType), 0)));
    (yyval.caseClauses) = (yyvsp[(1) - (3)].caseClauses);
  }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 3611 "../src/parser/XQParser.y"
    {
    (yyval.str) = 0;
  }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 3615 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 3623 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 3631 "../src/parser/XQParser.y"
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
#line 3645 "../src/parser/XQParser.y"
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
#line 3664 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 3668 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3671 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 3672 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 3676 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 3680 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 3684 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 3688 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 3692 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 3696 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 3700 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 3704 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3708 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 3712 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 3716 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 3720 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 3729 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 3733 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 3741 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionCall(0, BuiltInModules::fn.uri, MEMMGR->getPooledString("concat"), args, MEMMGR));
  }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 3753 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionCall(0, BuiltInModules::core.uri, MEMMGR->getPooledString("to"), args, MEMMGR));
  }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 3765 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3769 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 3778 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 3782 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 3786 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 3790 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 3799 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 3803 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 3812 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 3816 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 3825 "../src/parser/XQParser.y"
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
#line 3847 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 3857 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 3866 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 3875 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 3881 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 3902 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 3906 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 3910 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 3918 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 3925 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 3938 "../src/parser/XQParser.y"
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
#line 3959 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 3968 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 3974 "../src/parser/XQParser.y"
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
#line 3999 "../src/parser/XQParser.y"
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
#line 4013 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 4019 "../src/parser/XQParser.y"
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

  case 486:

/* Line 1455 of yacc.c  */
#line 4041 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 4051 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 4058 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 4067 "../src/parser/XQParser.y"
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

  case 493:

/* Line 1455 of yacc.c  */
#line 4090 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::CHILD;
  }
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 4094 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::DESCENDANT;
  }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 4098 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ATTRIBUTE;
  }
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 4102 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::SELF;
  }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 4106 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::DESCENDANT_OR_SELF;
  }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 4110 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::FOLLOWING_SIBLING;
  }
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 4114 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::FOLLOWING;
  }
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 4118 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::NAMESPACE;
  }
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 4126 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 4134 "../src/parser/XQParser.y"
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

  case 503:

/* Line 1455 of yacc.c  */
#line 4151 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 4168 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PARENT;
  }
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 4172 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ANCESTOR;
  }
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 4176 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PRECEDING_SIBLING;
  }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 4180 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PRECEDING;
  }
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 4184 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ANCESTOR_OR_SELF;
  }
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 4192 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::PARENT, step, MEMMGR));
  }
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 4204 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 513:

/* Line 1455 of yacc.c  */
#line 4214 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 4226 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 4233 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 4240 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 4253 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 4282 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 4293 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 4297 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 4305 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 4313 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 4323 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 4333 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 4337 "../src/parser/XQParser.y"
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

  case 544:

/* Line 1455 of yacc.c  */
#line 4360 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 4365 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 4376 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 548:

/* Line 1455 of yacc.c  */
#line 4385 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 4389 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 553:

/* Line 1455 of yacc.c  */
#line 4402 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 4408 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 4421 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 4425 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 4434 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 4450 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 4454 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 4461 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 4465 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 4475 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 4479 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 4484 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 4492 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 4496 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 4500 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 4511 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 4515 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 4520 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 4528 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 4532 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 4536 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 4551 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 4555 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
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
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 582:

/* Line 1455 of yacc.c  */
#line 4570 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
    }
  }
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 4581 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 4590 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 586:

/* Line 1455 of yacc.c  */
#line 4599 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(3) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor(WRAP((yylsp[(2) - (3)]), new (MEMMGR)
          XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (3)].str), MEMMGR)), value, MEMMGR));
  }
    break;

  case 588:

/* Line 1455 of yacc.c  */
#line 4610 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 4635 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 4643 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 4651 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 4655 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 4663 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4667 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 4676 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 4683 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 4687 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 4697 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQNamespaceConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 4705 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 4713 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 4721 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 4728 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 4736 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 4743 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 4747 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 4755 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType((yyvsp[(1) - (2)].itemType), (yyvsp[(2) - (2)].occurrence)));
  }
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 4762 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 4766 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 4774 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(WRAP((yyloc), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING)), SequenceType::STAR));
  }
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 4778 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 4788 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType((yyvsp[(1) - (2)].itemType), (yyvsp[(2) - (2)].occurrence)));
  }
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 4792 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 620:

/* Line 1455 of yacc.c  */
#line 4801 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 4803 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 4805 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 623:

/* Line 1455 of yacc.c  */
#line 4807 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 624:

/* Line 1455 of yacc.c  */
#line 4813 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING));
  }
    break;

  case 629:

/* Line 1455 of yacc.c  */
#line 4825 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ItemType(ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName)));
  }
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 4855 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_NODE));
  }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4863 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_DOCUMENT));
  }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4867 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(ItemType::TEST_DOCUMENT);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.itemType)->setLocationInfo(&loc);
  }
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 4874 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(ItemType::TEST_SCHEMA_DOCUMENT);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.itemType)->setLocationInfo(&loc);
  }
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 4885 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_TEXT));
  }
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 4893 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_COMMENT));
  }
    break;

  case 646:

/* Line 1455 of yacc.c  */
#line 4901 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(NamespaceNodeTest, (yylsp[(1) - (3)]));
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_NAMESPACE));
  }
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 4910 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_PI));
  }
    break;

  case 648:

/* Line 1455 of yacc.c  */
#line 4914 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR)));
  }
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 4918 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR)));
  }
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 4926 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE));
  }
    break;

  case 651:

/* Line 1455 of yacc.c  */
#line 4930 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 4934 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName)));
  }
    break;

  case 654:

/* Line 1455 of yacc.c  */
#line 4943 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 4951 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 657:

/* Line 1455 of yacc.c  */
#line 4964 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT));
  }
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 4968 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 4972 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName)));
  }
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 4976 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName)));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 662:

/* Line 1455 of yacc.c  */
#line 4986 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 663:

/* Line 1455 of yacc.c  */
#line 4994 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 668:

/* Line 1455 of yacc.c  */
#line 5014 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 669:

/* Line 1455 of yacc.c  */
#line 5026 "../src/parser/XQParser.y"
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

  case 670:

/* Line 1455 of yacc.c  */
#line 5041 "../src/parser/XQParser.y"
    {
}
    break;

  case 671:

/* Line 1455 of yacc.c  */
#line 5044 "../src/parser/XQParser.y"
    {
}
    break;

  case 672:

/* Line 1455 of yacc.c  */
#line 5050 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 673:

/* Line 1455 of yacc.c  */
#line 5054 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 674:

/* Line 1455 of yacc.c  */
#line 5064 "../src/parser/XQParser.y"
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

  case 676:

/* Line 1455 of yacc.c  */
#line 5081 "../src/parser/XQParser.y"
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

  case 678:

/* Line 1455 of yacc.c  */
#line 5097 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 680:

/* Line 1455 of yacc.c  */
#line 5107 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 5117 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 5126 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 5131 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 5141 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 5145 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 5153 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 5158 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 691:

/* Line 1455 of yacc.c  */
#line 5167 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 692:

/* Line 1455 of yacc.c  */
#line 5171 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 693:

/* Line 1455 of yacc.c  */
#line 5175 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 5179 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 5183 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 696:

/* Line 1455 of yacc.c  */
#line 5187 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 698:

/* Line 1455 of yacc.c  */
#line 5197 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 699:

/* Line 1455 of yacc.c  */
#line 5208 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 5214 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 5220 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 5226 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 703:

/* Line 1455 of yacc.c  */
#line 5241 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 5245 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 5249 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 5253 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 707:

/* Line 1455 of yacc.c  */
#line 5257 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 708:

/* Line 1455 of yacc.c  */
#line 5261 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 709:

/* Line 1455 of yacc.c  */
#line 5265 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 710:

/* Line 1455 of yacc.c  */
#line 5269 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 711:

/* Line 1455 of yacc.c  */
#line 5277 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 712:

/* Line 1455 of yacc.c  */
#line 5281 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 713:

/* Line 1455 of yacc.c  */
#line 5285 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 714:

/* Line 1455 of yacc.c  */
#line 5293 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 715:

/* Line 1455 of yacc.c  */
#line 5297 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5333 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_INSENSITIVE);
  }
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 5337 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_SENSITIVE);
  }
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 5341 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::LOWERCASE);
  }
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 5345 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::UPPERCASE);
  }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5354 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 5358 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 5366 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 5370 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 5380 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 735:

/* Line 1455 of yacc.c  */
#line 5384 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 5388 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 5392 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 5396 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 739:

/* Line 1455 of yacc.c  */
#line 5403 "../src/parser/XQParser.y"
    {
  }
    break;

  case 740:

/* Line 1455 of yacc.c  */
#line 5406 "../src/parser/XQParser.y"
    {
  }
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 5413 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 5417 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5421 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5425 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5435 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 5439 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 5443 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 5450 "../src/parser/XQParser.y"
    {
  }
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 5453 "../src/parser/XQParser.y"
    {
  }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 5461 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 5465 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 5472 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 5476 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 5484 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 5488 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 5496 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 5504 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 5508 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 759:

/* Line 1455 of yacc.c  */
#line 5516 "../src/parser/XQParser.y"
    {
}
    break;

  case 760:

/* Line 1455 of yacc.c  */
#line 5523 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 5531 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 762:

/* Line 1455 of yacc.c  */
#line 5536 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 763:

/* Line 1455 of yacc.c  */
#line 5541 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 5553 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 765:

/* Line 1455 of yacc.c  */
#line 5557 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 5561 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 5565 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 5569 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 5580 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5591 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5595 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5605 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5613 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5620 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5625 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5633 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5642 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::INTEGER, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5650 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::DECIMAL, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5658 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::DOUBLE, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 5667 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 5674 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 5683 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 5695 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, signature, (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5700 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(5) - (7)].argSpecs), (yyvsp[(6) - (7)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, signature, (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5705 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5711 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(8) - (10)].argSpecs), (yyvsp[(9) - (10)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), signature, (yyvsp[(10) - (10)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5717 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), signature, (yyvsp[(6) - (6)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5723 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(6) - (8)].argSpecs), (yyvsp[(7) - (8)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5732 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5736 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5744 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5748 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5755 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5760 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5768 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5773 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5782 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5786 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5790 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 5798 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5802 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5810 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5814 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 5818 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 5822 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 5830 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 811:

/* Line 1455 of yacc.c  */
#line 5834 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 5838 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5846 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 5851 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 815:

/* Line 1455 of yacc.c  */
#line 5861 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 5878 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5886 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(2) - (4)].argSpecs), (yyvsp[(3) - (4)].sequenceType), MEMMGR);
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, signature, (yyvsp[(4) - (4)].astNode), false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 5897 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 5902 "../src/parser/XQParser.y"
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

  case 824:

/* Line 1455 of yacc.c  */
#line 5930 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ItemType(ItemType::TEST_FUNCTION));
  }
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 5942 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(new (MEMMGR) FunctionSignature(0, (yyvsp[(6) - (6)].sequenceType), MEMMGR), 0));
  }
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 5946 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ItemType(new (MEMMGR) FunctionSignature((yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].sequenceType), MEMMGR), 0));
  }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5953 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    (yyval.argSpecs)->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, (yyvsp[(1) - (1)].sequenceType), MEMMGR)));
  }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5958 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
    (yyval.argSpecs)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec(0, (yyvsp[(3) - (3)].sequenceType), MEMMGR)));
  }
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 5967 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 5980 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType((yyvsp[(3) - (4)].tupleMembers), 0));
  }
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 5984 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_TUPLE));
  }
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 5991 "../src/parser/XQParser.y"
    {
    (yyval.tupleMembers) = new (MEMMGR) TupleMembers(true, MEMMGR);
    (yyvsp[(1) - (1)].argSpec)->setIndex(0);
    (yyval.tupleMembers)->add(0, (yyvsp[(1) - (1)].argSpec));
  }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 5997 "../src/parser/XQParser.y"
    {
    (yyval.tupleMembers) = (yyvsp[(1) - (3)].tupleMembers);
    (yyvsp[(3) - (3)].argSpec)->setIndex((yyval.tupleMembers)->size());
    (yyval.tupleMembers)->add(0, (yyvsp[(3) - (3)].argSpec));
  }
    break;

  case 838:

/* Line 1455 of yacc.c  */
#line 6007 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) ArgumentSpec((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].sequenceType), MEMMGR));
  }
    break;

  case 839:

/* Line 1455 of yacc.c  */
#line 6015 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(WRAP((yylsp[(3) - (6)]), new (MEMMGR)
          SequenceType((yyvsp[(3) - (6)].itemType), SequenceType::EXACTLY_ONE)), (yyvsp[(5) - (6)].sequenceType), 0));
  }
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 6020 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_MAP));
  }
    break;

  case 843:

/* Line 1455 of yacc.c  */
#line 6030 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tuples = setLastAncestor((yyvsp[(3) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the tuple constructor expression
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTupleConstructor(tuples, MEMMGR));
  }
    break;

  case 844:

/* Line 1455 of yacc.c  */
#line 6038 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTupleConstructor(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)), MEMMGR));
  }
    break;

  case 846:

/* Line 1455 of yacc.c  */
#line 6046 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 847:

/* Line 1455 of yacc.c  */
#line 6054 "../src/parser/XQParser.y"
    {
    // TBD LetTuple doesn't give us the correct in-scope vars for the initializer - jpcs
    (yyval.tupleNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) LetTuple(0, (yyvsp[(1) - (4)].str), WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQTreatAs((yyvsp[(4) - (4)].astNode), (yyvsp[(2) - (4)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 848:

/* Line 1455 of yacc.c  */
#line 6063 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 849:

/* Line 1455 of yacc.c  */
#line 6067 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
        MEMMGR->getPooledString("empty-map"), 0, MEMMGR));
  }
    break;

  case 850:

/* Line 1455 of yacc.c  */
#line 6075 "../src/parser/XQParser.y"
    {
    XQFunctionCall *func = (XQFunctionCall*)(yyvsp[(1) - (1)].astNode);
    const_cast<VectorOfASTNodes&>(*func->getArguments())[0] =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
          MEMMGR->getPooledString("empty-map"), 0, MEMMGR));
    (yyval.astNode) = func;
  }
    break;

  case 851:

/* Line 1455 of yacc.c  */
#line 6083 "../src/parser/XQParser.y"
    {
    XQFunctionCall *func = (XQFunctionCall*)(yyvsp[(3) - (3)].astNode);
    const_cast<VectorOfASTNodes&>(*func->getArguments())[0] = (yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = func;
  }
    break;

  case 852:

/* Line 1455 of yacc.c  */
#line 6093 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back(0);
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
        MEMMGR->getPooledString("map-put"), args, MEMMGR));
  }
    break;

  case 854:

/* Line 1455 of yacc.c  */
#line 6107 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTupleMember((yyvsp[(3) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQMap((yyvsp[(1) - (3)].astNode), (yyval.astNode), MEMMGR));
  }
    break;

  case 855:

/* Line 1455 of yacc.c  */
#line 6115 "../src/parser/XQParser.y"
    {
    QP->_query->addTypeAlias(WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeAlias((yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].itemType), MEMMGR)));
  }
    break;

  case 856:

/* Line 1455 of yacc.c  */
#line 6125 "../src/parser/XQParser.y"
    {
    QP->_rwrule = (yyvsp[(1) - (1)].rwrule);
  }
    break;

  case 857:

/* Line 1455 of yacc.c  */
#line 6132 "../src/parser/XQParser.y"
    {
    QP->_rwpattern = (yyvsp[(1) - (1)].rwpattern);
  }
    break;

  case 858:

/* Line 1455 of yacc.c  */
#line 6139 "../src/parser/XQParser.y"
    {
    (yyval.rwrule) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQRewriteRule((yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].rwpattern), (yyvsp[(4) - (5)].astNode), MEMMGR));
    (yyval.rwrule)->addCase((yyvsp[(5) - (5)].rwcase));
  }
    break;

  case 859:

/* Line 1455 of yacc.c  */
#line 6144 "../src/parser/XQParser.y"
    {
    (yyval.rwrule) = (yyvsp[(1) - (2)].rwrule);
    (yyval.rwrule)->addCase((yyvsp[(2) - (2)].rwcase));
  }
    break;

  case 860:

/* Line 1455 of yacc.c  */
#line 6152 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 861:

/* Line 1455 of yacc.c  */
#line 6156 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 862:

/* Line 1455 of yacc.c  */
#line 6163 "../src/parser/XQParser.y"
    {
    (yyval.rwcase) = new (MEMMGR) RewriteCase((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 863:

/* Line 1455 of yacc.c  */
#line 6170 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) RewritePattern(ASTNode::IF, (yyvsp[(3) - (8)].rwpattern), (yyvsp[(6) - (8)].rwpattern), (yyvsp[(8) - (8)].rwpattern), MEMMGR));
  }
    break;

  case 865:

/* Line 1455 of yacc.c  */
#line 6178 "../src/parser/XQParser.y"
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

  case 867:

/* Line 1455 of yacc.c  */
#line 6192 "../src/parser/XQParser.y"
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

  case 869:

/* Line 1455 of yacc.c  */
#line 6206 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::EQUALS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 870:

/* Line 1455 of yacc.c  */
#line 6210 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::NOT_EQUALS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 871:

/* Line 1455 of yacc.c  */
#line 6214 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::GREATER_THAN, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 872:

/* Line 1455 of yacc.c  */
#line 6218 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::GREATER_THAN_EQUAL, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 873:

/* Line 1455 of yacc.c  */
#line 6222 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::LESS_THAN, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 874:

/* Line 1455 of yacc.c  */
#line 6226 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::LESS_THAN_EQUAL, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 876:

/* Line 1455 of yacc.c  */
#line 6234 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::PLUS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 877:

/* Line 1455 of yacc.c  */
#line 6238 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::MINUS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 879:

/* Line 1455 of yacc.c  */
#line 6246 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::MULTIPLY, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 880:

/* Line 1455 of yacc.c  */
#line 6250 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::DIVIDE, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 881:

/* Line 1455 of yacc.c  */
#line 6254 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::INTEGER_DIVIDE, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 882:

/* Line 1455 of yacc.c  */
#line 6258 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::MOD, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 884:

/* Line 1455 of yacc.c  */
#line 6266 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(2) - (2)].rwpattern);
  }
    break;

  case 885:

/* Line 1455 of yacc.c  */
#line 6270 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) RewritePattern(ASTNode::UNARY_MINUS, (yyvsp[(2) - (2)].rwpattern), MEMMGR));
  }
    break;

  case 887:

/* Line 1455 of yacc.c  */
#line 6278 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) RewritePattern(ASTNode::PREDICATE, (yyvsp[(1) - (4)].rwpattern), (yyvsp[(3) - (4)].rwpattern), MEMMGR));
  }
    break;

  case 889:

/* Line 1455 of yacc.c  */
#line 6286 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(3) - (4)].rwpattern);
    (yyval.rwpattern)->type = ASTNode::FUNCTION;
    (yyval.rwpattern)->value = (yyvsp[(1) - (4)].str);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.rwpattern)->setLocationInfo(&loc);
  }
    break;

  case 890:

/* Line 1455 of yacc.c  */
#line 6294 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(2) - (3)].rwpattern);
    LOCATION((yylsp[(1) - (3)]), loc);
    (yyval.rwpattern)->setLocationInfo(&loc);
  }
    break;

  case 891:

/* Line 1455 of yacc.c  */
#line 6300 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) RewritePattern(ASTNode::EXPR_SUBSTITUTION, (yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 892:

/* Line 1455 of yacc.c  */
#line 6304 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::DECIMAL, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 893:

/* Line 1455 of yacc.c  */
#line 6308 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::DECIMAL, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 894:

/* Line 1455 of yacc.c  */
#line 6312 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::DOUBLE, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 895:

/* Line 1455 of yacc.c  */
#line 6316 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 896:

/* Line 1455 of yacc.c  */
#line 6323 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yyloc), new (MEMMGR) RewritePattern(ASTNode::SEQUENCE, MEMMGR));
  }
    break;

  case 898:

/* Line 1455 of yacc.c  */
#line 6331 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(ASTNode::SEQUENCE, (yyvsp[(1) - (1)].rwpattern), MEMMGR));
  }
    break;

  case 899:

/* Line 1455 of yacc.c  */
#line 6335 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(1) - (3)].rwpattern);
    (yyval.rwpattern)->children.push_back((yyvsp[(3) - (3)].rwpattern));
  }
    break;

  case 901:

/* Line 1455 of yacc.c  */
#line 6347 "../src/parser/XQParser.y"
    {
    if(!QP->_rewriteRule)
      yyerror((yylsp[(1) - (2)]), "Expression substitutions are only allowed in rewrite rules");
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQExprSubstitution((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;



/* Line 1455 of yacc.c  */
#line 12998 "../src/parser/XQParser.cpp"
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
#line 6384 "../src/parser/XQParser.y"


}  // namespace XQParser


