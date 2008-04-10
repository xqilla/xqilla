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

#ifndef _QUERYPATHTREEGENERATOR_HPP
#define _QUERYPATHTREEGENERATOR_HPP

#include <map>

#include <xqilla/optimizer/ASTVisitor.hpp>
#include <xqilla/optimizer/QueryPathNode.hpp>
#include <xqilla/context/impl/VariableStoreTemplate.hpp>
#include <xqilla/framework/XPath2MemoryManagerImpl.hpp>

class NodeTest;

typedef std::map<const XMLCh *, QueryPathNode*> QPNMap;

/**
 * Generates QueryPathNode trees of the paths
 * in the documents that will be navigated.
 */
class QueryPathTreeGenerator : public Optimizer
{
public:
  QueryPathTreeGenerator(DynamicContext *context, Optimizer *parent = 0);
  virtual ~QueryPathTreeGenerator() { varStore_.clear(); }

  class PathResult {
  public:
    void join(const QueryPathNode::MVector &o);
    void join(const PathResult &o);
    void join(QueryPathNode *o);

    void markSubtreeValue() const;
    void markSubtreeResult() const;
    void markRoot() const;

    QueryPathNode::Vector returnPaths;
  };
protected:
  virtual QueryPathNode *createQueryPathNode(const NodeTest *nodeTest, QueryPathNode::Type type);

  virtual void resetInternal();

  virtual void optimize(XQQuery *query);
  virtual ASTNode *optimize(ASTNode *item);

  virtual PathResult generate(ASTNode *item);
  virtual PathResult generateParenthesizedExpr(XQParenthesizedExpr *item);
  virtual PathResult generateFunction(XQFunction *item);
  virtual PathResult generateOperator(XQOperator *item);
  virtual PathResult generateNav(XQNav *item);
  virtual PathResult generateStep(XQStep *item);
  virtual PathResult generateVariable(XQVariable *item);
  virtual PathResult generateIf(XQIf *item);
  virtual PathResult generateInstanceOf(XQInstanceOf *item);
  virtual PathResult generateCastableAs(XQCastableAs *item);
  virtual PathResult generateReturn(XQReturn *item);
  virtual PathResult generateQuantified(XQQuantified *item);
  virtual PathResult generateTypeswitch(XQTypeswitch *item);
  virtual PathResult generateDOMConstructor(XQDOMConstructor *item);
  virtual PathResult generateSimpleContent(XQSimpleContent *item);
  virtual PathResult generateNameExpression(XQNameExpression *item);
  virtual PathResult generateContentSequence(XQContentSequence *item);
  virtual PathResult generateDirectName(XQDirectName *item);
  virtual PathResult generateUserFunction(XQUserFunctionInstance *item);
  virtual PathResult generateContextItem(XQContextItem *item);
  virtual PathResult generateLiteral(XQLiteral *item);
  virtual PathResult generateSequence(XQSequence *item);
  virtual PathResult generateCastAs(XQCastAs *item);
  virtual PathResult generateTreatAs(XQTreatAs *item);
  virtual PathResult generateOrderingChange(XQOrderingChange *item);
  virtual PathResult generateAtomize(XQAtomize *item);
  virtual PathResult generatePromoteUntyped(XQPromoteUntyped *item);
  virtual PathResult generatePromoteNumeric(XQPromoteNumeric *item);
  virtual PathResult generatePromoteAnyURI(XQPromoteAnyURI *item);
  virtual PathResult generateDocumentOrder(XQDocumentOrder *item);
  virtual PathResult generatePredicate(XQPredicate *item);
  virtual PathResult generateValidate(XQValidate *item);
  virtual PathResult generateFunctionCall(XQFunctionCall *item);
  virtual PathResult generateXPath1CompatConvertFunctionArg(XPath1CompatConvertFunctionArg *item);
  virtual PathResult generateFTContains(FTContains *item);
  virtual PathResult generateNamespaceBinding(XQNamespaceBinding *item);
  virtual PathResult generateFunctionConversion(XQFunctionConversion *item);
  virtual PathResult generateAnalyzeString(XQAnalyzeString *item);
  virtual PathResult generateCopyOf(XQCopyOf *item);
  virtual PathResult generateCallTemplate(XQCallTemplate *item);
  virtual PathResult generateApplyTemplates(XQApplyTemplates *item);
  virtual PathResult generateInlineFunction(XQInlineFunction *item);
  virtual PathResult generateFunctionRef(XQFunctionRef *item);
  virtual PathResult generateFunctionDeref(XQFunctionDeref *item);

  virtual PathResult generateUDelete(UDelete *item);
  virtual PathResult generateURename(URename *item);
  virtual PathResult generateUReplace(UReplace *item);
  virtual PathResult generateUReplaceValueOf(UReplaceValueOf *item);
  virtual PathResult generateUInsertAsFirst(UInsertAsFirst *item);
  virtual PathResult generateUInsertAsLast(UInsertAsLast *item);
  virtual PathResult generateUInsertInto(UInsertInto *item);
  virtual PathResult generateUInsertAfter(UInsertAfter *item);
  virtual PathResult generateUInsertBefore(UInsertBefore *item);
  virtual PathResult generateUTransform(UTransform *item);
  virtual PathResult generateUApplyUpdates(UApplyUpdates *item);

  virtual void generateTupleNode(TupleNode *item);
  virtual void generateForTuple(ForTuple *item);
  virtual void generateLetTuple(LetTuple *item);
  virtual void generateWhereTuple(WhereTuple *item);
  virtual void generateOrderByTuple(OrderByTuple *item);

  virtual void generateGlobalVar(XQGlobalVariable *item);
  virtual void generateFunctionDef(XQUserFunction *item);

  void generateBuiltInStep(QueryPathNode *target, QueryPathNode &node,
                           PathResult &result);
  void generateParentStep(QueryPathNode *target, QueryPathNode &node,
                          PathResult &result);
  void generateSelfStep(QueryPathNode *target, QueryPathNode &node,
                        PathResult &result);
  void generateAncestorStep(QueryPathNode *target,
                            QueryPathNode &node, PathResult &result);
  void generateAncestorOrSelfStep(QueryPathNode *target,
                                  QueryPathNode &node,
                                  PathResult &result);
  void generateFollowingStep(QueryPathNode *target,
                             QueryPathNode &node, PathResult &result);
  void generatePrecedingStep(QueryPathNode *target,
                             QueryPathNode &node, PathResult &result);
  void generateSiblingStep(QueryPathNode *target, QueryPathNode &node,
                           PathResult &result);

  void createAnyNodeResult(PathResult &result);

  const PathResult &getCurrentContext() const;
  void setCurrentContext(const PathResult &value);
  void setVariable(const XMLCh *uri, const XMLCh *name,
                   const PathResult &value);

  PathResult copyNodes(const PathResult &r);

  XPath2MemoryManager *mm_;
  DynamicContext *context_;

  std::set<const ASTNode*> userFunctionStack_;

  typedef VarHashEntry<PathResult> VarStoreRef;
  typedef VariableStoreTemplate<PathResult> VarStore;

  XPath2MemoryManagerImpl varStoreMemMgr_;
  VarStore varStore_; ///< Memory owned by varStoreMemMgr_

  QPNMap projectionMap_;
};

#endif
