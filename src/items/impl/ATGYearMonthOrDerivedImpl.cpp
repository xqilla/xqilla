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

#include "../../config/xqilla_config.h"
#include "ATGYearMonthOrDerivedImpl.hpp"
#include <xqilla/exceptions/IllegalArgumentException.hpp>
#include <xqilla/exceptions/XPath2TypeCastException.hpp>
#include <xercesc/util/XMLUni.hpp>
#include <xercesc/util/XMLUniDefs.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/framework/XMLBuffer.hpp>
#include <xqilla/utils/XStr.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/mapm/m_apm.h>
#include <xqilla/items/Timezone.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include "../../utils/DateUtils.hpp"
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/items/DatatypeFactory.hpp>

#include <xercesc/util/XMLString.hpp>

ATGYearMonthOrDerivedImpl::
ATGYearMonthOrDerivedImpl(const XMLCh* typeURI, const XMLCh* typeName, const XMLCh* value, const DynamicContext* context): 
    ATGYearMonthOrDerived(),
    _typeName(typeName),
    _typeURI(typeURI) { 
    
     setGYearMonth(value, context); 
}

void *ATGYearMonthOrDerivedImpl::getInterface(const XMLCh *name) const
{
  if(name == Item::gXQilla) {
    return (void*)this;
  }
  return 0;
}

/* Get the name of the primitive type (basic type) of this type
 * (ie "decimal" for xs:decimal) */
const XMLCh* ATGYearMonthOrDerivedImpl::getPrimitiveTypeName() const {
  return getPrimitiveName();
}

const XMLCh* ATGYearMonthOrDerivedImpl::getPrimitiveName()  {
  return XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_YEARMONTH;
}

/* Get the name of this type  (ie "integer" for xs:integer) */
const XMLCh* ATGYearMonthOrDerivedImpl::getTypeName() const {
  return _typeName;
}

/* Get the namespace URI for this type */
const XMLCh* ATGYearMonthOrDerivedImpl::getTypeURI() const {
  return _typeURI; 
}

AnyAtomicType::AtomicObjectType ATGYearMonthOrDerivedImpl::getTypeIndex() {
  return AnyAtomicType::G_YEAR_MONTH;
} 

/* returns the XMLCh* (canonical) representation of this type */
const XMLCh* ATGYearMonthOrDerivedImpl::asString(const DynamicContext* context) const {
    XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buffer(1023, context->getMemoryManager());
    if(_YY->asMAPM() > 9999 || _YY->asMAPM() < -9999) {
        buffer.set(_YY->asString(context));
    } else {
        buffer.set(_YY->asString(4, context)); //pad to 4 digits
    }
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chDash);
    buffer.append(_MM->asString(2, context));
    if ( _hasTimezone == true ) {
        buffer.append(timezone_->asString(context));
    }
    return context->getMemoryManager()->getPooledString(buffer.getRawBuffer());
}

/* Returns true if and only if the xs:dateTimes representing the starting instants of $arg1 and $arg2 compare equal. 
 * The starting instants of $arg1 and $arg2 are calculated by adding the missing components of $arg1 and $arg2 from 
 * the xs:dateTime template xxxx-xx-ddT00:00:00 where dd represents the last day of the month component in $arg1 or $arg2. 
 * Returns false otherwise.
 */
bool ATGYearMonthOrDerivedImpl::equals(const AnyAtomicType::Ptr &target, const DynamicContext* context) const {
  if(this->getPrimitiveTypeIndex() != target->getPrimitiveTypeIndex()) {
        XQThrow(IllegalArgumentException,X("ATGYearMonthOrDerivedImpl::equals"), X("Equality operator for given types not supported"));
  }
  
    const XMLCh doubleZero[] = { XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0, XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
    XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buffer(1023, context->getMemoryManager());
    if(_YY->asMAPM() > 9999 || _YY->asMAPM() < -9999) {
        buffer.set(_YY->asString(context));
    } else {
        buffer.set(_YY->asString(4, context)); //pad to 4 digits
    }
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chDash);
    buffer.append(_MM->asString(2, context));
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chDash);
    DateUtils::formatNumber(DateUtils::maximumDayInMonthFor(asInt(_YY->asMAPM()), asInt(_MM->asMAPM())),2,buffer);
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T);
    buffer.append(doubleZero);
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chColon);
    buffer.append(doubleZero);
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chColon);
    buffer.append(doubleZero);
    if ( _hasTimezone == true ) {
        buffer.append(timezone_->asString(context));
    }
    ATDateTimeOrDerived::Ptr myValue=context->getItemFactory()->createDateTime(buffer.getRawBuffer(), context);

  ATGYearMonthOrDerivedImpl* targetGYearMonth = (ATGYearMonthOrDerivedImpl*)(const AnyAtomicType*)target;
    if(targetGYearMonth->_YY->asMAPM() > 9999 || targetGYearMonth->_YY->asMAPM() < -9999) {
        buffer.set(targetGYearMonth->_YY->asString(context));
    } else {
        buffer.set(targetGYearMonth->_YY->asString(4, context)); //pad to 4 digits
  }
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chDash);
    buffer.append(targetGYearMonth->_MM->asString(2, context));
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chDash);
    DateUtils::formatNumber(DateUtils::maximumDayInMonthFor(asInt(targetGYearMonth->_YY->asMAPM()), asInt(targetGYearMonth->_MM->asMAPM())),2,buffer);
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T);
    buffer.append(doubleZero);
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chColon);
    buffer.append(doubleZero);
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chColon);
    buffer.append(doubleZero);
    if ( targetGYearMonth->_hasTimezone == true ) {
        buffer.append(targetGYearMonth->timezone_->asString(context));
  }
    ATDateTimeOrDerived::Ptr targetValue=context->getItemFactory()->createDateTime(buffer.getRawBuffer(), context);

    return myValue->equals(targetValue, context);
}

/** Returns true if this is greater than other.  Ignores timezones.
 * Returns false otherwise. */
bool ATGYearMonthOrDerivedImpl::greaterThan(const ATGYearMonthOrDerived::Ptr &other, const DynamicContext* context) const {
  ATGYearMonthOrDerived::Ptr thisNorm = this;
  ATGYearMonthOrDerived::Ptr otherNorm = other;
  if (!thisNorm->hasTimezone())
    thisNorm = thisNorm->setTimezone(new Timezone(context->getImplicitTimezone(), context), context);
  if (!otherNorm->hasTimezone())
    otherNorm = otherNorm->setTimezone(new Timezone(context->getImplicitTimezone(), context), context);
  ATGYearMonthOrDerivedImpl* thisImpl=(ATGYearMonthOrDerivedImpl*)(const ATGYearMonthOrDerived*)thisNorm;
  ATGYearMonthOrDerivedImpl* otherImpl=(ATGYearMonthOrDerivedImpl*)(const ATGYearMonthOrDerived*)otherNorm;
  return (thisImpl->_YY->greaterThan(otherImpl->_YY, context) || 
         (thisImpl->_YY->equals(otherImpl->_YY, context) && thisImpl->_MM->greaterThan(otherImpl->_MM, context)) ||
         (thisImpl->_YY->equals(otherImpl->_YY, context) && thisImpl->_MM->equals(otherImpl->_MM, context) && thisImpl->timezone_->greaterThan(otherImpl->timezone_)));
}

/** Returns true if this is less than other.  Ignores timezones.
 * Returns false otherwise. */
bool ATGYearMonthOrDerivedImpl::lessThan(const ATGYearMonthOrDerived::Ptr &other, const DynamicContext* context) const {
  ATGYearMonthOrDerived::Ptr thisNorm = this;
  ATGYearMonthOrDerived::Ptr otherNorm = other;
  if (!thisNorm->hasTimezone())
    thisNorm = thisNorm->setTimezone(new Timezone(context->getImplicitTimezone(), context), context);
  if (!otherNorm->hasTimezone())
    otherNorm = otherNorm->setTimezone(new Timezone(context->getImplicitTimezone(), context), context);
  ATGYearMonthOrDerivedImpl* thisImpl=(ATGYearMonthOrDerivedImpl*)(const ATGYearMonthOrDerived*)thisNorm;
  ATGYearMonthOrDerivedImpl* otherImpl=(ATGYearMonthOrDerivedImpl*)(const ATGYearMonthOrDerived*)otherNorm;
  return (thisImpl->_YY->lessThan(otherImpl->_YY, context) || 
         (thisImpl->_YY->equals(otherImpl->_YY, context) && thisImpl->_MM->lessThan(otherImpl->_MM, context)) ||
         (thisImpl->_YY->equals(otherImpl->_YY, context) && thisImpl->_MM->equals(otherImpl->_MM, context) && thisImpl->timezone_->lessThan(otherImpl->timezone_)));
}

/** Returns true if a timezone is defined for this.  False otherwise.*/
bool ATGYearMonthOrDerivedImpl::hasTimezone() const {
  return _hasTimezone;
}

/** Sets the timezone to the given timezone.*/
ATGYearMonthOrDerived::Ptr ATGYearMonthOrDerivedImpl::setTimezone(const Timezone::Ptr &timezone, const DynamicContext* context) const {
    bool hasTimezone = timezone == NULLRCP ? false : true;
    XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buffer(1023, context->getMemoryManager());
    if(_YY->asMAPM() > 9999 || _YY->asMAPM() < -9999) {
        buffer.set(_YY->asString(context));
    } else {
        buffer.set(_YY->asString(4, context)); //pad to 4 digits
    }
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chDash);
    buffer.append(_MM->asString(2, context));
    if (hasTimezone) 
        buffer.append(timezone->asString(context));
    const XMLCh* gYearMonth = context->getMemoryManager()->getPooledString(buffer.getRawBuffer());
    return context->getItemFactory()->createGYearMonthOrDerived(this->getTypeURI(), this->getTypeName(), gYearMonth, context);        
}


AnyAtomicType::AtomicObjectType ATGYearMonthOrDerivedImpl::getPrimitiveTypeIndex() const {
  return this->getTypeIndex();
}

/* parse the gYearMonth */
void ATGYearMonthOrDerivedImpl::setGYearMonth(const XMLCh* const value, const DynamicContext* context) {
 unsigned int length = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(value);
 
	if(value == NULL) {
			XQThrow(XPath2TypeCastException,X("ATGYearMonthOrDerivedImpl::setGYearMonth"), X("Invalid representation of gYearMonth"));
	}
	
	// State variables etc.
	bool gotDigit = false;

	unsigned int pos = 0;
	long int tmpnum = 0;
	unsigned int numDigit = 0;
	bool negative = false;

	// defaulting values
	MAPM YY = 0;
	MAPM MM = 0;
	_hasTimezone = false;
	bool zonepos = false;
	int zonehh = 0;
	int zonemm = 0;

	int state = 0 ; // 0 = year / 1 = month / 2 = day / 3 = hour 
	                 // 4 = minutes / 5 = sec / 6 = timezonehour / 7 = timezonemin
	XMLCh tmpChar;
	
	bool wrongformat = false;

	if ( length > 0 && value[0] == L'-'  ) {
		negative = true;
		pos = 1;
	}else{
		pos = 0;
	} 
		
	while ( ! wrongformat && pos < length) {
		tmpChar = value[pos];
		pos++;
		switch(tmpChar) {
			case 0x0030:
			case 0x0031:
			case 0x0032:
			case 0x0033:
			case 0x0034:
			case 0x0035:
			case 0x0036:
			case 0x0037:
			case 0x0038:
	  	case 0x0039: {
				numDigit ++;
				tmpnum *= 10;
				tmpnum +=  static_cast<int>(tmpChar - 0x0030);
				gotDigit = true;
				break;
			}
		case L'-' : {
			if ( gotDigit ) {
				if (state == 0 && numDigit >= 4) { 
					YY = tmpnum;
					tmpnum = 0;
					gotDigit = false;
					numDigit = 0;
				} else if (state == 1 && numDigit == 2) {
					MM = tmpnum;		
					tmpnum = 0;
					gotDigit = false;
					_hasTimezone = true;
					zonepos = false;
					state = 5;
					numDigit = 0;
				} else {
					wrongformat = true;
				}
				state ++;
			} else {
				wrongformat = true;
			}
			break;			
		}
    case L'+' : {
			if ( gotDigit && state == 1 && numDigit == 2) {
				MM = tmpnum;		
				state = 6; 
				gotDigit = false;			
				_hasTimezone = true;
				zonepos = true;
				tmpnum = 0;
				numDigit = 0;
			} else {
				wrongformat = true;
			}
			break;
		}
		case L':' : {
			if (gotDigit && state == 6 && numDigit == 2) {
				zonehh = tmpnum;
				tmpnum = 0;
				gotDigit = false;				
				state ++;
				numDigit = 0;
			}else {
				wrongformat = true;
			}
			break;
		}
		case L'Z' : {
			if (gotDigit && state == 1 && numDigit == 2) {
				MM = tmpnum;
				state = 8; // final state
				_hasTimezone = true;
				gotDigit = false;
				tmpnum = 0;
				numDigit = 0;
			} else {
				wrongformat = true;
			}
			break;
		}
		default:
			wrongformat = true;
		}	
	}

	if (negative) {
	  YY = YY * -1;
	}

	if (gotDigit) {
		if ( gotDigit && state == 7 && numDigit == 2) {
			zonemm = tmpnum;
		} else if ( gotDigit && state == 1 && numDigit == 2) {
			MM = tmpnum;			
		} else {
			wrongformat = true;
		}
	} 
	
	// check time format

	if ( MM > 12 || zonehh > 24 || zonemm > 60 || YY == 0 ) {
		wrongformat = true;
	}

	if ( wrongformat) {
		XQThrow(XPath2TypeCastException,X("ATGYearMonthOrDerivedImpl::setGYearMonth"), X("Invalid representation of gYearMonth"));
	}

  // Create Timezone object, clean this up in future
  if (zonepos == false) {
    zonehh *= -1;
    zonemm *= -1;
  }
 timezone_ = new Timezone(zonehh, zonemm);
 

  _MM = context->getItemFactory()->createNonNegativeInteger(MM, context);  
  _YY = context->getItemFactory()->createInteger(YY, context);  
}

//////////////////////////////////////
// Horrible Hack to make Dates      //
// work for now. Loss of Precision! //
//////////////////////////////////////
int ATGYearMonthOrDerivedImpl::asInt(MAPM num) const
{
  if(num < INT_MIN || num > INT_MAX) {
    XQThrow(XPath2TypeCastException, X("ATGYearMonthOrDerivedImpl::asInt"), X("Invalid representation of an int"));
  } else {
    char out_string[256];
    num.toIntegerString(out_string);
    return atoi(out_string);
  }
}
