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

#ifndef XQTEXTCONSTRUCTOR_HPP
#define XQTEXTCONSTRUCTOR_HPP

#include <xqilla/ast/XQDOMConstructor.hpp>

class EventHandler;

class XQILLA_API XQTextConstructor : public XQDOMConstructor
{
public:
  XQTextConstructor(ASTNode *value, XPath2MemoryManager* mm);

  virtual void generateEvents(EventHandler *events, DynamicContext *context,
                              bool preserveNS, bool preserveType) const;
  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  virtual const XMLCh* getNodeType() const;
  virtual const ASTNode *getValue() const;

  virtual void setValue(ASTNode *value);

private:
  const XMLCh *m_nodeType;
  ASTNode *m_value;
};

#endif
