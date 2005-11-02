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
   Mod operator function
*/

#ifndef _MOD_HPP
#define _MOD_HPP

#include <xqilla/framework/Pathan.hpp>
#include <xqilla/operators/ArithmeticOperator.hpp>

/** OpMod operator function*/
class PATHAN_EXPORT Mod : public ArithmeticOperator
{
public:
  static const XMLCh name[];

  Mod(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  
  Item::Ptr execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const;
};

#endif // _FUNCTIONOPMOD_HPP

