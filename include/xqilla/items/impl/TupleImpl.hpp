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

#ifndef _XQILLATUPLEIMPL_HPP
#define _XQILLATUPLEIMPL_HPP

#include <xqilla/items/Tuple.hpp>
#include <xqilla/utils/HashMap.hpp>
#include <xqilla/runtime/ResultBuffer.hpp>

class XQILLA_API TupleImpl : public Tuple
{
public:
  typedef RefCountPointer<TupleImpl> Ptr;

  TupleImpl(size_t capacity, DynamicContext *context);
  TupleImpl(const TupleImpl::Ptr &o, size_t capacity, DynamicContext *context);

  void add(const XMLCh *uriname, const Result &value);

  virtual Result get(const XMLCh *uriname) const;
  virtual Result get(const XMLCh *uri, const XMLCh *name) const;
  virtual void getInScopeVariables(std::vector<std::pair<const XMLCh*, const XMLCh*> > &variables,
                                   XPath2MemoryManager *mm) const;
  virtual size_t size() const;

  virtual const XMLCh *asString(const DynamicContext *context) const;

  virtual void generateEvents(EventHandler *events, const DynamicContext *context,
                              bool preserveNS, bool preserveType) const;

  virtual void typeToBuffer(DynamicContext *context, XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer &buffer) const;

  virtual void *getInterface(const XMLCh *name) const;

protected:
  typedef HashMap<const XMLCh*, ResultBuffer> ValueMap;
  ValueMap values_;
};
#endif
