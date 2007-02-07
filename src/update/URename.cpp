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

#include <xqilla/update/URename.hpp>
#include <xqilla/update/PendingUpdateList.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/ast/XQDOMConstructor.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/exceptions/XPath2TypeMatchException.hpp>

URename::URename(ASTNode *target, ASTNode *name, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
    target_(target),
    name_(name)
{
  setType(ASTNode::URENAME);
}

ASTNode* URename::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  SequenceType *targetType = new (mm) SequenceType(new (mm) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE),
                                                   SequenceType::EXACTLY_ONE);
  targetType->setLocationInfo(this);
  target_ = new (mm) XQTreatAs(target_, targetType, mm);
  target_->setLocationInfo(this);
  target_ = target_->staticResolution(context);

  name_ = new (mm) XQNameExpression(name_, mm);
  name_->setLocationInfo(this);
  name_ = name_->staticResolution(context);

  return this;
}

ASTNode *URename::staticTyping(StaticContext *context)
{
  _src.clear();

  target_ = target_->staticTyping(context);
  _src.add(target_->getStaticResolutionContext());

  if(target_->getStaticResolutionContext().isUpdating()) {
    XQThrow(StaticErrorException,X("URename::staticTyping"),
            X("It is a static error for the target expression of a rename expression "
              "to be an updating expression [err:XUST0001]"));
  }

  if(!target_->getStaticResolutionContext().getStaticType().
     containsType(StaticType::ELEMENT_TYPE|StaticType::ATTRIBUTE_TYPE|StaticType::PI_TYPE)) {
    XQThrow(XPath2TypeMatchException,X("URename::staticTyping"),
            X("It is a type error for the target expression of a rename expression not to be a single element, "
              "attribute or processing instruction [err:TBD]"));
  }

  name_ = name_->staticTyping(context);
  _src.add(name_->getStaticResolutionContext());

  if(name_->getStaticResolutionContext().isUpdating()) {
    XQThrow(StaticErrorException,X("URename::staticTyping"),
            X("It is a static error for the name expression of a rename expression "
              "to be an updating expression [err:XUST0001]"));
  }

  _src.updating(true);
  return this;
}

PendingUpdateList URename::createUpdateList(DynamicContext *context) const
{
  Node::Ptr node = (Node*)target_->createResult(context)->next(context).get();

  if(node->dmNodeKind() != Node::element_string &&
     node->dmNodeKind() != Node::attribute_string &&
     node->dmNodeKind() != Node::processing_instruction_string)
    XQThrow(XPath2TypeMatchException,X("URename::staticTyping"),
            X("It is a type error for the target expression of a rename expression not to be a single element, "
              "attribute or processing instruction [err:TBD]"));

  return PendingUpdate(PendingUpdate::RENAME, node, name_->createResult(context)->next(context), this);
}

