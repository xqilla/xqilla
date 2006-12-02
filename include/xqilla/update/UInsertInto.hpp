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

#ifndef _UINSERTINTO_HPP
#define _UINSERTINTO_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/ASTNodeImpl.hpp>

class XQILLA_API UInsertInto : public ASTNodeImpl
{
public:
  UInsertInto(ASTNode *source, ASTNode *target, XPath2MemoryManager* memMgr);

  virtual ASTNode *staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);
  virtual PendingUpdateList createUpdateList(DynamicContext *context) const;

  const ASTNode *getSource() const { return source_; }
  void setSource(ASTNode *source) { source_ = source; }

  const ASTNode *getTarget() const { return target_; }
  void setTarget(ASTNode *target) { target_ = target; }

protected:
  ASTNode *source_;
  ASTNode *target_;
};

#endif
