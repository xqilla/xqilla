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

//////////////////////////////////////////////////////////////////////
// XQQuantified.cpp: implementation of the XQQuantified class.
//////////////////////////////////////////////////////////////////////

#include <sstream>

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/XQQuantified.hpp>
#include <xqilla/context/impl/XQDynamicContextImpl.hpp>
#include <xqilla/context/VariableStore.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/context/ItemFactory.hpp>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

XQQuantified::XQQuantified(XQQuantified::QuantifierType qType, VectorOfVariableBinding* bindings, ASTNode* returnExpr, XPath2MemoryManager* expr)
  : XQFLWOR(bindings, NULL, NULL, returnExpr, expr)
{
	_qType=qType;
    setType(ASTNode::FLWOR_QUANTIFIED);
}

ASTNode* XQQuantified::staticResolution(StaticContext* context) {
  XQFLWOR::staticResolutionImpl(context);

  _src.getStaticType().flags = StaticType::OTHER_TYPE;

  if(_src.isUsed()) {
    if(_return->isConstant()) {
      AutoDelete<DynamicContext> dContext(context->createDynamicContext());
      dContext->setMemoryManager(context->getMemoryManager());
      bool value = _return->collapseTree(dContext).getEffectiveBooleanValue(dContext);
      ASTNode *newBlock = new (getMemoryManager())
	      XQSequence(dContext->getItemFactory()->createBoolean(value, dContext),
			       dContext, getMemoryManager());
      newBlock->addPredicates(getPredicates());
      return newBlock->staticResolution(context);
    }
    else {
      return resolvePredicates(context);
    }
  }
  else {
    return constantFold(context);
  }
}

Result XQQuantified::createResultImpl(VectorOfVariableBinding::const_iterator it, VectorOfVariableBinding::const_iterator end, DynamicContext* context, int flags) const
{
  return new QuantifiedResult(it, end, this, context);
}

XQQuantified::QuantifierType XQQuantified::getQuantifierType() const
{
  return _qType;
}

XQQuantified::QuantifiedResult::QuantifiedResult(VectorOfVariableBinding::const_iterator it, VectorOfVariableBinding::const_iterator end,
                                                 const XQQuantified *quantified, DynamicContext *context)
  : SingleResult(context),
    _quantified(quantified)
{
  for(; it != end; ++it) {
    _ebs.push_back(ProductFactor(*it, context));
  }
}

Item::Ptr XQQuantified::QuantifiedResult::getSingleResult(DynamicContext *context) const
{
  VariableStore* varStore = context->getVariableStore();
  bool defaultResult = (_quantified->getQuantifierType() == some) ? false : true;

  ExecutionBindings &ebs = const_cast<ExecutionBindings&>(_ebs); // _ebs is mutable

  // Initialise and run the execution bindings
  varStore->addLogicalBlockScope();
  if(_quantified->nextState(ebs, context, true)) {
    do {
      bool result = _quantified->getReturnExpr()->collapseTree(context, ASTNode::UNORDERED|ASTNode::RETURN_TWO).getEffectiveBooleanValue(context);
      if(defaultResult != result) {
        defaultResult = result;
        break;
      }
    } while(_quantified->nextState(ebs, context, false));
  }
  varStore->removeScope();

  return (const Item::Ptr)context->getItemFactory()->createBoolean(defaultResult, context);
}

std::string XQQuantified::QuantifiedResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<quantified_flwor/>" << std::endl;

  return oss.str();
}
