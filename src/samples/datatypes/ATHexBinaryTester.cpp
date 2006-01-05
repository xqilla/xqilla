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

#include "ATHexBinaryTester.hpp"
#include <xercesc/util/XMLString.hpp>
#include <xqilla/utils/XStr.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/ItemFactory.hpp>

#include <xqilla/items/ATHexBinaryOrDerived.hpp>

ATHexBinaryTester::ATHexBinaryTester() : DatatypeTester("ATHexBinaryOrDerived") {
}
  
void ATHexBinaryTester::run(const DynamicContext* context) {
  // test 1 -- equality
  const ATHexBinaryOrDerived::Ptr bin1 = this->createHexBinary(X("A4C4D3FF"), context);
  const ATHexBinaryOrDerived::Ptr bin2 = this->createHexBinary(X("a4c4d3ff"), context);

  assertObjectEquals(bin1, bin1, context);
  assertObjectEquals(bin1, bin2, context);

  assertEquals(bin1->asString(context), X("A4C4D3FF"));
  assertEquals(bin1->asString(context), bin2->asString(context));

  // test 2 -- inequality
  const ATHexBinaryOrDerived::Ptr bin3 = this->createHexBinary(X("a4c4d3fe"), context);
  assertCondition(!bin1->equals(bin3, context));
  assertCondition(!XERCES_CPP_NAMESPACE_QUALIFIER XMLString::equals(bin3->asString(context), X("a4c4d3fgg")));

  // test 3 -- typeURI and typeName
  assertEquals(bin3->getTypeName(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_HEXBINARY);
  assertEquals(bin3->getTypeName(), bin3->getPrimitiveTypeName());
  
  assertEquals(bin3->getTypeURI(), bin3->getPrimitiveTypeURI());
  assertEquals(bin3->getTypeURI(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
}

const ATHexBinaryOrDerived::Ptr ATHexBinaryTester::createHexBinary(const XMLCh* value,
                                   const DynamicContext* context) {
  return context->getItemFactory()->createDerivedFromAtomicType(
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_HEXBINARY,
      value, context);
}


