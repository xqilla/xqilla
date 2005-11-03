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
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

#ifndef _ASTNODE_HPP
#define _ASTNODE_HPP


#include <xqilla/framework/Pathan.hpp>
#include <vector>
#include <xqilla/framework/XPath2MemoryManager.hpp>

class DynamicContext;
class StaticContext;
class Result;
class ASTNode;
class StaticResolutionContext;
class SequenceType;

typedef std::vector<ASTNode*,PathanAllocator<ASTNode*> > VectorOfASTNodes;

class PATHAN_EXPORT ASTNode
{
public:
  ///enum for data types
  typedef enum {
    LITERAL,
    SEQUENCE,
    FUNCTION,
    NAVIGATION,
    VARIABLE,
    STEP,
    IF,
    INSTANCE_OF,
    CASTABLE_AS,
    CAST_AS,
    TREAT_AS,
    OPERATOR,
    CONTEXT_ITEM,
    PARENTHESIZED,
    DEBUG_HOOK,
    DOM_CONSTRUCTOR,
    FLWOR,
    FLWOR_QUANTIFIED,
    TYPESWITCH,
    VALIDATE,
    VARIABLE_DEFINITION,
    FUNCTION_CALL,
    USER_FUNCTION,
    ORDERING_CHANGE,
    UNUSED_VALUE = 140 // force compiler to use more than 4 bits for this enum
  } whichType;

  class PredInfo {
  public:
    PredInfo() : pred(0) {}
    PredInfo(ASTNode *s) : pred(s) {}
    ASTNode *pred;
  };
  typedef std::vector<PredInfo,PathanAllocator<PredInfo> > Predicates;

  enum executionFlags {
    UNORDERED =0x01,
    RETURN_ONE=0x02,
    RETURN_TWO=0x04
  };

  virtual Result collapseTree(DynamicContext* context, int flags=0) const = 0;

  /** Returns true if this ASTNode has no predicates, and is an instance of
      XQSequence or XQLiteral */
  virtual bool isConstant() const = 0;
  /** Returns true if this ASTNode has no predicates, and is an instance of
      XQSequence or XQLiteral. If the literal value of this ASTNode
      is a single DateOrTimeType, then hasTimezone() on it must return true,
      otherwise this method will return false. */
  virtual bool isConstantAndHasTimezone(StaticContext* context) const = 0;
  virtual bool isSingleNumericConstant(StaticContext *context) const = 0;

  virtual void addPredicates(const VectorOfASTNodes &steps) = 0;
  virtual void addPredicates(const Predicates &steps) = 0;

  /// Returns the type of the ASTNodeImpl pointed to.
  virtual whichType getType(void) const = 0;

  virtual ASTNode* staticResolution(StaticContext *context) = 0;
  /// Returns the StaticResolutionContext for this ASTNode
  virtual const StaticResolutionContext &getStaticResolutionContext() const = 0;
};

#endif

