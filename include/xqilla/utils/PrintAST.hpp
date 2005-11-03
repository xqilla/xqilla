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

#ifndef __PRINTAST_HPP
#define  __PRINTAST_HPP

#include <string>

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/ASTNode.hpp>
#include <xqilla/axis/NodeTest.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/operators/GeneralComp.hpp>
#include <xqilla/ast/XQTypeswitch.hpp>
#include <xqilla/functions/XQUserFunction.hpp>

class XQillaExpression;
class XQFunction;
class ASTNodeImpl;
class XQLiteral;
class XQNav;
class XQParenthesizedExpr;
class XQSequence;
class XQStep;
class XQVariable;
class XQIf;
class XQInstanceOf;
class XQCastableAs;
class XQCastAs;
class XQTreatAs;
class XQOperator;
class XQContextItem;
class XQQuery;
class XQDebugHook;
class XQDOMConstructor;
class XQFLWOR;
class XQVariableBinding;
class XQSort;
class XQQuantified;
class XQFunctionCall;
class XQGlobalVariable;
class XQValidate;
class XQOrderingChange;
class DynamicContext;
class Item;

class XQILLA_API PrintAST
{
public:
  static std::string print(const XQillaExpression *expr, const DynamicContext *context, int indent = 0);
  static std::string print(const XQQuery *query, const DynamicContext *context, int indent = 0);
  static std::string print(const ASTNode *item, const DynamicContext *context, int indent = 0);

  virtual std::string printASTNode(const ASTNode *item, const DynamicContext *context, int indent = 0);
  virtual std::string printFunction(const XQFunction *item, const DynamicContext *context, int indent);
  virtual std::string printLiteral(const XQLiteral *item, const DynamicContext *context, int indent);
  virtual std::string printNav(const XQNav *item, const DynamicContext *context, int indent);
  virtual std::string printParenthesized(const XQParenthesizedExpr *item, const DynamicContext *context, int indent);
  virtual std::string printSequence(const XQSequence *item, const DynamicContext *context, int indent);
  virtual std::string printStep(const XQStep *item, const DynamicContext *context, int indent);
  virtual std::string printVariable(const XQVariable *item, const DynamicContext *context, int indent);
  virtual std::string printIf(const XQIf *item, const DynamicContext *context, int indent);
  virtual std::string printInstanceOf(const XQInstanceOf *item, const DynamicContext *context, int indent);
  virtual std::string printCastableAs(const XQCastableAs *item, const DynamicContext *context, int indent);
  virtual std::string printCastAs(const XQCastAs *item, const DynamicContext *context, int indent);
  virtual std::string printTreatAs(const XQTreatAs *item, const DynamicContext *context, int indent);
  virtual std::string printOperator(const XQOperator *item, const DynamicContext *context, int indent);
  virtual std::string printContextItem(const XQContextItem *item, const DynamicContext *context, int indent);
  virtual std::string printDebugHook(const XQDebugHook *item, const DynamicContext *context, int indent);
  virtual std::string printFLWOR(const XQFLWOR *item, const DynamicContext *context, int indent);
  virtual std::string printFLWORQuantified(const XQQuantified *item, const DynamicContext *context, int indent);
  virtual std::string printTypeswitch(const XQTypeswitch *item, const DynamicContext *context, int indent);
  virtual std::string printValidate(const XQValidate *item, const DynamicContext *context, int indent);
  virtual std::string printGlobal(const XQGlobalVariable *item, const DynamicContext *context, int indent);
  virtual std::string printFunctionCall(const XQFunctionCall *item, const DynamicContext *context, int indent);
  virtual std::string printDOMConstructor(const XQDOMConstructor *item, const DynamicContext *context, int indent);
  virtual std::string printOrderingChange(const XQOrderingChange *item, const DynamicContext *context, int indent);
  virtual std::string printUserFunction(const XQUserFunction::XQFunctionEvaluator *item, const DynamicContext *context, int indent);

  virtual std::string printItem(const Item::Ptr item, const DynamicContext *context, int indent);
  virtual std::string printSequenceType(const SequenceType *type, const DynamicContext *context, int indent);
  virtual std::string printItemTypeAttrs(const SequenceType::ItemType *type, const DynamicContext *context);
  virtual std::string printPredicates(const ASTNodeImpl *item, const DynamicContext *context, int indent);
  virtual std::string printXQVariableBinding(const XQVariableBinding *binding, const DynamicContext *context, int indent);
  virtual std::string printSort(const XQSort *sort, const DynamicContext *context, int indent);
  virtual std::string printClause(const XQTypeswitch::Clause *clause, const DynamicContext *context, int indent);

  static bool hasPredicates(const ASTNodeImpl *item);
  static std::string getIndent(int indent);
  static std::string getAxisName(XQStep::Axis axis);
  static std::string getItemTestTypeName(int type);
  static std::string getOccurrenceIndicatorName(SequenceType::OccurrenceIndicator oi);
  static std::string getComparisonOperationName(GeneralComp::ComparisonOperation co);
};

#endif
