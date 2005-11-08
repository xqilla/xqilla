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
#include <xqilla/operators/Minus.hpp>
#include <xqilla/items/ATDurationOrDerived.hpp>
#include <xqilla/items/ATDateTimeOrDerived.hpp>
#include <xqilla/items/ATDateOrDerived.hpp>
#include <xqilla/items/ATTimeOrDerived.hpp>
#include <xqilla/items/Numeric.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/context/DynamicContext.hpp>

/*static*/ const XMLCh Minus::name[]={ XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

Minus::Minus(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ArithmeticOperator(name, args, memMgr)
{
}

Item::Ptr Minus::execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const
{
  if(atom1 == NULLRCP || atom2 == NULLRCP) return 0;

  if(atom1->isNumericValue()) {
    if(atom2->isNumericValue()) {
      return (const Item::Ptr)((Numeric*)(const AnyAtomicType*)atom1)->subtract((const Numeric::Ptr )atom2, context);
    }
    else {
      XQThrow(XPath2ErrorException,X("Minus::collapseTreeInternal"), X("An attempt to subtract a non numeric type from a numeric type has occurred [err:XPTY0004]"));
    }
  }
  
  switch(atom1->getPrimitiveTypeIndex()) {
    case AnyAtomicType::DATE : {
      switch(atom2->getPrimitiveTypeIndex()) {
        case AnyAtomicType::DURATION : {
          const ATDurationOrDerived* duration = (const ATDurationOrDerived::Ptr )atom2;
          if(duration->isYearMonthDuration()) {
            return (const Item::Ptr)((ATDateOrDerived*)(const AnyAtomicType*)atom1)->subtractYearMonthDuration(duration, context);
          }
          else if(duration->isDayTimeDuration()) {
            return (const Item::Ptr)((ATDateOrDerived*)(const AnyAtomicType*)atom1)->subtractDayTimeDuration(duration, context);
          } else {
            XQThrow(XPath2ErrorException,X("Minus::collapseTreeInternal"), X("An invalid attempt to subtract from xs:date type has occurred [err:XPTY0004]"));
          }
        }
        case AnyAtomicType::DATE : {
          return (const Item::Ptr)((ATDateOrDerived*)(const AnyAtomicType*)atom1)->subtractDate((const ATDateOrDerived::Ptr )atom2, context);
        }
        default: {
          XQThrow(XPath2ErrorException,X("Minus::collapseTreeInternal"), X("An invalid attempt to subtract from xs:date type has occurred [err:XPTY0004]"));
        }
      }// switch
    }
    case AnyAtomicType::TIME : {
      switch(atom2->getPrimitiveTypeIndex()) {
        case AnyAtomicType::DURATION : {
          // assume dayTimeDuration, otherwise function will throw
          return (const Item::Ptr)((ATTimeOrDerived*)(const AnyAtomicType*)atom1)->subtractDayTimeDuration( (const ATDurationOrDerived::Ptr )atom2, context );
        }
        case AnyAtomicType::TIME : {
          return (const Item::Ptr)((ATTimeOrDerived*)(const AnyAtomicType*)atom1)->subtractTime((const ATTimeOrDerived::Ptr )atom2, context);
        }
        default: {
          XQThrow(XPath2ErrorException,X("Minus::collapseTreeInternal"), X("An invalid attempt to subtract from xs:time type has occurred [err:XPTY0004]"));
        }
      }// switch
    }
    case AnyAtomicType::DATE_TIME : {
      switch(atom2->getPrimitiveTypeIndex()) {
        case AnyAtomicType::DURATION : {
          const ATDurationOrDerived* duration = (const ATDurationOrDerived*)(const AnyAtomicType*)atom2;
          if(duration->isYearMonthDuration()) {
            return (const Item::Ptr)((ATDateTimeOrDerived*)(const AnyAtomicType*)atom1)->subtractYearMonthDuration(duration, context);
          }
          else if(duration->isDayTimeDuration()) {
            return (const Item::Ptr)((ATDateTimeOrDerived*)(const AnyAtomicType*)atom1)->subtractDayTimeDuration(duration, context);
          } else {
            XQThrow(XPath2ErrorException,X("Minus::collapseTreeInternal"), X("An invalid attempt to subtract from xs:dateTime type has occurred [err:XPTY0004]"));
          }
        }
        case AnyAtomicType::DATE_TIME : {
          return (const Item::Ptr)((ATDateTimeOrDerived*)(const AnyAtomicType*)atom1)->subtractDateTimeAsDayTimeDuration((const ATDateTimeOrDerived::Ptr )atom2, context);
        }
        default: {
          XQThrow(XPath2ErrorException,X("Minus::collapseTreeInternal"), X("An invalid attempt to subtract from xs:dateTime type has occurred [err:XPTY0004]"));
        }

      }// switch
    }
    case AnyAtomicType::DURATION : {
      switch(atom2->getPrimitiveTypeIndex()) {
        case AnyAtomicType::DURATION : {
          // this call will throw an error if the duration is of the wrong type
          return (const Item::Ptr)((ATDurationOrDerived*)(const AnyAtomicType*)atom1)->subtract((const ATDurationOrDerived::Ptr )atom2, context);
        }
        default: {
          XQThrow(XPath2ErrorException,X("Minus::collapseTreeInternal"), X("An invalid attempt to subtract from xs:duration type has occurred [err:XPTY0004]"));
        }
      }// switch
    }
    default: {
      XQThrow(XPath2ErrorException,X("Minus::collapseTreeInternal"), X("The operator subtract ('-') has been called on invalid operand types [err:XPTY0004]"));
    }
  }// switch

}

