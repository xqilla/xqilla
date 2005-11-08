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

#include "../config/xqilla_config.h"
#include <xercesc/dom/DOMImplementationRegistry.hpp>
#include <xercesc/util/PlatformUtils.hpp>

#include <xqilla/framework/XPath2MemoryManagerImpl.hpp>

#include <xqilla/utils/XQillaPlatformUtils.hpp>
#include <xqilla/dom-api/XQillaImplementation.hpp>

#include <xqilla/mapm/m_apm.h>
#include "DateUtils.hpp"

static int gInitFlag = 0;

void XQillaPlatformUtils::initialize(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr) {
  XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::
    Initialize(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXercescDefaultLocale, 0, 0, memMgr);
  XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::atomicIncrement(gInitFlag);
  XQillaImplementation::initialize();
  m_apm_mt_initialize();
  DateUtils::initialize();
}

void XQillaPlatformUtils::terminate() {
  if(gInitFlag == 0) {
    return;
  }

  if(XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::atomicDecrement(gInitFlag)==0) {
	  m_apm_free_all_mem_mt();
    DateUtils::terminate();
    m_apm_mt_terminate();
  }
  XQillaImplementation::terminate();
  XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::Terminate();
}
