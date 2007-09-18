/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Oracle. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#ifndef _FUNCTIONGETNAMESPACEURIFORPREFIX_HPP
#define _FUNCTIONGETNAMESPACEURIFORPREFIX_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>
#include <xqilla/items/Node.hpp>

class XQILLA_API FunctionNamespaceURIForPrefix : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionNamespaceURIForPrefix(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  /** Given a uri and a name, it returns an expanded QName **/
  Sequence createSequence(DynamicContext* context, int flags=0) const;

  static ATAnyURIOrDerived::Ptr uriForPrefix(const XMLCh *prefix, const Node::Ptr &node,
                                             DynamicContext *context, const LocationInfo *location);

};

#endif

