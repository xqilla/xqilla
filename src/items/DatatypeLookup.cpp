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

#include "../config/xqilla_config.h"
#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/items/DatatypeLookup.hpp>
#include <xercesc/util/XMLUniDefs.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/validators/datatype/DatatypeValidator.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/framework/XMLBuffer.hpp>

#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include "DatatypeFactoryTemplate.hpp"
#include <xqilla/exceptions/TypeNotFoundException.hpp>
#include "impl/ATAnyURIOrDerivedImpl.hpp"
#include "impl/ATAnySimpleTypeImpl.hpp"
#include "impl/ATBase64BinaryOrDerivedImpl.hpp"
#include <xqilla/items/impl/ATBooleanOrDerivedImpl.hpp>
#include "impl/ATDateOrDerivedImpl.hpp"
#include "impl/ATDateTimeOrDerivedImpl.hpp"
#include <xqilla/items/impl/ATDecimalOrDerivedImpl.hpp>
#include <xqilla/items/impl/ATDoubleOrDerivedImpl.hpp>
#include "impl/ATDurationOrDerivedImpl.hpp"
#include <xqilla/items/impl/ATFloatOrDerivedImpl.hpp>
#include "impl/ATGDayOrDerivedImpl.hpp"
#include "impl/ATGMonthOrDerivedImpl.hpp"
#include "impl/ATGMonthDayOrDerivedImpl.hpp"
#include "impl/ATGYearMonthOrDerivedImpl.hpp"
#include "impl/ATGYearOrDerivedImpl.hpp"
#include "impl/ATHexBinaryOrDerivedImpl.hpp"
#include "impl/ATNotationOrDerivedImpl.hpp"
#include <xqilla/items/impl/ATQNameOrDerivedImpl.hpp>
#include "impl/ATStringOrDerivedImpl.hpp"
#include "impl/ATTimeOrDerivedImpl.hpp"
#include "impl/ATUntypedAtomicImpl.hpp"
#include <xqilla/items/ATUntypedAtomic.hpp>
#include <xqilla/schema/DocumentCache.hpp>

DatatypeLookup::DatatypeLookup(const DocumentCache* dc, XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr) :
    fDatatypeTable(30, false, memMgr),
    fDocumentCache(dc),
    fMemMgr(memMgr)
{
  // create a xs:anySimpleType
  anySimpleType_ = new (fMemMgr) DatatypeFactoryTemplate<ATAnySimpleTypeImpl>(fDocumentCache);
  insertDatatype(anySimpleType_);
  
  // create a xs:anyURI
  anyURI_ = new (fMemMgr) DatatypeFactoryTemplate<ATAnyURIOrDerivedImpl>(fDocumentCache);
  insertDatatype(anyURI_);
  
  // create a xs:base64Binary
  base64Binary_ = new (fMemMgr) DatatypeFactoryTemplate<ATBase64BinaryOrDerivedImpl>(fDocumentCache);
  insertDatatype(base64Binary_);

  // create a xs:boolean
  boolean_ = new (fMemMgr) DatatypeFactoryTemplate<ATBooleanOrDerivedImpl>(fDocumentCache);
  insertDatatype(boolean_);

  // create a xs:date
  date_ = new (fMemMgr) DatatypeFactoryTemplate<ATDateOrDerivedImpl>(fDocumentCache);
  insertDatatype(date_);

  // create a xs:dateTime
  dateTime_ = new (fMemMgr) DatatypeFactoryTemplate<ATDateTimeOrDerivedImpl>(fDocumentCache);
  insertDatatype(dateTime_);

  // create a xs:decimal
  decimal_ = new (fMemMgr) DatatypeFactoryTemplate<ATDecimalOrDerivedImpl>(fDocumentCache);
  insertDatatype(decimal_);

  // create a xs:double
  double_ = new (fMemMgr) DatatypeFactoryTemplate<ATDoubleOrDerivedImpl>(fDocumentCache);
  insertDatatype(double_);

  // create a xs:duration
  duration_ = new (fMemMgr) DatatypeFactoryTemplate<ATDurationOrDerivedImpl>(fDocumentCache);
  insertDatatype(duration_);

  // create a xs:float
  float_ = new (fMemMgr) DatatypeFactoryTemplate<ATFloatOrDerivedImpl>(fDocumentCache);
  insertDatatype(float_);

  // create a xs:gDay
  gDay_ = new (fMemMgr) DatatypeFactoryTemplate<ATGDayOrDerivedImpl>(fDocumentCache);
  insertDatatype(gDay_);

  // create a xs:gMonth
  gMonth_ = new (fMemMgr) DatatypeFactoryTemplate<ATGMonthOrDerivedImpl>(fDocumentCache);
  insertDatatype(gMonth_);

  // create a xs:gMonthDay
  gMonthDay_ = new (fMemMgr) DatatypeFactoryTemplate<ATGMonthDayOrDerivedImpl>(fDocumentCache);
  insertDatatype(gMonthDay_);

  // create a xs:gYear
  gYear_ = new (fMemMgr) DatatypeFactoryTemplate<ATGYearOrDerivedImpl>(fDocumentCache);
  insertDatatype(gYear_);

  // create a xs:gYearMonth
  gYearMonth_ = new (fMemMgr) DatatypeFactoryTemplate<ATGYearMonthOrDerivedImpl>(fDocumentCache);
  insertDatatype(gYearMonth_);

  // create a xs:hexBinary
  hexBinary_ = new (fMemMgr) DatatypeFactoryTemplate<ATHexBinaryOrDerivedImpl>(fDocumentCache);
  insertDatatype(hexBinary_);

  // create a xs:NOTATION
  notation_ = new (fMemMgr) DatatypeFactoryTemplate<ATNotationOrDerivedImpl>(fDocumentCache);
  insertDatatype(notation_);

  // create a xs:QName
  qname_ = new (fMemMgr) DatatypeFactoryTemplate<ATQNameOrDerivedImpl>(fDocumentCache);
  insertDatatype(qname_);
  
  // create a xs:string
  string_ = new (fMemMgr) StringDatatypeFactory<ATStringOrDerivedImpl>(fDocumentCache);
  insertDatatype(string_);

  // create a xs:time
  time_ = new (fMemMgr) DatatypeFactoryTemplate<ATTimeOrDerivedImpl>(fDocumentCache);
  insertDatatype(time_);
  
  // create a xdt:untypedAtomic 
  untypedAtomic_ = new (fMemMgr) UntypedAtomicDatatypeFactory<ATUntypedAtomicImpl>(fDocumentCache);
  insertDatatype(untypedAtomic_);
}

DatatypeLookup::~DatatypeLookup()
{
}

void DatatypeLookup::insertDatatype(DatatypeFactory *datatype)
{
  fDatatypeTable.put((void*)datatype->getPrimitiveTypeName(),datatype);
}

const DatatypeFactory* DatatypeLookup::lookupDatatype(AnyAtomicType::AtomicObjectType typeIndex) const
{
  switch(typeIndex) {
  case AnyAtomicType::ANY_SIMPLE_TYPE: return anySimpleType_;
  case AnyAtomicType::ANY_URI: return anyURI_;
  case AnyAtomicType::BASE_64_BINARY: return base64Binary_;
  case AnyAtomicType::BOOLEAN: return boolean_;
  case AnyAtomicType::DATE: return date_;
  case AnyAtomicType::DATE_TIME: return dateTime_;
  case AnyAtomicType::DAY_TIME_DURATION: return duration_;
  case AnyAtomicType::DECIMAL: return decimal_;
  case AnyAtomicType::DOUBLE: return double_;
  case AnyAtomicType::DURATION: return duration_;
  case AnyAtomicType::FLOAT: return float_;
  case AnyAtomicType::G_DAY: return gDay_;
  case AnyAtomicType::G_MONTH: return gMonth_;
  case AnyAtomicType::G_MONTH_DAY: return gMonthDay_;
  case AnyAtomicType::G_YEAR: return gYear_;
  case AnyAtomicType::G_YEAR_MONTH: return gYearMonth_;
  case AnyAtomicType::HEX_BINARY: return hexBinary_;
  case AnyAtomicType::NOTATION: return notation_;
  case AnyAtomicType::QNAME: return qname_;
  case AnyAtomicType::STRING: return string_;
  case AnyAtomicType::TIME: return time_;
  case AnyAtomicType::UNTYPED_ATOMIC: return untypedAtomic_;
  case AnyAtomicType::YEAR_MONTH_DURATION: return duration_;
  default: break;
  }

  return 0;
}

const DatatypeFactory* DatatypeLookup::lookupDatatype(const XMLCh* typeURI, const XMLCh* typeName, bool &isPrimitive) const
{
  const DatatypeFactory* pFactory=fDatatypeTable.get((void*)typeName);
  
  // in case we're lucky and we were given a primitive type
  if (pFactory) {
    if(XPath2Utils::equals(typeURI, XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA) ||
      XPath2Utils::equals(typeName, ATUntypedAtomic::fgDT_UNTYPEDATOMIC) ) {
      isPrimitive = true;
      return pFactory;
    }
  }
  isPrimitive = false;
  
  const XERCES_CPP_NAMESPACE_QUALIFIER DatatypeValidator* validator = fDocumentCache->getDatatypeValidator(typeURI, typeName);

  while(validator) {
    const XERCES_CPP_NAMESPACE_QUALIFIER DatatypeValidator* tempVal = validator->getBaseValidator();
    if(!tempVal) break;
    else validator = tempVal;
  }

  if(validator) {
    pFactory=fDatatypeTable.get((void*)validator->getTypeLocalName());
    if (pFactory)
      return pFactory;
  }

  XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buf(1023, fMemMgr);
  buf.append(X("Type "));
  buf.append(typeURI);
  buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chColon);
  buf.append(typeName);
  buf.append(X(" not found"));
  XQThrow(TypeNotFoundException, X("DatatypeLookup::lookupDatatype"), buf.getRawBuffer());

}

DatatypeFactory *DatatypeLookup::getAnySimpleTypeFactory() const
{
  return anySimpleType_;
}

DatatypeFactory *DatatypeLookup::getAnyURIFactory() const
{
  return anyURI_;
}

DatatypeFactory *DatatypeLookup::getBase64BinaryFactory() const
{
  return base64Binary_;
}

DatatypeFactory *DatatypeLookup::getBooleanFactory() const
{
  return boolean_;
}

DatatypeFactory *DatatypeLookup::getDateFactory() const
{
  return date_;
}

DatatypeFactory *DatatypeLookup::getDateTimeFactory() const
{
  return dateTime_;
}

DatatypeFactory *DatatypeLookup::getDecimalFactory() const
{
  return decimal_;
}

DatatypeFactory *DatatypeLookup::getDoubleFactory() const
{
  return double_;
}

DatatypeFactory *DatatypeLookup::getDurationFactory() const
{
  return duration_;
}

DatatypeFactory *DatatypeLookup::getFloatFactory() const
{
  return float_;
}

DatatypeFactory *DatatypeLookup::getGDayFactory() const
{
  return gDay_;
}

DatatypeFactory *DatatypeLookup::getGMonthFactory() const
{
  return gMonth_;
}

DatatypeFactory *DatatypeLookup::getGMonthDayFactory() const
{
  return gMonthDay_;
}

DatatypeFactory *DatatypeLookup::getGYearFactory() const
{
  return gYear_;
}

DatatypeFactory *DatatypeLookup::getGYearMonthFactory() const
{
  return gYearMonth_;
}

DatatypeFactory *DatatypeLookup::getHexBinaryFactory() const
{
  return hexBinary_;
}

DatatypeFactory *DatatypeLookup::getNotationFactory() const
{
  return notation_;
}

DatatypeFactory *DatatypeLookup::getQNameFactory() const
{
  return qname_;
}

DatatypeFactory *DatatypeLookup::getStringFactory() const
{
  return string_;
}

DatatypeFactory *DatatypeLookup::getTimeFactory() const
{
  return time_;
}

DatatypeFactory *DatatypeLookup::getUntypedAtomicFactory() const
{
  return untypedAtomic_;
}

