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

#include "ATGMonthTester.hpp"
#include <xqilla/utils/XStr.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/XQillaFactory.hpp>

#include <xqilla/items/ATGMonthOrDerived.hpp>
#include <xqilla/items/Timezone.hpp>

ATGMonthTester::ATGMonthTester(XPath2MemoryManager* memMgr) : DatatypeTester(memMgr, "ATGMonthOrDerived") {
}

void ATGMonthTester::run(const DynamicContext* context) {
  // test 1 -- equality
  const ATGMonthOrDerived::Ptr gMonth1 = this->createGMonth(X("--12--Z"), context);
  const ATGMonthOrDerived::Ptr gMonth2 = this->createGMonth(X("--12--Z"), context);

  assertObjectEquals(gMonth1, gMonth1, context);
  assertObjectEquals(gMonth1, gMonth2, context);

  assertEquals(gMonth1->asString(context), X("--12--Z"));
  assertEquals(gMonth1->asString(context), gMonth2->asString(context));
  
  // test 2 -- inequality
  const ATGMonthOrDerived::Ptr gMonth3 = this->createGMonth(X("--07--"), context);
  assertCondition(!gMonth1->equals(gMonth3, context));
  assertCondition(((const ATGMonthOrDerived*)gMonth1)->greaterThan(gMonth3, context));
  assertCondition(((const ATGMonthOrDerived*)gMonth3)->lessThan(gMonth1, context));

  // test 3 -- timezones
  assertCondition(((const ATGMonthOrDerived*)gMonth1)->hasTimezone());
  assertCondition(!((const ATGMonthOrDerived*)gMonth3)->hasTimezone());

  const ATGMonthOrDerived::Ptr gMonth4 = ((const ATGMonthOrDerived*)gMonth3)->setTimezone(new Timezone(-8, 0), context);
  assertCondition(((const ATGMonthOrDerived*)gMonth4)->hasTimezone());
  assertEquals(gMonth4->asString(context), X("--07---08:00"));
  
  // test 4 -- typeURI and typeName
  assertEquals(gMonth4->getTypeName(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_MONTH);
  assertEquals(gMonth4->getTypeName(), gMonth4->getPrimitiveTypeName());
  
  assertEquals(gMonth4->getTypeURI(), gMonth4->getPrimitiveTypeURI());
  assertEquals(gMonth4->getTypeURI(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
  
}

const ATGMonthOrDerived::Ptr ATGMonthTester::createGMonth(const XMLCh* value,
                                                   const DynamicContext* context) {
  return context->getXQillaFactory()->createGMonthOrDerived(
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_MONTH,
      value, context);
}
