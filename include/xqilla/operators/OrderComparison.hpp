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

#ifndef _ORDERCOMPARISON_HPP
#define _ORDERCOMPARISON_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/XQOperator.hpp>
#include <xqilla/runtime/SingleResult.hpp>

class XQILLA_API OrderComparison : public XQOperator
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
