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

#include "../config/xqilla_config.h"
#include <assert.h>
#include "TotalOrderComparison.hpp"
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include "../utils/DateUtils.hpp"
#include <xqilla/items/Numeric.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/items/ATDateOrDerived.hpp>
#include <xqilla/items/ATDateTimeOrDerived.hpp>
#include <xqilla/items/ATTimeOrDerived.hpp>
#include <xqilla/items/ATDurationOrDerived.hpp>
#include <xqilla/items/ATGDayOrDerived.hpp>
#include <xqilla/items/ATGMonthDayOrDerived.hpp>
#include <xqilla/items/ATGMonthOrDerived.hpp>
#include <xqilla/items/ATGYearOrDerived.hpp>
#include <xqilla/items/ATGYearMonthOrDerived.hpp>
#include <xqilla/items/DatatypeFactory.hpp>

TotalOrderComparison::TotalOrderComparison(const VectorOfASTNodes &args, bool greaterThan, XPath2MemoryManager* memMgr)
  : ComparisonOperator(NULL, args, memMgr)
{
	_greaterThan = greaterThan;
}

bool TotalOrderComparison::execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const
{
  // take care of Numeric types first
  if(atom1->isNumericValue()) {
    if(atom2->isNumericValue()) {
      if (_greaterThan) {
        return ((Numeric*)(const AnyAtomicType*)atom1)->greaterThan((Numeric*)(const AnyAtomicType*)atom2, context);
      }  else {
        return ((Numeric*)(const AnyAtomicType*)atom1)->lessThan((Numeric*)(const AnyAtomicType*)atom2, context);
      }
    } else {
      XQThrow(XPath2ErrorException,X("TotalOrderComparison::collapseTreeInternal"), X("An attempt to compare a numeric type to a non numeric type has occurred"));
    }
  }

  switch(atom1->getPrimitiveTypeIndex()) {
    case AnyAtomicType::DATE:
    {
      if(atom2->getPrimitiveTypeIndex() != AnyAtomicType::DATE)
        XQThrow(XPath2ErrorException,X("TotalOrderComparison::collapseTreeInternal"), X("An attempt to compare a date type to a non date type has occurred"));
      if (_greaterThan) {
        return ((ATDateOrDerived*)(const AnyAtomicType*)atom1)->greaterThan((ATDateOrDerived*)(const AnyAtomicType*)atom2, context);
      }  else {
        return ((ATDateOrDerived*)(const AnyAtomicType*)atom1)->lessThan((ATDateOrDerived*)(const AnyAtomicType*)atom2, context);
      }
    }
    case AnyAtomicType::TIME:
    {
      if(atom2->getPrimitiveTypeIndex() != AnyAtomicType::TIME)
        XQThrow(XPath2ErrorException,X("TotalOrderComparison::collapseTreeInternal"), X("An attempt to compare a time type to a non time type has occurred"));
      if (_greaterThan) {
        return ((ATTimeOrDerived*)(const AnyAtomicType*)atom1)->greaterThan((ATTimeOrDerived*)(const AnyAtomicType*)atom2, context);
      }  else {
        return ((ATTimeOrDerived*)(const AnyAtomicType*)atom1)->lessThan((ATTimeOrDerived*)(const AnyAtomicType*)atom2, context);
      }
    }
    case AnyAtomicType::DATE_TIME:
    {
      if(atom2->getPrimitiveTypeIndex() != AnyAtomicType::DATE_TIME)
        XQThrow(XPath2ErrorException,X("TotalOrderComparison::collapseTreeInternal"), X("An attempt to compare a dateTime type to a non dateTime type has occurred"));
      if (_greaterThan) {
        return ((ATDateTimeOrDerived*)(const AnyAtomicType*)atom1)->greaterThan((ATDateTimeOrDerived*)(const AnyAtomicType*)atom2, context);
      }  else {
        return ((ATDateTimeOrDerived*)(const AnyAtomicType*)atom1)->lessThan((ATDateTimeOrDerived*)(const AnyAtomicType*)atom2, context);
      }
    }
    case AnyAtomicType::DURATION:
    {
      if(atom2->getPrimitiveTypeIndex() != AnyAtomicType::DURATION)
        XQThrow(XPath2ErrorException,X("TotalOrderComparison::collapseTreeInternal"), X("An attempt to compare a duration type to a non duration type has occurred"));
      if (_greaterThan) {
        return ((ATDurationOrDerived*)(const AnyAtomicType*)atom1)->greaterThan((ATDurationOrDerived*)(const AnyAtomicType*)atom2, context);
      }  else {
        return ((ATDurationOrDerived*)(const AnyAtomicType*)atom1)->lessThan((ATDurationOrDerived*)(const AnyAtomicType*)atom2, context);
      }
    }
    case AnyAtomicType::G_DAY:
    {
      if(atom2->getPrimitiveTypeIndex() != AnyAtomicType::G_DAY)
        XQThrow(XPath2ErrorException,X("TotalOrderComparison::collapseTreeInternal"), X("An attempt to compare a gDay type to a non gDay type has occurred"));
      if (_greaterThan) {
        return ((ATGDayOrDerived*)(const AnyAtomicType*)atom1)->greaterThan((ATGDayOrDerived*)(const AnyAtomicType*)atom2, context);
      }  else {
        return ((ATGDayOrDerived*)(const AnyAtomicType*)atom1)->lessThan((ATGDayOrDerived*)(const AnyAtomicType*)atom2, context);
      }
    }
    case AnyAtomicType::G_MONTH:
    {
      if(atom2->getPrimitiveTypeIndex() != AnyAtomicType::G_MONTH)
        XQThrow(XPath2ErrorException,X("TotalOrderComparison::collapseTreeInternal"), X("An attempt to compare a gMonth type to a non gMonth type has occurred"));
      if (_greaterThan) {
        return ((ATGMonthOrDerived*)(const AnyAtomicType*)atom1)->greaterThan((ATGMonthOrDerived*)(const AnyAtomicType*)atom2, context);
      }  else {
        return ((ATGMonthOrDerived*)(const AnyAtomicType*)atom1)->lessThan((ATGMonthOrDerived*)(const AnyAtomicType*)atom2, context);
      }
    }
    case AnyAtomicType::G_MONTH_DAY:
    {
      if(atom2->getPrimitiveTypeIndex() != AnyAtomicType::G_MONTH_DAY)
        XQThrow(XPath2ErrorException,X("TotalOrderComparison::collapseTreeInternal"), X("An attempt to compare a gMonthDay type to a non gMonthDay type has occurred"));
     if (_greaterThan) {
        return ((ATGMonthDayOrDerived*)(const AnyAtomicType*)atom1)->greaterThan((ATGMonthDayOrDerived*)(const AnyAtomicType*)atom2, context);
      }  else {
        return ((ATGMonthDayOrDerived*)(const AnyAtomicType*)atom1)->lessThan((ATGMonthDayOrDerived*)(const AnyAtomicType*)atom2, context);
      }
    }
    case AnyAtomicType::G_YEAR:
    {
      if(atom2->getPrimitiveTypeIndex() != AnyAtomicType::G_YEAR)
        XQThrow(XPath2ErrorException,X("TotalOrderComparison::collapseTreeInternal"), X("An attempt to compare a GYear type to a non GYear type has occurred"));
      if (_greaterThan) {
        return ((ATGYearOrDerived*)(const AnyAtomicType*)atom1)->greaterThan((ATGYearOrDerived*)(const AnyAtomicType*)atom2, context);
      }  else {
        return ((ATGYearOrDerived*)(const AnyAtomicType*)atom1)->lessThan((ATGYearOrDerived*)(const AnyAtomicType*)atom2, context);
      }
    }
    case AnyAtomicType::G_YEAR_MONTH:
    {
      if(atom2->getPrimitiveTypeIndex() != AnyAtomicType::G_YEAR_MONTH)
        XQThrow(XPath2ErrorException,X("TotalOrderComparison::collapseTreeInternal"), X("An attempt to compare a (const ATGYearMonthOrDerived::Ptr )atom type to a non gYearMonth type has occurred"));
      if (_greaterThan) {
        return ((ATGYearMonthOrDerived*)(const AnyAtomicType*)atom1)->greaterThan((ATGYearMonthOrDerived*)(const AnyAtomicType*)atom2, context);
      }  else {
        return ((ATGYearMonthOrDerived*)(const AnyAtomicType*)atom1)->lessThan((ATGYearMonthOrDerived*)(const AnyAtomicType*)atom2, context);
      }
    }
    default:
      XQThrow(XPath2ErrorException,X("TotalOrderComparison::collapseTreeInternal"), X("Total ordering is not defined for the provided arguments"));
  }// switch
  XQThrow(XPath2ErrorException, X("TotalOrderComparison::collapseTreeInternal"), X("Total ordering is not defined for the provided arguments"));
}


