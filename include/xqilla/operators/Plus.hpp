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

/*
   OpPlus operator function
*/

#ifndef _PLUS_HPP
#define _PLUS_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/operators/ArithmeticOperator.hpp>

/** OpPlus operator function*/
class XQILLA_API Plus : public ArithmeticOperator
{
public:
  static const XMLCh name[];

  Plus(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  void calculateStaticType();
  Item::Ptr execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const;

  static Item::Ptr plus(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context, const LocationInfo *info);
};

#endif // _FUNCTIONOPPLUS_HPP

