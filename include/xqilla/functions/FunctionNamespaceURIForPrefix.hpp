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
  namespace-uri-for-prefix function
*/

#ifndef _FUNCTIONGETNAMESPACEURIFORPREFIX_HPP
#define _FUNCTIONGETNAMESPACEURIFORPREFIX_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>

class XQILLA_API FunctionNamespaceURIForPrefix : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionNamespaceURIForPrefix(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  /** Given a uri and a name, it returns an expanded QName **/
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

};

#endif // _FUNCTIONGETNAMESPACEURIFORPREFIX_HPP

