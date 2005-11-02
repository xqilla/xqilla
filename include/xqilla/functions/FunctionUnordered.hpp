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

#ifndef _FUNCTIONUNORDERED_HPP
#define _FUNCTIONUNORDERED_HPP

#include <xqilla/ast/DataItemFunction.hpp>

class PATHAN_EXPORT FunctionUnordered : public DataItemFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionUnordered(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  
  virtual DataItem* staticResolution(StaticContext *context);
  Result createResult(DynamicContext* context, int flags=0) const;

private:
  class UnorderedResult : public ResultImpl
  {
  public:
    UnorderedResult(const FunctionUnordered *func, int flags, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;
  private:
    int _flags;
    const FunctionUnordered *_func;
    Result _arg;
  };
};

#endif // _FUNCTIONUNORDERED_HPP

