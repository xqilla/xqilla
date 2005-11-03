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

#ifndef _FUNCTIONGETHOURSFROMDAYTIMEDURATION_HPP
#define _FUNCTIONGETHOURSFROMDAYTIMEDURATION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>

/**
 * Getter for the hours component of dayTimeDuration.
 *
 * hours-from-duration(dayTimeDuration? $srcval) => integer?
 */
class XQILLA_API FunctionHoursFromDuration : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  /**
   * Constructor.
   */
  FunctionHoursFromDuration(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);

  /**
   * Returns an integer representing the hours component in the value of
   * $srcval.
   */
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONGETHOURSFROMDAYTIMEDURATION_HPP



