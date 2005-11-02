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

#ifndef _ATGYEARTESTER_HPP
#define _ATGYEARTESTER_HPP

#include <xercesc/util/XercesDefs.hpp>
#include "DatatypeTester.hpp"
#include <xqilla/items/ATGYearOrDerived.hpp>

class DynamicContext;
class XPath2MemoryManager;

/**
 * Tests ATGYearOrDerived
 */
class ATGYearTester: public DatatypeTester {
public: 
  ATGYearTester(XPath2MemoryManager* memMgr);
   
  // use default
  // virtual void init();

  virtual void run(const DynamicContext* context);
  
  // use default
  // virtual void wrapUp();
private:
  const ATGYearOrDerived::Ptr createGYear(const XMLCh* value,
                                    const DynamicContext* context);
};

#endif //_ATGYEARTESTER_HPP
