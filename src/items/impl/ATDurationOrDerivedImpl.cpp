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
#include "ATDurationOrDerivedImpl.hpp"
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/ATDoubleOrDerived.hpp>
#include <xqilla/exceptions/XPath2TypeCastException.hpp>
#include <xqilla/exceptions/IllegalArgumentException.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>
#include <xercesc/util/XMLUniDefs.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/framework/XMLBuffer.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/mapm/m_apm.h>
#include "../../utils/DateUtils.hpp"

ATDurationOrDerivedImpl::
ATDurationOrDerivedImpl(const XMLCh* typeURI, const XMLCh* typeName, const XMLCh* value, const DynamicContext* context): 
    ATDurationOrDerived(),
    _typeName(typeName),
    _typeURI(typeURI) { 
    
  // Lexical representation : PnYnMnDTnHnMnS

  setDuration(value, context);
  
  if(this->isInstanceOfType (FunctionConstructor::XMLChXPath2DatatypesURI, ATDurationOrDerived::fgDT_DAYTIMEDURATION, context)) {
    _durationType = DAY_TIME_DURATION;
  } else if (this->isInstanceOfType (FunctionConstructor::XMLChXPath2DatatypesURI, ATDurationOrDerived::fgDT_YEARMONTHDURATION, context)) {
    _durationType = YEAR_MONTH_DURATION;
  } else {
    _durationType = DURATION;
  }
}

ATDurationOrDerivedImpl::
ATDurationOrDerivedImpl(const XMLCh* typeURI, const XMLCh* typeName, 
                    const ATDecimalOrDerived::Ptr &year,const ATDecimalOrDerived::Ptr &month, 
                    const ATDecimalOrDerived::Ptr &day, const ATDecimalOrDerived::Ptr &hour, 
                    const ATDecimalOrDerived::Ptr &minute, const ATDecimalOrDerived::Ptr &sec,
                    bool isPositive, 
                    const DynamicContext* context):
    ATDurationOrDerived(),
    _isPositive(isPositive),
    _year(year), _month(month),
    _day(day), _hour(hour),
    _minute(minute), _sec(sec),
    _typeName(typeName), _typeURI(typeURI){
  if(this->isInstanceOfType (FunctionConstructor::XMLChXPath2DatatypesURI, ATDurationOrDerived::fgDT_DAYTIMEDURATION, context)) {
    _durationType = DAY_TIME_DURATION;
  } else if (this->isInstanceOfType (FunctionConstructor::XMLChXPath2DatatypesURI, ATDurationOrDerived::fgDT_YEARMONTHDURATION, context)) {
    _durationType = YEAR_MONTH_DURATION;
  } else {
    _durationType = DURATION;
  }
}

void *ATDurationOrDerivedImpl::getInterface(const XMLCh *name) const
{
  if(name == Item::gXQilla) {
    return (void*)this;
  }
  return 0;
}

/* Get the name of the primitive type (basic type) of this type 
 * (ie "decimal" for xs:decimal) */
const XMLCh* ATDurationOrDerivedImpl::getPrimitiveTypeName() const
{
  switch(_durationType) {
  case DAY_TIME_DURATION:
    return fgDT_DAYTIMEDURATION;
  case YEAR_MONTH_DURATION:
    return fgDT_YEARMONTHDURATION;
  default: break;
  }

  return this->getPrimitiveName();
}

const XMLCh* ATDurationOrDerivedImpl::getPrimitiveName()  {
  return XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DURATION;
}

/* Get the name of this type  (ie "integer" for xs:integer) */
const XMLCh* ATDurationOrDerivedImpl::getTypeName() const {
  return _typeName;
}

/* Get the namespace URI for this type */
const XMLCh* ATDurationOrDerivedImpl::getTypeURI() const {
  return _typeURI; 
}

AnyAtomicType::AtomicObjectType ATDurationOrDerivedImpl::getTypeIndex() {
  return AnyAtomicType::DURATION;
}

/* If possible, cast this type to the target type */
AnyAtomicType::Ptr ATDurationOrDerivedImpl::castAsInternal(AtomicObjectType targetIndex, const XMLCh* targetURI, const XMLCh* targetType, const DynamicContext* context) const {
  XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buf(1023, context->getMemoryManager());
  // checking if what we're casting to by using isTypeOrDerivedFrom is expensive so we will 
  // determine what we are casting to and then what type we actually are.

  if(context->isTypeOrDerivedFromType(targetURI, targetType, 
                                      FunctionConstructor::XMLChXPath2DatatypesURI, 
                                      ATDurationOrDerived::fgDT_YEARMONTHDURATION)) {
    //we're casting to a yearMonthDuration
 
    if (_durationType == DAY_TIME_DURATION) {
      // If ST is xdt:dayTimeDuration and TT is xdt:yearMonthDuration, the cast is permitted and returns a 
      // xdt:yearMonthDuration with value 0 months.
      buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P);
      buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0);
      buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_M);         
      return context->getItemFactory()->createDurationOrDerived(targetURI, targetType, buf.getRawBuffer(), context);
    } else if (_durationType == YEAR_MONTH_DURATION) {
      return context->getItemFactory()->createDurationOrDerived(targetURI, targetType, this->asString(context), context);
    } else {
      //else we're a duration and we must remove the day and time components
      if(this->_year->isZero()   && this->_month->isZero()) {
        buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P);
        buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0);
        buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_M);         
      } else {
        if ( !_isPositive ) {
          buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chDash); 
        }   
        buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P);   

        if(!this->_year->isZero()) {
          buf.append(this->_year->asString(context));
          buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_Y);
        }
        if(!this->_month->isZero()) {
          buf.append(this->_month->asString(context));
          buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_M);
        }   
      }
      return context->getItemFactory()->createDurationOrDerived(targetURI, targetType, buf.getRawBuffer(), context);
    }

  } else if (context->isTypeOrDerivedFromType(targetURI, targetType, 
                                              FunctionConstructor::XMLChXPath2DatatypesURI, 
                                              ATDurationOrDerived::fgDT_DAYTIMEDURATION)) {
    //we're casting to a dayTimeDuration

    if (_durationType == YEAR_MONTH_DURATION) {
      // If ST is xdt:yearMonthDuration and TT is xdt:dayTimeDuration, the cast is permitted and returns a 
      // xdt:dayTimeDuration with value 0.0 seconds.
      buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P);
      buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T);
      buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0);
      buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_M);         
      return context->getItemFactory()->createDurationOrDerived(targetURI, targetType, buf.getRawBuffer(), context);
    } else if (_durationType == DAY_TIME_DURATION) {
      return context->getItemFactory()->createDurationOrDerived(targetURI, targetType, this->asString(context), context);
    } else {
      //else we're a duration and we must remove the year and month components
      if (this->_day->isZero()    && this->_hour->isZero()  &&
          this->_minute->isZero() && this->_sec->isZero() ) {
        buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P);
        buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T);
        buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0);
        buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_S);
      } else {
        if ( !_isPositive ) {
          buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chDash); 
        }   
        buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P);   

        if(!this->_day->isZero()) {
          buf.append(this->_day->asString(context));
          buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_D);
        }
        
        // mandatory center 'T', if the time is not zero
        if(!(this->_hour->isZero() && this->_minute->isZero() && this->_sec->isZero())) {
          buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T);
  
          if(!this->_hour->isZero()) {
            buf.append(this->_hour->asString(context));
            buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_H);
          } 
          if(!this->_minute->isZero()) {
            buf.append(this->_minute->asString(context));
            buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_M);
          }
          if(!this->_sec->isZero()) {
            buf.append(this->_sec->asString(context));
            buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_S);
          }
        }
      }
      return context->getItemFactory()->createDurationOrDerived(targetURI, targetType, buf.getRawBuffer(), context);
    }

  } else {
    //else we're casting to a duration or some other type and the base castAs will handle it.
    return AnyAtomicType::castAsInternal(targetIndex, targetURI, targetType, context);
  }

  return 0;
}

/* returns the XMLCh* (canonical) representation of this type */
const XMLCh* ATDurationOrDerivedImpl::asString(const DynamicContext* context) const {
  XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buffer(1023, context->getMemoryManager());
  ATDurationOrDerived::Ptr toSerialize;
  if(_durationType != DURATION) {
    toSerialize = this->normalize(context);
  } else {
    toSerialize = this;
  } 
  
  
  // if the value of this duration is zero, return 'PT0S' or 'P0M'
  if(toSerialize->getYears()->isZero()   && toSerialize->getMonths()->isZero() &&
     toSerialize->getDays()->isZero()    && toSerialize->getHours()->isZero()  &&
     toSerialize->getMinutes()->isZero() && toSerialize->getSeconds()->isZero() ) {

    if(_durationType == YEAR_MONTH_DURATION) {
      buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P);
      buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0);
      buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_M);
    } else {
      buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P);
      buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T);
      buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0);
      buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_S);
    }
    
  } else {
    if ( !_isPositive ) {
      buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chDash);
    }
  
    // madatory leading 'P'
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P);

    if(!toSerialize->getYears()->isZero()) {
      buffer.append(toSerialize->getYears()->asString(context));
      buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_Y);
    }
    if(!toSerialize->getMonths()->isZero()) {
      buffer.append(toSerialize->getMonths()->asString(context));
      buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_M);
    }
    
    // append the day and time information if this is not a yearMonthDuration
    if(_durationType != YEAR_MONTH_DURATION) {
      if(!toSerialize->getDays()->isZero()) {
        buffer.append(toSerialize->getDays()->asString(context));
        buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_D);
      }
  
      // mandatory center 'T', if the time is not zero
      if(!(toSerialize->getHours()->isZero() && toSerialize->getMinutes()->isZero() && toSerialize->getSeconds()->isZero())) {
        buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T);
            
        if(!toSerialize->getHours()->isZero()) {
          buffer.append(toSerialize->getHours()->asString(context));
          buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_H);
        } 
        if(!toSerialize->getMinutes()->isZero()) {
          buffer.append(toSerialize->getMinutes()->asString(context));
          buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_M);
        }
        if(!toSerialize->getSeconds()->isZero()) {
          buffer.append(toSerialize->getSeconds()->asString(context));
          buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_S);
        }
      }
    }
  }
  return context->getMemoryManager()->getPooledString(buffer.getRawBuffer());
}

/* returns true if this duration is an instance of a xdt:dayTimeDuration */
bool ATDurationOrDerivedImpl::isDayTimeDuration() const {
  return _durationType == DAY_TIME_DURATION;
}

/* returns true if this duration is an instance of a xdt:yearMonthDuration */
bool ATDurationOrDerivedImpl::isYearMonthDuration() const {
  return _durationType == YEAR_MONTH_DURATION;
}

/* returns true if the two objects have the same boolean value
 * false otherwise */
bool ATDurationOrDerivedImpl::equals(const AnyAtomicType::Ptr &target, const DynamicContext* context) const {
  if(_durationType == DURATION || target->getPrimitiveTypeIndex() == DURATION) {
    return dayTimeEquals((const ATDurationOrDerived*)target.get(), context) &&
      yearMonthEquals((const ATDurationOrDerived*)target.get(), context);
  }
  else if(_durationType == DAY_TIME_DURATION && target->getPrimitiveTypeIndex() == DAY_TIME_DURATION) {
    return dayTimeEquals((const ATDurationOrDerived*)target.get(), context);
  }
  else if(_durationType == YEAR_MONTH_DURATION && target->getPrimitiveTypeIndex() == YEAR_MONTH_DURATION) {
    return yearMonthEquals((const ATDurationOrDerived*)target.get(), context);
  }
  else if((_durationType == YEAR_MONTH_DURATION && target->getPrimitiveTypeIndex() == DAY_TIME_DURATION) ||
          (_durationType == DAY_TIME_DURATION && target->getPrimitiveTypeIndex() == YEAR_MONTH_DURATION))
    return false;

  XQThrow(IllegalArgumentException,X("ATDurationOrDerivedImpl::equals"), X("Equality operator for given types not supported"));
  return false;
}

bool ATDurationOrDerivedImpl::dayTimeEquals(const ATDurationOrDerived::Ptr &target, const DynamicContext* context) const {
  MAPM ThisAsSeconds =_day->asMAPM() * DateUtils::g_secondsPerDay +
                      _hour->asMAPM() * DateUtils::g_secondsPerHour +
                      _minute->asMAPM() * DateUtils::g_secondsPerMinute +
                      _sec->asMAPM();
  MAPM TargetAsSeconds =target->getDays()->asMAPM() * DateUtils::g_secondsPerDay +
                        target->getHours()->asMAPM() * DateUtils::g_secondsPerHour +
                        target->getMinutes()->asMAPM() * DateUtils::g_secondsPerMinute +
                        target->getSeconds()->asMAPM();
  return isNegative() == target->isNegative() && ThisAsSeconds==TargetAsSeconds;
}

bool ATDurationOrDerivedImpl::yearMonthEquals(const ATDurationOrDerived::Ptr &target, const DynamicContext* context) const {
  MAPM ThisAsMonths =_year->asMAPM() * 12 +
                      _month->asMAPM();
  MAPM TargetAsMonths =target->getYears()->asMAPM() * 12 +
                        target->getMonths()->asMAPM();
  return isNegative() == target->isNegative() && ThisAsMonths==TargetAsMonths;
}

bool ATDurationOrDerivedImpl::lessThan(const ATDurationOrDerived::Ptr &other, const DynamicContext* context) const {

  const ATDurationOrDerivedImpl* otherImpl = (ATDurationOrDerivedImpl*)(const ATDurationOrDerived*)other;
  if(_durationType == DAY_TIME_DURATION && otherImpl->_durationType == DAY_TIME_DURATION ) {
    // if we are comparing xdt:dayTimeDurations //
    return dayTimeLessThan(other, context);
  } else if(_durationType == YEAR_MONTH_DURATION && otherImpl->_durationType == YEAR_MONTH_DURATION) {
    // if we are comparing xdt:yearMonthDuration's //
    return yearMonthLessThan(other, context);
    
  } else {
    // if we are trying to compare anything else -- error //
    XQThrow(IllegalArgumentException,X("ATDurationOrDerivedImpl::lessThan"), X("less-than operator for given types not supported"));
  }
  
}

bool ATDurationOrDerivedImpl::greaterThan(const ATDurationOrDerived::Ptr &other, const DynamicContext* context) const {

  const ATDurationOrDerivedImpl* otherImpl = (ATDurationOrDerivedImpl*)(const ATDurationOrDerived*)other;
  if(_durationType == DAY_TIME_DURATION && otherImpl->_durationType == DAY_TIME_DURATION) {
    // if we are comparing xdt:dayTimeDurations //
    return dayTimeGreaterThan(other, context);
  
  } else if(_durationType == YEAR_MONTH_DURATION && otherImpl->_durationType == YEAR_MONTH_DURATION) {
    // if we are comparing xdt:yearMonthDuration's //
    return yearMonthGreaterThan(other, context);
    
  } else {
    // if we are trying to compare anything else -- error //
    XQThrow(IllegalArgumentException,X("ATDurationOrDerivedImpl::greaterThan"), X("greater-than operator for given types not supported"));
  }
}

/** Compare two dayTimeDurations, return true if this < duration */
bool ATDurationOrDerivedImpl::dayTimeLessThan(const ATDurationOrDerived::Ptr &dayTimeDuration, const DynamicContext* context) const {
  ATDurationOrDerived::Ptr tdn = this->normalize(context);
  const ATDurationOrDerivedImpl* thisDurationNorm = (ATDurationOrDerivedImpl*)(const ATDurationOrDerived*)tdn;
  ATDurationOrDerived::Ptr odn = dayTimeDuration->normalize(context);
  const ATDurationOrDerivedImpl* otherDurationNorm = (ATDurationOrDerivedImpl*)(const ATDurationOrDerived*)odn;
  if ( thisDurationNorm->_isPositive != otherDurationNorm->_isPositive)
    return !_isPositive;  // if one is positive and the other is negative, then the lesser one is the negative one

  // now we know both 'this' and 'duration' have the same sign.
  // since the variables are always stored as non-negative integers,
  // if(this >= duration) {
  //   return false if we are positive
  //   return true  if we are negative
  // }
  // ie if(this >= duration) return !_isPositive
  if(( thisDurationNorm->_day->greaterThan(otherDurationNorm->_day, context)) ||
     ( thisDurationNorm->_day->equals((const AnyAtomicType::Ptr)otherDurationNorm->_day, context) && thisDurationNorm->_hour->greaterThan(otherDurationNorm->_hour, context)) ||
     ( thisDurationNorm->_day->equals((const AnyAtomicType::Ptr)otherDurationNorm->_day, context) && thisDurationNorm->_hour->equals((const AnyAtomicType::Ptr)otherDurationNorm->_hour, context) && thisDurationNorm->_minute->greaterThan(otherDurationNorm->_minute, context) ) ||
     ( thisDurationNorm->_day->equals((const AnyAtomicType::Ptr)otherDurationNorm->_day, context) && thisDurationNorm->_hour->equals((const AnyAtomicType::Ptr)otherDurationNorm->_hour, context) && thisDurationNorm->_minute->equals((const AnyAtomicType::Ptr)otherDurationNorm->_minute, context) && !(thisDurationNorm->_sec->lessThan(otherDurationNorm->_sec, context)) ) ) {
    return !_isPositive;
  }

  return _isPositive;
}

/** Compare two dayTimeDurations, return true if this > duration */
bool ATDurationOrDerivedImpl::dayTimeGreaterThan(const ATDurationOrDerived::Ptr &dayTimeDuration, const DynamicContext* context) const {
  ATDurationOrDerived::Ptr tdn = this->normalize(context);
  const ATDurationOrDerivedImpl* thisDurationNorm = (ATDurationOrDerivedImpl*)(const ATDurationOrDerived*)tdn;
  ATDurationOrDerived::Ptr odn = dayTimeDuration->normalize(context);
  const ATDurationOrDerivedImpl* otherDurationNorm = (ATDurationOrDerivedImpl*)(const ATDurationOrDerived*)odn;
  if ( thisDurationNorm->_isPositive != otherDurationNorm->_isPositive)
    return _isPositive;  // if one is positive and the other is negative, the greater one is the positive one

  // now we know both 'this' and 'duration' have the same sign.
  // since the variables are always stored as non-negative integers,
  // if(this <= duration) {
  //   return false if we are positive
  //   return true  if we are negative
  // }
  // ie if(this <= duration) return !_isPositive
  if(( thisDurationNorm->_day->lessThan(otherDurationNorm->_day, context)) ||
     ( thisDurationNorm->_day->equals((const AnyAtomicType::Ptr)otherDurationNorm->_day, context) && thisDurationNorm->_hour->lessThan(otherDurationNorm->_hour, context)) ||
     ( thisDurationNorm->_day->equals((const AnyAtomicType::Ptr)otherDurationNorm->_day, context) && thisDurationNorm->_hour->equals((const AnyAtomicType::Ptr)otherDurationNorm->_hour, context) && thisDurationNorm->_minute->lessThan(otherDurationNorm->_minute, context) ) ||
     ( thisDurationNorm->_day->equals((const AnyAtomicType::Ptr)otherDurationNorm->_day, context) && thisDurationNorm->_hour->equals((const AnyAtomicType::Ptr)otherDurationNorm->_hour, context) && thisDurationNorm->_minute->equals((const AnyAtomicType::Ptr)otherDurationNorm->_minute, context) && !(thisDurationNorm->_sec->greaterThan(otherDurationNorm->_sec, context)) ) ) 
    return !_isPositive;
	
  return _isPositive;
}


/** Compare two yearMonthDurations, return true if this < duration */
bool ATDurationOrDerivedImpl::yearMonthLessThan(const ATDurationOrDerived::Ptr &yearMonthDuration, const DynamicContext* context) const {
  ATDurationOrDerived::Ptr tdn = this->normalize(context);
  const ATDurationOrDerivedImpl* thisDurationNorm = (ATDurationOrDerivedImpl*)(const ATDurationOrDerived*)tdn;
  ATDurationOrDerived::Ptr odn = yearMonthDuration->normalize(context);
  const ATDurationOrDerivedImpl* otherDurationNorm = (ATDurationOrDerivedImpl*)(const ATDurationOrDerived*)odn;
  if ( _isPositive != otherDurationNorm->_isPositive)
    return !_isPositive;  // if one is positive and the other is negative, then the lesser one is the negative one

  // now we know both 'this' and 'duration' have the same sign.
  if ( thisDurationNorm->getYears()->greaterThan(otherDurationNorm->getYears(), context) ) {
    return !_isPositive;
  }
  else if ( thisDurationNorm->getYears()->equals((const AnyAtomicType::Ptr)otherDurationNorm->getYears(), context) && 
          !(thisDurationNorm->getMonths()->lessThan(otherDurationNorm->getMonths(), context) ) ) {
    return !_isPositive;
  }

  return _isPositive;  
}

/** Compare two yearMonthDurations, return true if this > duration */
bool ATDurationOrDerivedImpl::yearMonthGreaterThan(const ATDurationOrDerived::Ptr &yearMonthDuration, const DynamicContext* context) const {
  ATDurationOrDerived::Ptr tdn = this->normalize(context);
  const ATDurationOrDerivedImpl* thisDurationNorm = (ATDurationOrDerivedImpl*)(const ATDurationOrDerived*)tdn;
  ATDurationOrDerived::Ptr odn = yearMonthDuration->normalize(context);
  const ATDurationOrDerivedImpl* otherDurationNorm = (ATDurationOrDerivedImpl*)(const ATDurationOrDerived*)odn;
  
  if ( _isPositive != otherDurationNorm->_isPositive)
    return _isPositive;  // if one is positive and the other is negative, the greater one is the positive one
  
  // now we know both 'this' and 'duration' have the same sign.
  if ( thisDurationNorm->getYears()->lessThan(otherDurationNorm->getYears(), context) ) {
    return !_isPositive;
  }
  else if ( thisDurationNorm->getYears()->equals((const AnyAtomicType::Ptr)otherDurationNorm->getYears(), context) && 
          !(thisDurationNorm->getMonths()->greaterThan(otherDurationNorm->getMonths(), context) ) ) {
    return !_isPositive;
  }
  return _isPositive; 
}

/** Divide this duration by a number -- only available for xdt:dayTimeDuration
 *  and xdt:yearMonthDuration */
ATDurationOrDerived::Ptr ATDurationOrDerivedImpl::divide(const Numeric::Ptr &divisor, const DynamicContext* context) const {
  if(divisor->isNaN())
      XQThrow(IllegalArgumentException,X("ATDurationOrDerivedImpl::multiply"), X("Cannot multiply a duration by NaN [err:FOCA0005]."));

  if(_durationType == DAY_TIME_DURATION) {
    // if we are dividing a xdt:dayTimeDurations //
    return dayTimeDivide(divisor, context);
  
  } else if(_durationType == YEAR_MONTH_DURATION) { 
    // if we are comparing xdt:yearMonthDuration's //
    return yearMonthDivide(divisor, context);
    
  } else {
    // if we are trying to compare anything else -- error //
    XQThrow(IllegalArgumentException,X("ATDurationOrDerivedImpl::divide"), X("divide operator for given types not supported"));
  }

}

/** Divide this duration by a duration -- only available for xdt:dayTimeDuration
*  and xdt:yearMonthDuration */
ATDecimalOrDerived::Ptr ATDurationOrDerivedImpl::divide(const ATDurationOrDerived::Ptr &divisor, const DynamicContext* context) const {
  if(_durationType == DAY_TIME_DURATION) {
    // if we are dividing a xdt:dayTimeDurations //
    return dayTimeDivide(divisor, context);
  
  } else if(_durationType == YEAR_MONTH_DURATION) { 
    // if we are comparing xdt:yearMonthDuration's //
    return yearMonthDivide(divisor, context);
    
  } else {
    // if we are trying to compare anything else -- error //
    XQThrow(IllegalArgumentException,X("ATDurationOrDerivedImpl::divide"), X("divide operator for given types not supported"));
  }
}


/* Divide a xdt:dayTimeDuration by a xs:decimal */
ATDurationOrDerived::Ptr ATDurationOrDerivedImpl::dayTimeDivide(const Numeric::Ptr &divisor, const DynamicContext* context) const {

  if(divisor->isZero())
    XQThrow(IllegalArgumentException,X("ATDurationOrDerivedImpl::divide"), X("Overflow in duration operation [err:FODT0002]"));

  ATDecimalOrDerived::Ptr asSeconds = (const ATDecimalOrDerived::Ptr )this->asSeconds(context)->divide(divisor, context)->
                                       castAs(XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                              XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DECIMAL, context);

  return newDayTimeDuration(asSeconds, context);  
}

/* Divide a xdt:dayTimeDuration by a xdt:dayTimeDuration */
ATDecimalOrDerived::Ptr ATDurationOrDerivedImpl::dayTimeDivide(const ATDurationOrDerived::Ptr &divisor, const DynamicContext* context) const {
  ATDecimalOrDerived::Ptr result = (const ATDecimalOrDerived::Ptr )this->asSeconds(context)->divide(((const ATDurationOrDerivedImpl*)(const ATDurationOrDerived*)divisor)->asSeconds(context), context);
  return result;
}

/* Divide a xdt:yearMonthDuration by an xs:decimal */  
ATDurationOrDerived::Ptr ATDurationOrDerivedImpl::yearMonthDivide(const Numeric::Ptr &divisor, const DynamicContext* context) const {
  if(divisor->isZero())
    XQThrow(IllegalArgumentException,X("ATDurationOrDerivedImpl::divide"), X("Overflow in duration operation [err:FODT0002]"));

  ATDecimalOrDerived::Ptr i12 = context->getItemFactory()->createInteger(12,context);

  ATDecimalOrDerived::Ptr asMonths = (const ATDecimalOrDerived::Ptr )_year->multiply(i12, context)->
                                       add(_month, context)->divide(divisor, context)->round(context)->
                                       castAs(XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                              XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DECIMAL, context);
  
  if (this->isNegative()) {
    asMonths = (const ATDecimalOrDerived::Ptr )asMonths->invert(context);
  }
  
  return newYearMonthDuration(asMonths, context);
}

/* Divide a xdt:yearMonthDuration by an xdt:yearMonthDuration */  
ATDecimalOrDerived::Ptr ATDurationOrDerivedImpl::yearMonthDivide(const ATDurationOrDerived::Ptr &divisor, const DynamicContext* context) const {
  MAPM asMonths1 = _year->asMAPM() * 12 + _month->asMAPM();
  if (this->isNegative()) {
    asMonths1 = asMonths1.neg();
  }
  MAPM asMonths2 = divisor->getYears()->asMAPM() * 12 + divisor->getMonths()->asMAPM();
  if (divisor->isNegative()) {
    asMonths2 = asMonths2.neg();
  }
  MAPM result = asMonths1 / asMonths2;
  return context->getItemFactory()->createDecimal(result, context);
}

AnyAtomicType::AtomicObjectType ATDurationOrDerivedImpl::getPrimitiveTypeIndex() const {
  return _durationType;
}

/** Multiply this duration by a number -- only available for xdt:dayTimeDuration
 *  and xdt:yearMonthDuration */
ATDurationOrDerived::Ptr ATDurationOrDerivedImpl::multiply(const Numeric::Ptr &multiplier, const DynamicContext* context) const {
  if(multiplier->isNaN())
      XQThrow(IllegalArgumentException,X("ATDurationOrDerivedImpl::multiply"), X("Cannot multiply a duration by NaN [err:FOCA0005]."));

  if(_durationType == DAY_TIME_DURATION) {
    // multiplying an xdt:
    ATDecimalOrDerived::Ptr asSeconds = (const ATDecimalOrDerived::Ptr )this->asSeconds(context)->multiply(multiplier, context)->
                                        castAs(XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                               XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DECIMAL, context);
  
    return newDayTimeDuration(asSeconds, context);
  } else if(_durationType == YEAR_MONTH_DURATION) { 
    // multiplying an xdt:yearMonthDuration
    ATDecimalOrDerived::Ptr i12 = context->getItemFactory()->createInteger(12,context);
  
    ATDecimalOrDerived::Ptr asMonths = (const ATDecimalOrDerived::Ptr )_year->multiply(i12, context)->
                                       add(_month, context)->multiply(multiplier, context)->round(context)->
                                       castAs(XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                              XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DECIMAL, context);
    if (this->isNegative()) {
      asMonths = (const ATDecimalOrDerived::Ptr )asMonths->invert(context);
    }
     
    return newYearMonthDuration(asMonths, context);

  } else {
    // if we are trying to compare anything else -- error //
    XQThrow(IllegalArgumentException,X("ATDurationOrDerivedImpl::multiply"), X("multiply operator for given types not supported"));
  }

}

/** Add a duration to this duration -- only available for xdt:dayTimeDuration 
 *  and xdt:yearMonthDuration */
ATDurationOrDerived::Ptr ATDurationOrDerivedImpl::add(const ATDurationOrDerived::Ptr &other, const DynamicContext* context) const {
  if(this->isDayTimeDuration() && ((const ATDurationOrDerived*)other)->isDayTimeDuration()) {
    const ATDurationOrDerivedImpl* otherImpl = (ATDurationOrDerivedImpl*)(const ATDurationOrDerived*)other;
    Numeric::Ptr thisSeconds = this->asSeconds(context);
    Numeric::Ptr otherSeconds = otherImpl->asSeconds(context);
    Numeric::Ptr sum = thisSeconds->add(otherSeconds, context);
      
    return newDayTimeDuration(sum, context);
    
  } else if(this->isYearMonthDuration() && ((const ATDurationOrDerived*)other)->isYearMonthDuration() ) {
    const ATDecimalOrDerived::Ptr i12 = context->getItemFactory()->createInteger(12,context);
  
    Numeric::Ptr thisMonths = _year->multiply(i12, context)->add(_month, context);
    if(this->isNegative()) { thisMonths = thisMonths->invert(context); }
    
    Numeric::Ptr otherMonths = ((const ATDurationOrDerived*)other)->getYears()->multiply(i12, context)->add(((const ATDurationOrDerived*)other)->getMonths(), context);
    if(((const ATDurationOrDerived*)other)->isNegative()) { otherMonths = otherMonths->invert(context); }

    Numeric::Ptr sum = thisMonths->add(otherMonths, context);
       
    return newYearMonthDuration(sum, context);
  } else {
    XQThrow(IllegalArgumentException, X("ATDurationOrDerivedImpl::add"), X("add operation not supported for given types"));
  }

}

/** Subtract a duration from this duration -- only available for xdt:dayTimeDuration
 *  and xdt:yearMonthDuration */
ATDurationOrDerived::Ptr ATDurationOrDerivedImpl::subtract(const ATDurationOrDerived::Ptr &other, const DynamicContext* context) const {
  if(this->isDayTimeDuration() && ((const ATDurationOrDerived*)other)->isDayTimeDuration()) {
    const ATDurationOrDerivedImpl* otherImpl = (ATDurationOrDerivedImpl*)(const ATDurationOrDerived*)other;
    Numeric::Ptr thisSeconds = this->asSeconds(context);
    Numeric::Ptr otherSeconds = otherImpl->asSeconds(context);
    Numeric::Ptr diff = thisSeconds->subtract(otherSeconds, context);
      
    return newDayTimeDuration(diff, context);
    
  } else if(this->isYearMonthDuration() && ((const ATDurationOrDerived*)other)->isYearMonthDuration() ) {
    const ATDecimalOrDerived::Ptr i12 = context->getItemFactory()->createInteger(12,context);
  
    Numeric::Ptr thisMonths = _year->multiply(i12, context)->add(_month, context);
    if(this->isNegative()) { thisMonths = thisMonths->invert(context); }
    
    Numeric::Ptr otherMonths = ((const ATDurationOrDerived*)other)->getYears()->multiply(i12, context)->add(((const ATDurationOrDerived*)other)->getMonths(), context);
    if(((const ATDurationOrDerived*)other)->isNegative()) { otherMonths = otherMonths->invert(context); }

    Numeric::Ptr diff = thisMonths->subtract(otherMonths, context);
    return newYearMonthDuration(diff, context);
       
  } else {
    XQThrow(IllegalArgumentException, X("ATDurationOrDerivedImpl::subtract"), X("subtract operation not supported for given types"));
  }
}

const ATDecimalOrDerived::Ptr &ATDurationOrDerivedImpl::getYears() const {
  return _year;
}

const ATDecimalOrDerived::Ptr &ATDurationOrDerivedImpl::getMonths() const {
  return _month;
}

const ATDecimalOrDerived::Ptr &ATDurationOrDerivedImpl::getDays() const {
  return _day;
}

const ATDecimalOrDerived::Ptr &ATDurationOrDerivedImpl::getHours() const {
  return _hour;
}

const ATDecimalOrDerived::Ptr &ATDurationOrDerivedImpl::getMinutes() const {
  return _minute;
}

const ATDecimalOrDerived::Ptr &ATDurationOrDerivedImpl::getSeconds() const {
  return _sec;
}

bool ATDurationOrDerivedImpl::isNegative() const {
  return !_isPositive;
}

ATDurationOrDerived::Ptr ATDurationOrDerivedImpl::normalize(const DynamicContext* context) const {
  if(_durationType == DAY_TIME_DURATION) {
    // if we are comparing xdt:dayTimeDurations //
    return normalizeDayTimeDuration(context);
  
  } else if(_durationType == YEAR_MONTH_DURATION) {
    // if we are comparing xdt:yearMonthDuration's //
    return normalizeYearMonthDuration(context);
    
  } else {
    // if we are trying to compare anything else -- error //
    XQThrow(IllegalArgumentException,X("ATDurationOrDerivedImpl::normalize"), X("normalize for given type not supported"));
  }
}

ATDurationOrDerived::Ptr ATDurationOrDerivedImpl::normalizeDayTimeDuration(const DynamicContext* context) const {
  const ATDecimalOrDerived::Ptr zero = context->getItemFactory()->createInteger(0,context);

  // normalize
  MAPM asSeconds =((const ATDecimalOrDerived*)_day)->asMAPM() * DateUtils::g_secondsPerDay +
                  ((const ATDecimalOrDerived*)_hour)->asMAPM() * DateUtils::g_secondsPerHour +
                  ((const ATDecimalOrDerived*)_minute)->asMAPM() * DateUtils::g_secondsPerMinute +
                  ((const ATDecimalOrDerived*)_sec)->asMAPM().floor();  // take care of fractional seconds later
  
  MAPM day = (asSeconds / DateUtils::g_secondsPerDay).floor();
  MAPM remainder = DateUtils::modulo(asSeconds, DateUtils::g_secondsPerDay);

  MAPM hour = (remainder / DateUtils::g_secondsPerHour).floor();
  remainder = DateUtils::modulo(remainder, DateUtils::g_secondsPerHour);

  MAPM minute = (remainder / DateUtils::g_secondsPerMinute).floor();
  remainder = DateUtils::modulo(remainder, DateUtils::g_secondsPerMinute);

  MAPM sec = remainder + ((const ATDecimalOrDerived*)_sec)->asMAPM() - ((const ATDecimalOrDerived*)_sec)->asMAPM().floor();  // add frac. secs

  return new
      ATDurationOrDerivedImpl(this->getTypeURI(), this->getTypeName(), zero, zero,
                              context->getItemFactory()->createInteger(day, context),
                              context->getItemFactory()->createInteger(hour, context),
                              context->getItemFactory()->createInteger(minute, context),
                              context->getItemFactory()->createDecimal(sec, context),
                              _isPositive, context);
}

ATDurationOrDerived::Ptr ATDurationOrDerivedImpl::normalizeYearMonthDuration(const DynamicContext* context) const {
  const ATDecimalOrDerived::Ptr zero = context->getItemFactory()->createInteger(0,context);
  MAPM year = ((const ATDecimalOrDerived*)_year)->asMAPM()+(((const ATDecimalOrDerived*)_month)->asMAPM() / 12).floor();

  MAPM month = DateUtils::modulo(((const ATDecimalOrDerived*)_month)->asMAPM(),12);
  
  return new
      ATDurationOrDerivedImpl(this->getTypeURI(), this->getTypeName(),
                              context->getItemFactory()->createInteger(year, context),
                              context->getItemFactory()->createInteger(month, context),
                              zero, zero, zero, zero, _isPositive, context);
}

/* return this duration in forms of seconds -- only for dayTimeDuration */
ATDecimalOrDerived::Ptr ATDurationOrDerivedImpl::asSeconds(const DynamicContext* context) const {
  if(_durationType != DAY_TIME_DURATION) {
    XQThrow(IllegalArgumentException, X("ATDurationOrDerivedImpl::asSeconds"), X("asSeconds for given type not supported"));
  }
  
  MAPM asSeconds =((const ATDecimalOrDerived*)_day)->asMAPM() * DateUtils::g_secondsPerDay +
                  ((const ATDecimalOrDerived*)_hour)->asMAPM() * DateUtils::g_secondsPerHour +
                  ((const ATDecimalOrDerived*)_minute)->asMAPM() * DateUtils::g_secondsPerMinute +
                  ((const ATDecimalOrDerived*)_sec)->asMAPM();

  if(this->isNegative())
    asSeconds=asSeconds.neg();
  return context->getItemFactory()->createDecimal(asSeconds, context);
}

ATDurationOrDerived::Ptr ATDurationOrDerivedImpl::newDayTimeDuration(ATDecimalOrDerived::Ptr valueSeconds, const DynamicContext* context) const
{
  XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buf(1023, context->getMemoryManager());
  if(valueSeconds->isZero())
  {
    buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P);
    buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T);
    buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0);
    buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_S);
  }
  else
  {
    if (valueSeconds->isNegative()) {
      buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chDash);
      valueSeconds = (const ATDecimalOrDerived::Ptr )valueSeconds->invert(context);
    }
    buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P);
    buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T);
    buf.append(valueSeconds->asString(context));
    buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_S);
  }
  return context->getItemFactory()->createDayTimeDuration(buf.getRawBuffer(), context);
}

ATDurationOrDerived::Ptr ATDurationOrDerivedImpl::newYearMonthDuration(ATDecimalOrDerived::Ptr valueMonth, const DynamicContext* context) const
{
  XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buf(1023, context->getMemoryManager());
  if(valueMonth->isZero())
  {
    buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P);
    buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0);
    buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_M);
  }
  else
  {
    if (valueMonth->isNegative()) {
      buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chDash);
      valueMonth = (const ATDecimalOrDerived::Ptr )valueMonth->invert(context);
    }
    buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P);
    buf.append(valueMonth->asString(context));
    buf.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_M);
  }

  return context->getItemFactory()->createYearMonthDuration(buf.getRawBuffer(), context);
}

void ATDurationOrDerivedImpl::setDuration(const XMLCh* const s, const DynamicContext* context) {
    unsigned int length = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(s);
 
  if(s == 0) {
      XQThrow(XPath2TypeCastException,X("XSDurationImpl::setDuration"), X("Invalid representation of duration"));
  }
  
  // State variables etc.
  bool gotDot = false;
  bool gotDigit = false;
  bool stop = false;
  bool Texist = false;
  unsigned int pos = 0;
  long int tmpnum = 0;
  double decplace = 1;
  double tmpdec = 0;

  // defaulting values
  _isPositive = true;
  MAPM year = 0;
  MAPM month = 0;
  MAPM day = 0;
  MAPM hour = 0;
  MAPM minute = 0;
  MAPM sec = 0;

  int state = 0 ; // 0 = year / 1 = month / 2 = day / 3 = hour / 4 = minutes / 5 = sec
  XMLCh tmpChar;
  
  bool wrongformat = false;

  // check initial 'negative' sign and the P character

  if ( length > 1 && s[0] == L'-' && s[1] == L'P' ) {
    _isPositive = false;
    pos = 2;
  } else if (  length > 1 && s[0] == L'P' ) {
    _isPositive = true;
    pos = 1;
  } else {
    wrongformat = true;
  }

  
  while ( ! wrongformat && !stop && pos < length) {
    tmpChar = s[pos];
    pos++;
    switch(tmpChar) {

      // a dot, only will occur when parsing the second
      case L'.': {
        if (! gotDot && gotDigit) {
          gotDot = true;
          sec = tmpnum;
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
        if ( gotDot ) {
          decplace *= 10;          
        } 
        tmpnum *= 10;
        tmpnum +=  static_cast<int>(tmpChar - 0x0030);
        gotDigit = true;
        
        break;
      }    
      case L'Y' : {
        if ( state == 0 && gotDigit && !gotDot ) {
          year = tmpnum;
          state = 1;
          tmpnum = 0;                  
          gotDigit = false;
        } else {    
          
          wrongformat = true;
        }
        break;
      }
      case L'M' : {
        if ( gotDigit) {
          if ( state < 4 && Texist && !gotDot) {
            minute = tmpnum;
            state = 4;
            gotDigit = false;
            tmpnum = 0;                    
            break;
          } else if ( state < 2 && ! Texist && !gotDot) {
            month = tmpnum;
            state = 1;
            gotDigit = false;
            tmpnum = 0;                    
            break;
          }
        }
        
        wrongformat = true;        
        break;
      }
    case L'D' : {
        if ( state < 2 && gotDigit && !gotDot) {
          day = tmpnum;
          state = 2;
          gotDigit = false;
          tmpnum = 0;
        } else {          
          
          wrongformat = true;
        }
        break;
      
    }
    case L'T' : {
      if ( state < 3 && !gotDigit && !gotDot) {
        Texist = true;
      } else {
        
        wrongformat = true;
      }
      break;
    }
    case L'H' : {
      if ( state < 3 && gotDigit && Texist && !gotDot) {
        hour = tmpnum;
        state = 3;
        gotDigit = false;
        tmpnum = 0;
      } else {    
        
        wrongformat = true;
      }
      break;
    }
    case L'S' : {
      if ( state < 5 && gotDigit && Texist) {
        tmpdec =  tmpnum / decplace;        
        sec += tmpdec;        
        state = 5;
        gotDigit = false;
        tmpnum = 0;
      } else {    
        
        wrongformat = true;
      }      
      break;
    }
    default:
         wrongformat = true;
    }  
  }

  // check duration format
  if ( wrongformat || (Texist && state < 3) || gotDigit) {
    XQThrow(XPath2TypeCastException,X("ATDurationOrDerivedImpl::setDuration"), X("Invalid representation of duration"));
  }

  
  _year = context->getItemFactory()->createNonNegativeInteger(year, context);
  _month = context->getItemFactory()->createNonNegativeInteger(month, context);
  _day = context->getItemFactory()->createNonNegativeInteger(day, context);
  _hour = context->getItemFactory()->createNonNegativeInteger(hour, context);
  _minute = context->getItemFactory()->createNonNegativeInteger(minute, context);
  
  _sec = context->getItemFactory()->createDecimal(sec, context);
}
