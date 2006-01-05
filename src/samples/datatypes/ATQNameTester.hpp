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

#ifndef _ATQNAMETESTER_HPP
#define _ATQNAMETESTER_HPP

#include "DatatypeTester.hpp"
#include <xercesc/util/XercesDefs.hpp>
#include <xqilla/items/ATQNameOrDerived.hpp>

class DynamicContext;
class XPath2MemoryManager;

/**
 * Tests ATQNameOrDerived
 */
class ATQNameTester: public DatatypeTester {
public: 
  ATQNameTester();
   
  // use default
  // virtual void init();

  virtual void run(const DynamicContext* context);
  
  // use default
  // virtual void wrapUp();
private:
  const ATQNameOrDerived::Ptr createQName(const XMLCh* value, const DynamicContext* context);
  const ATQNameOrDerived::Ptr createQName(const XMLCh* uri, const XMLCh* prefix, const XMLCh* name, const DynamicContext* context);
};

#endif //_ATQNAMETESTER_HPP
