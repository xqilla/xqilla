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
