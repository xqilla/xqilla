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

#ifndef CONTEXTTUPLE_HPP
#define CONTEXTTUPLE_HPP

#include <xqilla/ast/TupleNode.hpp>

class XQILLA_API ContextTuple : public TupleNode
{
public:
  ContextTuple() : TupleNode(CONTEXT_TUPLE, 0) {}

  virtual TupleNode *staticResolution(StaticContext *context);
  virtual TupleNode *staticTypingSetup(StaticContext *context);
  virtual TupleNode *staticTypingTeardown(StaticContext *context, StaticAnalysis &usedSrc);

  virtual TupleResult::Ptr createResult(DynamicContext* context) const;
};

#endif
