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
  ATDateTester(XPath2MemoryManager* memMgr);
   
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
