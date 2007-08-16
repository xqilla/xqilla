/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Oracle. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

%{

#if defined(WIN32) && !defined(__CYGWIN__)
// turn off the warnings "switch statement contains 'default' but no 'case' labels"
//                       "'yyerrlab1' : unreferenced label"
#pragma warning(disable : 4065 4102)
#endif

#include <iostream>
#include <xqilla/utils/UTF8Str.hpp>

#include "../lexer/XQLexer.hpp"

#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/ast/XQFunction.hpp>
#include <xqilla/ast/XQDocumentConstructor.hpp>
#include <xqilla/ast/XQElementConstructor.hpp>
#include <xqilla/ast/XQAttributeConstructor.hpp>
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

#include <xercesc/validators/schema/SchemaSymbols.hpp>

#include <xqilla/items/AnyAtomicTypeConstructor.hpp>

#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/ast/XQParenthesizedExpr.hpp>
#include <xqilla/ast/XQNav.hpp>
#include <xqilla/ast/XQStep.hpp>
#include <xqilla/ast/XQLiteral.hpp>
#include <xqilla/ast/XQVariable.hpp>
#include <xqilla/ast/XQInstanceOf.hpp>
#include <xqilla/ast/XQCastAs.hpp>
#include <xqilla/ast/XQCastableAs.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/ast/XQAtomize.hpp>
#include <xqilla/ast/ConvertFunctionArg.hpp>
#include <xqilla/ast/XQIf.hpp>
#include <xqilla/ast/XQContextItem.hpp>
#include <xqilla/ast/XQPredicate.hpp>

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

#include <xqilla/axis/NodeTest.hpp>

#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/exceptions/ContextException.hpp>

#include <xqilla/utils/XPath2Utils.hpp>
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

#define REJECT_NOT_XQUERY(where,pos)   if(!QP->_lexer->isXQuery())   { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }

#define WRAP(pos,object)        (wrapForDebug((QP), (object), (pos).first_line, (pos).first_column))

#define LOCATION(pos,name) LocationInfo name(QP->_query->getFile(), (pos).first_line, (pos).first_column)

#define GET_NAVIGATION(pos, object) (((object)->getType() == ASTNode::NAVIGATION) ? (XQNav*)(object) : WRAP(pos, new (MEMMGR) XQNav((object), MEMMGR)))

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

static const XMLCh sz1_0[] = { chDigit_1, chPeriod, chDigit_0, chNull };
static const XMLCh err_XPDY0050[] = { 'e', 'r', 'r', ':', 'X', 'P', 'D', 'Y', '0', '0', '5', '0', 0 };

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

namespace XQParser {

%}

/* this gives a nice name to the $end token */
%token MYEOF 0                    "<end of file>"

/* "Fake" tokens that decide which language we're parsing */
%token _LANG_XPATH2_
%token _LANG_XQUERY_
%token _LANG_XPATH2_FULLTEXT_
%token _LANG_XQUERY_FULLTEXT_
%token _LANG_XQUERY_UPDATE_
%token _LANG_XQUERY_FULLTEXT_UPDATE_

%token _DOLLAR_ "$"
%token _COLON_EQUALS_ ":="
%token _ASTERISK_ "*"
%token _BAR_ "|"
%token _BANG_EQUALS_ "!="
%token _LESS_THAN_EQUALS_ "<="
%token _GREATER_THAN_ "> (comparison operator)"
%token _GREATER_THAN_EQUALS_ ">="
%token _LESS_THAN_LESS_THAN_ "<<"
%token _GREATER_THAN_GREATER_THAN_ ">>"
%token _COLON_COLON_ "::"
%token _AT_SIGN_ "@"
%token _LSQUARE_ "["
%token _RSQUARE_ "]"
%token _QUESTION_MARK_ "?"
%token _BAR_BAR_ "||"
%token _AMP_AMP_ "&&"
%token _LESS_THAN_OP_OR_TAG_ "<"
%token _START_TAG_CLOSE_ "> (start tag close)"
%token _END_TAG_CLOSE_ "> (end tag close)"
%token _PI_START_ "<?"
%token _XML_COMMENT_START_ "<!--"
%token _XML_COMMENT_END_ "-->"
%token _SLASH_SLASH_ "//"
%token _END_TAG_OPEN_ "</"
%token _PRAGMA_OPEN_          "(#"
%token _COMMA_              ","
%token _PLUS_              "+"
%token _MINUS_              "-"
%token _SLASH_              "/"
%token _EQUALS_              "= (comparison operator)"
%token _DOT_              "."
%token _DOT_DOT_            ".."
%token _LPAR_              "("
%token _RPAR_              ")"
%token _EMPTY_TAG_CLOSE_        "/>"
%token _VALUE_INDICATOR_        "="
%token _OPEN_QUOT_            "\" (open)"
%token _CLOSE_QUOT_            "\" (close)"
%token _OPEN_APOS_            "' (open)"
%token _CLOSE_APOS_            "' (close)"
%token _LBRACE_              "{"
%token _LBRACE_EXPR_ENCLOSURE_ "{ (expression enclosure)"
%token _RBRACE_              "}"
%token _SEMICOLON_            ";"
%token _BANG_                                           "!"

%token <str> _INTEGER_LITERAL_ "<integer literal>"
%token <str> _DECIMAL_LITERAL_ "<decimal literal>"
%token <str> _DOUBLE_LITERAL_ "<double literal>"
%token <str> _ATTRIBUTE_ "attribute"
%token <str> _COMMENT_ "comment"
%token <str> _DOCUMENT_NODE_ "document-node"
%token <str> _NODE_ "node"
%token <str> _PROCESSING_INSTRUCTION_ "processing-instruction"
%token <str> _SCHEMA_ATTRIBUTE_ "schema-attribute"
%token <str> _SCHEMA_ELEMENT_ "schema-element"
%token <str> _TEXT_ "text"
%token <str> _EMPTY_SEQUENCE_ "empty-sequence"
%token <str> _BOUNDARY_SPACE_ "boundary-space"
%token <str> _FT_OPTION_ "ft-option"
%token <str> _BASE_URI_ "base-uri"
%token <str> _LAX_ "lax"
%token <str> _STRICT_ "strict"
%token <str> _IDIV_ "idiv"
%token <str> _CHILD_ "child"
%token <str> _DESCENDANT_ "descendant"
%token <str> _SELF_ "self"
%token <str> _DESCENDANT_OR_SELF_ "descendant-or-self"
%token <str> _FOLLOWING_SIBLING_ "following-sibling"
%token <str> _FOLLOWING_ "following"
%token <str> _PARENT_ "parent"
%token <str> _ANCESTOR_ "ancestor"
%token <str> _PRECEDING_SIBLING_ "preceding-sibling"
%token <str> _PRECEDING_ "preceding"
%token <str> _ANCESTOR_OR_SELF_ "ancestor-of-self"
%token <str> _DOCUMENT_ "document"
%token <str> _NOT_ "not"
%token <str> _SENSITIVE_ "sensitive"
%token <str> _INSENSITIVE_ "insensitive"
%token <str> _DIACRITICS_ "diacritics"
%token <str> _WITHOUT_ "without"
%token <str> _WITHOUT_C_ "without (followed by content)"
%token <str> _STEMMING_ "stemming"
%token <str> _THESAURUS_ "thesaurus"
%token <str> _STOP_ "stop"
%token <str> _WILDCARDS_ "wildcards"
%token <str> _ENTIRE_ "entire"
%token <str> _CONTENT_ "content"
%token <str> _WORD_ "word"
%token <str> _TYPE_ "type"
%token <str> _START_ "start"
%token <str> _END_ "end"
%token <str> _MOST_ "most"
%token <str> _SKIP_ "skip"
%token <str> _TRANSFORM_ "transform"
%token <str> _COPY_ "copy"
%token <str> _VALUE_ "value"
%token <str> _WHITESPACE_ "<whitespace>"
%token <str> _PI_CONTENT_ "<processing instruction content>"
%token <str> _XML_COMMENT_CONTENT_ "<xml comment content>"
%token <str> _EQ_  "eq"
%token <str> _NE_  "ne"
%token <str> _LT_  "lt"
%token <str> _LE_  "le"
%token <str> _GT_  "gt"
%token <str> _GE_  "ge"
%token <str> _AT_  "at"
%token <str> _QUOT_ATTR_CONTENT_ "<quot attribute content>"
%token <str> _APOS_ATTR_CONTENT_ "<apos attribute content>"
%token <str> _WHITESPACE_ELEMENT_CONTENT_ "<whitespace element content>"
%token <str> _ELEMENT_CONTENT_ "<element content>"
%token <str> _AT_LM_  "at (followed by least or most)"
%token <str> _ORDERED_  "ordered"
%token <str> _UNORDERED_  "unordered"
%token <str> _QNAME_                "<qualified name>"
%token <str> _XMLNS_QNAME_                "<xmlns qualified name>"
%token <str> _CONSTR_QNAME_                "<computed constructor qualified name>"
%token <str> _STRING_LITERAL_            "'...'"
%token <str> _VARIABLE_                "variable"
%token <str> _NCNAME_COLON_STAR_          "<NCName>:*"
%token <str> _STAR_COLON_NCNAME_          "*:<NCName>"
%token <str> _PI_TARGET_              "<processing instruction target>"
%token <str> _PRAGMA_CONTENT_            "<pragma content>"
%token <str> _RETURN_              "return"
%token <str> _FOR_              "for"
%token <str> _IN_                "in"
%token <str> _LET_              "let"
%token <str> _WHERE_              "where"
%token <str> _BY_                    "by"
%token <str> _ORDER_              "order"
%token <str> _STABLE_                 "stable"
%token <str> _ASCENDING_            "ascending"
%token <str> _DESCENDING_            "descending"
%token <str> _EMPTY_                  "empty"
%token <str> _GREATEST_              "greatest"
%token <str> _LEAST_                  "least"
%token <str> _COLLATION_            "collation"
%token <str> _SOME_              "some"
%token <str> _EVERY_              "every"
%token <str> _SATISFIES_            "satisfies"
%token <str> _TYPESWITCH_            "typeswitch"
%token <str> _CASE_              "case"
%token <str> _CASE_S_              "case (followed by (in)sensitive)"
%token <str> _AS_                "as"
%token <str> _IF_                "if"
%token <str> _THEN_              "then"
%token <str> _ELSE_              "else"
%token <str> _OR_                "or"
%token <str> _AND_              "and"
%token <str> _INSTANCE_             "instance"
%token <str> _OF_                      "of"
%token <str> _CASTABLE_              "castable"
%token <str> _TO_                "to"
%token <str> _DIV_              "div"
%token <str> _MOD_              "mod"
%token <str> _UNION_              "union"
%token <str> _INTERSECT_            "intersect"
%token <str> _EXCEPT_              "except"
%token <str> _VALIDATE_               "validate"
%token <str> _CAST_                "cast"
%token <str> _TREAT_              "treat"
%token <str> _IS_                "is"
%token <str> _PRESERVE_            "preserve"
%token <str> _STRIP_              "strip"
%token <str> _NAMESPACE_            "namespace"
%token <str> _ITEM_              "item"
%token <str> _EXTERNAL_            "external"
%token <str> _ENCODING_            "encoding"
%token <str> _NO_PRESERVE_          "no-preserve"
%token <str> _INHERIT_            "inherit"
%token <str> _NO_INHERIT_            "no-inherit"
%token <str> _DECLARE_            "declare"
%token <str> _CONSTRUCTION_          "construction"
%token <str> _ORDERING_            "ordering"
%token <str> _DEFAULT_          "default"
%token <str> _COPY_NAMESPACES_        "copy-namespaces"
%token <str> _OPTION_                  "option"
%token <str> _XQUERY_              "xquery"
%token <str> _VERSION_            "version"
%token <str> _IMPORT_                "import"
%token <str> _SCHEMA_                  "schema"
%token <str> _MODULE_                  "module"
%token <str> _ELEMENT_                "element"
%token <str> _FUNCTION_                "function"
%token <str> _SCORE_                                          "score"
%token <str> _FTCONTAINS_                                     "ftcontains"
%token <str> _WEIGHT_                                         "weight"
%token <str> _WINDOW_                                         "window"
%token <str> _DISTANCE_                                       "distance"
%token <str> _OCCURS_                                         "occurs"
%token <str> _TIMES_                                          "times"
%token <str> _SAME_                                           "same"
%token <str> _DIFFERENT_                                      "different"
%token <str> _LOWERCASE_                                      "lowercase"
%token <str> _UPPERCASE_                                      "uppercase"
%token <str> _RELATIONSHIP_                                   "relationship"
%token <str> _LEVELS_                                         "levels"
%token <str> _LANGUAGE_                                       "language"
%token <str> _ANY_                                            "any"
%token <str> _ALL_                                            "all"
%token <str> _PHRASE_                                         "phrase"
%token <str> _EXACTLY_                                        "exactly"
%token <str> _FROM_                                           "from"
%token <str> _WORDS_                                          "words"
%token <str> _SENTENCES_                                      "sentences"
%token <str> _PARAGRAPHS_                                     "paragraphs"
%token <str> _SENTENCE_                                       "sentence"
%token <str> _PARAGRAPH_                                      "paragraph"
%token <str> _REPLACE_                                        "replace"
%token <str> _MODIFY_                                         "modify"
%token <str> _FIRST_                                          "first"
%token <str> _INSERT_                                         "insert"
%token <str> _BEFORE_                                         "before"
%token <str> _AFTER_                                          "after"
%token <str> _REVALIDATION_                                   "revalidation"
%token <str> _WITH_                                           "with"
%token <str> _WITH_FT_                                           "with (ft option)"
%token <str> _DO_                                             "do"
%token <str> _RENAME_                                         "rename"
%token <str> _LAST_                                           "last"
%token <str> _DELETE_                                         "delete"
%token <str> _INTO_                                           "into"
%token <str> _UPDATING_                                       "updating"

%type <functDecl>    FunctionDecl FunctionDecl_XQ
%type <argSpec>      Param
%type <argSpecs>    ParamList FunctionParamList
%type <astNode>      Expr ExprSingle OrExpr AndExpr EnclosedExpr FLWORExpr IfExpr ComparisonExpr DecimalLiteral VarRef
%type <astNode>      RangeExpr AdditiveExpr MultiplicativeExpr UnionExpr QuantifiedExpr StringLiteral Literal ContextItemExpr
%type <astNode>      UnaryExpr ValidateExpr CastExpr TreatExpr IntersectExceptExpr ParenthesizedExpr PrimaryExpr FunctionCall
%type <astNode>      RelativePathExpr StepExpr AxisStep FilterExpr TypeswitchExpr ValueExpr PathExpr NumericLiteral IntegerLiteral 
%type <astNode>      CastableExpr Constructor ComputedConstructor DirElemConstructor DirCommentConstructor DirPIConstructor  
%type <astNode>      CompElemConstructor CompTextConstructor CompPIConstructor CompCommentConstructor OrderedExpr UnorderedExpr
%type <astNode>      CompAttrConstructor CompDocConstructor DoubleLiteral InstanceofExpr DirectConstructor 
%type <astNode>      ExtensionExpr FTContainsExpr FTIgnoreOption VarDeclValue LeadingSlash CompPINCName
%type <astNode>      InsertExpr DeleteExpr RenameExpr ReplaceExpr TransformExpr CompConstructorName
%type <astNode>      ForwardStep ReverseStep AbbrevForwardStep AbbrevReverseStep OrderExpr CompPIConstructorContent

%type <ftselection>     FTSelection FTWords FTWordsSelection FTUnaryNot FTMildnot FTAnd FTOr
%type <ftoption>        FTProximity
%type <ftoptionlist>    FTSelectionOptions
%type <ftanyalloption>  FTAnyallOption
%type <ftrange>         FTRange
%type <ftunit>          FTUnit FTBigUnit

%type <itemList>      DirElementContent DirAttributeList QuotAttrValueContent AposAttrValueContent DirAttributeValue FunctionCallArgumentList
%type <itemList>      ContentExpr LiteralDirAttributeValue LiteralQuotAttrValueContent LiteralAposAttrValueContent
%type <predicates>    PredicateList
%type <axis>              ForwardAxis ReverseAxis
%type <nodeTest>      NodeTest NameTest Wildcard
%type <qName>        QName AtomicType TypeName ElementName AttributeName ElementNameOrWildcard AttribNameOrWildcard AttributeDeclaration ElementDeclaration
%type <sequenceType>    SequenceType TypeDeclaration SingleType
%type <occurrence>      OccurrenceIndicator SingleTypeOccurrence
%type <itemType>      ItemType KindTest AttributeTest SchemaAttributeTest PITest CommentTest TextTest AnyKindTest ElementTest DocumentTest SchemaElementTest
%type <copyBinding>    TransformBinding
%type <copyBindingList> TransformBindingList
%type <tupleNode>    ForBinding LetBinding WhereClause FLWORTuples OrderByClause OrderSpec OrderSpecList
%type <tupleNode> FlworExprForLetList ForClause LetClause ForBindingList LetBindingList QuantifyBinding QuantifyBindingList
%type <caseClause>        CaseClause DefaultCase
%type <caseClauses>      CaseClauseList
%type <orderByModifier>    OrderDirection EmptyHandling
%type <stringList>      ResourceLocations
%type <str>          PositionalVar SchemaPrefix URILiteral FTScoreVar DirCommentContents DirElemConstructorQName
%type <str>                 FunctionName QNameValue VarName NCName DirPIContents PragmaContents

%type <boolean> FunctionDeclUpdating PreserveMode InheritMode

%start SelectLanguage

%pure_parser

// We're expecting 50 shift/reduce conflicts. These have been checked and are harmless.
// 48 arise from the xgs:leading-lone-slash grammar constraint (http://www.w3.org/TR/xquery/#parse-note-leading-lone-slash)
// 2 arise from the xgs:occurrence-indicator grammar constriant (http://www.w3.org/TR/xquery/#parse-note-occurence-indicators)
%expect 50

%%

// Select the language we parse, based on the (fake) first token from the lexer
SelectLanguage:
  _LANG_XPATH2_ QueryBody
  | _LANG_XQUERY_ Module_XQ
  | _LANG_XPATH2_FULLTEXT_ QueryBody
  | _LANG_XQUERY_FULLTEXT_ Module_XQF
  | _LANG_XQUERY_UPDATE_ Module_XQU
  | _LANG_XQUERY_FULLTEXT_UPDATE_ Module
  ;

////////////////////////////////////////////////////////////////////////////////////////////////////
// XQuery rules

// [1]    Module    ::=      VersionDecl? (MainModule | LibraryModule)
Module_XQ:
  VersionDecl MainModule_XQ
  | VersionDecl LibraryModule_XQ
  | MainModule_XQ
  | LibraryModule_XQ
  ;

// [3]    MainModule    ::=    Prolog QueryBody 
MainModule_XQ: Prolog_XQ QueryBody;

// [4]    LibraryModule    ::=    ModuleDecl Prolog 
LibraryModule_XQ: ModuleDecl Prolog_XQ;

// [6]    Prolog    ::=    ((Setter | Import | NamespaceDecl | DefaultNamespaceDecl) Separator)* 
//               ((VarDecl | FunctionDecl | OptionDecl | FTOptionDecl) Separator)*
Prolog_XQ:
  /* empty */
  | Prolog_XQ Setter_XQ Separator
  {
    CHECK_SECOND_STEP(@2, "a setter");
  }
  | Prolog_XQ Import Separator
  {
    CHECK_SECOND_STEP(@2, "an import");
  }
  | Prolog_XQ NamespaceDecl Separator
  {
    CHECK_SECOND_STEP(@2, "a namespace");
  }
  | Prolog_XQ DefaultNamespaceDecl Separator
  {
    CHECK_SECOND_STEP(@2, "a default namespace");
  }
  | Prolog_XQ VarDecl Separator
  {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
  | Prolog_XQ FunctionDecl_XQ Separator
  {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=$2;
    QP->_query->addFunction(decl);
  }
  | Prolog_XQ OptionDecl Separator
  {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
;

// [7]    Setter    ::=   BoundarySpaceDecl  
//            | DefaultCollationDecl 
//            | BaseURIDecl 
//            | ConstructionDecl 
//            | OrderingModeDecl
//            | EmptyOrderDecl 
//            | CopyNamespacesDecl 
Setter_XQ:
  BoundarySpaceDecl  
  | DefaultCollationDecl 
  | BaseURIDecl 
  | ConstructionDecl 
  | OrderingModeDecl 
  | EmptyOrderDecl 
  | CopyNamespacesDecl 
;  

// [26]    FunctionDecl      ::=   "declare" "function" QName "(" ParamList? ")" ("as" SequenceType)?
//                    (EnclosedExpr | "external")
FunctionDecl_XQ:
  _DECLARE_ _FUNCTION_ FunctionName FunctionParamList EnclosedExpr
  {
    $$ = WRAP(@1, new (MEMMGR) XQUserFunction($3, $4, $5, NULL, false, MEMMGR));
  }
  | _DECLARE_ _FUNCTION_ FunctionName FunctionParamList _AS_ SequenceType EnclosedExpr
  {
    $$ = WRAP(@1, new (MEMMGR) XQUserFunction($3, $4, $7, $6, false, MEMMGR));
  }
  | _DECLARE_ _FUNCTION_ FunctionName FunctionParamList _EXTERNAL_
  {
    $$ = WRAP(@1, new (MEMMGR) XQUserFunction($3, $4, NULL, NULL, false, MEMMGR));
  }
  | _DECLARE_ _FUNCTION_ FunctionName FunctionParamList _AS_ SequenceType _EXTERNAL_
  {
    $$ = WRAP(@1, new (MEMMGR) XQUserFunction($3, $4, NULL, $6, false, MEMMGR));
  }
  ;

////////////////////////////////////////////////////////////////////////////////////////////////////
// XQuery Fulltext rules

// [1]    Module    ::=      VersionDecl? (MainModule | LibraryModule)
Module_XQF:
  VersionDecl MainModule_XQF
  | VersionDecl LibraryModule_XQF
  | MainModule_XQF
  | LibraryModule_XQF
  ;

// [3]    MainModule    ::=    Prolog QueryBody 
MainModule_XQF: Prolog_XQF QueryBody;

// [4]    LibraryModule    ::=    ModuleDecl Prolog 
LibraryModule_XQF: ModuleDecl Prolog_XQF;

// [6]    Prolog    ::=    ((Setter | Import | NamespaceDecl | DefaultNamespaceDecl) Separator)* 
//               ((VarDecl | FunctionDecl | OptionDecl | FTOptionDecl) Separator)*
Prolog_XQF:
  /* empty */
  | Prolog_XQF Setter_XQ Separator
  {
    CHECK_SECOND_STEP(@2, "a setter");
  }
  | Prolog_XQF Import Separator
  {
    CHECK_SECOND_STEP(@2, "an import");
  }
  | Prolog_XQF NamespaceDecl Separator
  {
    CHECK_SECOND_STEP(@2, "a namespace");
  }
  | Prolog_XQF DefaultNamespaceDecl Separator
  {
    CHECK_SECOND_STEP(@2, "a default namespace");
  }
  | Prolog_XQF VarDecl Separator
  {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
  | Prolog_XQF FunctionDecl_XQ Separator
  {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=$2;
    QP->_query->addFunction(decl);
  }
  | Prolog_XQF OptionDecl Separator
  {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
  | Prolog_XQF FTOptionDecl Separator
  {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
;

////////////////////////////////////////////////////////////////////////////////////////////////////
// XQuery Update rules

// [1]    Module    ::=      VersionDecl? (MainModule | LibraryModule)
Module_XQU:
  VersionDecl MainModule_XQU
  | VersionDecl LibraryModule_XQU
  | MainModule_XQU
  | LibraryModule_XQU
  ;

// [3]    MainModule    ::=    Prolog QueryBody 
MainModule_XQU: Prolog_XQU QueryBody;

// [4]    LibraryModule    ::=    ModuleDecl Prolog 
LibraryModule_XQU: ModuleDecl Prolog_XQU;

// [6]    Prolog    ::=    ((Setter | Import | NamespaceDecl | DefaultNamespaceDecl) Separator)* 
//               ((VarDecl | FunctionDecl | OptionDecl | FTOptionDecl) Separator)*
Prolog_XQU:
  /* empty */
  | Prolog_XQU Setter Separator
  {
    CHECK_SECOND_STEP(@2, "a setter");
  }
  | Prolog_XQU Import Separator
  {
    CHECK_SECOND_STEP(@2, "an import");
  }
  | Prolog_XQU NamespaceDecl Separator
  {
    CHECK_SECOND_STEP(@2, "a namespace");
  }
  | Prolog_XQU DefaultNamespaceDecl Separator
  {
    CHECK_SECOND_STEP(@2, "a default namespace");
  }
  | Prolog_XQU VarDecl Separator
  {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
  | Prolog_XQU FunctionDecl Separator
  {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=$2;
    QP->_query->addFunction(decl);
  }
  | Prolog_XQU OptionDecl Separator
  {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
;

////////////////////////////////////////////////////////////////////////////////////////////////////
// XQuery Fulltext Update rules

// [1]    Module    ::=      VersionDecl? (MainModule | LibraryModule)
Module:
  VersionDecl MainModule
  | VersionDecl LibraryModule
  | MainModule
  | LibraryModule
  ;

// [2]    VersionDecl    ::=    <"xquery" "version" StringLiteral> ("encoding" StringLiteral)? Separator
VersionDecl:
  _XQUERY_ _VERSION_ _STRING_LITERAL_ Separator
  {
    if(!XPath2Utils::equals($3,sz1_0))
      yyerror(@2, "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
  }
  | _XQUERY_ _VERSION_ _STRING_LITERAL_ _ENCODING_ _STRING_LITERAL_ Separator
  {
    if(!XPath2Utils::equals($3, sz1_0))
      yyerror(@2, "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");

    XMLCh *encName = $5;
    if((*encName < chLatin_A || *encName > chLatin_Z) && (*encName < chLatin_a || *encName > chLatin_z))
      yyerror(@5, "The specified encoding does not conform to the definition of EncName [err:XQST0087]");

    for(++encName; *encName; ++encName) {
      if((*encName < chLatin_A || *encName > chLatin_Z) &&
         (*encName < chLatin_a || *encName > chLatin_z) &&
         (*encName < chDigit_0 || *encName > chDigit_9) &&
         *encName != chPeriod && *encName != chDash)
        yyerror(@5, "The specified encoding does not conform to the definition of EncName [err:XQST0087]");
    }

    // TODO: store the encoding somewhere
  }
  ;

// [3]    MainModule    ::=    Prolog QueryBody 
MainModule: Prolog QueryBody;

// [4]    LibraryModule    ::=    ModuleDecl Prolog 
LibraryModule: ModuleDecl Prolog;

// [5]    ModuleDecl    ::=    <"module" "namespace"> NCName "=" URILiteral Separator
ModuleDecl:
  _MODULE_ _NAMESPACE_ NCName _EQUALS_ URILiteral Separator
  {
    if(*$5 == 0)
      yyerror(@5, "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace($5);
    SET_NAMESPACE(@3, $3, $5);
  }
  ;

// [6]    Prolog    ::=    ((Setter | Import | NamespaceDecl | DefaultNamespaceDecl) Separator)* 
//               ((VarDecl | FunctionDecl | OptionDecl | FTOptionDecl) Separator)*
Prolog:
  /* empty */
  | Prolog Setter Separator
  {
    CHECK_SECOND_STEP(@2, "a setter");
  }
  | Prolog Import Separator
  {
    CHECK_SECOND_STEP(@2, "an import");
  }
  | Prolog NamespaceDecl Separator
  {
    CHECK_SECOND_STEP(@2, "a namespace");
  }
  | Prolog DefaultNamespaceDecl Separator
  {
    CHECK_SECOND_STEP(@2, "a default namespace");
  }
  | Prolog VarDecl Separator
  {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
  | Prolog FunctionDecl Separator
  {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=$2;
    QP->_query->addFunction(decl);
  }
  | Prolog OptionDecl Separator
  {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
  | Prolog FTOptionDecl Separator
  {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
;

// [7]    Setter    ::=   BoundarySpaceDecl  
//            | DefaultCollationDecl 
//            | BaseURIDecl 
//            | ConstructionDecl 
//            | OrderingModeDecl
//            | EmptyOrderDecl 
//            | CopyNamespacesDecl 
Setter:
  BoundarySpaceDecl  
  | DefaultCollationDecl 
  | BaseURIDecl 
  | ConstructionDecl 
  | OrderingModeDecl 
  | EmptyOrderDecl 
  | RevalidationDecl
  | CopyNamespacesDecl 
;  

// [8]    Import    ::=    SchemaImport | ModuleImport 
Import: SchemaImport | ModuleImport;

// [9]    Separator    ::=    ";" 
Separator: _SEMICOLON_;

// [10]    NamespaceDecl    ::=    <"declare" "namespace"> NCName "=" URILiteral 
NamespaceDecl:
  _DECLARE_ _NAMESPACE_ NCName _EQUALS_ URILiteral 
  {
    SET_NAMESPACE(@3, $3, $5);
  }
  ;

// [11]    BoundarySpaceDecl     ::=    <"declare" "boundary-space"> ("preserve" |  "strip") 
BoundarySpaceDecl :
  _DECLARE_ _BOUNDARY_SPACE_ _PRESERVE_
  {
    CHECK_SPECIFIED(@1, BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
  | _DECLARE_ _BOUNDARY_SPACE_ _STRIP_
  {
    CHECK_SPECIFIED(@1, BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
  ;

// [12]    DefaultNamespaceDecl    ::=    (<"declare" "default" "element"> |  <"declare" "default" "function">) "namespace" URILiteral 
DefaultNamespaceDecl:
  _DECLARE_ _DEFAULT_ _ELEMENT_ _NAMESPACE_ URILiteral
  {
    CHECK_SPECIFIED(@1, BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS($5);
  }
  | _DECLARE_ _DEFAULT_ _FUNCTION_ _NAMESPACE_ URILiteral
  { 
    CHECK_SPECIFIED(@1, BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS($5);
  }
  ;

// [13]     OptionDecl     ::=     <"declare" "option"> QName StringLiteral
OptionDecl:
  _DECLARE_ _OPTION_ QNameValue _STRING_LITERAL_
  {
    // validate the QName
    QualifiedName qName($3);
    const XMLCh* prefix = qName.getPrefix();
    if(prefix==NULL || *prefix==0)
      yyerror(@3, "The option name must have a prefix [err:XPST0081]");

    try {
      LOCATION(@3, loc);
      CONTEXT->getUriBoundToPrefix(prefix, &loc);
    }
    catch(NamespaceLookupException&) {
      yyerror(@3, "The option name is using an undefined namespace prefix [err:XPST0081]");
    }
  }
  ;

// [14]    FTOptionDecl    ::=    "declare" "ft-option" FTMatchOption
FTOptionDecl:
  _DECLARE_ _FT_OPTION_ FTMatchOption
  {
  }
  ;

// [15]    OrderingModeDecl    ::=    <"declare" "ordering"> ("ordered" | "unordered") 
OrderingModeDecl:
  _DECLARE_ _ORDERING_ _ORDERED_
  {
    CHECK_SPECIFIED(@1, BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
  | _DECLARE_ _ORDERING_ _UNORDERED_
  {
    CHECK_SPECIFIED(@1, BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
  ;

// [16]    EmptyOrderDecl    ::=    "declare" "default" "order" "empty" ("greatest" | "least")
EmptyOrderDecl:
  _DECLARE_ _DEFAULT_ _ORDER_ _EMPTY_ _GREATEST_
  { 
    CHECK_SPECIFIED(@1, BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
  | _DECLARE_ _DEFAULT_ _ORDER_ _EMPTY_ _LEAST_
  { 
    CHECK_SPECIFIED(@1, BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
  ;

// [17]    CopyNamespacesDecl    ::=     <"declare" "copy-namespaces"> PreserveMode "," InheritMode
CopyNamespacesDecl:
  _DECLARE_ _COPY_NAMESPACES_ PreserveMode _COMMA_ InheritMode
  {
    CHECK_SPECIFIED(@1, BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces($3);
    CONTEXT->setInheritNamespaces($5);
  }
;

// [18]     PreserveMode     ::=     "preserve" | "no-preserve"
PreserveMode:
  _PRESERVE_
  {
    $$ = true;
  }
  | _NO_PRESERVE_
  {
    $$ = false;
  }
  ;

// [19]     InheritMode     ::=     "inherit" | "no-inherit"
InheritMode:
  _INHERIT_
  {
    $$ = true;
  }
  | _NO_INHERIT_
  {
    $$ = false;
  }
  ;

// [20]    DefaultCollationDecl    ::=    <"declare" "default" "collation"> URILiteral 
DefaultCollationDecl:
  _DECLARE_ _DEFAULT_ _COLLATION_ URILiteral
  {
    CHECK_SPECIFIED(@1, BIT_COLLATION_SPECIFIED, "default collation", "XQST0038");
    try {
      LOCATION(@4, loc);
      CONTEXT->getCollation($4, &loc);
    }
    catch(ContextException&) {
      yyerror(@4, "The specified collation does not exist [err:XQST0038]");
    }
    CONTEXT->setDefaultCollation($4);
  }
;

// [21]    BaseURIDecl    ::=    <"declare" "base-uri"> URILiteral
BaseURIDecl:
  _DECLARE_ _BASE_URI_ URILiteral
  {
    CHECK_SPECIFIED(@1, BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI($3);
  }
;

// [22]    SchemaImport    ::=    <"import" "schema"> SchemaPrefix? URILiteral (<"at" URILiteral> ("," URILiteral)*)?
SchemaImport:
  _IMPORT_ _SCHEMA_ SchemaPrefix URILiteral ResourceLocations
  {
    if(XPath2Utils::equals($3, XMLUni::fgZeroLenString))
      CONTEXT->setDefaultElementAndTypeNS($4);
    else if(XPath2Utils::equals($4, XMLUni::fgZeroLenString))
      yyerror(@1, "A schema that has no target namespace cannot be bound to a non-empty prefix [err:XQST0057]");
    else {
      SET_NAMESPACE(@3, $3, $4);
    }
    LOCATION(@1, loc);
    CONTEXT->addSchemaLocation($4, $5, &loc);
  }
  | _IMPORT_ _SCHEMA_ URILiteral ResourceLocations
  {
    LOCATION(@1, loc);
    CONTEXT->addSchemaLocation($3, $4, &loc);
  }
;

ResourceLocations:
  /* empty */
  {
    $$ = NULL;
  }
  | _AT_ URILiteral
  {
    $$ = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    $$->push_back($2);
  }
  | ResourceLocations _COMMA_ URILiteral
  {
    $1->push_back($3);
    $$ = $1;
  }
;

// [23]    SchemaPrefix    ::=    ("namespace" NCName "=") |  (<"default" "element"> "namespace") 
SchemaPrefix:
  _NAMESPACE_ NCName _EQUALS_
  {
    $$ = $2;
  }
  | _DEFAULT_ _ELEMENT_ _NAMESPACE_
  {
    $$ = (XMLCh*)XMLUni::fgZeroLenString;
  }
  ;

// [24]    ModuleImport    ::=    <"import" "module"> ("namespace" NCName "=")? URILiteral (<"at" URILiteral> ("," URILiteral)*)?
ModuleImport:
  _IMPORT_ _MODULE_ _NAMESPACE_ NCName _EQUALS_ URILiteral ResourceLocations
  {
    if(XMLString::stringLen($6)==0)
      yyerror(@6, "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE(@4, $4, $6);

    LOCATION(@1, loc);
    QP->_query->importModule($6, $7, CONTEXT, &loc);
  }
  | _IMPORT_ _MODULE_ URILiteral ResourceLocations
  {
    if(XMLString::stringLen($3)==0)
      yyerror(@3, "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION(@1, loc);
    QP->_query->importModule($3, $4, CONTEXT, &loc);
  }
  ;

// [25]    VarDecl    ::=    <"declare" "variable" "$"> VarName TypeDeclaration? ((":=" ExprSingle) | "external")
VarDecl:
  _DECLARE_ _VARIABLE_ _DOLLAR_ VarName TypeDeclaration VarDeclValue
  {
    QP->_query->addVariable(WRAP(@1, new (MEMMGR) XQGlobalVariable($4, $5, $6, MEMMGR)));
  }
  ;

VarDeclValue:
  _COLON_EQUALS_ ExprSingle
  {
    $$ = $2;
  }
  | _EXTERNAL_
  {
    $$ = NULL;
  }
;

// [26]    ConstructionDecl    ::=    <"declare" "construction"> ("preserve" | "strip") 
ConstructionDecl:
  _DECLARE_ _CONSTRUCTION_ _PRESERVE_
  {
    CHECK_SPECIFIED(@1, BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
  | _DECLARE_ _CONSTRUCTION_ _STRIP_
  {
    CHECK_SPECIFIED(@1, BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
  ;

// [26]    FunctionDecl      ::=   "declare" "updating"? "function" QName "(" ParamList? ")" ("as" SequenceType)?
//                    (EnclosedExpr | "external")
FunctionDecl:
    _DECLARE_ FunctionDeclUpdating _FUNCTION_ FunctionName FunctionParamList EnclosedExpr
    {
      $$ = WRAP(@1, new (MEMMGR) XQUserFunction($4,$5,WRAP(@6, $6),NULL, $2, MEMMGR));
    }
  | _DECLARE_ FunctionDeclUpdating _FUNCTION_ FunctionName FunctionParamList _AS_ SequenceType EnclosedExpr
    {
      $$ = WRAP(@1, new (MEMMGR) XQUserFunction($4,$5,WRAP(@8, $8),$7, $2, MEMMGR));
    }
  | _DECLARE_ FunctionDeclUpdating _FUNCTION_ FunctionName FunctionParamList _EXTERNAL_
    {
      $$ = WRAP(@1, new (MEMMGR) XQUserFunction($4,$5,NULL,NULL, $2, MEMMGR));
    }
  | _DECLARE_ FunctionDeclUpdating _FUNCTION_ FunctionName FunctionParamList _AS_ SequenceType _EXTERNAL_
    {
      $$ = WRAP(@1, new (MEMMGR) XQUserFunction($4,$5,NULL,$7, $2, MEMMGR));
    }
  ;

FunctionParamList:
  _LPAR_ _RPAR_
  {
    $$ = NULL;
  }
  | _LPAR_ ParamList _RPAR_
  {
    $$ = $2;
  }
  ;

FunctionDeclUpdating:
  {
    $$ = false;
  }
  | _UPDATING_
  {
    $$ = true;
  }
  ;

// [28]    ParamList    ::=    Param ("," Param)* 
ParamList:
  ParamList _COMMA_ Param
  {
    $1->push_back($3);
    $$ = $1;
  }
  | Param
  {
    XQUserFunction::ArgumentSpecs* paramList = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
    paramList->push_back($1);
    $$ = paramList;
  }
;

// [29]    Param    ::=    "$" VarName TypeDeclaration? 
Param:
  _DOLLAR_ VarName TypeDeclaration
  {
    $$ = WRAP(@1, new (MEMMGR) XQUserFunction::ArgumentSpec($2, $3, MEMMGR));
  }
;

// [30]    EnclosedExpr    ::=    "{" Expr "}" 
EnclosedExpr:
    _LBRACE_ Expr _RBRACE_
    {
      $$ = $2;
    }
    | _LBRACE_EXPR_ENCLOSURE_ Expr _RBRACE_
    {
      $$ = $2;
    }
      ;

// [31]    QueryBody    ::=    Expr
QueryBody:
  Expr
  {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP(@1, new (MEMMGR) UApplyUpdates($1, MEMMGR)));
    }
    else {
      QP->_query->setQueryBody($1);
    }
  }
  ;

// [32]    Expr    ::=    ExprSingle ("," ExprSingle)* 
Expr:
    Expr _COMMA_ ExprSingle
    {
      ASTNode* prevExpr=$1;
      if(prevExpr->getType()==ASTNode::PARENTHESIZED)
      {
        ((XQParenthesizedExpr *)prevExpr)->addItem($3);
        $$ = $1;
      }
      else
      {
        XQParenthesizedExpr *dis = WRAP(@2, new (MEMMGR) XQParenthesizedExpr(MEMMGR));
        dis->addItem($1);
        dis->addItem($3);
        $$ = dis;
      }
    }
    | ExprSingle
    ;

// [32]      ExprSingle    ::=    FLWORExpr | QuantifiedExpr | TypeswitchExpr | IfExpr | InsertExpr
//                               | DeleteExpr | RenameExpr | ReplaceExpr | TransformExpr | OrExpr
ExprSingle:
    FLWORExpr
    | QuantifiedExpr
    | TypeswitchExpr
    | IfExpr
    | InsertExpr
    | DeleteExpr
    | RenameExpr
    | ReplaceExpr
    | TransformExpr
    | OrExpr
    ;

// [34]    FLWORExpr    ::=    (ForClause |  LetClause)+ WhereClause? OrderByClause? "return" ExprSingle 
FLWORExpr:
      FLWORTuples _RETURN_ ExprSingle
    {
      // Add a ContextTuple at the start
      TupleNode *tmp = setLastAncestor($1, WRAP(@1, new (MEMMGR) ContextTuple()));

      // Add the return expression
      $$ = WRAP(@2, new (MEMMGR) XQReturn(tmp, $3, MEMMGR));
    }
  ;

FLWORTuples:
      FlworExprForLetList WhereClause OrderByClause
    {
      $$ = setLastAncestor($3, setLastAncestor($2, $1));
    }
    | FlworExprForLetList WhereClause
    {
      $$ = setLastAncestor($2, $1);
    }
    | FlworExprForLetList OrderByClause
    {
      $$ = setLastAncestor($2, $1);
    }
    | FlworExprForLetList
  ;

FlworExprForLetList:
    FlworExprForLetList ForClause
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, @2);

      $$ = setLastAncestor($2, $1);
    }
    | FlworExprForLetList LetClause
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, @2);

      $$ = setLastAncestor($2, $1);
    }
    | ForClause
    | LetClause
      ;

// [35]    ForClause    ::=    "for" "$" VarName TypeDeclaration? PositionalVar? FTScoreVar? "in" ExprSingle
//                                        ("," "$" VarName TypeDeclaration? PositionalVar? FTScoreVar? "in" ExprSingle)*
ForClause:
    _FOR_ ForBindingList
    {
      $$ = $2;
    }
    ;

ForBindingList:
    ForBindingList _COMMA_ ForBinding
    {
      $$ = setLastAncestor($3, $1);
    }
    | ForBinding
    ;

ForBinding:
  _DOLLAR_ VarName TypeDeclaration PositionalVar FTScoreVar _IN_ ExprSingle 
  {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    $3->setOccurrence(SequenceType::STAR);
    $$ = WRAP(@1, new (MEMMGR) ForTuple(0, $2, $4, WRAP(@3, new (MEMMGR) XQTreatAs($7, $3, MEMMGR)), MEMMGR));
  }
  ;

// [36]    PositionalVar    ::=    "at" "$" VarName 
PositionalVar:
  /* empty */
  {
    $$ = NULL;
  }
  | _AT_ _DOLLAR_ VarName
  { 
    REJECT_NOT_XQUERY(PositionalVar, @1);

    $$ = $3; 
  }
;

// [37]    FTScoreVar    ::=    "score" "$" VarName
FTScoreVar:
  /* empty */
  {
    $$ = NULL;
  }
  | _SCORE_ _DOLLAR_ VarName
  {
    $$ = $3;
  }
;

// [38]    LetClause    ::= (("let" "$" VarName TypeDeclaration? FTScoreVar?) |
//                               ("let" "score" "$" VarName)) ":=" ExprSingle
//                               ("," (("$" VarName TypeDeclaration? FTScoreVar?) | FTScoreVar) ":=" ExprSingle)*
LetClause:
  _LET_ LetBindingList
  {
    $$ = $2;
  }
  ;

LetBindingList:
  LetBindingList _COMMA_ LetBinding
  {
    $$ = setLastAncestor($3, $1);
  }
  | LetBinding
;

LetBinding:
  _DOLLAR_ VarName TypeDeclaration FTScoreVar _COLON_EQUALS_ ExprSingle
  {
    $$ = WRAP(@1, new (MEMMGR) LetTuple(0, $2, WRAP(@3, new (MEMMGR) XQTreatAs($6, $3, MEMMGR)), MEMMGR));
  }
  | _SCORE_ _DOLLAR_ VarName _COLON_EQUALS_ ExprSingle
  {
  }
  ;

// [39]    WhereClause    ::=    "where" ExprSingle 
WhereClause:
  _WHERE_ ExprSingle
  { 
    $$ = WRAP(@1, new (MEMMGR) WhereTuple(0, $2));
  }
;

// [40]    OrderByClause    ::=    (<"order" "by"> |  <"stable" "order" "by">) OrderSpecList 
OrderByClause:
  _ORDER_ _BY_ OrderSpecList
  {
    ((OrderByTuple*)getLastAncestor($3))->setUnstable();
    $$ = $3;
  }
  | _STABLE_ _ORDER_ _BY_ OrderSpecList
  {
    $$ = $4;
  }
;

// [41]    OrderSpecList    ::=    OrderSpec ("," OrderSpec)* 
OrderSpecList:
  OrderSpecList _COMMA_ OrderSpec
  {
    $$ = setLastAncestor($1, $3);
  }
  | OrderSpec
  ;

// [42]    OrderSpec    ::=    ExprSingle OrderModifier 
// [43]    OrderModifier    ::=    ("ascending" |  "descending")? (<"empty" "greatest"> |  <"empty" "least">)? ("collation" URILiteral)? 
OrderSpec:
  OrderExpr OrderDirection EmptyHandling
  {
    LOCATION(@1, loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    $$ = WRAP(@1, new (MEMMGR) OrderByTuple(0, $1, OrderByTuple::STABLE | $2 | $3, collation, MEMMGR));
  }
  | OrderExpr OrderDirection EmptyHandling _COLLATION_ URILiteral
  {
    try {
      LOCATION(@4, loc);
      Collation *collation = CONTEXT->getCollation($5, &loc);

      $$ = WRAP(@1, new (MEMMGR) OrderByTuple(0, $1, OrderByTuple::STABLE | $2 | $3, collation, MEMMGR));
    }
    catch(ContextException&) {
      yyerror(@4, "The specified collation does not exist [err:XQST0076]");
    }
  }
;

OrderExpr:
  ExprSingle
  {
    SequenceType *zero_or_one = WRAP(@1, new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING),
                   SequenceType::QUESTION_MARK));

    $$ = $1;
    $$ = WRAP(@1, new (MEMMGR) XQAtomize($$, MEMMGR));
    $$ = WRAP(@1, new (MEMMGR) XQPromoteUntyped($$, SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                                SchemaSymbols::fgDT_STRING, MEMMGR));
    $$ = WRAP(@1, new (MEMMGR) XQTreatAs($$, zero_or_one, MEMMGR));
  }
;
  

OrderDirection:
  /* empty */
  {
    $$ = OrderByTuple::ASCENDING;
  }
  |  _ASCENDING_
  {
    $$ = OrderByTuple::ASCENDING;
  }
  | _DESCENDING_
  {
    $$ = OrderByTuple::DESCENDING;
  }
;

EmptyHandling:
  /* empty */
  {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      $$ = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      $$ = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
  | _EMPTY_ _GREATEST_
  {
    $$ = OrderByTuple::EMPTY_GREATEST;
  }
  | _EMPTY_ _LEAST_
  {
    $$ = OrderByTuple::EMPTY_LEAST;
  }
;

// [44]    QuantifiedExpr    ::=    (<"some" "$"> |  <"every" "$">) VarName TypeDeclaration? "in" ExprSingle 
//                    ("," "$" VarName TypeDeclaration? "in" ExprSingle)* "satisfies" ExprSingle 
QuantifiedExpr:
  _SOME_ QuantifyBindingList _SATISFIES_ ExprSingle
  {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor($2, WRAP(@1, new (MEMMGR) ContextTuple()));

    // Add the return expression
    $$ = WRAP(@3, new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, $4, MEMMGR));
  }
  | _EVERY_ QuantifyBindingList _SATISFIES_ ExprSingle
  {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor($2, WRAP(@1, new (MEMMGR) ContextTuple()));

    // Add the return expression
    $$ = WRAP(@3, new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, $4, MEMMGR));
  }
  ;

QuantifyBindingList:
  QuantifyBindingList _COMMA_ QuantifyBinding
  {
    $$ = setLastAncestor($3, $1);
  }
  | QuantifyBinding
  ;

QuantifyBinding:
  _DOLLAR_ VarName TypeDeclaration _IN_ ExprSingle 
  {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    $3->setOccurrence(SequenceType::STAR);
    $$ = WRAP(@1, new (MEMMGR) ForTuple(0, $2, 0, WRAP(@3, new (MEMMGR) XQTreatAs($5, $3, MEMMGR)), MEMMGR));
  }
;

// [45]    TypeswitchExpr    ::=    <"typeswitch" "("> Expr ")" CaseClause+ "default" ("$" VarName)? "return" ExprSingle 
TypeswitchExpr:
  _TYPESWITCH_ _LPAR_ Expr _RPAR_ CaseClauseList DefaultCase
  {
    $$ = new (MEMMGR) XQTypeswitch( WRAP(@1, $3), $5, $6, MEMMGR);
  }
;

CaseClauseList:
  CaseClauseList CaseClause
  {
    $1->push_back($2);
    $$=$1;
  }
  | CaseClause
  {
    $$=new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    $$->push_back($1);
  }
;

DefaultCase:
  _DEFAULT_ _DOLLAR_ VarName _RETURN_ ExprSingle
  {
    $$ = WRAP(@1, new (MEMMGR) XQTypeswitch::Case($3, NULL, $5));
  }
  | _DEFAULT_ _RETURN_ ExprSingle
  {
    $$ = WRAP(@1, new (MEMMGR) XQTypeswitch::Case(NULL, NULL, $3));
  }
;

// [46]    CaseClause    ::=    "case" ("$" VarName "as")? SequenceType "return" ExprSingle
CaseClause:
  _CASE_ SequenceType _RETURN_ ExprSingle
  { 
    $$ = WRAP(@1, new (MEMMGR) XQTypeswitch::Case(NULL, $2, $4));
  }
  |  _CASE_ _DOLLAR_ VarName _AS_ SequenceType _RETURN_ ExprSingle
  { 
    $$ = WRAP(@1, new (MEMMGR) XQTypeswitch::Case($3, $5, $7));
  }
;

// [47]    IfExpr    ::=    <"if" "("> Expr ")" "then" ExprSingle "else" ExprSingle 
IfExpr:
  _IF_ _LPAR_ Expr _RPAR_ _THEN_ ExprSingle _ELSE_ ExprSingle
  { 
    $$ = WRAP(@1, new (MEMMGR) XQIf($3, $6, $8, MEMMGR));
  }
;

// [48]    OrExpr    ::=    AndExpr ( "or"  AndExpr )* 
OrExpr:
  OrExpr _OR_ AndExpr
  {
    if($1->getType() == ASTNode::OPERATOR && ((XQOperator*)$1)->getOperatorName() == Or::name) {
      ((Or*)$1)->addArgument($3);
      $$ = $1;
    }
    else
      $$ = WRAP(@2, new (MEMMGR) Or(packageArgs($1, $3, MEMMGR), MEMMGR));
  }
  | AndExpr
  ;

// [49]    AndExpr    ::=    ComparisonExpr ( "and" ComparisonExpr )* 
AndExpr:
  AndExpr _AND_ ComparisonExpr
  {
    if($1->getType()==ASTNode::OPERATOR && ((XQOperator*)$1)->getOperatorName() == And::name) {
      ((And*)$1)->addArgument($3);
      $$ = $1;
    }
    else
      $$ = WRAP(@2, new (MEMMGR) And(packageArgs($1, $3, MEMMGR), MEMMGR));
  }
  | ComparisonExpr
  ;

// [50]    ComparisonExpr    ::=    FTContainsExpr ( (ValueComp 
//                  |  GeneralComp 
//                  |  NodeComp)  FTContainsExpr )? 
// [63]    GeneralComp    ::=    "=" |  "!=" |  "<" |  "<=" |  ">" |  ">=" 
// [64]    ValueComp    ::=    "eq" |  "ne" |  "lt" |  "le" |  "gt" |  "ge" 
// [65]    NodeComp    ::=    "is" |  "<<" |  ">>" 
ComparisonExpr:
  FTContainsExpr _EQUALS_ FTContainsExpr
  {
    $$ = WRAP(@2, new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs($1,$3, MEMMGR),MEMMGR));
  }  
  | FTContainsExpr _BANG_EQUALS_ FTContainsExpr
  {
    $$ = WRAP(@2, new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs($1,$3, MEMMGR),MEMMGR));
  }  
  | FTContainsExpr _LESS_THAN_OP_OR_TAG_ { /* Careful! */ QP->_lexer->undoLessThan(); } FTContainsExpr
  {
    $$ = WRAP(@2, new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs($1,$4, MEMMGR),MEMMGR));
  }  
  | FTContainsExpr _LESS_THAN_EQUALS_ FTContainsExpr
  {
    $$ = WRAP(@2, new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs($1,$3, MEMMGR),MEMMGR));
  }  
  | FTContainsExpr _GREATER_THAN_ FTContainsExpr
  {
    $$ = WRAP(@2, new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs($1,$3, MEMMGR),MEMMGR));
  }  
  | FTContainsExpr _GREATER_THAN_EQUALS_ FTContainsExpr
  {
    $$ = WRAP(@2, new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs($1,$3, MEMMGR),MEMMGR));
  }  
  | FTContainsExpr _EQ_ FTContainsExpr
  {
    $$ = WRAP(@2, new (MEMMGR) Equals(packageArgs($1, $3, MEMMGR),MEMMGR));
  }  
  | FTContainsExpr _NE_ FTContainsExpr
  {
    $$ = WRAP(@2, new (MEMMGR) NotEquals(packageArgs($1, $3, MEMMGR),MEMMGR));
  }  
  | FTContainsExpr _LT_ FTContainsExpr
  {
    $$ = WRAP(@2, new (MEMMGR) LessThan(packageArgs($1, $3, MEMMGR),MEMMGR));
  }  
  | FTContainsExpr _LE_ FTContainsExpr
  {
    $$ = WRAP(@2, new (MEMMGR) LessThanEqual(packageArgs($1, $3, MEMMGR),MEMMGR));
  }  
  | FTContainsExpr _GT_ FTContainsExpr
  {
    $$ = WRAP(@2, new (MEMMGR) GreaterThan(packageArgs($1, $3, MEMMGR),MEMMGR));
  }  
  | FTContainsExpr _GE_ FTContainsExpr
  {
    $$ = WRAP(@2, new (MEMMGR) GreaterThanEqual(packageArgs($1, $3, MEMMGR),MEMMGR));
  }  
  | FTContainsExpr _IS_ FTContainsExpr
  {
    $$ = WRAP(@2, new (MEMMGR) NodeComparison(packageArgs($1, $3, MEMMGR), MEMMGR));
  }
  | FTContainsExpr _LESS_THAN_LESS_THAN_ FTContainsExpr
  {
    $$ = WRAP(@2, new (MEMMGR) OrderComparison(packageArgs($1, $3, MEMMGR), true, MEMMGR));
  }
  | FTContainsExpr _GREATER_THAN_GREATER_THAN_ FTContainsExpr
  {
    $$ = WRAP(@2, new (MEMMGR) OrderComparison(packageArgs($1, $3, MEMMGR), false,MEMMGR));
  }
  | FTContainsExpr
  ;

// [51]    FTContainsExpr    ::=    RangeExpr ( "ftcontains" FTSelection FTIgnoreOption? )?
FTContainsExpr:
  RangeExpr _FTCONTAINS_ FTSelection
  {
    $$ = WRAP(@2, new (MEMMGR) FTContains($1, $3, NULL, MEMMGR));
  }
  | RangeExpr _FTCONTAINS_ FTSelection FTIgnoreOption
  {
    $$ = WRAP(@2, new (MEMMGR) FTContains($1, $3, $4, MEMMGR));
  }
  | RangeExpr
  ;

// [52]    RangeExpr    ::=    AdditiveExpr ( "to"  AdditiveExpr )?
RangeExpr:
  AdditiveExpr _TO_ AdditiveExpr
  {
    $$ = WRAP(@2, new (MEMMGR) Range(packageArgs($1, $3, MEMMGR),MEMMGR));
  }
  | AdditiveExpr
  ;

// [53]    AdditiveExpr    ::=    MultiplicativeExpr ( ("+" |  "-")  MultiplicativeExpr )* 
AdditiveExpr:
  AdditiveExpr _PLUS_ MultiplicativeExpr
  {
    $$ = WRAP(@2, new (MEMMGR) Plus(packageArgs($1, $3, MEMMGR),MEMMGR));
  }
  | AdditiveExpr _MINUS_ MultiplicativeExpr
  {
    $$ = WRAP(@2, new (MEMMGR) Minus(packageArgs($1, $3, MEMMGR),MEMMGR));
  }
  | MultiplicativeExpr
  ;

// [54]    MultiplicativeExpr    ::=    UnionExpr ( ("*" |  "div" |  "idiv" |  "mod")  UnionExpr )* 
MultiplicativeExpr:
  MultiplicativeExpr _ASTERISK_ UnionExpr 
  {
    $$ = WRAP(@2, new (MEMMGR) Multiply(packageArgs($1, $3, MEMMGR),MEMMGR));
  }
  | MultiplicativeExpr _DIV_ UnionExpr 
  {
    $$ = WRAP(@2, new (MEMMGR) Divide(packageArgs($1, $3, MEMMGR),MEMMGR));
  }
  | MultiplicativeExpr _IDIV_ UnionExpr 
  {
    $$ = WRAP(@2, new (MEMMGR) IntegerDivide(packageArgs($1, $3, MEMMGR),MEMMGR));
  }
  | MultiplicativeExpr _MOD_ UnionExpr 
  {
    $$ = WRAP(@2, new (MEMMGR) Mod(packageArgs($1, $3, MEMMGR),MEMMGR));
  }
  | UnionExpr 
  ;

// [55]    UnionExpr    ::=    IntersectExceptExpr ( ("union" |  "|")  IntersectExceptExpr )* 
UnionExpr:
      UnionExpr _BAR_ IntersectExceptExpr
    {
      $$ = WRAP(@2, new (MEMMGR) Union(packageArgs($1, $3, MEMMGR),MEMMGR));
    }
    | UnionExpr _UNION_ IntersectExceptExpr
    {
      $$ = WRAP(@2, new (MEMMGR) Union(packageArgs($1, $3, MEMMGR),MEMMGR));
    }
  | IntersectExceptExpr
    ;

// [56]    IntersectExceptExpr    ::=    InstanceofExpr ( ("intersect" |  "except")  InstanceofExpr )* 
IntersectExceptExpr:
      IntersectExceptExpr _INTERSECT_ InstanceofExpr
    {
      $$ = WRAP(@2, new (MEMMGR) Intersect(packageArgs($1, $3, MEMMGR),MEMMGR));
    }
    | IntersectExceptExpr _EXCEPT_ InstanceofExpr
    {
      $$ = WRAP(@2, new (MEMMGR) Except(packageArgs($1, $3, MEMMGR),MEMMGR));
    }
  | InstanceofExpr
    ;

// [57]    InstanceofExpr    ::=    TreatExpr ( <"instance" "of"> SequenceType )? 
InstanceofExpr:
  TreatExpr _INSTANCE_ _OF_ SequenceType
  {
    $$ = WRAP(@2, new (MEMMGR) XQInstanceOf($1,$4,MEMMGR));
  }
  | TreatExpr
  ;

// [58]    TreatExpr    ::=    CastableExpr ( <"treat" "as"> SequenceType )? 
TreatExpr:
  CastableExpr _TREAT_ _AS_ SequenceType
  {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs($1,$4,MEMMGR, err_XPDY0050);
    $$ = WRAP(@2, treatAs);
  }
  | CastableExpr
  ;

// [59]    CastableExpr    ::=    CastExpr ( <"castable" "as"> SingleType )? 
CastableExpr:
  CastExpr _CASTABLE_ _AS_ SingleType
  {
    $$ = WRAP(@2, new (MEMMGR) XQCastableAs($1,$4,MEMMGR));
  }
  | CastExpr
  ;

// [60]    CastExpr    ::=    UnaryExpr (<"cast" "as"> SingleType)?
CastExpr:
  UnaryExpr _CAST_ _AS_ SingleType
  {
    $$ = WRAP(@1, new (MEMMGR) XQCastAs($1,$4,MEMMGR));
  }
  | UnaryExpr
  ;

// [61]    UnaryExpr    ::=    ("-" |  "+")* ValueExpr 
UnaryExpr:
      _MINUS_ UnaryExpr
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back($2);
      $$ = WRAP(@1, new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    | _PLUS_ UnaryExpr
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back($2);
      $$ = WRAP(@1, new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
  | ValueExpr 
    ;

// [62]    ValueExpr    ::=    ValidateExpr | PathExpr | ExtensionExpr
ValueExpr:
    ValidateExpr
  | PathExpr
  | ExtensionExpr
  ;

// [66]    ValidateExpr    ::=    (<"validate" "{"> |  
//                   (<"validate" ValidationMode> "{")
//                  ) Expr "}" 
// [67]    ValidationMode    ::=    "lax" | "strict"
ValidateExpr:
    _VALIDATE_ _LBRACE_EXPR_ENCLOSURE_ Expr _RBRACE_
    {
      $$ = WRAP(@1, new (MEMMGR) XQValidate($3,DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
  | _VALIDATE_ _LAX_ _LBRACE_EXPR_ENCLOSURE_ Expr _RBRACE_
    {
      $$ = WRAP(@1, new (MEMMGR) XQValidate($4,DocumentCache::VALIDATION_LAX,MEMMGR));
    }
  | _VALIDATE_ _STRICT_ _LBRACE_EXPR_ENCLOSURE_ Expr _RBRACE_
    {
      $$ = WRAP(@1, new (MEMMGR) XQValidate($4,DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
  ;

// [68]     ExtensionExpr     ::=     Pragma+ "{" Expr? "}"
ExtensionExpr:
    PragmaList _LBRACE_EXPR_ENCLOSURE_ _RBRACE_
  {
    REJECT_NOT_XQUERY(ExtensionExpr, @1);

    // we don't support any pragma
    yyerror(@1, "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
  | PragmaList _LBRACE_EXPR_ENCLOSURE_ Expr _RBRACE_
  {
    REJECT_NOT_XQUERY(ExtensionExpr, @1);

    // we don't support any pragma
    $$ = $3;
  }
  ;

PragmaList: Pragma | PragmaList Pragma;

// [69]     Pragma     ::=     "(#" S? QName (S PragmaContents)? "#)"
Pragma:
    _PRAGMA_OPEN_ OptionalWhitespace QNameValue PragmaContents
      {
        // validate the QName
        QualifiedName qName($3);
        const XMLCh* prefix=qName.getPrefix();
        if(prefix == NULL || *prefix == 0)
          yyerror(@3, "The pragma name must have a prefix [err:XPST0081]");

        try {
          LOCATION(@3, loc);
          CONTEXT->getUriBoundToPrefix(prefix, &loc);
        }
        catch(NamespaceLookupException&) {
          yyerror(@3, "The pragma name is using an undefined namespace prefix [err:XPST0081]");
        }
      }
  ;

// [70]     PragmaContents     ::=     (Char* - (Char* '#)' Char*))
PragmaContents:
  _PRAGMA_CONTENT_
  | _WHITESPACE_ _PRAGMA_CONTENT_
  {
    $$ = $2;
  }
;

// [71]    PathExpr    ::=    ("/" RelativePathExpr?) |  ("//" RelativePathExpr) |  RelativePathExpr 
PathExpr:
  LeadingSlash
  | LeadingSlash RelativePathExpr
  {
    XQNav *nav = GET_NAVIGATION(@1, $1);
    nav->addStep($2);
    $$ = nav;
  }
  | _SLASH_SLASH_ RelativePathExpr
  {
    XQNav *nav = WRAP(@1, new (MEMMGR) XQNav(MEMMGR));

    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP(@1, new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP(@1, new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    nav->addStep(WRAP(@1, new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR)));

    NodeTest *step = new (MEMMGR) NodeTest();
    step->setTypeWildcard();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    nav->addStep(WRAP(@1, new (MEMMGR) XQStep(XQStep::DESCENDANT_OR_SELF, step, MEMMGR)));

    nav->addStep($2);
    $$ = nav;
  }
  | RelativePathExpr
  ;

LeadingSlash:
  _SLASH_
  {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP(@1, new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP(@1, new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    $$ = WRAP(@1, new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
;

// [72]    RelativePathExpr    ::=    StepExpr (("/" |  "//") StepExpr)* 
RelativePathExpr:
  RelativePathExpr _SLASH_ StepExpr
  {
    XQNav *nav = GET_NAVIGATION(@1, $1);
    nav->addStep($3);
    $$ = nav;
  }
  | RelativePathExpr _SLASH_SLASH_ StepExpr
  {
    XQNav *nav = GET_NAVIGATION(@1, $1);

    NodeTest *step = new (MEMMGR) NodeTest();
    step->setTypeWildcard();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    nav->addStep(WRAP(@2, new (MEMMGR) XQStep(XQStep::DESCENDANT_OR_SELF, step, MEMMGR)));
    nav->addStep($3);

    $$ = nav;
  }
  | StepExpr
  ;

// [73]    StepExpr    ::=    AxisStep |  FilterExpr 
StepExpr: AxisStep | FilterExpr;

// [74]    AxisStep    ::=    (ForwardStep |  ReverseStep) PredicateList 
AxisStep:
  ForwardStep PredicateList
  {
    $$ = XQPredicate::addPredicates($1, $2);
  }
  | ReverseStep PredicateList
  {
    $$ = XQPredicate::addReversePredicates($1, $2);
    $$ = WRAP(@1, new (MEMMGR) XQDocumentOrder($$, MEMMGR));
  }
  ;

// [75]    ForwardStep    ::=    (ForwardAxis NodeTest) |  AbbrevForwardStep 
ForwardStep:
  ForwardAxis NodeTest
  {
    if(!$2->isNodeTypeSet()) {
      switch($1) {
      case XQStep::NAMESPACE: $2->setNodeType(Node::namespace_string); break;
      case XQStep::ATTRIBUTE: $2->setNodeType(Node::attribute_string); break;
      default: $2->setNodeType(Node::element_string); break;
      }
    }

    $$ = WRAP(@1, new (MEMMGR) XQStep($1,$2,MEMMGR));
  }
  | AbbrevForwardStep
  ;

// [76]    ForwardAxis    ::=    <"child" "::">
//                |  <"descendant" "::">
//                |  <"attribute" "::">
//                |  <"self" "::">
//                |  <"descendant-or-self" "::"> 
//                |  <"following-sibling" "::">
//                |  <"following" "::">
ForwardAxis:
  _CHILD_ _COLON_COLON_
  {
    $$ = XQStep::CHILD;
  }
  | _DESCENDANT_ _COLON_COLON_
  {
    $$ = XQStep::DESCENDANT;
  }
  | _ATTRIBUTE_ _COLON_COLON_
  {
    $$ = XQStep::ATTRIBUTE;
  }
  | _SELF_ _COLON_COLON_
  {
    $$ = XQStep::SELF;
  }
  | _DESCENDANT_OR_SELF_ _COLON_COLON_
  {
    $$ = XQStep::DESCENDANT_OR_SELF;
  }
  | _FOLLOWING_SIBLING_ _COLON_COLON_
  {
    $$ = XQStep::FOLLOWING_SIBLING;
  }
  | _FOLLOWING_ _COLON_COLON_
  {
    $$ = XQStep::FOLLOWING;
  }
  | _NAMESPACE_ _COLON_COLON_
  {
    $$ = XQStep::NAMESPACE;
  }
  ;

// [77]    AbbrevForwardStep    ::=    "@"? NodeTest
AbbrevForwardStep:
  _AT_SIGN_ NodeTest
  {
    if(!$2->isNodeTypeSet()) {
      $2->setNodeType(Node::attribute_string);
    }

    $$ = WRAP(@1, new (MEMMGR) XQStep(XQStep::ATTRIBUTE, $2, MEMMGR));
  }
  | NodeTest
  {
    XQStep::Axis axis = XQStep::CHILD;
    SequenceType::ItemType *itemtype = $1->getItemType();
    if(itemtype != 0 && itemtype->getItemTestType() == SequenceType::ItemType::TEST_ATTRIBUTE) {
      axis = XQStep::ATTRIBUTE;
    }
    else if(!$1->isNodeTypeSet()) {
      $1->setNodeType(Node::element_string);
    }

    $$ = WRAP(@1, new (MEMMGR) XQStep(axis, $1, MEMMGR));
  }
  ;

// [78]    ReverseStep    ::=    (ReverseAxis NodeTest) |  AbbrevReverseStep 
ReverseStep:
  ReverseAxis NodeTest
  {
    if(!$2->isNodeTypeSet()) {
      $2->setNodeType(Node::element_string);
    }

    $$ = WRAP(@1, new (MEMMGR) XQStep($1, $2, MEMMGR));
  }
  | AbbrevReverseStep 
  ;

// [79]    ReverseAxis    ::=    <"parent" "::"> 
//                | <"ancestor" "::">
//                | <"preceding-sibling" "::">
//                | <"preceding" "::">
//                | <"ancestor-or-self" "::">
ReverseAxis:
  _PARENT_ _COLON_COLON_
  {
    $$ = XQStep::PARENT;
  }
  | _ANCESTOR_ _COLON_COLON_
  {
    $$ = XQStep::ANCESTOR;
  }
  | _PRECEDING_SIBLING_ _COLON_COLON_
  {
    $$ = XQStep::PRECEDING_SIBLING;
  }
  | _PRECEDING_ _COLON_COLON_
  {
    $$ = XQStep::PRECEDING;
  }
  | _ANCESTOR_OR_SELF_ _COLON_COLON_
  {
    $$ = XQStep::ANCESTOR_OR_SELF;
  }
  ;

// [80]    AbbrevReverseStep    ::=    ".." 
AbbrevReverseStep:
  _DOT_DOT_
  {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    $$ = WRAP(@1, new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }  
  ;

// [81]    NodeTest    ::=    KindTest |  NameTest 
NodeTest:
  KindTest
  {
    $$ = new (MEMMGR) NodeTest();
    $$->setItemType($1);
  }
  | NameTest
  ;

// [82]    NameTest    ::=    QName |  Wildcard 
NameTest:
  QName
  {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix($1->getPrefix());
    step->setNodeName($1->getName());
    $$ = step;
  }
  | Wildcard
  ;

// [83]    Wildcard    ::=    "*" |  <NCName ":" "*"> |  <"*" ":" NCName> 
Wildcard:
  _ASTERISK_
  {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    $$ = step;
  }
  | _NCNAME_COLON_STAR_
  {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix($1);
    step->setNameWildcard();
    $$ = step;
  }
  | _STAR_COLON_NCNAME_
  {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName($1);
    step->setNamespaceWildcard();
    $$ = step;
  }
  ;

// [84]    FilterExpr    ::=    PrimaryExpr PredicateList 
FilterExpr:
  PrimaryExpr PredicateList
  {
    $$ = XQPredicate::addPredicates($1, $2);
  }
  ;

// [85]    PredicateList    ::=    Predicate* 
// [86]    Predicate    ::=    "[" Expr "]" 
PredicateList:
  /* empty */
  {
    $$ = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
  | PredicateList _LSQUARE_ Expr _RSQUARE_
  {
    XQPredicate *pred = WRAP(@2, new (MEMMGR) XQPredicate($3, MEMMGR));
    $1->push_back(pred);
    $$ = $1; 
  }
  ;

// [87]    PrimaryExpr    ::=    Literal |  VarRef | ParenthesizedExpr | ContextItemExpr | FunctionCall | Constructor | OrderedExpr | UnorderedExpr
PrimaryExpr:
     Literal 
  |  VarRef
  |  ParenthesizedExpr 
  |  ContextItemExpr
  |  FunctionCall 
  |  Constructor
  |  OrderedExpr 
  |  UnorderedExpr
  ;

// [88]    Literal    ::=    NumericLiteral |  StringLiteral 
Literal: NumericLiteral | StringLiteral;

// [89]    NumericLiteral    ::=    IntegerLiteral |  DecimalLiteral |  DoubleLiteral 
NumericLiteral: IntegerLiteral | DecimalLiteral | DoubleLiteral;

// [90]    VarRef    ::=    "$" VarName 
VarRef:
  _DOLLAR_ VarName
  {
    $$ = WRAP(@1, new (MEMMGR) XQVariable($2, MEMMGR));
  }
  ;

// [91]    VarName    ::=    QName
VarName: QNameValue;
    
// [92]    ParenthesizedExpr    ::=    "(" Expr? ")" 
ParenthesizedExpr:
  _LPAR_ Expr _RPAR_
  { 
    $$ = $2;
  }
  | _LPAR_ _RPAR_
  { 
    $$ = WRAP(@1, new (MEMMGR) XQSequence(MEMMGR));
  }
;

// [93]    ContextItemExpr    ::=    "." 
ContextItemExpr:
  _DOT_
  {
    $$ = WRAP(@1, new (MEMMGR) XQContextItem(MEMMGR));
  }
  ;

// [94]    OrderedExpr    ::=    <"ordered" "{"> Expr "}" 
OrderedExpr:
  _ORDERED_ _LBRACE_EXPR_ENCLOSURE_ Expr _RBRACE_
  {
    REJECT_NOT_XQUERY(OrderedExpr, @1);

    $$ = WRAP(@1, new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, $3, MEMMGR));
  }
  ;

// [95]    UnorderedExpr    ::=    <"unordered" "{"> Expr "}" 
UnorderedExpr:
  _UNORDERED_ _LBRACE_EXPR_ENCLOSURE_ Expr _RBRACE_
  {
    REJECT_NOT_XQUERY(UnorderedExpr, @1);

    $$ = WRAP(@1, new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, $3, MEMMGR));
  }
  ;

// [96]    FunctionCall    ::=    <QName "("> (ExprSingle ("," ExprSingle)*)? ")" 
FunctionCall:
  FunctionName _LPAR_ _RPAR_
  {
    $$ = WRAP(@1, new (MEMMGR) XQFunctionCall($1, NULL, MEMMGR));
  }
  | FunctionName _LPAR_ FunctionCallArgumentList _RPAR_
  {
    $$ = WRAP(@1, new (MEMMGR) XQFunctionCall($1, $3, MEMMGR));
  }
  ;

FunctionCallArgumentList:
  FunctionCallArgumentList _COMMA_ ExprSingle
  {
    $1->push_back($3);
    $$ = $1;
  }
  | ExprSingle
  {
    $$ = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    $$->push_back($1);
  }  
  ;

// [97]    Constructor    ::=    DirectConstructor | ComputedConstructor 
Constructor:
  DirectConstructor
  {
    REJECT_NOT_XQUERY(Constructor, @1);
  }
  | ComputedConstructor
  {
    REJECT_NOT_XQUERY(Constructor, @1);
  }
  ;

// [98]    DirectConstructor    ::=    DirElemConstructor
//                   | DirCommentConstructor
//                   | DirPIConstructor 
DirectConstructor: DirElemConstructor | DirCommentConstructor | DirPIConstructor;

// [99]    DirElemConstructor    ::=    "<" QName DirAttributeList ("/>" |  (">" DirElementContent* "</" QName S? ">")) 
DirElemConstructor:
  _LESS_THAN_OP_OR_TAG_ DirElemConstructorQName DirAttributeList OptionalWhitespace _EMPTY_TAG_CLOSE_
  { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP(@2, new (MEMMGR) XQDirectName($2, /*isAttr*/false, MEMMGR));
    $$ = WRAP(@1, new (MEMMGR) XQElementConstructor(name, $3, content, MEMMGR));
  }
  | _LESS_THAN_OP_OR_TAG_ DirElemConstructorQName DirAttributeList OptionalWhitespace _START_TAG_CLOSE_ DirElementContent _END_TAG_OPEN_ DirElemConstructorQName OptionalWhitespace _END_TAG_CLOSE_
  { 
    if(!XPath2Utils::equals($2, $8))
      yyerror(@7, "Close tag does not match open tag");
    ASTNode *name = WRAP(@2, new (MEMMGR) XQDirectName($2, /*isAttr*/false, MEMMGR));
    $$ = WRAP(@1, new (MEMMGR) XQElementConstructor(name, $3, $6, MEMMGR));
  }
  ;

DirElemConstructorQName: _QNAME_ | _XMLNS_QNAME_;

// [100]    DirAttributeList    ::=    (S (QName S? "=" S? DirAttributeValue)?)* 
DirAttributeList: 
  /* empty */
  {
    $$ = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
  | DirAttributeList _WHITESPACE_ _QNAME_ OptionalWhitespace _VALUE_INDICATOR_ OptionalWhitespace DirAttributeValue
  {
    $$ = $1;

    ASTNode *name = WRAP(@3, new (MEMMGR) XQDirectName($3, /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP(@3, new (MEMMGR) XQAttributeConstructor(name, $7,MEMMGR));

    $$->push_back(attrItem);
  }
  | DirAttributeList _WHITESPACE_ _XMLNS_QNAME_ OptionalWhitespace _VALUE_INDICATOR_ OptionalWhitespace LiteralDirAttributeValue
  {
    $$ = $1;

    ASTNode *name = WRAP(@3, new (MEMMGR) XQDirectName($3, /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP(@3, new (MEMMGR) XQAttributeConstructor(name, $7,MEMMGR));

    $$->insert($$->begin(), attrItem);
  }
  ;

OptionalWhitespace: /* empty */ | _WHITESPACE_;

// [101]    DirAttributeValue    ::=    ('"' (EscapeQuot |  QuotAttrValueContent)* '"')
//                 |  ("'" (EscapeApos |  AposAttrValueContent)* "'") 
DirAttributeValue:
  _OPEN_QUOT_ QuotAttrValueContent _CLOSE_QUOT_
  { 
    $$ = $2;
  }
  | _OPEN_APOS_ AposAttrValueContent _CLOSE_APOS_
  { 
    $$ = $2;
  }
  ;

LiteralDirAttributeValue:
  _OPEN_QUOT_ LiteralQuotAttrValueContent _CLOSE_QUOT_
  { 
    $$ = $2;
  }
  | _OPEN_APOS_ LiteralAposAttrValueContent _CLOSE_APOS_
  { 
    $$ = $2;
  }
  ;

// [102]    QuotAttrValueContent    ::=    QuotAttContentChar
//                    |  CommonContent
// [105]    CommonContent    ::=    PredefinedEntityRef | CharRef | "{{" | "}}" | EnclosedExpr 
QuotAttrValueContent:
  /* empty */
  { 
    $$ = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
  | QuotAttrValueContent EnclosedExpr
  {
    $$ = $1;
    $$->push_back($2);
  }
  | QuotAttrValueContent _QUOT_ATTR_CONTENT_
  {
    $$ = $1;

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               $2, AnyAtomicType::STRING);
    $$->push_back(WRAP(@2, new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
  ;

LiteralQuotAttrValueContent:
  /* empty */
  { 
    $$ = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
  | LiteralQuotAttrValueContent EnclosedExpr
  {
    yyerror(@2, "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
  | LiteralQuotAttrValueContent _QUOT_ATTR_CONTENT_
  {
    $$ = $1;

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               $2, AnyAtomicType::STRING);
    $$->push_back(WRAP(@2, new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
  ;

// [103]    AposAttrValueContent    ::=    AposAttContentChar
//                    |  CommonContent
// [105]    CommonContent    ::=    PredefinedEntityRef | CharRef | "{{" | "}}" | EnclosedExpr 
AposAttrValueContent:
  /* empty */
  { 
    $$ = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
  | AposAttrValueContent EnclosedExpr
  {
    $$ = $1;
    $$->push_back($2);
  }
  | AposAttrValueContent _APOS_ATTR_CONTENT_
  {
    $$ = $1;

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               $2, AnyAtomicType::STRING);
    $$->push_back(WRAP(@2, new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
  ;

LiteralAposAttrValueContent:
  /* empty */
  { 
    $$ = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
  | LiteralAposAttrValueContent EnclosedExpr
  {
    yyerror(@2, "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
  | LiteralAposAttrValueContent _APOS_ATTR_CONTENT_
  {
    $$ = $1;

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               $2, AnyAtomicType::STRING);
    $$->push_back(WRAP(@2, new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
  ;

// [104]    DirElementContent    ::=    DirectConstructor 
//                  |  ElementContentChar
//                  |  CdataSection 
//                  |  CommonContent
// [105]    CommonContent    ::=    PredefinedEntityRef | CharRef | "{{" | "}}" | EnclosedExpr 
// [110]    CDataSection    ::=    "<![CDATA[" CDataSectionContents "]]>"
// [111]    CDataSectionContents    ::=    (Char* - (Char* ']]>' Char*)) 
DirElementContent:
  /* empty */
  {
    $$ = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
  |  DirElementContent DirectConstructor
  {
    $$ = $1;
    $$->push_back($2);
  }
  | DirElementContent EnclosedExpr
  {
    $$ = $1;
    $$->push_back($2);
  }
  | DirElementContent _ELEMENT_CONTENT_
  {
    $$ = $1;
    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               $2, AnyAtomicType::STRING);

    $$->push_back(WRAP(@2, new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
  | DirElementContent _WHITESPACE_ELEMENT_CONTENT_
  {
    $$ = $1;
    if(CONTEXT->getPreserveBoundarySpace()) {
      AnyAtomicTypeConstructor *ic = new (MEMMGR)
        AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                 SchemaSymbols::fgDT_STRING,
                                 $2, AnyAtomicType::STRING);

      $$->push_back(WRAP(@2, new (MEMMGR) XQLiteral(ic, MEMMGR)));
    }
  }
  ;

// [106]    DirCommentConstructor    ::=    "<!--" DirCommentContents "-->"
DirCommentConstructor:
  _XML_COMMENT_START_ DirCommentContents _XML_COMMENT_END_
  {
    ASTNode *value = WRAP(@1, new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  $2, AnyAtomicType::STRING),
                  MEMMGR));
    $$ = WRAP(@1, new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
  ;

// [107]    DirCommentContents    ::=    ((Char - '-') | <'-' (Char - '-')>)* 
DirCommentContents:
  /* empty */
  {
    $$ = (XMLCh*)XMLUni::fgZeroLenString;
  }
  | _XML_COMMENT_CONTENT_
  ;

// [108]    DirPIConstructor    ::=    "<?" PITarget (S DirPIContents)? "?>"
DirPIConstructor:
  _PI_START_ _PI_TARGET_ DirPIContents
  {
    ASTNode *value = WRAP(@3, new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  $3, AnyAtomicType::STRING),
                  MEMMGR));
    $$ = WRAP(@1, new (MEMMGR) XQPIConstructor(
                    WRAP(@2, new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  $2, AnyAtomicType::STRING),
                  MEMMGR)), 
                  value, MEMMGR));
  }
  ;

// [109]    DirPIContents    ::=    (Char* - (Char* '?>' Char*)) 
DirPIContents:
  _PI_CONTENT_
  | _WHITESPACE_ _PI_CONTENT_
  {
    $$ = $2;
  }
  ;

// [112]    ComputedConstructor    ::=   CompDocConstructor
//                     | CompElemConstructor
//                     | CompAttrConstructor
//                     | CompTextConstructor
//                     | CompCommentConstructor
//                     | CompPIConstructor 
ComputedConstructor:
  CompDocConstructor
  | CompElemConstructor
  | CompAttrConstructor
  | CompTextConstructor
  | CompCommentConstructor
  | CompPIConstructor 
  ;

// [113]    CompDocConstructor    ::=    <"document" "{"> Expr "}" 
CompDocConstructor:
  _DOCUMENT_ _LBRACE_EXPR_ENCLOSURE_ Expr _RBRACE_
  {
    $$ = WRAP(@1, new (MEMMGR) XQDocumentConstructor($3, MEMMGR));
  }
  ;

// [114]    CompElemConstructor    ::=    (<"element" QName "{"> |  (<"element" "{"> Expr "}" "{")) ContentExpr? "}" 
CompElemConstructor:
  _ELEMENT_ CompConstructorName ContentExpr
  {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    $$ = WRAP(@1, new (MEMMGR) XQElementConstructor($2, empty, $3, MEMMGR));
  }
  ;

CompConstructorName:
  _CONSTR_QNAME_
  {
    $$ = WRAP(@1, new (MEMMGR) XQDirectName($1, /*isAttr*/false, MEMMGR));
  }
  | _LBRACE_EXPR_ENCLOSURE_ Expr _RBRACE_
  {
    $$ = $2;
  }
  ;

// [115]    ContentExpr    ::=    Expr
ContentExpr:
  _LBRACE_EXPR_ENCLOSURE_ _RBRACE_
  {
    $$ = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
  | _LBRACE_EXPR_ENCLOSURE_ Expr _RBRACE_
  {
    $$ = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    $$->push_back($2);
  }
  ;

// [116]    CompAttrConstructor    ::=    (<"attribute" QName "{"> |  (<"attribute" "{"> Expr "}" "{")) Expr? "}" 
CompAttrConstructor:
  _ATTRIBUTE_ CompConstructorName ContentExpr
  {
    $$ = WRAP(@1, new (MEMMGR) XQAttributeConstructor($2, $3, MEMMGR));
  }
  ;

// [117]    CompTextConstructor    ::=    <"text" "{"> Expr "}" 
CompTextConstructor:
  _TEXT_ _LBRACE_EXPR_ENCLOSURE_ Expr _RBRACE_
  {
    $$ = WRAP(@1, new (MEMMGR) XQTextConstructor($3, MEMMGR));
  }
  ;

// [118]    CompCommentConstructor    ::=    <"comment" "{"> Expr "}" 
CompCommentConstructor:
  _COMMENT_ _LBRACE_EXPR_ENCLOSURE_ Expr _RBRACE_
  {
    $$ = WRAP(@1, new (MEMMGR) XQCommentConstructor($3, MEMMGR));
  }
  ;

// [119]    CompPIConstructor    ::=    (<"processing-instruction" NCName "{"> | (<"processing-instruction" "{"> Expr "}" "{")) Expr? "}" 
CompPIConstructor:
  _PROCESSING_INSTRUCTION_ CompPINCName CompPIConstructorContent
  {
    $$ = WRAP(@1, new (MEMMGR) XQPIConstructor($2, $3, MEMMGR));
  }
  ;

CompPINCName:
  _CONSTR_QNAME_
  {
    // Check for a colon
    for(XMLCh *tmp = $1; *tmp; ++tmp)
      if(*tmp == ':') yyerror(@1, "Expecting an NCName, found a QName");

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               $1, AnyAtomicType::STRING);

    $$ = WRAP(@1, new (MEMMGR) XQLiteral(ic, MEMMGR));
  }
  | _LBRACE_EXPR_ENCLOSURE_ Expr _RBRACE_
  {
    $$ = $2;
  }
  ;

CompPIConstructorContent:
  _LBRACE_EXPR_ENCLOSURE_ _RBRACE_
  {
    $$ = WRAP(@1, new (MEMMGR) XQSequence(MEMMGR));
  }
  | _LBRACE_EXPR_ENCLOSURE_ Expr _RBRACE_
  {
    $$ = $2;
  }
  ;

// [120]    SingleType    ::=    AtomicType "?"? 
SingleType:
  AtomicType SingleTypeOccurrence
  {
    SequenceType* seq = WRAP(@1, new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, $1));
    seq->setOccurrence($2);
    $$ = seq;
  }
  ;

SingleTypeOccurrence:
  /* empty */
  {
    $$ = SequenceType::EXACTLY_ONE;
  }
  | _QUESTION_MARK_
  {
    $$ = SequenceType::QUESTION_MARK;
  }
;

// [121]    TypeDeclaration    ::=    "as" SequenceType 
TypeDeclaration:
  /* empty */
  {
    $$ = WRAP(@$, new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
  | _AS_ SequenceType
  {
    REJECT_NOT_XQUERY(TypeDeclaration, @1);

    $$ = $2;
  }
  ;

// [122]    SequenceType    ::=    (ItemType OccurrenceIndicator?) |  <" empty-sequence" "(" ")">
SequenceType:
  ItemType OccurrenceIndicator
  {
    SequenceType* seq = WRAP(@1, new (MEMMGR) SequenceType());
    seq->setItemType($1);
    seq->setOccurrence($2);
    $$ = seq;
  }
  | _EMPTY_SEQUENCE_ _LPAR_ _RPAR_
  { 
    $$ = WRAP(@1, new (MEMMGR) SequenceType()); 
  }
;


// [123]    OccurrenceIndicator    ::=    "*" |  "+" |  "?"
OccurrenceIndicator:
  /* empty */
  { $$ = SequenceType::EXACTLY_ONE; }
  | _ASTERISK_
  { $$ = SequenceType::STAR; }
  | _PLUS_
  { $$ = SequenceType::PLUS; }
  | _QUESTION_MARK_
  { $$ = SequenceType::QUESTION_MARK; }
  ;

// [124]    ItemType    ::=    AtomicType | KindTest | <"item" "(" ")"> 
ItemType:
  AtomicType 
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, $1);
  }
  | KindTest 
  | _ITEM_ _LPAR_ _RPAR_
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
  ;

// [125]    AtomicType    ::=    QName 
AtomicType: QName;

// [126]    KindTest    ::=    DocumentTest
//              |  ElementTest
//              |  AttributeTest
//              |  SchemaElementTest
//              |  SchemaAttributeTest
//              |  PITest 
//              |  CommentTest 
//              |  TextTest 
//              |  AnyKindTest 
KindTest:
     DocumentTest
  |  ElementTest
  |  AttributeTest
  |  SchemaElementTest
  |  SchemaAttributeTest
  |  PITest
  |  CommentTest
  |  TextTest
  |  AnyKindTest
  ;

// [127]    AnyKindTest    ::=    <"node" "("> ")" 
AnyKindTest:
  _NODE_ _LPAR_ _RPAR_
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
  ;

// [128]    DocumentTest    ::=    <"document-node" "("> (ElementTest | SchemaElementTest)? ")"
DocumentTest:
  _DOCUMENT_NODE_ _LPAR_ _RPAR_ 
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
  | _DOCUMENT_NODE_ _LPAR_ ElementTest _RPAR_ 
  {
    $$ = $3;
    $$->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
  | _DOCUMENT_NODE_ _LPAR_ SchemaElementTest _RPAR_ 
  {
    $$ = $3;
    $$->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
  ;
  
// [129]    TextTest    ::=    <"text" "("> ")" 
TextTest:
  _TEXT_ _LPAR_ _RPAR_
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
  ;

// [130]    CommentTest    ::=    <"comment" "("> ")" 
CommentTest: 
  _COMMENT_ _LPAR_ _RPAR_
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
  ;

// [131]    PITest    ::=    <"processing-instruction" "("> (NCName | StringLiteral)? ")" 
PITest:
  _PROCESSING_INSTRUCTION_ _LPAR_ _RPAR_
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
  | _PROCESSING_INSTRUCTION_ _LPAR_ NCName _RPAR_
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName($3, MEMMGR));
  }
  | _PROCESSING_INSTRUCTION_ _LPAR_ _STRING_LITERAL_ _RPAR_
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName($3, MEMMGR));
  }
  ;

// [132]    AttributeTest    ::=    <"attribute" "("> (AttribNameOrWildcard ("," TypeName)?)? ")" 
AttributeTest:
  _ATTRIBUTE_ _LPAR_ _RPAR_ 
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
  | _ATTRIBUTE_ _LPAR_ AttribNameOrWildcard _RPAR_ 
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,$3);
  }
  | _ATTRIBUTE_ _LPAR_ AttribNameOrWildcard _COMMA_ TypeName _RPAR_ 
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,$3,$5);
  }
  ;

// [133]    AttribNameOrWildcard    ::=    AttributeName | "*" 
AttribNameOrWildcard:
  AttributeName
  | _ASTERISK_
  {
    $$ = NULL;
  }
  ;

// [134]    SchemaAttributeTest    ::=    <"schema-attribute" "("> AttributeDeclaration ")" 
SchemaAttributeTest:
  _SCHEMA_ATTRIBUTE_ _LPAR_ AttributeDeclaration _RPAR_
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,$3);
  }
  ;

// [135]    AttributeDeclaration    ::=    AttributeName 
AttributeDeclaration:
  AttributeName 
  ;

// [136]    ElementTest    ::=    <"element" "("> (ElementNameOrWildcard ("," TypeName "?"?)?)? ")" 
ElementTest:
  _ELEMENT_ _LPAR_ _RPAR_ 
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
  | _ELEMENT_ _LPAR_ ElementNameOrWildcard _RPAR_ 
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,$3);
  }
  | _ELEMENT_ _LPAR_ ElementNameOrWildcard _COMMA_ TypeName _RPAR_ 
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,$3,$5);
  }
  | _ELEMENT_ _LPAR_ ElementNameOrWildcard _COMMA_ TypeName _QUESTION_MARK_ _RPAR_ 
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,$3,$5);
    $$->setAllowNilled(true);
  }
  ;

// [137]    ElementNameOrWildcard    ::=    ElementName | "*" 
ElementNameOrWildcard:
  ElementName
  | _ASTERISK_
  {
    $$ = NULL;
  }
  ;

// [138]    SchemaElementTest    ::=    <"schema-element" "("> ElementDeclaration ")" 
SchemaElementTest:
  _SCHEMA_ELEMENT_ _LPAR_ ElementDeclaration _RPAR_
  {
    $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,$3);
  }
  ;

// [139]    ElementDeclaration    ::=    ElementName 
ElementDeclaration: ElementName;

// [140]    AttributeName    ::=    QName
AttributeName: QName;

// [141]    ElementName    ::=    QName
ElementName: QName;

// [142]    TypeName    ::=    QName
TypeName: QName;

// [143]     URILiteral     ::=     StringLiteral
URILiteral:
  _STRING_LITERAL_
  {
    // the string must be whitespace-normalized
    XMLString::collapseWS($1, MEMMGR);
    if($1 && *$1 && !XPath2Utils::isValidURI($1, MEMMGR))
      yyerror(@1, "The URI literal is not valid [err:XQST0046]");
    $$ = $1;
  }
  ;

// [144]    FTSelection    ::=    FTOr (FTMatchOption | FTProximity)* ("weight" DecimalLiteral)?
FTSelection:
  FTOr FTSelectionOptions _WEIGHT_ DecimalLiteral
  {
    // TBD FTSelectionOptions and weight
    $$ = $1;

    for(VectorOfFTOptions::iterator i = $2->begin();
        i != $2->end(); ++i) {
      (*i)->setArgument($$);
      $$ = *i;
    }
    delete $2;
  }
  | FTOr FTSelectionOptions
  {
    $$ = $1;

    VectorOfFTOptions *options = $2;
    for(VectorOfFTOptions::iterator i = options->begin();
        i != options->end(); ++i) {
      (*i)->setArgument($$);
      $$ = *i;
    }
    delete options;
  }
  ;

FTSelectionOptions:
  /* empty */
  {
    $$ = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
  }
  | FTSelectionOptions FTMatchOption
  {
    $$ = $1;
  }
  | FTSelectionOptions FTProximity
  {
    if($2 != NULL)
      $1->push_back($2);
    $$ = $1;
  }
  ;

// [145]    FTOr    ::=    FTAnd ( "||" FTAnd )*
FTOr:
  FTOr _BAR_BAR_ FTAnd
  {
    if($1->getType() == FTSelection::OR) {
      FTOr *op = (FTOr*)$1;
      op->addArg($3);
      $$ = op;
    }
    else {
      $$ = WRAP(@2, new (MEMMGR) FTOr($1, $3, MEMMGR));
    }
  }
  | FTAnd
  ;

// [146]    FTAnd    ::=    FTMildnot ( "&&" FTMildnot )*
FTAnd:
  FTAnd _AMP_AMP_ FTMildnot
  {
    if($1->getType() == FTSelection::AND) {
      FTAnd *op = (FTAnd*)$1;
      op->addArg($3);
      $$ = op;
    }
    else {
      $$ = WRAP(@2, new (MEMMGR) FTAnd($1, $3, MEMMGR));
    }
  }
  | FTMildnot
  ;

// [147]    FTMildnot    ::=    FTUnaryNot ( "not" "in" FTUnaryNot )*
FTMildnot:
  FTMildnot _NOT_ _IN_ FTUnaryNot
  {
    $$ = WRAP(@2, new (MEMMGR) FTMildnot($1, $4, MEMMGR));
  }
  | FTUnaryNot
  ;

// [148]    FTUnaryNot    ::=    ("!")? FTWordsSelection
FTUnaryNot:
  _BANG_ FTWordsSelection
  {
    $$ = WRAP(@1, new (MEMMGR) FTUnaryNot($2, MEMMGR));
  }
  | FTWordsSelection
  ;

// [149]    FTWordsSelection    ::=    FTWords | ("(" FTSelection ")")
FTWordsSelection:
  _LPAR_ FTSelection _RPAR_
  {
    $$ = $2;
  }
  | FTWords
  ;

// [150]    FTWords    ::=    (Literal | VarRef | ContextItemExpr | FunctionCall | ("{" Expr "}")) FTAnyallOption?
FTWords:
  Literal FTAnyallOption
  {
    $$ = WRAP(@1, new (MEMMGR) FTWords($1, $2, MEMMGR));
  }
  | VarRef FTAnyallOption
  {
    $$ = WRAP(@1, new (MEMMGR) FTWords($1, $2, MEMMGR));
  }
  | ContextItemExpr FTAnyallOption
  {
    $$ = WRAP(@1, new (MEMMGR) FTWords($1, $2, MEMMGR));
  }
  | FunctionCall FTAnyallOption
  {
    $$ = WRAP(@1, new (MEMMGR) FTWords($1, $2, MEMMGR));
  }
  | _LBRACE_EXPR_ENCLOSURE_ Expr _RBRACE_ FTAnyallOption
  {
    $$ = WRAP(@2, new (MEMMGR) FTWords($2, $4, MEMMGR));
  }
  ;

// [151]    FTProximity    ::=    FTOrderedIndicator | FTWindow | FTDistance | FTTimes | FTScope | FTContent
// [152]    FTOrderedIndicator    ::=    "ordered"
// [164]    FTContent    ::=    ("at" "start") | ("at" "end") | ("entire" "content")
// [167]    FTDistance    ::=    "distance" FTRange FTUnit
// [168]    FTWindow    ::=    "window" UnionExpr FTUnit
// [169]    FTTimes    ::=    "occurs" FTRange "times"
// [170]    FTScope    ::=    ("same" | "different") FTBigUnit
FTProximity:
  _ORDERED_
  {
    $$ = WRAP(@1, new (MEMMGR) FTOrder(MEMMGR));
  }
  | _WINDOW_ UnionExpr FTUnit
  {
    $$ = WRAP(@1, new (MEMMGR) FTWindow($2, $3, MEMMGR));
  }
  | _DISTANCE_ FTRange FTUnit
  {
    $$ = WRAP(@1, new (MEMMGR) FTDistance($2, $3, MEMMGR));
  }
  | _OCCURS_ FTRange _TIMES_
  {
    std::cerr << "occurs" << std::endl;
    $$ = NULL;
  }
  | _SAME_ FTBigUnit
  {
    $$ = WRAP(@1, new (MEMMGR) FTScope(FTScope::SAME, $2, MEMMGR));
  }
  | _DIFFERENT_ FTBigUnit
  {
    $$ = WRAP(@1, new (MEMMGR) FTScope(FTScope::DIFFERENT, $2, MEMMGR));
  }
  | _AT_ _START_
  {
    $$ = WRAP(@1, new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
  | _AT_ _END_
  {
    $$ = WRAP(@1, new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
  | _ENTIRE_ _CONTENT_
  {
    $$ = WRAP(@1, new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
  ;

// [153]    FTMatchOption    ::=    FTCaseOption
//                                  | FTDiacriticsOption
//                                  | FTStemOption
//                                  | FTThesaurusOption
//                                  | FTStopwordOption
//                                  | FTLanguageOption
//                                  | FTWildCardOption
FTMatchOption:
  FTCaseOption
  | FTDiacriticsOption
  | FTStemOption
  | FTThesaurusOption
  | FTStopwordOption
  | FTLanguageOption
  | FTWildCardOption
  ;

// [154]    FTCaseOption    ::=    "lowercase"
//                                 | "uppercase"
//                                 | ("case" "sensitive")
//                                 | ("case" "insensitive")
FTCaseOption:
  _LOWERCASE_
  {
    std::cerr << "lowercase" << std::endl;
  }
  | _UPPERCASE_
  {
    std::cerr << "uppercase" << std::endl;
  }
  | _CASE_S_ _SENSITIVE_
  {
    std::cerr << "case sensitive" << std::endl;
  }
  | _CASE_S_ _INSENSITIVE_
  {
    std::cerr << "case insensitive" << std::endl;
  }
  ;

// [155]    FTDiacriticsOption    ::=    ("with" "diacritics")
//                                       | ("without" "diacritics")
//                                       | ("diacritics" "sensitive")
//                                       | ("diacritics" "insensitive")
FTDiacriticsOption:
  _WITH_FT_ _DIACRITICS_
  {
    std::cerr << "with diacritics" << std::endl;
  }
  | _WITHOUT_ _DIACRITICS_
  {
    std::cerr << "without diacritics" << std::endl;
  }
  | _DIACRITICS_ _SENSITIVE_
  {
    std::cerr << "diacritics sensitive" << std::endl;
  }
  | _DIACRITICS_ _INSENSITIVE_
  {
    std::cerr << "diacritics insensitive" << std::endl;
  }
  ;

//      [156]    FTStemOption    ::=    ("with" "stemming") | ("without" "stemming")
FTStemOption:
  _WITH_FT_ _STEMMING_
  {
    std::cerr << "with stemming" << std::endl;
  }
  | _WITHOUT_ _STEMMING_
  {
    std::cerr << "without stemming" << std::endl;
  }
  ;

// [157]    FTThesaurusOption    ::=    ("with" "thesaurus" (FTThesaurusID | "default"))
//                                    | ("with" "thesaurus" "(" (FTThesaurusID | "default") ("," FTThesaurusID)* ")")
//                                    | ("without" "thesaurus")
FTThesaurusOption:
  _WITH_FT_ _THESAURUS_ FTThesaurusID
  {
    std::cerr << "with thesaurus" << std::endl;
  }
  | _WITH_FT_ _THESAURUS_ _DEFAULT_
  {
    std::cerr << "with thesaurus default" << std::endl;
  }
  | _WITH_FT_ _THESAURUS_ _LPAR_ FTThesaurusID FTThesaurusIDList _RPAR_
  {
    std::cerr << "with thesaurus ()" << std::endl;
  }
  | _WITH_FT_ _THESAURUS_ _LPAR_ _DEFAULT_ FTThesaurusIDList _RPAR_
  {
    std::cerr << "with thesaurus (default)" << std::endl;
  }
  | _WITHOUT_ _THESAURUS_
  {
    std::cerr << "without thesaurus" << std::endl;
  }
  ;

FTThesaurusIDList:
  /* empty */
  {
  }
  | FTThesaurusIDList _COMMA_ FTThesaurusID
  {
  }
  ;

// [158]    FTThesaurusID    ::=    "at" StringLiteral ("relationship" StringLiteral)? (FTRange "levels")?
FTThesaurusID:
  _AT_ StringLiteral
  {
    std::cerr << "at StringLiteral" << std::endl;
  }
  | _AT_ StringLiteral _RELATIONSHIP_ StringLiteral
  {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
  | _AT_ StringLiteral FTRange _LEVELS_
  {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
  | _AT_ StringLiteral _RELATIONSHIP_ StringLiteral FTRange _LEVELS_
  {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
  ;

// [159]    FTStopwordOption    ::=    ("with" "stop" "words" FTRefOrList FTInclExclStringLiteral*)
//                                   | ("without" "stop" "words")
//                                   | ("with" "default" "stop" "words" FTInclExclStringLiteral*)
FTStopwordOption:
  _WITH_FT_ _STOP_ _WORDS_ FTRefOrList FTInclExclStringLiteralList
  {
    std::cerr << "with stop words" << std::endl;
  }
  | _WITHOUT_ _STOP_ _WORDS_
  {
    std::cerr << "without stop words" << std::endl;
  }
  | _WITH_FT_ _DEFAULT_ _STOP_ _WORDS_ FTInclExclStringLiteralList
  {
    std::cerr << "with default stop words" << std::endl;
  }
  ;

FTInclExclStringLiteralList:
  /* empty */
  {
  }
  | FTInclExclStringLiteralList FTInclExclStringLiteral
  {
  }
  ;

// [160]    FTRefOrList    ::=    ("at" StringLiteral)
//                              | ("(" StringLiteral ("," StringLiteral)* ")")
FTRefOrList:
  _AT_ StringLiteral
  {
    std::cerr << "at StringLiteral" << std::endl;
  }
  | _LPAR_ FTRefOrListStringList _RPAR_
  {
    std::cerr << "()" << std::endl;
  }
  ;

FTRefOrListStringList:
  StringLiteral
  {
    std::cerr << "StringLiteral" << std::endl;
  }
  | FTRefOrListStringList _COMMA_ StringLiteral
  {
    std::cerr << ", StringLiteral" << std::endl;
  }
  ;

// [161]    FTInclExclStringLiteral    ::=    ("union" | "except") FTRefOrList
FTInclExclStringLiteral:
  _UNION_ FTRefOrList
  {
    std::cerr << "union" << std::endl;
  }
  | _EXCEPT_ FTRefOrList
  {
    std::cerr << "except" << std::endl;
  }
  ;

// [162]    FTLanguageOption    ::=    "language" StringLiteral
FTLanguageOption:
  _LANGUAGE_ StringLiteral
  {
    std::cerr << "language StringLiteral" << std::endl;
  }
  ;

// [163]    FTWildCardOption    ::=    ("with" "wildcards") | ("without" "wildcards")
FTWildCardOption:
  _WITH_FT_ _WILDCARDS_
  {
    std::cerr << "with wildcards" << std::endl;
  }
  | _WITHOUT_ _WILDCARDS_
  {
    std::cerr << "without wildcards" << std::endl;
  }
  ;

// [165]    FTAnyallOption    ::=    ("any" "word"?) | ("all" "words"?) | "phrase"
FTAnyallOption:
  /* empty */
  {
    $$ = FTWords::ANY;
  }
  | _ANY_
  {
    $$ = FTWords::ANY;
  }
  | _ANY_ _WORD_
  {
    $$ = FTWords::ANY_WORD;
  }
  | _ALL_
  {
    $$ = FTWords::ALL;
  }
  | _ALL_ _WORDS_
  {
    $$ = FTWords::ALL_WORDS;
  }
  | _PHRASE_
  {
    $$ = FTWords::PHRASE;
  }
  ;

// [166]    FTRange    ::=    ("exactly" UnionExpr)
//                          | ("at" "least" UnionExpr)
//                          | ("at" "most" UnionExpr)
//                          | ("from" UnionExpr "to" UnionExpr)
FTRange:
  _EXACTLY_ UnionExpr
  {
    $$.type = FTRange::EXACTLY;
    $$.arg1 = $2;
    $$.arg2 = 0;
  }
  | _AT_LM_ _LEAST_ UnionExpr
  {
    $$.type = FTRange::AT_LEAST;
    $$.arg1 = $3;
    $$.arg2 = 0;
  }
  | _AT_LM_ _MOST_ UnionExpr
  {
    $$.type = FTRange::AT_MOST;
    $$.arg1 = $3;
    $$.arg2 = 0;
  }
  | _FROM_ UnionExpr _TO_ UnionExpr
  {
    $$.type = FTRange::FROM_TO;
    $$.arg1 = $2;
    $$.arg2 = $4;
  }
  ;

// [171]    FTUnit    ::=    "words" | "sentences" | "paragraphs"
FTUnit:
  _WORDS_
  {
    $$ = FTOption::WORDS;
  }
  | _SENTENCES_
  {
    $$ = FTOption::SENTENCES;
  }
  | _PARAGRAPHS_
  {
    $$ = FTOption::PARAGRAPHS;
  }
  ;

// [172]    FTBigUnit    ::=    "sentence" | "paragraph"
FTBigUnit:
  _SENTENCE_
  {
    $$ = FTOption::SENTENCES;
  }
  | _PARAGRAPH_
  {
    $$ = FTOption::PARAGRAPHS;
  }
  ;

// [173]    FTIgnoreOption    ::=    "without" "content" UnionExpr
FTIgnoreOption:
  _WITHOUT_C_ _CONTENT_ UnionExpr
  {
    $$ = $3;
  }
  ;

// [141]      RevalidationDecl      ::=      "declare" "revalidation" ("strict" | "lax" | "skip")
RevalidationDecl:
  _DECLARE_ _REVALIDATION_ _STRICT_
  {
    CHECK_SPECIFIED(@1, BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
  | _DECLARE_ _REVALIDATION_ _LAX_
  {
    CHECK_SPECIFIED(@1, BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
  | _DECLARE_ _REVALIDATION_ _SKIP_
  {
    CHECK_SPECIFIED(@1, BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
  ;

// [142]      InsertExpr      ::=      "do" "insert" SourceExpr ((("as" ("first" | "last"))? "into")
//                                                              | "after" | "before") TargetExpr
// [146]      SourceExpr      ::=      ExprSingle
// [147]      TargetExpr      ::=      ExprSingle
InsertExpr:
  _DO_ _INSERT_ ExprSingle _AS_ _FIRST_ _INTO_ ExprSingle
  {
    $$ = WRAP(@1, new (MEMMGR) UInsertAsFirst($3, $7, MEMMGR));
  }
  | _DO_ _INSERT_ ExprSingle _AS_ _LAST_ _INTO_ ExprSingle
  {
    $$ = WRAP(@1, new (MEMMGR) UInsertAsLast($3, $7, MEMMGR));
  }
  | _DO_ _INSERT_ ExprSingle _INTO_ ExprSingle
  {
    $$ = WRAP(@1, new (MEMMGR) UInsertInto($3, $5, MEMMGR));
  }
  | _DO_ _INSERT_ ExprSingle _AFTER_ ExprSingle
  {
    $$ = WRAP(@1, new (MEMMGR) UInsertAfter($3, $5, MEMMGR));
  }
  | _DO_ _INSERT_ ExprSingle _BEFORE_ ExprSingle
  {
    $$ = WRAP(@1, new (MEMMGR) UInsertBefore($3, $5, MEMMGR));
  }
  ;

// [143]      DeleteExpr      ::=      "do" "delete" TargetExpr
// [147]      TargetExpr      ::=      ExprSingle
DeleteExpr:
  _DO_ _DELETE_ ExprSingle
  {
    $$ = WRAP(@1, new (MEMMGR) UDelete($3, MEMMGR));
  }
  ;

// [144]      ReplaceExpr      ::=      "do" "replace" ("value" "of")? TargetExpr "with" ExprSingle
// [147]      TargetExpr      ::=      ExprSingle
ReplaceExpr:
  _DO_ _REPLACE_ _VALUE_ _OF_ ExprSingle _WITH_ ExprSingle
  {
    $$ = WRAP(@1, new (MEMMGR) UReplaceValueOf($5, $7, MEMMGR));
  }
  | _DO_ _REPLACE_ ExprSingle _WITH_ ExprSingle
  {
    $$ = WRAP(@1, new (MEMMGR) UReplace($3, $5, MEMMGR));
  }
  ;

// [145]      RenameExpr      ::=      "do" "rename" TargetExpr "as" NewNameExpr
// [147]      TargetExpr      ::=      ExprSingle
// [148]      NewNameExpr      ::=      ExprSingle
RenameExpr:
  _DO_ _RENAME_ ExprSingle _AS_ ExprSingle
  {
    $$ = WRAP(@1, new (MEMMGR) URename($3, $5, MEMMGR));
  }
  ;

// [149]      TransformExpr      ::=      "transform" "copy" "$" VarName ":=" ExprSingle ("," "$" VarName ":=" ExprSingle)*
//                                        "modify" ExprSingle "return" ExprSingle
TransformExpr:
  _TRANSFORM_ _COPY_ TransformBindingList _MODIFY_ ExprSingle _RETURN_ ExprSingle
  {
    $$ = WRAP(@1, new (MEMMGR) UTransform($3, $5, $7, MEMMGR));
  }
  ;

TransformBindingList:
  TransformBindingList _COMMA_ TransformBinding
  {
    $1->push_back($3);
    $$ = $1;
  }
  | TransformBinding
  {
    $$ = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    $$->push_back($1);
  }
  ;

TransformBinding:
  _DOLLAR_ VarName _COLON_EQUALS_ ExprSingle
  {
    $$ = WRAP(@1, new (MEMMGR) CopyBinding(MEMMGR, $2, $4));
  }
  ;


// [174]     IntegerLiteral     ::=     Digits
IntegerLiteral:
  _INTEGER_LITERAL_
  {
    $$ = new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  $1, AnyAtomicType::DECIMAL),
                  MEMMGR);
  }
  ;

// [175]     DecimalLiteral     ::=     ("." Digits) | (Digits "." [0-9]*)
DecimalLiteral:
  _DECIMAL_LITERAL_
  {
    $$ = new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  $1, AnyAtomicType::DECIMAL),
                  MEMMGR);
  }
  ;

// [176]     DoubleLiteral     ::=     (("." Digits) | (Digits ("." [0-9]*)?)) [eE] [+-]? Digits
DoubleLiteral:
  _DOUBLE_LITERAL_
  {
    $$ = new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  $1, AnyAtomicType::DOUBLE),
                  MEMMGR);
  }
  ;

// [177]     StringLiteral     ::=     ('"' (PredefinedEntityRef | CharRef | ('"' '"') | [^"&])* '"') | 
//                    ("'" (PredefinedEntityRef | CharRef | ("'" "'") | [^'&])* "'")
StringLiteral:
  _STRING_LITERAL_
  {
    $$ = new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  $1, AnyAtomicType::STRING),
                  MEMMGR);
  }
  ;

NCName:
  QNameValue
  {
    // Check for a colon
    for(XMLCh *tmp = $1; *tmp; ++tmp)
      if(*tmp == ':') yyerror(@1, "Expecting an NCName, found a QName");
  }
  ;

QName:
  QNameValue
  {
    $$ = new (MEMMGR) QualifiedName($1,MEMMGR);
  }
  ;

QNameValue:
FunctionName | _ATTRIBUTE_ | _COMMENT_ | _DOCUMENT_NODE_ | _ELEMENT_ | _ITEM_ | _IF_ | _NODE_ |
_PROCESSING_INSTRUCTION_ | _SCHEMA_ATTRIBUTE_ | _SCHEMA_ELEMENT_ | _TEXT_ | _TYPESWITCH_ | _EMPTY_SEQUENCE_
  ;

FunctionName:
_QNAME_ | _BOUNDARY_SPACE_ | _FT_OPTION_ | _BASE_URI_ | _LAX_ | _STRICT_ | _IDIV_ | _CHILD_ | _DESCENDANT_ | _SELF_ |
_DESCENDANT_OR_SELF_ | _FOLLOWING_SIBLING_ | _FOLLOWING_ | _PARENT_ | _ANCESTOR_ | _PRECEDING_SIBLING_ | _PRECEDING_ |
_ANCESTOR_OR_SELF_ | _DOCUMENT_ | _NOT_ | _SENSITIVE_ | _INSENSITIVE_ | _DIACRITICS_ | _WITHOUT_ | _STEMMING_ |
_THESAURUS_ | _STOP_ | _WILDCARDS_ | _ENTIRE_ | _CONTENT_ | _WORD_ | _TYPE_ | _START_ | _END_ | _MOST_ | _SKIP_ |
_TRANSFORM_ | _COPY_ | _VALUE_ | _EQ_ | _NE_ | _LT_ | _LE_ | _GT_ | _GE_ | _AT_ | _VARIABLE_ | _RETURN_ | _FOR_ |
_IN_ | _LET_ | _WHERE_ | _BY_ | _ORDER_ | _STABLE_ | _ASCENDING_ | _DESCENDING_ | _EMPTY_ | _GREATEST_ |
_LEAST_ | _COLLATION_ | _SOME_ | _EVERY_ | _SATISFIES_ | _CASE_ | _AS_ | _THEN_ | _ELSE_ | _OR_ | _AND_ | _INSTANCE_ |
_OF_ | _CASTABLE_ | _TO_ | _DIV_ | _MOD_ | _UNION_ | _INTERSECT_ | _EXCEPT_ | _VALIDATE_ | _CAST_ | _TREAT_ | _IS_ |
_PRESERVE_ | _STRIP_ | _NAMESPACE_ | _EXTERNAL_ | _ENCODING_ | _NO_PRESERVE_ | _INHERIT_ | _NO_INHERIT_ | _DECLARE_ |
_CONSTRUCTION_ | _ORDERING_ | _DEFAULT_ | _COPY_NAMESPACES_ | _OPTION_ | _VERSION_ | _IMPORT_ | _SCHEMA_ |
_FUNCTION_ | _SCORE_ | _FTCONTAINS_ | _WEIGHT_ | _WINDOW_ | _DISTANCE_ | _OCCURS_ | _TIMES_ | _SAME_ |
_DIFFERENT_ | _LOWERCASE_ | _UPPERCASE_ | _RELATIONSHIP_ | _LEVELS_ | _LANGUAGE_ | _ANY_ | _ALL_ | _PHRASE_ |
_EXACTLY_ | _FROM_ | _WORDS_ | _SENTENCES_ | _PARAGRAPHS_ | _SENTENCE_ | _PARAGRAPH_ | _REPLACE_ | _MODIFY_ | _FIRST_ |
_INSERT_ | _BEFORE_ | _AFTER_ | _REVALIDATION_ | _WITH_ | _DO_ | _RENAME_ | _LAST_ | _DELETE_ | _INTO_ | _UPDATING_ |
_ORDERED_ | _UNORDERED_
  ;

/* _XQUERY_ | */
/* _MODULE_ | */

%%

}  // namespace XQParser

