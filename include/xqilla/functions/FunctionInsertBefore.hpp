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
  xf:insert-before(item* $target, decimal $position, item* $inserts) => item*
*/

#ifndef _FUNCTIONINSERTBEFORE_HPP
#define _FUNCTIONINSERTBEFORE_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>

class XQILLA_API FunctionInsertBefore : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  ///Constructor. Sets arg def to NOT_OPTIONAL.
  FunctionInsertBefore(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  Result createResult(DynamicContext* context, int flags=0) const;

private:
  class InsertBeforeResult : public ResultImpl
  {
  public:
    InsertBeforeResult(const FunctionInsertBefore *func, int flags, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;
  private:
    int _flags;
    const FunctionInsertBefore *_func;
    Numeric::Ptr _position;
    Numeric::Ptr _one;
    Numeric::Ptr _i;
    bool _insertsDone;
    Result _target;
    Result _inserts;
  };
};

#endif // _FUNCTIONINSERTBEFORE_HPP
