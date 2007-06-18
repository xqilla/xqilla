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

#ifndef _XERCESUPDATEFACTORY_HPP
#define _XERCESUPDATEFACTORY_HPP

#include <set>

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/context/UpdateFactory.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/ast/LocationInfo.hpp>

#include <xercesc/util/XMLUri.hpp>

XERCES_CPP_NAMESPACE_BEGIN
class DOMNode;
XERCES_CPP_NAMESPACE_END

class XQILLA_API XercesUpdateFactory : public UpdateFactory
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

  virtual void completeUpdate(DynamicContext *context);

protected:
  void completeDeletions(DynamicContext *context);
  void completeRevalidation(DynamicContext *context);
  void removeType(XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *node);
  void setToUntyped(XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *node);
  void addToPutList(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *node, const LocationInfo *location, DynamicContext *context);

  typedef std::set<XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *> DOMNodeSet;

  class PutItem {
  public:
    PutItem(const XMLCh *urich, const XMLCh *enc, const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *nd, const LocationInfo *loc)
      : uri(urich), encoding(enc), node(nd), location(loc) {}

    XERCES_CPP_NAMESPACE_QUALIFIER XMLUri uri;
    const XMLCh *encoding;
    const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *node;
    const LocationInfo *location;

    bool operator<(const PutItem &other) const
    {
      return XPath2Utils::compare(uri.getUriText(), other.uri.getUriText()) < 0;
    }
  };
  typedef std::set<PutItem> PutList;

  DOMNodeSet forDeletion_;
  PutList putList_;
};

#endif
