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
 * Please see the file LICENSE for more information.
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

class XQILLA_API ItemConstructor {
public:
  typedef std::vector<ItemConstructor*,XQillaAllocator<ItemConstructor*> > Vector;

  virtual bool isNumeric() const = 0;

  virtual Item::Ptr createItem(const DynamicContext* context) const = 0;
  virtual std::string asString(const DynamicContext* context) const = 0;
};

#endif

