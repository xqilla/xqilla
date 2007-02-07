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
#include <xqilla/ast/XQElementConstructor.hpp>
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
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/AnyAtomicTypeConstructor.hpp>
#include <xqilla/ast/XQAtomize.hpp>
#include <xqilla/parser/QName.hpp>
#include <xqilla/events/EventHandler.hpp>
#include <xqilla/schema/DocumentCacheImpl.hpp>
#include <xqilla/utils/XMLChCompare.hpp>

#include "../events/NoInheritFilter.hpp"

#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/framework/XMLBuffer.hpp>
#include <xercesc/util/XMLChar.hpp>
#include <assert.h>
#include <set>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

using namespace std;

XQElementConstructor::XQElementConstructor(ASTNode* name, VectorOfASTNodes* attrList, VectorOfASTNodes* children,
	XPath2MemoryManager* mm)
  : XQDOMConstructor(mm),
    m_name(name),
    m_attrList(attrList),
    m_children(children),
    m_namespaces(NULL)
{
  setType(ASTNode::DOM_CONSTRUCTOR);
}


class ElemConstructFilter : public EventFilter
{
public:
  ElemConstructFilter(EventHandler *next, const XQElementConstructor *ast, XPath2MemoryManager *mm)
    : EventFilter(next),
      mm_(mm),
      ast_(ast),
      level_(0),
      seenContent_(false)
  {
  }

  virtual void startElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname)
  {
    if(level_ != 0) seenContent_ = true;
    ++level_;
    next_->startElementEvent(prefix, uri, localname);
  }

  virtual void endElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname,
                               const XMLCh *typeURI, const XMLCh *typeName)
  {
    next_->endElementEvent(prefix, uri, localname, typeURI, typeName);
    --level_;
  }

  virtual void piEvent(const XMLCh *target, const XMLCh *value)
  {
    seenContent_ = true;
    next_->piEvent(target, value);
  }

  virtual void textEvent(const XMLCh *value)
  {
    seenContent_ = true;
    next_->textEvent(value);
  }

  virtual void textEvent(const XMLCh *chars, unsigned int length)
  {
    seenContent_ = true;
    next_->textEvent(chars, length);
  }

  virtual void commentEvent(const XMLCh *value)
  {
    seenContent_ = true;
    next_->commentEvent(value);
  }

  virtual void attributeEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname, const XMLCh *value,
                              const XMLCh *typeURI, const XMLCh *typeName)
  {
    if(level_ == 1) {
      if(seenContent_)
        XQThrow3(ASTException,X("ElemConstructFilter::attributeEvent"),
                 X("Attribute nodes must be created before the other content of an element [err:XQTY0024]"), ast_);

      if(!attrs_.insert(AttrRecord(uri, localname, mm_)).second)
        XQThrow3(ASTException,X("ElemConstructFilter::attributeEvent"),
                 X("An element has two attributes with the same expanded name [err:XQDY0025]"), ast_);
    }

    next_->attributeEvent(prefix, uri, localname, value, typeURI, typeName);
  }

  virtual void namespaceEvent(const XMLCh *prefix, const XMLCh *uri)
  {
    if(level_ == 1) {
      if(seenContent_)
        XQThrow3(ASTException,X("ElemConstructFilter::namespaceEvent"),
                 X("Namespace nodes must be created before the other content of an element [err:XQTY0024]"), ast_);
      if(!attrs_.insert(AttrRecord(prefix, 0, mm_)).second)
        XQThrow3(ASTException,X("ElemConstructFilter::namespaceEvent"),
                 X("An element has two namespaces for the same prefix [err:XQDY0025]"), ast_);
    }

    next_->namespaceEvent(prefix, uri);
  }

private:
  struct AttrRecord {
    AttrRecord(const XMLCh *u, const XMLCh *n, XPath2MemoryManager *mm)
      : uri(mm->getPooledString(u)), name(mm->getPooledString(n)) {}

    bool operator<(const AttrRecord &o) const
    {
      int cmp = XMLString::compareString(name, o.name);
      if(cmp < 0) return true;
      if(cmp > 0) return false;
      return XMLString::compareString(uri, o.uri) < 0;
    }

    const XMLCh *uri;
    const XMLCh *name;
  };

  XPath2MemoryManager *mm_;
  const XQElementConstructor *ast_;
  unsigned int level_;
  bool seenContent_;
  set<AttrRecord> attrs_;
};

void XQElementConstructor::generateEvents(EventHandler *events, DynamicContext *context,
                                          bool preserveNS, bool preserveType) const
{
  NoInheritFilter niFilter(events, context->getMemoryManager());
  if(!context->getInheritNamespaces()) events = &niFilter;

  ElemConstructFilter filter(events, this, context->getMemoryManager());
  events = &filter;

  // Add a new scope for the namespace definitions, before we try to assign a URI to the name of the element
  XQScopedNamespace locallyDefinedNamespaces(context->getMemoryManager(), NULL);
  XQScopedNamespace newNSScope(context->getMemoryManager(), context->getNSResolver());
  AutoNsScopeReset jan(context, &newNSScope);

  if(m_namespaces != 0) {
    RefHashTableOfEnumerator<XMLCh> nsEnumVal(m_namespaces, false, context->getMemoryManager());
    RefHashTableOfEnumerator<XMLCh> nsEnumKey(m_namespaces, false, context->getMemoryManager());
    while(nsEnumVal.hasMoreElements())
    {
      XMLCh* uri=&nsEnumVal.nextElement();
      XMLCh* prefix=(XMLCh*)nsEnumKey.nextElementKey();
      locallyDefinedNamespaces.addNamespaceBinding(prefix, uri);
    }
  }

  // Now that we have converted our namespace attributes into namespace bindings, resolve the name
  AnyAtomicType::Ptr itemName = m_name->createResult(context)->next(context);
  const ATQNameOrDerived *pQName = (const ATQNameOrDerived*)itemName.get();
  const XMLCh *prefix = emptyToNull(pQName->getPrefix());
  const XMLCh *uri = emptyToNull(pQName->getURI());
  const XMLCh *localname = pQName->getName();

  events->startElementEvent(prefix, uri, localname);

  if(m_namespaces != 0) {
    RefHashTableOfEnumerator<XMLCh> nsEnumVal(m_namespaces, false, context->getMemoryManager());
    RefHashTableOfEnumerator<XMLCh> nsEnumKey(m_namespaces, false, context->getMemoryManager());
    while(nsEnumVal.hasMoreElements())
    {
      events->namespaceEvent(emptyToNull((XMLCh*)nsEnumKey.nextElementKey()), emptyToNull(&nsEnumVal.nextElement()));
    }
  }
  if(m_attrList != 0) {
    for(VectorOfASTNodes::const_iterator itAttr = m_attrList->begin(); itAttr != m_attrList->end (); ++itAttr) {
      (*itAttr)->generateEvents(events, context, preserveNS, preserveType);
    }
  }

  for(VectorOfASTNodes::const_iterator itCont = m_children->begin(); itCont != m_children->end (); ++itCont)
  {
    (*itCont)->generateEvents(events, context, preserveNS, preserveType);
  }

  const XMLCh *typeURI = SchemaSymbols::fgURI_SCHEMAFORSCHEMA;
  const XMLCh *typeName = DocumentCacheParser::g_szUntyped;
  if(context->getConstructionMode() == StaticContext::CONSTRUCTION_MODE_PRESERVE) {
    typeURI = SchemaSymbols::fgURI_SCHEMAFORSCHEMA;
    typeName = SchemaSymbols::fgATTVAL_ANYTYPE;
  }

  events->endElementEvent(prefix, uri, localname, typeURI, typeName);
}

ASTNode* XQElementConstructor::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  // Add a new scope for the namespace definitions
  XQScopedNamespace newNSScope(context->getMemoryManager(), context->getNSResolver());
  AutoNsScopeReset jan(context, &newNSScope);
  unsigned int i;

  if(m_attrList != 0) {
    AutoDelete<DynamicContext> dContext(context->createDynamicContext());
    dContext->setMemoryManager(context->getMemoryManager());
    // process the namespace attributes (they are all at the beginning of the list)
    for (VectorOfASTNodes::iterator it=m_attrList->begin();it!=m_attrList->end();) 
    {
      ASTNode* astNode=*it;
      if(astNode->getType()==ASTNode::DEBUG_HOOK)
          astNode=((XQDebugHook*)astNode)->m_impl;
      assert(astNode->getType()==ASTNode::DOM_CONSTRUCTOR && 
             ((XQDOMConstructor*)astNode)->getNodeType()==Node::attribute_string);
      XQDOMConstructor* attrConstructor=(XQDOMConstructor*)astNode;
      const ASTNode* dItem=attrConstructor->getName();
      assert(dItem!=NULL && dItem->getType() == ASTNode::DIRECT_NAME);
      const XMLCh *qname = ((XQDirectName*)dItem)->getQName();

      const XMLCh* XMLNSPrefix=NULL;
      if(XPath2Utils::equals(qname,XMLUni::fgXMLNSString)) {
        XMLNSPrefix=XMLUni::fgZeroLenString;
      }
      else if(XPath2Utils::equals(XPath2NSUtils::getPrefix(qname, context->getMemoryManager()), XMLUni::fgXMLNSString)) {
        XMLNSPrefix=XPath2NSUtils::getLocalName(qname);
      }
      else
        // no more namespace declaration
        break;

      // we are a namespace attribute: check that we have a constant value
      const VectorOfASTNodes *children=attrConstructor->getChildren();
      const XMLCh* uri=NULL;
      if(children->size()==0) { // supporting Namespace 1.1 means unsetting the binding...
        uri=XMLUni::fgZeroLenString;
      }
      else if(children->size()>1 || ((*children)[0]->getType()!=ASTNode::LITERAL &&
                                     (*children)[0]->getType()!=ASTNode::SEQUENCE)) {
        XQThrow(StaticErrorException,X("DOM Constructor"),X("The value of a namespace declaration attribute must "
                                                            "be a literal string [err:XQST0022]"));
      }
      else {
        Item::Ptr nsUri = ((XQLiteral*)(*children)[0])->getItemConstructor()->createItem(dContext);
        if(nsUri == NULLRCP)
          XQThrow(StaticErrorException,X("DOM Constructor"),X("The value of a namespace declaration attribute must "
                                                              "be a literal string [err:XQST0022]"));
        uri=nsUri->asString(dContext);
      }
      if(XMLNSPrefix != XMLUni::fgZeroLenString) {
        context->setNamespaceBinding(XMLNSPrefix, uri);
      }
      else {
        context->setDefaultElementAndTypeNS(uri);
      }
      if(m_namespaces==NULL)
        m_namespaces = new (mm) RefHashTableOf< XMLCh >(5, false, mm);
      
      if(m_namespaces->containsKey(XMLNSPrefix))
        XQThrow(StaticErrorException,X("DOM Constructor"),X("Two namespace declaration attributes specified by a direct ele"
                                                            "ment constructor do not have distinct names. [err:XQST0071]"));
      m_namespaces->put((void*)mm->getPooledString(XMLNSPrefix), (XMLCh*)mm->getPooledString(uri));
      it=m_attrList->erase(it);
    }

    // now run static resolution on the real attributes
    for (i=0;i<m_attrList->size();i++) {
      (*m_attrList)[i] = (*m_attrList)[i]->staticResolution(context);
    }
    // now that we have added the local namespace declaration, check for duplicate attribute names
    std::set<const XMLCh*, XMLChSort> attrNames;
    for (i=0;i<m_attrList->size();i++) 
    {
      ASTNode* astNode=(*m_attrList)[i];
      if(astNode->getType()==ASTNode::DEBUG_HOOK)
          astNode=((XQDebugHook*)astNode)->m_impl;
      assert(astNode->getType()==ASTNode::DOM_CONSTRUCTOR && 
             ((XQDOMConstructor*)astNode)->getNodeType()==Node::attribute_string);
      XQDOMConstructor* attrConstructor=(XQDOMConstructor*)astNode;
      const ASTNode* dItem=attrConstructor->getName();
      if(dItem->getType() == ASTNode::NAME_EXPRESSION) {
	      dItem = ((XQNameExpression*)dItem)->getExpression();
      }
      if(dItem->getType() == ASTNode::TREAT_AS) {
	      dItem = ((XQAtomize*)dItem)->getExpression();
      }
      if(dItem->getType() == ASTNode::ATOMIZE) {
	      dItem = ((XQAtomize*)dItem)->getExpression();
      }
      assert(dItem->getType()==ASTNode::SEQUENCE); 
      const ItemConstructor::Vector &ics = ((XQSequence*)dItem)->getItemConstructors();
      assert(ics.size() == 1);
      Item::Ptr item = ics[0]->createItem(dContext);
      QualifiedName attrName(item->asString(dContext));
      XMLBuffer buff(200, dContext->getMemoryManager());
      if(attrName.getPrefix()!=0 && *attrName.getPrefix()!=0)
      {
        buff.append(chOpenCurly);
        buff.append(dContext->getUriBoundToPrefix(attrName.getPrefix(), this));
        buff.append(chCloseCurly);
      }
      buff.append(attrName.getName());
      if(attrNames.find(buff.getRawBuffer())!=attrNames.end())
        XQThrow(StaticErrorException,X("DOM Constructor"),X("Two attributes specified by a direct element constructor do not have distinct expanded QNames. [err:XQST0040]"));
      attrNames.insert(XMLString::replicate(buff.getRawBuffer(), dContext->getMemoryManager()));
    }
  }

  // and run static resolution
  m_name = new (mm) XQNameExpression(m_name, mm);
  m_name->setLocationInfo(this);
  m_name = m_name->staticResolution(context);


  for (i=0;i<m_children->size();i++) {
    // expand entities in string literals
    if((*m_children)[i]->getType()==LITERAL)
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
        unescapeEntities(buff);
        AnyAtomicTypeConstructor *newIC = new (mm)
                        AnyAtomicTypeConstructor(
                            SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                            SchemaSymbols::fgDT_STRING,
                mm->getPooledString(buff.getRawBuffer()), AnyAtomicType::STRING);
        lit->setItemConstructor(newIC);
      }
    }

    (*m_children)[i] = new (mm) XQContentSequence((*m_children)[i], mm);
    (*m_children)[i]->setLocationInfo(this);
    (*m_children)[i] = (*m_children)[i]->staticResolution(context);
  }

  return this;
}

ASTNode* XQElementConstructor::staticTyping(StaticContext *context)
{
  _src.clear();

  // Add a new scope for the namespace definitions
  XQScopedNamespace newNSScope(context->getMemoryManager(), context->getNSResolver());
  AutoNsScopeReset jan(context, &newNSScope);

  if(m_namespaces != 0) {
    RefHashTableOfEnumerator<XMLCh> nsEnumVal(m_namespaces, false, context->getMemoryManager());
    RefHashTableOfEnumerator<XMLCh> nsEnumKey(m_namespaces, false, context->getMemoryManager());
    while(nsEnumVal.hasMoreElements()) {
      XMLCh *prefix = (XMLCh*)nsEnumKey.nextElementKey();
      XMLCh *uri = &nsEnumVal.nextElement();
      if(XPath2Utils::equals(prefix, XMLUni::fgZeroLenString)) {
        context->setDefaultElementAndTypeNS(uri);
      }
      else {
        context->setNamespaceBinding(prefix, uri);
      }
    }
  }

  unsigned int i;
  if(m_attrList != 0) {
    for(i = 0; i < m_attrList->size(); ++i) {
      (*m_attrList)[i] = (*m_attrList)[i]->staticTyping(context);
      _src.add((*m_attrList)[i]->getStaticResolutionContext()); 
    }
  }

  m_name = m_name->staticTyping(context);
  _src.add(m_name->getStaticResolutionContext());

  for(i = 0; i < m_children->size(); ++i) {
    (*m_children)[i] = (*m_children)[i]->staticTyping(context);
    _src.add((*m_children)[i]->getStaticResolutionContext());
  }

  _src.getStaticType().flags = StaticType::ELEMENT_TYPE;
  _src.forceNoFolding(true);
  _src.creative(true);
  return this; // Never constant fold
}

const XMLCh* XQElementConstructor::getNodeType() const
{
  return Node::element_string;
}

const ASTNode *XQElementConstructor::getName() const
{
  return m_name;
}

const VectorOfASTNodes *XQElementConstructor::getAttributes() const
{
  return m_attrList;
}

const VectorOfASTNodes *XQElementConstructor::getChildren() const
{
  return m_children;
}

void XQElementConstructor::setName(ASTNode *name)
{
  m_name = name;
}
