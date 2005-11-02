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

#ifndef _ATBOOLEANTESTER_HPP
#define _ATBOOLEANTESTER_HPP

#include <xercesc/util/XercesDefs.hpp>
#include "DatatypeTester.hpp"
#include <xqilla/items/ATBooleanOrDerived.hpp>

class DynamicContext;
class XPath2MemoryManager;

/**
 * Tests ATBooleanOrDerived
 */
class ATBooleanTester: public DatatypeTester {
public: 
  ATBooleanTester(XPath2MemoryManager* memMgr);
   
  // use default
  // virtual void init();

  virtual void run(const DynamicContext* context);
  
  // use default
  // virtual void wrapUp();
private:
  const ATBooleanOrDerived::Ptr createBoolean(const XMLCh* value,
                                          const DynamicContext* context);
  const ATBooleanOrDerived::Ptr createBoolean(bool value, const DynamicContext* context);
};


#endif //_ATBOOLEANTESTER_HPP
