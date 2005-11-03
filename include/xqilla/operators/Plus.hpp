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
  
  Item::Ptr execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const;

  static Item::Ptr plus(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context);
};

#endif // _FUNCTIONOPPLUS_HPP

