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

/*
   General Comparison operator function
*/

#ifndef _GENERALCOMP_HPP
#define _GENERALCOMP_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/XQOperator.hpp>
#include <xqilla/runtime/SingleResult.hpp>

/** GeneralComp operator function*/
class XQILLA_API GeneralComp : public XQOperator
{
public:
  typedef enum {
    EQUAL,
    NOT_EQUAL,
    LESS_THAN,
    LESS_THAN_EQUAL,
    GREATER_THAN,
    GREATER_THAN_EQUAL
  } ComparisonOperation;

  static const XMLCh name[];

  GeneralComp(ComparisonOperation operation, const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);

  Result createResult(DynamicContext* context, int flags=0) const;

  ComparisonOperation getOperation() const;

  static bool compare(GeneralComp::ComparisonOperation operation,
                      AnyAtomicType::Ptr first, AnyAtomicType::Ptr second,
                      Collation* collation, DynamicContext *context);

protected:
  class GeneralCompResult : public SingleResult
  {
  public:
    GeneralCompResult(const GeneralComp *op, DynamicContext *context);

    Item::Ptr getSingleResult(DynamicContext *context) const;
    std::string asString(DynamicContext *context, int indent) const;    
  private:
    const GeneralComp *_op;
  };

  ComparisonOperation _operation;
};

#endif // _GENERALCOMP_HPP



