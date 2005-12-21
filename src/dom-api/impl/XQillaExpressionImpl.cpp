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
#include "XQillaExpressionImpl.hpp"
#include <xqilla/simple-api/XQilla.hpp>
#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/impl/XQContextImpl.hpp>
#include <xqilla/dom-api/XQillaExpression.hpp>
#include "XPath2ResultImpl.hpp"
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
                                           XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr,
                                           const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver *nsr,
                                           XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool *xmlGP)
	: _createdWith(memMgr)
{
  _staticContext = new (_createdWith) XQContextImpl(_createdWith, xmlGP);
  if(nsr != 0) _staticContext->setNSResolver(nsr);
  XQilla xqilla;
  _compiledExpression = xqilla.parseXPath2(expression, _staticContext, NULL, XQilla::NO_ADOPT_CONTEXT, _createdWith);
}

XQillaExpressionImpl::~XQillaExpressionImpl() 
{
  delete _staticContext;
  delete _compiledExpression;
}

void XQillaExpressionImpl::release()
{
  this->~XQillaExpressionImpl();
  _createdWith->deallocate(this);
}

void* XQillaExpressionImpl::evaluate(XERCES_CPP_NAMESPACE_QUALIFIER DOMNode* contextNode,
                                     unsigned short type,
                                     void*) const
{
  switch((XPath2Result::ResultType)type) {
  case XPath2Result::FIRST_RESULT: {
    return new (_createdWith) XPath2FirstResultImpl(_compiledExpression, contextNode,
                                                    _staticContext, _createdWith);
    break;
  }
  case XPath2Result::ITERATOR_RESULT: {
    return new (_createdWith) XPath2IteratorResultImpl(_compiledExpression, contextNode,
                                                       _staticContext, _createdWith);
    break;
  }
  case XPath2Result::SNAPSHOT_RESULT: {
    return new (_createdWith) XPath2SnapshotResultImpl(_compiledExpression, contextNode,
                                                       _staticContext, _createdWith);
    break;
  }
  }
  return 0;
}

void* XQillaExpressionImpl::evaluateOnce(XERCES_CPP_NAMESPACE_QUALIFIER DOMNode* contextNode,
                                         unsigned short type,
                                         void*)
{
  switch((XPath2Result::ResultType)type) {
  case XPath2Result::FIRST_RESULT: {
    return new (_createdWith) XPath2FirstResultImpl(_compiledExpression, contextNode,
                                                    _staticContext, _createdWith, this);
    break;
  }
  case XPath2Result::ITERATOR_RESULT: {
    return new (_createdWith) XPath2IteratorResultImpl(_compiledExpression, contextNode,
                                                       _staticContext, _createdWith, this);
    break;
  }
  case XPath2Result::SNAPSHOT_RESULT: {
    return new (_createdWith) XPath2SnapshotResultImpl(_compiledExpression, contextNode,
                                                       _staticContext, _createdWith, this);
    break;
  }
  }
  return 0;
}
