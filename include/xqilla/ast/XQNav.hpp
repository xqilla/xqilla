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

#ifndef _XQNav_HPP
#define _XQNav_HPP

#include <vector>
#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/ast/XQStep.hpp>

///this class calculates a node list based on a context
class XQILLA_API XQNav : public ASTNodeImpl
{
public:
  class XQILLA_API StepInfo {
  public:
    StepInfo() : step(0) {}
    StepInfo(ASTNode *s) : step(s) {}
    ASTNode *step;
  };
  typedef std::vector<StepInfo,XQillaAllocator<StepInfo> > Steps;

  XQNav(XPath2MemoryManager* memMgr);
  virtual ~XQNav();
	

  /** Add a new NavigationStep to the sequence of navigation steps to
      be performed. This operation is used by parse tree classes to
      turn themselves into an optimised, reusable navigation. **/
  void addStep(const StepInfo &step);

  /** Add a new NavigationStep to the start of the sequence of
      navigation steps to be performed.**/
  void addStepFront(ASTNode* step);

  virtual Result createResult(DynamicContext* context, int flags=0) const;

  virtual ASTNode* staticResolution(StaticContext *context);

  const Steps &getSteps() const;

  static unsigned int combineProperties(unsigned int prev_props, unsigned int step_props);

protected:
  class XQILLA_API StepResult : public ResultImpl
  {
  public:
    StepResult(const Result &parent, ASTNode *step, unsigned int contextSize, int flags);

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

  //list of steps to be performed.
  Steps _steps;
  bool _sortAdded;
};

class XQILLA_API IntermediateStepCheckResult : public ResultImpl
{
public:
  IntermediateStepCheckResult(const LocationInfo *o, const Result &parent);

  Item::Ptr next(DynamicContext *context);
  void skip();
  std::string asString(DynamicContext *context, int indent) const;

private:
  Result parent_;
};

class XQILLA_API LastStepCheckResult : public ResultImpl
{
public:
  LastStepCheckResult(const LocationInfo *o, const Result &parent);

  Item::Ptr next(DynamicContext *context);
  void skip();
  std::string asString(DynamicContext *context, int indent) const;

private:
  Result parent_;
  int _nTypeOfItemsInLastStep;
};

#endif


