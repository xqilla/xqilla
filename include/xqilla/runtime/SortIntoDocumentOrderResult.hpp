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

#ifndef _SORTINTODOCUMENTORDERRESULT_HPP
#define _SORTINTODOCUMENTORDERRESULT_HPP

#include <xqilla/runtime/Result.hpp>
#include <xqilla/runtime/LazySequenceResult.hpp>

class XQILLA_API SortIntoDocumentOrderResult : public LazySequenceResult
{
public:
  SortIntoDocumentOrderResult(Result &parent, DynamicContext *context);

  void getResult(Sequence &toFill, DynamicContext *context) const;

  std::string asString(DynamicContext *context, int indent) const;

private:
  Result parent_;
};

#endif
