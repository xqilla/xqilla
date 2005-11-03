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

#include "ATStringTester.hpp"
#include <xqilla/utils/XStr.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/ItemFactory.hpp>

#include <xqilla/items/ATStringOrDerived.hpp>

ATStringTester::ATStringTester(XPath2MemoryManager* memMgr) : DatatypeTester(memMgr, "ATStringOrDerived") {
}
  
#include <iostream>
void ATStringTester::run(const DynamicContext* context) {
  // test 1 -- equality
  const ATStringOrDerived::Ptr str1 = this->createString(X("Hello World!"), context);
  const ATStringOrDerived::Ptr str2 = this->createString(X("Hello World!"), context);

  assertObjectEquals(str1, str1, context);
  assertObjectEquals(str1, str2, context);

  assertEquals(str1->asString(context), X("Hello World!"));
  assertEquals(str1->asString(context), str2->asString(context));
  
  assertCondition(((const ATStringOrDerived*)str1)->getLength() == ((const ATStringOrDerived*)str2)->getLength());

  // test 2 -- inequality
  const ATStringOrDerived::Ptr str3 = this->createString(X("Goodbye World."), context);
  assertCondition(!str1->equals(str3, context));
  assertCondition(((const ATStringOrDerived*)str1)->getLength() != ((const ATStringOrDerived*)str3)->getLength());
           
  // test 3 -- codepoints
  //REVISIT: should add tests once Sequences accept ATDecimalOrDeriveds
  
  // test 4 -- typeURI and typeName
  assertEquals(str3->getTypeName(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING);
  assertEquals(str3->getTypeName(), str3->getPrimitiveTypeName());
  
  assertEquals(str3->getTypeURI(), str3->getPrimitiveTypeURI());
  assertEquals(str3->getTypeURI(), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
  
}

const ATStringOrDerived::Ptr ATStringTester::createString(const XMLCh* value,
                                   const DynamicContext* context) {
  return context->getItemFactory()->createStringOrDerived(
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
      value, context);
}
