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

#ifndef _FLOOKUP_HPP
#define _FLOOKUP_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <vector>
#include <xercesc/util/XercesDefs.hpp>
#include <xqilla/ast/ASTNode.hpp>

class FuncFactory;
class XPath2MemoryManager;

class XQILLA_API FunctionLookup
{
public:
  ///adds a function to the custom function table
  virtual void insertFunction(FuncFactory *func) = 0;
  ///returns the approriate Function object
  virtual ASTNode* lookUpFunction(const XMLCh* URI, const XMLCh* fname, const VectorOfASTNodes &args, XPath2MemoryManager* memMgr) const = 0;

  /// returns all the defined functions
  virtual std::vector< std::pair<const XMLCh*,const XMLCh*> > getFunctions() const = 0;
  virtual std::vector< FuncFactory* > getFunctionFactories() const = 0;
};

#endif 
