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

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/XQAttributeConstructor.hpp>
#include <xqilla/ast/StaticAnalysis.hpp>
#include <xqilla/ast/XQLiteral.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/exceptions/ASTException.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/AnyAtomicTypeConstructor.hpp>
#include <xqilla/ast/XQAtomize.hpp>
#include <xqilla/events/EventHandler.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>

#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/framework/XMLBuffer.hpp>
#include <xercesc/util/XMLChar.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

XQAttributeConstructor::XQAttributeConstructor(ASTNode* name, VectorOfASTNodes* children, XPath2MemoryManager* mm)
  : XQDOMConstructor(mm),
    m_name(name),
    m_children(children)
{
  setType(ASTNode::DOM_CONSTRUCTOR);
}

void XQAttributeConstructor::generateEvents(EventHandler *events, DynamicContext *context,
                                            bool preserveNS, bool preserveType) const
{
  AnyAtomicType::Ptr itemName = m_name->createResult(context)->next(context);
  const ATQNameOrDerived* pQName = (const ATQNameOrDerived*)itemName.get();
  const XMLCh *prefix = pQName->getPrefix();
  const XMLCh *uri = pQName->getURI();
  const XMLCh *name = pQName->getName();

  if((uri==NULL && XPath2Utils::equals(name, XMLUni::fgXMLNSString)) ||
     XPath2Utils::equals(uri, XMLUni::fgXMLNSURIName))
    XQThrow(ASTException,X("DOM Constructor"),X("A computed attribute constructor cannot create a namespace declaration [err:XQDY0044]"));

  XMLBuffer value;
  getStringValue(m_children, value, context);

  const XMLCh *typeURI = SchemaSymbols::fgURI_SCHEMAFORSCHEMA;
  const XMLCh *typeName = ATUntypedAtomic::fgDT_UNTYPEDATOMIC;

  // check if it's xml:id
  static const XMLCh id[] = { 'i', 'd', 0 };
  if(XPath2Utils::equals(name, id) && XPath2Utils::equals(uri, XMLUni::fgXMLURIName)) {
    // If the attribute name is xml:id, the string value and typed value of the attribute are further normalized by 
    // discarding any leading and trailing space (#x20) characters, and by replacing sequences of space (#x20) characters 
    // by a single space (#x20) character.
    XMLString::collapseWS(value.getRawBuffer(), context->getMemoryManager());
    typeURI = SchemaSymbols::fgURI_SCHEMAFORSCHEMA;
    typeName = XMLUni::fgIDString;
  }

  events->attributeEvent(emptyToNull(prefix), emptyToNull(uri), name, value.getRawBuffer(), typeURI, typeName);
}

ASTNode* XQAttributeConstructor::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  // and run static resolution
  m_name = new (mm) XQNameExpression(m_name, mm);
  m_name->setLocationInfo(this);
  m_name = m_name->staticResolution(context);

  unsigned int i;
  for(i = 0;i < m_children->size(); ++i) {
    // atomize content and run static resolution 
    (*m_children)[i] = new (mm) XQAtomize((*m_children)[i], mm);
    (*m_children)[i]->setLocationInfo(this);

    (*m_children)[i] = (*m_children)[i]->staticResolution(context);

  }

  return this;
}

ASTNode* XQAttributeConstructor::staticTyping(StaticContext *context)
{
  _src.clear();

  m_name = m_name->staticTyping(context);
  _src.add(m_name->getStaticAnalysis());

  if(m_name->getStaticAnalysis().isUpdating()) {
    XQThrow(StaticErrorException,X("XQAttributeConstructor::staticTyping"),
            X("It is a static error for the name expression of an attribute constructor "
              "to be an updating expression [err:XUST0001]"));
  }

  unsigned int i;
  for(i = 0; i < m_children->size(); ++i) {
    (*m_children)[i] = (*m_children)[i]->staticTyping(context);
    _src.add((*m_children)[i]->getStaticAnalysis());

    if((*m_children)[i]->getStaticAnalysis().isUpdating()) {
      XQThrow(StaticErrorException,X("XQAttributeConstructor::staticTyping"),
              X("It is a static error for the a value expression of an attribute constructor "
                "to be an updating expression [err:XUST0001]"));
    }
  }

  _src.getStaticType().flags = StaticType::ATTRIBUTE_TYPE;
  _src.forceNoFolding(true);
  _src.creative(true);
  _src.setProperties(StaticAnalysis::DOCORDER | StaticAnalysis::GROUPED |
                     StaticAnalysis::PEER | StaticAnalysis::SUBTREE | StaticAnalysis::SAMEDOC |
                     StaticAnalysis::ONENODE);
  return this; // Never constant fold
}

const XMLCh* XQAttributeConstructor::getNodeType() const
{
  return Node::attribute_string;
}

const ASTNode *XQAttributeConstructor::getName() const
{
  return m_name;
}

const VectorOfASTNodes *XQAttributeConstructor::getChildren() const
{
  return m_children;
}

void XQAttributeConstructor::setName(ASTNode *name)
{
  m_name = name;
}
