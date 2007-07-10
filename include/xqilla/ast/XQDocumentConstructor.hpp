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

#ifndef XQDOCUMENTCONSTRUCTOR_HPP
#define XQDOCUMENTCONSTRUCTOR_HPP

#include <xqilla/ast/XQDOMConstructor.hpp>

class XQILLA_API XQDocumentConstructor : public XQDOMConstructor
{
public:
  XQDocumentConstructor(ASTNode *value, XPath2MemoryManager* expr);

  virtual void generateEvents(EventHandler *events, DynamicContext *context,
                              bool preserveNS, bool preserveType) const;
  virtual ASTNode *staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  virtual const XMLCh* getNodeType() const;
  virtual const ASTNode *getValue() const;

  virtual void setValue(ASTNode *value);

protected:
  ASTNode *m_value;
};

#endif
