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
#include <xqilla/ast/XQDocumentConstructor.hpp>
#include <xqilla/ast/StaticAnalysis.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/exceptions/ASTException.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/events/EventHandler.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

XQDocumentConstructor::XQDocumentConstructor(ASTNode *value, XPath2MemoryManager* mm)
  : XQDOMConstructor(mm),
    m_value(value)
{
  setType(ASTNode::DOM_CONSTRUCTOR);
}

class DocConstructFilter : public EventFilter
{
public:
  DocConstructFilter(EventHandler *next, const XQDocumentConstructor *ast)
    : EventFilter(next),
      ast_(ast),
      level_(0)
  {
  }

  virtual void startElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname)
  {
    ++level_;
    next_->startElementEvent(prefix, uri, localname);
  }

  virtual void endElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname,
                               const XMLCh *typeURI, const XMLCh *typeName)
  {
    next_->endElementEvent(prefix, uri, localname, typeURI, typeName);
    --level_;
  }

  virtual void attributeEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname, const XMLCh *value,
                              const XMLCh *typeURI, const XMLCh *typeName)
  {
    if(level_ == 0) {
      XQThrow3(ASTException,X("DocConstructFilter::attributeEvent"),
               X("An attribute node cannot be a child of a document [err:XPTY0004]."), ast_);
    }

    next_->attributeEvent(prefix, uri, localname, value, typeURI, typeName);
  }

  virtual void namespaceEvent(const XMLCh *prefix, const XMLCh *uri)
  {
    if(level_ == 0) {
      XQThrow3(ASTException,X("DocConstructFilter::attributeEvent"),
               X("An namespace node cannot be a child of a document [err:XPTY0004]."), ast_);
    }

    next_->namespaceEvent(prefix, uri);
  }

private:
  const XQDocumentConstructor *ast_;
  unsigned int level_;
};

void XQDocumentConstructor::generateEvents(EventHandler *events, DynamicContext *context,
                                           bool preserveNS, bool preserveType) const
{
  events->startDocumentEvent(0, 0);

  DocConstructFilter filter(events, this);
  m_value->generateEvents(&filter, context, preserveNS, preserveType);

  events->endDocumentEvent();
  events->endEvent();
}

ASTNode* XQDocumentConstructor::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  m_value = new (mm) XQContentSequence(m_value, mm);
  m_value->setLocationInfo(this);

  m_value = m_value->staticResolution(context);

  return this;
}

ASTNode* XQDocumentConstructor::staticTyping(StaticContext *context)
{
  _src.clear();

  m_value = m_value->staticTyping(context);
  _src.add(m_value->getStaticAnalysis());

  _src.getStaticType().flags = StaticType::DOCUMENT_TYPE;
  _src.forceNoFolding(true);
  _src.creative(true);
  _src.setProperties(StaticAnalysis::DOCORDER | StaticAnalysis::GROUPED |
	  StaticAnalysis::PEER | StaticAnalysis::SUBTREE | StaticAnalysis::SAMEDOC |
	  StaticAnalysis::ONENODE);
  return this; // Never constant fold
}

const XMLCh* XQDocumentConstructor::getNodeType() const
{
  return Node::document_string;
}

const ASTNode *XQDocumentConstructor::getValue() const
{
  return m_value;
}

void XQDocumentConstructor::setValue(ASTNode *value)
{
  m_value = value;
}

