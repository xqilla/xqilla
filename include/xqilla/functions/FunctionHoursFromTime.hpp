/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Oracle. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#ifndef _FUNCTIONGETHOURSFROMTIME_HPP
#define _FUNCTIONGETHOURSFROMTIME_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/XQFunction.hpp>

/**
 * Getter function for hours component of time.
 *
 * xf:hours-from-time(time? $srcval) => integer?
 */
class XQILLA_API FunctionHoursFromTime : public XQFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  /**
   * Constructor
   */
  FunctionHoursFromTime(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);

  ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  /**
   * Returns the integer representing the hours in the value of $srcval
   */
  Sequence createSequence(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONGETHOURSFROMTIME_HPP



