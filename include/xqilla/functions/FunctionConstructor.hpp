/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2006
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

/**
 * xs:TYP(item $srcval) => TYP 
**/

#ifndef _FUNCTIONCONSTRUCTOR_HPP
#define _FUNCTIONCONSTRUCTOR_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>
#include <xqilla/functions/FuncFactory.hpp>

#include <xercesc/util/XercesDefs.hpp>


class XQILLA_API FunctionConstructor : public ConstantFoldingFunction
{
public:
  ///Constructor. Sets arg def to NOT_OPTIONAL.
  FunctionConstructor(const XMLCh* nsURI, const XMLCh* typeName,
                      AnyAtomicType::AtomicObjectType primitiveType,
                      const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  virtual Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

  static const XMLCh XMLChConstructorURI[];
  static const XMLCh XMLChXPath2DatatypesURI[];
};

#endif // _FUNCTIONCONSTRUCTOR_HPP
