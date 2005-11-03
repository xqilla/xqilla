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

#ifndef _FUNCTIONGETMONTHFROMDATETIME_HPP
#define _FUNCTIONGETMONTHFROMDATETIME_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/XQFunction.hpp>

/**
 * Getter function for the month component of dateTime.
 *
 * month-from-dateTime(dateTime $srcval) => integer
 */
class PATHAN_EXPORT FunctionMonthFromDateTime : public XQFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  /**
   * Constructor.
   */
  FunctionMonthFromDateTime(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);

  ASTNode* staticResolution(StaticContext *context);

  /**
   * Returns an integer representing the month component in the value of 
   * $srcval
   */
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONGETMONTHFROMDATETIME_HPP



