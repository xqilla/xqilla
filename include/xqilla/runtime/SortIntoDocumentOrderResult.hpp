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

#ifndef _SORTINTODOCUMENTORDERRESULT_HPP
#define _SORTINTODOCUMENTORDERRESULT_HPP

#include <xqilla/runtime/Result.hpp>
#include <xqilla/runtime/LazySequenceResult.hpp>

class PATHAN_EXPORT SortIntoDocumentOrderResult : public LazySequenceResult
{
public:
  SortIntoDocumentOrderResult(Result &parent, DynamicContext *context);

  void getResult(Sequence &toFill, DynamicContext *context) const;

  std::string asString(DynamicContext *context, int indent) const;

private:
  Result parent_;
};

#endif
