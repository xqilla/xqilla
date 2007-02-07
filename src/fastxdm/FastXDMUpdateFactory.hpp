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

#ifndef _FASTXDMUPDATEFACTORY_HPP
#define _FASTXDMUPDATEFACTORY_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/context/UpdateFactory.hpp>

class XQILLA_API FastXDMUpdateFactory : public UpdateFactory
{
public:
  virtual void applyPut(const PendingUpdate &update, DynamicContext *context);
  virtual void applyInsertInto(const PendingUpdate &update, DynamicContext *context);
  virtual void applyInsertAttributes(const PendingUpdate &update, DynamicContext *context);
  virtual void applyReplaceValue(const PendingUpdate &update, DynamicContext *context);
  virtual void applyRename(const PendingUpdate &update, DynamicContext *context);
  virtual void applyDelete(const PendingUpdate &update, DynamicContext *context);
  virtual void applyInsertBefore(const PendingUpdate &update, DynamicContext *context);
  virtual void applyInsertAfter(const PendingUpdate &update, DynamicContext *context);
  virtual void applyInsertAsFirst(const PendingUpdate &update, DynamicContext *context);
  virtual void applyInsertAsLast(const PendingUpdate &update, DynamicContext *context);
  virtual void applyReplaceNode(const PendingUpdate &update, DynamicContext *context);
  virtual void applyReplaceAttribute(const PendingUpdate &update, DynamicContext *context);
  virtual void applyReplaceElementContent(const PendingUpdate &update, DynamicContext *context);

  virtual void completeRevalidation(DynamicContext *context);
  virtual void completeDeletions(DynamicContext *context);
  virtual void completeUpdate(DynamicContext *context);
};

#endif
