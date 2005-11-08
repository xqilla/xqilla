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

#ifndef __XQILLAENGINE_HPP
#define __XQILLAENGINE_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xercesc/dom/DOMException.hpp>
#include <xercesc/dom/DOMXPathException.hpp>
#include <xercesc/dom/DOMXPathEvaluator.hpp>
#include <xercesc/util/XMemory.hpp>
#include <xercesc/util/PlatformUtils.hpp>

class XPath2MemoryManager;
class XPath2Result;
class DynamicContext;
class XQillaExpression;
class XQillaNSResolver;
class ASTNode;

XERCES_CPP_NAMESPACE_BEGIN 
class DOMDocumentType;
class DOMXPathEvaluator;
class DOMNode;
class DOMDocument;
class XMLGrammarPool;
XERCES_CPP_NAMESPACE_END 


/**
 * The <code>XQillaEngine</code> class provides functions to create expressions and evaluate with
 * a given context, and shortcuts to creating your own context.
 */
class XQILLA_API XQillaEngine : public XERCES_CPP_NAMESPACE_QUALIFIER XMemory
{
private:
    // -----------------------------------------------------------------------
    //  Constructor
    // -----------------------------------------------------------------------
    /** @name Constructor */
    //@{    
    XQillaEngine();
    //@}

public:

  /** @name XPath 2 Factory Methods */
  //@{
  
  /**
   * Creates a parsed XPath2 expression with resolved namespaces. This is useful
   * when an expression will be reused in an application since it makes it 
   * possible to compile the expression string into a more efficient internal 
   * form and preresolve all namespace prefixes which occur within the expression.
   * @param expression of type XMLCh - The XPath expression string to be parsed.
   * code NAMESPACE_ERR.
   * @param context of type <code>DynamicContext</code> - The static context to use during parsing.
   * The context must not change or be deleted during the lifetime of the ASTNode. If you want
   * to alter the context to evaluate the expression, obtain a new context using the
   * StaticContext::createDynamicContext() method.
   * @param memMgr of type <code>MemoryManager</code> - The memory manager used to create the
   * <code>XQillaExpression</code>. Defaults to the xerces default memory manager.
   * @return <code>XQillaExpression</code> The compiled form of the XPath2 expression.
   * @exception XPathException
   * INVALID_EXPRESSION_ERR: Raised if the expression is not legal according to the 
   * rules of the <code>DOMXPathEvaluator</code>.
   * @exception DOMException
   * NAMESPACE_ERR: Raised if the expression contains namespace prefixes which cannot
   * be resolved by the specified <code>XPathNSResolver</code>.
   */
	static XQillaExpression *createExpression(const XMLCh* expression, DynamicContext* context,
                                            XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr = XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager)
    throw (XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException, XERCES_CPP_NAMESPACE_QUALIFIER DOMException);

  /**
   * Creates a context suitable for parsing an expression with.
   * @param memMgr of type <code>MemoryManager</code> - The memory manager used to create the
   * <code>DynamicContext</code>.
   * @return An implementation of <code>DynamicContext</code>
   */
  static DynamicContext *createContext(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr = XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  /**
   * Creates a context suitable for parsing an expression with.
   * @param xmlGP of type <code>XMLGrammarPool</code> - The grammar to set. If the parameter is null, no grammar will
   * be set in the context.
   * @param memMgr of type <code>MemoryManager</code> - The memory manager used to create the
   * <code>DynamicContext</code>.
   * @return An implementation of <code>DynamicContext</code>
   */
  static DynamicContext *createContext(XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool *xmlGP,
                                       XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr = XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  /**
   * Creates a context suitable for parsing an expression with.
   * @param document of type <code>DOMDocument</code> - the document, that must be from the XQilla
   * implementation of xerces, to get the grammar from. If the parameter is null, no grammar wil
   * be set in the context.
   * @param memMgr of type <code>MemoryManager</code> - The memory manager used to create the
   * <code>DynamicContext</code>.
   * @return An implementation of <code>DynamicContext</code>
   */
  static DynamicContext *createContext(XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument *document,
                                       XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr = XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  /**
   * Creates a parsed XPath2 expression, using the given context. This method returns a ASTNode,
   * which is the root of the executable parse tree for the expression, and is more flexible than
   * the XQillaExpression returned above.
   * @param expression of type XMLCh - The XPath expression string to be parsed.
   * @param context of type <code>DynamicContext</code> - The static context to use during parsing.
   * The context must not change or be deleted during the lifetime of the ASTNode. If you want
   * to alter the context to evaluate the expression, obtain a new context using the
   * StaticContext::createDynamicContext() method.
   * @param memMgr of type <code>XPath2MemoryManager</code> - The memory manager used to create the
   * <code>ASTNode</code> tree.
   * @param staticallyResolve of type bool - If set to true, the ASTNode returned will have been
   * statically resolved using the ASTNode::staticResolution() method.
   * @return <code>ASTNode</code> The compiled form of the XPath2 expression.
   * @exception XPathException
   * INVALID_EXPRESSION_ERR: Raised if the expression is not legal according to the 
   * rules of the <code>DOMXPathEvaluator</code>.
   * @exception DOMException
   * NAMESPACE_ERR: Raised if the expression contains namespace prefixes which cannot
   * be resolved by the specified <code>XPathNSResolver</code>.
   */
  static ASTNode* createASTNode(const XMLCh* expression, DynamicContext* context,
                                  XPath2MemoryManager *memMgr, bool staticallyResolve = true)
    throw (XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException, XERCES_CPP_NAMESPACE_QUALIFIER DOMException);

  /**
   * Create a XQillaNSResolver
   * @param memMgr of type <code>XPath2MemoryManager</code> - The memory manager used to create the
   * <code>XQillaNSResolver</code>.
   * @return An implementation of <code>XQillaNSResolver</code>
   */
  static XQillaNSResolver *createNSResolver(XERCES_CPP_NAMESPACE_QUALIFIER DOMNode* nodeResolver,
                                            XPath2MemoryManager *memMgr);

  /**
   * Create a new XPath2MemoryManager object. This
   * object is allocated on the heap, and should be deleted
   * at the end of it's life. However, deleting an
   * XPath2MemoryManager deletes all objects allocated using
   * it.
   */
  static XPath2MemoryManager *createMemoryManager();

  //@}
};


#endif //__XQILLAENGINE_HPP

