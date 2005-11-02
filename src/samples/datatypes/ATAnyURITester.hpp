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

#ifndef _ATANYURITESTER_HPP
#define _ATANYURITESTER_HPP

#include <xercesc/util/XercesDefs.hpp>
#include "DatatypeTester.hpp"
#include <xqilla/items/ATAnyURIOrDerived.hpp>

class DynamicContext;
class XPath2MemoryManager;

/**
 * Tests ATAnyURIOrDerived
 */
class ATAnyURITester: public DatatypeTester {
public: 
  ATAnyURITester(XPath2MemoryManager* memMgr);
   
  // use default
  // virtual void init();

  virtual void run(const DynamicContext* context);
  
  // use default
  // virtual void wrapUp();
private:
  ATAnyURIOrDerived::Ptr createURI(const XMLCh* value,
                                   const DynamicContext* context);
};


#endif //_ATANYURITESTER_HPP
