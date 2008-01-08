/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
 *     Oracle. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * $Id$
 */

/*

  Number function

*/

#ifndef _FUNCTIONNUMBER_HPP
#define _FUNCTIONNUMBER_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/XQFunction.hpp>

class AnyAtomicType;

/** Number operator function, and exists functions. */
class XQILLA_API FunctionNumber : public XQFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionNumber(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  /**
   * Called during static analysis to determine if statically correct.
   * Performs constant folding if the function has an argument, and it
   * is constant.
   */
  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  /** Returns the argument as a number **/
  Sequence createSequence(DynamicContext* context, int flags=0) const;

  static Item::Ptr number(const AnyAtomicType::Ptr &item, DynamicContext *context);
};

#endif // _FUNCTIONNUMBER_HPP
