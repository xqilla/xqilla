/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2006
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

#ifndef _XQNav_HPP
#define _XQNav_HPP

#include <set>
#include <vector>
#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/runtime/Sequence.hpp>

#include <xqilla/runtime/SingleResult.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/ast/XQStep.hpp>
#include <xercesc/dom/DOMNode.hpp>

///this class calculates a node list based on a context
class XQILLA_API XQNav : public ASTNodeImpl
{
public:
  class XQILLA_API StepInfo {
  public:
    StepInfo() : usesContextSize(false), step(0) {}
    StepInfo(ASTNode *s) : usesContextSize(false), step(s) {}
    StepInfo(ASTNode *s, bool cs) : usesContextSize(cs), step(s) {}
    bool usesContextSize;
    ASTNode *step;
  };
  typedef std::vector<StepInfo,XQillaAllocator<StepInfo> > Steps;

  XQNav(XPath2MemoryManager* memMgr);
  virtual ~XQNav();
	

  /** Add a new NavigationStep to the sequence of navigation steps to
      be performed. This operation is used by parse tree classes to
      turn themselves into an optimised, reusable navigation. **/
  void addStep(const StepInfo &step);

  /** Add a new NavigationStep to the sequence of navigation steps to
      be performed. This operation is used by parse tree classes to
      turn themselves into an optimised, reusable navigation. **/
  void addStep(XQStep::Axis axis, NodeTest* nodeTest);

  /** Add a new NavigationStep to the start of the sequence of
      navigation steps to be performed.**/
  void addStepFront(ASTNode* step);

  ///set the "go to root of tree first" flag.
  void setGotoRootFirst(bool gotoRoot);

  virtual Result createResult(DynamicContext* context, int flags=0) const;

  virtual ASTNode* staticResolution(StaticContext *context);

  bool getGotoRootFirst() const;
  const Steps &getSteps() const;
  bool getIsSorted() const;

protected:
  static unsigned int combineProperties(unsigned int prev_props, unsigned int step_props);

  class XQILLA_API GotoRootResult : public SingleResult
  {
  public:
    GotoRootResult(DynamicContext *context);
    Item::Ptr getSingleResult(DynamicContext *context) const;
    std::string asString(DynamicContext *context, int indent) const;
  };

  class XQILLA_API StepResult : public ResultImpl
  {
  public:
    StepResult(const Result &parent, ASTNode *step, unsigned int contextSize, int flags, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    void skip();
    std::string asString(DynamicContext *context, int indent) const;

  private:
    bool initialised_;
    int flags_;
    Result parent_;
    const ASTNode *step_;
    Result stepResult_;
    unsigned int contextPos_;
    unsigned int contextSize_;
    Item::Ptr contextItem_;
  };

  class XQILLA_API IntermediateStepCheckResult : public ResultImpl
  {
  public:
    IntermediateStepCheckResult(const Result &parent, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    void skip();
    std::string asString(DynamicContext *context, int indent) const;

  private:
    Result parent_;
  };

  class XQILLA_API LastStepCheckResult : public ResultImpl
  {
  public:
    LastStepCheckResult(const Result &parent, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    void skip();
    std::string asString(DynamicContext *context, int indent) const;

  private:
    Result parent_;
    int _nTypeOfItemsInLastStep;
  };

  class XQILLA_API UniqueNodesResult : public ResultImpl
  {
  public:
    UniqueNodesResult(const Result &parent, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    void skip();
    std::string asString(DynamicContext *context, int indent) const;

  private:
    class uniqueLessThanCompareFn {
    public:
      uniqueLessThanCompareFn(const DynamicContext *context);
      bool operator()(const Node::Ptr &first, const Node::Ptr &second);

    private:
      const DynamicContext *context_;
    };
    typedef std::set<Node::Ptr, uniqueLessThanCompareFn> NoDuplicatesSet;

    Result parent_;
    int nTypeOfItemsInLastStep_;
    NoDuplicatesSet noDups_;
  };

  bool _gotoRoot;
  mutable int _isSorted;
  mutable unsigned int _properties;
  //list of steps to be performed.
  Steps _steps;
};

#endif


