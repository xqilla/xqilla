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
 * $Id$
 */

#ifndef _ASTNODEIMPL_HPP
#define _ASTNODEIMPL_HPP

class DynamicContext;
class Numeric;

#include <xqilla/ast/ASTNode.hpp>
#include <xqilla/runtime/Result.hpp>
#include <xqilla/runtime/LazySequenceResult.hpp>
#include <xqilla/ast/StaticAnalysis.hpp>

/** class which is used as base for all the different data types */
class XQILLA_API ASTNodeImpl : public ASTNode
{
public:
  ASTNodeImpl(XPath2MemoryManager* memMgr);
  virtual ~ASTNodeImpl();

  ASTNode::whichType getType(void) const;
	
  /** Returns true if this ASTNode is an instance of XQSequence or XQLiteral */
  virtual bool isConstant() const;
  /** Returns true if this ASTNode has no predicates, and is an instance of
      XQSequence or XQLiteral. If the literal value of this ASTNode
      is a single DateOrTimeType, then !hasTimezone() on it must return true,
      otherwise this method will return false. */
  virtual bool isDateOrTimeAndHasNoTimezone(StaticContext* context) const;

  virtual bool isSingleNumericConstant(StaticContext *context) const;

  /// Default - returns an empty update list
  virtual PendingUpdateList createUpdateList(DynamicContext *context) const;

  /**
   * Can be overridden by derived classes. Default implementation returns a
   * SequenceResult made from the Sequence returned by createSequence.
   */
  virtual Result createResult(DynamicContext* context, int flags=0) const;

  /**
   * Collapse the compiled expression based on context. Default implementation
   * returns an empty sequence.
   */
  virtual Sequence createSequence(DynamicContext* context, int flags=0) const;

  /** Returns the result of this expression via the EventHandler provided.
      Default implementation uses result returned from createResult(). */
  virtual void generateEvents(EventHandler *events, DynamicContext *context,
                              bool preserveNS, bool preserveType) const;

  /** Performs constant folding on this ASTNode. */
  ASTNode *constantFold(StaticContext *context);

  virtual const StaticAnalysis &getStaticAnalysis() const;

protected:
  void setType(ASTNode::whichType t);
  XPath2MemoryManager* getMemoryManager(void) const;

  class CreateSequenceResult : public LazySequenceResult
  {
  public:
    CreateSequenceResult(const ASTNodeImpl *di, int flags, DynamicContext *context);

    void getResult(Sequence &toFill, DynamicContext *context) const;
    std::string asString(DynamicContext *context, int indent) const;

  private:
    int _flags;
    const ASTNodeImpl *_di;
  };

  StaticAnalysis _src;

private:
  whichType _type;
  XPath2MemoryManager* _memMgr;
};

#endif
