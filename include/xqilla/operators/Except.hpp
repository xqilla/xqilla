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

   Op Except 
The except operator takes two node sequences as operands and returns a sequence containing all the nodes that occur in the first operand
but not in the second operand
*/

#ifndef _EXCEPT_HPP
#define _EXCEPT_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/XQOperator.hpp>
#include <xqilla/ast/XQNav.hpp>
#include <xqilla/runtime/ResultBuffer.hpp>

class XQILLA_API Except : public XQOperator
{
public:
  static const XMLCh name[];

  Except(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  Result createResult(DynamicContext* context, int flags=0) const;

private:
  class ExceptResult : public ResultImpl
  {
  public:
    ExceptResult(const Except *op, int flags, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;  
  private:
    const Except *_op;
    unsigned int _flags;
    bool _toDo;
    Result _result;
    ResultBuffer _excpt;
  };
};

#endif 
