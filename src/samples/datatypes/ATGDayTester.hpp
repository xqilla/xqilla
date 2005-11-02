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

#ifndef _ATGDAYTESTER_HPP
#define _ATGDAYTESTER_HPP

#include <xercesc/util/XercesDefs.hpp>
#include "DatatypeTester.hpp"
#include <xqilla/items/ATGDayOrDerived.hpp>

class DynamicContext;
class XPath2MemoryManager;

/**
 * Tests ATGDayOrDerived
 */
class ATGDayTester: public DatatypeTester {
public: 
  ATGDayTester(XPath2MemoryManager* memMgr);
   
  // use default
  // virtual void init();

  virtual void run(const DynamicContext* context);
  
  // use default
  // virtual void wrapUp();
private:
  const ATGDayOrDerived::Ptr createGDay(const XMLCh* value,
                                    const DynamicContext* context);
};

#endif //_ATGDAYTESTER_HPP
