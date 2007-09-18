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

#ifndef XQILLAFUNCTION_HPP
#define XQILLAFUNCTION_HPP

#include <xqilla/ast/ConstantFoldingFunction.hpp>

class XQillaFunction : public ConstantFoldingFunction
{
public:
  static const XMLCh XQillaPrefix[];
  static const XMLCh XMLChFunctionURI[];

protected:
  XQillaFunction(const XMLCh *name, unsigned int argsFrom, unsigned int argsTo,
    const char *paramDecl, const VectorOfASTNodes &args, XPath2MemoryManager *memMgr);
};

#endif
