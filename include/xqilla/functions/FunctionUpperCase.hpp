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

#ifndef _FUNCTIONUPPERCASE_HPP
#define _FUNCTIONUPPERCASE_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>

/**
 * Returns the given value after translating every lower-case letter to its
 * upper-case correspondent.
 *
 * xf:upper-case(string? $srcval) =>  string?
 * 
 */
class PATHAN_EXPORT FunctionUpperCase : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  /**
   * Constructor
   */
  FunctionUpperCase(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);

  /**
   * Returns the upper-case string.
   */
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONUPPERCASE_HPP



