
/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
 */

#include "../config/pathan_config.h"
#include <xercesc/dom/DOMImplementationRegistry.hpp>
#include <xercesc/util/PlatformUtils.hpp>

#include <xqilla/framework/XPath2MemoryManagerImpl.hpp>

#include <xqilla/simple-api/PathanPlatformUtils.hpp>
#include <xqilla/dom-api/PathanImplementation.hpp>

#include <xqilla/mapm/m_apm.h>
#include "DateUtils.hpp"

static int gInitFlag = 0;

void PathanPlatformUtils::initialize(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr) {
  XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::
    Initialize(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXercescDefaultLocale, 0, 0, memMgr);
  XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::atomicIncrement(gInitFlag);
  PathanImplementation::initialize();
  m_apm_mt_initialize();
  DateUtils::initialize();
}

void PathanPlatformUtils::terminate() {
  if(gInitFlag == 0) {
    return;
  }

  if(XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::atomicDecrement(gInitFlag)==0) {
	  m_apm_free_all_mem_mt();
    DateUtils::terminate();
    m_apm_mt_terminate();
  }
  PathanImplementation::terminate();
  XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::Terminate();
}
