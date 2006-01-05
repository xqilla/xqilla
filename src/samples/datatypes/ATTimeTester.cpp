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

#include "ATTimeTester.hpp"
#include <xqilla/utils/XStr.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/ItemFactory.hpp>

#include <xqilla/items/ATTimeOrDerived.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/ATDurationOrDerived.hpp>
#include <xqilla/items/Timezone.hpp>

ATTimeTester::ATTimeTester() : DatatypeTester("ATTimeOrDerived") {
}

void ATTimeTester::run(const DynamicContext* context) {
  // test 1 -- equality
  const ATTimeOrDerived::Ptr time1 = this->createTime(X("13:20:10.0564+14:00"), context);
  const ATTimeOrDerived::Ptr time2 = this->createTime(X("11:20:10.0564+12:00"), context);
  const ATTimeOrDerived::Ptr time3 = this->createTime(X("16:00:00+01:00"), context);
  const ATTimeOrDerived::Ptr time4 = this->createTime(X("04:20:00"), context);
  const ATTimeOrDerived::Ptr time_wrap = this->createTime(X("04:20:00+06:30"), context);

  assertObjectEquals(time1, time1, context);
  assertObjectEquals(time1, time2, context);
  assertObjectEquals(time4, time4, context);

  assertEquals(time1->asString(context), X("23:20:10.0564Z"));
  assertEquals(time1->asString(context), time2->asString(context));
  assertEquals(time_wrap->asString(context), X("21:50:00Z"));

  // test 2 -- inequality
  assertCondition(!time1->equals(time3, context));
  assertCondition(((const ATTimeOrDerived*)time3)->lessThan(time1, context));
  assertCondition(((const ATTimeOrDerived*)time1)->greaterThan(time3, context));
  
  // test 3 -- component extraction
  assertObjectEquals(((const ATTimeOrDerived*)time1)->getHours(), context->getItemFactory()->createInteger(13, context), context);
  assertObjectEquals(((const ATTimeOrDerived*)time1)->getMinutes(), context->getItemFactory()->createInteger(20, context), context);
  assertObjectEquals(((const ATTimeOrDerived*)time1)->getSeconds(), context->getItemFactory()->createDecimal(10.0564, context), context);
  assertCondition(((const ATTimeOrDerived*)time1)->hasTimezone());
  assertCondition(((const ATTimeOrDerived*)time1)->getTimezone()->equals(new Timezone(14, 0)));

  // test 4 -- adding and subtracting durations/dates
  const ATDurationOrDerived::Ptr duration1 = context->getItemFactory()->createDayTimeDuration(X("P3DT10H"), context);
  const ATTimeOrDerived::Ptr result1 = ((const ATTimeOrDerived*)time1)->addDayTimeDuration(duration1, context);
  assertEquals(result1->asString(context), X("09:20:10.0564Z"));
  const ATTimeOrDerived::Ptr result2 = ((const ATTimeOrDerived*)result1)->subtractDayTimeDuration(duration1, context);
  assertObjectEquals(time1, result2, context);
  const ATDurationOrDerived::Ptr result5 = ((const ATTimeOrDerived*)time1)->subtractTime(time3, context);
  const ATDurationOrDerived::Ptr difference = context->getItemFactory()->createDayTimeDuration(X("PT8H20M10.0564S"), context);
  assertObjectEquals(result5, difference, context);
  // test 5 -- timezones
  assertCondition(!((const ATTimeOrDerived*)time4)->hasTimezone());

  const ATTimeOrDerived::Ptr time5 = ((const ATTimeOrDerived*)time4)->addTimezone(context->getItemFactory()->createDayTimeDuration(X("-PT5H"), context) ,context);
  assertCondition(((const ATTimeOrDerived*)time5)->hasTimezone());
  assertCondition(((const ATTimeOrDerived*)time5)->getTimezone()->equals(new Timezone(-5, 0)));

  const ATTimeOrDerived::Ptr time6 = ((const ATTimeOrDerived*)time5)->setTimezone(new Timezone(-8, 0), context);
  assertCondition(((const ATTimeOrDerived*)time6)->getTimezone()->equals(new Timezone(-8, 0)));

//   const ATTimeOrDerived::Ptr time7 = ((const ATTimeOrDerived*)time6)->normalize(context);
//   const ATTimeOrDerived::Ptr time8 = this->createTime(X("12:20:00Z"), context);
//   assertObjectEquals(time7, time8, context);

  // test 6 -- typeURI and typeName
  assertEquals(time3->getTypeName(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_TIME);
  assertEquals(time3->getTypeName(), time3->getPrimitiveTypeName());
  
  assertEquals(time3->getTypeURI(), time3->getPrimitiveTypeURI());
  assertEquals(time3->getTypeURI(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
}

const ATTimeOrDerived::Ptr ATTimeTester::createTime(const XMLCh* value,
                                                const DynamicContext* context) {
  return context->getItemFactory()->createTimeOrDerived(
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_TIME,
      value, context);
}

