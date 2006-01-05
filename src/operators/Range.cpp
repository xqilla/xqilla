/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2006
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

#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/operators/Range.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/Numeric.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <assert.h>

/*static*/ const XMLCh Range::name[]={ XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

Range::Range(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQOperator(name, args, memMgr)
{
}

ASTNode* Range::staticResolution(StaticContext *context)
{
  _src.getStaticType().flags = StaticType::NUMERIC_TYPE;
  return XQOperator::staticResolution(context);
}

Result Range::createResult(DynamicContext* context, int flags) const
{
  return new RangeResult(this, context);
}

Range::RangeResult::RangeResult(const Range *op, DynamicContext *context)
  : ResultImpl(context),
    _op(op),
    _last(0),
    _step(context->getItemFactory()->createInteger(1, context)),
    _end(0)
{  
}

Item::Ptr Range::RangeResult::next(DynamicContext *context)
{
  static SequenceType integerType(XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA, 
                                  XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_INTEGER,
                                  SequenceType::QUESTION_MARK);

  if(_end == NULLRCP) {
    // initialise
    _last = (const Numeric::Ptr )_op->getArgument(0)->collapseTree(context, ASTNode::UNORDERED|ASTNode::RETURN_TWO).
      convertFunctionArg(&integerType, _op->getArgument(0)->getStaticResolutionContext().getStaticType(), context).next(context);
    _end = (const Numeric::Ptr )_op->getArgument(1)->collapseTree(context, ASTNode::UNORDERED|ASTNode::RETURN_TWO).
      convertFunctionArg(&integerType, _op->getArgument(1)->getStaticResolutionContext().getStaticType(), context).next(context);
    if(_last.isNull() || _end.isNull() || _last->greaterThan(_end, context))
      _last = 0;
  }
  else if(_last != NULLRCP) {
    if(_last->equals((const AnyAtomicType::Ptr)_end, context)) {
      _last = 0;
    }
    else {
      _last = _last->add(_step, context);
    }
  }

  return (const Item::Ptr)_last;
}

std::string Range::RangeResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<range/>" << std::endl;

  return oss.str();
}
