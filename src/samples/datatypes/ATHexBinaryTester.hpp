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

#ifndef _ATHEXBINARYTESTER_HPP
#define _ATHEXBINARYTESTER_HPP

#include <xercesc/util/XercesDefs.hpp>
#include "DatatypeTester.hpp"
#include <xqilla/items/ATHexBinaryOrDerived.hpp>

class DynamicContext;
class XPath2MemoryManager;

/**
 * Tests ATHexBinaryOrDerived
 */
class ATHexBinaryTester: public DatatypeTester {
public: 
  ATHexBinaryTester(XPath2MemoryManager* memMgr);
   
  // use default
  // virtual void init();

  virtual void run(const DynamicContext* context);
  
  // use default
  // virtual void wrapUp();
private:
  const ATHexBinaryOrDerived::Ptr createHexBinary(const XMLCh* value,
                                     const DynamicContext* context);
};

#endif //_ATHEXBINARYTESTER_HPP
