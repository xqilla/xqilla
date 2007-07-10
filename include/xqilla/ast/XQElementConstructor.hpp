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

#ifndef XQELEMENTCONSTRUCTOR_HPP
#define XQELEMENTCONSTRUCTOR_HPP

#include <xqilla/ast/XQDOMConstructor.hpp>

#include <xercesc/util/RefHashTableOf.hpp>

class XQILLA_API XQElementConstructor : public XQDOMConstructor
{
public:
  XQElementConstructor(ASTNode* name, VectorOfASTNodes* attrList, VectorOfASTNodes* children, XPath2MemoryManager *mm);

  virtual void generateEvents(EventHandler *events, DynamicContext *context,
                              bool preserveNS, bool preserveType) const;
  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  virtual const XMLCh* getNodeType() const;
  virtual const ASTNode *getName() const;
  virtual const VectorOfASTNodes *getAttributes() const;
  virtual const VectorOfASTNodes *getChildren() const;

  virtual void setName(ASTNode *name);

protected:
  ASTNode* m_name;
  VectorOfASTNodes* m_attrList, *m_children;
  XERCES_CPP_NAMESPACE_QUALIFIER RefHashTableOf< XMLCh >* m_namespaces;
};

#endif
