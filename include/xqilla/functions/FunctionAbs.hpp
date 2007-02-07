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
 fn:abs($arg as numeric?) as numeric?
*/

#ifndef _FUNCTIONABS_HPP
#define _FUNCTIONABS_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/NumericFunction.hpp>

class XQILLA_API FunctionAbs : public NumericFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionAbs(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);

  Sequence createSequence(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONABS_HPP

