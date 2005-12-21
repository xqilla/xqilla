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

#ifndef __XPATH2NODESERIALIZER_HPP
#define __XPATH2NODESERIALIZER_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xercesc/dom/impl/DOMWriterImpl.hpp>

XERCES_CPP_NAMESPACE_BEGIN

class DOMNode;
class XMLFormatter;

XERCES_CPP_NAMESPACE_END

class XQILLA_API XPath2NodeSerializer: public XERCES_CPP_NAMESPACE_QUALIFIER DOMWriterImpl {
public:
  /** @name Constructor */
  //@{
  
  /**
   * Constructor.
   * 
   * Constructs an XPath2NodeSerializer 
   * 
   */
  XPath2NodeSerializer(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* const manager = XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  // -----------------------------------------------------------------------
  //  All constructors are hidden, just the destructor is available
  // -----------------------------------------------------------------------
  /** @name Destructor */
  //@{
  /**
   * Destructor
   *
   */
  virtual ~XPath2NodeSerializer();
  //@}

protected:

  virtual bool customNodeSerialize(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode* const nodeToWrite, int level);

};

#endif // __XPATH2NODESERIALIZER_HPP

