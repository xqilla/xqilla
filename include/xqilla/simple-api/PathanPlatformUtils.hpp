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

#ifndef _PATHANPLATFORMUTILS_HPP
#define _PATHANPLATFORMUTILS_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xercesc/util/XercesDefs.hpp>
XERCES_CPP_NAMESPACE_BEGIN
class MemoryManager;
XERCES_CPP_NAMESPACE_END

/**class with methods that are used by v2 that are DOM related*/ 
class PATHAN_EXPORT PathanPlatformUtils
{
public:

  /** Perform Pathan initialization
   *
   * Initialization should be called first in any client code.
   * 
   * Initializes Xerces and adds its own DOMImplementation to the registry
   */
  static void initialize(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr = 0);

  /** Perform Pathan termination
   *
   * Terminates Xerces
   */
  static void terminate();
};
#endif

