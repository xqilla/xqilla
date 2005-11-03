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

#ifndef __XPATH2MEMORYMANAGERIMPL_HPP
#define __XPATH2MEMORYMANAGERIMPL_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/framework/BaseMemoryManager.hpp>

#if 0
// Turn OFF use of windows heap by default.
// There is a fragmentation problem resulting
// in less available memory
#if defined(WIN32) && !defined(__CYGWIN__)
#define WIN_USE_HEAP
#endif
#endif

class XQILLA_API XPath2MemoryManagerImpl : public BaseMemoryManager
{
public:
  XPath2MemoryManagerImpl();
  virtual ~XPath2MemoryManagerImpl();

#if defined(WIN_USE_HEAP)
  virtual void *allocate(size_t numElements);
  virtual void deallocate(void* p);
#endif

protected:
#if defined(WIN_USE_HEAP)
  virtual void initialise();
  virtual void releaseAll();

  virtual void *internal_allocate(size_t size) { return 0; }
  virtual void internal_deallocate(void *p) {}
#else
  virtual void *internal_allocate(size_t size);
  virtual void internal_deallocate(void *p);
#endif

private:
#if defined(WIN_USE_HEAP)
  HANDLE fHeap;
#endif
};

#endif //__XPATH2MEMORYMANAGERIMPL_HPP

