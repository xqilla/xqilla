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

   Op Intersect 
The intersect operator takes two node sequences as operands and returns a sequence containing all the nodes that occur in both operands.
*/

#ifndef _INTERSECT_HPP
#define _INTERSECT_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/XQOperator.hpp>

class XQILLA_API Intersect : public XQOperator
{
public:
  static const XMLCh name[];

  Intersect(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  /** exectutes the operator*/
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif 
