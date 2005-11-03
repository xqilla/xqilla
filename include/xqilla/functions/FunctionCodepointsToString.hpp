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
  codepoints-to-string function
*/

#ifndef _FUNCTIONCODEPOINTSTOSTRING_HPP
#define _FUNCTIONCODEPOINTSTOSTRING_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>

/** codepoints-to-string function */
class XQILLA_API FunctionCodepointsToString : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  ///Constructor.
  FunctionCodepointsToString(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
protected:
  /** takes a series of integers (codepoints) and turns them into a unicode string */
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};
#endif // _FUNCTIONCODEPOINTSTOSTRING_HPP

