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
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <sstream>

#include <xqilla/operators/ArithmeticOperator.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/XPath2TypeCastException.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/items/AnyAtomicType.hpp>

ArithmeticOperator::ArithmeticOperator(const XMLCh* opName, const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQOperator(opName, args, memMgr)
{
}

ASTNode* ArithmeticOperator::staticResolution(StaticContext *context)
{
  _src.getStaticType().flags = 0;

  bool allConstant = true;
  for(VectorOfASTNodes::iterator i = _args.begin(); i != _args.end(); ++i) {
    *i = (*i)->staticResolution(context);

    if((*i)->getStaticResolutionContext().getStaticType().flags & StaticResolutionContext::NODE_TYPE) {
      _src.getStaticType().flags |= StaticResolutionContext::NUMERIC_TYPE | StaticResolutionContext::OTHER_TYPE;
    }
    if((*i)->getStaticResolutionContext().getStaticType().flags & StaticResolutionContext::NUMERIC_TYPE) {
      _src.getStaticType().flags |= StaticResolutionContext::NUMERIC_TYPE;
    }
    if((*i)->getStaticResolutionContext().getStaticType().flags & StaticResolutionContext::OTHER_TYPE) {
      _src.getStaticType().flags |= StaticResolutionContext::OTHER_TYPE;
    }

    _src.add((*i)->getStaticResolutionContext());
    if(!(*i)->isConstantAndHasTimezone(context)) {
      allConstant = false;
      if((*i)->isConstant()) {
        _src.implicitTimezoneUsed(true);
      }
    }
  }

  if(allConstant) {
    return constantFold(context);
  }
  else {
    return resolvePredicates(context);
  }
}

Result ArithmeticOperator::createResult(DynamicContext* context, int flags) const
{
  return new ArithmeticResult(this, context);
}

AnyAtomicType::Ptr ArithmeticOperator::getArgument(unsigned int index, DynamicContext *context) const
{
  if(getNumArgs() <= index) {
    return 0;
  }

  // An arithmetic expression is evaluated by applying the following rules, in order,
  // until an error is raised or a value is computed:

  // 1. Atomization is applied to each operand.
  // 2. If either operand is an empty sequence, the result of the operation is an empty sequence.
  // (to be enforced by the caller)
  // 3. If either operand is now a sequence of length greater than one, then:
  //      * If XPath 1.0 compatibility mode is true, any items after the first item in the sequence are discarded.
  //        Otherwise, a type error is raised.
  Result arg_result(_args[index]->collapseTree(context));

  if(_args[index]->getStaticResolutionContext().getStaticType().flags & StaticResolutionContext::NODE_TYPE) {
	  arg_result = arg_result.atomize(context);
  }

  Item::Ptr first = arg_result.next(context);

  if(!context->getXPath1CompatibilityMode()) {
    Item::Ptr second = arg_result.next(context);

    if(first != NULLRCP && second != NULLRCP) {
      XQThrow(XPath2TypeCastException,X("ArithmeticOperator::getArgument"),
               X("A parameter of the operator is not an empty sequence or a single atomic value [err:XPTY0004]"));
    }
  }
    
  // 4. If either operand is now of type xdt:untypedAtomic, it is cast to the default type for the given operator.
  //    If the cast fails, a type error is raised.
  //
  if(first != NULLRCP) {
    if(first->isAtomicValue()) {
      if(((const AnyAtomicType*)(const Item*)first)->getPrimitiveTypeIndex() == AnyAtomicType::UNTYPED_ATOMIC) {
        first = (const Item::Ptr)((const AnyAtomicType*)(const Item*)first)->castAs(XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                                                                    XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DOUBLE, 
                                                                                    context);
      }
    }
    else {
      XQThrow(XPath2TypeCastException,X("ArithmeticOperator::getArgument"), X("A parameter of the operator is not an atomic value"));
    }
  }

  return (const AnyAtomicType::Ptr )first;
}

ArithmeticOperator::ArithmeticResult::ArithmeticResult(const ArithmeticOperator *op, DynamicContext *context)
  : SingleResult(context),
    _op(op)
{
}

Item::Ptr ArithmeticOperator::ArithmeticResult::getSingleResult(DynamicContext *context) const
{
  return _op->execute(_op->getArgument(0, context), _op->getArgument(1, context), context);
}

std::string ArithmeticOperator::ArithmeticResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<arithmeticop/>" << std::endl;

  return oss.str();
}
