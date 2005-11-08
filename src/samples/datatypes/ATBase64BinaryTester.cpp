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

#include "ATBase64BinaryTester.hpp"
#include <xqilla/utils/XStr.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/ItemFactory.hpp>

#include <xqilla/items/ATBase64BinaryOrDerived.hpp>

ATBase64BinaryTester::ATBase64BinaryTester() : DatatypeTester("ATBase64BinaryOrDerived") {
}
  
void ATBase64BinaryTester::run(const DynamicContext* context) {
  // test 1 -- equality
  const ATBase64BinaryOrDerived::Ptr bin1 = this->createBinary(X("01101100"), context);
  const ATBase64BinaryOrDerived::Ptr bin2 = this->createBinary(X("01101100"), context);

  assertObjectEquals(bin1, bin1, context);
  assertObjectEquals(bin1, bin2, context);

  assertEquals(bin1->asString(context), X("01101100"));
  assertEquals(bin1->asString(context), bin2->asString(context));

  // test 2 -- inequality
  const ATBase64BinaryOrDerived::Ptr bin3 = this->createBinary(X("0110110010010011"), context);
  assertCondition(!bin1->equals(bin3, context));

  // test 3 -- typeURI and typeName
  assertEquals(bin3->getTypeName(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_BASE64BINARY);
  assertEquals(bin3->getTypeName(), bin3->getPrimitiveTypeName());
  
  assertEquals(bin3->getTypeURI(), bin3->getPrimitiveTypeURI());
  assertEquals(bin3->getTypeURI(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
  
}

const ATBase64BinaryOrDerived::Ptr ATBase64BinaryTester::createBinary(const XMLCh* value,
                                   const DynamicContext* context) {
  return context->getItemFactory()->createDerivedFromAtomicType(
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_BASE64BINARY,
      value, context);
}


