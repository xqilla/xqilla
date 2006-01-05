/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2006
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

#include "ATGDayTester.hpp"
#include <xqilla/utils/XStr.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/ItemFactory.hpp>

#include <xqilla/items/ATGDayOrDerived.hpp>
#include <xqilla/items/Timezone.hpp>

ATGDayTester::ATGDayTester() : DatatypeTester("ATGDayOrDerived") {
}

void ATGDayTester::run(const DynamicContext* context) {
  // test 1 -- equality
  const ATGDayOrDerived::Ptr gDay1 = this->createGDay(X("---29Z"), context);
  const ATGDayOrDerived::Ptr gDay2 = this->createGDay(X("---29Z"), context);

  assertObjectEquals(gDay1, gDay1, context);
  assertObjectEquals(gDay1, gDay2, context);

  assertEquals(gDay1->asString(context), X("---29Z"));
  assertEquals(gDay1->asString(context), gDay2->asString(context));
  
  // test 2 -- inequality
  const ATGDayOrDerived::Ptr gDay3 = this->createGDay(X("---20"), context);
  assertCondition(!gDay1->equals(gDay3, context));
  assertCondition(((const ATGDayOrDerived*)gDay1)->greaterThan(gDay3, context));
  assertCondition(((const ATGDayOrDerived*)gDay3)->lessThan(gDay1, context));

  // test 3 -- timezones
  assertCondition(((const ATGDayOrDerived*)gDay1)->hasTimezone());
  assertCondition(!((const ATGDayOrDerived*)gDay3)->hasTimezone());

  const ATGDayOrDerived::Ptr gDay4 = ((const ATGDayOrDerived*)gDay3)->setTimezone(new Timezone(-8, 0), context);
  assertCondition(((const ATGDayOrDerived*)gDay4)->hasTimezone());
  assertEquals(gDay4->asString(context), X("---20-08:00"));
  
  // test 4 -- typeURI and typeName
  assertEquals(gDay4->getTypeName(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DAY);
  assertEquals(gDay4->getTypeName(), gDay4->getPrimitiveTypeName());
  
  assertEquals(gDay4->getTypeURI(), gDay4->getPrimitiveTypeURI());
  assertEquals(gDay4->getTypeURI(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
  
}

const ATGDayOrDerived::Ptr ATGDayTester::createGDay(const XMLCh* value,
                                                   const DynamicContext* context) {
  return context->getItemFactory()->createGDayOrDerived(
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DAY,
      value, context);
}
