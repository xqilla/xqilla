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

#include "../../config/xqilla_config.h"
#include "XQillaDocumentImpl.hpp"

#include <xqilla/dom-api/impl/XQillaExpressionImpl.hpp>
#include <xqilla/dom-api/XQillaExpression.hpp>

#include <xqilla/dom-api/XQillaNSResolver.hpp>
#include <xqilla/dom-api/XPath2Result.hpp>
#include <xqilla/context/DynamicContext.hpp>

#include "../../context/impl/VarStoreImpl.hpp"
#include "../../parser/XPath2ParserControl.hpp"
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
  : XERCES_CPP_NAMESPACE_QUALIFIER DOMDocumentImpl(memMgr), _memMgr(memMgr), _xmlGrammarPool(0)
{
  // Nothing
}//constructor

XQillaDocumentImpl::XQillaDocumentImpl(const XMLCh *fNamespaceURI, const XMLCh *qualifiedName, XERCES_CPP_NAMESPACE_QUALIFIER DOMDocumentType *doctype,
                                       XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* const memMgr) 
  : XERCES_CPP_NAMESPACE_QUALIFIER DOMDocumentImpl(fNamespaceURI, qualifiedName, doctype, memMgr), _memMgr(memMgr), _xmlGrammarPool(0)
{
  // Nothing
}

XQillaDocumentImpl::~XQillaDocumentImpl()
{
  // Nothing
}//destructor

// weak version, create a context within
const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathExpression* XQillaDocumentImpl::createExpression(const XMLCh* expression, 
                                                                                              const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* resolver)
  throw (XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException, XERCES_CPP_NAMESPACE_QUALIFIER DOMException)
{
  return new (&_memMgr) XQillaExpressionImpl(expression, this, &_memMgr, resolver, _xmlGrammarPool);
}

// weak version, create context within
void* XQillaDocumentImpl::evaluate(const XMLCh* expression,
                                   XERCES_CPP_NAMESPACE_QUALIFIER DOMNode* contextNode,
                                   const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* resolver,
                                   unsigned short type,
                                   void* reuseableResult)
  throw (XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException, XERCES_CPP_NAMESPACE_QUALIFIER DOMException) 
{
  const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathExpression* expr=createExpression(expression, resolver);
  return expr->evaluate(contextNode, type, reuseableResult);
}

/** Create an NSResolver */
const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* XQillaDocumentImpl::createNSResolver(XERCES_CPP_NAMESPACE_QUALIFIER DOMNode* nodeResolver) {
  return _memMgr.createNSResolver(nodeResolver);
}

void XQillaDocumentImpl::setGrammarPool(XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool *xmlGrammarPool) {
    _xmlGrammarPool = xmlGrammarPool;
}

XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool *XQillaDocumentImpl::getGrammarPool() {
  return _xmlGrammarPool;
}
