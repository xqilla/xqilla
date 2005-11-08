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

#include "../../config/xqilla_config.h"
#include <xqilla/dom-api/impl/XQillaExpressionImpl.hpp>
#include <xqilla/simple-api/XQillaEngine.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/dom-api/XQillaExpression.hpp>
#include <xqilla/dom-api/XPath2Result.hpp>
#include <xqilla/ast/ASTNode.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>

#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/exceptions/ContextException.hpp>

#include <xercesc/util/XMLString.hpp>
#include <xercesc/util/XMLException.hpp>
#include <xercesc/util/RuntimeException.hpp>
#include <xercesc/framework/XMLGrammarPool.hpp>
#include <xercesc/dom/DOMNode.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMException.hpp>
#include <xercesc/util/XercesDefs.hpp>

XQillaExpressionImpl::XQillaExpressionImpl(const XMLCh *expression,
                                           const XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* documentRoot,
                                           XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr,
                                           const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver *nsr,
                                           XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool *xmlGP)
	: _createdWith(memMgr),
    _memMgr(memMgr),
    _docRoot(documentRoot),
    _staticContextOwned(true)
{
  _staticContext = XQillaEngine::createContext(xmlGP, &_memMgr);
  _staticContext->setNSResolver(nsr);
  _compiledExpression = XQillaEngine::createASTNode(expression, _staticContext, &_memMgr, true);
}

XQillaExpressionImpl::XQillaExpressionImpl(const XMLCh *expression, DynamicContext *context,
                                           XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr)
	: _createdWith(memMgr),
    _memMgr(memMgr),
    _docRoot(0),
    _staticContextOwned(false),
    _staticContext(context)
{
  _compiledExpression = XQillaEngine::createASTNode(expression, _staticContext, &_memMgr, true);
}

XQillaExpressionImpl::~XQillaExpressionImpl() 
{
  if(_staticContextOwned) delete _staticContext;
}//destructor

void XQillaExpressionImpl::release()
{
  this->~XQillaExpressionImpl();
  _createdWith->deallocate(this);
}

// weak version -  must create a context from scratch
void* XQillaExpressionImpl::evaluate(XERCES_CPP_NAMESPACE_QUALIFIER DOMNode* contextNode,
                                     unsigned short type,
                                     void*) const
  throw (XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException, XERCES_CPP_NAMESPACE_QUALIFIER DOMException)
{
  return new (_createdWith) XPath2Result((XPath2Result::ResultType)type, _compiledExpression,
                                         contextNode, _staticContext, _createdWith);
}

// strong version, use given context
XPath2Result* XQillaExpressionImpl::evaluate(DynamicContext* context, unsigned short type) const
	throw (XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException, XERCES_CPP_NAMESPACE_QUALIFIER DOMException)
{
  return new (_createdWith) XPath2Result((XPath2Result::ResultType)type, _compiledExpression,
                                         context, _createdWith);
}

DynamicContext *XQillaExpressionImpl::createContext(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *mm) const
{
  if(mm == 0) {
    return 0;
  }
  return _staticContext->createDynamicContext(mm);
}
