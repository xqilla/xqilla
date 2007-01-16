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

#ifndef _FLOOKUP_HPP
#define _FLOOKUP_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <vector>
#include <xercesc/util/XercesDefs.hpp>
#include <xercesc/util/RefHash2KeysTableOf.hpp>
#include <xqilla/ast/ASTNode.hpp>

class FuncFactory;
class XPath2MemoryManager;
class ExternalFunction;

class XQILLA_API FunctionLookup
{
public:
  FunctionLookup(XPath2MemoryManager* memMgr);
  ~FunctionLookup();

  ///adds a function to the custom function table
  void insertFunction(FuncFactory *func);
  /// replaces the implementation of an existing function
  void replaceFunction(FuncFactory *func);
  ///returns the approriate Function object
  ASTNode* lookUpFunction(const XMLCh* URI, const XMLCh* fname,
			  const VectorOfASTNodes &args,
			  XPath2MemoryManager* memMgr) const;

  ///adds a function to the external function table
  void insertExternalFunction(const ExternalFunction *func);
  ///returns the approriate ExternalFunction object
  const ExternalFunction *lookUpExternalFunction(const XMLCh* URI,
						 const XMLCh* fname,
						 unsigned int numArgs) const;

private:
  XERCES_CPP_NAMESPACE_QUALIFIER RefHash2KeysTableOf< FuncFactory > _funcTable;
  XERCES_CPP_NAMESPACE_QUALIFIER RefHash2KeysTableOf< const ExternalFunction > _exFuncTable;

public:
  // static (global table interfaces)
  static void insertGlobalFunction(FuncFactory *func);
  static void insertGlobalExternalFunction(const ExternalFunction *func);
  // next two look in global table first, then the contextTable
  static ASTNode* lookUpGlobalFunction(const XMLCh* URI, const XMLCh* fname,
				       const VectorOfASTNodes &args,
				       XPath2MemoryManager* memMgr,
				       const FunctionLookup *contextTable);
  static const ExternalFunction *lookUpGlobalExternalFunction(
	  const XMLCh* URI, const XMLCh* fname, unsigned int numArgs,
	  const FunctionLookup *contextTable);
  static void initialize(bool update);
  static void terminate();
private:
  static FunctionLookup *g_globalFunctionTable;
  static XPath2MemoryManager *g_memMgr;
};

#endif 
