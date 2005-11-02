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
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

#ifndef _DATEORTIMETYPE_HPP
#define _DATEORTIMETYPE_HPP

#include <xercesc/util/XMLString.hpp>
#include <xqilla/items/AnyAtomicType.hpp>

#include <xqilla/framework/Pathan.hpp>

class ATDecimalOrDerived;
class ATDurationOrDerived;

class PATHAN_EXPORT DateOrTimeType : public AnyAtomicType
{
public:
  typedef RefCountPointer<const DateOrTimeType> Ptr;

  /* is this type date or time based?  Return true by default */
  virtual bool isDateOrTimeTypeValue() const;

  /**
   * Returns true if the timezone is defined for this object, false otherwise.
   */
  virtual bool hasTimezone() const = 0;

};

#endif //  _ATDATETIMEORDERIVED_HPP
