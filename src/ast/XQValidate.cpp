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

XQValidate::XQValidate(ASTNode *expr, DocumentCache::ValidationMode mode, XPath2MemoryManager *mm)
  : ASTNodeImpl(mm),
    expr_(expr),
    mode_(mode)
{
  setType(ASTNode::VALIDATE);
}

Sequence XQValidate::createSequence(DynamicContext* context, int flags) const
{
  Result toBeValidated = expr_->createResult(context);
  Item::Ptr item = toBeValidated->next(context);

  if(item.isNull() || !toBeValidated->next(context).isNull() || !item->isNode() ||
     (((Node*)item.get())->dmNodeKind() != Node::element_string && ((Node*)item.get())->dmNodeKind() != Node::document_string))
    XQThrow(DynamicErrorException, X("XQValidate::createSequence"),
            X("The expression to be validated must evaluate to exactly one document or element node [err:XQTY0030]."));

  return Sequence(context->validate((Node*)item.get(), mode_), context->getMemoryManager());
}

ASTNode* XQValidate::staticResolution(StaticContext* context)
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

