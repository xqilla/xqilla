/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
 *     Oracle. All rights reserved.
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

#include <xqilla/operators/And.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/ast/StaticAnalysis.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/context/ContextHelpers.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>

/*static*/ const XMLCh And::name[]={ XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_d, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

And::And(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQOperator(name, args, memMgr)
{
}

Result And::createResult(DynamicContext* context, int flags) const
{
  return new AndResult(this);
}

ASTNode* And::staticResolution(StaticContext *context)
{
  AutoNodeSetOrderingReset orderReset(context);
  for(VectorOfASTNodes::iterator i = _args.begin(); i != _args.end(); ++i) {
    *i = (*i)->staticResolution(context);
  }
  return this;
}

ASTNode* And::staticTyping(StaticContext *context)
{
  _src.clear();

  VectorOfASTNodes newArgs(XQillaAllocator<ASTNode*>(context->getMemoryManager()));

  VectorOfASTNodes::iterator i;
  for(i = _args.begin(); i != _args.end(); ++i) {
    *i = (*i)->staticTyping(context);

    if((*i)->getStaticAnalysis().isUpdating()) {
      XQThrow(StaticErrorException,X("And::staticTyping"),
              X("It is a static error for an operand of an operator "
                "to be an updating expression [err:XUST0001]"));
    }
  }

  for(VectorOfASTNodes::iterator i = _args.begin(); i != _args.end(); ++i) {
    const StaticAnalysis &valueSrc = (*i)->getStaticAnalysis();

    if(valueSrc.isUsed()) {
      _src.add(valueSrc);
      newArgs.push_back(*i);
    }
    else {
      AutoDelete<DynamicContext> dContext(context->createDynamicContext());
      dContext->setMemoryManager(context->getMemoryManager());
      if(!(*i)->createResult(dContext)->getEffectiveBooleanValue(dContext, *i)) {
        // It's constantly false, so this expression is false
        ASTNode* newBlock = new (getMemoryManager())
          XQSequence(dContext->getItemFactory()->createBoolean(false, dContext),
                           dContext, getMemoryManager());
	newBlock->setLocationInfo(this);
        return newBlock->staticResolution(context);
      }
    }
  }

  _src.getStaticType().flags = StaticType::BOOLEAN_TYPE;

  _args = newArgs;
  return this;
}

And::AndResult::AndResult(const And *op)
  : SingleResult(op),
    _op(op)
{
}

Item::Ptr And::AndResult::getSingleResult(DynamicContext *context) const
{
  unsigned int numArgs=_op->getNumArgs();
  for(unsigned int i=0;i<numArgs;i++) {
    if(!_op->getArgument(i)->createResult(context)->getEffectiveBooleanValue(context, _op->getArgument(i))) {
      return (const Item::Ptr)context->getItemFactory()->createBoolean(false, context);
    }
  }

	return (const Item::Ptr)context->getItemFactory()->createBoolean(true, context);
}

std::string And::AndResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<and/>" << std::endl;

  return oss.str();
}
