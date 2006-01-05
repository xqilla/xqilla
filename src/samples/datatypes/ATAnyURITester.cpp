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

#include "ATAnyURITester.hpp"
#include <xqilla/utils/XStr.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/ItemFactory.hpp>

#include <xqilla/items/ATAnyURIOrDerived.hpp>

ATAnyURITester::ATAnyURITester() : DatatypeTester("ATAnyURIOrDerived") {
}

void ATAnyURITester::run(const DynamicContext* context) {
  // test 1 -- equality
  ATAnyURIOrDerived::Ptr uri1 = this->createURI(X("http://www.example.org"), context);
  ATAnyURIOrDerived::Ptr uri2 = this->createURI(X("http://www.example.org"), context);

  assertObjectEquals(uri1, uri1, context);
  assertObjectEquals(uri1, uri2, context);

  assertEquals(uri1->asString(context), X("http://www.example.org"));
  assertEquals(uri1->asString(context), uri2->asString(context));

  // test 2 -- inequality
  ATAnyURIOrDerived::Ptr uri3 = this->createURI(X("http://www.w3.org"), context);
  assertCondition(!uri1->equals(uri3, context));
  
  // test 3 -- typeURI and typeName
  assertEquals(uri3->getTypeName(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_ANYURI);
  assertEquals(uri3->getTypeName(), uri3->getPrimitiveTypeName());
  
  assertEquals(uri3->getTypeURI(), uri3->getPrimitiveTypeURI());
  assertEquals(uri3->getTypeURI(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
}

ATAnyURIOrDerived::Ptr ATAnyURITester::createURI(const XMLCh* value,
                                   const DynamicContext* context) {
  return context->getItemFactory()->createAnyURI(value, context);
}

