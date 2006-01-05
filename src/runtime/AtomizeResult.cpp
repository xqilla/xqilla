/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2006
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
#include <xqilla/runtime/AtomizeResult.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/runtime/Sequence.hpp>

AtomizeResult::AtomizeResult(const Result &parent, DynamicContext *context)
  : ResultImpl(context),
    _parent(parent),
    _sub(0)
{
}

Item::Ptr AtomizeResult::next(DynamicContext *context)
{
  // for $item in (Expr) return
  //   typeswitch ($item)
  //     case $value as atomic value return $value
  //     default $node return fn:data($node)

  Item::Ptr result = _sub.next(context);
  while(result == NULLRCP) {
    _sub = 0;
    result = _parent.next(context);
    if(result == NULLRCP) {
      _parent = 0;
      return 0;
    }
    if(result->isNode()) {
      _sub = ((Node*)(const Item*)result)->dmTypedValue(context);
      result = _sub.next(context);
    }
  }
  return result;
}

std::string AtomizeResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<atomize>" << std::endl;
  oss << _parent.asString(context, indent + 1);
  oss << in << "</atomize>" << std::endl;

  return oss.str();
}
