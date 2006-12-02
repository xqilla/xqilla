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

#ifndef _URENAME_HPP
#define _URENAME_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/ASTNodeImpl.hpp>

class XQILLA_API URename : public ASTNodeImpl
{
public:
  URename(ASTNode *target, ASTNode *name, XPath2MemoryManager* memMgr);

  virtual ASTNode *staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);
  virtual PendingUpdateList createUpdateList(DynamicContext *context) const;

  const ASTNode *getTarget() const { return target_; }
  void setTarget(ASTNode *target) { target_ = target; }

  const ASTNode *getName() const { return name_; }
  void setName(ASTNode *name) { name_ = name; }

protected:
  ASTNode *target_;
  ASTNode *name_;
};

#endif
