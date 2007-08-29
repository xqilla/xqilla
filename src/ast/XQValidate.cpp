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

#include <xqilla/ast/XQValidate.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/exceptions/DynamicErrorException.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/ast/StaticAnalysis.hpp>
#include <xqilla/events/SequenceBuilder.hpp>
#include <xqilla/schema/SchemaValidatorFilter.hpp>

#include <xercesc/sax/SAXParseException.hpp>

XERCES_CPP_NAMESPACE_USE;

XQValidate::XQValidate(ASTNode *expr, DocumentCache::ValidationMode mode, XPath2MemoryManager *mm)
  : ASTNodeImpl(mm),
    expr_(expr),
    mode_(mode)
{
  setType(ASTNode::VALIDATE);
}

Sequence XQValidate::createSequence(DynamicContext *context, int flags) const 
{
  AutoDelete<SequenceBuilder> builder(context->createSequenceBuilder());
  generateEvents(builder.get(), context, true, true);
  builder->endEvent();
  return builder->getSequence();
}

void XQValidate::generateEvents(EventHandler *events, DynamicContext *context,
                                bool preserveNS, bool preserveType) const
{
  // Stream the node through the schema validator
  SchemaValidatorFilter svf(mode_ == DocumentCache::VALIDATION_STRICT, events, context, this);
  ValidateArgumentCheckFilter argCheck(&svf, mode_, context, this);
  expr_->generateEvents(&argCheck, context, true, false);
}

ASTNode *XQValidate::staticResolution(StaticContext* context)
{
  expr_ = expr_->staticResolution(context);
  return this;
}

ASTNode *XQValidate::staticTyping(StaticContext *context)
{
  _src.clear();

  expr_ = expr_->staticTyping(context);
  _src.add(expr_->getStaticAnalysis());

  _src.getStaticType() = expr_->getStaticAnalysis().getStaticType();
  _src.getStaticType().typeIntersect(StaticType::DOCUMENT_TYPE | StaticType::ELEMENT_TYPE);

  if(!_src.getStaticType().containsType(StaticType::DOCUMENT_TYPE | StaticType::ELEMENT_TYPE)) {
    XQThrow(StaticErrorException, X("XQValidate::createSequence"),
            X("The expression to be validated must evaluate to exactly one document or element node [err:XQTY0030]."));
  }

  _src.forceNoFolding(true);
  return this; // Never constant fold
}

////////////////////////////////////////////////////////////////////////////////////////////////////

ValidateArgumentCheckFilter::ValidateArgumentCheckFilter(EventHandler *next, DocumentCache::ValidationMode mode, DynamicContext *context,
                                                         const LocationInfo *loc)
  : EventFilter(next),
    mode_(mode),
    info_(loc),
    context_(context),
    inDocumentNode_(false),
    seenDocElem_(false),
    level_(0),
    seenOne_(false)
{
}

void ValidateArgumentCheckFilter::startDocumentEvent(const XMLCh *documentURI, const XMLCh *encoding)
{
  if(seenOne_ && level_ == 0) {
    XQThrow3(DynamicErrorException, X("XQValidate::generateEvents"),
             X("The expression to be validated must evaluate to exactly one document or element node [err:XQTY0030]."), info_);
  }

  seenOne_ = true;
  inDocumentNode_ = true;
  seenDocElem_ = false;
  ++level_;
  next_->startDocumentEvent(documentURI, encoding);
}

void ValidateArgumentCheckFilter::endDocumentEvent()
{
  if(!seenDocElem_) {
    XQThrow3(DynamicErrorException,X("XQValidate::generateEvents"),
             X("A document being validated must have exactly one child element [err:XQDY0061]"), info_);
  }

  next_->endDocumentEvent();
  inDocumentNode_ = false;
  --level_;
}

void ValidateArgumentCheckFilter::startElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname)
{
  if(seenOne_ && level_ == 0) {
    XQThrow3(DynamicErrorException, X("XQValidate::generateEvents"),
             X("The expression to be validated must evaluate to exactly one document or element node [err:XQTY0030]."), info_);
  }

  if(inDocumentNode_ && level_ == 1) {
    if(seenDocElem_) {
      XQThrow3(DynamicErrorException,X("XQValidate::generateEvents"),
               X("A document being validated must have exactly one child element [err:XQDY0061]"), info_);
    }
    seenDocElem_ = true;
  }

  if((!inDocumentNode_ && level_ == 0) || (inDocumentNode_ && level_ == 1)) {
    // if validation is strict, there must be a schema for the root node
    if(mode_ == DocumentCache::VALIDATION_STRICT) {
      if(!context_->getDocumentCache()->getElementDecl(uri, localname)) {
        XMLBuffer msg(1023);
        msg.set(X("Element {"));
        msg.append(uri);
        msg.append(X("}"));
        msg.append(localname);
        msg.append(X(" is not defined as a global element [err:XQDY0084]"));
        XQThrow3(DynamicErrorException,X("XQValidate::generateEvents"), msg.getRawBuffer(), info_);
      }
    }
  }

  seenOne_ = true;
  ++level_;
  next_->startElementEvent(prefix, uri, localname);
}

void ValidateArgumentCheckFilter::endElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname,
                                                  const XMLCh *typeURI, const XMLCh *typeName)
{
  next_->endElementEvent(prefix, uri, localname, typeURI, typeName);
  --level_;
}

void ValidateArgumentCheckFilter::textEvent(const XMLCh *value)
{
  if(level_ == 0) {
    XQThrow3(DynamicErrorException, X("XQValidate::generateEvents"),
             X("The expression to be validated must evaluate to exactly one document or element node [err:XQTY0030]."), info_);
  }

  if(inDocumentNode_ && level_ == 1) {
    XQThrow3(DynamicErrorException,X("XQValidate::generateEvents"),
             X("A document being validated can only have element, comments and processing instructions as children [err:XQDY0061]"), info_);
  }

  next_->textEvent(value);
}

void ValidateArgumentCheckFilter::textEvent(const XMLCh *chars, unsigned int length)
{
  if(level_ == 0) {
    XQThrow3(DynamicErrorException, X("XQValidate::generateEvents"),
             X("The expression to be validated must evaluate to exactly one document or element node [err:XQTY0030]."), info_);
  }

  if(inDocumentNode_ && level_ == 1) {
    XQThrow3(DynamicErrorException,X("XQValidate::generateEvents"),
             X("A document being validated can only have element, comments and processing instructions as children [err:XQDY0061]"), info_);
  }

  next_->textEvent(chars, length);
}

void ValidateArgumentCheckFilter::piEvent(const XMLCh *target, const XMLCh *value)
{
  if(level_ == 0) {
    XQThrow3(DynamicErrorException, X("XQValidate::generateEvents"),
             X("The expression to be validated must evaluate to exactly one document or element node [err:XQTY0030]."), info_);
  }

  next_->piEvent(target, value);
}

void ValidateArgumentCheckFilter::commentEvent(const XMLCh *value)
{
  if(level_ == 0) {
    XQThrow3(DynamicErrorException, X("XQValidate::generateEvents"),
             X("The expression to be validated must evaluate to exactly one document or element node [err:XQTY0030]."), info_);
  }

  next_->commentEvent(value);
}

void ValidateArgumentCheckFilter::attributeEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname, const XMLCh *value,
                                                 const XMLCh *typeURI, const XMLCh *typeName)
{
  if(level_ == 0) {
    XQThrow3(DynamicErrorException, X("XQValidate::generateEvents"),
             X("The expression to be validated must evaluate to exactly one document or element node [err:XQTY0030]."), info_);
  }

  next_->attributeEvent(prefix, uri, localname, value, typeURI, typeName);
}

void ValidateArgumentCheckFilter::namespaceEvent(const XMLCh *prefix, const XMLCh *uri)
{
  if(level_ == 0) {
    XQThrow3(DynamicErrorException, X("XQValidate::generateEvents"),
             X("The expression to be validated must evaluate to exactly one document or element node [err:XQTY0030]."), info_);
  }

  next_->namespaceEvent(prefix, uri);
}

void ValidateArgumentCheckFilter::atomicItemEvent(AnyAtomicType::AtomicObjectType type, const XMLCh *value, const XMLCh *typeURI,
                                                  const XMLCh *typeName)
{
  if(level_ == 0) {
    XQThrow3(DynamicErrorException, X("XQValidate::generateEvents"),
             X("The expression to be validated must evaluate to exactly one document or element node [err:XQTY0030]."), info_);
  }

  next_->atomicItemEvent(type, value, typeURI, typeName);
}
