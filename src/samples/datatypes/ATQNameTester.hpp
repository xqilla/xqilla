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
  ATQNameTester(XPath2MemoryManager* memMgr);
   
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
