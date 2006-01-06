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
#include "DateUtils.hpp"
#include <xercesc/framework/XMLBuffer.hpp>
#include <xercesc/util/XMLUniDefs.hpp>
#include <stdio.h> // for sprintf
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/items/ATDateOrDerived.hpp>
#include <xqilla/items/ATDateTimeOrDerived.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/exceptions/XPath2TypeCastException.hpp>
#include <math.h>

#include <xercesc/util/Mutexes.hpp>

const int DateUtils::g_secondsPerMinute = 60;
const int DateUtils::g_minutesPerHour = 60;
const int DateUtils::g_hoursPerDay = 24;
const int DateUtils::g_secondsPerHour = DateUtils::g_secondsPerMinute*DateUtils::g_minutesPerHour;
const int DateUtils::g_secondsPerDay = DateUtils::g_secondsPerHour*DateUtils::g_hoursPerDay;

void DateUtils::formatNumber(int value, int minDigits, XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer& buffer)
{
  bool bIsNegative=false;
  if(value<0)
  {
    bIsNegative=true;
    value=-value;
  }
  XMLCh tmpBuff[19];
  XERCES_CPP_NAMESPACE_QUALIFIER XMLString::binToText(value,tmpBuff,18,10);
  if(bIsNegative)
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chDash);
  for(int len=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(tmpBuff);len<minDigits;len++)
    buffer.append(XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0);
  buffer.append(tmpBuff);
}

int DateUtils::fQuotient( int a, int b) {
  if (b == 0)
    return 0;

  return (int)floor(a/(double)b);
}

int DateUtils::fQuotient( double a, double b) {
  if (b == 0)
    return 0;

  return (int)floor(a/(double)b);
}

int DateUtils::modulo( int a, int b)  {
   return a - fQuotient(a, b)*b;
}

double DateUtils::modulo( double a, double b) {
   return a - fQuotient(a, b)*b;
}

int DateUtils::fQuotient(int a, int low, int high ) {
    return fQuotient(a-low,high-low);
}

int DateUtils::modulo(int a, int low, int high ) {
    return modulo(a - low, high-low) + low;
}

// modulo(a,b) = a - (floor(a / b) * b)
MAPM DateUtils::modulo( MAPM a, MAPM b)  {
  MAPM quotient=a/b;
  MAPM result=a - (quotient.floor() * b);
  return result;
}

int DateUtils::maximumDayInMonthFor(MAPM yearValue, MAPM monthValue) {
    int year=asInt(yearValue);
    int month=asInt(monthValue);
    int M = modulo(month,1,13);
    int Y = year + fQuotient(month,1,13);
  if ( M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12 )
    return 31;
  else if ( M == 4 || M == 6 || M == 9 || M == 11 )
    return 30;
  else if ( M == 2 && modulo(Y,4) == 0 && ( modulo(Y,400) == 0 || modulo(Y,100) != 0 ) )
    return 29;
  else
    return 28;
}

int DateUtils::daysInYear(int yearValue) {
  if (isLeapYear(yearValue))
    return 366;
  else 
    return 365;
}

bool DateUtils::isLeapYear(MAPM year)
{
    return modulo(year,4) == 0 && ( modulo(year,400) == 0 || modulo(year,100) != 0 );
}

int DateUtils::asInt(MAPM num) 
{
  if(num < INT_MIN || num > INT_MAX) {
    XQThrow(XPath2TypeCastException, X("DateUtils::asInt"), X("Invalid representation of an int"));
  } else {
    char out_string[256];
    num.toIntegerString(out_string);
    return atoi(out_string);
  }
}

static int days_before_month[] =  { 0, 
                                    0+31, 
                                    0+31+28, 
                                    0+31+28+31, 
                                    0+31+28+31+30, 
                                    0+31+28+31+30+31, 
                                    0+31+28+31+30+31+30, 
                                    0+31+28+31+30+31+30+31, 
                                    0+31+28+31+30+31+30+31+31, 
                                    0+31+28+31+30+31+30+31+31+30, 
                                    0+31+28+31+30+31+30+31+31+30+31, 
                                    0+31+28+31+30+31+30+31+31+30+31+30
                                  };
static int days_before_month_leap[] = { 0, 
                                        0+31, 
                                        0+31+29, 
                                        0+31+29+31, 
                                        0+31+29+31+30, 
                                        0+31+29+31+30+31, 
                                        0+31+29+31+30+31+30, 
                                        0+31+29+31+30+31+30+31, 
                                        0+31+29+31+30+31+30+31+31, 
                                        0+31+29+31+30+31+30+31+31+30, 
                                        0+31+29+31+30+31+30+31+31+30+31, 
                                        0+31+29+31+30+31+30+31+31+30+31+30
                                      };

MAPM DateUtils::convertDMY2Absolute(MAPM day, MAPM month, MAPM year)
{
    MAPM prevYear = year-1;
    MAPM absolute = ( prevYear * 365 ) + ( prevYear / 4 ).floor() - (prevYear / 100).floor() + (prevYear / 400).floor();
    if(isLeapYear(year))
        absolute+=days_before_month_leap[asInt(month)-1];
    else
        absolute+=days_before_month[asInt(month)-1];
    absolute+=day;
    return absolute;
}

static int days_in_400_years = 400*365 + 400/4 - 400/100 + 400/400;
static int days_in_100_years = 100*365 + 100/4 - 100/100;
static int days_in_4_years   = 4*365 + 4/4;
static int days_in_1_years   = 1*365;

void DateUtils::convertAbsolute2DMY(MAPM absolute, MAPM& day, MAPM& month, MAPM& year)
{
    bool bBC=false;
    if(absolute<0)
    {
        bBC=true;
        absolute=absolute.abs();
    }
    month=12;
    day=31;
    year = (absolute / days_in_400_years).floor() * 400;
    absolute = modulo(absolute, days_in_400_years);

    year += (absolute / days_in_100_years).floor() * 100;
    absolute = modulo(absolute, days_in_100_years);

    year += (absolute / days_in_4_years).floor() * 4;
    absolute = modulo(absolute, days_in_4_years);

    if(absolute != 0)
    {
        for(int i=0;i<3;i++)
        {
            if(absolute < days_in_1_years)
                break;
            year++;
            absolute-=days_in_1_years;
        }

        if(absolute != 0)
        {
            year++;
            if(bBC)
                absolute=daysInYear(asInt(year))-absolute;
            int* days=isLeapYear(year)?days_before_month_leap:days_before_month;
            for(int i=11; i>=0; i--)
            {
                if(absolute > days[i])
                {
                    month = i+1;
                    day = absolute-days[i];
                    break;
                }
            }
        }
    }
    if(bBC)
        year=year.neg();
}

const ATDateOrDerived::Ptr DateUtils::getCurrentDate(const DynamicContext* context) 
{
  XPath2MemoryManager* memMgr = context->getMemoryManager();
  // We get the current time and adjust it to our timezone.  We then set
  // this timezone in the Date object.
  time_t curDate=context->getCurrentTime();
  // Note using localtime uses the tzset() function used by
  // DateUtils::getImplicitTimezone.  This function and getImplicitTimezone
  // MUST get the same value in order for the correct time to be stored.
  struct tm time_struct;
  struct tm* curLocalDate=threadsafe_localtime(&curDate, &time_struct);
  char szDate[256];

  sprintf(szDate,"%04d-%02d-%02d",curLocalDate->tm_year+1900, curLocalDate->tm_mon+1, curLocalDate->tm_mday);
  // no need to add timezone, it's already compensated for in localtime
  // date.setTimezone(Timezone(XSDecimal(DateUtils::getImplicitTimezone(), context->getMemoryManager())));
  return context->getItemFactory()->createDate(memMgr->getPooledString(szDate), context);
}

const ATDateTimeOrDerived::Ptr DateUtils::getCurrentDateTime(const DynamicContext* context) 
{
  XPath2MemoryManager* memMgr = context->getMemoryManager();
  // We get the current time and adjust it to our timezone.  We then set
  // this timezone in the DateTime object.
  time_t curDate=context->getCurrentTime();
  // Note using localtime uses the tzset() function used by
  // DateUtils::getImplicitTimezone.  This function and getImplicitTimezone
  // MUST get the same value in order for the correct time to be stored.
  struct tm time_struct;
  struct tm* curLocalDate=threadsafe_localtime(&curDate, &time_struct);
  char szDate[256];

  sprintf(szDate,"%04d-%02d-%02dT%02d:%02d:%02dZ", 
          curLocalDate->tm_year+1900,
          curLocalDate->tm_mon+1,
          curLocalDate->tm_mday,
          curLocalDate->tm_hour,
          curLocalDate->tm_min,
          curLocalDate->tm_sec);

  // no need to add timezone, it's already compensated for in localtime
  // dateTime.setTimezone(Timezone(XSDecimal(DateUtils::getImplicitTimezone(), context->getMemoryManager())));
  return context->getItemFactory()->createDateTime(memMgr->getPooledString(szDate), context);
}

static XERCES_CPP_NAMESPACE_QUALIFIER XMLMutex *time_mutex = 0;

void DateUtils::initialize()
{
  if(time_mutex == 0) {
    time_mutex = new XERCES_CPP_NAMESPACE_QUALIFIER XMLMutex();
  }
}

void DateUtils::terminate()
{
  delete time_mutex;
  time_mutex = 0;
}

struct tm *DateUtils::threadsafe_localtime(const time_t *timep, struct tm *result)
{
  XERCES_CPP_NAMESPACE_QUALIFIER XMLMutexLock lock(time_mutex);

  struct tm *tmp = ::localtime(timep);
  memcpy(result, tmp, sizeof(struct tm));
  return result;
}

struct tm *DateUtils::threadsafe_gmtime(const time_t *timep, struct tm *result)
{
  XERCES_CPP_NAMESPACE_QUALIFIER XMLMutexLock lock(time_mutex);

  struct tm *tmp = ::gmtime(timep);
  memcpy(result, tmp, sizeof(struct tm));
  return result;
}
