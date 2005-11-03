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

#ifndef __PRINTDATAITEMTREE_HPP
#define	__PRINTDATAITEMTREE_HPP

#include <string>

#include <xqilla/framework/Pathan.hpp>
#include <xqilla/ast/ASTNode.hpp>
#include <xqilla/axis/NodeTest.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/operators/GeneralComp.hpp>

class PathanExpression;
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
class DynamicContext;
class Item;

class PATHAN_EXPORT PrintDataItemTree
{
public:
  static std::string print(const PathanExpression *expr, const DynamicContext *context, int indent = 0);
  static std::string print(const ASTNode *item, const DynamicContext *context, int indent = 0);

  virtual std::string printX(const ASTNode *item, const DynamicContext *context, int indent = 0);
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

  virtual std::string printItem(const Item::Ptr item, const DynamicContext *context, int indent);
  virtual std::string printSequenceType(const SequenceType *type, const DynamicContext *context, int indent);
  virtual std::string printItemTypeAttrs(const SequenceType::ItemType *type, const DynamicContext *context);
  virtual std::string printPredicates(const ASTNodeImpl *item, const DynamicContext *context, int indent);

  static bool hasPredicates(const ASTNodeImpl *item);
  static std::string getIndent(int indent);
  static std::string getAxisName(XQStep::Axis axis);
  static std::string getItemTestTypeName(int type);
  static std::string getOccurrenceIndicatorName(SequenceType::OccurrenceIndicator oi);
  static std::string getComparisonOperationName(GeneralComp::ComparisonOperation co);
};

#endif
