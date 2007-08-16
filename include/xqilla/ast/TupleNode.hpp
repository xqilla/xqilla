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

#ifndef TUPLENODE_HPP
#define TUPLENODE_HPP

#include <xqilla/runtime/TupleResult.hpp>

class StaticContext;
class StaticAnalysis;

class XQILLA_API TupleNode : public LocationInfo
{
public:
  enum Type {
    CONTEXT_TUPLE,
    FOR,
    LET,
    WHERE,
    ORDER_BY
  };

  virtual ~TupleNode() {}

  virtual Type getType() const { return type_; }

  TupleNode *getParent() const { return parent_; }
  void setParent(TupleNode *parent) { parent_ = parent; }

  void *getUserData() const { return userData_; }
  void setUserData(void *data) { userData_ = data; }

  virtual TupleNode *staticResolution(StaticContext *context) = 0;
  virtual TupleNode *staticTypingSetup(StaticContext *context) = 0;
  virtual TupleNode *staticTypingTeardown(StaticContext *context, StaticAnalysis &usedSrc) = 0;

  virtual TupleResult::Ptr createResult(DynamicContext* context) const = 0;

protected:
  TupleNode(Type type, TupleNode *parent)
    : type_(type), parent_(parent), userData_(0) {}

  Type type_;
  TupleNode *parent_;
  void *userData_;
};

#endif
