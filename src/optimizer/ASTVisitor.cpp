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

#include <xqilla/optimizer/ASTVisitor.hpp>

using namespace std;

void ASTVisitor::optimize(XQQuery *query)
{
  ImportedModules &modules = const_cast<ImportedModules&>(query->getImportedModules());
  for(ImportedModules::iterator it2 = modules.begin(); it2 != modules.end(); ++it2) {
    optimize(*it2);
  }

  vector<XQGlobalVariable*> newVars;
  GlobalVariables &vars = const_cast<GlobalVariables&>(query->getVariables());
  for(GlobalVariables::iterator it = vars.begin(); it != vars.end(); ++it) {
    XQGlobalVariable *newGV = optimizeGlobalVar(*it);
    if(newGV != 0) {
      newVars.push_back(newGV);
    }
  }
  vars.clear();
  for(vector<XQGlobalVariable*>::iterator i = newVars.begin();
      i != newVars.end(); ++i) {
    vars.push_back(*i);
  }

  UserFunctions &funcs = const_cast<UserFunctions&>(query->getFunctions());
  for(UserFunctions::iterator i2 = funcs.begin(); i2 != funcs.end(); ++i2) {
    *i2 = optimizeFunctionDef(*i2);
  }

  if(query->getQueryBody() != 0) {
    query->setQueryBody(optimize(query->getQueryBody()));
  }
}

XQGlobalVariable *ASTVisitor::optimizeGlobalVar(XQGlobalVariable *item)
{
  if(item->getVariableExpr()) {
    item->setVariableExpr(optimize(const_cast<ASTNode *>(item->getVariableExpr())));
  }
  return item;
}

XQUserFunction *ASTVisitor::optimizeFunctionDef(XQUserFunction *item)
{
  if(item->getFunctionBody()) {
    item->setFunctionBody(optimize(const_cast<ASTNode*>(item->getFunctionBody())));
  }
  return item;
}

ASTNode *ASTVisitor::optimize(ASTNode *item)
{
  ASTNode *result = item;
  switch(item->getType()) {
  case ASTNode::LITERAL: {
    result = optimizeLiteral((XQLiteral *)item);
    break;
  }
  case ASTNode::SEQUENCE: {
    result = optimizeSequence((XQSequence *)item);
    break;
  }
  case ASTNode::FUNCTION: {
    result = optimizeFunction((XQFunction *)item);
    break;
  }
  case ASTNode::NAVIGATION: {
    result = optimizeNav((XQNav *)item);
    break;
  }
  case ASTNode::VARIABLE: {
    result = optimizeVariable((XQVariable *)item);
    break;
  }
  case ASTNode::STEP: {
    result = optimizeStep((XQStep *)item);
    break;
  }
  case ASTNode::IF: {
    result = optimizeIf((XQIf *)item);
    break;
  }
  case ASTNode::INSTANCE_OF: {
    result = optimizeInstanceOf((XQInstanceOf *)item);
    break;
  }
  case ASTNode::CASTABLE_AS: {
    result = optimizeCastableAs((XQCastableAs *)item);
    break;
  }
  case ASTNode::CAST_AS: {
    result = optimizeCastAs((XQCastAs *)item);
    break;
  }
  case ASTNode::TREAT_AS: {
    result = optimizeTreatAs((XQTreatAs *)item);
    break;
  }
  case ASTNode::PARENTHESIZED: {
    result = optimizeParenthesizedExpr((XQParenthesizedExpr *)item);
    break;
  }
  case ASTNode::OPERATOR: {
    result = optimizeOperator((XQOperator *)item);
    break;
  }
  case ASTNode::CONTEXT_ITEM: {
    result = optimizeContextItem((XQContextItem *)item);
    break;
  }
  case ASTNode::RETURN: {
    result = optimizeReturn((XQReturn *)item);
    break;
  }
  case ASTNode::QUANTIFIED: {
    result = optimizeQuantified((XQQuantified *)item);
    break;
  }
  case ASTNode::TYPESWITCH: {
    result = optimizeTypeswitch((XQTypeswitch *)item);
    break;
  }
  case ASTNode::VALIDATE: {
    result = optimizeValidate((XQValidate *)item);
    break;
  }
  case ASTNode::FUNCTION_CALL: {
    result = optimizeFunctionCall((XQFunctionCall *)item);
    break;
  }
  case ASTNode::DOM_CONSTRUCTOR: {
    result = optimizeDOMConstructor((XQDOMConstructor *)item);
    break;
  }
  case ASTNode::SIMPLE_CONTENT: {
    result = optimizeSimpleContent((XQSimpleContent *)item);
    break;
  }
  case ASTNode::ORDERING_CHANGE: {
    result = optimizeOrderingChange((XQOrderingChange *)item);
    break;
  }
  case ASTNode::ATOMIZE: {
    result = optimizeAtomize((XQAtomize *)item);
    break;
  }
  case ASTNode::XPATH1_CONVERT: {
    result = optimizeXPath1CompatConvertFunctionArg((XPath1CompatConvertFunctionArg *)item);
    break;
  }
  case ASTNode::PROMOTE_UNTYPED: {
    result = optimizePromoteUntyped((XQPromoteUntyped *)item);
    break;
  }
  case ASTNode::PROMOTE_NUMERIC: {
    result = optimizePromoteNumeric((XQPromoteNumeric *)item);
    break;
  }
  case ASTNode::PROMOTE_ANY_URI: {
    result = optimizePromoteAnyURI((XQPromoteAnyURI *)item);
    break;
  }
  case ASTNode::DOCUMENT_ORDER: {
    result = optimizeDocumentOrder((XQDocumentOrder *)item);
    break;
  }
  case ASTNode::PREDICATE: {
    result = optimizePredicate((XQPredicate *)item);
    break;
  }
  case ASTNode::USER_FUNCTION: {
    result = optimizeUserFunction((XQUserFunctionInstance *)item);
    break;
  }
  case ASTNode::NAME_EXPRESSION: {
    result = optimizeNameExpression((XQNameExpression *)item);
    break;
  }
  case ASTNode::CONTENT_SEQUENCE: {
    result = optimizeContentSequence((XQContentSequence *)item);
    break;
  }
  case ASTNode::DIRECT_NAME: {
    result = optimizeDirectName((XQDirectName *)item);
    break;
  }
  case ASTNode::UDELETE: {
    result = optimizeUDelete((UDelete *)item);
    break;
  }
  case ASTNode::URENAME: {
    result = optimizeURename((URename *)item);
    break;
  }
  case ASTNode::UREPLACE: {
    result = optimizeUReplace((UReplace *)item);
    break;
  }
  case ASTNode::UREPLACE_VALUE_OF: {
    result = optimizeUReplaceValueOf((UReplaceValueOf *)item);
    break;
  }
  case ASTNode::UINSERT_AS_FIRST: {
    result = optimizeUInsertAsFirst((UInsertAsFirst *)item);
    break;
  }
  case ASTNode::UINSERT_AS_LAST: {
    result = optimizeUInsertAsLast((UInsertAsLast *)item);
    break;
  }
  case ASTNode::UINSERT_INTO: {
    result = optimizeUInsertInto((UInsertInto *)item);
    break;
  }
  case ASTNode::UINSERT_AFTER: {
    result = optimizeUInsertAfter((UInsertAfter *)item);
    break;
  }
  case ASTNode::UINSERT_BEFORE: {
    result = optimizeUInsertBefore((UInsertBefore *)item);
    break;
  }
  case ASTNode::UTRANSFORM: {
    result = optimizeUTransform((UTransform *)item);
    break;
  }
  case ASTNode::UAPPLY_UPDATES: {
    result = optimizeUApplyUpdates((UApplyUpdates *)item);
    break;
  }
  case ASTNode::FTCONTAINS: {
    result = optimizeFTContains((FTContains *)item);
    break;
  }
  case ASTNode::NAMESPACE_BINDING: {
    result = optimizeNamespaceBinding((XQNamespaceBinding *)item);
    break;
  }
  case ASTNode::FUNCTION_CONVERSION: {
    result = optimizeFunctionConversion((XQFunctionConversion *)item);
    break;
  }
  case ASTNode::ANALYZE_STRING: {
    result = optimizeAnalyzeString((XQAnalyzeString *)item);
    break;
  }
  case ASTNode::COPY_OF: {
    result = optimizeCopyOf((XQCopyOf *)item);
    break;
  }
  case ASTNode::CALL_TEMPLATE: {
    result = optimizeCallTemplate((XQCallTemplate *)item);
    break;
  }
  case ASTNode::APPLY_TEMPLATES: {
    result = optimizeApplyTemplates((XQApplyTemplates *)item);
    break;
  }
  case ASTNode::INLINE_FUNCTION: {
    result = optimizeInlineFunction((XQInlineFunction *)item);
    break;
  }
  case ASTNode::FUNCTION_REF: {
    result = optimizeFunctionRef((XQFunctionRef *)item);
    break;
  }
  case ASTNode::FUNCTION_DEREF: {
    result = optimizeFunctionDeref((XQFunctionDeref *)item);
    break;
  }
  }
  return result;
}

ASTNode *ASTVisitor::optimizeFunction(XQFunction *item)
{
  VectorOfASTNodes &args = const_cast<VectorOfASTNodes &>(item->getArguments());
  for(VectorOfASTNodes::iterator i = args.begin(); i != args.end(); ++i) {
    *i = optimize(*i);
  }
  return item;
}

ASTNode *ASTVisitor::optimizeContextItem(XQContextItem *item)
{
  return item;
}

ASTNode *ASTVisitor::optimizeLiteral(XQLiteral *item)
{
  return item;
}

ASTNode *ASTVisitor::optimizeNav(XQNav *item)
{
  XQNav::Steps &args = const_cast<XQNav::Steps &>(item->getSteps());
  for(XQNav::Steps::iterator i = args.begin(); i != args.end(); ++i) {
    i->step = optimize(i->step);
  }
  return item;
}

ASTNode *ASTVisitor::optimizeParenthesizedExpr(XQParenthesizedExpr *item)
{
  VectorOfASTNodes &args = const_cast<VectorOfASTNodes &>(item->getChildren());
  for(VectorOfASTNodes::iterator i = args.begin(); i != args.end(); ++i) {
    *i = optimize(*i);
  }
  return item;
}

ASTNode *ASTVisitor::optimizeSequence(XQSequence *item)
{
  return item;
}

ASTNode *ASTVisitor::optimizeStep(XQStep *item)
{
  return item;
}

ASTNode *ASTVisitor::optimizeVariable(XQVariable *item)
{
  return item;
}

ASTNode *ASTVisitor::optimizeIf(XQIf *item)
{
  item->setTest(optimize(const_cast<ASTNode *>(item->getTest())));
  item->setWhenTrue(optimize(const_cast<ASTNode *>(item->getWhenTrue())));
  item->setWhenFalse(optimize(const_cast<ASTNode *>(item->getWhenFalse())));
  return item;
}

ASTNode *ASTVisitor::optimizeInstanceOf(XQInstanceOf *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  return item;
}

ASTNode *ASTVisitor::optimizeCastableAs(XQCastableAs *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  return item;
}

ASTNode *ASTVisitor::optimizeCastAs(XQCastAs *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  return item;
}

ASTNode *ASTVisitor::optimizeTreatAs(XQTreatAs *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  return item;
}

ASTNode *ASTVisitor::optimizeOperator(XQOperator *item)
{
  VectorOfASTNodes &args = const_cast<VectorOfASTNodes &>(item->getArguments());
  for(VectorOfASTNodes::iterator i = args.begin(); i != args.end(); ++i) {
    *i = optimize(*i);
  }
  return item;
}

ASTNode *ASTVisitor::optimizeReturn(XQReturn *item)
{
  item->setParent(optimizeTupleNode(const_cast<TupleNode*>(item->getParent())));
  item->setExpression(optimize(item->getExpression()));
  return item;
}

ASTNode *ASTVisitor::optimizeQuantified(XQQuantified *item)
{
  item->setParent(optimizeTupleNode(const_cast<TupleNode*>(item->getParent())));
  item->setExpression(optimize(item->getExpression()));
  return item;
}

ASTNode *ASTVisitor::optimizeTypeswitch(XQTypeswitch *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));

  XQTypeswitch::Cases *clauses = const_cast<XQTypeswitch::Cases *>(item->getCases());
  for(XQTypeswitch::Cases::iterator i = clauses->begin(); i != clauses->end(); ++i) {
    (*i)->setExpression(optimize((*i)->getExpression()));
  }

  const_cast<XQTypeswitch::Case *>(item->getDefaultCase())->
    setExpression(optimize(item->getDefaultCase()->getExpression()));

  return item;
}

ASTNode *ASTVisitor::optimizeValidate(XQValidate *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));

  return item;
}

ASTNode *ASTVisitor::optimizeFunctionCall(XQFunctionCall *item)
{
  VectorOfASTNodes *args = const_cast<VectorOfASTNodes*>(item->getArguments());
  for(VectorOfASTNodes::iterator i = args->begin(); i != args->end(); ++i) {
    *i = optimize(*i);
  }
  return item;
}

ASTNode *ASTVisitor::optimizeUserFunction(XQUserFunctionInstance *item)
{
  VectorOfASTNodes &args = const_cast<VectorOfASTNodes &>(item->getArguments());
  for(VectorOfASTNodes::iterator i = args.begin(); i != args.end(); ++i) {
    *i = optimize(*i);
  }
  return item;
}

ASTNode *ASTVisitor::optimizeNameExpression(XQNameExpression *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));

  return item;
}

ASTNode *ASTVisitor::optimizeContentSequence(XQContentSequence *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));

  return item;
}

ASTNode *ASTVisitor::optimizeDirectName(XQDirectName *item)
{
  return item;
}

ASTNode *ASTVisitor::optimizeDOMConstructor(XQDOMConstructor *item)
{
  if(item->getName()) {
    item->setName(optimize(const_cast<ASTNode *>(item->getName())));
  }

  VectorOfASTNodes *attrs = const_cast<VectorOfASTNodes *>(item->getAttributes());
  if(attrs) {
    for(VectorOfASTNodes::iterator i = attrs->begin(); i != attrs->end(); ++i) {
      *i = optimize(*i);
    }
  }

  VectorOfASTNodes *children = const_cast<VectorOfASTNodes *>(item->getChildren());
  if(children) {
    for(VectorOfASTNodes::iterator j = children->begin(); j != children->end(); ++j) {
      *j = optimize(*j);
    }
  }

  if(item->getValue()) {
    item->setValue(optimize(const_cast<ASTNode *>(item->getValue())));
  }

  return item;
}

ASTNode *ASTVisitor::optimizeSimpleContent(XQSimpleContent *item)
{
  VectorOfASTNodes *children = const_cast<VectorOfASTNodes *>(item->getChildren());
  if(children) {
    for(VectorOfASTNodes::iterator j = children->begin(); j != children->end(); ++j) {
      *j = optimize(*j);
    }
  }
  return item;
}

ASTNode *ASTVisitor::optimizeOrderingChange(XQOrderingChange *item)
{
  item->setExpr(optimize(item->getExpr()));
  return item;
}

ASTNode *ASTVisitor::optimizeAtomize(XQAtomize *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  return item;
}

ASTNode *ASTVisitor::optimizeXPath1CompatConvertFunctionArg(XPath1CompatConvertFunctionArg *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  return item;
}

ASTNode *ASTVisitor::optimizePromoteUntyped(XQPromoteUntyped *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  return item;
}

ASTNode *ASTVisitor::optimizePromoteNumeric(XQPromoteNumeric *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  return item;
}

ASTNode *ASTVisitor::optimizePromoteAnyURI(XQPromoteAnyURI *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  return item;
}

ASTNode *ASTVisitor::optimizeDocumentOrder(XQDocumentOrder *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  return item;
}

ASTNode *ASTVisitor::optimizePredicate(XQPredicate *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  item->setPredicate(optimize(const_cast<ASTNode *>(item->getPredicate())));
  return item;
}

ASTNode *ASTVisitor::optimizeNamespaceBinding(XQNamespaceBinding *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  return item;
}

ASTNode *ASTVisitor::optimizeFunctionConversion(XQFunctionConversion *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  return item;
}

ASTNode *ASTVisitor::optimizeAnalyzeString(XQAnalyzeString *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  item->setRegex(optimize(const_cast<ASTNode *>(item->getRegex())));
  if(item->getFlags())
	  item->setFlags(optimize(const_cast<ASTNode *>(item->getFlags())));
  item->setMatch(optimize(const_cast<ASTNode *>(item->getMatch())));
  item->setNonMatch(optimize(const_cast<ASTNode *>(item->getNonMatch())));
  return item;
}

ASTNode *ASTVisitor::optimizeCopyOf(XQCopyOf *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  return item;
}

ASTNode *ASTVisitor::optimizeCallTemplate(XQCallTemplate *item)
{
  TemplateArguments *args = item->getArguments();
  if(args != 0) {
    for(TemplateArguments::iterator i = args->begin(); i != args->end(); ++i) {
      (*i)->value = optimize((*i)->value);
    }
  }
  return item;
}

ASTNode *ASTVisitor::optimizeApplyTemplates(XQApplyTemplates *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));

  TemplateArguments *args = item->getArguments();
  if(args != 0) {
    for(TemplateArguments::iterator i = args->begin(); i != args->end(); ++i) {
      (*i)->value = optimize((*i)->value);
    }
  }

  return item;
}

ASTNode *ASTVisitor::optimizeInlineFunction(XQInlineFunction *item)
{
  item->setUserFunction(optimizeFunctionDef(item->getUserFunction()));
  item->setInstance(optimize(item->getInstance()));
  return item;
}

ASTNode *ASTVisitor::optimizeFunctionRef(XQFunctionRef *item)
{
  item->setInstance(optimize(item->getInstance()));
  return item;
}

ASTNode *ASTVisitor::optimizeFunctionDeref(XQFunctionDeref *item)
{
  item->setExpression(optimize(item->getExpression()));

  VectorOfASTNodes *args = const_cast<VectorOfASTNodes*>(item->getArguments());
  if(args) {
    for(VectorOfASTNodes::iterator i = args->begin(); i != args->end(); ++i) {
      *i = optimize(*i);
    }
  }

  return item;
}


////////////////////////////////////////////////////////////////////////////////////////////////////

ASTNode *ASTVisitor::optimizeUDelete(UDelete *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  return item;
}

ASTNode *ASTVisitor::optimizeURename(URename *item)
{
  item->setTarget(optimize(const_cast<ASTNode *>(item->getTarget())));
  item->setName(optimize(const_cast<ASTNode *>(item->getName())));
  return item;
}

ASTNode *ASTVisitor::optimizeUReplace(UReplace *item)
{
  item->setTarget(optimize(const_cast<ASTNode *>(item->getTarget())));
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  return item;
}

ASTNode *ASTVisitor::optimizeUReplaceValueOf(UReplaceValueOf *item)
{
  item->setTarget(optimize(const_cast<ASTNode *>(item->getTarget())));
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  return item;
}

ASTNode *ASTVisitor::optimizeUInsertAsFirst(UInsertAsFirst *item)
{
  item->setSource(optimize(const_cast<ASTNode *>(item->getSource())));
  item->setTarget(optimize(const_cast<ASTNode *>(item->getTarget())));
  return item;
}

ASTNode *ASTVisitor::optimizeUInsertAsLast(UInsertAsLast *item)
{
  item->setSource(optimize(const_cast<ASTNode *>(item->getSource())));
  item->setTarget(optimize(const_cast<ASTNode *>(item->getTarget())));
  return item;
}

ASTNode *ASTVisitor::optimizeUInsertInto(UInsertInto *item)
{
  item->setSource(optimize(const_cast<ASTNode *>(item->getSource())));
  item->setTarget(optimize(const_cast<ASTNode *>(item->getTarget())));
  return item;
}

ASTNode *ASTVisitor::optimizeUInsertAfter(UInsertAfter *item)
{
  item->setSource(optimize(const_cast<ASTNode *>(item->getSource())));
  item->setTarget(optimize(const_cast<ASTNode *>(item->getTarget())));
  return item;
}

ASTNode *ASTVisitor::optimizeUInsertBefore(UInsertBefore *item)
{
  item->setSource(optimize(const_cast<ASTNode *>(item->getSource())));
  item->setTarget(optimize(const_cast<ASTNode *>(item->getTarget())));
  return item;
}

ASTNode *ASTVisitor::optimizeUTransform(UTransform *item)
{
  VectorOfCopyBinding *bindings = const_cast<VectorOfCopyBinding*>(item->getBindings());
  for(VectorOfCopyBinding::iterator i = bindings->begin(); i != bindings->end(); ++i) {
    (*i)->expr_ = optimize((*i)->expr_);
  }

  item->setModifyExpr(optimize(const_cast<ASTNode *>(item->getModifyExpr())));
  item->setReturnExpr(optimize(const_cast<ASTNode *>(item->getReturnExpr())));

  return item;
}

ASTNode *ASTVisitor::optimizeUApplyUpdates(UApplyUpdates *item)
{
  item->setExpression(optimize(const_cast<ASTNode *>(item->getExpression())));
  return item;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

ASTNode *ASTVisitor::optimizeFTContains(FTContains *item)
{
  // TBD implement optimization of FTSelection objects - jpcs
  item->setArgument(optimize(item->getArgument()));
  //   item->setSelection(optimizeFTSelection(item->getSelection()));
  if(item->getIgnore())
    item->setIgnore(optimize(item->getIgnore()));
  return item;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

TupleNode *ASTVisitor::optimizeTupleNode(TupleNode *item)
{
  TupleNode *result = item;
  switch(item->getType()) {
  case TupleNode::CONTEXT_TUPLE: {
    result = optimizeContextTuple((ContextTuple*)item);
    break;
  }
  case TupleNode::FOR: {
    result = optimizeForTuple((ForTuple*)item);
    break;
  }
  case TupleNode::LET: {
    result = optimizeLetTuple((LetTuple*)item);
    break;
  }
  case TupleNode::WHERE: {
    result = optimizeWhereTuple((WhereTuple*)item);
    break;
  }
  case TupleNode::ORDER_BY: {
    result = optimizeOrderByTuple((OrderByTuple*)item);
    break;
  }
  }
  return result;
}

TupleNode *ASTVisitor::optimizeContextTuple(ContextTuple *item)
{
  return item;
}

TupleNode *ASTVisitor::optimizeForTuple(ForTuple *item)
{
  item->setParent(optimizeTupleNode(const_cast<TupleNode*>(item->getParent())));
  item->setExpression(optimize(item->getExpression()));
  return item;
}

TupleNode *ASTVisitor::optimizeLetTuple(LetTuple *item)
{
  item->setParent(optimizeTupleNode(const_cast<TupleNode*>(item->getParent())));
  item->setExpression(optimize(item->getExpression()));
  return item;
}

TupleNode *ASTVisitor::optimizeWhereTuple(WhereTuple *item)
{
  item->setParent(optimizeTupleNode(const_cast<TupleNode*>(item->getParent())));
  item->setExpression(optimize(item->getExpression()));
  return item;
}

TupleNode *ASTVisitor::optimizeOrderByTuple(OrderByTuple *item)
{
  item->setParent(optimizeTupleNode(const_cast<TupleNode*>(item->getParent())));
  item->setExpression(optimize(item->getExpression()));
  return item;
}

