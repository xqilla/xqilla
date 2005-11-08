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

#include <sstream>

#include "../config/xqilla_config.h"
#include <xqilla/items/AnyAtomicTypeConstructor.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/utils/UTF8Str.hpp>

AnyAtomicTypeConstructor::AnyAtomicTypeConstructor(const XMLCh* typeURI,
                                                   const XMLCh* typeName,
                                                   const XMLCh* value,
                                                   bool numeric)
  : _typeURI(typeURI),
    _typeName(typeName),
    _value(value),
    _numeric(numeric)
{
}

bool AnyAtomicTypeConstructor::isNumeric() const
{
  return _numeric;
}

Item::Ptr AnyAtomicTypeConstructor::createItem(const DynamicContext* context) const
{
  return context->getItemFactory()->createDerivedFromAtomicType(_typeURI, _typeName, _value, context);
}

std::string AnyAtomicTypeConstructor::asString(const DynamicContext* context) const
{
  std::ostringstream s;

  s << "<AnyAtomicTypeConstructor";
  s << " value=\"" << UTF8(_value);
  s << "\" typeuri=\"" << UTF8(_typeURI);
  s << "\" typename=\"" << UTF8(_typeName);
  s << "\"/>";

  return s.str();
}
