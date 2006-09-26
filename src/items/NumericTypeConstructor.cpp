/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#include <sstream>
#include <assert.h>

#include "../config/xqilla_config.h"
#include <xqilla/items/NumericTypeConstructor.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/utils/UTF8Str.hpp>
#include <xqilla/exceptions/TypeNotFoundException.hpp>
#include "../exceptions/InvalidLexicalSpaceException.hpp"

NumericTypeConstructor::NumericTypeConstructor(const XMLCh* typeURI,
                                               const XMLCh* typeName,
                                               const MAPM& value,
                                               AnyAtomicType::AtomicObjectType primitiveType)
  : _typeURI(typeURI),
    _typeName(typeName),
    _value(value),
    _primitiveType(primitiveType)
{
  _sType.flags = StaticType::getFlagsFor(primitiveType);
}

Item::Ptr NumericTypeConstructor::createItem(const DynamicContext* context) const
{
  Numeric::Ptr retVal;
  if(_primitiveType==AnyAtomicType::DECIMAL)
    retVal=context->getItemFactory()->createDecimalOrDerived(_typeURI, _typeName, _value, context);
  else if(_primitiveType==AnyAtomicType::FLOAT)
    retVal=context->getItemFactory()->createFloatOrDerived(_typeURI, _typeName, _value, context);
  else if(_primitiveType==AnyAtomicType::DOUBLE)
    retVal=context->getItemFactory()->createDoubleOrDerived(_typeURI, _typeName, _value, context);
  else
    assert(false);
  // check if it's a valid instance
  XERCES_CPP_NAMESPACE_QUALIFIER DatatypeValidator* validator=context->getDocumentCache()->getDatatypeValidator(_typeURI, _typeName);
  if(!validator) {
    XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buf(1023, context->getMemoryManager());
    buf.append(X("Type "));
    buf.append(_typeURI);
    buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chColon);
    buf.append(_typeName);
    buf.append(X(" not found"));
    XQThrow2(TypeNotFoundException, X("NumericTypeConstructor::createItem"), buf.getRawBuffer());
  }
  try {
    const XMLCh* valueToValidate=retVal->asString(context);
    validator->validate(valueToValidate, 0, context->getMemoryManager());
  } catch (XERCES_CPP_NAMESPACE_QUALIFIER XMLException &e) {
    XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buf(1023, context->getMemoryManager());
    buf.append(e.getMessage());
    buf.append(X(" [err:FORG0001]"));
    XQThrow2(InvalidLexicalSpaceException, X("NumericTypeConstructor::createItem"), buf.getRawBuffer());
  }
  return retVal;
}

std::string NumericTypeConstructor::asString(const DynamicContext* context) const
{
  std::ostringstream s;

  s << "<NumericTypeConstructor";
  char obuf[1024];
  _value.toString(obuf, _value.significant_digits());
  s << " value=\"" << obuf;
  s << "\" typeuri=\"" << UTF8(_typeURI);
  s << "\" typename=\"" << UTF8(_typeName);
  s << "\"/>";

  return s.str();
}
