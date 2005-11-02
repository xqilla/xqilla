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

#ifndef _ATBASE64BINARYTESTER_HPP
#define _ATBASE64BINARYTESTER_HPP

#include <xercesc/util/XercesDefs.hpp>
#include "DatatypeTester.hpp"
#include <xqilla/items/ATBase64BinaryOrDerived.hpp>

class DynamicContext;
class XPath2MemoryManager;

/**
 * Tests ATBase64BinaryOrDerived
 */
class ATBase64BinaryTester: public DatatypeTester {
public: 
  ATBase64BinaryTester(XPath2MemoryManager* memMgr);
   
  // use default
  // virtual void init();

  virtual void run(const DynamicContext* context);
  
  // use default
  // virtual void wrapUp();
private:
  const ATBase64BinaryOrDerived::Ptr createBinary(const XMLCh* value,
                                                  const DynamicContext* context);
};


#endif //_ATBASE64BINARYTESTER_HPP
