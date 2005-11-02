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

#ifndef _ATGMONTHTESTER_HPP
#define _ATGMONTHTESTER_HPP

#include <xercesc/util/XercesDefs.hpp>
#include "DatatypeTester.hpp"
#include <xqilla/items/ATGMonthOrDerived.hpp>

class DynamicContext;
class XPath2MemoryManager;

/**
 * Tests ATGMonthOrDerived
 */
class ATGMonthTester: public DatatypeTester {
public: 
  ATGMonthTester(XPath2MemoryManager* memMgr);
   
  // use default
  // virtual void init();

  virtual void run(const DynamicContext* context);
  
  // use default
  // virtual void wrapUp();
private:
  const ATGMonthOrDerived::Ptr createGMonth(const XMLCh* value,
                                    const DynamicContext* context);
};

#endif //_ATGMONTHTESTER_HPP
