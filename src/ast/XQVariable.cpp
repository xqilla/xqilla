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
#include <xqilla/ast/StaticAnalysis.hpp>
#include <xercesc/framework/XMLBuffer.hpp>

XQVariable::XQVariable(const XMLCh *qualifiedName, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
    _uri(0)
{
  setType(ASTNode::VARIABLE);

  QualifiedName qname(qualifiedName, getMemoryManager());
  _prefix = qname.getPrefix();
  _name = qname.getName();
}

XQVariable::XQVariable(const XMLCh *uri, const XMLCh *name, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
    _prefix(0),
    _uri(uri),
    _name(name)
{
  setType(ASTNode::VARIABLE);
}

XQVariable::~XQVariable()
{
}

Result XQVariable::createResult(DynamicContext* context, int flags) const
{
  return context->getVariableStore()->getVar(_uri, _name);
}

ASTNode* XQVariable::staticResolution(StaticContext *context)
{
  // An unprefixed variable reference is in no namespace.
  if(_prefix && *_prefix)
    _uri = context->getUriBoundToPrefix(_prefix, this);
  return this;
}

ASTNode *XQVariable::staticTyping(StaticContext *context)
{
  _src.clear();

  const StaticAnalysis *var_src = context->getVariableTypeStore()->getVar(_uri, _name);
  if(var_src == NULL || (var_src->getProperties() & StaticAnalysis::UNDEFINEDVAR)!=0) {
    const XMLCh* qname = XPath2NSUtils::qualifyName(_prefix, _name, context->getMemoryManager());
    const XMLCh* msg = XPath2Utils::concatStrings(X("Variable "), qname, X(" does not exist [err:XPST0008]"),
                                                  context->getMemoryManager());
    XQThrow(StaticErrorException, X("XQVariable::staticResolution"), msg);
  }
  if((var_src->getProperties() & StaticAnalysis::FORWARDREF)!=0) {
    XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer errMsg(1023, context->getMemoryManager());
    errMsg.set(X("Cannot refer to global variable with name {"));
    errMsg.append(_uri);
    errMsg.append(X("}"));
    errMsg.append(_name);
    errMsg.append(X(" because it is declared later [err:XQST0054]"));
    XQThrow(StaticErrorException,X("XQVariable::staticResolution"), errMsg.getRawBuffer());
  }
  _src.setProperties(var_src->getProperties() & ~(StaticAnalysis::SUBTREE|StaticAnalysis::SAMEDOC));
  _src.getStaticType() = var_src->getStaticType();
  _src.variableUsed(_uri, _name);

  return this;
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
