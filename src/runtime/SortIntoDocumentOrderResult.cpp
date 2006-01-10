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

#include "../config/xqilla_config.h"
#include <sstream>
#include <xqilla/runtime/SortIntoDocumentOrderResult.hpp>
#include <xqilla/runtime/Sequence.hpp>

SortIntoDocumentOrderResult::SortIntoDocumentOrderResult(Result &parent, DynamicContext *context)
  : LazySequenceResult(context),
    parent_(parent)
{
}

void SortIntoDocumentOrderResult::getResult(Sequence &toFill, DynamicContext *context) const
{
  toFill = const_cast<Result&>(parent_).toSequence(context); // parent_ is mutable
  const_cast<Result&>(parent_) = 0;
  toFill.sortIntoDocumentOrder(context);
}

std::string SortIntoDocumentOrderResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<documentorder>" << std::endl;
  oss << parent_.asString(context, indent + 1);
  oss << in << "</documentorder>" << std::endl;

  return oss.str();
}
