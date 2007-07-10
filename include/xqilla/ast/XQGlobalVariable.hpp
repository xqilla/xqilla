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

#ifndef XQGLOBALVARIABLE_HPP
#define XQGLOBALVARIABLE_HPP

#include <xqilla/ast/ASTNodeImpl.hpp>

class SequenceType;

class XQILLA_API XQGlobalVariable : public LocationInfo
{
public:
  XQGlobalVariable(const XMLCh* varQName, SequenceType* seqType, ASTNode* value, XPath2MemoryManager *mm);

  void execute(DynamicContext* context) const;
  void staticResolution(StaticContext *context);
  void staticTyping(StaticContext *context);

  const XMLCh* getVariableName() const;
  bool isExternal() const;
  void setVariableExpr(ASTNode* value);

  const XMLCh *getVariableURI() const;
  const XMLCh *getVariableLocalName() const;
  const SequenceType *getSequenceType() const;
  const ASTNode *getVariableExpr() const;
  const StaticResolutionContext &getStaticResolutionContext() const { return _src; }

protected:
  const XMLCh* m_szQName;
  const XMLCh* m_szURI;
  const XMLCh* m_szLocalName;
  SequenceType* m_Type;
  ASTNode* m_Value;
  StaticResolutionContext _src;
};

#endif
