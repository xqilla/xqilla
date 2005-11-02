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
 fn:abs($arg as numeric?) as numeric?
*/

#ifndef _FUNCTIONABS_HPP
#define _FUNCTIONABS_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/NumericFunction.hpp>

class PATHAN_EXPORT FunctionAbs : public NumericFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionAbs(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);

  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONABS_HPP

