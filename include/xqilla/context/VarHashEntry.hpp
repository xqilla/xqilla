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

#ifndef _VARHASHENTRY_HPP
#define _VARHASHENTRY_HPP

#include <xqilla/framework/XQillaExport.hpp>

/** The class that stores the values of the variables. */
template<class TYPE>
class VarHashEntry
{
public:
  virtual ~VarHashEntry() {}

  /** Gets the value of the variable (overload in derived classes for
      special behaviour) */
  virtual const TYPE &getValue() const = 0;

  /** Sets the value of the variable (overload in derived classes for
      special behaviour) */
  virtual void setValue(const TYPE &value) = 0;
};

#endif

