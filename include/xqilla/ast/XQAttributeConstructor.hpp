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

#ifndef XQATTRIBUTECONSTRUCTOR_HPP
#define XQATTRIBUTECONSTRUCTOR_HPP

#include <xqilla/ast/XQDOMConstructor.hpp>

class XQILLA_API XQAttributeConstructor : public XQDOMConstructor
{
public:
  XQAttributeConstructor(ASTNode* name, VectorOfASTNodes* children, XPath2MemoryManager* mm);

  virtual void generateEvents(EventHandler *events, DynamicContext *context,
                              bool preserveNS, bool preserveType) const;
  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  virtual const XMLCh* getNodeType() const;
  virtual const ASTNode *getName() const;
  virtual const VectorOfASTNodes *getChildren() const;

  virtual void setName(ASTNode *name);

protected:
  ASTNode* m_name;
  VectorOfASTNodes* m_children;
};

#endif
