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

/*
 * xf:one-or-more(item* $srcval) => item+
 */

#ifndef _FUNCTIONONEORMORE_HPP
#define _FUNCTIONONEORMORE_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>

class PATHAN_EXPORT FunctionOneOrMore : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionOneOrMore(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  
  Result createResult(DynamicContext* context, int flags=0) const;

private:
  class OneOrMoreResult : public ResultImpl
  {
  public:
    OneOrMoreResult(const FunctionOneOrMore *func, int flags, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;
  private:
    int _flags;
    const FunctionOneOrMore *_func;
    Result _arg;
    unsigned int _argNo;
  };
};

#endif // _FUNCTIONONEORMORE_HPP
