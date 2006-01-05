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

#include "ATQNameTester.hpp"

#include <xqilla/utils/XStr.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/ItemFactory.hpp>

#include <xqilla/items/ATQNameOrDerived.hpp>

ATQNameTester::ATQNameTester() : DatatypeTester("ATQNameOrDerived") {
}

void ATQNameTester::run(const DynamicContext* context) {
  // test 1 -- equality
  const ATQNameOrDerived::Ptr qName1 = this->createQName(X("xs:foo"), context);
  const ATQNameOrDerived::Ptr qName2 = this->createQName(X("http://www.w3.org/2001/XMLSchema"), X("xs"), X("foo"), context);

  assertObjectEquals(qName1, qName1, context);
  assertObjectEquals(qName1, qName2, context);

  assertEquals(qName1->asString(context), X("http://www.w3.org/2001/XMLSchema:foo"));
  assertEquals(qName1->asString(context), qName2->asString(context));
  
  assertEquals(((const ATQNameOrDerived*)(const AnyAtomicType*)qName1)->getURI(), X("http://www.w3.org/2001/XMLSchema"));
  assertEquals(((const ATQNameOrDerived*)(const AnyAtomicType*)qName1)->getName(), X("foo"));

  // test 2 -- inequality
  const ATQNameOrDerived::Ptr qName3 = this->createQName(X("xs:bar"), context);
  assertCondition(!qName1->equals(qName3, context));

  // test 3 -- typeURI and typeName
  assertEquals(qName3->getTypeName(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_QNAME);
  assertEquals(qName3->getTypeName(), qName3->getPrimitiveTypeName());
  
  assertEquals(qName3->getTypeURI(), qName3->getPrimitiveTypeURI());
  assertEquals(qName3->getTypeURI(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
  
}

const ATQNameOrDerived::Ptr ATQNameTester::createQName(const XMLCh* value,
                                                   const DynamicContext* context) {
  return context->getItemFactory()->createDerivedFromAtomicType(
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_QNAME,
      value, context);
}

const ATQNameOrDerived::Ptr ATQNameTester::createQName(const XMLCh* uri,
                                                       const XMLCh* prefix,
                                                   const XMLCh* name,
                                                   const DynamicContext* context) {
  return context->getItemFactory()->createQNameOrDerived(
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_QNAME,
      uri, prefix, name, context);
}
