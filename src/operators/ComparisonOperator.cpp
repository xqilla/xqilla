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
#include <sstream>

#include <xqilla/operators/ComparisonOperator.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/exceptions/XPath2TypeCastException.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/items/AnyAtomicType.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/ast/XQAtomize.hpp>

ComparisonOperator::ComparisonOperator(const XMLCh* opName, const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQOperator(opName, args, memMgr)
{
}

ASTNode* ComparisonOperator::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  bool allConstant = true;
  for(VectorOfASTNodes::iterator i = _args.begin(); i != _args.end(); ++i) {
    *i = new (mm) XQAtomize(*i, mm);
    (*i)->setLocationInfo(this);
    *i = (*i)->staticResolution(context);

    _src.add((*i)->getStaticResolutionContext());

    if(!(*i)->isConstant())
      allConstant = false;
    else if((*i)->isDateOrTimeAndHasNoTimezone(context))
      _src.implicitTimezoneUsed(true);
  }

  _src.getStaticType().flags = StaticType::BOOLEAN_TYPE;

  if(allConstant) {
    return constantFold(context);
  }
  return this;
}

Result ComparisonOperator::createResult(DynamicContext* context, int flags) const
{
  return new ComparisonResult(this);
}

AnyAtomicType::Ptr ComparisonOperator::getArgument(unsigned int index, DynamicContext *context) const
{
  assert(getNumArgs() > index);

  // Value comparisons are intended for comparing single values. The result of a value comparison is
  // defined by applying the following rules, in order:

  // 1. Atomization is applied to each operand. If the result, called an atomized operand, does not contain
  //    exactly one atomic value, a type error is raised.
  Result arg_result(_args[index]->collapseTree(context));

  Item::Ptr first = arg_result->next(context);

  // 2. If the atomized operand is an empty sequence, the result of the value comparison is an empty sequence, 
  //    and the implementation need not evaluate the other operand or apply the operator. However, an 
  //    implementation may choose to evaluate the other operand in order to determine whether it raises an error.
  if(first == NULLRCP)
    return first;

  // 3. If the atomized operand is a sequence of length greater than one, a type error is raised [err:XPTY0004].
  Item::Ptr second = arg_result->next(context);
  if(second != NULLRCP) {
    XQThrow(XPath2TypeCastException,X("ComparisonOperator::getArgument"), X("A parameter of the operator is not a single atomic value [err:XPTY0004]"));
  }

  // 4. Any atomized operand that has the dynamic type xdt:untypedAtomic is cast to the type xs:string.
  if(((AnyAtomicType*)(const Item*)first)->getPrimitiveTypeIndex() == AnyAtomicType::UNTYPED_ATOMIC) {
    first = (const Item::Ptr)((const AnyAtomicType*)(const Item*)first)->castAs(XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                                             XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING, context);
  }

  return (const AnyAtomicType::Ptr )first;
}

ComparisonOperator::ComparisonResult::ComparisonResult(const ComparisonOperator *op)
  : SingleResult(op),
    _op(op)
{
}

Item::Ptr ComparisonOperator::ComparisonResult::getSingleResult(DynamicContext *context) const
{
  try {
    AnyAtomicType::Ptr left=_op->getArgument(0, context);
    if(left==NULLRCP) return left;
    AnyAtomicType::Ptr right=_op->getArgument(1, context);
    if(right==NULLRCP) return right;
    bool result = _op->execute(left, right, context);
    return (const Item::Ptr)context->getItemFactory()->createBoolean(result, context);
  }
  catch(XQException &e) {
      if(e.getXQueryLine() == 0)
        e.setXQueryPosition(this);
      throw;
  }
}

std::string ComparisonOperator::ComparisonResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<comparisonop/>" << std::endl;

  return oss.str();
}
