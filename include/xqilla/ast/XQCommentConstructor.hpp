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

#ifndef XQCOMMENTCONSTRUCTOR_HPP
#define XQCOMMENTCONSTRUCTOR_HPP

#include <xqilla/ast/XQDOMConstructor.hpp>

class EventHandler;

class XQILLA_API XQCommentConstructor : public XQDOMConstructor
{
public:
  XQCommentConstructor(ASTNode *value, XPath2MemoryManager* mm);

  virtual void generateEvents(EventHandler *events, DynamicContext *context,
                              bool preserveNS, bool preserveType) const;
  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  virtual const XMLCh* getNodeType() const;
  virtual const ASTNode *getValue() const;

  virtual void setValue(ASTNode *value);

private:
  ASTNode *m_value;
};

#endif
