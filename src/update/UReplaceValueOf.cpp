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

#include <xqilla/update/UReplaceValueOf.hpp>
#include <xqilla/update/PendingUpdateList.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/ast/XQAtomize.hpp>
#include <xqilla/ast/XQDOMConstructor.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/exceptions/XPath2TypeMatchException.hpp>

#include <xercesc/framework/XMLBuffer.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

UReplaceValueOf::UReplaceValueOf(ASTNode *target, ASTNode *expr, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
    target_(target),
    expr_(expr)
{
  setType(ASTNode::UREPLACE_VALUE_OF);
}

ASTNode* UReplaceValueOf::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  SequenceType *targetType = new (mm) SequenceType(new (mm) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE),
                                                   SequenceType::EXACTLY_ONE);
  targetType->setLocationInfo(this);
  target_ = new (mm) XQTreatAs(target_, targetType, mm);
  target_->setLocationInfo(this);
  target_ = target_->staticResolution(context);

  expr_ = new (mm) XQAtomize(expr_, mm);
  expr_->setLocationInfo(this);
  expr_ = expr_->staticResolution(context);

  return this;
}

ASTNode *UReplaceValueOf::staticTyping(StaticContext *context)
{
  _src.clear();

  target_ = target_->staticTyping(context);
  _src.add(target_->getStaticResolutionContext());

  if(target_->getStaticResolutionContext().isUpdating()) {
    XQThrow(StaticErrorException,X("UReplaceValueOf::staticTyping"),
            X("It is a static error for the target expression of a replace expression "
              "to be an updating expression [err:XUST0001]"));
  }

  expr_ = expr_->staticTyping(context);
  _src.add(expr_->getStaticResolutionContext());

  if(expr_->getStaticResolutionContext().isUpdating()) {
    XQThrow(StaticErrorException,X("UReplaceValueOf::staticTyping"),
            X("It is a static error for the with expression of a replace expression "
              "to be an updating expression [err:XUST0001]"));
  }

  _src.updating(true);
  return this;
}

PendingUpdateList UReplaceValueOf::createUpdateList(DynamicContext *context) const
{
  Node::Ptr node = (Node*)target_->collapseTree(context)->next(context).get();

  XMLBuffer buf;
  XQDOMConstructor::getStringValue(expr_, buf, context);
  Item::Ptr value = context->getItemFactory()->createString(buf.getRawBuffer(), context);

  if(node->dmNodeKind() == Node::element_string) {
    return PendingUpdate(PendingUpdate::REPLACE_ELEMENT_CONTENT, node, value, this);
  }
  else if(node->dmNodeKind() == Node::attribute_string ||
          node->dmNodeKind() == Node::text_string ||
          node->dmNodeKind() == Node::comment_string ||
          node->dmNodeKind() == Node::processing_instruction_string) {
    return PendingUpdate(PendingUpdate::REPLACE_VALUE, node, value, this);
  }
  else {
    XQThrow(XPath2TypeMatchException,X("UReplaceValueOf::createUpdateList"),
            X("The target node of a replace value of expression must not be a document [err:TBD]"));
  }
}

