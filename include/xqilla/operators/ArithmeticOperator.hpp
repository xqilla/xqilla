/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
 *     Oracle. All rights reserved.
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

#ifndef _ARITHMETICOPERATOR_HPP
#define _ARITHMETICOPERATOR_HPP

#include <xqilla/ast/XQOperator.hpp>
#include <xqilla/runtime/SingleResult.hpp>

class AnyAtomicType;

class XQILLA_API ArithmeticOperator : public XQOperator
{
public:
  ArithmeticOperator(const XMLCh* opName, const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);

  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);
  Result createResult(DynamicContext* context, int flags=0) const;

  AnyAtomicType::Ptr getArgument(unsigned int index, DynamicContext *context) const;

  virtual void calculateStaticType() = 0;
  virtual Item::Ptr execute(const AnyAtomicType::Ptr &arg1, const AnyAtomicType::Ptr &arg2, DynamicContext *context) const = 0;

protected:
  void calculateStaticTypeForNumerics(const StaticType &arg0, const StaticType &arg1);

  class ArithmeticResult : public SingleResult
  {
  public:
    ArithmeticResult(const ArithmeticOperator *op);

    Item::Ptr getSingleResult(DynamicContext *context) const;
    std::string asString(DynamicContext *context, int indent) const;    
  private:
    const ArithmeticOperator *_op;
  };
};

#endif // _ARITHMETICOPERATOR_HPP
