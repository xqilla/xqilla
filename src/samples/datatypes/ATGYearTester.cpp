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
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * $Id$
 */

#include "ATGYearTester.hpp"
#include <xqilla/utils/XStr.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/ItemFactory.hpp>

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
  return context->getItemFactory()->createGYearOrDerived(
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_YEAR,
      value, context);
}
