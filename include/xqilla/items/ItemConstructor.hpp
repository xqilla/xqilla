/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
 *     Oracle. All rights reserved.
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

#ifndef _ITEMCONSTUCTOR_HPP
#define _ITEMCONSTUCTOR_HPP

#include <vector>
#include <string>

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>

class DynamicContext;
class StaticType;
class EventHandler;

class XQILLA_API ItemConstructor {
public:
  typedef std::vector<ItemConstructor*,XQillaAllocator<ItemConstructor*> > Vector;

  virtual ~ItemConstructor() {}

  virtual const StaticType &getStaticType() const = 0;

  virtual Item::Ptr createItem(const DynamicContext* context) const = 0;
  virtual void generateEvents(EventHandler *events, const DynamicContext* context) const = 0;
  virtual std::string asString(const DynamicContext* context) const = 0;

  virtual const XMLCh* getTypeURI() const = 0;
  virtual const XMLCh* getTypeName() const = 0;
};

#endif

