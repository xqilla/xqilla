/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
 *     Oracle. All rights reserved.
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

#include <sstream>
#include <assert.h>

#include "../config/xqilla_config.h"
#include <xqilla/items/NumericTypeConstructor.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/utils/UTF8Str.hpp>
#include <xqilla/utils/XStr.hpp>
#include <xqilla/exceptions/TypeNotFoundException.hpp>
#include <xqilla/events/EventHandler.hpp>
#include <xqilla/items/impl/ATDecimalOrDerivedImpl.hpp>
#include <xqilla/items/impl/ATDoubleOrDerivedImpl.hpp>
#include <xqilla/items/impl/ATFloatOrDerivedImpl.hpp>
#include "../exceptions/InvalidLexicalSpaceException.hpp"

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

NumericTypeConstructor::NumericTypeConstructor(const XMLCh* typeURI,
                                               const XMLCh* typeName,
                                               const MAPM& value,
                                               AnyAtomicType::AtomicObjectType primitiveType,
                                               MemoryManager *mm)
  : _typeURI(typeURI),
    _typeName(typeName),
    _primitiveType(primitiveType)
{
  _sType.flags = StaticType::getFlagsFor(_primitiveType);

  memset(&_value, 0, sizeof(_value));

  const M_APM cval = value.c_struct();

  _value.m_apm_datalength = cval->m_apm_datalength;
  _value.m_apm_exponent = cval->m_apm_exponent;
  _value.m_apm_sign = cval->m_apm_sign;

  int len = (cval->m_apm_datalength + 1) >> 1;
  _value.m_apm_data = (UCHAR*)mm->allocate(len);

  memcpy(_value.m_apm_data, cval->m_apm_data, len);
}

Item::Ptr NumericTypeConstructor::createItem(const DynamicContext* context) const
{
  // Use the C API to copy our fake MAPM
  MAPM copy;
  m_apm_copy(const_cast<M_APM>(copy.c_struct()), const_cast<M_APM>(&_value));

  Numeric::Ptr retVal;
  switch(_primitiveType) {
  case AnyAtomicType::DECIMAL:
    retVal = context->getItemFactory()->createDecimalOrDerived(_typeURI, _typeName, copy, context);
    break;
  case AnyAtomicType::FLOAT:
    retVal = context->getItemFactory()->createFloatOrDerived(_typeURI, _typeName, copy, context);
    break;
  case AnyAtomicType::DOUBLE:
    retVal = context->getItemFactory()->createDoubleOrDerived(_typeURI, _typeName, copy, context);
    break;
  default:
    assert(false);
    break;
  }
  // check if it's a valid instance
  DatatypeValidator* validator=context->getDocumentCache()->getDatatypeValidator(_typeURI, _typeName);
  if(!validator) {
    XMLBuffer buf(1023, context->getMemoryManager());
    buf.append(X("Type "));
    buf.append(_typeURI);
    buf.append(chColon);
    buf.append(_typeName);
    buf.append(X(" not found"));
    XQThrow2(TypeNotFoundException, X("NumericTypeConstructor::createItem"), buf.getRawBuffer());
  }
  try {
    const XMLCh* valueToValidate=retVal->asString(context);
    validator->validate(valueToValidate, 0, context->getMemoryManager());
  } catch (XMLException &e) {
    XMLBuffer buf(1023, context->getMemoryManager());
    buf.append(e.getMessage());
    buf.append(X(" [err:FORG0001]"));
    XQThrow2(InvalidLexicalSpaceException, X("NumericTypeConstructor::createItem"), buf.getRawBuffer());
  }
  return retVal;
}

void NumericTypeConstructor::generateEvents(EventHandler *events, const DynamicContext* context) const
{
  // Use the C API to copy our fake MAPM
  MAPM copy;
  m_apm_copy(const_cast<M_APM>(copy.c_struct()), const_cast<M_APM>(&_value));

  Numeric::Ptr retVal;
  switch(_primitiveType) {
  case AnyAtomicType::DECIMAL:
    events->atomicItemEvent(_primitiveType, Numeric::asDecimalString(copy, ATDecimalOrDerivedImpl::g_nSignificantDigits,
                                                                     context), _typeURI, _typeName);
    break;
  case AnyAtomicType::FLOAT:
    events->atomicItemEvent(_primitiveType, Numeric::asDoubleString(Numeric::NUM, copy,
                                                                    ATFloatOrDerivedImpl::g_nSignificantDigits, context),
                            _typeURI, _typeName);
    break;
  case AnyAtomicType::DOUBLE:
    events->atomicItemEvent(_primitiveType, Numeric::asDoubleString(Numeric::NUM, copy,
                                                                    ATDoubleOrDerivedImpl::g_nSignificantDigits, context),
                            _typeURI, _typeName);
    break;
  default:
    assert(false);
    break;
  }
}

std::string NumericTypeConstructor::asString(const DynamicContext* context) const
{
  std::ostringstream s;

  s << "<NumericTypeConstructor";
  char obuf[1024];
  m_apm_to_string_mt(obuf, _value.m_apm_datalength, const_cast<M_APM>(&_value));
  s << " value=\"" << obuf;
  s << "\" typeuri=\"" << UTF8(_typeURI);
  s << "\" typename=\"" << UTF8(_typeName);
  s << "\"/>";

  return s.str();
}
