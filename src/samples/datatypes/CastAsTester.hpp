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

#ifndef _CASTASTESTER_HPP
#define _CASTASTESTER_HPP

#include <xercesc/util/XercesDefs.hpp>
#include "DatatypeTester.hpp"

class DynamicContext;
class XPath2MemoryManager;

#include <xqilla/items/ATAnyURIOrDerived.hpp>
#include <xqilla/items/ATBase64BinaryOrDerived.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/items/ATDateOrDerived.hpp>
#include <xqilla/items/ATDateTimeOrDerived.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/ATDoubleOrDerived.hpp>
#include <xqilla/items/ATDurationOrDerived.hpp>
#include <xqilla/items/ATFloatOrDerived.hpp>
#include <xqilla/items/ATGDayOrDerived.hpp>
#include <xqilla/items/ATGMonthOrDerived.hpp>
#include <xqilla/items/ATGMonthDayOrDerived.hpp>
#include <xqilla/items/ATGYearMonthOrDerived.hpp>
#include <xqilla/items/ATGYearOrDerived.hpp>
#include <xqilla/items/ATHexBinaryOrDerived.hpp>
#include <xqilla/items/ATQNameOrDerived.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/items/ATTimeOrDerived.hpp>
#include <xqilla/items/ATUntypedAtomic.hpp>

/**
 * Tests CastAs for all datatypes
 */
class CastAsTester: public DatatypeTester {
public: 
  CastAsTester(XPath2MemoryManager* memMgr);
   
  // use default
  // virtual void init();

  virtual void run(const DynamicContext* context);
  
  // use default
  // virtual void wrapUp();

protected:
  const ATAnyURIOrDerived::Ptr createURI(const XMLCh* value, const DynamicContext* context);
  const ATBase64BinaryOrDerived::Ptr createBinary(const XMLCh* value, const DynamicContext* context);
  const ATBooleanOrDerived::Ptr createBoolean(const XMLCh* value, const DynamicContext* context);
  const ATGDayOrDerived::Ptr createGDay(const XMLCh* value, const DynamicContext* context);
  const ATDurationOrDerived::Ptr createDuration(const XMLCh* value, const DynamicContext* context);
  const ATHexBinaryOrDerived::Ptr createHexBinary(const XMLCh* value, const DynamicContext* context);
  const ATGMonthDayOrDerived::Ptr createGMonthDay(const XMLCh* value, const DynamicContext* context);
  const ATGMonthOrDerived::Ptr createGMonth(const XMLCh* value, const DynamicContext* context);
  const ATQNameOrDerived::Ptr createQName(const XMLCh* value, const DynamicContext* context);
  const ATStringOrDerived::Ptr createString(const XMLCh* value, const DynamicContext* context);
  const ATGYearMonthOrDerived::Ptr createGYearMonth(const XMLCh* value, const DynamicContext* context);
  const ATGYearOrDerived::Ptr createGYear(const XMLCh* value, const DynamicContext* context);
};


#endif // _CASTASTESTER_HPP
