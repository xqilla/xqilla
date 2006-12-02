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

#include <xqilla/update/UReplace.hpp>
#include <xqilla/update/PendingUpdateList.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/ast/XQDOMConstructor.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/exceptions/XPath2TypeMatchException.hpp>

UReplace::UReplace(ASTNode *target, ASTNode *expr, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
    target_(target),
    expr_(expr)
{
  setType(ASTNode::UREPLACE);
}

ASTNode* UReplace::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  SequenceType *targetType = new (mm) SequenceType(new (mm) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE),
                                                   SequenceType::EXACTLY_ONE);
  targetType->setLocationInfo(this);
  target_ = new (mm) XQTreatAs(target_, targetType, mm);
  target_->setLocationInfo(this);
  target_ = target_->staticResolution(context);

  expr_ = new (mm) XQContentSequence(expr_, /*copy*/true, mm);
  expr_->setLocationInfo(this);
  expr_ = expr_->staticResolution(context);

  return this;
}

ASTNode *UReplace::staticTyping(StaticContext *context)
{
  _src.clear();

  target_ = target_->staticTyping(context);
  _src.add(target_->getStaticResolutionContext());

  if(target_->getStaticResolutionContext().isUpdating()) {
    XQThrow(StaticErrorException,X("UReplace::staticTyping"),
            X("It is a static error for the target expression of a replace expression "
              "to be an updating expression [err:XUST0001]"));
  }

  expr_ = expr_->staticTyping(context);
  _src.add(expr_->getStaticResolutionContext());

  if(expr_->getStaticResolutionContext().isUpdating()) {
    XQThrow(StaticErrorException,X("UReplace::staticTyping"),
            X("It is a static error for the with expression of a replace expression "
              "to be an updating expression [err:XUST0001]"));
  }

  _src.updating(true);
  return this;
}

PendingUpdateList UReplace::createUpdateList(DynamicContext *context) const
{
  Node::Ptr node = (Node*)target_->collapseTree(context)->next(context).get();

  if(node->dmParent(context).isNull())
    XQThrow(XPath2TypeMatchException,X("UReplace::staticTyping"),
            X("The target node of a replace expression does not have a parent [err:TBD]"));

  Result tmpRes = expr_->collapseTree(context);
  Item::Ptr tmp;

  Sequence value(context->getMemoryManager());

  if(node->dmNodeKind() == Node::element_string ||
     node->dmNodeKind() == Node::text_string ||
     node->dmNodeKind() == Node::comment_string ||
     node->dmNodeKind() == Node::processing_instruction_string) {
    while((tmp = tmpRes->next(context)).notNull()) {
      if(((Node*)tmp.get())->dmNodeKind() == Node::attribute_string)
        XQThrow(XPath2TypeMatchException,X("UReplace::staticTyping"),
                X("The with expression of a replace expression must not contain attributes when not replacing an attribute [err:TBD]"));
      value.addItem(tmp);
    }
    return PendingUpdate(PendingUpdate::REPLACE_NODE, node, value, this);
  }
  else {
    while((tmp = tmpRes->next(context)).notNull()) {
      if(((Node*)tmp.get())->dmNodeKind() != Node::attribute_string)
        XQThrow(XPath2TypeMatchException,X("UReplace::staticTyping"),
                X("The with expression of a replace expression must only contain attributes when replacing an attribute [err:TBD]"));
      value.addItem(tmp);
    }
    return PendingUpdate(PendingUpdate::REPLACE_ATTRIBUTE, node, value, this);
  }
}

