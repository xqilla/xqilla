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

#ifndef _FUNCTIONPUT_HPP
#define _FUNCTIONPUT_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/XQFunction.hpp>

class XQILLA_API FunctionPut : public XQFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionPut(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  virtual ASTNode *staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);
  virtual PendingUpdateList createUpdateList(DynamicContext *context) const;

private:
  const XMLCh *baseURI_;
};

#endif
