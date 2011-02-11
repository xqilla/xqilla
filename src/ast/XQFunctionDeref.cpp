/*
 * Copyright (c) 2001, 2008,
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004, 2010,
 *     Oracle and/or its affiliates. All rights reserved.
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
 */

#include <xqilla/ast/XQFunctionDeref.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/FunctionRef.hpp>
#include <xqilla/exceptions/XPath2TypeMatchException.hpp>
#include <xqilla/runtime/ResultImpl.hpp>
#include <xqilla/runtime/ClosureResult.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/functions/FunctionSignature.hpp>
#include <xqilla/framework/BasicMemoryManager.hpp>

XERCES_CPP_NAMESPACE_USE;
using namespace std;

XQFunctionDeref::XQFunctionDeref(ASTNode *expr, VectorOfASTNodes *args, XPath2MemoryManager *mm)
  : ASTNodeImpl(FUNCTION_DEREF, mm),
    expr_(expr),
    args_(args)
{
}

ASTNode *XQFunctionDeref::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  ItemType *itemType = new (mm) ItemType(ItemType::TEST_FUNCTION);
  itemType->setLocationInfo(this);
  SequenceType *seqType = new (mm) SequenceType(itemType, SequenceType::EXACTLY_ONE);
  seqType->setLocationInfo(this);

  expr_ = new (mm) XQTreatAs(expr_, seqType, mm);
  expr_->setLocationInfo(this);
  expr_ = expr_->staticResolution(context);

  if(args_) {
    for(VectorOfASTNodes::iterator i = args_->begin(); i != args_->end(); ++i) {
      *i = (*i)->staticResolution(context);
    }
  }

  return this;
}

ASTNode *XQFunctionDeref::staticTypingImpl(StaticContext *context)
{
  _src.clear();

  _src.add(expr_->getStaticAnalysis());

  size_t numArgs = 0;
  if(args_) {
    numArgs = args_->size();
    for(VectorOfASTNodes::iterator i = args_->begin(); i != args_->end(); ++i) {
      _src.add((*i)->getStaticAnalysis());
    }
  }

  _src.getStaticType() = StaticType::EMPTY;

  const StaticType::ItemTypes &types = expr_->getStaticAnalysis().getStaticType().getTypes();
  StaticType::ItemTypes::const_iterator i = types.begin();
  for(; i != types.end(); ++i) {
    if((*i)->getItemTestType() == ItemType::TEST_FUNCTION) {
      if((*i)->getFunctionSignature()) {
        if((*i)->getFunctionSignature()->numArgs() == numArgs) {
          StaticType tmp((*i)->getFunctionSignature()->returnType, BasicMemoryManager::get());
          _src.getStaticType().typeUnion(tmp);
        }
      } else {
        _src.getStaticType() = StaticType::ITEM_STAR;
        break;
      }
    } else if(ItemType::FUNCTION.isSubtypeOf(*i)) {
      _src.getStaticType() = StaticType::ITEM_STAR;
      break;
    }
  }

  return this;
}

class FunctionDerefResult : public ResultImpl
{
public:
  FunctionDerefResult(const XQFunctionDeref *ast)
    : ResultImpl(ast),
      ast_(ast)
  {
  }

  virtual Item::Ptr nextOrTail(Result &tail, DynamicContext *context)
  {
    FunctionRef::Ptr func = (FunctionRef*)ast_->getExpression()->createResult(context)->next(context).get();
    if(func.isNull()) return 0;

    VectorOfResults args;
    if(ast_->getArguments()) {
      for(VectorOfASTNodes::iterator i = ast_->getArguments()->begin(); i != ast_->getArguments()->end(); ++i) {
        args.push_back(ClosureResult::create(*i, context));
      }
    }

    tail = func->execute(args, context, this);
    return 0;
  }

private:
  const XQFunctionDeref *ast_;
};

Result XQFunctionDeref::createResult(DynamicContext *context, int flags) const
{
  return new FunctionDerefResult(this);
}
