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

/*
  Factory template class for Datatypes
*/

#ifndef _DatatypeFactoryTemplate_HPP
#define _DatatypeFactoryTemplate_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>
#include "impl/ATStringOrDerivedImpl.hpp"

class AnyAtomicType;

///used to facilitate the creation of datatypes
template<class TYPE>
class DatatypeFactoryTemplate : public DatatypeFactory
{
public:
  DatatypeFactoryTemplate(const DocumentCache* dc)
    : DatatypeFactory(dc, const_cast<XERCES_CPP_NAMESPACE_QUALIFIER DatatypeValidator*>
                      (dc->getDatatypeValidator(getPrimitiveTypeURI(), getPrimitiveTypeName()))) {}

  AnyAtomicType::Ptr createInstanceNoCheck(const XMLCh* typeURI,
                                           const XMLCh* typeName,
                                           const XMLCh* value,
                                           const DynamicContext* context) const {
    return new TYPE(typeURI, typeName, value, context);
  }

  AnyAtomicType::AtomicObjectType getPrimitiveTypeIndex() const
  {
    return TYPE::getTypeIndex();
  }

  virtual const XMLCh* getPrimitiveTypeURI() const {
    return XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA;
  }

  const XMLCh* getPrimitiveTypeName() const {
    return TYPE::getPrimitiveName();
  }

protected:
  DatatypeFactoryTemplate(const DocumentCache* dc, XERCES_CPP_NAMESPACE_QUALIFIER DatatypeValidator *val)
    : DatatypeFactory(dc, val) {}
};

template<class TYPE>
class StringDatatypeFactory : public DatatypeFactoryTemplate<TYPE>
{
public:
  StringDatatypeFactory(const DocumentCache* dc)
    : DatatypeFactoryTemplate<TYPE>(dc) {}

  virtual const XMLCh* getPrimitiveTypeURI() const {
    return XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA;
  }

  const XMLCh* getPrimitiveTypeName() const {
    return TYPE::getPrimitiveName();
  }

  AnyAtomicType::Ptr createInstance(const XMLCh* value,
                                    const DynamicContext* context) const
  {
    return createInstanceNoCheck(getPrimitiveTypeURI(), getPrimitiveTypeName(), value, context);
  }

  bool checkInstance(const XMLCh* value,
                     const StaticContext* context) const
  {
    return true;
  }

protected:
  StringDatatypeFactory(const DocumentCache* dc, XERCES_CPP_NAMESPACE_QUALIFIER DatatypeValidator *val)
    : DatatypeFactoryTemplate<TYPE>(dc, val) {}
};

template<class TYPE>
class UntypedAtomicDatatypeFactory : public StringDatatypeFactory<TYPE>
{
public:
  UntypedAtomicDatatypeFactory(const DocumentCache* dc)
    : StringDatatypeFactory<TYPE>(dc, const_cast<XERCES_CPP_NAMESPACE_QUALIFIER DatatypeValidator*>
                                  (dc->getDatatypeValidator(getPrimitiveTypeURI(), getPrimitiveTypeName()))) {}

  virtual const XMLCh* getPrimitiveTypeURI() const {
    return FunctionConstructor::XMLChXPath2DatatypesURI;
  }

  const XMLCh* getPrimitiveTypeName() const {
    return TYPE::getPrimitiveName();
  }

};


#endif // _DatatypeFactoryTemplate_HPP
