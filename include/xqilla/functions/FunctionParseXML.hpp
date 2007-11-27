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

#ifndef _FUNCTIONPARSEXML_HPP
#define _FUNCTIONPARSEXML_HPP

#include "XQillaFunction.hpp"

class QueryPathNode;

class XQILLA_API FunctionParseXML : public XQillaFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionParseXML(const VectorOfASTNodes &args, XPath2MemoryManager *memMgr);
  
  virtual ASTNode *staticTyping(StaticContext *context);

  Sequence createSequence(DynamicContext* context, int flags=0) const;

  QueryPathNode *getQueryPathTree() const { return queryPathTree_; }
  void setQueryPathTree(QueryPathNode *q) { queryPathTree_ = q; }

private:
  QueryPathNode *queryPathTree_;
};

#endif
