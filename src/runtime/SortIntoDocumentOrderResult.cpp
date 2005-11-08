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
