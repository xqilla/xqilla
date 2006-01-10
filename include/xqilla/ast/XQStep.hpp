/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#ifndef _XQSTEP_HPP
#define _XQSTEP_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/ASTNodeImpl.hpp>

class NodeTest;

///this class calculates a node list based on a context
class XQILLA_API XQStep : public ASTNodeImpl
{
public:
  enum Axis {
    ANCESTOR,
    ANCESTOR_OR_SELF,
    ATTRIBUTE,
    CHILD,
    DESCENDANT,
    DESCENDANT_OR_SELF,
    FOLLOWING,
    FOLLOWING_SIBLING,
    NAMESPACE,
    PARENT,
    PRECEDING,
    PRECEDING_SIBLING,
    SELF
  };

  //constuctor that takes the step this XQ is refuring to
  XQStep(Axis axis, NodeTest* nodeTest, XPath2MemoryManager* memMgr);
  ~XQStep();

  virtual ASTNode* staticResolution(StaticContext *context);
  virtual Result createResult(DynamicContext* context, int flags=0) const;
  virtual Result postPredicateResultHook(Result &result, DynamicContext* context, int flags=0) const;

  const NodeTest *getNodeTest() const;
  void setNodeTest(NodeTest *nodeTest);

  Axis getAxis() const;
  void setAxis(Axis axis);

  static bool isForwardAxis(Axis axis);

private:
  /**
   * Lazily apply an axis and NodeTest filter to the context node
   */
  class StepResult : public ResultImpl
  {
  public:
    StepResult(const XQStep *step, DynamicContext *context);
    virtual ~StepResult() {}

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;

  protected:
    bool toDo_;
    Result result_;
    const XQStep *step_;
  };

  NodeTest* nodeTest_;
  Axis axis_;
};

#endif
