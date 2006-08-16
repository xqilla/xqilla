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

//////////////////////////////////////////////////////////////////////
// XQDOMConstructor.cpp: implementation of the XQDOMConstructor class.
//////////////////////////////////////////////////////////////////////

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/XQDOMConstructor.hpp>
#include <xqilla/ast/XQDebugHook.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/ast/XQLiteral.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/context/XQScopedNamespace.hpp>
#include <xqilla/exceptions/ASTException.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/utils/XMLChCompare.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/items/AnyAtomicTypeConstructor.hpp>
#include <xqilla/ast/XQAtomize.hpp>

#include <xercesc/dom/DOM.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/framework/XMLBuffer.hpp>
#include <xercesc/util/XMLUniDefs.hpp>
#include <xercesc/util/XMLChar.hpp>
#include <assert.h>
#include <set>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

static const XMLCh *definePrefix(const XMLCh *szPrefix, const XMLCh *szURI, const XQScopedNamespace &newNSScope,
                                 XQScopedNamespace &locallyDefinedNamespaces, std::vector<Node::Ptr> &attrList,
                                 DynamicContext *context);

XQDOMConstructor::XQDOMConstructor(const XMLCh* nodeType, ASTNode* name, VectorOfASTNodes* attrList, VectorOfASTNodes* children, XPath2MemoryManager* expr) :
  ASTNodeImpl(expr),
  m_name(name),
  m_attrList(attrList),
  m_children(children)
{
  m_nodeType=nodeType;
  setType(ASTNode::DOM_CONSTRUCTOR);
}

bool XQDOMConstructor::isTextNode(const Node::Ptr &node) const
{
  return node->dmNodeKind() == Node::text_string;
}

Sequence XQDOMConstructor::collapseTreeInternal(DynamicContext *context, int flags) const 
{
    Node::Ptr result;
    try
    {
      // DOCUMENT node
      if(m_nodeType == Node::document_string)
      {
        std::vector<Node::Ptr> childList;

        for (VectorOfASTNodes::const_iterator itCont = m_children->begin(); itCont != m_children->end (); ++itCont) 
        {
          ASTNode* childItem=(*itCont);
          Result oneChild = childItem->collapseTree(context);
          Item::Ptr child;
          bool lastWasAtomic = false;
          while((child = oneChild->next(context)) != NULLRCP)
          {
            if(child->isNode())
            {
              lastWasAtomic = false;
              Node::Ptr sourceNode=(Node::Ptr)child;
              // If the content sequence contains an attribute node following a node that is not an attribute node, a type error is raised [err:XPTY0004].
              if(sourceNode->dmNodeKind()==Node::attribute_string)
                XQThrow(ASTException,X("DOM Constructor"),X("An attribute node cannot be a child of a document [err:XPTY0004]."));
              // If the content sequence contains a document node, the document node is replaced in the content 
              // sequence by its children.
              else if(sourceNode->dmNodeKind()==Node::document_string) {
                Result children = sourceNode->dmChildren(context);
                Node::Ptr childNode;
                while((childNode = children->next(context)).notNull()) {
                  childList.push_back(childNode);
                }
              }
              // Adjacent text nodes in the content sequence are merged into a single text node by concatenating 
              // their contents, with no intervening blanks. After concatenation, any text node whose content is 
              // a zero-length string is deleted from the content sequence.
              else if(isTextNode(sourceNode) && !childList.empty() && isTextNode(childList.back())) {
                const XMLCh* buff=XPath2Utils::concatStrings(childList.back()->dmStringValue(context),
                                                             sourceNode->dmStringValue(context),
                                                             context->getMemoryManager());
                childList.pop_back();
                childList.push_back(context->getItemFactory()->createTextNode(buff, context));
              }
              else {
                // if it's a text node, ensure it's not empty
                if(!isTextNode(sourceNode) || !XPath2Utils::equals(sourceNode->dmStringValue(context),0))
                  childList.push_back(sourceNode);
              }
            }
            else
            {
              const XMLCh* valueStr=child->asString(context);
              if(lastWasAtomic)
              {
                XMLCh space[]={ ' ', 0 };
                valueStr=XPath2Utils::concatStrings(space,valueStr,context->getMemoryManager());
              }
              lastWasAtomic = true;
              // empty strings are stripped
              if(*valueStr)
              {
              if(!childList.empty() && isTextNode(childList.back())) {
                  const XMLCh* buff=XPath2Utils::concatStrings(childList.back()->dmStringValue(context),valueStr,context->getMemoryManager());

                  childList.pop_back();
                  childList.push_back(context->getItemFactory()->createTextNode(buff, context));
                }
                else {
                  childList.push_back(context->getItemFactory()->createTextNode(valueStr, context));
                }
              }
            }
          }
        }
        result = context->getItemFactory()->createDocumentNode(childList, context);
      }

      // ELEMENT node
      else if(m_nodeType == Node::element_string)
      {
        Result resName=m_name->collapseTree(context);
        AnyAtomicType::Ptr itemName=resName->next(context);
        if(itemName==NULLRCP || resName->next(context)!=NULLRCP)
          XQThrow(ASTException,X("DOM Constructor"),X("The name for the element must be a single xs:QName, xs:string or xs:untypedAtomic item [err:XPTY0004]"));

        std::vector<Node::Ptr> attrList;
        std::vector<ItemFactory::ElementChild> childList;

        // Add a new scope for the namespace definitions, before we try to assign a URI to the name of the element
        XQScopedNamespace locallyDefinedNamespaces(context->getMemoryManager(), NULL);
        XQScopedNamespace newNSScope(context->getMemoryManager(), context->getNSResolver());
        AutoNsScopeReset jan(context, &newNSScope);

        if(m_attrList != 0) {
          for(VectorOfASTNodes::const_iterator itAttr = m_attrList->begin(); itAttr != m_attrList->end (); ++itAttr) {
            Result oneAttribute = (*itAttr)->collapseTree(context);
            Item::Ptr attr;
            while((attr = oneAttribute->next(context)) != NULLRCP) {
              assert(attr->isNode());
              Node::Ptr node=(Node::Ptr)attr;
              if(node->dmNodeKind() == Node::attribute_string) {
                ATQNameOrDerived::Ptr name = node->dmNodeName(context);
                const XMLCh *node_prefix = ((const ATQNameOrDerived*)name.get())->getPrefix();
                const XMLCh *node_name = ((const ATQNameOrDerived*)name.get())->getName();

                // check for namespace nodes
                if(XPath2Utils::equals(node_name, XMLUni::fgXMLNSString)) {
                  locallyDefinedNamespaces.addNamespaceBinding(XMLUni::fgZeroLenString, node->dmStringValue(context));
                  context->setDefaultElementAndTypeNS(node->dmStringValue(context));
                }
                else if(node_prefix && XPath2Utils::equals(node_prefix, XMLUni::fgXMLNSString)) {
                  locallyDefinedNamespaces.addNamespaceBinding(node_name, node->dmStringValue(context));
                  context->setNamespaceBinding(node_name, node->dmStringValue(context));
                }

                attrList.push_back(node);
              }
            }
          }
        }

        const XMLCh* nodeUri=NULL, *nodePrefix=NULL, *nodeName=NULL;
        if(itemName->getPrimitiveTypeIndex()==AnyAtomicType::QNAME)
        {
          const ATQNameOrDerived* pQName=(const ATQNameOrDerived*)(const AnyAtomicType*)itemName;
          nodeUri=pQName->getURI();
          nodePrefix=pQName->getPrefix();
          nodeName=pQName->getName();
        }
        else if(itemName->getPrimitiveTypeIndex()==AnyAtomicType::STRING || itemName->getPrimitiveTypeIndex()==AnyAtomicType::UNTYPED_ATOMIC)
        {
          const XMLCh* pString=itemName->asString(context);
          if(!XERCES_CPP_NAMESPACE_QUALIFIER XMLChar1_0::isValidQName(pString, XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(pString)))
            XQThrow(ASTException,X("DOM Constructor"),X("The name for the element cannot be converted to a xs:QName [err:XQDY0074]"));

          nodePrefix=XPath2NSUtils::getPrefix(pString, context->getMemoryManager());
          try
          {
            nodeUri=context->getUriBoundToPrefix(nodePrefix);
          }
          catch(NamespaceLookupException&)
          {
            XQThrow(ASTException,X("DOM Constructor"),X("The name for the element cannot be converted to a xs:QName because the prefix is undefined [err:XQDY0074]"));
          }
          // if the prefix was empty and we didn't find a xmlns=".." declaration in the scope, use the default element/type ns
          if((nodePrefix==0 || *nodePrefix==0) && (nodeUri==0 || *nodeUri==0))
            nodeUri=context->getDefaultElementAndTypeNS();
          // keep the specified prefix in the node name
          nodeName=pString;
        }
        else
          XQThrow(ASTException,X("DOM Constructor"),X("The name for the element must be either a xs:QName, xs:string or xs:untypedAtomic [err:XPTY0004]"));

        // TODO: what error should we return if the string is empty?
        if(XMLString::stringLen(nodeName)==0)
          XQThrow(ASTException,X("DOM Constructor"),X("The name for the element is empty"));

        for (VectorOfASTNodes::const_iterator itCont = m_children->begin(); itCont != m_children->end (); ++itCont)
        {
          ASTNode* childItem=(*itCont);
          Result children=childItem->collapseTree(context);
          Item::Ptr child;
          bool lastWasAtomic = false;
          while((child = children->next(context)) != NULLRCP)
          {
            if(child->isNode())
            {
              lastWasAtomic = false;
              Node::Ptr sourceNode = (Node::Ptr)child;

              // DOCUMENT node
              if(sourceNode->dmNodeKind() == Node::document_string)
              {
                Result children = sourceNode->dmChildren(context);
                Node::Ptr childNode;
                while((childNode = children->next(context)).notNull()) {
                  childList.push_back(childNode);
                }
              }

              // ATTRIBUTE node
              else if(sourceNode->dmNodeKind() == Node::attribute_string)
              {
                if(!childList.empty())
                  XQThrow(ASTException,X("DOM Constructor"),X("Attribute nodes must be created before the other child nodes of an element [err:XQTY0024]"));

                // check if the attribute has a prefix that has been defined
                ATQNameOrDerived::Ptr name = sourceNode->dmNodeName(context);
                const XMLCh *szPrefix = ((const ATQNameOrDerived*)name.get())->getPrefix();
                const XMLCh *szURI = ((const ATQNameOrDerived*)name.get())->getURI();
                if(szPrefix!=NULL && *szPrefix!=0)
                {
                  const XMLCh *newPrefix = definePrefix(szPrefix, szURI, newNSScope, locallyDefinedNamespaces, attrList, context);
                  if(newPrefix != szPrefix)
                  {
                    sourceNode = context->getItemFactory()->
                      createAttributeNode(szURI, newPrefix, ((const ATQNameOrDerived*)name.get())->getName(), sourceNode->dmStringValue(context), context);
                  }
                }
                attrList.push_back(sourceNode);
              }

              else
              {
                if(isTextNode(sourceNode) && !childList.empty() && isTextNode(childList.back())) {
                  const XMLCh* buff=XPath2Utils::concatStrings(childList.back()->dmStringValue(context),
                                                               sourceNode->dmStringValue(context),
                                                               context->getMemoryManager());
                  childList.pop_back();
                  childList.push_back(ItemFactory::ElementChild(context->getItemFactory()->createTextNode(buff, context), /*clone*/false));
                }
                else {
                  ASTNode* pChild=childItem;
                  if((unsigned int)pChild->getType()==ASTNode::DEBUG_HOOK)
                    pChild=((XQDebugHook*)pChild)->m_impl;
                  // if it's a text node, ensure it's not empty
                  if(!isTextNode(sourceNode) || !XPath2Utils::equals(sourceNode->dmStringValue(context),0))
                    // if the node we should add as a child was generated by a DOM constructor, we can skip cloning it
                    childList.push_back(ItemFactory::ElementChild(sourceNode, (unsigned int)pChild->getType()!=ASTNode::DOM_CONSTRUCTOR));
                }
              }
            }
            else
            {
              const XMLCh* valueStr=child->asString(context);
              if(lastWasAtomic)
              {
                XMLCh space[]={ ' ', 0 };
                valueStr=XPath2Utils::concatStrings(space,valueStr,context->getMemoryManager());
              }
              lastWasAtomic = true;
              // empty strings are stripped
              if(*valueStr)
              {
                if(!childList.empty() && isTextNode(childList.back())) {
                  const XMLCh* buff=XPath2Utils::concatStrings(childList.back()->dmStringValue(context),valueStr,context->getMemoryManager());
                        
                  childList.pop_back();
                  childList.push_back(context->getItemFactory()->createTextNode(buff, context));
                }
                else {
                  childList.push_back(context->getItemFactory()->createTextNode(valueStr, context));
                }
              }
            }
          }
        }
        result = context->getItemFactory()->createElementNode(nodeUri, nodePrefix, nodeName, attrList, childList, context);
      }

      // ATTRIBUTE node
      else if(m_nodeType == Node::attribute_string)
      {
        Result resName=m_name->collapseTree(context);
        AnyAtomicType::Ptr itemName=resName->next(context);
        if(itemName==NULLRCP || resName->next(context)!=NULLRCP)
          XQThrow(ASTException,X("DOM Constructor"),X("The name for the attribute must be a single xs:QName, xs:string or xs:untypedAtomic item [err:XPTY0004]"));

        const XMLCh* nodeUri=NULL, *nodePrefix=NULL, *nodeName=NULL;
        if(itemName->getPrimitiveTypeIndex()==AnyAtomicType::QNAME)
        {
          const ATQNameOrDerived* pQName=(const ATQNameOrDerived*)(const AnyAtomicType*)itemName;
          nodePrefix=pQName->getPrefix();
          // ignore the URI unless we have a prefix (xs:QName created by the parser 
          if(nodePrefix!=NULL && *nodePrefix!=0)
            nodeUri=pQName->getURI();
          nodeName=pQName->getName();
        }
        else if(itemName->getPrimitiveTypeIndex()==AnyAtomicType::STRING || itemName->getPrimitiveTypeIndex()==AnyAtomicType::UNTYPED_ATOMIC)
        {
          const XMLCh* pString=itemName->asString(context);
          if(!XERCES_CPP_NAMESPACE_QUALIFIER XMLChar1_0::isValidQName(pString, XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(pString)))
            XQThrow(ASTException,X("DOM Constructor"),X("The name for the attribute cannot be converted to a xs:QName [err:XQDY0074]"));
          nodePrefix=XPath2NSUtils::getPrefix(pString, context->getMemoryManager());
          // if the prefix was empty we are in no namespace
          if(nodePrefix==0 || *nodePrefix==0)
            nodeUri=NULL;
          else
            try
            {
              nodeUri=context->getUriBoundToPrefix(nodePrefix);
            }
            catch(NamespaceLookupException&)
            {
              XQThrow(ASTException,X("DOM Constructor"),X("The name for the attribute cannot be converted to a xs:QName because the prefix is undefined [err:XQDY0074]"));
            }
          // keep the specified prefix in the node name
          nodeName=pString;
        }
        else
          XQThrow(ASTException,X("DOM Constructor"),X("The name for the attribute must be either a xs:QName, xs:string or xs:untypedAtomic [err:XPTY0004]"));

        if(nodeUri==NULL && XPath2Utils::equals(nodeName, XMLUni::fgXMLNSString))
          nodeUri=XMLUni::fgXMLNSURIName;
        // TODO: add a flag to distinguish between direct attribute constructors and computed constructor: this test must
        // be done only on computed attribute constuctors
        //if(XPath2Utils::equals(nodeUri, XMLUni::fgXMLNSURIName))
        //    XQThrow(ASTException,X("DOM Constructor"),X("A computed attribute constructor cannot create a namespace declaration [err:XQ0044]"));

        // TODO: what error should we return if the string is empty?
        if(XMLString::stringLen(nodeName)==0)
          XQThrow(ASTException,X("DOM Constructor"),X("The name for the attribute is empty"));

        XMLBuffer value;
        getStringValue(value, context);
        result = context->getItemFactory()->createAttributeNode(nodeUri, nodePrefix, nodeName, value.getRawBuffer(), context);
      }

      // PROCESSING INSTRUCTION node
      else if(m_nodeType == Node::processing_instruction_string)
      {
        Result resName=m_name->collapseTree(context);
        AnyAtomicType::Ptr itemName=resName->next(context);
        if(itemName==NULLRCP || resName->next(context)!=NULLRCP)
          XQThrow(ASTException,X("DOM Constructor"),X("The target for the processing instruction must be a single xs:NCName, xs:string or xs:untypedAtomic item [err:XPTY0004]"));

        const XMLCh* nodeName=NULL;
        // the specs specify that a xs:NCName could be returned, but we create a xs:string in that case
        if(itemName->getPrimitiveTypeIndex()==AnyAtomicType::STRING || itemName->getPrimitiveTypeIndex()==AnyAtomicType::UNTYPED_ATOMIC)
        {
          nodeName=itemName->asString(context);
          if(!XMLChar1_0::isValidNCName(nodeName, XMLString::stringLen(nodeName)))
            XQThrow(ASTException,X("DOM Constructor"),X("The target for the processing instruction must be a valid xs:NCName [err:XQDY0041]"));
        }
        else
          XQThrow(ASTException,X("DOM Constructor"),X("The target for the processing instruction must be a single xs:NCName, xs:string or xs:untypedAtomic item [err:XPTY0004]"));

        if(XMLString::compareIString(nodeName, XMLUni::fgXMLString)==0)
          XQThrow(ASTException,X("DOM Constructor"),X("The target for the processing instruction must not be 'XML' [err:XQDY0064]"));
        int nIndex=XMLString::indexOf(nodeName, chQuestion);
        int nTargetLen=XMLString::stringLen(nodeName);
        while(nIndex!=-1)
        {
          if((nIndex+1)<nTargetLen && nodeName[nIndex+1]==chCloseAngle)
            XQThrow(ASTException,X("DOM Constructor"),X("The target for the processing instruction must not contain the string '?>' [err:XQDY0026]"));
          nIndex=XMLString::indexOf(nodeName, chQuestion, nIndex+1);
        }

        if(XMLString::stringLen(nodeName)==0)
          XQThrow(ASTException,X("DOM Constructor"),X("The name for the processing instruction is empty"));
        XMLBuffer value;
        getStringValue(value, context);

        // Check for the substring "?>"
        bool foundQ = false;
        const XMLCh *ptr = value.getRawBuffer();
        const XMLCh *end = ptr + value.getLen();
        while(ptr != end) {
          if(*ptr == chCloseAngle && foundQ)
            XQThrow(ASTException,X("DOM Constructor"),X("The content for the processing instruction must not contain the string '?>' [err:XQDY0026]"));
          else if(*ptr == chQuestion) foundQ = true;
          else foundQ = false;
          ++ptr;
        }

        const XMLCh* piContent=value.getRawBuffer();
        // remove leading whitespace
        while(XERCES_CPP_NAMESPACE_QUALIFIER XMLChar1_0::isWhitespace(*piContent)) piContent++;

        result = context->getItemFactory()->createPINode(nodeName, piContent, context);
      }

      // COMMENT node
      else if(m_nodeType == Node::comment_string)
      {
        XMLBuffer value;
        getStringValue(value, context);

        // Check for two dashes in a row, or a dash at the end
        bool foundDash = false;
        const XMLCh *ptr = value.getRawBuffer();
        const XMLCh *end = ptr + value.getLen();
        while(ptr != end) {
          if(*ptr == chDash) {
            if(foundDash) break;
            foundDash = true;
          }
          else foundDash = false;
          ++ptr;
        }
        if(foundDash)
          XQThrow(ASTException,X("DOM Constructor"),X("It is a dynamic error if the result of the content expression of a computed comment constructor contains two adjacent hyphens or ends with a hyphen. [err:XQDY0072]"));

        result = context->getItemFactory()->createCommentNode(value.getRawBuffer(), context);
      }

      // TEXT node
      else if(m_nodeType == Node::text_string)
      {
        XMLBuffer value;
        if(getStringValue(value, context))
          result = context->getItemFactory()->createTextNode(value.getRawBuffer(), context);
      }
      // CDATA node
      else if(m_nodeType == Node::cdata_string)
      {
        XMLBuffer value;
        if(getStringValue(value, context))
          result = context->getItemFactory()->createTextNode(value.getRawBuffer(), context);
      }
      else
      {
        assert(false);
      }
    }
    catch(DOMException& e) {
        XQThrow(ASTException,X("DOM Constructor"),e.getMessage());
    }
    if(result.notNull())
        return Sequence(result, context->getMemoryManager());
    return Sequence(context->getMemoryManager());
}

ASTNode* XQDOMConstructor::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  {
      // Add a new scope for the namespace definitions
      XQScopedNamespace newNSScope(context->getMemoryManager(), context->getNSResolver());
      AutoNsScopeReset jan(context, &newNSScope);
      unsigned int i;
      if(m_attrList != 0) {
        for (i=0;i<m_attrList->size();i++) {
          (*m_attrList)[i] = (*m_attrList)[i]->staticResolution(context);
          _src.add((*m_attrList)[i]->getStaticResolutionContext()); 
        }
        // after we have added all the namespace declaration, check for duplicate attributes
        std::set<const XMLCh*, XMLChSort> attrNames;
        AutoDelete<DynamicContext> dContext(context->createDynamicContext());
        dContext->setMemoryManager(context->getMemoryManager());
        for (i=0;i<m_attrList->size();i++) 
        {
          if((*m_attrList)[i]->getType()==ASTNode::DOM_CONSTRUCTOR)
          {
            const ASTNode* dItem=((XQDOMConstructor*)(*m_attrList)[i])->getName();
            if(dItem->getType()==ASTNode::SEQUENCE)
            {
              const ItemConstructor::Vector &ics = ((XQSequence*)dItem)->getItemConstructors();
              if(ics.size() == 1) {
                Item::Ptr item = ics[0]->createItem(dContext);
                QualifiedName attrName(item->asString(dContext));
                XMLBuffer buff(200, dContext->getMemoryManager());
                if(attrName.getPrefix()!=0 && *attrName.getPrefix()!=0)
                {
                    buff.append(chOpenCurly);
                    buff.append(dContext->getUriBoundToPrefix(attrName.getPrefix()));
                    buff.append(chCloseCurly);
                }
                buff.append(attrName.getName());
                if(attrNames.find(buff.getRawBuffer())!=attrNames.end())
                    if(XPath2Utils::equals(attrName.getFullName(dContext->getMemoryManager()), XMLUni::fgXMLNSString) ||
                       XPath2Utils::equals(attrName.getPrefix(), XMLUni::fgXMLNSString))
                      XQThrow(StaticErrorException,X("DOM Constructor"),X("Two namespace declaration attributes specified by a direct element constructor do not have distinct names. [err:XQST0071]"));
                    else
                      XQThrow(StaticErrorException,X("DOM Constructor"),X("Two attributes specified by a direct element constructor do not have distinct expanded QNames. [err:XQST0040]"));
                attrNames.insert(XMLString::replicate(buff.getRawBuffer(), dContext->getMemoryManager()));
              }
            }
          }
        }
      }
    for (i=0;i<m_children->size();i++) {
      // normalize whitespace and expand entities in string literals
      if((m_nodeType == Node::attribute_string || m_nodeType == Node::element_string)
          && (*m_children)[i]->getType()==LITERAL)
      {
        AutoDelete<DynamicContext> dContext(context->createDynamicContext());
        dContext->setMemoryManager(mm);
		XQLiteral *lit = (XQLiteral*)(*m_children)[i];
        Item::Ptr item = lit->getItemConstructor()->createItem(dContext);
		if(((AnyAtomicType*)(const Item*)item)->getPrimitiveTypeIndex()==AnyAtomicType::STRING)
        {
            const XMLCh* str=item->asString(dContext);
            XMLBuffer buff(XMLString::stringLen(str)+1, mm);
            buff.append(str);
            if(m_nodeType == Node::attribute_string)
                XMLString::replaceWS(buff.getRawBuffer(), mm);
            unescapeEntities(buff);
		    AnyAtomicTypeConstructor *newIC = new (mm)
    		    AnyAtomicTypeConstructor(
						    XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
						    XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
                mm->getPooledString(buff.getRawBuffer()), AnyAtomicType::STRING);
            lit->setItemConstructor(newIC);
        }
      }
      if(m_nodeType == Node::attribute_string ||
         m_nodeType == Node::processing_instruction_string ||
         m_nodeType == Node::comment_string ||
         m_nodeType == Node::text_string ||
         m_nodeType == Node::cdata_string) {
        (*m_children)[i] = new (mm) XQAtomize((*m_children)[i], mm);
      }
      (*m_children)[i] = (*m_children)[i]->staticResolution(context);
      _src.add((*m_children)[i]->getStaticResolutionContext());

    }

    // verify namespace prefixes for embedded node constructors
    if(m_name && m_name->getType() == ASTNode::LITERAL) {
      const ItemConstructor* itemConstr=((XQLiteral*)m_name)->getItemConstructor();
      // if the type is xs:QName, it was a named constructor, and it must be checked
      if(XPath2Utils::equals(itemConstr->getTypeURI(),XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA) &&
         XPath2Utils::equals(itemConstr->getTypeName(),XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_QNAME)) 
      {
        // createItem will throw an exception if the prefix is undefined
        try 
        {
          AutoDelete<DynamicContext> dContext(context->createDynamicContext());
          dContext->setMemoryManager(context->getMemoryManager());
          AnyAtomicType::Ptr atomName = itemConstr->createItem(dContext);
        }
        catch(XQException& e)
            {
          XMLBuffer buff(1023, context->getMemoryManager());
          buff.set(e.getError());
          int index=XMLString::indexOf(buff.getRawBuffer(),chOpenSquare);
          if(index!=-1)
            XMLString::copyString(buff.getRawBuffer()+index, X("[err:XPST0081]"));
          else
            buff.append(X("[err:XPST0081]"));
          XQThrow(StaticErrorException, X("XQDOMConstructor::staticResolution"), buff.getRawBuffer());
        }
      }
    }
  }

  if(m_name != 0) {
    m_name = new (mm) XQAtomize(m_name, mm);
    m_name = m_name->staticResolution(context);
    _src.add(m_name->getStaticResolutionContext());
  }

  if(m_nodeType==Node::attribute_string && m_name->isConstant()) {
    AutoDelete<DynamicContext> dContext(context->createDynamicContext());
    dContext->setMemoryManager(context->getMemoryManager());

    Item::Ptr item;
    if(m_name->getType() == ASTNode::LITERAL) {
      item = ((XQLiteral*)m_name)->getItemConstructor()->createItem(dContext);
    }
    else if(m_name->getType() == ASTNode::SEQUENCE) {
      const ItemConstructor::Vector &ics = ((XQSequence*)m_name)->getItemConstructors();
      if(ics.size() == 1) {
        item = ics[0]->createItem(dContext);
      }
    }

    if(item != NULLRCP && item->isAtomicValue()) {
      AnyAtomicType::Ptr atomName=item;
      const XMLCh* strName;
      if(atomName->getPrimitiveTypeIndex()==AnyAtomicType::QNAME)
      {
        const ATQNameOrDerived* pQName=(const ATQNameOrDerived*)(const AnyAtomicType*)atomName;
        strName=pQName->castAs(XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING, dContext)->asString(dContext);
      }
      else
        strName = atomName->asString(dContext);
      const XMLCh* XMLNSPrefix=NULL;
      if(XPath2Utils::equals(strName,XMLUni::fgXMLNSString)) {
        XMLNSPrefix=XMLUni::fgZeroLenString;
      }
      else if(XPath2Utils::equals(XPath2NSUtils::getPrefix(strName, context->getMemoryManager()),
                                                               XMLUni::fgXMLNSString)) {
        XMLNSPrefix=XPath2NSUtils::getLocalName(strName);
      }

      if(XMLNSPrefix!=NULL) {
        // we are a namespace attribute: check that we have a constant value
        if(m_children->size()==0) { // TODO: supporting Namespace 1.1 would mean unsetting the binding...
          if(XMLNSPrefix != XMLUni::fgZeroLenString) {
            context->setNamespaceBinding(XMLNSPrefix, XMLUni::fgZeroLenString);
          }
          else {
            context->setDefaultElementAndTypeNS(XMLUni::fgZeroLenString);
          }
        }
        else if(m_children->size()>1 || (*m_children)[0]->getType()!=ASTNode::SEQUENCE) {
          XQThrow(StaticErrorException,X("DOM Constructor"),X("The value of a namespace declaration attribute must be a literal string [err:XQST0022]"));
        }
        else {
          ASTNode *child = (*m_children)[0];
          Item::Ptr nsUri;
          if(child->getType() == ASTNode::LITERAL) {
            nsUri = ((XQLiteral*)child)->getItemConstructor()->createItem(dContext);
          }
          else if(child->getType() == ASTNode::SEQUENCE) {
            const ItemConstructor::Vector &ics = ((XQSequence*)child)->getItemConstructors();
            if(ics.size() == 1) {
              nsUri = ics[0]->createItem(dContext);
            }
          }

          if(nsUri == NULLRCP)
            XQThrow(StaticErrorException,X("DOM Constructor"),X("The value of a namespace declaration attribute must be a literal string [err:XQST0022]"));
          if(XMLNSPrefix != XMLUni::fgZeroLenString) {
            context->setNamespaceBinding(XMLNSPrefix, nsUri->asString(dContext));
          }
          else {
            context->setDefaultElementAndTypeNS(nsUri->asString(dContext));
          }
        }
      }
    }
  }

  _src.getStaticType().flags = StaticType::NODE_TYPE;
  _src.forceNoFolding(true);
  _src.creative(true);
  return this; // Never constant fold
}

bool XQDOMConstructor::getStringValue(XMLBuffer &value, DynamicContext *context) const
{
  bool bSomethingFound=false;
  for(VectorOfASTNodes::const_iterator itCont = m_children->begin();
      itCont != m_children->end (); ++itCont) {
    Result childList = (*itCont)->collapseTree(context);
    Item::Ptr child;
    bool addSpace = false;
    while((child = childList->next(context)) != NULLRCP) {
      if(addSpace) value.append(' ');
      else addSpace = true;
      value.append(child->asString(context));
      bSomethingFound=true;
    }
  }
  return bSomethingFound;
}

const XMLCh *definePrefix(const XMLCh *szPrefix, const XMLCh *szURI, const XQScopedNamespace &newNSScope,
                          XQScopedNamespace &locallyDefinedNamespaces, std::vector<Node::Ptr> &attrList,
                          DynamicContext *context)
{
  // check if the attribute has a prefix that has been defined
  const XMLCh* associatedURI=newNSScope.lookupNamespaceURI(szPrefix);
  if(associatedURI==NULL) // prefix is not defined
  {
    locallyDefinedNamespaces.addNamespaceBinding(szPrefix,szURI);
    context->setNamespaceBinding(szPrefix, szURI);
    attrList.push_back(context->getItemFactory()->
      createAttributeNode(XMLUni::fgXMLNSURIName, XMLUni::fgXMLNSString, szPrefix, szURI, context));
  }
  else if(!XPath2Utils::equals(szURI, associatedURI))  // prefix is defined, but it is associated to another URI
  {
    if(locallyDefinedNamespaces.lookupNamespaceURI(szPrefix)==NULL)    // prefix is inherited, override it
    {
      locallyDefinedNamespaces.addNamespaceBinding(szPrefix,szURI);
      context->setNamespaceBinding(szPrefix, szURI);
      attrList.push_back(context->getItemFactory()->
        createAttributeNode(XMLUni::fgXMLNSURIName, XMLUni::fgXMLNSString, szPrefix, szURI, context));
    }
    else // prefix is defined here, rename it
    {
      XMLCh szNumBuff[20];
      const XMLCh *szInitialPrefix = szPrefix;
      long index = 1;
      while(locallyDefinedNamespaces.lookupNamespaceURI(szPrefix) != NULL) {
        static XMLCh szUnderScore[] = { chUnderscore, chNull };
        XMLString::binToText(index++, szNumBuff, 19, 10);
        szPrefix = XPath2Utils::concatStrings(szInitialPrefix, szUnderScore, szNumBuff, context->getMemoryManager());
      }

      locallyDefinedNamespaces.addNamespaceBinding(szPrefix,szURI);
      context->setNamespaceBinding(szPrefix, szURI);
      attrList.push_back(context->getItemFactory()->
        createAttributeNode(XMLUni::fgXMLNSURIName, XMLUni::fgXMLNSString, szPrefix, szURI, context));
    }
  }

  return szPrefix;
}

const XMLCh* XQDOMConstructor::getNodeType() const
{
  return m_nodeType;
}

const ASTNode *XQDOMConstructor::getName() const
{
  return m_name;
}

const VectorOfASTNodes *XQDOMConstructor::getAttributes() const
{
  return m_attrList;
}

const VectorOfASTNodes *XQDOMConstructor::getChildren() const
{
  return m_children;
}

void XQDOMConstructor::setName(ASTNode *name)
{
  m_name = name;
}

void XQDOMConstructor::unescapeEntities(XMLBuffer& buff) const
{
    const XMLCh* value=buff.getRawBuffer();
    unsigned int len=buff.getLen();
	int j=0;
	XMLCh* dst=(XMLCh*)value;
	for(unsigned int i=0;i<len;i++)
	{
		if(value[i]==chAmpersand) // entity reference
		{
            if(XMLString::compareNString(value+i+1,XMLUni::fgAmp,3)==0 && *(value+i+1+3)==chSemiColon) {
				dst[j++]=chAmpersand; i+=4;
            } else if(XMLString::compareNString(value+i+1,XMLUni::fgQuot,4)==0 && *(value+i+1+4)==chSemiColon) {
				dst[j++]=chDoubleQuote; i+=5;
			} else if(XMLString::compareNString(value+i+1,XMLUni::fgApos,4)==0 && *(value+i+1+4)==chSemiColon) {
				dst[j++]=chSingleQuote; i+=5;
			} else if(XMLString::compareNString(value+i+1,XMLUni::fgLT,2)==0 && *(value+i+1+2)==chSemiColon) {
				dst[j++]=chOpenAngle; i+=3;
            } else if(XMLString::compareNString(value+i+1,XMLUni::fgGT,2)==0 && *(value+i+1+2)==chSemiColon) {
				dst[j++]=chCloseAngle; i+=3;
			} else if(*(value+i+1)==chPound) {
                unsigned int number = 0;
                unsigned int radix = 10;
				i+=2;
                if(*(value+i)==chLatin_x)
                {
                    i++;
                    radix=16;
                }
				unsigned int k=i;
				while(k<len && value[k]!=chSemiColon) k++;
				if(k==len)
					XQThrow(ASTException,X("DOM Constructor"),X("Unterminated entity reference [err:XPST0003]."));
                for(unsigned int q=i;q<k;q++)
                {
                    unsigned int nextVal;
                    XMLCh nextCh=*(value+q);
                    if ((nextCh >= chDigit_0) && (nextCh <= chDigit_9))
                        nextVal = (unsigned int)(nextCh - chDigit_0);
                    else if ((nextCh >= chLatin_A) && (nextCh <= chLatin_F))
                        nextVal= (unsigned int)(10 + (nextCh - chLatin_A));
                    else if ((nextCh >= chLatin_a) && (nextCh <= chLatin_f))
                        nextVal = (unsigned int)(10 + (nextCh - chLatin_a));
                    else
    					XQThrow(ASTException,X("DOM Constructor"),X("Unterminated entity reference [err:XPST0003]."));
                    if (nextVal >= radix)
    					XQThrow(ASTException,X("DOM Constructor"),X("Invalid digit inside entity reference [err:XPST0003]."));
                    else
                        number = (number * radix) + nextVal;
                }
                if(!XMLChar1_0::isXMLChar(number))
    				XQThrow(ASTException,X("DOM Constructor"),X("Entity reference is not a valid XML character [err:XPST0003]."));
                if (number <= 0xFFFD)
    				dst[j++]=number;
                else if (number >= 0x10000 && number <= 0x10FFFF)
                {
                    number -= 0x10000;
                    dst[j++]= XMLCh((number >> 10) + 0xD800);
                    dst[j++]= XMLCh((number & 0x3FF) + 0xDC00);
                }
				i=k;
			} else
    			XQThrow(ASTException,X("DOM Constructor"),X("Invalid entity reference [err:XPST0003]."));
		}
        else
            dst[j++]=value[i];
	}
	dst[j++]=0;
}
