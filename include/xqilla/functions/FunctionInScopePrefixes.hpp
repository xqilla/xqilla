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
  in-scope-prefixes function
*/

#ifndef _FUNCTIONGETINSCOPEPREFIXES_HPP
#define _FUNCTIONGETINSCOPEPREFIXES_HPP

#include <xqilla/framework/Pathan.hpp>
#include <xqilla/ast/ConstantFoldingFunction.hpp>

class PATHAN_EXPORT FunctionInScopePrefixes : public ConstantFoldingFunction
{
public:
    static const XMLCh name[];
    static const unsigned int minArgs;
    static const unsigned int maxArgs;

    FunctionInScopePrefixes(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
    /** Returns the getinscopenamespaces to the right of parm2 until optional parm3 from string parm1 **/
    Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};


#endif // _FUNCTIONGETINSCOPEPREFIXES_HPP





