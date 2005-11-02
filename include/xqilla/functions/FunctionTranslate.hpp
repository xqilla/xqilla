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

#ifndef _FUNCTIONTRANSLATE_HPP
#define _FUNCTIONTRANSLATE_HPP

#include <xqilla/ast/ConstantFoldingFunction.hpp>

/** Translate function. */
class PATHAN_EXPORT FunctionTranslate : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionTranslate(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  
  /** XPath function. returns string1 with each character in string2 replaced with the corresponding character in string3 **/
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

};

#endif // _FUNCTIONTRANSLATE_HPP



