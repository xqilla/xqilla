/*
 * Copyright (c) 2001-2007
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2007
 *     Oracle. All rights reserved.
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

#include "../../config/xqilla_config.h"
#include "XQillaDocumentImpl.hpp"

#include "XQillaExpressionImpl.hpp"
#include <xqilla/dom-api/XQillaExpression.hpp>

#include <xqilla/dom-api/XQillaNSResolver.hpp>
#include <xqilla/dom-api/XPath2Result.hpp>
#include <xqilla/context/DynamicContext.hpp>

#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/exceptions/ContextException.hpp>

#include <xercesc/dom/DOMException.hpp>
#include <xercesc/dom/DOMNode.hpp>
#include <xercesc/dom/DOMException.hpp>
#include <xercesc/dom/DOMDocumentType.hpp>
#include <xercesc/dom/DOMException.hpp>
#include <xercesc/dom/DOMXPathEvaluator.hpp>
#include <xercesc/dom/impl/DOMDocumentImpl.hpp>
#include <xercesc/dom/DOMXPathException.hpp>
#include <xercesc/framework/XMLGrammarPool.hpp>
#include <xercesc/dom/DOMException.hpp>

#include <xqilla/utils/XPath2Utils.hpp>

XQillaDocumentImpl::XQillaDocumentImpl(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr)
  : XERCES_CPP_NAMESPACE_QUALIFIER DOMDocumentImpl(memMgr),
  _memMgr(memMgr),
  _xmlGrammarPool(0),
  _adoptGramPool(false)
{
}

XQillaDocumentImpl::XQillaDocumentImpl(const XMLCh *fNamespaceURI, const XMLCh *qualifiedName, XERCES_CPP_NAMESPACE_QUALIFIER DOMDocumentType *doctype,
                                       XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* const memMgr) 
  : XERCES_CPP_NAMESPACE_QUALIFIER DOMDocumentImpl(fNamespaceURI, qualifiedName, doctype, memMgr),
  _memMgr(memMgr),
  _xmlGrammarPool(0),
  _adoptGramPool(false)
{
}

XQillaDocumentImpl::~XQillaDocumentImpl()
{
  if(_adoptGramPool) delete _xmlGrammarPool;
}

// weak version, create a context within
const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathExpression*
XQillaDocumentImpl::createExpression(const XMLCh* expression, 
                                     const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* resolver)
{
  // Use placement new, because XQillaExpressionImpl inherits from XercesConfiguration,
  // which inherits from XMemory - which screws up out operator new overload
  void *mem = _memMgr.allocate(sizeof(XQillaExpressionImpl));
  new (mem) XQillaExpressionImpl(expression, &_memMgr, resolver, _xmlGrammarPool);
  return (XQillaExpressionImpl*)mem;
}

// weak version, create context within
void* XQillaDocumentImpl::evaluate(const XMLCh* expression,
                                   XERCES_CPP_NAMESPACE_QUALIFIER DOMNode* contextNode,
                                   const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* resolver,
                                   unsigned short type,
                                   void* reuseableResult)
{
  return ((XQillaExpressionImpl*)createExpression(expression, resolver))->evaluateOnce(contextNode, type, reuseableResult);
}

/** Create an NSResolver */
const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver*
XQillaDocumentImpl::createNSResolver(XERCES_CPP_NAMESPACE_QUALIFIER DOMNode* nodeResolver) {
  return _memMgr.createNSResolver(nodeResolver);
}

void XQillaDocumentImpl::setGrammarPool(XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool *xmlGrammarPool, bool adoptGramPool) {
    _xmlGrammarPool = xmlGrammarPool;
    _adoptGramPool = adoptGramPool;
}

XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool *XQillaDocumentImpl::getGrammarPool() {
  return _xmlGrammarPool;
}
