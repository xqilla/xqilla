/*
 * Copyright (c) 2001-2005
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2005
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2005
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2005
 *     Parthenon Computing Ltd. All rights reserved.
 *
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

#include <iostream>
#include <sstream>

#include <xqilla/utils/XQPrintDataItemTree.hpp>
#include <xqilla/utils/UTF8Str.hpp>

#include <xqilla/dom-api/impl/PathanExpressionImpl.hpp>
#include <xqilla/ast/ASTNode.hpp>
#include <xqilla/ast/XQFunction.hpp>
#include <xqilla/context/DynamicContext.hpp>

#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/ast/XQDebugHook.hpp>
#include <xqilla/ast/XQDOMConstructor.hpp>
#include <xqilla/ast/XQFLWOR.hpp>
#include <xqilla/ast/XQVariableBinding.hpp>
#include <xqilla/ast/XQQuantified.hpp>
#include <xqilla/ast/XQFunctionCall.hpp>
#include <xqilla/ast/XQGlobalVariable.hpp>
#include <xqilla/ast/XQTypeswitch.hpp>
#include <xqilla/ast/XQValidate.hpp>
#include <xqilla/ast/XQOrderingChange.hpp>
#include <xqilla/ast/XQFunction.hpp>

#include <xercesc/dom/DOMNode.hpp>
#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

using namespace std;

static const int INDENT = 1;

string XQueryPrintDataItemTree::print(const PathanExpression *expr, const DynamicContext *context, int indent)
{
#if 1
	return "Cannot print PathanExpression in XQuery";
#else
	return print(((const PathanExpressionImpl *)expr)->getCompiledExpression(), context, indent);
#endif
}

string XQueryPrintDataItemTree::print(const XQQuery *query, const DynamicContext *context, int indent)
{
	ostringstream s;

	s << getIndent(indent) << "<XQuery";
	if(query->getIsLibraryModule()) {
		s << " module=\"true\"";
	}
	if(query->getModuleTargetNamespace()) {
		s << " targetNamespace=\"" << UTF8(query->getModuleTargetNamespace()) << "\"";
	}
	s << ">" << endl;
	indent += INDENT;

	XQueryPrintDataItemTree p;

  for(std::vector<XQUserFunction*, PathanAllocator<XQUserFunction*> >::const_iterator i = query->m_userDefFns.begin();
      i != query->m_userDefFns.end(); ++i) {
    XQUserFunction *f = *i;

    const XMLCh *funUri = f->getURI();
    const XMLCh *funName = f->getName();

    string name("{");
    name += UTF8(funUri);
    name += "}:";
    name += UTF8(funName);

    s << "  <FunctionDefinition name=\"" << name << "\">" << endl;
    s << p.printX(f->getFunctionBody(), context, 2);
    s << "  </FunctionDefinition>" << endl;
  }
	for(vector<XQGlobalVariable*, PathanAllocator<XQGlobalVariable*> >::const_iterator it = query->m_userDefVars.begin();
	    it != query->m_userDefVars.end(); ++it) {
		s << p.printX(*it, context, indent);
	}
	s << p.printX(query->getQueryBody(), context, indent);

	indent -= INDENT;
	s << getIndent(indent) << "</XQuery>" << endl;

	return s.str();
}

string XQueryPrintDataItemTree::print(const ASTNode *item, const DynamicContext *context, int indent)
{
	XQueryPrintDataItemTree p;
	return p.printX(item, context, indent);
}

string XQueryPrintDataItemTree::printX(const ASTNode *item, const DynamicContext *context, int indent)
{
	switch(item->getType()) {
	case ASTNode::LITERAL: {
		return printLiteral((XQLiteral *)item, context, indent);
		break;
	}
	case ASTNode::SEQUENCE: {
		return printSequence((XQSequence *)item, context, indent);
		break;
	}
	case ASTNode::FUNCTION: {
		return printFunction((XQFunction *)item, context, indent);
		break;
	}
	case ASTNode::NAVIGATION: {
		return printNav((XQNav *)item, context, indent);
		break;
	}
	case ASTNode::VARIABLE: {
		return printVariable((XQVariable *)item, context, indent);
		break;
	}
	case ASTNode::STEP: {
		return printStep((XQStep *)item, context, indent);
		break;
	}
	case ASTNode::IF: {
		return printIf((XQIf *)item, context, indent);
		break;
	}
	case ASTNode::INSTANCE_OF: {
		return printInstanceOf((XQInstanceOf *)item, context, indent);
		break;
	}
	case ASTNode::CASTABLE_AS: {
		return printCastableAs((XQCastableAs *)item, context, indent);
		break;
	}
	case ASTNode::CAST_AS: {
		return printCastAs((XQCastAs *)item, context, indent);
		break;
	}
	case ASTNode::TREAT_AS: {
		return printTreatAs((XQTreatAs *)item, context, indent);
		break;
	}
	case ASTNode::PARENTHESIZED: {
		return printParenthesized((XQParenthesizedExpr *)item, context, indent);
		break;
	}
	case ASTNode::OPERATOR: {
		return printOperator((XQOperator *)item, context, indent);
		break;
	}
	case ASTNode::CONTEXT_ITEM: {
		return printContextItem((XQContextItem *)item, context, indent);
		break;
	}
	case (ASTNode::DEBUG_HOOK): {
		return printDebugHook((XQDebugHook *)item, context, indent);
		break;
	}
	case (ASTNode::FLWOR): {
		return printFLWOR((XQFLWOR *)item, context, indent);
		break;
	}
	case (ASTNode::FLWOR_QUANTIFIED): {
		return printFLWORQuantified((XQQuantified *)item, context, indent);
		break;
	}
	case (ASTNode::TYPESWITCH): {
		return printTypeswitch((XQTypeswitch *)item, context, indent);
		break;
	}
	case (ASTNode::VALIDATE): {
		return printValidate((XQValidate *)item, context, indent);
		break;
	}
	case (ASTNode::VARIABLE_DEFINITION): {
		return printGlobal((XQGlobalVariable *)item, context, indent);
		break;
	}
	case (ASTNode::FUNCTION_CALL): {
		return printFunctionCall((XQFunctionCall *)item, context, indent);
		break;
	}
	case (ASTNode::DOM_CONSTRUCTOR): {
		return printDOMConstructor((XQDOMConstructor *)item, context, indent);
		break;
	}
	case (ASTNode::ORDERING_CHANGE): {
		return printOrderingChange((XQOrderingChange *)item, context, indent);
		break;
	}
	case (ASTNode::USER_FUNCTION): {
		return printUserFunction((XQUserFunction::XQFunctionEvaluator *)item, context, indent);
		break;
	}
	default:
		break;
	}
	return getIndent(indent) + "<Unknown/>\n";
}

string XQueryPrintDataItemTree::printUserFunction(const XQUserFunction::XQFunctionEvaluator *item, const DynamicContext *context, int indent)
{
	ostringstream s;

	string in(getIndent(indent));

	const XMLCh *funUri = item->getFunctionURI();
	const XMLCh *funName = item->getFunctionName();

	string name("{");
	name += UTF8(funUri);
	name += "}:";
	name += UTF8(funName);

	const VectorOfASTNodes &args = item->getArguments();
	s << in << "<UserFunction name=\"" << name << "\">" << endl;

	if(item->getFunctionDefinition()->getParams()) {
		XQUserFunction::VectorOfFunctionParameters::const_iterator binding = item->getFunctionDefinition()->getParams()->begin();
		for(VectorOfASTNodes::const_iterator arg = args.begin(); arg != args.end() && binding != item->getFunctionDefinition()->getParams()->end(); ++arg, ++binding) {
			if((*binding)->_qname) {
				s << in << "  <Binding name=\"{" << UTF8((*binding)->_uri) << "}:" << UTF8((*binding)->_name) << "\">" << endl;
				s << printX(*arg, context, indent + INDENT + INDENT);
				s << in << "  </Binding>" << endl;
			}
		}
	}

	// We don't output the body, as it may result in an infinite loop
	// for recursive user functions - jpcs
// 	s << in << "  <Body>" << endl;
// 	s << printX(item->getFunctionDefinition()->getFunctionBody(), context, indent + INDENT + INDENT);
// 	s << in << "  </Body>" << endl;
	s << printPredicates(item, context, indent + INDENT);
	s << in << "</UserFunction>" << endl;

	return s.str();
}

string XQueryPrintDataItemTree::printDebugHook(const XQDebugHook *item, const DynamicContext *context, int indent)
{
	ostringstream s;

	string in(getIndent(indent));
	string functionName(UTF8(item->getFunctionName()));
	string file(UTF8(item->getFile()));

	s << in << "<DebugHook function=\"" << functionName
	  << "\" file=\"" << file << ":" << item->getLine() << ":"
	  << item->getColumn() << "\">" << endl;
	s << printX(item->m_impl, context, indent + INDENT);
	s << in << "</DebugHook>" << endl;

	return s.str();
}

string XQueryPrintDataItemTree::printFLWOR(const XQFLWOR *item, const DynamicContext *context, int indent)
{
	ostringstream s;

	string in(getIndent(indent));
	const VectorOfVariableBinding *bindings = item->getBindings();
	const ASTNode *where = item->getWhereExpr();
	const XQSort *sort = item->getSort();

	s << in << "<FLWOR>" << endl;
	for(VectorOfVariableBinding::const_iterator i = bindings->begin(); i != bindings->end(); ++i) {
		s << printXQVariableBinding(*i, context, indent + INDENT);
	}
	if(where) {
		s << in << "  <Where>" << endl;
		s << printX(where, context, indent + INDENT + INDENT);
		s << in << "  </Where>" << endl;
	}
	if(sort) s << printSort(sort, context, indent + INDENT);
	s << printX(item->getReturnExpr(), context, indent + INDENT);
	s << printPredicates(item, context, indent + INDENT);
	s << in << "</FLWOR>" << endl;

	return s.str();
}

string XQueryPrintDataItemTree::printXQVariableBinding(const XQVariableBinding *binding, const DynamicContext *context, int indent)
{
	ostringstream s;

	string in(getIndent(indent));
	string type;
	if(binding->_bindingType == XQVariableBinding::letBinding) {
		type = "LetBinding";
	}
	else {
		type = "ForBinding";
	}

	s << in << "<" << type << " name=\"" << UTF8(binding->_variable);
	if(binding->_positionalVariable) {
		s << "\" at=\"" << UTF8(binding->_positionalVariable);
	}
	s << "\">" << endl;
	s << printX(binding->_allValues, context, indent + INDENT);
	if(binding->_where) {
		s << in << "  <Where>" << endl;
		s << printX(binding->_where, context, indent + INDENT + INDENT);
		s << in << "  </Where>" << endl;
	}
	s << in << "</" << type << ">" << endl;

	return s.str();
}

string XQueryPrintDataItemTree::printSort(const XQSort *sort, const DynamicContext *context, int indent)
{
	ostringstream s;

	string in(getIndent(indent));
	string type;
	if(sort->getSortType() == XQSort::stable) {
		type = "StableSort";
	}
	else {
		type = "Sort";
	}

	s << in << "<" << type << ">" << endl;
	for(XQSort::VectorOfSortSpec::const_iterator it = sort->getSortSpecs()->begin();
	    it != sort->getSortSpecs()->end(); ++it) {
		s << in << "  <Specification";
		if((*it)->getModifier()) {
			s << " modifier=\"";
			bool addBar = false;
			if((*it)->getModifier() & XQSort::SortSpec::ascending) {
				s << "ascending";
				addBar = true;
			}
			if((*it)->getModifier() & XQSort::SortSpec::descending) {
				if(addBar) s << "|";
				s << "descending";
				addBar = true;
			}
			if((*it)->getModifier() & XQSort::SortSpec::empty_greatest) {
				if(addBar) s << "|";
				s << "empty_greatest";
				addBar = true;
			}
			if((*it)->getModifier() & XQSort::SortSpec::empty_least) {
				if(addBar) s << "|";
				s << "empty_least";
			}
			s << "\"";
		}
		if((*it)->getCollation() != 0 && *((*it)->getCollation()) != 0) {
			s << " collation=\"" << UTF8((*it)->getCollation()) << "\"";
		}
		s << ">" << endl;
		s << printX((*it)->getExpression(), context, indent + INDENT + INDENT);
		s << in << "  </Specification>" << endl;
	}
	s << in << "</" << type << ">" << endl;

	return s.str();
}

string XQueryPrintDataItemTree::printFLWORQuantified(const XQQuantified *item, const DynamicContext *context, int indent)
{
	ostringstream s;

	string in(getIndent(indent));
	XQQuantified::QuantifierType type = item->getQuantifierType();
	string name(type == XQQuantified::some ? "SomeFLWOR" : "EveryFLWOR");

	const VectorOfVariableBinding *bindings = item->getBindings();

	s << in << "<" << name << ">" << endl;
	for(VectorOfVariableBinding::const_iterator i = bindings->begin(); i != bindings->end(); ++i) {
		s << printXQVariableBinding(*i, context, indent + INDENT);
	}
	s << printX(item->getReturnExpr(), context, indent + INDENT);
	s << printPredicates(item, context, indent + INDENT);
	s << in << "</" << name << ">" << endl;

	return s.str();
}

string XQueryPrintDataItemTree::printTypeswitch(const XQTypeswitch *item, const DynamicContext *context, int indent)
{
	ostringstream s;

	string in(getIndent(indent));

	const XQTypeswitch::VectorOfClause *clauses = item->getClauses();

	s << in << "<TypeSwitch>" << endl;
	s << printX(item->getExpression(), context, indent + INDENT);
	for(XQTypeswitch::VectorOfClause::const_iterator i = clauses->begin(); i != clauses->end(); ++i) {
		s << printClause(*i, context, indent + INDENT);
	}
	s << printClause(item->getDefaultClause(), context, indent + INDENT);
	s << printPredicates(item, context, indent + INDENT);
	s << in << "</TypeSwitch>" << endl;

	return s.str();
}

string XQueryPrintDataItemTree::printClause(const XQTypeswitch::Clause *clause, const DynamicContext *context, int indent)
{
	ostringstream s;

	string in(getIndent(indent));

	if(clause->_type) {
		s << in << "<Clause";
		if(clause->_variable) {
			s << " name=\"" << UTF8(clause->_variable) << "\"";
		}
		s << ">" << endl;
		s << printSequenceType(clause->_type, context, indent + INDENT);
		s << printX(clause->_expr, context, indent + INDENT);
		s << in << "</Clause>" << endl;
	}
	else {
		s << in << "<Default";
		if(clause->_variable) {
			s << " name=\"" << UTF8(clause->_variable) << "\"";
		}
		s << ">" << endl;
		s << printX(clause->_expr, context, indent + INDENT);
		s << in << "</Default>" << endl;
	}

	return s.str();
}

string XQueryPrintDataItemTree::printValidate(const XQValidate *item, const DynamicContext *context, int indent)
{
	ostringstream s;

	string in(getIndent(indent));

	s << in << "<Validate mode=\"";
	switch(item->getValidationMode()) {
	case DocumentCache::VALIDATION_STRICT: {
		s << "strict";
		break;
	}
	case DocumentCache::VALIDATION_LAX: {
		s << "lax";
		break;
	}
	}
	s << "\">" << endl;
	s << printX(item->getExpression(), context, indent + INDENT);
	s << printPredicates(item, context, indent + INDENT);
	s << in << "</Validate>" << endl;

	return s.str();
}

string XQueryPrintDataItemTree::printGlobal(const XQGlobalVariable *item, const DynamicContext *context, int indent)
{
	ostringstream s;

	string in(getIndent(indent));

	s << in << "<GlobalVar name=\"" << UTF8(item->getVariableName());
	if(item->isExternal()) {
		s << " external=\"true\"";
	}
	if(hasPredicates(item) || item->getSequenceType() || item->getVariableExpr()) {
		s << ">" << endl;
		if(item->getSequenceType()) {
			s << printSequenceType(item->getSequenceType(), context, indent + INDENT);
		}
		if(item->getVariableExpr()) {
			s << printX(item->getVariableExpr(), context, indent + INDENT);
		}
		s << printPredicates(item, context, indent + INDENT);
		s << in << "</GlobalVar>" << endl;
	}
	else {
		s << "/>" << endl;
	}

	return s.str();
}

string XQueryPrintDataItemTree::printFunctionCall(const XQFunctionCall *item, const DynamicContext *context, int indent)
{
	ostringstream s;

	string in(getIndent(indent));

	const XMLCh *funPre = item->getName()->getPrefix();
	const XMLCh *funName = item->getName()->getName();

	string name;
	name += UTF8(funPre);
	name += ":";
	name += UTF8(funName);

	const VectorOfASTNodes &args = item->getArguments();
	if(args.empty() && !hasPredicates(item)) {
		s << in << "<FunctionCall name=\"" << name << "\"/>" << endl;
	}
	else {
		s << in << "<FunctionCall name=\"" << name << "\">" << endl;
		for(VectorOfASTNodes::const_iterator i = args.begin(); i != args.end(); ++i) {
			s << printX(*i, context, indent + INDENT);
		}
		s << printPredicates(item, context, indent + INDENT);
		s << in << "</FunctionCall>" << endl;
	}

	return s.str();
}

string XQueryPrintDataItemTree::printDOMConstructor(const XQDOMConstructor *item, const DynamicContext *context, int indent)
{
	ostringstream s;

	string in(getIndent(indent));

	s << in << "<DOMConstructor type=\"" << UTF8(item->getNodeType());
	if(hasPredicates(item) || item->getName() || !item->getAttributes()->empty() || !item->getChildren()->empty()) {
		s << "\">" << endl;
		if(item->getName()) {
			s << in << "  <Name>" << endl;
			s << printX(item->getName(), context, indent + INDENT + INDENT);
			s << in << "  </Name>" << endl;
		}
		if(item->getAttributes() != 0 && !item->getAttributes()->empty()) {
			s << in << "  <Attributes>" << endl;
			for(VectorOfASTNodes::const_iterator i = item->getAttributes()->begin();
			    i != item->getAttributes()->end(); ++i) {
				s << printX(*i, context, indent + INDENT + INDENT);
			}
			s << in << "  </Attributes>" << endl;
		}
		if(!item->getChildren()->empty()) {
			s << in << "  <Children>" << endl;
			for(VectorOfASTNodes::const_iterator i = item->getChildren()->begin();
			    i != item->getChildren()->end(); ++i) {
				s << printX(*i, context, indent + INDENT + INDENT);
			}
			s << in << "  </Children>" << endl;
		}
		s << printPredicates(item, context, indent + INDENT);
		s << in << "</DOMConstructor>" << endl;
	}
	else {
		s << "\"/>" << endl;
	}

	return s.str();
}

string XQueryPrintDataItemTree::printOrderingChange(const XQOrderingChange *item, const DynamicContext *context, int indent)
{
	ostringstream s;

	string in(getIndent(indent));

	s << in << "<OrderingChange value=\"";
  if(item->getOrderingValue() == StaticContext::ORDERING_ORDERED)
    s << "ordered";
  else s << "unordered";
  s << "\">" << endl;
	s << printX(item->getExpr(), context, indent + INDENT);
	s << in << "</OrderingChange>" << endl;

	return s.str();
}
