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

#ifndef _ALLMATCHES_HPP
#define _ALLMATCHES_HPP


#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/framework/ReferenceCounted.hpp>
#include <xqilla/fulltext/Match.hpp>

class DynamicContext;

class XQILLA_API AllMatches : public ReferenceCounted
{
public:
  typedef RefCountPointer<AllMatches> Ptr;

  virtual ~AllMatches() {}

  /// Get the next Match from the iterator. Returns null if the is no next value.
  virtual Match::Ptr next(DynamicContext *context) = 0;

protected:
  AllMatches() {}
};

#endif
