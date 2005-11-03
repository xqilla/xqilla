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

#ifndef _TOTALORDERCOMPARISON_HPP
#define _TOTALORDERCOMPARISON_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/operators/ComparisonOperator.hpp>

/** OpPlus operator function*/
class XQILLA_API TotalOrderComparison : public ComparisonOperator
{
public:
	//greaterThan should be set to true if you want to param1 > param2 
  TotalOrderComparison(const VectorOfASTNodes &args, bool greatherThan, XPath2MemoryManager* memMgr);

  bool execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const;

private:
	bool _greaterThan;
};

#endif // _FUNCTIONTOTALORDER_HPP
