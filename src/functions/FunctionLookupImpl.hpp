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

#ifndef _FLOOKUPIMPL_HPP
#define _FLOOKUPIMPL_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/functions/FunctionLookup.hpp>
#include <xercesc/util/RefHash2KeysTableOf.hpp>
#include <xercesc/util/StringPool.hpp>

/** class implementing a lookup table for functions */
class XQILLA_API FunctionLookupImpl : public FunctionLookup
{
public:
  FunctionLookupImpl(XPath2MemoryManager* memMgr);
  virtual ~FunctionLookupImpl();

  ///insert a new function factory
  virtual void insertFunction(FuncFactory *func);

  ///returns the approriate Function object
  virtual ASTNode* lookUpFunction(const XMLCh* URI, const XMLCh* fname, const VectorOfASTNodes &args, XPath2MemoryManager* memMgr) const;

  /// returns all the defined functions
  virtual std::vector< std::pair<const XMLCh*,const XMLCh*> > getFunctions() const;
  virtual std::vector< FuncFactory* > getFunctionFactories() const;

protected:
  ///function to create the table
  void createTable();

private:
  XERCES_CPP_NAMESPACE_QUALIFIER XMLStringPool _uriPool;
  XERCES_CPP_NAMESPACE_QUALIFIER RefHash2KeysTableOf< FuncFactory > _funcTable;
  XPath2MemoryManager* _memMgr;
};




#endif 
