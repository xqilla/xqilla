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

#include "XercesSequenceBuilder.hpp"
#include "XercesNodeImpl.hpp"

#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ItemFactory.hpp>

#include "../dom-api/impl/XPathDocumentImpl.hpp"

#include <xercesc/dom/DOM.hpp>
#include <xercesc/dom/impl/DOMTypeInfoImpl.hpp>
#include <xercesc/dom/impl/DOMAttrImpl.hpp>
#include <xercesc/dom/impl/DOMElementNSImpl.hpp>
#include <xercesc/framework/psvi/PSVIItem.hpp>

XERCES_CPP_NAMESPACE_USE;

XercesSequenceBuilder::XercesSequenceBuilder(const DynamicContext *context)
  : context_(context),
    document_(0),
    currentParent_(0),
    currentNode_(0),
    seq_(context->getMemoryManager())
{
}

XercesSequenceBuilder::~XercesSequenceBuilder()
{
  delete document_;
}

void XercesSequenceBuilder::startDocumentEvent(const XMLCh *documentURI, const XMLCh *encoding)
{
  if(document_ == 0) {
    document_ = new (context_->getMemoryManager()) XPathDocumentImpl(context_->getMemoryManager());
  }

  currentParent_ = document_;
  currentNode_   = document_;

  document_->setDocumentURI(documentURI);
  document_->setActualEncoding(encoding);
}

void XercesSequenceBuilder::endDocumentEvent()
{
  currentNode_ = currentParent_;
  currentParent_ = currentParent_->getParentNode();

  if(currentParent_ == 0) {
    seq_.addItem(new XercesNodeImpl(currentNode_, context_));
    document_ = 0;
    currentNode_ = 0;
  }
}

void XercesSequenceBuilder::endEvent()
{
}

void XercesSequenceBuilder::startElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname)
{
  if(document_ == 0) {
    document_ = new (context_->getMemoryManager()) XPathDocumentImpl(context_->getMemoryManager());
  }

  DOMElement *elem = document_->createElementNS(uri, localname);
  if(prefix != 0)
    elem->setPrefix(prefix);

  if(currentParent_ != 0)
    currentParent_->appendChild(elem);

  currentParent_ = elem;
  currentNode_ = elem;
}

void XercesSequenceBuilder::endElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname,
                                            const XMLCh *typeURI, const XMLCh *typeName)
{
  currentNode_ = currentParent_;
  currentParent_ = currentParent_->getParentNode();

  // TBD detect xs:untyped? - jpcs
  DOMTypeInfoImpl* pInfo = new (document_) DOMTypeInfoImpl(typeURI, typeName);
  pInfo->setNumericProperty(DOMPSVITypeInfo::PSVI_Validity, PSVIItem::VALIDITY_VALID);
  ((DOMElementNSImpl*)currentNode_)->setTypeInfo(pInfo);

  if(currentParent_ == 0) {
    seq_.addItem(new XercesNodeImpl(currentNode_, context_));
    document_ = 0;
    currentNode_ = 0;
  }
}

void XercesSequenceBuilder::piEvent(const XMLCh *target, const XMLCh *value)
{
  if(document_ == 0) {
    document_ = new (context_->getMemoryManager()) XPathDocumentImpl(context_->getMemoryManager());
  }

  DOMProcessingInstruction *pi = document_->createProcessingInstruction(target, value);

  if(currentParent_ != 0)
    currentParent_->appendChild(pi);
  currentNode_ = pi;

  if(currentParent_ == 0) {
    seq_.addItem(new XercesNodeImpl(currentNode_, context_));
    document_ = 0;
    currentNode_ = 0;
  }
}

void XercesSequenceBuilder::textEvent(const XMLCh *value)
{
  if(document_ == 0) {
    document_ = new (context_->getMemoryManager()) XPathDocumentImpl(context_->getMemoryManager());
  }

  if(currentNode_ != 0 && currentNode_->getNodeType() == DOMNode::TEXT_NODE) {
    // Combine adjacent text nodes
    ((DOMText *)currentNode_)->appendData(value);
  }
  else if(currentParent_ == 0 || value != 0 && *value != 0) {
		// Text nodes with a zero length value can only exist
		// when they have no parent
    DOMText *node = document_->createTextNode(value);

    if(currentParent_ != 0)
      currentParent_->appendChild(node);
    currentNode_ = node;
  }

  if(currentParent_ == 0) {
    seq_.addItem(new XercesNodeImpl(currentNode_, context_));
    document_ = 0;
    currentNode_ = 0;
  }
}

void XercesSequenceBuilder::textEvent(const XMLCh *chars, unsigned int length)
{
  if(document_ == 0) {
    document_ = new (context_->getMemoryManager()) XPathDocumentImpl(context_->getMemoryManager());
  }

  if(currentNode_->getNodeType() == DOMNode::TEXT_NODE) {
    // Combine adjacent text nodes
    XMLBuffer buf;
    buf.append(chars, length);
    ((DOMText *)currentNode_)->appendData(buf.getRawBuffer());
  }
  else if(currentParent_ == 0 || length != 0) {
		// Text nodes with a zero length value can only exist
		// when they have no parent
    XMLBuffer buf;
    buf.append(chars, length);
    DOMText *node = document_->createTextNode(buf.getRawBuffer());

    if(currentParent_ != 0)
      currentParent_->appendChild(node);
    currentNode_ = node;
  }

  if(currentParent_ == 0) {
    seq_.addItem(new XercesNodeImpl(currentNode_, context_));
    document_ = 0;
    currentNode_ = 0;
  }
}

void XercesSequenceBuilder::commentEvent(const XMLCh *value)
{
  if(document_ == 0) {
    document_ = new (context_->getMemoryManager()) XPathDocumentImpl(context_->getMemoryManager());
  }

  DOMComment *comment = document_->createComment(value);

  if(currentParent_ != 0)
    currentParent_->appendChild(comment);
  currentNode_ = comment;

  if(currentParent_ == 0) {
    seq_.addItem(new XercesNodeImpl(currentNode_, context_));
    document_ = 0;
    currentNode_ = 0;
  }
}

void XercesSequenceBuilder::attributeEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname, const XMLCh *value,
                                           const XMLCh *typeURI, const XMLCh *typeName)
{
  if(document_ == 0) {
    document_ = new (context_->getMemoryManager()) XPathDocumentImpl(context_->getMemoryManager());
  }

  DOMAttr *attr = document_->createAttributeNS(uri, localname);
  if(prefix != 0)
    attr->setPrefix(prefix);
  attr->setValue(value);

  // TBD detect xs:untypedAtomic? - jpcs
  DOMTypeInfoImpl* pInfo = new (document_) DOMTypeInfoImpl(typeURI, typeName);
  pInfo->setNumericProperty(DOMPSVITypeInfo::PSVI_Validity, PSVIItem::VALIDITY_VALID);
  ((DOMAttrImpl*)attr)->setTypeInfo(pInfo);

  if(currentParent_ != 0)
    currentParent_->getAttributes()->setNamedItemNS(attr);
  currentNode_ = attr;

  if(currentParent_ == 0) {
    seq_.addItem(new XercesNodeImpl(currentNode_, context_));
    document_ = 0;
    currentNode_ = 0;
  }
}

void XercesSequenceBuilder::namespaceEvent(const XMLCh *prefix, const XMLCh *uri)
{
  assert(currentParent_ != 0);

  DOMAttr *attr = document_->createAttributeNS(XMLUni::fgXMLNSURIName, prefix == 0 ? XMLUni::fgXMLNSString : prefix);
  if(prefix != 0) attr->setPrefix(XMLUni::fgXMLNSString);
  attr->setValue(uri);

  currentParent_->getAttributes()->setNamedItemNS(attr);
  currentNode_ = attr;
}

void XercesSequenceBuilder::atomicItemEvent(AnyAtomicType::AtomicObjectType type, const XMLCh *value, const XMLCh *typeURI,
                                            const XMLCh *typeName)
{
  assert(currentParent_ == 0);

  seq_.addItem(context_->getItemFactory()->createDerivedFromAtomicType(type, typeURI, typeName, value, context_));
}

