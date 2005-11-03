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

#ifndef _VARHASHENTRYIMPL_HPP
#define _VARHASHENTRYIMPL_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/context/VarHashEntry.hpp>

/** The class that stores the values of the variables. */
template<class TYPE>
class VarHashEntryImpl : public VarHashEntry<TYPE>
{
public:
  /// Meaningfull constructor
  VarHashEntryImpl(const TYPE &value);

  /** Gets the value of the variable (overload in derived classes for
      special behaviour) */
  virtual const TYPE &getValue() const;

  /** Sets the value of the variable (overload in derived classes for
      special behaviour) */
  virtual void setValue(const TYPE &value);

protected:
  TYPE _value;
};

template<class TYPE>
VarHashEntryImpl<TYPE>::VarHashEntryImpl(const TYPE &value)
  : _value(value)
{
}

template<class TYPE>
const TYPE &VarHashEntryImpl<TYPE>::getValue() const
{
  return _value;
}

template<class TYPE>
void VarHashEntryImpl<TYPE>::setValue(const TYPE &value)
{
  _value = value;
}

#endif

