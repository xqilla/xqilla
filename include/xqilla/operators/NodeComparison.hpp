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

#ifndef _NODECOMPARISON_HPP
#define _NODECOMPARISON_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/DataItemOperator.hpp>
#include <xqilla/runtime/SingleResult.hpp>

/** NodeComparison operator function*/
class PATHAN_EXPORT NodeComparison : public DataItemOperator
{
public:
  static const XMLCh name[];

  NodeComparison(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  
  Result createResult(DynamicContext* context, int flags=0) const;

private:
  class NodeComparisonResult : public SingleResult
  {
  public:
    NodeComparisonResult(const NodeComparison *op, DynamicContext *context);

    Item::Ptr getSingleResult(DynamicContext *context) const;
    std::string asString(DynamicContext *context, int indent) const;    
  private:
    const NodeComparison *_op;
  };
};

#endif // _FUNCTIONOPPLUS_HPP
