/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <sstream>

#include <xqilla/utils/PrintAST.hpp>
#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/utils/NumUtils.hpp>
#include <xqilla/ast/ASTNode.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/exceptions/XPath2TypeCastException.hpp>
#include <xqilla/items/Numeric.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/DateOrTimeType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/runtime/SequenceResult.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/context/ContextHelpers.hpp>

ASTNodeImpl::ASTNodeImpl(XPath2MemoryManager* memMgr)
  : _src(memMgr),
    _memMgr(memMgr)
{
  // Nothing to do
}

ASTNodeImpl::~ASTNodeImpl(void)
{
  //no-op
}

bool ASTNodeImpl::isConstant() const
{
  return _type == ASTNode::SEQUENCE || _type == ASTNode::LITERAL;
}

/** Overridden in XQSequence and XQLiteral */
bool ASTNodeImpl::isConstantAndHasTimezone(StaticContext *context) const
{
  return false;
}

ASTNode::whichType ASTNodeImpl::getType(void) const
{
  return _type;
}

void ASTNodeImpl::setType(ASTNode::whichType t)
{
  _type = t;
}

bool ASTNodeImpl::isSingleNumericConstant(StaticContext *context) const
{
  return false;
}

Result ASTNodeImpl::collapseTree(DynamicContext* context, int flags) const
{
  return createResult(context, flags);
}

Result ASTNodeImpl::createResult(DynamicContext* context, int flags) const
{
  return new CollapseTreeInternalResult(this, flags, context);
}

Sequence ASTNodeImpl::collapseTreeInternal(DynamicContext* context, int flags) const
{
  return Sequence(context->getMemoryManager());
}

ASTNode *ASTNodeImpl::resolveASTNode(ASTNode *&di, StaticContext *context, bool cf)
{
  di = di->staticResolution(context);
  _src.getStaticType() = di->getStaticResolutionContext().getStaticType();
  _src.add(di->getStaticResolutionContext());
  if(di->isConstant() && cf) {
    return constantFold(context);
  }
  return this;
}

ASTNode *ASTNodeImpl::resolveASTNodes(VectorOfASTNodes &dis, StaticContext *context, bool cf)
{
  bool allConstant = true;
  for(VectorOfASTNodes::iterator i = dis.begin(); i != dis.end(); ++i) {
    *i = (*i)->staticResolution(context);
    _src.add((*i)->getStaticResolutionContext());
    if(!(*i)->isConstant()) {
      allConstant = false;
    }
  }

  if(allConstant && cf) {
    return constantFold(context);
  }
  return this;
}

ASTNode *ASTNodeImpl::resolveASTNodesForDateOrTime(VectorOfASTNodes &dis, StaticContext *context, bool cf)
{
  bool allConstant = true;
  for(VectorOfASTNodes::iterator i = dis.begin(); i != dis.end(); ++i) {
    *i = (*i)->staticResolution(context);
    _src.add((*i)->getStaticResolutionContext());
    if(!(*i)->isConstantAndHasTimezone(context)) {
      allConstant = false;
      if((*i)->isConstant()) {
        _src.implicitTimezoneUsed(true);
      }
    }
  }

  if(allConstant && cf) {
    return constantFold(context);
  }
  return this;
}

ASTNode *ASTNodeImpl::constantFold(StaticContext *context) const
{
  AutoDelete<DynamicContext> dContext(context->createDynamicContext());
  dContext->setMemoryManager(context->getMemoryManager());
  Result result = createResult(dContext);
  ASTNode* newBlock = new (getMemoryManager()) XQSequence(result, dContext, getMemoryManager());
  return newBlock->staticResolution(context);
}

XPath2MemoryManager* ASTNodeImpl::getMemoryManager(void) const {

  return _memMgr;
}

const StaticResolutionContext &ASTNodeImpl::getStaticResolutionContext() const
{
  return _src;
}

/////////////////////////////////////
// CollapseTreeInternalResult
/////////////////////////////////////

ASTNodeImpl::CollapseTreeInternalResult::CollapseTreeInternalResult(const ASTNodeImpl *di, int flags, DynamicContext *context)
  : LazySequenceResult(context),
    _flags(flags),
    _di(di)
{
}

void ASTNodeImpl::CollapseTreeInternalResult::getResult(Sequence &toFill, DynamicContext *context) const
{
  toFill = _di->collapseTreeInternal(context, _flags);
}

std::string ASTNodeImpl::CollapseTreeInternalResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<collapsetreeinternal/>" << std::endl;

  return oss.str();
}
