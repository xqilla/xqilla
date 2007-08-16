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
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/exceptions/XPath2TypeMatchException.hpp>

XERCES_CPP_NAMESPACE_USE;

URename::URename(ASTNode *target, ASTNode *name, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
    target_(target),
    name_(name)
{
  setType(ASTNode::URENAME);
}

static const XMLCh err_XUTY0012[] = { 'e', 'r', 'r', ':', 'X', 'U', 'T', 'Y', '0', '0', '1', '2', 0 };
static const XMLCh err_XUDY0027[] = { 'e', 'r', 'r', ':', 'X', 'U', 'D', 'Y', '0', '0', '2', '7', 0 };

ASTNode* URename::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  SequenceType *targetType1 = new (mm) SequenceType(new (mm) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING),
                                                    SequenceType::PLUS);
  targetType1->setLocationInfo(this);

  SequenceType *targetType2 = new (mm) SequenceType(new (mm) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE),
                                                    SequenceType::EXACTLY_ONE);
  targetType2->setLocationInfo(this);

  target_ = new (mm) XQTreatAs(target_, targetType1, mm, err_XUDY0027);
  target_->setLocationInfo(this);
  target_ = target_->staticResolution(context);

  target_ = new (mm) XQTreatAs(target_, targetType2, mm, err_XUTY0012);
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
  _src.add(target_->getStaticAnalysis());

  if(target_->getStaticAnalysis().isUpdating()) {
    XQThrow(StaticErrorException,X("URename::staticTyping"),
            X("It is a static error for the target expression of a rename expression "
              "to be an updating expression [err:XUST0001]"));
  }

  if(!target_->getStaticAnalysis().getStaticType().
     containsType(StaticType::ELEMENT_TYPE|StaticType::ATTRIBUTE_TYPE|StaticType::PI_TYPE)) {
    XQThrow(XPath2TypeMatchException,X("URename::staticTyping"),
            X("It is a type error for the target expression of a rename expression not to be a single element, "
              "attribute or processing instruction [err:XUTY0012]"));
  }

  name_ = name_->staticTyping(context);
  _src.add(name_->getStaticAnalysis());

  if(name_->getStaticAnalysis().isUpdating()) {
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
    XQThrow(XPath2TypeMatchException,X("URename::createUpdateList"),
            X("It is a type error for the target expression of a rename expression not to be a single element, "
              "attribute or processing instruction [err:XUTY0012]"));

  ATQNameOrDerived::Ptr qname = (ATQNameOrDerived*)name_->createResult(context)->next(context).get();

  // 3. The following checks are performed for error conditions:
  //    a. If $target is an element node, the "namespaces" property of $target must not include any namespace binding that conflicts
  //       with the implied namespace binding of $QName [err:XUDY0023].
  //    b. If $target is an attribute node that has a parent, the "namespaces" property of parent($target) must not include any
  //       namespace binding that conflicts with the implied namespace binding of $QName [err:XUDY0023].
  // TBD Check these - jpcs

  //    c. If $target is processing instruction node, $QName must not include a non-empty namespace prefix. [err:XUDY0025].
  if(node->dmNodeKind() == Node::processing_instruction_string && !XPath2Utils::equals(qname->getPrefix(), XMLUni::fgZeroLenString))
    XQThrow(XPath2TypeMatchException,X("URename::createUpdateList"),
            X("The target of a rename expression is a processing instruction node, and the new name "
              "expression returned a QName with a non-empty namespace prefix [err:XUTY0025]"));

  return PendingUpdate(PendingUpdate::RENAME, node, qname, this);
}

