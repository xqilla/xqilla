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

#include "../config/pathan_config.h"
#include <iostream>
#include <sstream>

#include <xqilla/utils/PrintDataItemTree.hpp>
#include <xqilla/utils/UTF8Str.hpp>

#include <xqilla/dom-api/impl/PathanExpressionImpl.hpp>
#include <xqilla/ast/ASTNode.hpp>
#include <xqilla/ast/XQFunction.hpp>
#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/ast/XQLiteral.hpp>
#include <xqilla/ast/XQNav.hpp>
#include <xqilla/ast/XQParenthesizedExpr.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/ast/XQStep.hpp>
#include <xqilla/ast/XQVariable.hpp>
#include <xqilla/ast/XQIf.hpp>
#include <xqilla/ast/XQInstanceOf.hpp>
#include <xqilla/ast/XQCastableAs.hpp>
#include <xqilla/ast/XQCastAs.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/ast/XQOperator.hpp>
#include <xqilla/ast/XQContextItem.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/parser/QName.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/items/AnyAtomicType.hpp>
#include <xqilla/utils/XStr.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/operators/GeneralComp.hpp>

#include <xercesc/dom/DOMNode.hpp>
#if defined(XERCES_HAS_CPP_NAMESPACE)
  XERCES_CPP_NAMESPACE_USE
#endif

using namespace std;

static const int INDENT = 1;

string PrintDataItemTree::print(const PathanExpression *expr, const DynamicContext *context, int indent)
{
  return print(((const PathanExpressionImpl *)expr)->getCompiledExpression(), context, indent);
}

string PrintDataItemTree::print(const ASTNode *item, const DynamicContext *context, int indent)
{
  PrintDataItemTree p;
  return p.printX(item, context, indent);
}

string PrintDataItemTree::printX(const ASTNode *item, const DynamicContext *context, int indent)
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
  default: {
    return getIndent(indent) + "<Unknown/>\n";
    break;
  }
  }
}

string PrintDataItemTree::printFunction(const XQFunction *item, const DynamicContext *context, int indent)
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
  if(args.empty() && !hasPredicates(item)) {
    s << in << "<Function name=\"" << name << "\"/>" << endl;
  }
  else {
    s << in << "<Function name=\"" << name << "\">" << endl;
    for(VectorOfASTNodes::const_iterator i = args.begin(); i != args.end(); ++i) {
      s << printX(*i, context, indent + INDENT);
    }
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</Function>" << endl;
  }

  return s.str();
}

string PrintDataItemTree::printOperator(const XQOperator *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  string name(UTF8(item->getOperatorName()));
  if(name == "comp") {
    name = getComparisonOperationName(((const GeneralComp *)item)->getOperation());
  }

  const VectorOfASTNodes &args = item->getArguments();
  if(args.empty() && !hasPredicates(item)) {
    s << in << "<Operator name=\"" << name << "\"/>" << endl;
  }
  else {
    s << in << "<Operator name=\"" << name << "\">" << endl;
    for(VectorOfASTNodes::const_iterator i = args.begin(); i != args.end(); ++i) {
      s << printX(*i, context, indent + INDENT);
    }
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</Operator>" << endl;
  }

  return s.str();
}

string PrintDataItemTree::printContextItem(const XQContextItem *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  if(hasPredicates(item)) {    
    s << in << "<ContextItem>" << endl;
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</ContextItem>" << endl;
  }
  else {
    s << in << "<ContextItem/>" << endl;
  }

  return s.str();
}

string PrintDataItemTree::printLiteral(const XQLiteral *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<Literal>" << endl;
  s << in << "  " << item->getItemConstructor()->asString(context) << endl;
  s << printPredicates(item, context, indent + INDENT);
  s << in << "</Literal>" << endl;

  return s.str();
}

string PrintDataItemTree::printNav(const XQNav *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  string gotoRoot(item->getGotoRootFirst() ? " gotoRoot=\"true\"" : "");

  const XQNav::Steps &steps = item->getSteps();

  if(steps.empty() && !hasPredicates(item)) {
    s << in << "<Navigation" << gotoRoot << "/>" << endl;
  }
  else {
    s << in << "<Navigation" << gotoRoot << ">" << endl;
    for(XQNav::Steps::const_iterator i = steps.begin(); i != steps.end(); ++i) {
      s << printX(i->step, context, indent + INDENT);
    }
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</Navigation>" << endl;
  }

  return s.str();
}

string PrintDataItemTree::printStep(const XQStep *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  const NodeTest *step = item->getNodeTest();

  s << in << "<Step";
  s << " axis=\"" << getAxisName(item->getAxis()) << "\"";
  
  SequenceType::ItemType *type = step->getItemType();
  if(type == 0) {
    if(step->getNamespaceWildcard()) {
      s << " uri=\"*\"";
    }
    else {
      if(step->getNodePrefix() != 0) {
        s << " prefix=\"" << UTF8(step->getNodePrefix()) << "\"";
      }
      if(step->getNodeUri() != 0) {
        s << " uri=\"" << UTF8(step->getNodeUri()) << "\"";
      }
    }
    if(step->getNameWildcard()) {
      s << " name=\"*\"";
    }
    else if(step->getNodeName() != 0) {
      s << " name=\"" << UTF8(step->getNodeName()) << "\"";
    }
    
    if(step->getTypeWildcard()) {
      s << " nodeType=\"*\"";
    }
    else if(step->isNodeTypeSet()) {
      s << " nodeType=\"" << UTF8(step->getNodeType()) << "\"";
    }
  }

  if(hasPredicates(item) || type != 0) {
    s << ">" << endl;
    if(type != 0) {
      s << in << "  <ItemType";
      s << printItemTypeAttrs(type, context);
      s << "/>" << endl;
    }
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</Step>" << endl;
  }
  else {
    s << "/>" << endl;
  }

  return s.str();
}

string PrintDataItemTree::printParenthesized(const XQParenthesizedExpr *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  const VectorOfASTNodes &children = item->getChildren();

  if(children.empty() && !hasPredicates(item)) {
    s << in << "<Parenthesized/>" << endl;
  }
  else {
    s << in << "<Parenthesized>" << endl;
    for(VectorOfASTNodes::const_iterator i = children.begin(); i != children.end(); ++i) {
      s << printX(*i, context, indent + INDENT);
    }
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</Parenthesized>" << endl;
  }

  return s.str();
}

string PrintDataItemTree::printSequence(const XQSequence *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  const ItemConstructor::Vector &values = item->getItemConstructors();

  if(values.empty()) {
    s << in << "<Sequence/>" << endl;
  }
  else {
    s << in << "<Sequence>" << endl;
    for(ItemConstructor::Vector::const_iterator i = values.begin(); i != values.end(); ++i) {
      s << in << "  " << (*i)->asString(context) << endl;
    }
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</Sequence>" << endl;
  }

  return s.str();
}

string PrintDataItemTree::printVariable(const XQVariable *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  string prefix(UTF8(item->getPrefix()));
  string name(UTF8(item->getName()));
  if(prefix != "") {
    name = prefix + ":" + name;
  }

  if(hasPredicates(item)) {    
    s << in << "<Variable name=\"" << name << "\">" << endl;
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</Variable>" << endl;
  }
  else {
    s << in << "<Variable name=\"" << name << "\"/>" << endl;
  }

  return s.str();
}

string PrintDataItemTree::printIf(const XQIf *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<If>" << endl;
  s << in << "  <Test>" << endl;
  s << printX(item->getTest(), context, indent + INDENT + INDENT);
  s << in << "  </Test>" << endl;
  s << in << "  <Then>" << endl;
  s << printX(item->getWhenTrue(), context, indent + INDENT + INDENT);
  s << in << "  </Then>" << endl;
  s << in << "  <Else>" << endl;
  s << printX(item->getWhenFalse(), context, indent + INDENT + INDENT);
  s << in << "  </Else>" << endl;
  s << printPredicates(item, context, indent + INDENT);
  s << in << "</If>" << endl;

  return s.str();
}

string PrintDataItemTree::printInstanceOf(const XQInstanceOf *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<InstanceOf>" << endl;
  s << printX(item->getExpression(), context, indent + INDENT);
  s << printSequenceType(item->getSequenceType(), context, indent + INDENT);
  s << printPredicates(item, context, indent + INDENT);
  s << in << "</InstanceOf>" << endl;

  return s.str();
}

string PrintDataItemTree::printCastableAs(const XQCastableAs *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<CastableAs>" << endl;
  s << printX(item->getExpression(), context, indent + INDENT);
  s << printSequenceType(item->getSequenceType(), context, indent + INDENT);
  s << printPredicates(item, context, indent + INDENT);
  s << in << "</CastableAs>" << endl;

  return s.str();
}

string PrintDataItemTree::printCastAs(const XQCastAs *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<CastAs>" << endl;
  s << printX(item->getExpression(), context, indent + INDENT);
  s << printSequenceType(item->getSequenceType(), context, indent + INDENT);
  s << in << "</CastAs>" << endl;

  return s.str();
}

string PrintDataItemTree::printTreatAs(const XQTreatAs *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<TreatAs>" << endl;
  s << printX(item->getExpression(), context, indent + INDENT);
  s << printSequenceType(item->getSequenceType(), context, indent + INDENT);
  s << printPredicates(item, context, indent + INDENT);
  s << in << "</TreatAs>" << endl;

  return s.str();
}

string PrintDataItemTree::printSequenceType(const SequenceType *type, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<SequenceType";
  s << " occurrence=\"" << getOccurrenceIndicatorName(type->getOccurrenceIndicator()) << "\"";
  s << printItemTypeAttrs(type->getItemType(), context);
  s << "/>" << endl;

  return s.str();
}

string PrintDataItemTree::printItemTypeAttrs(const SequenceType::ItemType *type, const DynamicContext *context)
{
  ostringstream s;

  s << " testType=\"" << getItemTestTypeName(type->getItemTestType()) << "\"";
  
  if(type->getAllowNilled()) {
    s << " nil=\"true\"";
  }

  try {
    const XMLCh *nameURI = type->getNameURI((DynamicContext *)context);
    if(type->getName() != 0) {
      s << " name=\"{" << UTF8(nameURI)
        << "}:" << UTF8(type->getName()->getName()) << "\"";
    }
    else if(nameURI != 0) {
      s << " nameURI=\"" << UTF8(nameURI) << "\"";
    }
  }
  catch(const NamespaceLookupException &e) {
    if(type->getName() != 0) {
      s << " name=\"" << UTF8(type->getName()->getPrefix())
        << ":" << UTF8(type->getName()->getName()) << "\"";
    }
  }

  try {
    const XMLCh *typeURI = type->getTypeURI((DynamicContext *)context);
    if(type->getType() != 0) {
      s << " type=\"" << UTF8(typeURI)
        << ":" << UTF8(type->getType()->getName()) << "\"";
    }
    else if(typeURI != 0) {
      s << " typeURI=\"" << UTF8(typeURI) << "\"";
    }
  }
  catch(const NamespaceLookupException &e) {
    if(type->getType() != 0) {
      s << " type=\"" << UTF8(type->getType()->getPrefix())
        << ":" << UTF8(type->getType()->getName()) << "\"";
    }
  }

  return s.str();
}

string PrintDataItemTree::printItem(const Item::Ptr item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  string value(UTF8(item->asString(context)));
  s << in << "<Item value=\"" << value << "\" type=\"";
  if(item->isNode()) {
    s << "node";
  }
  else {
    const AnyAtomicType::Ptr att = (const AnyAtomicType::Ptr )item;
    s << "{" << UTF8(att->getTypeURI()) << "}:"
      << UTF8(att->getTypeName());
  }
  s << "\"/>" << endl;

  return s.str();
}

bool PrintDataItemTree::hasPredicates(const ASTNodeImpl *item)
{
  return !item->getPredicates().empty();
}

string PrintDataItemTree::printPredicates(const ASTNodeImpl *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  const ASTNode::Predicates &preds = item->getPredicates();

  if(!preds.empty()) {
    string in(getIndent(indent));
    s << in << "<Predicates>" << endl;
    
    for(ASTNode::Predicates::const_iterator i = preds.begin(); i != preds.end(); ++i) {
      s << printX(i->pred, context, indent + INDENT);
    }
    
    s << in << "</Predicates>" << endl;
  }

  return s.str();
}

string PrintDataItemTree::getIndent(int indent)
{
  ostringstream s;

  for(int i = indent; i != 0; --i) {
    s << "  ";
  }

  return s.str();
}

string PrintDataItemTree::getAxisName(XQStep::Axis axis)
{
  switch(axis) {
  case XQStep::ANCESTOR: {
    return "ancestor";
  }
  case XQStep::ANCESTOR_OR_SELF: {
    return "ancestor-or-self";
  }
  case XQStep::ATTRIBUTE: {
    return "attribute";
  }
  case XQStep::CHILD: {
    return "child";
  }
  case XQStep::DESCENDANT: {
    return "descendant";
  }
  case XQStep::DESCENDANT_OR_SELF: {
    return "descendant-or-self";
  }
  case XQStep::FOLLOWING: {
    return "following";
  }
  case XQStep::FOLLOWING_SIBLING: {
    return "following-sibling";
  }
  case XQStep::NAMESPACE: {
    return "namespace";
  }
  case XQStep::PARENT: {
    return "parent";
  }
  case XQStep::PRECEDING: {
    return "preceding";
  }
  case XQStep::PRECEDING_SIBLING: {
    return "preceding-sibling";
  }
  case XQStep::SELF: {
    return "self";
  }
  default: {
    return "unknown";
  }
  }
}

string PrintDataItemTree::getItemTestTypeName(int type)
{
  switch(type) {
  case SequenceType::ItemType::TEST_ELEMENT: {
    return "element";
  }
  case SequenceType::ItemType::TEST_ATTRIBUTE: {
    return "attribute";
  }
  case SequenceType::ItemType::TEST_SCHEMA_ELEMENT: {
    return "schema-element";
  }
  case SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE: {
    return "schema-attribute";
  }
  case SequenceType::ItemType::TEST_NODE: {
    return "node";
  }
  case SequenceType::ItemType::TEST_PI: {
    return "processing-instruction";
  }
  case SequenceType::ItemType::TEST_COMMENT: {
    return "comment";
  }
  case SequenceType::ItemType::TEST_TEXT: {
    return "text";
  }
  case SequenceType::ItemType::TEST_DOCUMENT: {
    return "document";
  }
  case SequenceType::ItemType::TEST_ANYTHING: {
    return "anything";
  }
  case SequenceType::ItemType::TEST_ATOMIC_TYPE: {
    return "atomic-type";
  }
  default: {
    return "unknown";
  }
  }
}

string PrintDataItemTree::getOccurrenceIndicatorName(SequenceType::OccurrenceIndicator oi)
{
  switch(oi) {
  case SequenceType::EXACTLY_ONE: {
    return "exactly_one";
  }
  case SequenceType::STAR: {
    return "zero_to_many";
  }
  case SequenceType::PLUS: {
    return "one_to_many";
  }
  case SequenceType::QUESTION_MARK: {
    return "zero_or_one";
  }
  default: {
    return "unknown";
  }
  }
}

string PrintDataItemTree::getComparisonOperationName(GeneralComp::ComparisonOperation co)
{
  switch(co) {
  case GeneralComp::EQUAL: {
    return "equal";
  }
  case GeneralComp::NOT_EQUAL: {
    return "not_equal";
  }
  case GeneralComp::LESS_THAN: {
    return "less_than";
  }
  case GeneralComp::LESS_THAN_EQUAL: {
    return "less_than_equal";
  }
  case GeneralComp::GREATER_THAN: {
    return "greater_than";
  }
  case GeneralComp::GREATER_THAN_EQUAL: {
    return "greater_than_equal";
  }
  default: {
    return "unknown";
  }
  }
}
