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

#include "../config/xqilla_config.h"
#include <assert.h>
#include <xqilla/operators/UnaryMinus.hpp>
#include <xqilla/operators/Multiply.hpp>
#include <xqilla/ast/XQLiteral.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>

/*static*/ const XMLCh UnaryMinus::name[]={ XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

UnaryMinus::UnaryMinus(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ArithmeticOperator(name, args, memMgr)
{
  assert(_args.size() == 1);
}

void UnaryMinus::calculateStaticType()
{
  const StaticType &arg0 = _args[0]->getStaticResolutionContext().getStaticType();
  if(arg0.containsType(StaticType::NUMERIC_TYPE)) {
    _src.getStaticType().flags = arg0.flags & StaticType::NUMERIC_TYPE;
  }
}

Item::Ptr UnaryMinus::execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const
{
  assert(atom2 == NULLRCP);

  if(atom1 == NULLRCP) return 0;

  // only works on Numeric types
  if(atom1->isNumericValue()) {
    return (const Item::Ptr)((Numeric*)(const AnyAtomicType*)atom1)->invert(context);
  } else {
    XQThrow(XPath2ErrorException,X("UnaryMinus::collapseTreeInternal"), X("An attempt to apply unary minus a non numeric type has occurred [err:XPTY0004]"));
  }
}
