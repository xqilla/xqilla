/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
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

#include "../lexer/XPathScanner.hpp"

#include <xercesc/util/XercesDefs.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/framework/XMLBuffer.hpp>
#include <xercesc/dom/DOMXPathNamespace.hpp>
#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/items/AnyAtomicTypeConstructor.hpp>

#include <xqilla/ast/XQVariable.hpp>
#include <xqilla/ast/XQLiteral.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/ast/XQParenthesizedExpr.hpp>
#include <xqilla/ast/XQStep.hpp>
#include <xqilla/ast/XQNav.hpp>
#include <xqilla/ast/XQIf.hpp>
#include <xqilla/ast/XQCastableAs.hpp>
#include <xqilla/ast/XQCastAs.hpp>
#include <xqilla/ast/XQInstanceOf.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/ast/XQContextItem.hpp>
#include <xqilla/ast/XQQuantified.hpp>
#include <xqilla/ast/XQFLWOR.hpp>
#include <xqilla/ast/XQDocumentOrder.hpp>
#include <xqilla/ast/XQFunctionCall.hpp>

#include <xqilla/utils/XPath2NSUtils.hpp>

#include <xqilla/axis/NodeTest.hpp>

#include <xqilla/operators/And.hpp>
#include <xqilla/operators/Or.hpp>
#include <xqilla/operators/Equals.hpp>
#include <xqilla/operators/NotEquals.hpp>
#include <xqilla/operators/Plus.hpp>
#include <xqilla/operators/Minus.hpp>
#include <xqilla/operators/Multiply.hpp>
#include <xqilla/operators/Divide.hpp>
#include <xqilla/operators/IntegerDivide.hpp>
#include <xqilla/operators/Mod.hpp>
#include <xqilla/operators/LessThan.hpp>
#include <xqilla/operators/GreaterThan.hpp>
#include <xqilla/operators/LessThanEqual.hpp>
#include <xqilla/operators/GreaterThanEqual.hpp>
#include <xqilla/operators/UnaryMinus.hpp>
#include <xqilla/operators/NodeComparison.hpp>
#include <xqilla/operators/OrderComparison.hpp>
#include <xqilla/operators/GeneralComp.hpp>
#include <xqilla/operators/Range.hpp>
#include <xqilla/operators/Intersect.hpp>
#include <xqilla/operators/Except.hpp>
#include <xqilla/operators/Union.hpp>

#include <xqilla/runtime/Sequence.hpp>

#include <xqilla/schema/SequenceType.hpp>

#include <xqilla/parser/QName.hpp>

#include <xqilla/exceptions/StaticErrorException.hpp>

#ifdef HAVE_CONFIG_H
#include "../config/xqilla_config.h"
#endif

#define YYPARSE_PARAM qp
#define YYDEBUG 1
#define YYERROR_VERBOSE

// this removes a memory leak occurring when an error is found in the query (we throw an exception from inside
// yyerror, preventing the bison-generated code from cleaning up the memory); by defining this macro we use 
// stack-based memory instead of the heap
#define YYSTACK_USE_ALLOCA	1
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

#define QP						((XPath2ParserArgs*)qp)
#define MEMMGR					(QP->_memMgr)

#undef yylex
#define yylex QP->_scanner->yylex
#undef yyerror
#define yyerror QP->_scanner->error


static inline XQNav* getNavigation(ASTNode *possibleNav, XPath2MemoryManager * expr)
{
	if(possibleNav->getType()==ASTNode::NAVIGATION)
		return (XQNav*)possibleNav;

	XQNav* nav=new (expr) XQNav(expr);
	nav->addStep(possibleNav);
	return nav;
}

static inline VectorOfASTNodes packageArgs(ASTNode *arg1Impl, ASTNode *arg2Impl, XPath2MemoryManager* memMgr)
{
	VectorOfASTNodes args=VectorOfASTNodes(2,(ASTNode*)NULL,XQillaAllocator<ASTNode*>(memMgr));
	args[0]=arg1Impl;
	args[1]=arg2Impl;

	return args;
}

namespace XPath2 {

%}


/* Make parser thread safe */
%pure_parser
//%expect 1

%type <astNodeImpl>		_XPath
%type <astNodeImpl>		_Expr
%type <astNodeImpl>		_ExprSingle
%type <astNodeImpl>		_OrExpr
%type <astNodeImpl>		_AndExpr
%type <astNodeImpl>		_CastableExpr
%type <astNodeImpl>		_ComparisonExpr
%type <astNodeImpl>		_ForExpr
%type <astNodeImpl>		_QuantifiedExpr
%type <astNodeImpl>		_IfExpr
%type <astNodeImpl>		_InstanceOfExpr
%type <astNodeImpl>		_RangeExpr
%type <astNodeImpl>		_AdditiveExpr
%type <astNodeImpl>		_MultiplicativeExpr
%type <astNodeImpl>		_UnionExpr
%type <astNodeImpl>		_IntersectExceptExpr
%type <astNodeImpl>		_UnaryExpr
%type <astNodeImpl>		_ValueExpr
%type <astNodeImpl>		_CastExpr
%type <astNodeImpl>		_TreatExpr
%type <astNodeImpl>		_PathExpr
%type <astNodeImpl>		_RelativePathExpr
%type <astNodeImpl>		_PrimaryExpr
%type <astNodeImpl>    _VarRef
%type <astNodeImpl>		_StepExpr
%type <astNodeImpl>    _AxisStep
%type <astNodeImpl>    _FilterExpr
%type <axis>  					_ForwardAxis
%type <axis>	  				_ReverseAxis
%type <nodeTest>					_NodeTest
%type <nodeTest>					_NameTest
%type <nodeTest>					_Wildcard
%type <nodeTest>					_KindTest
%type <nodeTest>					_PITest
%type <nodeTest>          _DocumentTest
%type <nodeTest>          _ElementTest
%type <nodeTest>          _AttributeTest
%type <nodeTest>          _SchemaElementTest
%type <nodeTest>          _SchemaAttributeTest
%type <nodeTest>					_CommentTest
%type <nodeTest>					_TextTest
%type <nodeTest>					_AnyKindTest
%type <astNodeImpl>			_ForwardStep
%type <astNodeImpl>			_ReverseStep
%type <astNodeImpl>			_AbbrevForwardStep
%type <astNodeImpl>			_AbbrevReverseStep
%type <predicates>			_PredicateList
%type <astNodeStore>			_ArgumentList
%type <astNodeImpl>		_NumericLiteral
%type <astNodeImpl>		_Literal
%type <astNodeImpl>		_ParenthesizedExpr
%type <astNodeImpl>		_FunctionCall
%type <astNodeImpl>        _ContextItemExpr
%type <sequenceType>		_SequenceType
%type <sequenceType>		_SingleType
%type <itemType>			_ItemType
%type <qName>				_QName
%type <qName>				_AtomicType
%type <qName>				_ElementName
%type <qName>				_AttributeName
%type <qName>				_TypeName
%type <qName>				_ElementNameOrWildcard
%type <qName>				_AttribNameOrWildcard
%type <qName>				_AttributeDeclaration
%type <qName>				_ElementDeclaration
%type <occurrence>			_OccurrenceIndicator
%type <variableBinding>		_VariableBindingList
%type <variableBinding>     _SimpleForClause

/* this gives a nice name to the $end token */
%token MYEOF 0										"<end of file>"

/* str */
%token <str> _QNAME_								"<qualified name>"
%token <str> _FUNCTION_CALL_						"<function>("
%token <str> _STRING_LITERAL_						"'...'"
%token <str> _VARIABLE_								"<variable name>"
%token <str> _NCNAME_COLON_STAR_					"<ns>:*"
%token <str> _STAR_COLON_NCNAME_					"*:<local name>"
%token <str> _NCNAME_								"<local name>"
%token <str> _INTEGER_NUMBER_						"<integer number>"
%token <str> _DECIMAL_NUMBER_						"<decimal number>"
%token <str> _DOUBLE_NUMBER_						"<double number>"
 
/* tok */
%token _XQUERY_COMMENT_					"(: comment :)"
%token _XQUERY_WHITESPACE_ 
%token _XQUERY_ERROR_ 
%token _COMMA_							","
%token _RETURN_							"return"
%token _FOR_							"for"
%token _IN_								"in"
%token _DOLLAR_SIGN_					"$"
%token _SOME_							"some"
%token _EVERY_							"every"
%token _SATISFIES_						"satisfies"
%token _IF_								"if"
%token _THEN_							"then"
%token _ELSE_							"else"
%token _OR_								"or"
%token _AND_							"and"
%token _INSTANCE_OF_					"instance of"
%token _CASTABLE_AS_					"castable as"
%token _TO_								"to"
%token _PLUS_							"+ (arithmetic operator)"
%token _MINUS_							"- (arithmetic operator)"
%token _MULTIPLY_						"* (arithmetic operator)"
%token _DIV_							"div"
%token _INTEGER_DIV_					"idiv"
%token _MOD_							"mod"
%token _UNION_							"union"
%token _VERTICAL_BAR_					"|"
%token _INTERSECT_						"intersect"
%token _EXCEPT_							"except"
%token _SLASH_							"/"
%token _SLASHSLASH_						"//"
%token _LBRACK_							"["
%token _RBRACK_							"]"
%token _CAST_AS_						"cast as"
%token _TREAT_AS_						"treat as"
%token _EQUALS_							"= (comparison operator)"
%token _NOT_EQUALS_						"!="
%token _LT_								"< (comparison operator)"
%token _LT_EQUALS_						"<="
%token _GT_								"> (comparison operator)"
%token _GT_EQUALS_						">="
%token _FORTRAN_EQ_						"eq"
%token _FORTRAN_NE_						"ne"
%token _FORTRAN_LT_						"lt"
%token _FORTRAN_LE_						"le"
%token _FORTRAN_GT_						"gt"
%token _FORTRAN_GE_						"ge"
%token _IS_								"is"
%token _LT_LT_							"<<"
%token _GT_GT_							">>"
%token _DOT_							"."
%token _AT_								"@"
%token _DOT_DOT_						".."
%token _AXIS_CHILD_						"child::"
%token _AXIS_DESCENDANT_				"descendant::"
%token _AXIS_ATTRIBUTE_					"attribute::"
%token _AXIS_SELF_						"self::"
%token _AXIS_DESCENDANT_OR_SELF_		"descendant-or-self::"
%token _AXIS_PARENT_					"parent::"
%token _STAR_							"* (wildcard)"
%token _PROCESSING_INSTRUCTION_LPAR_	"processing-instruction("
%token _COMMENT_LPAR_					"comment("
%token _TEXT_LPAR_						"text("
%token _NODE_LPAR_						"node("
%token _LPAR_							"("
%token _RPAR_							")"
%token _EMPTY_							"empty-sequence"
%token _ITEM_							"item"
%token _NILLABLE_						"?"
%token _DOCUMENT_NODE_LPAR_				"document-node("
%token _ATTRIBUTE_LPAR_					"attribute("
%token _ELEMENT_LPAR_					"element("
%token _AXIS_ANCESTOR_OR_SELF_			"ancestor-or-self::"
%token _AXIS_ANCESTOR_					"ancestor::"
%token _AXIS_FOLLOWING_SIBLING_			"following-sibling::"
%token _AXIS_FOLLOWING_					"following::"
%token _AXIS_PRECEDING_SIBLING_			"preceding-sibling::"
%token _AXIS_PRECEDING_					"preceding::"
%token _SCHEMA_ELEMENT_LPAR_			"schema-element("
%token _SCHEMA_ATTRIBUTE_LPAR_			"schema-attribute("
%token _ZERO_OR_ONE_					"? (occurrence)"
%token _ONE_OR_MORE_					"+ (occurrence)"
%token _ZERO_OR_MORE_					"* (occurrence)"
%token _AXIS_NAMESPACE_                 "namespace::"
%token _EOF_

%%


_XPath:
	/*
	[1]    XPath        ::= Expr
	*/

	/* EMPTY */ {
      QP->_query->setQueryBody(new (MEMMGR) XQSequence(MEMMGR));
	}

	| _Expr {
      QP->_query->setQueryBody($1);
	}
;


_Expr:
	/*
    [2]    Expr   ::=   ExprSingle ("," ExprSingle)*
	*/

	_Expr _COMMA_ _ExprSingle {
		if($1->getType()==ASTNode::PARENTHESIZED)
			$$ = $1;
		else
		{
			XQParenthesizedExpr *dis = new (MEMMGR) XQParenthesizedExpr(MEMMGR);
			dis->addItem($1);
			$$ = dis;
		}
		((XQParenthesizedExpr *)$$)->addItem($3);
	}
	| _ExprSingle {
		$$ = $1;
	}
;


_ExprSingle:
	/*
	[3]    ExprSingle     ::=     ForExpr | QuantifiedExpr | IfExpr | OrExpr
	 */

    _ForExpr {
        $$ = $1;
    }
    | _QuantifiedExpr {
        $$ = $1;
    }
    | _IfExpr {
        $$ = $1;
    }
    | _OrExpr {
        $$ = $1;
    }

;

_ForExpr:
	/*
	[4]     ForExpr     ::=     SimpleForClause "return" ExprSingle
	*/

	_SimpleForClause _RETURN_ _ExprSingle {
		$$ = new (MEMMGR) XQFLWOR($1, NULL, NULL, $3, MEMMGR);
	}

;

_SimpleForClause:
	/*
	[5]     SimpleForClause    ::=    <"for" "$"> VarName "in" ExprSingle ("," "$" VarName "in" ExprSingle)*
	*/

    _FOR_ _VariableBindingList {
        $$ = $2;
    }
;

_QuantifiedExpr:
	/*
	[6]     QuantifiedExpr     ::=     (<"some" "$"> |  <"every" "$">) VarName "in" ExprSingle ("," "$" VarName "in" ExprSingle)* "satisfies" ExprSingle
	*/

	_SOME_ _VariableBindingList _SATISFIES_ _ExprSingle {
		$$ = new (MEMMGR) XQQuantified(XQQuantified::some, $2, $4, MEMMGR);
	}

	| _EVERY_ _VariableBindingList _SATISFIES_ _ExprSingle {
		$$ = new (MEMMGR) XQQuantified(XQQuantified::every, $2, $4, MEMMGR);
	}

;

_VariableBindingList:
    _VariableBindingList _COMMA_ _DOLLAR_SIGN_ _VARIABLE_ _IN_ _ExprSingle {
		XQVariableBinding* bind=new (MEMMGR) XQVariableBinding(MEMMGR,
                                                               XQVariableBinding::forBinding,
                                                               MEMMGR->getPooledString($4), $6);
		$1->push_back(bind);
		$$ = $1;
	}

    | _DOLLAR_SIGN_ _VARIABLE_ _IN_ _ExprSingle {
		$$ = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>((MEMMGR)));
		XQVariableBinding* bind=new (MEMMGR) XQVariableBinding(MEMMGR,
                                                               XQVariableBinding::forBinding,
                                                               MEMMGR->getPooledString($2), $4);
		$$->push_back(bind);
	}
;



_IfExpr:
	/*
	[7]     IfExpr     ::=     <"if" "("> Expr ")" "then" ExprSingle "else" ExprSingle
	*/

	_IF_ _LPAR_ _Expr _RPAR_ _THEN_ _ExprSingle _ELSE_ _ExprSingle {
		$$ = new (MEMMGR) XQIf($3, $6, $8, MEMMGR);
	}

;




_OrExpr:
	/*
	[8]     OrExpr     ::=     AndExpr ( "or"  AndExpr )*
	*/

	_AndExpr {
		$$ = $1;
	}

	| _OrExpr _OR_ _AndExpr {
    if($1->getType() == ASTNode::OPERATOR
       && (static_cast<XQOperator *>($1))->getOperatorName() == Or::name) {
			Or* pOr = static_cast<Or*>($1);
			pOr->addArgument($3);
			$$ = $1;
		}
		else
		{
			ASTNodeImpl *dii = new (MEMMGR) Or(packageArgs($1, $3, MEMMGR), MEMMGR);
			$$ = dii;
		}
	}

;

_AndExpr:
	/*
	[9]     AndExpr     ::=     ComparisonExpr ( "and"  ComparisonExpr )*
	*/

	_ComparisonExpr {
		$$ = $1;
	}

	| _AndExpr _AND_ _ComparisonExpr {
    if($1->getType() == ASTNode::OPERATOR
       && (static_cast<XQOperator *>($1))->getOperatorName() == And::name) {
			And* pAnd = static_cast<And*>($1);
			pAnd->addArgument($3);
			$$ = $1;
		}
		else
		{
			ASTNodeImpl *dii = new (MEMMGR) And(packageArgs($1, $3, MEMMGR), MEMMGR);
			$$ = dii;
		}
	}

;


_ComparisonExpr:
  /*

	[10]     ComparisonExpr     ::=     RangeExpr ( (ValueComp
									 |  GeneralComp
									 |  NodeComp)  RangeExpr )?

	[22]     GeneralComp     ::=     "=" |  "!=" |  "<" |  "<=" |  ">" |  ">="
	[23]     ValueComp     ::=     "eq" |  "ne" |  "lt" |  "le" |  "gt" |  "ge"
	[24]     NodeComp     ::=     "is" | "<<" | ">>"

  */

    _RangeExpr {
		$$ = $1;
	}

	| _RangeExpr _EQUALS_ _RangeExpr {
		$$ = new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs($1,$3,MEMMGR),MEMMGR);
	}

	| _RangeExpr _NOT_EQUALS_ _RangeExpr {
		$$ = new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs($1,$3,MEMMGR),MEMMGR);
	}

	| _RangeExpr _LT_ _RangeExpr {
		$$ = new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs($1,$3,MEMMGR),MEMMGR);
	}

	| _RangeExpr _LT_EQUALS_ _RangeExpr {
		$$ = new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs($1,$3,MEMMGR),MEMMGR);
	}

	| _RangeExpr _GT_ _RangeExpr {
		$$ = new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs($1,$3,MEMMGR),MEMMGR);
	}

	| _RangeExpr _GT_EQUALS_ _RangeExpr {
		$$ = new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs($1,$3,MEMMGR),MEMMGR);
	}

	| _RangeExpr _FORTRAN_EQ_ _RangeExpr {
		$$ = new (MEMMGR) Equals(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

	| _RangeExpr _FORTRAN_NE_ _RangeExpr {
		$$ = new (MEMMGR) NotEquals(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

	| _RangeExpr _FORTRAN_LT_ _RangeExpr {
		$$ = new (MEMMGR) LessThan(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

	| _RangeExpr _FORTRAN_LE_ _RangeExpr {
		$$ = new (MEMMGR) LessThanEqual(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

	| _RangeExpr _FORTRAN_GT_ _RangeExpr {
		$$ = new (MEMMGR) GreaterThan(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

	| _RangeExpr _FORTRAN_GE_ _RangeExpr {
		$$ = new (MEMMGR) GreaterThanEqual(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

	| _RangeExpr _IS_ _RangeExpr {
		$$ = new (MEMMGR) NodeComparison(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

	| _RangeExpr _LT_LT_ _RangeExpr {
		$$ = new (MEMMGR) OrderComparison(packageArgs($1, $3,MEMMGR), true, MEMMGR);
	}

	| _RangeExpr _GT_GT_ _RangeExpr {
		$$ = new (MEMMGR) OrderComparison(packageArgs($1, $3,MEMMGR), false, MEMMGR);
	}

;


_RangeExpr:
	/*
	[11]     RangeExpr     ::=     AdditiveExpr ( "to"  AdditiveExpr )?
	*/

	_AdditiveExpr {
	  $$ = $1;
	}

	| _AdditiveExpr _TO_ _AdditiveExpr {
		$$ = new (MEMMGR) Range(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

;



_AdditiveExpr:
	/*
	[12]     AdditiveExpr     ::=     MultiplicativeExpr ( ("+" |  "-")  MultiplicativeExpr )*
	*/

	_MultiplicativeExpr {
	  $$ = $1;
	}

	| _AdditiveExpr _PLUS_ _MultiplicativeExpr {
		$$ = new (MEMMGR) Plus(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

	| _AdditiveExpr _MINUS_ _MultiplicativeExpr {
		$$ = new (MEMMGR) Minus(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

;


_MultiplicativeExpr:
	/*
	[13]     MultiplicativeExpr     ::=     UnionExpr ( ("*" |  "div" |  "idiv" |  "mod")  UnionExpr )*
	*/

	_UnionExpr {
	  $$ = $1;
	}

	| _MultiplicativeExpr _MULTIPLY_ _UnionExpr {
		$$ = new (MEMMGR) Multiply(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

	| _MultiplicativeExpr _DIV_ _UnionExpr {
		$$ = new (MEMMGR) Divide(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

	| _MultiplicativeExpr _INTEGER_DIV_ _UnionExpr {
		$$ = new (MEMMGR) IntegerDivide(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

	| _MultiplicativeExpr _MOD_ _UnionExpr {
		$$ = new (MEMMGR) Mod(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

;


_UnionExpr:
	/*
	[14]     UnionExpr     ::=     IntersectExceptExpr ( ("union" |  "|")  IntersectExceptExpr )*
	*/

	_IntersectExceptExpr {
	  $$ = $1;
	}

	| _UnionExpr _UNION_ _IntersectExceptExpr {
		$$ = new (MEMMGR) Union(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

	| _UnionExpr _VERTICAL_BAR_ _IntersectExceptExpr {
		$$ = new (MEMMGR) Union(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

;


_IntersectExceptExpr:
	/*
	[15]     IntersectExceptExpr     ::=     _InstanceOfExpr ( ("intersect" |  "except")  _InstanceOfExpr )*
	*/

	_InstanceOfExpr {
	  $$ = $1;
	}

	| _IntersectExceptExpr _INTERSECT_ _InstanceOfExpr {
		$$ = new (MEMMGR) Intersect(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

	| _IntersectExceptExpr _EXCEPT_ _InstanceOfExpr {
		$$ = new (MEMMGR) Except(packageArgs($1, $3,MEMMGR), MEMMGR);
	}

;


_InstanceOfExpr:
	/*
	[16]     InstanceofExpr     ::=     TreatExpr ( <"instance" "of"> SequenceType )?
	*/

	_TreatExpr {
	  $$ = $1;
	}

	| _TreatExpr _INSTANCE_OF_ _SequenceType {
		$$ = new (MEMMGR) XQInstanceOf($1, $3, MEMMGR);
	}

;

_TreatExpr:
	/*
	[17]     TreatExpr     ::=     CastableExpr (<"treat" "as"> SequenceType)?
	*/

    _CastableExpr {
        $$ = $1;
    }
    | _CastableExpr _TREAT_AS_ _SequenceType {
        XQTreatAs* treatAs = new (MEMMGR) XQTreatAs($1,$3,MEMMGR);
        treatAs->setIsTreatAsStatement(true);
		$$ = treatAs;
	}
;


_CastableExpr:
	/*
	[18]     CastableExpr     ::=     CastExpr ( <"castable" "as"> SingleType )?
	*/

	_CastExpr {
	  $$ = $1;
	}

	| _CastExpr _CASTABLE_AS_ _SingleType {
        $$ = new (MEMMGR) XQCastableAs($1, $3,MEMMGR);
	}

;

_CastExpr:
	/*
	[19]     CastExpr     ::=     UnaryExpr (<"cast" "as"> SingleType)?
	*/

    _UnaryExpr {
        $$ = $1;
    }
    | _UnaryExpr _CAST_AS_ _SingleType {
		$$ = new (MEMMGR) XQCastAs($1, $3,MEMMGR);
	}
;


_UnaryExpr:
	/*
	[20]     UnaryExpr     ::=     ("-" |  "+")* ValueExpr
	*/

	_ValueExpr {
	  $$ = $1;
	}

	| _MINUS_ _UnaryExpr {
	  VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
	  args.push_back($2);
	  $$ = new (MEMMGR) UnaryMinus(args, MEMMGR);
	}

	| _PLUS_ _UnaryExpr {
		//no need to do anything with unary plus
		$$ = $2;
	}

;




_ValueExpr:
	/*
	[21]     ValueExpr     ::=     PathExpr
	 */


	_PathExpr {
		$$ = $1;
	}

;


_PathExpr:
	/*
	[25]     PathExpr     ::=     ("/" RelativePathExpr?) |  ("//" RelativePathExpr) |  RelativePathExpr
	*/

  _SLASH_ {
        XQNav *nav = new (MEMMGR) XQNav(MEMMGR);
        nav->addInitialRootStep(MEMMGR);
        $$ = nav;
    }

	| _SLASH_ _RelativePathExpr {
        XQNav* nav=getNavigation($2,MEMMGR);
        nav->addInitialRootStep(MEMMGR);
	    $$ = nav;
    }

	| _SLASHSLASH_ _RelativePathExpr {
        XQNav *nav = getNavigation($2,MEMMGR);

        NodeTest *step = new (MEMMGR) NodeTest();
        step->setTypeWildcard();
        step->setNameWildcard();
        step->setNamespaceWildcard();
        nav->addStepFront(new (MEMMGR) XQStep(XQStep::DESCENDANT_OR_SELF, step, MEMMGR));

        nav->addInitialRootStep(MEMMGR);

        $$ = nav;
	}

	| _RelativePathExpr

;




_RelativePathExpr:
	/*
	[26]     RelativePathExpr     ::=     StepExpr (("/" |  "//") StepExpr)*
	*/

	_StepExpr {
	  $$ = $1;
	}

	| _RelativePathExpr _SLASH_ _StepExpr {
		XQNav *nav = getNavigation($1,MEMMGR);
	    nav->addStep($3);
		$$ = nav;
	}

	| _RelativePathExpr _SLASHSLASH_ _StepExpr {
        XQNav *nav = getNavigation($1,MEMMGR);

        NodeTest *step = new (MEMMGR) NodeTest();
        step->setTypeWildcard();
        step->setNameWildcard();
        step->setNamespaceWildcard();
        nav->addStep(XQStep::DESCENDANT_OR_SELF, step);

        nav->addStep($3);

        $$ = nav;
	}

;



_StepExpr:
	/*
	[27]     StepExpr     ::=     AxisStep | FilterExpr
	*/

    _AxisStep {
        $$ = $1;
    }
    | _FilterExpr {
        $$ = $1;
    }
;

_AxisStep:
	/*
	[28]     AxisExpr     ::=     (ForwardStep |  ReverseStep) PredicateList
	*/

    _ForwardStep _PredicateList {
        $$ = XQPredicate::addPredicates($1, $2);
        delete $2;
    }
    | _ReverseStep _PredicateList {
        $$ = XQPredicate::addPredicates($1, $2);
        delete $2;
        $$ = new (MEMMGR) XQDocumentOrder($$, MEMMGR);
    }
;

_ForwardStep:
	/*
	[29]     ForwardStep     ::=     (ForwardAxis NodeTest) |  AbbrevForwardStep
	*/

	/* Allow the _NodeTest specifier (suffix) to override the default nodetype for the axis */
	_ForwardAxis _NodeTest {
      if(!$2->isNodeTypeSet()) {
        switch($1) {
        case XQStep::NAMESPACE: $2->setNodeType(Node::namespace_string); break;
        case XQStep::ATTRIBUTE: $2->setNodeType(Node::attribute_string); break;
        default: $2->setNodeType(Node::element_string); break;
        }
      }

      $$ = new (MEMMGR) XQStep($1, $2, MEMMGR);
	}

	| _AbbrevForwardStep {
		$$ = $1;
	}
;


_ForwardAxis:
	/*
	[30]     ForwardAxis     ::=     <"child" "::">
								  |  <"descendant" "::">
								  |  <"attribute" "::">
								  |  <"self" "::">
								  |  <"descendant-or-self" "::">
								  |  <"following-sibling" "::">
								  |  <"following" "::">
								  |  <"namespace" "::">
	*/


	_AXIS_CHILD_ {
    $$ = XQStep::CHILD;
	}

	| _AXIS_DESCENDANT_ {
    $$ = XQStep::DESCENDANT;
	}

	| _AXIS_ATTRIBUTE_ {
    $$ = XQStep::ATTRIBUTE;
	}

	| _AXIS_SELF_ {
    $$ = XQStep::SELF;
	}

	| _AXIS_DESCENDANT_OR_SELF_ {
    $$ = XQStep::DESCENDANT_OR_SELF;
	}

	| _AXIS_FOLLOWING_SIBLING_ {
    $$ = XQStep::FOLLOWING_SIBLING;
	}

	| _AXIS_FOLLOWING_ {
    $$ = XQStep::FOLLOWING;
	}

	| _AXIS_NAMESPACE_ {
    $$ = XQStep::NAMESPACE;
	}

;


_AbbrevForwardStep:
	/*
	[31]     AbbrevForwardStep     ::=     "@"? NodeTest
	*/

	_AT_ _NodeTest {
    if(!$2->isNodeTypeSet()) {
      $2->setNodeType(Node::attribute_string);
    }

    $$ = new (MEMMGR) XQStep(XQStep::ATTRIBUTE, $2, MEMMGR);
	}

	| _NodeTest {
    XQStep::Axis axis = XQStep::CHILD;
    SequenceType::ItemType *itemtype = $1->getItemType();
    if(itemtype != 0 &&
       itemtype->getItemTestType() == SequenceType::ItemType::TEST_ATTRIBUTE) {
      axis = XQStep::ATTRIBUTE;
    }
    else if(!$1->isNodeTypeSet()) {
      $1->setNodeType(Node::element_string);
    }

    $$ = new (MEMMGR) XQStep(axis, $1, MEMMGR);
	}

;

_ReverseStep:
	/*
	[32]     ReverseStep     ::=     (ReverseAxis NodeTest) |  AbbrevReverseStep
	*/

	/* Allow the _NodeTest specifier (suffix) to override the default nodetype for the axis */
	_ReverseAxis _NodeTest {
    if(!$2->isNodeTypeSet()) {
      $2->setNodeType(Node::element_string);
    }

    $$ = new (MEMMGR) XQStep($1, $2, MEMMGR);
	}

	| _AbbrevReverseStep {
		$$ = $1;
	}

;

_ReverseAxis:
	/*
	[33]     ReverseAxis     ::=     <"parent" "::">
								  |  <"ancestor" "::">
								  |  <"preceding-sibling" "::">
								  |  <"preceding" "::">
								  |  <"ancestor-or-self" "::">
	*/

	_AXIS_PARENT_ {
    $$ = XQStep::PARENT;
	}

	| _AXIS_ANCESTOR_ {
    $$ = XQStep::ANCESTOR;
	}

	| _AXIS_PRECEDING_SIBLING_ {
    $$ = XQStep::PRECEDING_SIBLING;
	}

	| _AXIS_PRECEDING_ {
    $$ = XQStep::PRECEDING;
	}

	| _AXIS_ANCESTOR_OR_SELF_ {
    $$ = XQStep::ANCESTOR_OR_SELF;
	}

;

_AbbrevReverseStep:
	/*
	[34]     AbbrevReverseStep     ::=     ".."
	*/

	_DOT_DOT_ {
		NodeTest *step = new (MEMMGR) NodeTest;
		step->setNameWildcard();
		step->setNamespaceWildcard();
		step->setTypeWildcard();
    $$ = new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR);
	}

;

_NodeTest:
	/*
	[35]     NodeTest     ::=     KindTest |  NameTest
	*/

	_KindTest {
		$$ = $1;
	}

	| _NameTest {
		$$ = $1;
	}

;

_NameTest:
	/*
	[36]     NameTest     ::=     QName |  Wildcard
	*/

    _QName {
        NodeTest *step = new (MEMMGR) NodeTest();
		step->setNodePrefix($1->getPrefix());
        step->setNodeName($1->getName());
        $$ = step;
    }
    | _Wildcard {
        $$ = $1;
    }

;


_Wildcard:
	/*
	[37]     Wildcard     ::=     "*" |  <NCName ":" "*"> |  <"*" ":" NCName>
	*/

	_STAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
		step->setNameWildcard();
		step->setNamespaceWildcard();
		$$ = step;
	}

	| _NCNAME_COLON_STAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
		step->setNodePrefix(MEMMGR->getPooledString($1));
		step->setNameWildcard();
		$$ = step;
	}

	| _STAR_COLON_NCNAME_ {
        NodeTest *step = new (MEMMGR) NodeTest();
        step->setNodeName(MEMMGR->getPooledString($1));
        step->setNamespaceWildcard();
        $$ = step;
	}

;


_FilterExpr:
	/*
	[38]     FilterExpr   ::=     PrimaryExpr PredicateList
	*/

    _PrimaryExpr _PredicateList {
        $$ = XQPredicate::addPredicates($1, $2);
        delete $2;
    }

;

_PredicateList:
	/*
	[39]     Predicates     ::=     Predicate*
	[40]     Predicate     ::=      "[" Expr "]"
	*/

    /* empty */ {
        $$ = new VectorOfPredicates(MEMMGR);
    }
	| _PredicateList _LBRACK_ _Expr _RBRACK_ {
        XQPredicate *pred = new (MEMMGR) XQPredicate($3, MEMMGR);
        $1->push_back(pred);
        $$ = $1;
	}

;

_PrimaryExpr:
	/*
	[41]     PrimaryExpr    ::=    Literal | VarRef | ParenthesizedExpr | ContextItemExpr | FunctionCall
	*/

  _Literal {
		$$ = $1;
	}

  | _VarRef {
		$$ = $1;
	}

	| _ParenthesizedExpr {
		$$ = $1;
	}

	| _ContextItemExpr {
		$$ = $1;
	}
  
	| _FunctionCall {
		$$ = $1;
	}

;

_Literal:

	/*
	[42]     Literal     ::=     NumericLiteral |  StringLiteral
	*/


	_NumericLiteral {
		$$ = $1;
	}

	| _STRING_LITERAL_ {
      AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(
				XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
				XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
				MEMMGR->getPooledString($1),
        AnyAtomicType::STRING);
		XQLiteral *str_val  = new (MEMMGR)
        XQLiteral(ic, MEMMGR);
		$$ = str_val;
	}

;

_NumericLiteral:

	/*
	[43]     NumericLiteral     ::=     IntegerLiteral |  DecimalLiteral |  DoubleLiteral
	*/

  _INTEGER_NUMBER_ {
      AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_INTEGER,
				MEMMGR->getPooledString($1),
      AnyAtomicType::DECIMAL);
      XQLiteral *did  = new (MEMMGR)
      XQLiteral(ic, MEMMGR);
      $$ = did;
  }

  | _DECIMAL_NUMBER_ {
      AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DECIMAL,
				MEMMGR->getPooledString($1),
      AnyAtomicType::DECIMAL);
      XQLiteral *did  = new (MEMMGR)
      XQLiteral(ic, MEMMGR);
      $$ = did;
  }

  | _DOUBLE_NUMBER_ {
      AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DOUBLE,
				MEMMGR->getPooledString($1),
      AnyAtomicType::DOUBLE);
      XQLiteral *did  = new (MEMMGR)
      XQLiteral(ic, MEMMGR);
      $$ = did;
  }
;



_VarRef:
  /*
  [44]    VarRef    ::=    "$" VarName
  */
  
  _DOLLAR_SIGN_ _VARIABLE_ {
		XQVariable *var = new (MEMMGR) XQVariable($2, MEMMGR);
		$$ = var;
  }

;

_ParenthesizedExpr:
	/*
	[45]     ParenthesizedExpr     ::=     "(" Expr? ")"
	*/

	_LPAR_ _Expr _RPAR_ {
        if($2->getType()!=ASTNode::PARENTHESIZED)
        {
          XQParenthesizedExpr *dis = new (MEMMGR) XQParenthesizedExpr(MEMMGR);
          dis->addItem($2);
          $$ = dis;
        }
        else
          $$ = $2;
	}
	| _LPAR_ _RPAR_ {
		$$ = new (MEMMGR) XQSequence(MEMMGR);
	}

;



_ContextItemExpr:
  /*
  [46]     ContextItemExpr     ::=     "."
  */

	_DOT_ {
		$$ = new (MEMMGR) XQContextItem(MEMMGR);
	}

;
  

_FunctionCall:
	/*
	[47]     FunctionCall     ::=     <QName "("> (ExprSingle ("," ExprSingle)*)? ")"
	*/

	_FUNCTION_CALL_ _RPAR_ {
        QualifiedName *qname = new (MEMMGR) QualifiedName($1, MEMMGR);
        VectorOfASTNodes tmp(XQillaAllocator<ASTNode*>(MEMMGR));
		$$ = new (MEMMGR) XQFunctionCall(qname, tmp, MEMMGR);
	}

	| _FUNCTION_CALL_ _ArgumentList _RPAR_ {
        QualifiedName *qname = new (MEMMGR) QualifiedName($1, MEMMGR);
		$$ = new (MEMMGR) XQFunctionCall(qname, *$2, MEMMGR);
        delete $2;
	}

;

_ArgumentList:

	/*
		//not in spec. support for production 47
		ArgumentList
			 ::= (ExprSingle ("," ExprSingle)*)?

	*/

	_ExprSingle {
        $$ = new VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
        $$->push_back($1);
	  }

	| _ArgumentList _COMMA_ _ExprSingle  {
        $1->push_back($3);
		$$ = $1;
	}

;


_SingleType:
	/*
	[48]     SingleType     ::=     AtomicType "?"?
	*/

	_AtomicType {
		SequenceType* seq=new (MEMMGR) SequenceType();
		seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, $1));
		seq->setOccurrence(SequenceType::EXACTLY_ONE);
		$$ = seq;
	}

	| _AtomicType _ZERO_OR_ONE_ {
		SequenceType* seq=new (MEMMGR) SequenceType();
		seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, $1));
		seq->setOccurrence(SequenceType::QUESTION_MARK);
		$$ = seq;
	}

;


_SequenceType:
	/*
	[49]     SequenceType     ::=     (ItemType OccurrenceIndicator?) |  <"empty" "(" ")">
	*/

	_ItemType _OccurrenceIndicator {
		SequenceType* seq=new (MEMMGR) SequenceType();
		seq->setItemType($1);
		seq->setOccurrence($2);
		$$ = seq;
	}

	| _ItemType {
		SequenceType* seq=new (MEMMGR) SequenceType();
		seq->setItemType($1);
		seq->setOccurrence(SequenceType::EXACTLY_ONE);
		$$ = seq;
	}

    | _EMPTY_ _LPAR_ _RPAR_ {
		$$ = new (MEMMGR) SequenceType();
	}

;


_OccurrenceIndicator:
	/*
	[50]     OccurrenceIndicator     ::=     "*" |  "+" |  "?"
	*/

	_ZERO_OR_MORE_ {
		$$ = SequenceType::STAR;
	}
	| _ONE_OR_MORE_ {
		$$ = SequenceType::PLUS;
	}
	| _ZERO_OR_ONE_ {
		$$ = SequenceType::QUESTION_MARK;
	}

;


_ItemType:
	/*
	[51]     ItemType     ::=      AtomicType | KindTest | <"item" "(" ")">
	*/

    _AtomicType {
        $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, $1);
    }
    | _KindTest {
        $$ = $1->getItemType();
        $1->setItemType(NULL);
    }
    | _ITEM_ _LPAR_ _RPAR_ {
        $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
    }
;

_AtomicType:
	/*
	[52]     AtomicType     ::=     QName
	*/

	_QName {
		$$ = $1;
	}

;

_KindTest:
	/*
	[53]     KindTest     ::=      DocumentTest
                                |  ElementTest
                                |  AttributeTest
                                |  SchemaElementTest
                                |  SchemaAttributeTest
                                |  PITest
                                |  CommentTest
                                |  TextTest
                                |  AnyKindTest
	*/

    _DocumentTest {
        $$ = $1;
    }
    | _ElementTest {
        $$ = $1;
    }
    | _AttributeTest {
        $$ = $1;
    }
    | _SchemaElementTest {
        $$ = $1;
    }
    | _SchemaAttributeTest {
        $$ = $1;
    }
	| _PITest {
		$$ = $1;
	}
	| _CommentTest {
		$$ = $1;
	}
	| _TextTest {
		$$ = $1;
	}
	| _AnyKindTest {
		$$ = $1;
	}

;

_AnyKindTest:
	/*
	[54]     AnyKindTest     ::=     <"node" "("> ")"
	*/

	_NODE_LPAR_ _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE));
		$$ = step;
	}

;


_DocumentTest:
	/*
	[55]     DocumentTest     ::=     <"document-node" "("> (ElementTest | SchemaElementTest)? ")"
	*/

	_DOCUMENT_NODE_LPAR_ _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT));
		$$ = step;
	}
	| _DOCUMENT_NODE_LPAR_ _ElementTest _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        SequenceType::ItemType* elemTest=$2->getItemType();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
        elemTest->setName(NULL);
        elemTest->setType(NULL);
		$$ = step;
	}
	| _DOCUMENT_NODE_LPAR_ _SchemaElementTest _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        SequenceType::ItemType* elemTest=$2->getItemType();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
        elemTest->setName(NULL);
        elemTest->setType(NULL);
		$$ = step;
	}

;

_TextTest:
	/*
	[56]     TextTest     ::=     <"text" "("> ")"
	*/

	_TEXT_LPAR_ _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT));
		$$ = step;
	}

;

_CommentTest:
	/*
	[57]     CommentTest     ::=     <"comment" "("> ")"
	*/

	_COMMENT_LPAR_ _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT));
		$$ = step;
	}

;


_PITest:
	/*
	[58]     PITest     ::=     <"processing-instruction" "("> (NCName | StringLiteral)? ")"
	*/

    _PROCESSING_INSTRUCTION_LPAR_ _STRING_LITERAL_ _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName($2)));
		$$ = step;
	}
  | _PROCESSING_INSTRUCTION_LPAR_ _NCNAME_ _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName($2)));
		$$ = step;
	}
	| _PROCESSING_INSTRUCTION_LPAR_  _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI));
		$$ = step;
	}

;


_AttributeTest:
	/*
	[59]     AttributeTest    ::=    <"attribute" "("> (AttribNameOrWildcard ("," TypeName)?)? ")"
	*/

	_ATTRIBUTE_LPAR_ _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE));
		$$ = step;
	}
	| _ATTRIBUTE_LPAR_ _AttribNameOrWildcard _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE, $2));
		$$ = step;
	}
	| _ATTRIBUTE_LPAR_ _AttribNameOrWildcard _COMMA_ _TypeName _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE, $2, $4));
		$$ = step;
	}
;


_AttribNameOrWildcard:
	/*
	[60]    AttribNameOrWildcard    ::=    AttributeName | "*"
	*/
  _AttributeName {
    $$ = $1;
  }
  | _STAR_ {
    $$=NULL;
  }

;


_SchemaAttributeTest:
	/*
	[61]	SchemaAttributeTest    ::=    <"schema-attribute" "("> AttributeDeclaration ")" 
	*/

	_SCHEMA_ATTRIBUTE_LPAR_ _AttributeDeclaration _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE, $2));
		$$ = step;
	}
;


_AttributeDeclaration:
	/*
	[62]    AttributeDeclaration    ::=    AttributeName
	*/
  _AttributeName {
    $$ = $1;
  }

;


_ElementTest:
	/*
	[63]    ElementTest    ::=    <"element" "("> (ElementNameOrWildcard ("," TypeName "?"?)?)? ")"
	*/
	_ELEMENT_LPAR_ _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT));
		$$ = step;
	}
	| _ELEMENT_LPAR_ _ElementNameOrWildcard _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT, $2));
		$$ = step;
	}
	| _ELEMENT_LPAR_ _ElementNameOrWildcard _COMMA_ _TypeName _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT, $2, $4));
		$$ = step;
	}
	| _ELEMENT_LPAR_ _ElementNameOrWildcard _COMMA_ _TypeName _NILLABLE_ _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        SequenceType::ItemType* pType=new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT, $2, $4);
        pType->setAllowNilled(true);
        step->setItemType(pType);
		$$ = step;
	}

;


_ElementNameOrWildcard:
	/*
	[64]    ElementNameOrWildcard    ::=    ElementName | "*"
	*/
  _ElementName {
    $$ = $1;
  }
  | _STAR_ {
    $$=NULL;
  }

;


_SchemaElementTest:
	/*
	[65]	 SchemaElementTest    ::=    <"schema-element" "("> ElementDeclaration ")" 
	*/

	_SCHEMA_ELEMENT_LPAR_ _ElementDeclaration _RPAR_ {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT, $2));
		$$ = step;
	}
;

_ElementDeclaration:
	/*
	[66]    ElementDeclaration    ::=    ElementName
	*/
  _ElementName {
    $$ = $1;
  }
;


_AttributeName:
	/*
	[67]     AttributeName     ::=     QName
	*/
   _QName {
       $$ = $1;
   }
;

_ElementName:
	/*
	[68]     ElementName     ::=     QName
	*/
   _QName {
       $$ = $1;
   }
;

_TypeName:
	/*
	[69]     TypeName     ::=     QName
	*/
   _QName {
       $$ = $1;
   }

;


_QName:

  _QNAME_ {
      QualifiedName *qn = new (MEMMGR) QualifiedName($1, MEMMGR);
	  $$ = qn;
	}

;

%%

}	// namespace XPath2

