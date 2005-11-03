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

#ifndef _ORDERCOMPARISON_HPP
#define _ORDERCOMPARISON_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/XQOperator.hpp>
#include <xqilla/runtime/SingleResult.hpp>

class PATHAN_EXPORT OrderComparison : public XQOperator
{
public:
  static const XMLCh name[];

  ///testBefore should be set to true if you want to test that the first parameter is before the second.
  OrderComparison(const VectorOfASTNodes &args, bool testBefore, XPath2MemoryManager* memMgr);

  Result createResult(DynamicContext* context, int flags=0) const;

  bool getTestBefore() const;

private:
  class OrderComparisonResult : public SingleResult
  {
  public:
    OrderComparisonResult(const OrderComparison *op, DynamicContext *context);

    Item::Ptr getSingleResult(DynamicContext *context) const;
    std::string asString(DynamicContext *context, int indent) const;    
  private:
    const OrderComparison *_op;
  };

	bool _testBefore;
};

#endif // _FUNCTIONOPPLUS_HPP
