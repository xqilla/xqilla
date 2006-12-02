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

#ifndef _PENDINGUPDATELIST_HPP
#define _PENDINGUPDATELIST_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/ast/LocationInfo.hpp>

class XQILLA_API PendingUpdate : public LocationInfo
{
public:
  /**
   * This enumeration is ordered according to the order
   * that the pending updates should be applied.
   */
  enum Type {
    INSERT_INTO,
    INSERT_ATTRIBUTES,
    REPLACE_VALUE,
    RENAME,
    DELETE,
    INSERT_BEFORE,
    INSERT_AFTER,
    INSERT_INTO_AS_FIRST,
    INSERT_INTO_AS_LAST,
    REPLACE_ATTRIBUTE,
    REPLACE_NODE,
    REPLACE_ELEMENT_CONTENT,
    PUT
  };

  PendingUpdate(Type type, const Node::Ptr &target, const LocationInfo *info)
    : type_(type), target_(target), value_()
  {
    setLocationInfo(info);
  }
  PendingUpdate(Type type, const Node::Ptr &target, const Item::Ptr &value, const LocationInfo *info)
    : type_(type), target_(target), value_(value)
  {
    setLocationInfo(info);
  }
  PendingUpdate(Type type, const Node::Ptr &target, const Sequence &value, const LocationInfo *info)
    : type_(type), target_(target), value_(value)
  {
    setLocationInfo(info);
  }

  Type getType() const { return type_; }
  const Node::Ptr &getTarget() const { return target_; }
  const Sequence &getValue() const { return value_; }

private:
  Type type_;
  Node::Ptr target_;
  Sequence value_;
};

typedef std::vector<PendingUpdate> PendingUpdates;

/**
 * The result of an updating expression
 */
class XQILLA_API PendingUpdateList
{
public:
  typedef PendingUpdates::iterator iterator;
  typedef PendingUpdates::const_iterator const_iterator;

  PendingUpdateList() {}
  PendingUpdateList(const PendingUpdate &update) { addUpdate(update); }

  iterator begin() { return updates_.begin(); }
  const_iterator begin() const { return updates_.begin(); }

  iterator end() { return updates_.end(); }
  const_iterator end() const { return updates_.end(); }

  void addUpdate(const PendingUpdate &update);
  void mergeUpdates(const PendingUpdateList &pul);

private:
  PendingUpdates updates_;
};

#endif
