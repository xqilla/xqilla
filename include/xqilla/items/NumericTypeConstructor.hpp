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

#ifndef _NUMERICTYPECONSTUCTOR_HPP
#define _NUMERICTYPECONSTUCTOR_HPP

#include <xqilla/items/ItemConstructor.hpp>
#include <xercesc/util/XercesDefs.hpp>
#include <xqilla/ast/StaticType.hpp>
#include <xqilla/mapm/m_apm.h>

class XQILLA_API NumericTypeConstructor : public ItemConstructor {
public:
  NumericTypeConstructor(const XMLCh* typeURI,
                         const XMLCh* typeName,
                         const MAPM& value,
                         AnyAtomicType::AtomicObjectType primitiveType,
                         XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *mm);
  virtual ~NumericTypeConstructor() {}

  virtual const StaticType &getStaticType() const { return _sType; }

  virtual Item::Ptr createItem(const DynamicContext* context) const;
  virtual void generateEvents(EventHandler *events, const DynamicContext* context) const;
  virtual std::string asString(const DynamicContext* context) const;

  virtual const XMLCh* getTypeURI() const { return _typeURI; }
  virtual const XMLCh* getTypeName() const { return _typeName; }

private:
  const XMLCh *_typeURI;
  const XMLCh *_typeName;
  M_APM_struct _value;
  AnyAtomicType::AtomicObjectType _primitiveType;
  StaticType _sType;
};

#endif

