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

  Distinct-values function
  
*/

#ifndef _FUNCTIONDISTINCTVALUES_HPP
#define _FUNCTIONDISTINCTVALUES_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/XQFunction.hpp>

// Distinct values is not really an aggregate function, but since its behaviour is so
// similar (in terms of sequence validation) we will extend from it.
class XQILLA_API FunctionDistinctValues : public XQFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionDistinctValues(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  virtual ASTNode* staticResolution(StaticContext *context);
	virtual Result createResult(DynamicContext* context, int flags=0) const;

private:  
  class DistinctValueResult : public ResultImpl
  {
  public:
    DistinctValueResult(const FunctionDistinctValues *fdv, DynamicContext *context);
    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;
  private:
    const FunctionDistinctValues *fdv_;
    Result parent_;
    Collation *collation_;
    bool toDo_;

    bool seenNan_;
    Sequence alreadySeen_;
  };

};

#endif // _FUNCTIONDISTINCTVALUES_HPP
