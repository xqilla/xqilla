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

#ifndef _FUNCTIONGETYEARSFROMYEARMONTHDURATION_HPP
#define _FUNCTIONGETYEARSFROMYEARMONTHDURATION_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>

/**
 * Getter function for the years component of yearMonthDuration
 *
 *  years-from-duration(yearMonthDuration? $srcval) => integer?
 */
class PATHAN_EXPORT FunctionYearsFromDuration : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  /**
   * Constructor.
   */
  FunctionYearsFromDuration(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);

  /**
   * Returns an integer representing the years component in the value of 
   * $srcval
   */
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONGETYEARSFROMYEARMONTHDURATION_HPP



