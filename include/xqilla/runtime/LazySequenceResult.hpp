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

#ifndef _LAZYSEQUENCERESULT_HPP
#define _LAZYSEQUENCERESULT_HPP

#include <xqilla/runtime/ResultImpl.hpp>

#include <xqilla/runtime/Sequence.hpp>

class XQILLA_API LazySequenceResult : public ResultImpl
{
public:
  LazySequenceResult(DynamicContext *context);

  /// Get the next item from the iterator
  virtual Item::Ptr next(DynamicContext *context);

  /// Called lazily to get the Sequence to iterate over
  virtual void getResult(Sequence &toFill, DynamicContext *context) const = 0;

  /// Cast operator to a Sequence
  virtual Sequence toSequence(DynamicContext *context = 0);

private:
  bool toInit_;
  Sequence::iterator it_;
  Sequence seq_;
};

#endif
