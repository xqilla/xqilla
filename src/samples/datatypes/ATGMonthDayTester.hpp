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

#ifndef _ATGMONTHDAYTESTER_HPP
#define _ATGMONTHDAYTESTER_HPP

#include <xercesc/util/XercesDefs.hpp>
#include "DatatypeTester.hpp"
#include <xqilla/items/ATGMonthDayOrDerived.hpp>

class DynamicContext;
class XPath2MemoryManager;

/**
 * Tests ATGMonthDayOrDerived
 */
class ATGMonthDayTester: public DatatypeTester {
public: 
  ATGMonthDayTester(XPath2MemoryManager* memMgr);
   
  // use default
  // virtual void init();

  virtual void run(const DynamicContext* context);
  
  // use default
  // virtual void wrapUp();
private:
  const ATGMonthDayOrDerived::Ptr createGMonthDay(const XMLCh* value,
                                    const DynamicContext* context);
};

#endif //_ATGMONTHDAYTESTER_HPP
