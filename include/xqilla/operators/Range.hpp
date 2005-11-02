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

#ifndef _RANGE_HPP
#define _RANGE_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/DataItemOperator.hpp>

class Numeric;

/** Range operator function*/
class PATHAN_EXPORT Range : public DataItemOperator
{
public:
  static const XMLCh name[];

  ///Constructor
  Range(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  
  virtual DataItem* staticResolution(StaticContext *context);
  Result createResult(DynamicContext* context, int flags=0) const;

private:
  class RangeResult : public ResultImpl
  {
  public:
    RangeResult(const Range *op, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;

  private:
    const Range *_op;
    Numeric::Ptr _last;
    Numeric::Ptr _step;
    Numeric::Ptr _end;
  };
};

#endif // _RANGE_HPP


