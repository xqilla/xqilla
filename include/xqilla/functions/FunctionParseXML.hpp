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

class XQILLA_API FunctionParseXML : public XQillaFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionParseXML(const VectorOfASTNodes &args, XPath2MemoryManager *memMgr);
  
  virtual ASTNode *staticTyping(StaticContext *context);

  Sequence createSequence(DynamicContext* context, int flags=0) const;
};

#endif
