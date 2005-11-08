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

#ifndef _XQILLA_07637_HPP
#define _XQILLA_07637_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xercesc/framework/MemoryManager.hpp>
#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/util/XMemory.hpp>

class DynamicContext;
class XQQuery;
class XPath2MemoryManager;

XERCES_CPP_NAMESPACE_BEGIN
class InputSource;
class XMLBuffer;
XERCES_CPP_NAMESPACE_END

class XQILLA_API XQilla : public XERCES_CPP_NAMESPACE_QUALIFIER XMemory
{
public:
  enum Flags {
    NO_STATIC_RESOLUTION = 0x1, ///< Don't perform static resolution
    NO_ADOPT_CONTEXT = 0x2 ///< Don't adopt and delete the context when the XQQuery is deleted
  };

  XQilla(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr = 0);
  ~XQilla();

  XQQuery* parseXQuery(const XMLCh* query,
                       DynamicContext* context = 0,
                       const XMLCh* queryFile = NULL,
                       unsigned int flags = 0,
                       XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr =
                       XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  XQQuery* parseXQuery(const XERCES_CPP_NAMESPACE_QUALIFIER InputSource& querySrc,
                       DynamicContext* context = 0,
                       unsigned int flags = 0,
                       XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr =
                       XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  XQQuery* parseXQueryFromURI(const XMLCh* queryFile,
                              DynamicContext* context = 0,
                              unsigned int flags = 0,
                              XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr =
                              XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  XQQuery* parseXPath2(const XMLCh* query,
                       DynamicContext* context = 0,
                       const XMLCh* queryFile = NULL,
                       unsigned int flags = 0,
                       XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr =
                       XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  XQQuery* parseXPath2(const XERCES_CPP_NAMESPACE_QUALIFIER InputSource& querySrc,
                       DynamicContext* context = 0,
                       unsigned int flags = 0,
                       XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr =
                       XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  XQQuery* parseXPath2FromURI(const XMLCh* queryFile,
                              DynamicContext* context = 0,
                              unsigned int flags = 0,
                              XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr =
                              XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  /**
   * Creates a context suitable for parsing an expression with.
   * @param memMgr of type <code>MemoryManager</code> - The memory manager used to create the
   * <code>DynamicContext</code>.
   * @return An implementation of <code>DynamicContext</code>
   */
  DynamicContext *createContext(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr =
                                XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

private:
  static bool readQuery(const XMLCh* queryFile, 
                        XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr, 
                        XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer& queryText);
  static bool readQuery(const XERCES_CPP_NAMESPACE_QUALIFIER InputSource& querySrc, 
                        XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr, 
                        XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer& queryText);
};

#endif
