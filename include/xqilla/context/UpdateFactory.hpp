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

#ifndef _UPDATEFACTORY_HPP
#define _UPDATEFACTORY_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xercesc/util/XMemory.hpp>

class PendingUpdateList;
class PendingUpdate;
class DynamicContext;

class XQILLA_API UpdateFactory : public XERCES_CPP_NAMESPACE_QUALIFIER XMemory
{
public:
  virtual ~UpdateFactory() {}

  virtual void applyUpdates(const PendingUpdateList &pul, DynamicContext *context);

  virtual void applyPut(const PendingUpdate &update, DynamicContext *context) = 0;
  virtual void applyInsertInto(const PendingUpdate &update, DynamicContext *context) = 0;
  virtual void applyInsertAttributes(const PendingUpdate &update, DynamicContext *context) = 0;
  virtual void applyReplaceValue(const PendingUpdate &update, DynamicContext *context) = 0;
  virtual void applyRename(const PendingUpdate &update, DynamicContext *context) = 0;
  virtual void applyDelete(const PendingUpdate &update, DynamicContext *context) = 0;
  virtual void applyInsertBefore(const PendingUpdate &update, DynamicContext *context) = 0;
  virtual void applyInsertAfter(const PendingUpdate &update, DynamicContext *context) = 0;
  virtual void applyInsertAsFirst(const PendingUpdate &update, DynamicContext *context) = 0;
  virtual void applyInsertAsLast(const PendingUpdate &update, DynamicContext *context) = 0;
  virtual void applyReplaceNode(const PendingUpdate &update, DynamicContext *context) = 0;
  virtual void applyReplaceAttribute(const PendingUpdate &update, DynamicContext *context) = 0;
  virtual void applyReplaceElementContent(const PendingUpdate &update, DynamicContext *context) = 0;

  virtual void completeUpdate(DynamicContext *context) = 0;
};

#endif
