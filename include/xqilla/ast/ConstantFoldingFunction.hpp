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

#ifndef _CONSTANTFOLDINGFUNCTION_HPP
#define _CONSTANTFOLDINGFUNCTION_HPP

#include <xqilla/framework/Pathan.hpp>
#include <xqilla/ast/DataItemFunction.hpp>
#include <xqilla/runtime/Sequence.hpp>

class PATHAN_EXPORT ConstantFoldingFunction : public DataItemFunction
{

public:
  ConstantFoldingFunction(const XMLCh* name, unsigned int argsFrom, unsigned int argsTo, const char* paramDecl, const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  virtual ~ConstantFoldingFunction();

  /**
   * Called during static analysis to determine if statically correct.
   * Performs constant folding if the arguments to the function are
   * all constant.
   */
  virtual DataItem* staticResolution(StaticContext *context);
};

#endif
