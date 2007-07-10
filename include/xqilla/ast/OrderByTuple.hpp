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

#ifndef ORDERBYTUPLE_HPP
#define ORDERBYTUPLE_HPP

#include <xqilla/ast/TupleNode.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>

class ASTNode;
class Collation;

class XQILLA_API OrderByTuple : public TupleNode
{
public:
  enum Modifiers {
    ASCENDING      = 0x0,
    DESCENDING     = 0x1,

    EMPTY_GREATEST = 0x0,
    EMPTY_LEAST    = 0x2,

    STABLE         = 0x0,
    UNSTABLE       = 0x4,

    DESCENDING_EMPTY_LEAST          = DESCENDING | EMPTY_LEAST,
    DESCENDING_UNSTABLE             = DESCENDING | UNSTABLE,
    EMPTY_LEAST_UNSTABLE            = EMPTY_LEAST | UNSTABLE,
    DESCENDING_EMPTY_LEAST_UNSTABLE = DESCENDING | EMPTY_LEAST | UNSTABLE
  };

  OrderByTuple(TupleNode *parent, ASTNode *expr, int modifiers, Collation *collation, XPath2MemoryManager *mm);

  ASTNode *getExpression() const { return expr_; }
  void setExpression(ASTNode *expr) { expr_ = expr; }

  Modifiers getModifiers() const { return modifiers_; }
  Collation *getCollation() const { return collation_; }

  void setUnstable() { modifiers_ = (Modifiers)(modifiers_ | UNSTABLE); }

  const StaticResolutionContext &getUsedSRC() const { return usedSrc_; }

  virtual TupleNode *staticResolution(StaticContext *context);
  virtual TupleNode *staticTypingSetup(StaticContext *context);
  virtual TupleNode *staticTypingTeardown(StaticContext *context, StaticResolutionContext &usedSrc);

  virtual TupleResult::Ptr createResult(DynamicContext* context) const;

private:
  ASTNode *expr_;
  Modifiers modifiers_;
  Collation *collation_;
  StaticResolutionContext usedSrc_;
};

#endif
