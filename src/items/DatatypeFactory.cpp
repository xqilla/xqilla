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

#include "../config/pathan_config.h"
#include <assert.h>

#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/impl/NodeImpl.hpp>
#include "../exceptions/InvalidLexicalSpaceException.hpp"
#include <xqilla/items/ATDurationOrDerived.hpp>
#include <xqilla/items/ATUntypedAtomic.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/exceptions/TypeNotFoundException.hpp>

#include <xercesc/util/XMLString.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>

DatatypeFactory::DatatypeFactory(const DocumentCache* dc, XERCES_CPP_NAMESPACE_QUALIFIER DatatypeValidator *baseValidator)
  : fBaseValidator(baseValidator),
    fDocumentCache(dc)
{
}

DatatypeFactory::~DatatypeFactory()
{
}

AnyAtomicType::Ptr DatatypeFactory::createInstance(const XMLCh* value,
                                                   const DynamicContext* context) const
{
  try {
    fBaseValidator->validate(value, 0, context->getMemoryManager());
  } catch (XERCES_CPP_NAMESPACE_QUALIFIER XMLException &e) {
    DSLthrow(InvalidLexicalSpaceException, X("DatatypeFactory::createInstance"), e.getMessage());
  }

  return createInstanceNoCheck(getPrimitiveTypeURI(), getPrimitiveTypeName(), value, context);
}

AnyAtomicType::Ptr DatatypeFactory::createInstance(const XMLCh* typeURI,
                                                   const XMLCh* typeName,
                                                   const XMLCh* value,
                                                   const DynamicContext* context) const
{
  XERCES_CPP_NAMESPACE_QUALIFIER DatatypeValidator* validator =
    const_cast<XERCES_CPP_NAMESPACE_QUALIFIER DatatypeValidator*>(fDocumentCache->getDatatypeValidator(typeURI, typeName));

  if(!validator) {
    XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buf(1023, context->getMemoryManager());
    buf.append(X("Type "));
    buf.append(typeURI);
    buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chColon);
    buf.append(typeName);
    buf.append(X(" not found"));
    DSLthrow(TypeNotFoundException, X("DatatypeFactoryTemplate::createInstance"), buf.getRawBuffer());
  }

  try {
    validator->validate(value, 0, context->getMemoryManager());
  } catch (XERCES_CPP_NAMESPACE_QUALIFIER XMLException &e) {
    DSLthrow(InvalidLexicalSpaceException, X("DatatypeFactory::createInstance"), e.getMessage());
  }

  return createInstanceNoCheck(typeURI, typeName, value, context);
}

bool DatatypeFactory::checkInstance(const XMLCh* value,
                                    const StaticContext* context) const {      
  try {
    fBaseValidator->validate(value, 0, context->getMemoryManager());
  } catch (XERCES_CPP_NAMESPACE_QUALIFIER XMLException &e) {
    return false;
  }

  return true;
}

bool DatatypeFactory::checkInstance(const XMLCh* typeURI,
                                    const XMLCh* typeName,
                                    const XMLCh* value,
                                    const StaticContext* context) const {
      
  XERCES_CPP_NAMESPACE_QUALIFIER DatatypeValidator* validator =
    const_cast<XERCES_CPP_NAMESPACE_QUALIFIER DatatypeValidator*>(fDocumentCache->getDatatypeValidator(typeURI, typeName));

  if(!validator) {
    XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buf(1023, context->getMemoryManager());
    buf.append(X("Type "));
    buf.append(typeURI);
    buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chColon);
    buf.append(typeName);
    buf.append(X(" not found"));
    DSLthrow(TypeNotFoundException, X("DatatypeFactoryTemplate::createInstance"), buf.getRawBuffer());
  }

  try {
    validator->validate(value, 0, context->getMemoryManager());
  } catch (XERCES_CPP_NAMESPACE_QUALIFIER XMLException &e) {
    return false;
  }

  return true;
}
