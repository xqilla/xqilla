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

#ifndef _XQILLATUPLE_HPP
#define _XQILLATUPLE_HPP

#include <vector>

#include <xqilla/items/Item.hpp>
#include <xqilla/items/ATQNameOrDerived.hpp>
#include <xqilla/runtime/Result.hpp>

class DynamicContext;

class XQILLA_API Tuple : public Item
{
public:
  typedef RefCountPointer<const Tuple> Ptr;

  virtual Type getType() const { return TUPLE; }

  virtual const XMLCh *getTypeURI() const { return 0; }
  virtual const XMLCh *getTypeName() const { return 0; }

  virtual Result get(const XMLCh *uriname) const = 0;
  virtual Result get(const XMLCh *uri, const XMLCh *name) const = 0;
  virtual void getInScopeVariables(std::vector<std::pair<const XMLCh*, const XMLCh*> > &variables,
                                   XPath2MemoryManager *mm) const = 0;

  virtual size_t size() const = 0;

protected:
  Tuple() {}
};
#endif
