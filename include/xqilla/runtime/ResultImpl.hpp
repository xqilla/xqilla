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

#ifndef _RESULTIMPL_HPP
#define _RESULTIMPL_HPP

#include <string>
#include <xercesc/util/XercesDefs.hpp>

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/framework/ReferenceCounted.hpp>

class SequenceType;
class DynamicContext;
class Sequence;

/** A lazily evaluated query result */
class XQILLA_API ResultImpl : public ReferenceCounted
{
public:
  /**
   * Do not allocate this object from a memory manager!
   * It must be created using the heap.
   * @param context Is used for toSequence only
   */
  ResultImpl(DynamicContext *context);
  virtual ~ResultImpl();

  /// Get the next item from the iterator. Returns null if the is no next value.
  virtual Item::Ptr next(DynamicContext *context) = 0;

  /// Performs iterator specific skip of results
  virtual void skip();

  /// Returns the effective boolean value of the sequence. Only works properly before next() has been called.
  virtual bool getEffectiveBooleanValue(DynamicContext* context);
  /// Returns the effective boolean value of the sequence.
  static bool getEffectiveBooleanValue(const Item::Ptr &first, const Item::Ptr &second, DynamicContext* context);

  /// Cast operator to a Sequence. Only works properly before next() has been called.
  virtual Sequence toSequence(DynamicContext *context = 0);

  /// Debug method to visualise the Result
  virtual std::string asString(DynamicContext *context, int indent) const = 0;

  static std::string getIndent(int indent);

protected:
  ResultImpl(const ResultImpl &) {};
  ResultImpl &operator=(const ResultImpl &) { return *this; };

  DynamicContext *context_; ///< Not to be used by anything other than toSequence()!!
};

#endif
