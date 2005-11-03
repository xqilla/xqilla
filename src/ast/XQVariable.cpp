/*
 * Copyright (c) 2001-2005
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2005
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2005
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2005
 *     Parthenon Computing Ltd. All rights reserved.
 *
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

#include "../config/pathan_config.h"
#include <xqilla/ast/XQVariable.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/parser/QName.hpp>
#include <xqilla/context/VariableStore.hpp>
#include <xqilla/context/VariableTypeStore.hpp>
#include <xqilla/context/VarHashEntry.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/exceptions/DynamicErrorException.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>

XQVariable::XQVariable(const XMLCh *qualifiedName, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
    _uri(0),
    _staticProperties(0)
{
  setType(ASTNode::VARIABLE);

  QualifiedName qname(qualifiedName, getMemoryManager());
  _prefix = qname.getPrefix();
  _name = qname.getName();
}

XQVariable::XQVariable(const XMLCh *prefix, const XMLCh *name, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
    _uri(0),
    _staticProperties(0)
{
  setType(ASTNode::VARIABLE);

  _prefix = getMemoryManager()->getPooledString(prefix);
  _name = getMemoryManager()->getPooledString(name);
}

XQVariable::~XQVariable()
{
}

Result XQVariable::createResult(DynamicContext* context, int flags) const
{
  std::pair<bool, Sequence> var = context->getVariableStore()->getVar(_uri, _name, context);

  if(!var.first) {
    const XMLCh* qname = XPath2NSUtils::qualifyName(_prefix, _name, context->getMemoryManager());
    const XMLCh* msg = XPath2Utils::concatStrings(X("Variable "), qname, X(" does not exist [err:XPDY0002]"), context->getMemoryManager());
    DSLthrow(DynamicErrorException, X("XQVariable::collapseTreeInternal"), msg);
  }

  return var.second;
}

ASTNode* XQVariable::staticResolution(StaticContext *context)
{
  _uri = context->getUriBoundToPrefix(_prefix);
  const StaticResolutionContext *var_src = context->getVariableTypeStore()->getVar(_uri, _name);
  if(var_src == NULL) {
    const XMLCh* qname = XPath2NSUtils::qualifyName(_prefix, _name, context->getMemoryManager());
    const XMLCh* msg = XPath2Utils::concatStrings(X("Variable "), qname, X(" does not exist [err:XPST0001]"), context->getMemoryManager());
    DSLthrow(StaticErrorException, X("XQVariable::staticResolution"), msg);
  }
  _src.setProperties(var_src->getProperties() & ~(StaticResolutionContext::SUBTREE|StaticResolutionContext::SAMEDOC));
  _src.getStaticType() = var_src->getStaticType();
  _src.variableUsed(_uri, _name);

  return resolvePredicates(context);
}

const XMLCh *XQVariable::getPrefix() const {
  return _prefix;
}

const XMLCh *XQVariable::getURI() const {
  return _uri;
}

const XMLCh *XQVariable::getName() const {
  return _name;
}
