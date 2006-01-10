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

/**
 * xs:TYP(item $srcval) => TYP 
**/

#ifndef _FUNCTIONCONSTRUCTOR_HPP
#define _FUNCTIONCONSTRUCTOR_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>
#include <xqilla/functions/FuncFactory.hpp>

#include <xercesc/util/XercesDefs.hpp>


class XQILLA_API FunctionConstructor : public ConstantFoldingFunction
{
public:
  ///Constructor. Sets arg def to NOT_OPTIONAL.
  FunctionConstructor(const XMLCh* nsURI, const XMLCh* typeName,
                      AnyAtomicType::AtomicObjectType primitiveType,
                      const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  virtual Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

  static const XMLCh XMLChConstructorURI[];
  static const XMLCh XMLChXPath2DatatypesURI[];
};

#endif // _FUNCTIONCONSTRUCTOR_HPP
