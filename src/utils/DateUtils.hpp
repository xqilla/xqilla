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

#ifndef _DATEUTILS_HPP
#define _DATEUTILS_HPP

#include <time.h>

#include <xqilla/context/DynamicContext.hpp>
#include "Date.hpp"
#include <xqilla/mapm/m_apm.h>
#include <xqilla/items/ATDateOrDerived.hpp>
#include <xqilla/items/ATDateTimeOrDerived.hpp>

XERCES_CPP_NAMESPACE_BEGIN
class XMLBuffer;
XERCES_CPP_NAMESPACE_END

/** Class with static methods for dealing with date operations */
class DateUtils
{
public:

  /**
   * Constants used when doing date math
   */
  static const int g_secondsPerHour, g_secondsPerMinute, g_secondsPerDay, g_minutesPerHour, g_hoursPerDay;

  /**
   * Helper function that appends the specified number with the requested precision
   * to the buffer (by adding 0s before the number so that it always has minDigits digits)
   */
  static void formatNumber(int value, int minDigits, XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer& buffer);
  
  /** 
   * Helper function for adding durations to dateTimes
   * Returns the greatest integer less than or equal to a/b
   */
  static int fQuotient(int a, int b);

  /** 
   * Helper function for adding durations to dateTimes
   * Returns the greatest integer less than or equal to a/b
   */
  static int fQuotient(double a, double b);

  /**
   * Helper function for adding durations to dateTimes
   * Mod function
   */
  static int modulo(int a, int b);

  /**
   * Helper function for adding durations to dateTimes
   * Mod function for seconds part
   */
  static double modulo(double a, double b);

  /**
   * Helper function for adding durations to dateTimes
   * Mod function for seconds part
   */
  static MAPM modulo(MAPM a, MAPM b);

  /**
   * Helper function for adding durations for dateTimes
   * Returns fQuotient(a - low, high - low)
   */
  static int fQuotient(int a, int low, int high);

  /**
   * Helper function for adding durations for dateTimes
   * Returns modulow(a - low, high - low)
   */
  static int modulo(int a, int low, int high);

  /**
   * Returns the maximum day of the given month for the given year
   * month - Value between 1 (January) and 12 (December)
   */
  static int maximumDayInMonthFor(int yearValue, int monthValue);

  /**
   * Returns the number of days in the given year
   */
  static int daysInYear(int yearValue);

  /**
   * Returns a Date representing the given Date as well as the given number
   * of days.
   */
  static Date addDaysToDate(Date &day, int days);

  /**
   * Returns the current date as an ATDate
   */
  static const ATDateOrDerived::Ptr getCurrentDate(const DynamicContext* context);

  /**
   * Returns the current date and time as an ATDateTime
   */
  static const ATDateTimeOrDerived::Ptr getCurrentDateTime(const DynamicContext* context);

  static void initialize();
  static void terminate();
  static struct tm *threadsafe_localtime(const time_t *timep, struct tm *result);
  static struct tm *threadsafe_gmtime(const time_t *timep, struct tm *result);
};

#endif // _DATEUTILS_HPP

