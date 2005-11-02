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

#include "../config/pathan_config.h"
#include <xqilla/framework/ProxyMemoryManager.hpp>

ProxyMemoryManager::ProxyMemoryManager(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *parent)
  : parent_(parent)
{
  initialise();
}

ProxyMemoryManager::~ProxyMemoryManager() 
{
  releaseAll();
}

void *ProxyMemoryManager::internal_allocate(size_t size)
{
  return parent_->allocate(size);
}

void ProxyMemoryManager::internal_deallocate(void *p)
{
  parent_->deallocate(p);
}

