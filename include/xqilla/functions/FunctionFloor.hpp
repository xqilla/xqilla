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

/*
  xf:floor(numeric? $srcval) => numeric?
*/

#ifndef _FUNCTIONFLOOR_HPP
#define _FUNCTIONFLOOR_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/NumericFunction.hpp>

class XQILLA_API FunctionFloor : public NumericFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionFloor(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);

  Sequence createSequence(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONFLOOR_HPP

