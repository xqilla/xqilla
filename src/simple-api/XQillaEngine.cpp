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
#include <xqilla/simple-api/XQillaEngine.hpp>

#include <xqilla/dom-api/impl/XQillaExpressionImpl.hpp>
#include <xqilla/exceptions/XQillaException.hpp>
#include <xqilla/dom-api/XQillaExpression.hpp>

#include <xqilla/dom-api/XQillaNSResolver.hpp>
#include <xqilla/dom-api/XPath2Result.hpp>
#include <xqilla/context/impl/XQContextImpl.hpp>
#include "../dom-api/impl/XQillaDocumentImpl.hpp"
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/framework/XPath2MemoryManagerImpl.hpp>

#include "../context/impl/VarStoreImpl.hpp"
#include "../parser/XPath2ParserControl.hpp"
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/exceptions/ContextException.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>

#include <xercesc/dom/DOMException.hpp>
#include <xercesc/dom/DOMNode.hpp>
#include <xercesc/dom/DOMException.hpp>
#include <xercesc/dom/DOMXPathException.hpp>
#include <xercesc/dom/DOMDocumentType.hpp>
#include <xercesc/dom/DOMException.hpp>
#include <xercesc/dom/DOMXPathEvaluator.hpp>
#include <xercesc/dom/impl/DOMDocumentImpl.hpp>
#include <xercesc/dom/DOMXPathException.hpp>
#include <xercesc/framework/XMLGrammarPool.hpp>
#include <xercesc/framework/MemoryManager.hpp>
#include <xercesc/dom/DOMException.hpp>

#include <xqilla/utils/XPath2Utils.hpp>
#include <iostream>

#define yyFlexLexer xxFlexLexer
#include "../lexer/XPathFlexLexer.hpp"
#undef yyFlexLexer

//Bison hooks
extern int XPathyyparse(void *);
extern int XPathyydebug;

//Remove leading and trailing whitespace of the given string
static const XMLCh* stripWhitespace(const XMLCh* inputString, XPath2MemoryManager* memMgr)
{
  if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(inputString) == 0) {
    return memMgr->getPooledString(inputString);
  }
  unsigned int start = 0, end = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(inputString) - 1;

  //Get the position of the first non-whitespace character
  while (isspace ((char) inputString[start]) && start < XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(inputString)) {
    start++;
  }//while

  //Get the position of the last non-whitespace character
  while (isspace ((char) inputString[end]) && end > 0) {
    end--;
  }//while

  if(start <= end) {
    return XPath2Utils::subString(inputString, start, end - start + 1, memMgr);
  }
  return memMgr->getPooledString(inputString);
}//stripWhitespace

XQillaExpression* XQillaEngine::createExpression(const XMLCh* expression,
                                                 DynamicContext* context,
                                                 XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr)
  throw (XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException, XERCES_CPP_NAMESPACE_QUALIFIER DOMException)
{
  return new (memMgr) XQillaExpressionImpl(expression, context, memMgr);
}

ASTNode* XQillaEngine::createASTNode(const XMLCh* expression,
                                       DynamicContext* context,
                                       XPath2MemoryManager *memMgr,
                                       bool staticallyResolve)
  throw (XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException, XERCES_CPP_NAMESPACE_QUALIFIER DOMException) {

  if(memMgr == 0) {
    return 0;
  }

  //Lex expression
  const XMLCh *exprStrip = stripWhitespace(expression, memMgr);
  LexerDOMStringStream lexerStream(exprStrip);
  xxFlexLexer lexer(&lexerStream, &std::cout);

  //Parse expression
  XPathParserControl pcontrol;
  pcontrol.lexer = &lexer;
  pcontrol.context = context;
  pcontrol.memMgr = memMgr;

  XPathyydebug = 0;

  try {
    XPathyyparse((void *) &pcontrol);
    //Complete and return expression object
    if(staticallyResolve) {
      pcontrol.result = pcontrol.result->staticResolution(context);
    }
    return pcontrol.result;
  }
  catch(const ContextException &e) {
    if(XQillaException::getDebug()) {
      e.printDebug( X("Caught exception at Interface") );
    }
    throw XERCES_CPP_NAMESPACE_QUALIFIER DOMException(XERCES_CPP_NAMESPACE_QUALIFIER DOMException::NAMESPACE_ERR, e.getError());
  }
  catch(const NamespaceLookupException &e) {
    if(XQillaException::getDebug()) {
      e.printDebug( X("Caught exception at Interface") );
    }
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::INVALID_EXPRESSION_ERR, e.getError());
  }
  catch(const FunctionException &fe) {
    if(XQillaException::getDebug()) {
      fe.printDebug( X("Caught exception at Interface") );
    }
    const XMLCh* errString = fe.getError();
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::INVALID_EXPRESSION_ERR, errString);
  }
  catch(const XQException &e) {
    if(XQillaException::getDebug()) {
      e.printDebug( X("Caught exception at Interface") );
    }
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::INVALID_EXPRESSION_ERR, e.getError());
  }

  return 0;
}

/** Create an NSResolver */
XQillaNSResolver *XQillaEngine::createNSResolver(XERCES_CPP_NAMESPACE_QUALIFIER DOMNode* nodeResolver,
                                                 XPath2MemoryManager *memMgr)
{
  if(memMgr == 0) {
    return 0;
  }
  return memMgr->createNSResolver(nodeResolver);
}

DynamicContext* XQillaEngine::createContext(XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument *document, XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr)
{
  if(memMgr == 0) {
    return 0;
  }

  XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool* xmlgr = 0;
  if(document != 0) {
    xmlgr = static_cast<XQillaDocumentImpl*>(document)->getGrammarPool();
  }

  return new (memMgr) XQContextImpl(memMgr, xmlgr, 0);
}

DynamicContext *XQillaEngine::createContext(XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool *xmlGP,
					    XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr)
{
  if(memMgr == 0) {
    return 0;
  }

  return new (memMgr) XQContextImpl(memMgr, xmlGP, 0);
}

DynamicContext *XQillaEngine::createContext(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr)
{
  if(memMgr == 0) {
    return 0;
  }

  return new (memMgr) XQContextImpl(memMgr, 0, 0);
}

XPath2MemoryManager *XQillaEngine::createMemoryManager() {
  return new XPath2MemoryManagerImpl;
}
