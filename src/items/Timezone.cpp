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


#include "../config/xqilla_config.h"
#include <assert.h>

#include <xqilla/items/Timezone.hpp>
#include <xqilla/exceptions/XPath2TypeCastException.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include "../utils/DateUtils.hpp"
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/ATDurationOrDerived.hpp>
#include <xqilla/context/ItemFactory.hpp>

#include <xercesc/util/XMLString.hpp>
#include <xercesc/util/XMLUniDefs.hpp>
#include <xercesc/framework/XMLBuffer.hpp>

static const int g_maxHour = 14;

Timezone::Timezone(int minutes) {
  init(minutes);
  validate();
}

Timezone::Timezone(const ATDecimalOrDerived::Ptr &hour, const ATDecimalOrDerived::Ptr &minute, const DynamicContext* context) {
  _hh=abs(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::parseInt(hour->asString(context)));
  _mm=abs(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::parseInt(minute->asString(context)));
  _positive = (!hour->isNegative() && !minute->isNegative());
  
  validate();
}

Timezone::Timezone(const ATDurationOrDerived::Ptr &duration, const DynamicContext* context) {
  if(!duration->getSeconds()->isZero())
    XQThrow(XPath2TypeCastException ,X("Timezone::Timezone"), X("Timezone must have an integral number of minutes [err:FODT0003]."));
  int minutes=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::parseInt(duration->getDays()->asString(context)) * DateUtils::g_minutesPerHour * DateUtils::g_hoursPerDay +
              XERCES_CPP_NAMESPACE_QUALIFIER XMLString::parseInt(duration->getHours()->asString(context)) * DateUtils::g_minutesPerHour +
              XERCES_CPP_NAMESPACE_QUALIFIER XMLString::parseInt(duration->getMinutes()->asString(context));

  if (duration->isNegative())
    minutes = -minutes;

  init(minutes);
  validate();
}

Timezone::Timezone(bool positive, int hour, int minute) {
  _hh = hour;
  _mm = minute;
  _positive = positive;
  validate();
}

void Timezone::init(int minutes)
{
  // get hour
  _hh = abs( minutes ) / DateUtils::g_minutesPerHour;

  // get minute
  _mm = abs( minutes ) % DateUtils::g_minutesPerHour;

  _positive = (minutes>=0);
}

void Timezone::validate() const {
  // Check that we have a valid timezone
  if ( _hh > g_maxHour || (_hh == g_maxHour && _mm > 0)) {
    XQThrow(XPath2TypeCastException ,X("Timezone::Timezone"), X("Timezone outside of valid range created [err:FODT0003]."));
  }
  if ( (_hh > 0 && _mm < 0) || (_hh < 0 && _mm > 0)) {
    XQThrow(XPath2TypeCastException ,X("Timezone::Timezone"), X("Invalid timezone [err:FODT0003]."));
  }
}

Timezone::Timezone(const Timezone & other) {
  _hh = other._hh;
  _mm = other._mm;
  _positive = other._positive;
}

bool Timezone::equals(const Timezone::Ptr &other) const {
  return (_hh == other->_hh && _mm == other->_mm && _positive == other->_positive);
}

bool Timezone::greaterThan(const Timezone::Ptr &other) const {
  return (getTimezoneAsMinutes()>other->getTimezoneAsMinutes());
}

bool Timezone::lessThan(const Timezone::Ptr &other) const {
  return (getTimezoneAsMinutes()<other->getTimezoneAsMinutes());
}

const int Timezone::getTimezoneAsMinutes() const {
  return (_hh*DateUtils::g_minutesPerHour+_mm) * (_positive?+1:-1);
}

ATDurationOrDerived::Ptr Timezone::asDayTimeDuration(const DynamicContext* context) const {
  XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buffer(1023, context->getMemoryManager());
  if(!_positive)
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chDash);
  buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P);
  buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T);
  DateUtils::formatNumber(_hh,2,buffer);
  buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_H);
  DateUtils::formatNumber(_mm,2,buffer);
  buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_M);        

  return context->getItemFactory()->createDayTimeDuration(buffer.getRawBuffer(), context);
}

const XMLCh* Timezone::asString(const DynamicContext* context) const {
  if (_hh == 0 && _mm == 0)
	  return XPath2Utils::asStr(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_Z,context->getMemoryManager());
  
  XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buffer(1023, context->getMemoryManager());
  if(_positive)
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chPlus);
  else
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chDash);
  DateUtils::formatNumber(_hh,2,buffer);
  buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chColon);
  DateUtils::formatNumber(_mm,2,buffer);
  
  return context->getMemoryManager()->getPooledString(buffer.getRawBuffer());
}

const XMLCh* Timezone::printTimezone(const DynamicContext* context) const {
  
  XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buffer(1023, context->getMemoryManager());
  if(!_positive)
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chDash);
  DateUtils::formatNumber(_hh,2,buffer);
  buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chColon);
  DateUtils::formatNumber(_mm,2,buffer);
  
  return context->getMemoryManager()->getPooledString(buffer.getRawBuffer());
}


