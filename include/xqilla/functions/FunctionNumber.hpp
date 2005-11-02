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

  Number function

*/

#ifndef _FUNCTIONNUMBER_HPP
#define _FUNCTIONNUMBER_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/DataItemFunction.hpp>

class AnyAtomicType;

/** Number operator function, and exists functions. */
class PATHAN_EXPORT FunctionNumber : public DataItemFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionNumber(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  
  /**
   * Called during static analysis to determine if statically correct.
   * Performs constant folding if the function has an argument, and it
   * is constant.
   */
  virtual DataItem* staticResolution(StaticContext *context);

  /** Returns the argument as a number **/
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

  static Item::Ptr number(const AnyAtomicType::Ptr &item, DynamicContext *context);
};

#endif // _FUNCTIONNUMBER_HPP
