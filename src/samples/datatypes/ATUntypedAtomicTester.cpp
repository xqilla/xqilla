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

#include "ATUntypedAtomicTester.hpp"
#include <xqilla/utils/XStr.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/IllegalArgumentException.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>
#include <xqilla/items/DatatypeFactory.hpp>

#include <xqilla/items/ATUntypedAtomic.hpp>

ATUntypedAtomicTester::ATUntypedAtomicTester(XPath2MemoryManager* memMgr) : DatatypeTester(memMgr, "ATUntypedAtomic") {
}

void ATUntypedAtomicTester::run(const DynamicContext* context) {
  // test 1 -- equality
  const ATUntypedAtomic::Ptr untyped1 = context->getItemFactory()->createUntypedAtomic(X("DSL"), context);
  const ATUntypedAtomic::Ptr untyped2 = context->getItemFactory()->createUntypedAtomic(X("DSL"), context);

  assertObjectEquals(untyped1, untyped1, context);  
  assertObjectEquals(untyped1, untyped2, context);

  assertEquals(untyped1->asString(context), X("DSL")); 
  assertEquals(untyped1->asString(context), untyped2->asString(context));

  // test 2 -- inequality
  const ATUntypedAtomic::Ptr untyped3 = context->getItemFactory()->createUntypedAtomic(X("Mr. Bungle"), context);
  assertCondition(!untyped1->equals(untyped3, context));

  // test 3 -- typeURI and typeName
  assertEquals(untyped3->getTypeName(), ATUntypedAtomic::fgDT_UNTYPEDATOMIC);
  assertEquals(untyped3->getTypeName(), untyped3->getPrimitiveTypeName());
  
  assertEquals(untyped3->getTypeURI(), untyped3->getPrimitiveTypeURI());
  assertEquals(untyped3->getTypeURI(), FunctionConstructor::XMLChXPath2DatatypesURI);
}
