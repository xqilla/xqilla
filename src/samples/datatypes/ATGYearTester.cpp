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

#include "ATGYearTester.hpp"
#include <xqilla/utils/XStr.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/XQillaFactory.hpp>

#include <xqilla/items/ATGYearOrDerived.hpp>
#include <xqilla/items/Timezone.hpp>

ATGYearTester::ATGYearTester(XPath2MemoryManager* memMgr) : DatatypeTester(memMgr, "ATGYearOrDerived") {
}

void ATGYearTester::run(const DynamicContext* context) {
  // test 1 -- equality
  const ATGYearOrDerived::Ptr gYear1 = this->createGYear(X("2003Z"), context);
  const ATGYearOrDerived::Ptr gYear2 = this->createGYear(X("2003Z"), context);

  assertObjectEquals(gYear1, gYear1, context);
  assertObjectEquals(gYear1, gYear2, context);

  assertEquals(gYear1->asString(context), X("2003Z"));
  assertEquals(gYear1->asString(context), gYear2->asString(context));
  
  // test 2 -- inequality
  const ATGYearOrDerived::Ptr gYear3 = this->createGYear(X("1999"), context);
  assertCondition(!gYear1->equals(gYear3, context));
  assertCondition(((const ATGYearOrDerived*)gYear1)->greaterThan(gYear3, context));
  assertCondition(((const ATGYearOrDerived*)gYear3)->lessThan(gYear1, context));

  // test 3 -- timezones
  assertCondition(((const ATGYearOrDerived*)gYear1)->hasTimezone());
  assertCondition(!((const ATGYearOrDerived*)gYear3)->hasTimezone());

  const ATGYearOrDerived::Ptr gYear4 = ((const ATGYearOrDerived*)gYear3)->setTimezone(new Timezone(-8, 0), context);
  assertCondition(((const ATGYearOrDerived*)gYear4)->hasTimezone());
  assertEquals(gYear4->asString(context), X("1999-08:00"));
  
  // test 4 -- typeURI and typeName
  assertEquals(gYear4->getTypeName(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_YEAR);
  assertEquals(gYear4->getTypeName(), gYear4->getPrimitiveTypeName());
  
  assertEquals(gYear4->getTypeURI(), gYear4->getPrimitiveTypeURI());
  assertEquals(gYear4->getTypeURI(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
  
}

const ATGYearOrDerived::Ptr ATGYearTester::createGYear(const XMLCh* value,
                                                   const DynamicContext* context) {
  return context->getXQillaFactory()->createGYearOrDerived(
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_YEAR,
      value, context);
}
