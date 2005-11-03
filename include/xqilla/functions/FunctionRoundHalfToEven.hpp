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
  xf:round(numeric? $srcval) => numeric?
*/

#ifndef _FUNCTIONROUNDHALFTOEVEN_HPP
#define _FUNCTIONROUNDHALFTOEVEN_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/NumericFunction.hpp>

class XQILLA_API FunctionRoundHalfToEven : public NumericFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionRoundHalfToEven(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);

  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

};

#endif // _FUNCTIONROUNDHALFTOEVEN_HPP

