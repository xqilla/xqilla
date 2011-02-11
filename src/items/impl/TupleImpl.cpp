/*
 * Copyright (c) 2010,
 *     John Snelson. All rights reserved.
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
 */

#include "../../config/xqilla_config.h"
#include <xqilla/items/impl/TupleImpl.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/events/EventHandler.hpp>
#include <xqilla/utils/XStr.hpp>
#include <xqilla/axis/NodeTest.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/runtime/Sequence.hpp>

XERCES_CPP_NAMESPACE_USE;
using namespace std;

TupleImpl::TupleImpl(size_t capacity, DynamicContext *context)
  : values_(capacity, false, context->getMemoryManager())
{
}

TupleImpl::TupleImpl(const TupleImpl::Ptr &o, size_t capacity, DynamicContext *context)
  : values_(capacity + o->size(), false, context->getMemoryManager())
{
  values_.putAll(o->values_);
}

void TupleImpl::generateEvents(EventHandler *events, const DynamicContext *context,
                               bool preserveNS, bool preserveType) const
{
  // TBD What is the correct way to generate events for a Tuple? - jpcs
  events->atomicItemEvent(AnyAtomicType::STRING, asString(context), 0, 0);
}

const XMLCh *TupleImpl::asString(const DynamicContext *context) const
{
  XMLBuffer buf;
  buf.set(X("tuple{"));

  bool addComma = false;
  ValueMap::iterator i = const_cast<ValueMap&>(values_).begin();
  ValueMap::iterator end = const_cast<ValueMap&>(values_).end();
  for(; i != end; ++i) {
    if(addComma)
      buf.append(X(", "));
    else addComma = true;

    const XMLCh *ptr = i.getKey();
    while(*ptr != ':') ++ptr;

    if(*(ptr + 1)) {
      buf.append('{');
      buf.append(ptr + 1);
      buf.append('}');
    }
    buf.append(i.getKey(), ptr - i.getKey());

    buf.append(X(":="));

    Sequence sequence = i.getValue().createResult()->
      toSequence(const_cast<DynamicContext*>(context));

    size_t len = sequence.getLength();
    if(len == 1) {
      buf.append(sequence.first()->asString(context));
    }
    else {
      buf.append('(');
      Sequence::const_iterator i = sequence.begin();
      Sequence::const_iterator end = sequence.end();
      while(i != end) {
        buf.append((*i)->asString(context));
        if(++i != end) buf.append(X(", "));
      }
      buf.append(')');
    }
  }

  buf.append(X("}"));

  return context->getMemoryManager()->getPooledString(buf.getRawBuffer());
}

void TupleImpl::typeToBuffer(DynamicContext *context, XMLBuffer &buffer) const
{
  // TBD output a better type - jpcs
  buffer.append(X("tuple()"));
}

void *TupleImpl::getInterface(const XMLCh *name) const
{
  return 0;
}

void TupleImpl::add(const XMLCh *uriname, const Result &value)
{
  values_.put(uriname, ResultBuffer(value));
}

Result TupleImpl::get(const XMLCh *uriname) const
{
  ResultBuffer *buffer = const_cast<ResultBuffer*>(values_.get(uriname));
  if(!buffer) return 0;
  return buffer->createResult();
}

Result TupleImpl::get(const XMLCh *uri, const XMLCh *name) const
{
  XMLBuffer uriname;
  XPath2NSUtils::makeURIName(uri, name, uriname);
  ResultBuffer *buffer = const_cast<ResultBuffer*>(values_.get(uriname.getRawBuffer()));
  if(!buffer) return 0;
  return buffer->createResult();
}

void TupleImpl::getInScopeVariables(vector<pair<const XMLCh*, const XMLCh*> > &variables,
                                    XPath2MemoryManager *mm) const
{
  pair<const XMLCh*, const XMLCh*> pair;
  ValueMap::iterator i = const_cast<ValueMap&>(values_).begin();
  ValueMap::iterator end = const_cast<ValueMap&>(values_).end();
  for(; i != end; ++i) {
    XPath2NSUtils::decomposeURIName(i.getKey(), mm, pair.first, pair.second);
    variables.push_back(pair);
  }
}

size_t TupleImpl::size() const
{
  return values_.size();
}
