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
