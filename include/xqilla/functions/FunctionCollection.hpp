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

#ifndef _FUNCTIONCOLLECTION_HPP
#define _FUNCTIONCOLLECTION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/XQFunction.hpp>

class QueryPathNode;

class XQILLA_API FunctionCollection : public XQFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionCollection(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  /** resolve the uri and return the DOM tree **/
  Sequence createSequence(DynamicContext* context, int flags=0) const;

  QueryPathNode *getQueryPathTree() const { return queryPathTree_; }
  void setQueryPathTree(QueryPathNode *q) { queryPathTree_ = q; }

private:
  QueryPathNode *queryPathTree_;
};

#endif
