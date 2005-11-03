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

#ifndef _ARITHMETICOPERATOR_HPP
#define _ARITHMETICOPERATOR_HPP

#include <xqilla/ast/XQOperator.hpp>
#include <xqilla/runtime/SingleResult.hpp>

class AnyAtomicType;

class PATHAN_EXPORT ArithmeticOperator : public XQOperator
{
public:
  ArithmeticOperator(const XMLCh* opName, const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);

  virtual ASTNode* staticResolution(StaticContext *context);
  Result createResult(DynamicContext* context, int flags=0) const;

  AnyAtomicType::Ptr getArgument(unsigned int index, DynamicContext *context) const;

  virtual Item::Ptr execute(const AnyAtomicType::Ptr &arg1, const AnyAtomicType::Ptr &arg2, DynamicContext *context) const = 0;

protected:

  class ArithmeticResult : public SingleResult
  {
  public:
    ArithmeticResult(const ArithmeticOperator *op, DynamicContext *context);

    Item::Ptr getSingleResult(DynamicContext *context) const;
    std::string asString(DynamicContext *context, int indent) const;    
  private:
    const ArithmeticOperator *_op;
  };

};

#endif // _ARITHMETICOPERATOR_HPP
