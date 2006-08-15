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

#include "../../config/xqilla_config.h"
#include "ATTimeOrDerivedImpl.hpp"
#include <xercesc/util/XMLUniDefs.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/framework/XMLBuffer.hpp>
#include <xqilla/mapm/m_apm.h>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/exceptions/IllegalArgumentException.hpp>
#include <xqilla/exceptions/XPath2TypeCastException.hpp>
#include <xqilla/items/ATDateOrDerived.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/ATDurationOrDerived.hpp>
#include <xqilla/items/Timezone.hpp>
#include <xqilla/context/ItemFactory.hpp>

#include <limits.h>   // for INT_MIN and INT_MAX
#include <stdlib.h>   // for atoi
#include <assert.h>

#include "../../utils/DateUtils.hpp"

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

ATTimeOrDerivedImpl::
ATTimeOrDerivedImpl(const XMLCh* typeURI, const XMLCh* typeName, const XMLCh* value, const DynamicContext* context): 
    ATTimeOrDerived(),
    _typeName(typeName),
    _typeURI(typeURI) { 
    
  setTime(value, context);    
}


// private constructor for internal use
ATTimeOrDerivedImpl::ATTimeOrDerivedImpl(const XMLCh* typeURI, const XMLCh* typeName, 
    const ATDecimalOrDerived::Ptr &hh, const ATDecimalOrDerived::Ptr &mm, const ATDecimalOrDerived::Ptr &ss, 
    const Timezone::Ptr &timezone, bool hasTimezone) : 
    ATTimeOrDerived(),
    _hh(hh), _mm(mm), _ss(ss),
    timezone_(timezone), _hasTimezone(hasTimezone),
    _typeName(typeName),
    _typeURI(typeURI) {
}

void *ATTimeOrDerivedImpl::getInterface(const XMLCh *name) const
{
  if(name == Item::gXQilla) {
    return (void*)this;
  }
  return 0;
}

/* Get the name of the primitive type (basic type) of this type
 * (ie "decimal" for xs:decimal) */
const XMLCh* ATTimeOrDerivedImpl::getPrimitiveTypeName() const {
  return this->getPrimitiveName();
}

const XMLCh* ATTimeOrDerivedImpl::getPrimitiveName()  {
  return SchemaSymbols::fgDT_TIME;
}

/* Get the name of this type  (ie "integer" for xs:integer) */
const XMLCh* ATTimeOrDerivedImpl::getTypeName() const {
  return _typeName;
}

/* Get the namespace URI for this type */
const XMLCh* ATTimeOrDerivedImpl::getTypeURI() const {
  return _typeURI; 
}

AnyAtomicType::AtomicObjectType ATTimeOrDerivedImpl::getTypeIndex() {
  return AnyAtomicType::TIME;
} 

/* If possible, cast this type to the target type */
AnyAtomicType::Ptr ATTimeOrDerivedImpl::castAsInternal(AtomicObjectType targetIndex, const XMLCh* targetURI, const XMLCh* targetType, const DynamicContext* context) const {
  XMLBuffer buf(1023, context->getMemoryManager());

  switch (targetIndex) {
    case DATE_TIME: {
      const ATDateOrDerived::Ptr currentDate = DateUtils::getCurrentDate(context); 
      if(currentDate->getYears()->greaterThan(context->getItemFactory()->createInteger(9999, context), context)) {
        buf.set(currentDate->getYears()->asString(context));
      } else {
        buf.set(currentDate->getYears()->asString(4, context)); //pad to 4 digits
      }
      buf.append(chDash);
      buf.append(currentDate->getMonths()->asString(2, context));
      buf.append(chDash);
      buf.append(currentDate->getDays()->asString(2, context));
      buf.append(chLatin_T);
      buf.append(this->asString(context));
      return context->getItemFactory()->createDateTimeOrDerived(targetURI, targetType, buf.getRawBuffer(), context);
    }
    case ANY_SIMPLE_TYPE:
    case UNTYPED_ATOMIC:
      //anySimpleType and untypedAtomic follow the same casting rules as string.
    case STRING: {
      return context->getItemFactory()->createDerivedFromAtomicType(targetIndex, targetURI, targetType, this->asString(context), context);
		}
    default: return AnyAtomicType::castAsInternal(targetIndex, targetURI, targetType, context);
  }
}

/* returns the XMLCh* (canonical) representation of this type */
const XMLCh* ATTimeOrDerivedImpl::asString(const DynamicContext* context) const {
  XMLBuffer buffer(1023, context->getMemoryManager());
  buffer.append(_hh->asString(2, context));
  buffer.append(chColon);
  buffer.append(_mm->asString(2, context));
  buffer.append(chColon);
  if(_ss->asMAPM() < MM_Ten) { // TODO: deal with precision in a better way!
    buffer.append(chDigit_0);
  }
  if (_ss->equals(_ss->floor(context), context)) {
    const ATDecimalOrDerived::Ptr int_ss = (const ATDecimalOrDerived::Ptr ) _ss->castAs(SchemaSymbols::fgURI_SCHEMAFORSCHEMA, SchemaSymbols::fgDT_INTEGER, context);
    buffer.append(int_ss->asString(context));
  } else {
    buffer.append(_ss->asString(context));  
  }

  // Add timezone if exists
  if (_hasTimezone) {
    buffer.append(timezone_->asString(context));
  }
  return context->getMemoryManager()->getPooledString(buffer.getRawBuffer());
}

ATDateTimeOrDerived::Ptr ATTimeOrDerivedImpl::buildReferenceDateTime(ATTimeOrDerived::Ptr time, const DynamicContext* context) const
{
  const XMLCh s1972_12_31[] = { chDigit_1, chDigit_9, chDigit_7, chDigit_2, chDash, chDigit_1, chDigit_2, chDash, chDigit_3, chDigit_1, chLatin_T, chNull };
  XMLBuffer buf(1023, context->getMemoryManager());
  buf.set(s1972_12_31);
  buf.append(time->asString(context));
  return context->getItemFactory()->createDateTime(buf.getRawBuffer(), context);
}

/**
 * Returns true if and only if the value of $arg1 converted to an xs:dateTime using the date components from the reference 
 * xs:dateTime is equal to the value of $arg2 converted to an xs:dateTime using the date components from the same reference 
 * xs:dateTime. Returns false otherwise.
 * 
 * The two xs:dateTime values are compared using op:dateTime-equal.
 */
bool ATTimeOrDerivedImpl::equals(const AnyAtomicType::Ptr &target, const DynamicContext* context) const {
  if(this->getPrimitiveTypeIndex() != target->getPrimitiveTypeIndex()) {
    XQThrow(::IllegalArgumentException,X("ATTimeOrDerivedImpl::equals"), X("Equality operator for given types not supported [err:XPTY0004]"));
  }
  ATDateTimeOrDerived::Ptr thisTime=buildReferenceDateTime(this, context);
  ATDateTimeOrDerived::Ptr otherTime=buildReferenceDateTime(target, context);
  return thisTime->equals(otherTime, context);
}

/**
 * Returns true if and only if the value of $arg1 converted to an xs:dateTime using the date components from the reference 
 * xs:dateTime is greater than the value of $arg2 converted to an xs:dateTime using the date components from the same reference 
 * xs:dateTime. Returns false otherwise.
 *
 * The two xs:dateTime values are compared using op:dateTime-greater-than.
 */
bool ATTimeOrDerivedImpl::greaterThan(const ATTimeOrDerived::Ptr &other, const DynamicContext* context) const {
  ATDateTimeOrDerived::Ptr thisTime=buildReferenceDateTime(this, context);
  ATDateTimeOrDerived::Ptr otherTime=buildReferenceDateTime(other, context);
  return thisTime->greaterThan(otherTime, context);
}

/**
 * Returns true if and only if the value of $arg1 converted to an xs:dateTime using the date components from the reference 
 * xs:dateTime is less than the normalized value of $arg2 converted to an xs:dateTime using the date components from the same 
 * reference xs:dateTime. Returns false otherwise.
 *
 * The two xs:dateTime values are compared using op:dateTime-less-than.
 */
bool ATTimeOrDerivedImpl::lessThan(const ATTimeOrDerived::Ptr &other,  const DynamicContext* context) const {
  ATDateTimeOrDerived::Ptr thisTime=buildReferenceDateTime(this, context);
  ATDateTimeOrDerived::Ptr otherTime=buildReferenceDateTime(other, context);
  return thisTime->lessThan(otherTime, context);
}

/** 
 * Returns an integer representing the hour component of this object
 */
const ATDecimalOrDerived::Ptr &ATTimeOrDerivedImpl::getHours() const {
  return _hh;
}

/** 
 * Returns an integer representing the minute component of this object
 */
const ATDecimalOrDerived::Ptr &ATTimeOrDerivedImpl::getMinutes() const {
 return _mm;
}

/** 
 * Returns an decimal representing the second component of this object
 */
const ATDecimalOrDerived::Ptr &ATTimeOrDerivedImpl::getSeconds() const {
  return _ss;
}

/**
 * Returns true if the timezone is defined for this object, false otherwise.
 */
bool ATTimeOrDerivedImpl::hasTimezone() const {
  return _hasTimezone;
}

/**
 * Returns the timezone associated with this object, or
 * null, if the timezone is not set
 */
const Timezone::Ptr &ATTimeOrDerivedImpl::getTimezone() const {
  return timezone_;
}

/**
 * Setter for timezone.  Overrides the current timezone. (Not to be 
 * confused with addTimezone(). If passed NULL, timezone is removed (unset)
 */
ATTimeOrDerived::Ptr ATTimeOrDerivedImpl::setTimezone(const Timezone::Ptr &timezone, const DynamicContext* context) const {
  bool hasTimezone = timezone == NULLRCP ? false : true;
  return new
    ATTimeOrDerivedImpl(this->getTypeURI(), 
                        this->getTypeName(), 
                        this->_hh, this->_mm, this->_ss,
                        timezone, hasTimezone);
}

/**
 * Returns an ATTimeOrDerived with a timezone added to it
 */
ATTimeOrDerived::Ptr ATTimeOrDerivedImpl::addTimezone(const ATDurationOrDerived::Ptr &timezone, const DynamicContext* context) const {
  Timezone::Ptr tz = new Timezone(timezone, context);  

  // If this time does not have a timezone, add the given timezone
  if (!_hasTimezone) {
    ATTimeOrDerived::Ptr timeCopy = this->setTimezone(tz, context);
    return timeCopy;
  } else { //else convert the time into an equivalent one with given timezone
    // Minutes
    MAPM offset = tz->getTimezoneAsMinutes()-timezone_->getTimezoneAsMinutes();
    MAPM temp = ((const ATDecimalOrDerived*)this->_mm)->asMAPM() + offset;
    const ATDecimalOrDerived::Ptr mm = context->getItemFactory()->createNonNegativeInteger(
                                                                                     DateUtils::modulo(temp, DateUtils::g_minutesPerHour),
                                                                                     context);
    MAPM carry = (temp / DateUtils::g_minutesPerHour).floor();
  
    // Hours
    temp = ((const ATDecimalOrDerived*)this->_hh)->asMAPM() + carry;
    const ATDecimalOrDerived::Ptr hh = context->getItemFactory()->createNonNegativeInteger(
                                                                                     DateUtils::modulo(temp, DateUtils::g_hoursPerDay),
                                                                                     context);
    
    return new
      ATTimeOrDerivedImpl(this->getTypeURI(), 
                              this->getTypeName(), 
                              hh, mm, this->_ss,
                              tz, 
                              true);
  }  

  return 0;
}

/**
 * Returns a time with the given dayTimeDuration added to it
 */
ATTimeOrDerived::Ptr ATTimeOrDerivedImpl::addDayTimeDuration(const ATDurationOrDerived::Ptr &dayTime, const DynamicContext* context) const {
  return addDayTimeDuration(dayTime->getHours(context)->asMAPM(),
                            dayTime->getMinutes(context)->asMAPM(),
                            dayTime->getSeconds(context)->asMAPM(), context);
}
  
/**
 * Returns a time with the given dayTimeDuration subtracted from it
 */
ATTimeOrDerived::Ptr ATTimeOrDerivedImpl::subtractDayTimeDuration(const ATDurationOrDerived::Ptr &dayTime, const DynamicContext* context) const {
  return subtractDayTimeDuration(dayTime->getHours(context)->asMAPM(),
                                 dayTime->getMinutes(context)->asMAPM(),
                                 dayTime->getSeconds(context)->asMAPM(), context);
}

ATTimeOrDerived::Ptr ATTimeOrDerivedImpl::addDayTimeDuration(MAPM hours, MAPM minutes, MAPM seconds, const DynamicContext* context) const {
  
  // Seconds
  MAPM temp = getSeconds()->asMAPM() + seconds;
  MAPM ss = DateUtils::modulo(temp, DateUtils::g_secondsPerMinute);
  MAPM carry = (temp/DateUtils::g_secondsPerMinute).floor();

  // Minutes
  temp = getMinutes()->asMAPM() + minutes + carry;
  MAPM mm = DateUtils::modulo(temp, DateUtils::g_minutesPerHour);
  carry = (temp/DateUtils::g_minutesPerHour).floor();

  // Hours
  temp = getHours()->asMAPM() + hours + carry;
  MAPM hh = DateUtils::modulo(temp, DateUtils::g_hoursPerDay);
  
  return new
    ATTimeOrDerivedImpl(_typeURI, 
                        _typeName, 
                        context->getItemFactory()->createNonNegativeInteger(hh, context),
                        context->getItemFactory()->createNonNegativeInteger(mm, context),
                        context->getItemFactory()->createDecimal(ss, context),
                        getTimezone(), 
                        hasTimezone());
}

ATTimeOrDerived::Ptr ATTimeOrDerivedImpl::subtractDayTimeDuration(MAPM hours, MAPM minutes, MAPM seconds, const DynamicContext* context) const {
  return this->addDayTimeDuration(hours.neg(), minutes.neg(), seconds.neg(), context);
}

/**
 * Returns the xdt:dayTimeDuration that corresponds to the difference between the value of $arg1 converted to an 
 * xs:dateTime using the date components from the reference xs:dateTime and the value of $arg2 converted to an xs:dateTime 
 * using the date components from the same reference xs:dateTime
 */
ATDurationOrDerived::Ptr ATTimeOrDerivedImpl::subtractTime(const ATTimeOrDerived::Ptr &time, const DynamicContext* context) const {
  
  ATDateTimeOrDerived::Ptr thisTime=buildReferenceDateTime(this, context);
  ATDateTimeOrDerived::Ptr otherTime=buildReferenceDateTime(time, context);
  return thisTime->subtractDateTimeAsDayTimeDuration(otherTime, context);
}

AnyAtomicType::AtomicObjectType ATTimeOrDerivedImpl::getPrimitiveTypeIndex() const {
  return this->getTypeIndex();
}

void ATTimeOrDerivedImpl::setTime(const XMLCh* const time, const DynamicContext* context) {
	unsigned int length = XMLString::stringLen(time);
 
	if(time == NULL) {
			XQThrow(XPath2TypeCastException,X("XSTimeImpl::setTime"), X("Invalid representation of time"));
	}
	
	// State variables etc.
	bool gotDot = false;
	bool gotDigit = false;

	unsigned int pos = 0;
	long int tmpnum = 0;
	double decplace = 1;
	double tmpdec = 0;

	unsigned int numDigit = 0;

	// defaulting values
	MAPM hh = 0;
	MAPM mm = 0;
	MAPM ss = 0;
	_hasTimezone = false;
	bool zonepos = false;
	int zonehh = 0;
	int zonemm = 0;

	int state = 3 ;  // 3 = hour
	                 // 4 = minutes / 5 = sec / 6 = timezonehour / 7 = timezonemin
	XMLCh tmpChar;
	
	bool wrongformat = false;
	pos = 0;

	while ( ! wrongformat && pos < length) {
		tmpChar = time[pos];
		pos++;
		switch(tmpChar) {
		  case L'.': {
				if (! gotDot && gotDigit && state == 5 && numDigit == 2) {
					gotDot = true;
					ss = tmpnum;
					gotDigit = false;
					tmpnum = 0;
					break;
				}
				wrongformat = true;										
				break;
		  }
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
				if ( gotDot && state == 5) {
					decplace *= 10;					
				} else {
					numDigit ++;
				}
				tmpnum *= 10;
				tmpnum +=  static_cast<int>(tmpChar - 0x0030);
				gotDigit = true;
				
				break;
			}
		case L'-' : {
			if ( gotDigit && state == 5 && numDigit == 2) {					
					tmpdec =  tmpnum / decplace;			
					ss += tmpdec;					
					gotDigit = false;	
					_hasTimezone = true;
					zonepos = false;
					_hasTimezone = true;
					tmpnum = 0;
					numDigit = 0;
			}else {
				
				wrongformat = true;
			}
			state ++;		
			break;			
		}
    case L'+' : {
			if ( gotDigit && state == 5 && numDigit == 2) {
				tmpdec =  tmpnum / decplace;			
				ss += tmpdec;	
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
			if (gotDigit ) {
				if (state == 3 && numDigit == 2) {
					hh = tmpnum;
					tmpnum = 0;
					numDigit = 0;
					gotDigit = false;
				} else if ( state == 4 && numDigit == 2) {
					mm = tmpnum;
					tmpnum = 0;
					numDigit = 0;
					gotDigit = false;
				} else if ( state == 6 && numDigit == 2) {
					zonehh = tmpnum;
					_hasTimezone = true;
					tmpnum = 0;
					numDigit = 0;
					gotDigit = false;
				} else {
					wrongformat = true;
				}
				state ++;
			}else {
				wrongformat = true;
			}
			break;
		}
		case L'Z' : {
			if (gotDigit && state == 5 && numDigit == 2) {
				tmpdec =  tmpnum / decplace;			
				ss += tmpdec;	
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

	if (gotDigit) {
		if ( gotDigit && state == 7 && numDigit == 2) {
			zonemm = tmpnum;
			_hasTimezone = true;
		}else if ( gotDigit && state == 5 && numDigit == 2) {
			tmpdec =  tmpnum / decplace;			
			ss += tmpdec;			
		}else {
			wrongformat = true;
		}
	} 

    if ( hh > 24 || mm > 59 || ss > 59 || zonehh > 24 || zonemm > 59 )
        wrongformat = true;
    if(hh==24 && mm==0 && ss==0)
        hh=0;

	if ( wrongformat) {
		XQThrow(XPath2TypeCastException,X("XSTimeImpl::setTime"), X("Invalid representation of time [err:FORG0001]"));
	}
	
  timezone_ = new Timezone(zonepos, zonehh,zonemm);
  
  _hh = context->getItemFactory()->createNonNegativeInteger(hh, context);
  _mm = context->getItemFactory()->createNonNegativeInteger(mm, context);
  _ss = context->getItemFactory()->createDecimal(ss, context);
}
