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

#ifndef _RESULTBUFFER_HPP
#define _RESULTBUFFER_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/runtime/ResultImpl.hpp>

class Result;
class ResultBufferImpl;
class Item;

/** A reference counting wrapper for the result buffer */
class XQILLA_API ResultBuffer
{
public:
  ResultBuffer(const Result &result);
  ResultBuffer(ResultBufferImpl *impl);
  ResultBuffer(const ResultBuffer &o);
  ResultBuffer &operator=(const ResultBuffer &o);
  ~ResultBuffer();

  /// Creates a result that returns the same items as the one used to construct this buffer
  Result createResult(DynamicContext *context) const;

  bool isNull() const
  {
    return _impl == 0;
  }

private:
  class BufferedResult : public ResultImpl
  {
  public:
    BufferedResult(ResultBufferImpl *impl, DynamicContext *context);
    ~BufferedResult();

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;
  private:
    ResultBufferImpl *_impl;
    unsigned int _pos;
  };

  ResultBufferImpl *_impl;
};

#endif
