/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#ifndef _XQILLAPLATFORMUTILS_HPP
#define _XQILLAPLATFORMUTILS_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xercesc/util/XercesDefs.hpp>
XERCES_CPP_NAMESPACE_BEGIN
class MemoryManager;
XERCES_CPP_NAMESPACE_END

/**
 * Static utility methods for initializing and terminating the XQilla
 * and Xerces environments.
 */
class XQILLA_API XQillaPlatformUtils
{
public:

  /**
   * Perform XQilla initialization
   *
   * Initialization should be called first in any user code.
   * 
   * Initializes Xerces and adds its own DOMImplementation to the registry
   */
  static void initialize(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr = 0);

  /**
   * Perform XQilla termination
   *
   * Terminates Xerces
   */
  static void terminate();
};
#endif

