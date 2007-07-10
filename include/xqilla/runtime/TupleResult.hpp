/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Oracle. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#ifndef TUPLERESULT_HPP
#define TUPLERESULT_HPP

#include <xqilla/ast/LocationInfo.hpp>
#include <xqilla/context/VariableStore.hpp>
#include <xqilla/framework/ReferenceCounted.hpp>

class DynamicContext;

class XQILLA_API TupleResult : public VariableStore, public LocationInfo, public ReferenceCounted
{
public:
  typedef RefCountPointer<TupleResult> Ptr;

  virtual ~TupleResult() {}

  virtual bool next(DynamicContext *context) = 0;

protected:
  TupleResult(const LocationInfo *location)
  {
    setLocationInfo(location);
  }
};

#endif
