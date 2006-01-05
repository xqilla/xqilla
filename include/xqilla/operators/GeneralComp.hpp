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

/*
   General Comparison operator function
*/

#ifndef _GENERALCOMP_HPP
#define _GENERALCOMP_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/XQOperator.hpp>
#include <xqilla/runtime/SingleResult.hpp>

/** GeneralComp operator function*/
class XQILLA_API GeneralComp : public XQOperator
{
public:
  typedef enum {
    EQUAL,
    NOT_EQUAL,
    LESS_THAN,
    LESS_THAN_EQUAL,
    GREATER_THAN,
    GREATER_THAN_EQUAL
  } ComparisonOperation;

  static const XMLCh name[];

  GeneralComp(ComparisonOperation operation, const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);

  Result createResult(DynamicContext* context, int flags=0) const;

  ComparisonOperation getOperation() const;

  static bool compare(GeneralComp::ComparisonOperation operation,
                      AnyAtomicType::Ptr first, AnyAtomicType::Ptr second,
                      Collation* collation, DynamicContext *context);

protected:
  class GeneralCompResult : public SingleResult
  {
  public:
    GeneralCompResult(const GeneralComp *op, DynamicContext *context);

    Item::Ptr getSingleResult(DynamicContext *context) const;
    std::string asString(DynamicContext *context, int indent) const;    
  private:
    const GeneralComp *_op;
  };

  ComparisonOperation _operation;
};

#endif // _GENERALCOMP_HPP



