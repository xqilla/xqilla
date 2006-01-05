/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2006
 *     Parthenon Computing Ltd. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * $Id$
 */

%{

#include "../config/xqilla_config.h"
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

#include <xqilla/utils/XPath2NSUtils.hpp>

#include "../lexer/XPath2Lexer.hpp"

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

#define YYPARSE_PARAM parm
#define YYLEX_PARAM parm
#define YYERROR_VERBOSE
	
inline VectorOfASTNodes packageArgs(ASTNode *arg1Impl, ASTNode *arg2Impl, XPath2MemoryManager* memMgr);
void yyerror(const char* s);

#include "XPath2ParserControl.hpp"
#include <xqilla/exceptions/StaticErrorException.hpp>

#define YYDEBUG 1

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
%type <astNodeStore>			_PredicateList
%type <astNodeStore>			_ArgumentList
%type <astNodeImpl>		_NumericLiteral
%type <astNodeImpl>		_Literal
%type <astNodeImpl>		_ParenthesizedExpr
%type <astNodeImpl>		_FunctionCall
%type <astNodeImpl>        _ContextItemExpr
%type <astNodeImpl>        _Predicate
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
 
%token _QUESTION_
%token _LBRACK_
%token _RBRACK_
%token _PLUS_
%token _MINUS_

%token _STAR_

%token <wString> _NCNAME_COLON_STAR_
%token <wString> _STAR_COLON_NCNAME_
%token _DOT_
%token _DOT_DOT_
%token <wString> _STRING_LITERAL_

%token _SLASH_
%token _SLASHSLASH_
%token _AXIS_CHILD_
%token _AXIS_DESCENDANT_
%token _AXIS_PARENT_
%token _AXIS_ATTRIBUTE_
%token _AXIS_SELF_
%token _AXIS_DESCENDANT_OR_SELF_
%token _AXIS_ANCESTOR_
%token _AXIS_FOLLOWING_SIBLING_
%token _AXIS_PRECEDING_SIBLING_
%token _AXIS_FOLLOWING_
%token _AXIS_PRECEDING_
%token _AXIS_NAMESPACE_
%token _AXIS_ANCESTOR_OR_SELF_
%token _AT_

%token _CAST_AS_
%token _TREAT_AS_

%token _FOR_
%token _SOME_
%token _EVERY_

%token _COMMA_

%token _LPAR_

%token _TEXT_LPAR_
%token _COMMENT_LPAR_
%token _NODE_LPAR_
%token _PROCESSING_INSTRUCTION_LPAR_
%token _ELEMENT_LPAR_
%token _ATTRIBUTE_LPAR_
%token _SCHEMA_ELEMENT_LPAR_
%token _SCHEMA_ATTRIBUTE_LPAR_
%token _DOCUMENT_NODE_LPAR_

%token _IF_LPAR_
%token <wString> _QNAME_LPAR_

%token _RPAR_

%token _MULTIPLY_
%token _DIV_
%token _INTEGER_DIV_
%token _MOD_
%token _AND_
%token _OR_
%token _STAR_
%token _RETURN_
%token _THEN_
%token _ELSE_
%token _TO_
%token _UNION_
%token _INTERSECT_
%token _EXCEPT_
%token _EQUALS_
%token _IS_
%token _NOT_EQUALS_
%token _LT_EQUALS_
%token _GT_EQUALS_
%token _LT_
%token _GT_
%token _VERTICAL_BAR_
%token _LT_LT_
%token _GT_GT_
%token _FORTRAN_EQ_
%token _FORTRAN_NE_
%token _FORTRAN_GT_
%token _FORTRAN_GE_
%token _FORTRAN_LT_
%token _FORTRAN_LE_
%token _IN_
%token _SATISFIES_

%token _ITEM_
%token _EMPTY_

%token _INSTANCE_OF_
%token _CASTABLE_AS_

%token _NILLABLE_

%token _ZERO_OR_ONE_ 
%token _ONE_OR_MORE_ 
%token _ZERO_OR_MORE_

%token <wString> _VARNAME_

%token <wString> _QNAME_
%token <wString> _NCNAME_
%token <wString> _INTEGER_LITERAL_
%token <wString> _DECIMAL_LITERAL_
%token <wString> _DOUBLE_LITERAL_

%%


_XPath:
	/*
	[1]    XPath        ::= Expr
	*/

	/* EMPTY */ {
      ((XPathParserControl *)parm)->result = new (((XPathParserControl *)parm)->memMgr) XQSequence(((XPathParserControl *)parm)->memMgr);
	}

	| _Expr {
      ((XPathParserControl *)parm)->result = $1;
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
			XQParenthesizedExpr *dis = new (((XPathParserControl *)parm)->memMgr) XQParenthesizedExpr(((XPathParserControl *)parm)->memMgr);
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
		$$ = new (((XPathParserControl *)parm)->memMgr) XQFLWOR($1, NULL, NULL, $3, ((XPathParserControl *)parm)->memMgr);
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
		$$ = new (((XPathParserControl *)parm)->memMgr) XQQuantified(XQQuantified::some, $2, $4, ((XPathParserControl *)parm)->memMgr);
	}

	| _EVERY_ _VariableBindingList _SATISFIES_ _ExprSingle {
		$$ = new (((XPathParserControl *)parm)->memMgr) XQQuantified(XQQuantified::every, $2, $4, ((XPathParserControl *)parm)->memMgr);
	}

;

_VariableBindingList:
    _VariableBindingList _COMMA_ _VARNAME_ _IN_ _ExprSingle {
		XQVariableBinding* bind=new (((XPathParserControl *)parm)->memMgr) XQVariableBinding(((XPathParserControl *)parm)->memMgr,
                                                                                         XQVariableBinding::forBinding,
                                                                                         ((XPathParserControl *)parm)->memMgr->getPooledString($3), $5);
		$1->push_back(bind);
		$$ = $1;
		delete [] $3;
	}

    | _VARNAME_ _IN_ _ExprSingle {
		$$ = new (((XPathParserControl *)parm)->memMgr) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>((((XPathParserControl *)parm)->memMgr)));
		XQVariableBinding* bind=new (((XPathParserControl *)parm)->memMgr) XQVariableBinding(((XPathParserControl *)parm)->memMgr,
                                                                                         XQVariableBinding::forBinding,
                                                                                         ((XPathParserControl *)parm)->memMgr->getPooledString($1), $3);
		$$->push_back(bind);
		delete [] $1;
	}
;



_IfExpr:
	/*
	[7]     IfExpr     ::=     <"if" "("> Expr ")" "then" ExprSingle "else" ExprSingle
	*/

	_IF_LPAR_ _Expr _RPAR_ _THEN_ _ExprSingle _ELSE_ _ExprSingle {
		$$ = new (((XPathParserControl *)parm)->memMgr) XQIf($2, $5, $7, ((XPathParserControl *)parm)->memMgr);
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
			ASTNodeImpl *dii = new (((XPathParserControl *)parm)->memMgr) Or(packageArgs($1, $3, ((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
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
			ASTNodeImpl *dii = new (((XPathParserControl *)parm)->memMgr) And(packageArgs($1, $3, ((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
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
		$$ = new (((XPathParserControl *)parm)->memMgr) GeneralComp(GeneralComp::EQUAL,packageArgs($1,$3,((XPathParserControl *)parm)->memMgr),((XPathParserControl *)parm)->memMgr);
	}

	| _RangeExpr _NOT_EQUALS_ _RangeExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs($1,$3,((XPathParserControl *)parm)->memMgr),((XPathParserControl *)parm)->memMgr);
	}

	| _RangeExpr _LT_ _RangeExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) GeneralComp(GeneralComp::LESS_THAN,packageArgs($1,$3,((XPathParserControl *)parm)->memMgr),((XPathParserControl *)parm)->memMgr);
	}

	| _RangeExpr _LT_EQUALS_ _RangeExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs($1,$3,((XPathParserControl *)parm)->memMgr),((XPathParserControl *)parm)->memMgr);
	}

	| _RangeExpr _GT_ _RangeExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) GeneralComp(GeneralComp::GREATER_THAN,packageArgs($1,$3,((XPathParserControl *)parm)->memMgr),((XPathParserControl *)parm)->memMgr);
	}

	| _RangeExpr _GT_EQUALS_ _RangeExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs($1,$3,((XPathParserControl *)parm)->memMgr),((XPathParserControl *)parm)->memMgr);
	}

	| _RangeExpr _FORTRAN_EQ_ _RangeExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) Equals(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}

	| _RangeExpr _FORTRAN_NE_ _RangeExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) NotEquals(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}

	| _RangeExpr _FORTRAN_LT_ _RangeExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) LessThan(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}

	| _RangeExpr _FORTRAN_LE_ _RangeExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) LessThanEqual(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}

	| _RangeExpr _FORTRAN_GT_ _RangeExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) GreaterThan(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}

	| _RangeExpr _FORTRAN_GE_ _RangeExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) GreaterThanEqual(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}

	| _RangeExpr _IS_ _RangeExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) NodeComparison(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}

	| _RangeExpr _LT_LT_ _RangeExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) OrderComparison(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), true, ((XPathParserControl *)parm)->memMgr);
	}

	| _RangeExpr _GT_GT_ _RangeExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) OrderComparison(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), false, ((XPathParserControl *)parm)->memMgr);
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
		$$ = new (((XPathParserControl *)parm)->memMgr) Range(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
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
		$$ = new (((XPathParserControl *)parm)->memMgr) Plus(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}

	| _AdditiveExpr _MINUS_ _MultiplicativeExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) Minus(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
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
		$$ = new (((XPathParserControl *)parm)->memMgr) Multiply(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}

	| _MultiplicativeExpr _DIV_ _UnionExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) Divide(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}

	| _MultiplicativeExpr _INTEGER_DIV_ _UnionExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) IntegerDivide(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}

	| _MultiplicativeExpr _MOD_ _UnionExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) Mod(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
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
		$$ = new (((XPathParserControl *)parm)->memMgr) Union(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}

	| _UnionExpr _VERTICAL_BAR_ _IntersectExceptExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) Union(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
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
		$$ = new (((XPathParserControl *)parm)->memMgr) Intersect(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}

	| _IntersectExceptExpr _EXCEPT_ _InstanceOfExpr {
		$$ = new (((XPathParserControl *)parm)->memMgr) Except(packageArgs($1, $3,((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
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
		$$ = new (((XPathParserControl *)parm)->memMgr) XQInstanceOf($1, $3, ((XPathParserControl *)parm)->memMgr);
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
		$$ = new (((XPathParserControl *)parm)->memMgr) XQTreatAs($1, $3, ((XPathParserControl *)parm)->memMgr);
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
        $$ = new (((XPathParserControl *)parm)->memMgr) XQCastableAs($1, $3,((XPathParserControl *)parm)->memMgr);
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
		$$ = new (((XPathParserControl *)parm)->memMgr) XQCastAs($1, $3,((XPathParserControl *)parm)->memMgr);
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
	  VectorOfASTNodes args(XQillaAllocator<ASTNode*>(((XPathParserControl *)parm)->memMgr));
	  args.push_back($2);
	  $$ = new (((XPathParserControl *)parm)->memMgr) UnaryMinus(args, ((XPathParserControl *)parm)->memMgr);
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
		XQNav *nav = new (((XPathParserControl *)parm)->memMgr) XQNav(((XPathParserControl *)parm)->memMgr);
		nav->setGotoRootFirst(true);
		$$ = nav;
  }

	| _SLASH_ _RelativePathExpr {

        // Optimization: if the _RelativePathExpr is already a XQNav, simply set the "go to root" flag
        if($2->getType()==ASTNode::NAVIGATION)
        {
            ((XQNav*)$2)->setGotoRootFirst(true);
            $$ = $2;
        }
        else
        {
	        XQNav *nav = new (((XPathParserControl *)parm)->memMgr) XQNav(((XPathParserControl *)parm)->memMgr);
		    nav->setGotoRootFirst(true);
		    nav->addStep($2);
		    $$ = nav;
        }
  }

	| _SLASHSLASH_ _RelativePathExpr {
    XQNav *nav = 0;
    if($2->getType()==ASTNode::NAVIGATION) {
      nav = (XQNav*)$2;
    }
    else {
      nav = new (((XPathParserControl *)parm)->memMgr) XQNav(((XPathParserControl *)parm)->memMgr);
      nav->addStep($2);
    }

    nav->setGotoRootFirst(true);

    NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
    step->setTypeWildcard();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    nav->addStepFront(new (((XPathParserControl *)parm)->memMgr) XQStep(XQStep::DESCENDANT_OR_SELF, step, ((XPathParserControl *)parm)->memMgr));

    $$ = nav;
	}

	| _RelativePathExpr {
	  $$ = $1;
  }

;




_RelativePathExpr:
	/*
	[26]     RelativePathExpr     ::=     StepExpr (("/" |  "//") StepExpr)*
	*/

	_StepExpr {
	  $$ = $1;
	}

	| _RelativePathExpr _SLASH_ _StepExpr {

        // Optimization: if the _RelativePathExpr is already a XQNav, simply add the new step
        if($1->getType()==ASTNode::NAVIGATION)
        {
            ((XQNav*)$1)->addStep($3);
            $$ = $1;
        }
        else
        {
		    XQNav *nav = new (((XPathParserControl *)parm)->memMgr) XQNav(((XPathParserControl *)parm)->memMgr);
		    nav->addStep($1);
		    nav->addStep($3);
		    $$ = nav;
        }
	}

	| _RelativePathExpr _SLASHSLASH_ _StepExpr {

    XQNav *nav = 0;
    if($1->getType()==ASTNode::NAVIGATION) {
      nav = (XQNav*)$1;
    }
    else {
      nav = new (((XPathParserControl *)parm)->memMgr) XQNav(((XPathParserControl *)parm)->memMgr);
      nav->addStep($1);
    }

    NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
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
        $1->addPredicates(*$2);
        delete $2;
        $$ = $1;
    }
    | _ReverseStep _PredicateList {
        $1->addPredicates(*$2);
        delete $2;
        $$ = $1;
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

      $$ = new (((XPathParserControl *)parm)->memMgr) XQStep($1, $2, ((XPathParserControl *)parm)->memMgr);
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

    $$ = new (((XPathParserControl *)parm)->memMgr) XQStep(XQStep::ATTRIBUTE, $2, ((XPathParserControl *)parm)->memMgr);
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

    $$ = new (((XPathParserControl *)parm)->memMgr) XQStep(axis, $1, ((XPathParserControl *)parm)->memMgr);
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

    $$ = new (((XPathParserControl *)parm)->memMgr) XQStep($1, $2, ((XPathParserControl *)parm)->memMgr);
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
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest;
		step->setNameWildcard();
		step->setNamespaceWildcard();
		step->setTypeWildcard();
    $$ = new (((XPathParserControl *)parm)->memMgr) XQStep(XQStep::PARENT, step, ((XPathParserControl *)parm)->memMgr);
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
        NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();

        if($1->getPrefix() == NULL)
            step->setNodeName($1->getName());
        else {
            step->setNodeName($1->getName());
            const XMLCh *uri = ((XPathParserControl *)parm)->context->getUriBoundToPrefix($1->getPrefix());
            step->setNodeUri(uri);
        }
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
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
		step->setNameWildcard();
		step->setNamespaceWildcard();
		$$ = step;
	}

	| _NCNAME_COLON_STAR_ {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
		step->setNameWildcard();
		const XMLCh* uri = ((XPathParserControl *)parm)->context->getUriBoundToPrefix($1);
		step->setNodeUri(uri);

		$$ = step;
    delete $1;
	}

	| _STAR_COLON_NCNAME_ {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
    
		step->setNodeName(((XPathParserControl *)parm)->memMgr->getPooledString($1));
		step->setNamespaceWildcard();
		$$ = step;
    delete $1;
	}

;


_FilterExpr:
	/*
	[38]     FilterExpr   ::=     PrimaryExpr PredicateList
	*/

    _PrimaryExpr _PredicateList {
        $1->addPredicates(*$2);
        delete $2;
        $$ = $1;
    }

;

_PredicateList:
	/*
	[39]     Predicates     ::=     Predicate*
	*/

    /* empty */ {
        $$ = new VectorOfASTNodes(XQillaAllocator<ASTNode*>(((XPathParserControl *)parm)->memMgr));
    }
	| _PredicateList _Predicate {
        $1->push_back($2);
        $$ = $1;
	}

;

_Predicate:
	/*
	[40]     Predicate     ::=      "[" Expr "]"
	*/

	_LBRACK_ _Expr _RBRACK_ {
        $$ = $2;
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
    AnyAtomicTypeConstructor *ic = new (((XPathParserControl *)parm)->memMgr)
      AnyAtomicTypeConstructor(
				XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
				XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
				((XPathParserControl *)parm)->memMgr->getPooledString($1), /*isNumeric*/false);
		XQLiteral *str_val  = new (((XPathParserControl *)parm)->memMgr)
      XQLiteral(ic, ((XPathParserControl *)parm)->memMgr);
		$$ = str_val;
        delete [] $1;
	}

;

_NumericLiteral:

	/*
	[43]     NumericLiteral     ::=     IntegerLiteral |  DecimalLiteral |  DoubleLiteral
	*/

  _INTEGER_LITERAL_ {
    AnyAtomicTypeConstructor *ic = new (((XPathParserControl *)parm)->memMgr)
      AnyAtomicTypeConstructor(
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_INTEGER,
				((XPathParserControl *)parm)->memMgr->getPooledString($1), /*isNumeric*/true);
    XQLiteral *did  = new (((XPathParserControl *)parm)->memMgr)
      XQLiteral(ic, ((XPathParserControl *)parm)->memMgr);
    delete [] $1;
    $$ = did;
  }

  | _DECIMAL_LITERAL_ {
    AnyAtomicTypeConstructor *ic = new (((XPathParserControl *)parm)->memMgr)
      AnyAtomicTypeConstructor(
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DECIMAL,
				((XPathParserControl *)parm)->memMgr->getPooledString($1), /*isNumeric*/true);
    XQLiteral *did  = new (((XPathParserControl *)parm)->memMgr)
      XQLiteral(ic, ((XPathParserControl *)parm)->memMgr);
    delete $1;
    $$ = did;
  }

  | _DOUBLE_LITERAL_ {
    AnyAtomicTypeConstructor *ic = new (((XPathParserControl *)parm)->memMgr)
      AnyAtomicTypeConstructor(
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DOUBLE,
				((XPathParserControl *)parm)->memMgr->getPooledString($1), /*isNumeric*/true);
    XQLiteral *did  = new (((XPathParserControl *)parm)->memMgr)
      XQLiteral(ic, ((XPathParserControl *)parm)->memMgr);
    delete $1;
    $$ = did;
  }
;



_VarRef:
  /*
  [44]    VarRef    ::=    "$" VarName
  */
  
  _VARNAME_ {
		XQVariable *var = new (((XPathParserControl *)parm)->memMgr) XQVariable($1, ((XPathParserControl *)parm)->memMgr);
		delete [] $1;
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
          XQParenthesizedExpr *dis = new (((XPathParserControl *)parm)->memMgr) XQParenthesizedExpr(((XPathParserControl *)parm)->memMgr);
          dis->addItem($2);
          $$ = dis;
        }
        else
          $$ = $2;
	}
	| _LPAR_ _RPAR_ {
		$$ = new (((XPathParserControl *)parm)->memMgr) XQSequence(((XPathParserControl *)parm)->memMgr);
	}

;



_ContextItemExpr:
  /*
  [46]     ContextItemExpr     ::=     "."
  */

	_DOT_ {
		$$ = new (((XPathParserControl *)parm)->memMgr) XQContextItem(((XPathParserControl *)parm)->memMgr);
	}

;
  

_FunctionCall:
	/*
	[47]     FunctionCall     ::=     <QName "("> (ExprSingle ("," ExprSingle)*)? ")"
	*/

	_QNAME_LPAR_ _RPAR_ {
        QualifiedName *qname = new (((XPathParserControl *)parm)->memMgr) QualifiedName($1, ((XPathParserControl *)parm)->memMgr);
        delete $1;
        VectorOfASTNodes tmp(XQillaAllocator<ASTNode*>(((XPathParserControl *)parm)->memMgr));
        ASTNode* functionImpl = ((XPathParserControl*)parm)->context->lookUpFunction(qname->getPrefix(), qname->getName(), tmp);
        if( functionImpl == NULL) {
          XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buf(1023, ((XPathParserControl *)parm)->memMgr);
          buf.set(X("Function '"));
          buf.append(qname->getFullName(((XPathParserControl *)parm)->memMgr));
          buf.append(X("' is undefined [err:XPST0017]"));
          XQThrow(StaticErrorException, X("XPath2Parser.y"), buf.getRawBuffer());
        }
        $$ = functionImpl;
	}

	| _QNAME_LPAR_ _ArgumentList _RPAR_ {
        QualifiedName *qname = new (((XPathParserControl *)parm)->memMgr) QualifiedName($1, ((XPathParserControl *)parm)->memMgr);
        delete [] $1;
        ASTNode* functionImpl = ((XPathParserControl*)parm)->context->lookUpFunction(qname->getPrefix(), qname->getName(), *$2);
        if( functionImpl == NULL) {
          XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buf(1023, ((XPathParserControl *)parm)->memMgr);
          buf.set(X("Function '"));
          buf.append(qname->getFullName(((XPathParserControl *)parm)->memMgr));
          buf.append(X("' is undefined [err:XPST0017]"));
          XQThrow(StaticErrorException, X("XPath2Parser.y"), buf.getRawBuffer());
        }
        $$ = functionImpl;
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
        $$ = new VectorOfASTNodes(XQillaAllocator<ASTNode*>(((XPathParserControl *)parm)->memMgr));
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
		SequenceType* seq=new (((XPathParserControl *)parm)->memMgr) SequenceType();
		seq->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, $1));
		seq->setOccurrence(SequenceType::EXACTLY_ONE);
		$$ = seq;
	}

	| _AtomicType _QUESTION_ {
		SequenceType* seq=new (((XPathParserControl *)parm)->memMgr) SequenceType();
		seq->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, $1));
		seq->setOccurrence(SequenceType::QUESTION_MARK);
		$$ = seq;
	}

;


_SequenceType:
	/*
	[49]     SequenceType     ::=     (ItemType OccurrenceIndicator?) |  <"empty" "(" ")">
	*/

	_ItemType _OccurrenceIndicator {
		SequenceType* seq=new (((XPathParserControl *)parm)->memMgr) SequenceType();
		seq->setItemType($1);
		seq->setOccurrence($2);
		$$ = seq;
	}

	| _ItemType {
		SequenceType* seq=new (((XPathParserControl *)parm)->memMgr) SequenceType();
		seq->setItemType($1);
		seq->setOccurrence(SequenceType::EXACTLY_ONE);
		$$ = seq;
	}

    | _EMPTY_ {
		$$ = new (((XPathParserControl *)parm)->memMgr) SequenceType();
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
        $$ = new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, $1);
    }
    | _KindTest {
        $$ = $1->getItemType();
        $1->setItemType(NULL);
    }
    | _ITEM_ {
        $$ = new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
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
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE));
		$$ = step;
	}

;


_DocumentTest:
	/*
	[55]     DocumentTest     ::=     <"document-node" "("> (ElementTest | SchemaElementTest)? ")"
	*/

	_DOCUMENT_NODE_LPAR_ _RPAR_ {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT));
		$$ = step;
	}
	| _DOCUMENT_NODE_LPAR_ _ElementTest _RPAR_ {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        SequenceType::ItemType* elemTest=$2->getItemType();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
        elemTest->setName(NULL);
        elemTest->setType(NULL);
		$$ = step;
	}
	| _DOCUMENT_NODE_LPAR_ _SchemaElementTest _RPAR_ {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        SequenceType::ItemType* elemTest=$2->getItemType();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
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
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT));
		$$ = step;
	}

;

_CommentTest:
	/*
	[57]     CommentTest     ::=     <"comment" "("> ")"
	*/

	_COMMENT_LPAR_ _RPAR_ {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT));
		$$ = step;
	}

;


_PITest:
	/*
	[58]     PITest     ::=     <"processing-instruction" "("> (NCName | StringLiteral)? ")"
	*/

    _PROCESSING_INSTRUCTION_LPAR_ _STRING_LITERAL_ _RPAR_ {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (((XPathParserControl *)parm)->memMgr) QualifiedName($2)));
		$$ = step;
		delete $2;
	}
  | _PROCESSING_INSTRUCTION_LPAR_ _NCNAME_ _RPAR_ {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (((XPathParserControl *)parm)->memMgr) QualifiedName($2)));
		$$ = step;
		delete $2;
	}
	| _PROCESSING_INSTRUCTION_LPAR_  _RPAR_ {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_PI));
		$$ = step;
	}

;


_AttributeTest:
	/*
	[59]     AttributeTest    ::=    <"attribute" "("> (AttribNameOrWildcard ("," TypeName)?)? ")"
	*/

	_ATTRIBUTE_LPAR_ _RPAR_ {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE));
		$$ = step;
	}
	| _ATTRIBUTE_LPAR_ _AttribNameOrWildcard _RPAR_ {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE, $2));
		$$ = step;
	}
	| _ATTRIBUTE_LPAR_ _AttribNameOrWildcard _COMMA_ _TypeName _RPAR_ {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE, $2, $4));
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
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE, $2));
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
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT));
		$$ = step;
	}
	| _ELEMENT_LPAR_ _ElementNameOrWildcard _RPAR_ {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT, $2));
		$$ = step;
	}
	| _ELEMENT_LPAR_ _ElementNameOrWildcard _COMMA_ _TypeName _RPAR_ {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT, $2, $4));
		$$ = step;
	}
	| _ELEMENT_LPAR_ _ElementNameOrWildcard _COMMA_ _TypeName _NILLABLE_ _RPAR_ {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        SequenceType::ItemType* pType=new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT, $2, $4);
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
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT, $2));
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
		QualifiedName *qn = new (((XPathParserControl *)parm)->memMgr) QualifiedName($1, ((XPathParserControl *)parm)->memMgr);
		delete [] $1;
	  $$ = qn;
	}

;

%%

void yyerror(const char *s)
{
  XQThrow(StaticErrorException, X("XPath2Parser.y"), X(s));
}

inline VectorOfASTNodes packageArgs(ASTNode *arg1Impl, ASTNode *arg2Impl, XPath2MemoryManager* memMgr)
{
	VectorOfASTNodes args=VectorOfASTNodes(2,(ASTNode*)NULL,XQillaAllocator<ASTNode*>(memMgr));
	args[0]=arg1Impl;
	args[1]=arg2Impl;

	return args;
}
