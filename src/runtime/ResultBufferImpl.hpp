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

#ifndef _RESULTBUFFERIMPL_HPP
#define _RESULTBUFFERIMPL_HPP

#include <vector>

#include <xqilla/runtime/Result.hpp>

/** A buffer for lazily evaluated query results. This object is not thread safe */
class ResultBufferImpl
{
public:
  /**
   * Do not allocate this object from a memory manager!
   * It must be created using the heap.
   */
  ResultBufferImpl(const Result &result);
  ~ResultBufferImpl();

  /// Increment the reference count
  void incrementRefCount();
  /// Decrement the reference count, deleting if it becomes zero
  void decrementRefCount();

  const Item::Ptr item(unsigned int index, DynamicContext *context);

private:
  ResultBufferImpl(const ResultBufferImpl &);
  ResultBufferImpl &operator=(const ResultBufferImpl &);

  typedef std::vector<Item::Ptr> ItemList;

  unsigned int _refCount;
  Result _result;
  bool _done;
  ItemList _items;
};

#endif
