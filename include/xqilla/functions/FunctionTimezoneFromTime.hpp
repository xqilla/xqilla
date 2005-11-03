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

#ifndef _FUNCTIONGETTIMEZONEFROMTIME_HPP
#define _FUNCTIONGETTIMEZONEFROMTIME_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>

/**
 * Getter function for timezone component of time.
 *
 * xf:timezone-from-time(time? $srcval) => xdt:dayTimeDuration?
 */
class PATHAN_EXPORT FunctionTimezoneFromTime : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  /**
   * Constructor
   */
  FunctionTimezoneFromTime(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);

  /**
   * Returns the string representing the timezone in the value of $srcval
   */
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONGETTIMEZONEFROMTIME_HPP



