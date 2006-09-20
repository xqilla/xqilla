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

#ifndef _NUMERICFUNCTION_HPP
#define _NUMERICFUNCTION_HPP

#include <xqilla/ast/ConstantFoldingFunction.hpp>

/** Virtual interface class for functions */
class XQILLA_API NumericFunction : public ConstantFoldingFunction
{
public:

  /// constructor, checks for the correct number of arguments.
  NumericFunction(const XMLCh* name, unsigned int argsFrom, unsigned int argsTo, const char* paramDecl, const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);

  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

protected:
  Numeric::Ptr getNumericParam(unsigned int number, DynamicContext *context, int flags=0) const;
};
#endif // _NUMERICFUNCTION_HPP
