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

#ifndef XQPICONSTRUCTOR_HPP
#define XQPICONSTRUCTOR_HPP

#include <xqilla/ast/XQDOMConstructor.hpp>

class EventHandler;

class XQILLA_API XQPIConstructor : public XQDOMConstructor
{
public:
  XQPIConstructor(ASTNode* name, ASTNode* value, XPath2MemoryManager* mm);

  virtual void generateEvents(EventHandler *events, DynamicContext *context,
                              bool preserveNS, bool preserveType) const;
  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  virtual const XMLCh* getNodeType() const;
  virtual const ASTNode *getName() const;
  virtual const ASTNode *getValue() const;

  virtual void setName(ASTNode *name);
  virtual void setValue(ASTNode *value);

private:
  ASTNode* m_name, *m_value;
};

#endif
