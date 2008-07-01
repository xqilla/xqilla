/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
 *     Oracle. All rights reserved.
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
 * $Id: MessageListener.hpp 475 2008-01-08 18:47:44Z jpcs $
 */

#ifndef _INTERACTIVEDEBUGGER_HPP
#define _INTERACTIVEDEBUGGER_HPP

#include <string>
#include <vector>
#include <map>

#include <xqilla/debug/DebugListener.hpp>
#include <xqilla/ast/LocationInfo.hpp>

#include <xqilla/debug/InputParser.hpp>

class XQQuery;
class DynamicContext;
class DebugCommand;
class InteractiveDebugger;

struct XQILLA_API StackEntry
{
  StackEntry(const DebugListener::Info *i, const DynamicContext *context);

  void output(InteractiveDebugger *debugger) const;
  void report() const;

  const DebugListener::Info *info;
  Item::Ptr contextItem;
  size_t contextPosition;
  size_t contextSize;
  const VariableStore *variables;
};

class XQILLA_API InteractiveDebugger : private DebugListener {
public:
  struct XQILLA_API Run {};
  struct XQILLA_API Continue {};
  struct XQILLA_API Quit {};

  static void debugQuery(const XQQuery *query, DynamicContext *context);

  static void outputLocation(const LocationInfo *info, unsigned int context = 0);
  static void outputLocation(const XMLCh *file, unsigned int line, unsigned int column,
                             unsigned int context = 0);
  static void outputLocationFromString(const XMLCh *query, unsigned int line, unsigned int column,
                                       unsigned int context = 0);

  unsigned int setBreakPoint(const std::string &file, unsigned int line, unsigned int column, bool temporary);
  bool disableBreakPoint(unsigned int number);
  bool enableBreakPoint(unsigned int number);
  void listBreakPoints() const;

  void setStep();
  void setNext();
  void run();
  void stackTrace();

  unsigned int getCurrentFrameNumber() const { return currentFrame_; }
  const StackEntry *getCurrentFrame() const;
  bool changeFrame(unsigned int number);

  const XQQuery *getQuery() const { return query_; }
  DynamicContext *getContext() const { return context_; }
  bool queryStarted() const { return queryStarted_; }

  virtual std::string getQueryPlan(const DebugListener::Info *info) const;

  virtual bool doLazyEvaluation() const { return lazy_; }
  virtual bool doFocusOptimizations() const { return focusOptimzations_; }
  void setDoLazyEvaluation(bool lazy) { lazy_ = lazy; }
  void setDoFocusOptimizationsn(bool opt) { focusOptimzations_ = opt; }

  virtual ~InteractiveDebugger();

protected:
  InteractiveDebugger(const XQQuery *query, DynamicContext *context);

  virtual void enter(const Info *info, const DynamicContext *context);
  virtual void exit(const Info *info, const DynamicContext *context);

  DebugCommand *findCommand(std::string &command) const;
  void checkBreak(bool entering);
  void readCommand();

  std::vector<DebugCommand*> commands_;
  DebugCommand *prevcmd_;

  bool queryStarted_;

  struct BreakPoint
  {
    BreakPoint(const std::string &f, unsigned int l, unsigned int c, bool t)
      : file(f), line(l), column(c), temporary(t), disabled(false) {}

    std::string file;
    unsigned int line, column;
    bool temporary;
    bool disabled;
  };

  std::vector<BreakPoint> breaks_;
  bool step_;
  unsigned int next_;

  std::vector<StackEntry> stack_;
  unsigned int currentFrame_;

  const XQQuery *query_;
  DynamicContext *context_;
  bool lazy_;
  bool focusOptimzations_;
};

class XQILLA_API DebugCommand
{
public:
  virtual ~DebugCommand() {};

  virtual const char *getCommandName() const { return name_; }
  virtual const char *getCommandNameCompat() const { return compatName_; }
  virtual const char *getBriefHelp() const { return briefHelp_; }
  virtual const char *getMoreHelp() const { return moreHelp_; }

  static bool matches(const std::string &command,
          const std::string &toMatch);
  virtual bool matches(const std::string &command) const;

  virtual void execute(InputParser::Args &args, InteractiveDebugger &env) = 0;

protected:
  DebugCommand(const char *name, const char *compatName,
               const char *briefHelp, const char *moreHelp)
    : name_(name), compatName_(compatName), briefHelp_(briefHelp), moreHelp_(moreHelp) {}

  const char *name_;
  const char *compatName_;
  const char *briefHelp_;
  const char *moreHelp_;
};

#endif
