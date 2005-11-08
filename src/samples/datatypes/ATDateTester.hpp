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

#ifndef _ATDATETESTER_HPP
#define _ATDATETESTER_HPP

#include <xercesc/util/XMLString.hpp>
#include "DatatypeTester.hpp"
#include <xqilla/items/ATDateOrDerived.hpp>

class DynamicContext;
class XPath2MemoryManager;

/**
 * Tests ATDateOrDerived
 */
class ATDateTester: public DatatypeTester {
public: 
  ATDateTester();
   
  // use default
  // virtual void init();

  virtual void run(const DynamicContext* context);
  
  // use default
  // virtual void wrapUp();
private:
  const ATDateOrDerived::Ptr createDate(const XMLCh* value,
                                     const DynamicContext* context);
};


#endif //_ATDATETESTER_HPP
