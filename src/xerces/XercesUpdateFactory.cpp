/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Oracle. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#include "../config/xqilla_config.h"

#include "XercesUpdateFactory.hpp"
#include "XercesNodeImpl.hpp"

#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/MessageListener.hpp>
#include <xqilla/exceptions/ASTException.hpp>
#include <xqilla/update/PendingUpdateList.hpp>
#include <xqilla/schema/DocumentCacheImpl.hpp>
#include <xqilla/dom-api/impl/XQillaNSResolverImpl.hpp>

#include <xercesc/dom/DOM.hpp>
#include <xercesc/framework/LocalFileFormatTarget.hpp>
#include <xercesc/util/XMLUniDefs.hpp>
#include <xercesc/framework/XMLBuffer.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

static const XMLCh file_scheme[] = { chLatin_f, chLatin_i, chLatin_l, chLatin_e, 0 };
static const XMLCh utf8_str[] = { chLatin_u, chLatin_t, chLatin_f, chDash, chDigit_8, 0 };

void XercesUpdateFactory::applyPut(const PendingUpdate &update, DynamicContext *context)
{
  const XercesNodeImpl *nodeImpl = (const XercesNodeImpl*)update.getTarget()->getInterface(Item::gXQilla);
  const DOMNode *domnode = nodeImpl->getDOMNode();

  const XMLCh *encoding = 0;
  if(domnode->getNodeType() == DOMNode::DOCUMENT_NODE) {
    // Use the document's encoding, if this is a document node
    encoding = ((DOMDocument*)domnode)->getEncoding();
  }
  if(encoding == 0 || *encoding == 0) {
    // Otherwise, just use UTF-8
    encoding = utf8_str;
  }

  PutItem item(update.getValue().first()->asString(context), encoding, domnode, &update);

  if(XPath2Utils::equals(item.uri.getScheme(), file_scheme)) {
    std::pair<PutList::iterator, bool> res = putList_.insert(item);
    if(!res.second) {
      if(context->getMessageListener() != 0) {
        context->getMessageListener()->warning(X("In the context of this expression"), res.first->location);
      }

      XMLBuffer buf;
      buf.append(X("fn:put() called with the URI \""));
      buf.append(item.uri.getUriText());
      buf.append(X("\" twice."));

      XQThrow3(ASTException, X("XercesUpdateFactory::applyPut"), buf.getRawBuffer(), &update);
    }
  } else {
    XMLBuffer buf;
    buf.append(X("fn:put() URI scheme not supported for URI \""));
    buf.append(item.uri.getUriText());
    buf.append(X("\""));

    XQThrow3(ASTException, X("XercesUpdateFactory::applyPut"), buf.getRawBuffer(), &update);
  }
}

void XercesUpdateFactory::applyInsertInto(const PendingUpdate &update, DynamicContext *context)
{
  const XercesNodeImpl *nodeImpl = (const XercesNodeImpl*)update.getTarget()->getInterface(Item::gXQilla);
  DOMNode *domnode = const_cast<DOMNode*>(nodeImpl->getDOMNode());
  DOMDocument *doc = const_cast<DOMDocument*>(XPath2Utils::getOwnerDoc(domnode));

  bool untyped = XPath2Utils::equals(nodeImpl->getTypeName(), DocumentCacheParser::g_szUntyped) &&
    XPath2Utils::equals(nodeImpl->getTypeURI(), SchemaSymbols::fgURI_SCHEMAFORSCHEMA);

  bool containsElementOrText = false;

  Result children = update.getValue();
  Item::Ptr item;
  while((item = children->next(context)).notNull()) {
    const XercesNodeImpl *childImpl = (const XercesNodeImpl*)item->getInterface(Item::gXQilla);
    DOMNode *newChild = doc->importNode(const_cast<DOMNode*>(childImpl->getDOMNode()), /*deep*/true);

    if(childImpl->dmNodeKind() == Node::element_string ||
       childImpl->dmNodeKind() == Node::text_string) {
      containsElementOrText = true;
    }

    // If the type-name property of $target is xs:untyped, then upd:setToUntyped() is invoked on each
    // element or attribute node in $content.
    if(untyped) setToUntyped(newChild);

    // For each node in $content, the parent property is set to parent($target).
    // The children property of $target is modified to add the nodes in $content, preserving their order.
    domnode->appendChild(newChild);
  }

  // If at least one of the nodes in $content is an element or text node, upd:removeType($target) is invoked.
  if(containsElementOrText) {
    removeType(domnode);
  }

  addToPutList(domnode, &update, context);
}

void XercesUpdateFactory::applyInsertAttributes(const PendingUpdate &update, DynamicContext *context)
{
  const XercesNodeImpl *nodeImpl = (const XercesNodeImpl*)update.getTarget()->getInterface(Item::gXQilla);
  DOMElement *element = (DOMElement*)nodeImpl->getDOMNode();
  DOMDocument *doc = const_cast<DOMDocument*>(XPath2Utils::getOwnerDoc(element));

  bool untyped = XPath2Utils::equals(nodeImpl->getTypeName(), DocumentCacheParser::g_szUntyped) &&
    XPath2Utils::equals(nodeImpl->getTypeURI(), SchemaSymbols::fgURI_SCHEMAFORSCHEMA);

//   // For looking up the defined namespaces
//   XQillaNSResolverImpl resolver(context->getMemoryManager(), element);

  Result children = update.getValue();
  Item::Ptr item;
  while((item = children->next(context)).notNull()) {
    const XercesNodeImpl *childImpl = (const XercesNodeImpl*)item->getInterface(Item::gXQilla);
    DOMNode *newChild = doc->importNode(const_cast<DOMNode*>(childImpl->getDOMNode()), /*deep*/true);

    // 1. Error checks:
    //    a. If the QNames of any two attribute nodes in $content have implied namespace bindings that conflict with each other,
    //       a dynamic error is raised [err:XUDY0024].
    //    b. If the QName of any attribute node in $content has an implied namespace binding that conflicts with a namespace
    //       binding in the "namespaces" property of $target, a dynamic error is raised [err:XUDY0024].
    // TBD perform these checks - jpcs

    // TBD [err:XUDY0021] if the attribute already exists - jpcs

    // If the type-name property of $target is xs:untyped, then upd:setToUntyped($A) is invoked.
    if(untyped) setToUntyped(newChild);

    // The parent property of $A is set to $target.
    // attributes: Modified to include the nodes in $content.
    element->setAttributeNode((DOMAttr*)newChild);

//     // namespaces: Modified to include namespace bindings for any attribute namespace prefixes in $content
//     // that did not already have bindings.
//     const XMLCh *prefix = newChild->getPrefix();
//     if(prefix != 0 && *prefix != 0) {
//       const XMLCh *foundURI = resolver.lookupNamespaceURI(prefix);
//       if(foundURI == NULL || !XPath2Utils::equals(foundURI, newChild->getNamespaceURI())) {
//         // Prefix needs defining
//         if(element->getAttributeNS(XMLUni::fgXMLNSURIName, prefix) != NULL) {
//           // Prefix is already defined on this element -
//           // make up a new prefix for the attribute
//           // TBD is this the correct thing to do? - jpcs
//           XMLCh szNumBuff[20];
//           long index = 0;
//           do {
//             static const XMLCh szUnderScore[] = { chUnderscore, chNull };
//             XMLString::binToText(++index, szNumBuff, 19, 10);
//             prefix = XPath2Utils::concatStrings(newChild->getPrefix(), szUnderScore, szNumBuff, context->getMemoryManager());
//           } while(element->getAttributeNS(XMLUni::fgXMLNSURIName, prefix) != NULL);
//           newChild->setPrefix(prefix);
//         }
//         element->setAttributeNS(XMLUni::fgXMLNSURIName, prefix, newChild->getNamespaceURI());
//       }
//     }
  }

  // upd:removeType($target) is invoked.
  removeType(element);

  addToPutList(element, &update, context);
}

void XercesUpdateFactory::applyReplaceValue(const PendingUpdate &update, DynamicContext *context)
{
  const XercesNodeImpl *nodeImpl = (const XercesNodeImpl*)update.getTarget()->getInterface(Item::gXQilla);
  DOMNode *domnode = const_cast<DOMNode*>(nodeImpl->getDOMNode());

  // 2. If $target is a text, comment, or processing instruction node: content of $target is set to $string-value.
  domnode->setNodeValue(update.getValue().first()->asString(context));

  if(domnode->getNodeType() == DOMNode::ATTRIBUTE_NODE) {
    // 1. If $target is an attribute node:
    //       a. string-value of $target is set to $string-value. (done above)
    //       b. upd:removeType($target) is invoked.
    removeType(domnode);
  }
  else if(domnode->getNodeType() == DOMNode::TEXT_NODE ||
          domnode->getNodeType() == DOMNode::CDATA_SECTION_NODE) {
    // 3. If $target is a text node, upd:removeType(parent($target)) is invoked.
    if(domnode->getParentNode() != 0)
      removeType(domnode->getParentNode());
  }

  addToPutList(domnode, &update, context);
}

void XercesUpdateFactory::applyRename(const PendingUpdate &update, DynamicContext *context)
{
  const XercesNodeImpl *nodeImpl = (const XercesNodeImpl*)update.getTarget()->getInterface(Item::gXQilla);
  DOMNode *domnode = const_cast<DOMNode*>(nodeImpl->getDOMNode());

  ATQNameOrDerived *qname = (ATQNameOrDerived*)update.getValue().first().get();

  if(domnode->getNodeType() == DOMNode::PROCESSING_INSTRUCTION_NODE) {
	  DOMProcessingInstruction *newPI = domnode->getOwnerDocument()->
		  createProcessingInstruction(qname->getName(), domnode->getNodeValue());
	  domnode->getParentNode()->replaceChild(newPI, domnode);
  }
  else {
	  domnode->getOwnerDocument()->renameNode(domnode, qname->getURI(), qname->getName());
	  if(qname->getURI() != 0 && *qname->getURI() != 0)
		  domnode->setPrefix(qname->getPrefix());

	  removeType(domnode);
  }

  addToPutList(domnode, &update, context);
}

void XercesUpdateFactory::applyDelete(const PendingUpdate &update, DynamicContext *context)
{
  const XercesNodeImpl *nodeImpl = (const XercesNodeImpl*)update.getTarget()->getInterface(Item::gXQilla);
  DOMNode *domnode = const_cast<DOMNode*>(nodeImpl->getDOMNode());

  forDeletion_.insert(domnode);

  addToPutList(domnode, &update, context);
}

void XercesUpdateFactory::applyInsertBefore(const PendingUpdate &update, DynamicContext *context)
{
  const XercesNodeImpl *nodeImpl = (const XercesNodeImpl*)update.getTarget()->getInterface(Item::gXQilla);
  DOMNode *domnode = const_cast<DOMNode*>(nodeImpl->getDOMNode());
  Node::Ptr parentNode = nodeImpl->dmParent(context);
  DOMNode *parent = domnode->getParentNode();
  DOMDocument *doc = const_cast<DOMDocument*>(XPath2Utils::getOwnerDoc(domnode));

  bool untyped = XPath2Utils::equals(parentNode->getTypeName(), DocumentCacheParser::g_szUntyped) &&
    XPath2Utils::equals(parentNode->getTypeURI(), SchemaSymbols::fgURI_SCHEMAFORSCHEMA);

  bool containsElementOrText = false;

  Result children = update.getValue();
  Item::Ptr item;
  while((item = children->next(context)).notNull()) {
    const XercesNodeImpl *childImpl = (const XercesNodeImpl*)item->getInterface(Item::gXQilla);
    DOMNode *newChild = doc->importNode(const_cast<DOMNode*>(childImpl->getDOMNode()), /*deep*/true);

    if(childImpl->dmNodeKind() == Node::element_string ||
       childImpl->dmNodeKind() == Node::text_string) {
      containsElementOrText = true;
    }

    // If the type-name property of parent($target) is xs:untyped, then upd:setToUntyped() is invoked on each
    // element or attribute node in $content.
    if(untyped) setToUntyped(newChild);

    // For each node in $content, the parent property is set to parent($target).
    // The children property of parent($target) is modified to add the nodes in $content just before $target,
    // preserving their order.
    parent->insertBefore(newChild, domnode);
  }

  // If at least one of the nodes in $content is an element or text node, upd:removeType(parent($target)) is invoked.
  if(containsElementOrText) {
    removeType(parent);
  }

  addToPutList(domnode, &update, context);
}

void XercesUpdateFactory::applyInsertAfter(const PendingUpdate &update, DynamicContext *context)
{
  const XercesNodeImpl *nodeImpl = (const XercesNodeImpl*)update.getTarget()->getInterface(Item::gXQilla);
  DOMNode *domnode = const_cast<DOMNode*>(nodeImpl->getDOMNode());
  DOMNode *before = domnode->getNextSibling();
  Node::Ptr parentNode = nodeImpl->dmParent(context);
  DOMNode *parent = domnode->getParentNode();
  DOMDocument *doc = const_cast<DOMDocument*>(XPath2Utils::getOwnerDoc(domnode));

  bool untyped = XPath2Utils::equals(parentNode->getTypeName(), DocumentCacheParser::g_szUntyped) &&
    XPath2Utils::equals(parentNode->getTypeURI(), SchemaSymbols::fgURI_SCHEMAFORSCHEMA);

  bool containsElementOrText = false;

  Result children = update.getValue();
  Item::Ptr item;
  while((item = children->next(context)).notNull()) {
    const XercesNodeImpl *childImpl = (const XercesNodeImpl*)item->getInterface(Item::gXQilla);
    DOMNode *newChild = doc->importNode(const_cast<DOMNode*>(childImpl->getDOMNode()), /*deep*/true);

    if(childImpl->dmNodeKind() == Node::element_string ||
       childImpl->dmNodeKind() == Node::text_string) {
      containsElementOrText = true;
    }

    // If the type-name property of parent($target) is xs:untyped, then upd:setToUntyped() is invoked on each
    // element or attribute node in $content.
    if(untyped) setToUntyped(newChild);

    // For each node in $content, the parent property is set to parent($target).
    // The children property of parent($target) is modified to add the nodes in $content just before $target,
    // preserving their order.
    parent->insertBefore(newChild, before);
  }

  // If at least one of the nodes in $content is an element or text node, upd:removeType(parent($target)) is invoked.
  if(containsElementOrText) {
    removeType(parent);
  }

  addToPutList(domnode, &update, context);
}

void XercesUpdateFactory::applyInsertAsFirst(const PendingUpdate &update, DynamicContext *context)
{
  const XercesNodeImpl *nodeImpl = (const XercesNodeImpl*)update.getTarget()->getInterface(Item::gXQilla);
  DOMNode *domnode = const_cast<DOMNode*>(nodeImpl->getDOMNode());
  DOMNode *firstChild = domnode->getFirstChild();
  DOMDocument *doc = const_cast<DOMDocument*>(XPath2Utils::getOwnerDoc(domnode));

  bool untyped = XPath2Utils::equals(nodeImpl->getTypeName(), DocumentCacheParser::g_szUntyped) &&
    XPath2Utils::equals(nodeImpl->getTypeURI(), SchemaSymbols::fgURI_SCHEMAFORSCHEMA);

  bool containsElementOrText = false;

  Result children = update.getValue();
  Item::Ptr item;
  while((item = children->next(context)).notNull()) {
    const XercesNodeImpl *childImpl = (const XercesNodeImpl*)item->getInterface(Item::gXQilla);
    DOMNode *newChild = doc->importNode(const_cast<DOMNode*>(childImpl->getDOMNode()), /*deep*/true);

    if(childImpl->dmNodeKind() == Node::element_string ||
       childImpl->dmNodeKind() == Node::text_string) {
      containsElementOrText = true;
    }

    // If the type-name property of $target is xs:untyped, then upd:setToUntyped() is invoked on each
    // element or attribute node in $content.
    if(untyped) setToUntyped(newChild);

    // For each node in $content, the parent property is set to parent($target).
    // The children property of $target is modified to add the nodes in $content just before $target,
    // preserving their order.
    domnode->insertBefore(newChild, firstChild);
  }

  // If at least one of the nodes in $content is an element or text node, upd:removeType($target) is invoked.
  if(containsElementOrText) {
    removeType(domnode);
  }

  addToPutList(domnode, &update, context);
}

void XercesUpdateFactory::applyInsertAsLast(const PendingUpdate &update, DynamicContext *context)
{
  const XercesNodeImpl *nodeImpl = (const XercesNodeImpl*)update.getTarget()->getInterface(Item::gXQilla);
  DOMNode *domnode = const_cast<DOMNode*>(nodeImpl->getDOMNode());
  DOMDocument *doc = const_cast<DOMDocument*>(XPath2Utils::getOwnerDoc(domnode));

  bool untyped = XPath2Utils::equals(nodeImpl->getTypeName(), DocumentCacheParser::g_szUntyped) &&
    XPath2Utils::equals(nodeImpl->getTypeURI(), SchemaSymbols::fgURI_SCHEMAFORSCHEMA);

  bool containsElementOrText = false;

  Result children = update.getValue();
  Item::Ptr item;
  while((item = children->next(context)).notNull()) {
    const XercesNodeImpl *childImpl = (const XercesNodeImpl*)item->getInterface(Item::gXQilla);
    DOMNode *newChild = doc->importNode(const_cast<DOMNode*>(childImpl->getDOMNode()), /*deep*/true);

    if(childImpl->dmNodeKind() == Node::element_string ||
       childImpl->dmNodeKind() == Node::text_string) {
      containsElementOrText = true;
    }

    // If the type-name property of $target is xs:untyped, then upd:setToUntyped() is invoked on each
    // element or attribute node in $content.
    if(untyped) setToUntyped(newChild);

    // For each node in $content, the parent property is set to parent($target).
    // The children property of $target is modified to add the nodes in $content just before $target,
    // preserving their order.
    domnode->appendChild(newChild);
  }

  // If at least one of the nodes in $content is an element or text node, upd:removeType($target) is invoked.
  if(containsElementOrText) {
    removeType(domnode);
  }

  addToPutList(domnode, &update, context);
}

void XercesUpdateFactory::applyReplaceNode(const PendingUpdate &update, DynamicContext *context)
{
  const XercesNodeImpl *nodeImpl = (const XercesNodeImpl*)update.getTarget()->getInterface(Item::gXQilla);
  DOMNode *domnode = const_cast<DOMNode*>(nodeImpl->getDOMNode());
  Node::Ptr parentNode = nodeImpl->dmParent(context);
  DOMNode *parent = domnode->getParentNode();
  DOMDocument *doc = const_cast<DOMDocument*>(XPath2Utils::getOwnerDoc(domnode));

  bool untyped = XPath2Utils::equals(parentNode->getTypeName(), DocumentCacheParser::g_szUntyped) &&
    XPath2Utils::equals(parentNode->getTypeURI(), SchemaSymbols::fgURI_SCHEMAFORSCHEMA);

  Result children = update.getValue();
  Item::Ptr item;
  while((item = children->next(context)).notNull()) {
    const XercesNodeImpl *childImpl = (const XercesNodeImpl*)item->getInterface(Item::gXQilla);
    DOMNode *newChild = doc->importNode(const_cast<DOMNode*>(childImpl->getDOMNode()), /*deep*/true);

    // 1b. If the type-name property of parent($target) is xs:untyped, then upd:setToUntyped() is invoked
    //     on each element node in $replacement.
    if(untyped) setToUntyped(newChild);

    // 1a. For each node in $replacement, the parent property is set to parent($target).
    // 3b. If $target is an element, text, comment, or processing instruction node, the children property
    //     of parent($target) is modified to add the nodes in $replacement just before $target, preserving
    //     their order.
    parent->insertBefore(newChild, domnode);
  }

  // 2a. $target is marked for deletion.
  forDeletion_.insert(domnode);

  // 3c. upd:removeType(parent($target)) is invoked.
  removeType(parent);

  addToPutList(domnode, &update, context);
}

void XercesUpdateFactory::applyReplaceAttribute(const PendingUpdate &update, DynamicContext *context)
{
  const XercesNodeImpl *nodeImpl = (const XercesNodeImpl*)update.getTarget()->getInterface(Item::gXQilla);
  DOMAttr *domnode = (DOMAttr*)nodeImpl->getDOMNode();
  Node::Ptr parentNode = nodeImpl->dmParent(context);
  DOMElement *element = domnode->getOwnerElement();
  DOMDocument *doc = element->getOwnerDocument();

  bool untyped = XPath2Utils::equals(parentNode->getTypeName(), DocumentCacheParser::g_szUntyped) &&
    XPath2Utils::equals(parentNode->getTypeURI(), SchemaSymbols::fgURI_SCHEMAFORSCHEMA);

  Result children = update.getValue();
  Item::Ptr item;
  while((item = children->next(context)).notNull()) {
    const XercesNodeImpl *childImpl = (const XercesNodeImpl*)item->getInterface(Item::gXQilla);
    DOMNode *newChild = doc->importNode(const_cast<DOMNode*>(childImpl->getDOMNode()), /*deep*/true);

    // 1. Error checks:
    //    a. If the QNames of any two attribute nodes in $replacement have implied namespace bindings that conflict with
    //       each other, a dynamic error is raised [err:XUDY0024].
    //    b. If the QName of any attribute node in $replacement has an implied namespace binding that conflicts with a
    //       namespace binding in the "namespaces" property of parent($target), a dynamic error is raised [err:XUDY0024].
    // TBD perform these checks - jpcs

    // TBD [err:XUDY0021] if the attribute already exists - jpcs

    // 2b. If the type-name property of parent($target) is xs:untyped, then upd:setToUntyped() is invoked
    //     on each element node in $replacement.
    if(untyped) setToUntyped(newChild);

    // 2a. For each node in $replacement, the parent property is set to parent($target).
    // 4a. If $target is an attribute node, the attributes property of parent($target) is modified by removing $target
    //     and adding the nodes in $replacement (if any).
    // 4b. If $target is an attribute node, the namespaces property of parent($target) is modified to include namespace
    //     bindings for any attribute namespace prefixes in $replacement that did not already have bindings.
    element->setAttributeNode((DOMAttr*)newChild);
  }

  // 3a. $target is marked for deletion.
  forDeletion_.insert(domnode);

  // 4d. upd:removeType(parent($target)) is invoked.
  removeType(element);

  addToPutList(element, &update, context);
}

void XercesUpdateFactory::applyReplaceElementContent(const PendingUpdate &update, DynamicContext *context)
{
  const XercesNodeImpl *nodeImpl = (const XercesNodeImpl*)update.getTarget()->getInterface(Item::gXQilla);
  DOMElement *domnode = (DOMElement*)nodeImpl->getDOMNode();

  // 1. For each node $C that is a child of $target, the parent property of $C is set to empty.
  DOMNode *child = domnode->getFirstChild();
  while(child != 0) {
    forDeletion_.insert(child);
    child = child->getNextSibling();
  }

  const XMLCh *value = update.getValue().first()->asString(context);
  if(value != 0 && *value != 0) {
    // 2. The parent property of $text is set to $target.
    // 3a. children is set to consist exclusively of $text. If $text is an empty sequence, then $target has
    //     no children.
    // 3b. typed-value and string-value are set to the content property of $text. If $text is an empty sequence,
    //     then typed-value is an empty sequence and string-value is an empty string.
    domnode->appendChild(domnode->getOwnerDocument()->createTextNode(value));
  }

  // 3c. upd:removeType($target) is invoked.
  removeType(domnode);

  addToPutList(domnode, &update, context);
}

void XercesUpdateFactory::removeType(DOMNode *node)
{
  // TBD Implement this - jpcs
}

void XercesUpdateFactory::setToUntyped(DOMNode *node)
{
  // TBD Implement this - jpcs
}

void XercesUpdateFactory::addToPutList(const DOMNode *domnode, const LocationInfo *location, DynamicContext *context)
{
  const DOMDocument *doc = XPath2Utils::getOwnerDoc(domnode);

  const XMLCh *docuri = doc->getDocumentURI();
  if(docuri == 0 || *docuri == 0) {
    // ignore for now
    return;
  }

  const XMLCh *encoding = doc->getEncoding();
  if(encoding == 0 || *encoding == 0) {
    encoding = utf8_str;
  }

  try {
    PutItem item(docuri, encoding, doc, location);

    if(XPath2Utils::equals(item.uri.getScheme(), file_scheme)) {
      std::pair<PutList::iterator, bool> res = putList_.insert(item);
      if(!res.second && res.first->node != item.node) {
        if(context->getMessageListener() != 0) {
          context->getMessageListener()->warning(X("In the context of this expression"), res.first->location);
        }

        XMLBuffer buf;
        buf.append(X("Document writing conflict for URI \""));
        buf.append(item.uri.getUriText());
        buf.append(X("\""));

        XQThrow3(ASTException, X("XercesUpdateFactory::addToPutList"), buf.getRawBuffer(), location);
      }
    } else {
      XMLBuffer buf;
      buf.append(X("Unable to re-write document - unsupported URI scheme \""));
      buf.append(item.uri.getUriText());
      buf.append(X("\""));

      XQThrow3(ASTException, X("XercesUpdateFactory::addToPutList"), buf.getRawBuffer(), location);
    }
  }
  catch(...) {
    XMLBuffer buf;
    buf.append(X("Unable to re-write document - bad document URI \""));
    buf.append(docuri);
    buf.append(X("\""));

    XQThrow3(ASTException, X("XercesUpdateFactory::addToPutList"), buf.getRawBuffer(), location);
  }
}

void XercesUpdateFactory::completeDeletions(DynamicContext *context)
{
  //    e. Finally, for each node marked for deletion by one of the update primitives listed above, let $N be the node that is marked
  //       for deletion, and let $P be its parent node. The following actions are applied:
  //          i. The parent property of $N is set to empty.
  //         ii. If $N is an attribute node, the attributes property of $P is modified to remove $N.
  //        iii. If $N is a non-attribute node, the children property of $P is modified to remove $N.
  //         iv. If $N is an element, attribute, or text node, and $P is an element node, then upd:removeType($P) is invoked.

  for(DOMNodeSet::iterator i = forDeletion_.begin(); i != forDeletion_.end(); ++i) {
    DOMNode *domnode = *i;

    if(domnode->getNodeType() == DOMNode::ATTRIBUTE_NODE) {
      DOMAttr *attr = (DOMAttr*)domnode;
      DOMElement *owner = attr->getOwnerElement();
      if(owner != 0) {
        owner->removeAttributeNode(attr);
        removeType(owner);
      }
    }
    else {
      DOMNode *parent = domnode->getParentNode();
      if(parent != 0) {
        parent->removeChild(domnode);
        if(domnode->getNodeType() == DOMNode::ELEMENT_NODE ||
           domnode->getNodeType() == DOMNode::TEXT_NODE ||
           domnode->getNodeType() == DOMNode::CDATA_SECTION_NODE) {
          removeType(parent);
        }
      }
    }
  }
}

void XercesUpdateFactory::completeRevalidation(DynamicContext *context)
{
  // TBD implement this - jpcs
}

static const XMLCh ls_string[] =
{
    chLatin_L, chLatin_S,
    chNull
};

void XercesUpdateFactory::completeUpdate(DynamicContext *context)
{
  completeDeletions(context);
  completeRevalidation(context);

  // Write all the documents in the PutList to disk
  DOMImplementation *impl = DOMImplementationRegistry::getDOMImplementation(ls_string);
  AutoRelease<DOMWriter> writer(((DOMImplementationLS*)impl)->createDOMWriter());

  for(PutList::iterator i = putList_.begin(); i != putList_.end(); ++i) {
    try {
      writer->setEncoding(i->encoding);
      LocalFileFormatTarget target(i->uri.getPath());

      if(!writer->writeNode(&target, *i->node)) {
        XMLBuffer buf;
        buf.append(X("Writing to URI \""));
        buf.append(i->uri.getUriText());
        buf.append(X("\" failed."));

        XQThrow3(ASTException, X("XercesUpdateFactory::completeUpdate"), buf.getRawBuffer(), i->location);
      }
    }
    catch(DOMException &ex) {
      XMLBuffer buf;
      buf.append(X("Writing to URI \""));
      buf.append(i->uri.getUriText());
      buf.append(X("\" failed: "));
      buf.append(ex.msg);

      XQThrow3(ASTException, X("XercesUpdateFactory::completeUpdate"), buf.getRawBuffer(), i->location);
    }
  }
}

