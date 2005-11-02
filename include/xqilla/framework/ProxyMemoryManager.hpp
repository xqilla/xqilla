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

#ifndef __PROXYMEMORYMANAGER_HPP
#define __PROXYMEMORYMANAGER_HPP

#include <xqilla/framework/Pathan.hpp>
#include <xqilla/framework/BaseMemoryManager.hpp>

class PATHAN_EXPORT ProxyMemoryManager : public BaseMemoryManager
{
public:
  ProxyMemoryManager(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *parent);
  virtual ~ProxyMemoryManager();

protected:
  virtual void *internal_allocate(size_t size);
  virtual void internal_deallocate(void *p);

private:
  XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *parent_;
};

#endif //__PROXYMEMORYMANAGER_HPP

