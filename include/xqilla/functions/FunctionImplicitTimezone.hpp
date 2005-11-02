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

   implicit-timezone function

*/


#ifndef _FUNCTIONIMPLICITTIMEZONE_HPP
#define _FUNCTIONIMPLICITTIMEZONE_HPP

#include <xqilla/ast/DataItemFunction.hpp>

/** implicit-timezone function*/
class PATHAN_EXPORT FunctionImplicitTimezone : public DataItemFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionImplicitTimezone(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  
  virtual DataItem* staticResolution(StaticContext *context);

  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONIMPLICITTIMEZONE_HPP
