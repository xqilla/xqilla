/*
 * Copyright (c) 2001-2005
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2005
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2005
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2005
 *     Parthenon Computing Ltd. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * $Id$
 */

#ifndef _ASTNODEIMPL_HPP
#define _ASTNODEIMPL_HPP

class DynamicContext;
class Numeric;

#include <xqilla/ast/ASTNode.hpp>
#include <xqilla/runtime/Result.hpp>
#include <xqilla/runtime/LazySequenceResult.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>

/** class which is used as base for all the different data types */
class XQILLA_API ASTNodeImpl : public ASTNode
{
public:
  ASTNodeImpl(XPath2MemoryManager* memMgr);
  virtual ~ASTNodeImpl();

  ASTNode::whichType getType(void) const;
	
  ///returns the predicate list to be applied to each node we select
  const Predicates& getPredicates(void) const;
  //these can create a step if there are none!!
  virtual void addPredicates(const VectorOfASTNodes &steps);
  virtual void addPredicates(const Predicates &steps);

  /** Returns true if this ASTNode has no predicates, and is an instance of
      XQSequence or XQLiteral */
  virtual bool isConstant() const;
  /** Returns true if this ASTNode has no predicates, and is an instance of
      XQSequence or XQLiteral. If the literal value of this ASTNode
      is a single DateOrTimeType, then hasTimezone() on it must return true,
      otherwise this method will return false. */
  virtual bool isConstantAndHasTimezone(StaticContext* context) const;

  ///calls createResult and then checks predicates
  virtual Result collapseTree(DynamicContext* context, int flags=0) const;

  /**
   * Can be overridden by derived classes. Default implementation returns a
   * SequenceResult made from the Sequence returned by collapseTreeInternal.
   */
  virtual Result createResult(DynamicContext* context, int flags=0) const;

  /**
   * Can be overridden by derived classes to add an execution stage after
   * predicate evaluation. This is mainly used by reverse axes to reorder
   * their steps.
   */
  virtual Result postPredicateResultHook(Result &result, DynamicContext* context, int flags=0) const;

  /**
   * Collapse the compiled expression based on context. Default implementation
   * returns an empty sequence.
   */
  virtual Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

  Result createPredicateResult(Result &parent, const PredInfo &p, DynamicContext *context) const;
  virtual bool isSingleNumericConstant(StaticContext *context) const;

  /** Calls staticResolution on the ASTNodes, then if isConstant() is true for
      all of them, and constantFold is true, returns the result of the
      constantFold() method, otherwise returns the result of the resolvePredicates()
      method. */
  ASTNode *resolveASTNodes(VectorOfASTNodes &dis, StaticContext *context, bool constantFold);
  /** Calls staticResolution on the ASTNodes, then if isConstantAndHasTimezone() is true for
      all of them, and constantFold is true, returns the result of the
      constantFold() method, otherwise returns the result of the resolvePredicates()
      method. */
  ASTNode *resolveASTNodesForDateOrTime(VectorOfASTNodes &dis, StaticContext *context, bool constantFold);
  /** Calls staticResolution on the ASTNode, then if isConstant() is true for
      it, and constantFold is true, returns the result of the
      constantFold() method, otherwise returns the result of the resolvePredicates()
      method. */
  ASTNode *resolveASTNode(ASTNode *&di, StaticContext *context, bool constantFold);
  /** Calls staticResolution on the predicates of this ASTNode, constant folding
      if possible */
  ASTNode *resolvePredicates(StaticContext *context);
  virtual ASTNodeImpl *resolvePredicate(Predicates::reverse_iterator it, Predicates &newPreds, StaticContext *context);
  /** Performs constant folding on this ASTNode, transfering any predicates to
      the returned ASTNode */
  ASTNode *constantFold(StaticContext *context) const;

  virtual const StaticResolutionContext &getStaticResolutionContext() const;

protected:
  void setType(ASTNode::whichType t);
  XPath2MemoryManager* getMemoryManager(void) const;

  class CollapseTreeInternalResult : public LazySequenceResult
  {
  public:
    CollapseTreeInternalResult(const ASTNodeImpl *di, int flags, DynamicContext *context);

    void getResult(Sequence &toFill, DynamicContext *context) const;
    std::string asString(DynamicContext *context, int indent) const;

  private:
    int _flags;
    const ASTNodeImpl *_di;
  };

  class PredicateFilterResult : public ResultImpl
  {
  public:
    PredicateFilterResult(const Result &parent, const PredInfo &pred, unsigned int contextSize, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    void skip();
    std::string asString(DynamicContext *context, int indent) const;

  private:
    bool todo_;
    Result parent_;
    const PredInfo &pred_;
    unsigned int contextPos_;
    unsigned int contextSize_;
    Item::Ptr first_;
    Item::Ptr second_;
  };

  class NonNumericPredicateFilterResult : public ResultImpl
  {
  public:
    NonNumericPredicateFilterResult(const Result &parent, const PredInfo &pred, unsigned int contextSize, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    void skip();
    std::string asString(DynamicContext *context, int indent) const;

  private:
    bool todo_;
    Result parent_;
    const PredInfo &pred_;
    unsigned int contextPos_;
    unsigned int contextSize_;
  };

  class NumericPredicateFilterResult : public ResultImpl
  {
  public:
    NumericPredicateFilterResult(const Result &parent, const PredInfo &pred, unsigned int contextSize, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    void skip();
    std::string asString(DynamicContext *context, int indent) const;

  private:
    bool todo_;
    Result parent_;
    const PredInfo &pred_;
    unsigned int contextSize_;
  };

  Predicates _predList;

  StaticResolutionContext _src;

private:
  whichType _type;
  XPath2MemoryManager* _memMgr;
};

#endif
