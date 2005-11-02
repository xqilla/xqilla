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
   Union function -- takes two sequences, and merge them
*/

#ifndef _UNION_HPP
#define _UNION_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/DataItemNav.hpp>
#include <xqilla/ast/DataItemOperator.hpp>
#include <xqilla/runtime/ResultImpl.hpp>

/** Union operator function*/
class PATHAN_EXPORT Union : public DataItemOperator
{
public:
  static const XMLCh name[];

  Union(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  
  Result createResult(DynamicContext* context, int flags=0) const;

private:
  class UnionResult : public ResultImpl
  {
  public:
    UnionResult(const Union *op, int flags, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;  
  private:
    const Union *_op;
    unsigned int _flags;
    unsigned int _index;
    Result _result;
  };
};

#endif // _UNION_HPP

