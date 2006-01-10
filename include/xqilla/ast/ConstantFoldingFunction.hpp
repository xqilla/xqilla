/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#ifndef _CONSTANTFOLDINGFUNCTION_HPP
#define _CONSTANTFOLDINGFUNCTION_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/XQFunction.hpp>
#include <xqilla/runtime/Sequence.hpp>

class XQILLA_API ConstantFoldingFunction : public XQFunction
{

public:
  ConstantFoldingFunction(const XMLCh* name, unsigned int argsFrom, unsigned int argsTo, const char* paramDecl, const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  virtual ~ConstantFoldingFunction();

  /**
   * Called during static analysis to determine if statically correct.
   * Performs constant folding if the arguments to the function are
   * all constant.
   */
  virtual ASTNode* staticResolution(StaticContext *context);
};

#endif
