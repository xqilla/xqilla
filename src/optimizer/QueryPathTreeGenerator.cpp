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
#include <xqilla/optimizer/QueryPathTreeGenerator.hpp>
#include <xqilla/axis/NodeTest.hpp>

#include <xqilla/context/DynamicContext.hpp>

#include <xqilla/operators/And.hpp>
#include <xqilla/operators/Or.hpp>
#include <xqilla/operators/Equals.hpp>
#include <xqilla/operators/NotEquals.hpp>
#include <xqilla/operators/Plus.hpp>
#include <xqilla/operators/Minus.hpp>
#include <xqilla/operators/Multiply.hpp>
#include <xqilla/operators/Divide.hpp>
#include <xqilla/operators/IntegerDivide.hpp>
#include <xqilla/operators/Mod.hpp>
#include <xqilla/operators/LessThan.hpp>
#include <xqilla/operators/GreaterThan.hpp>
#include <xqilla/operators/LessThanEqual.hpp>
#include <xqilla/operators/GreaterThanEqual.hpp>
#include <xqilla/operators/UnaryMinus.hpp>
#include <xqilla/operators/NodeComparison.hpp>
#include <xqilla/operators/OrderComparison.hpp>
#include <xqilla/operators/GeneralComp.hpp>
#include <xqilla/operators/Range.hpp>
#include <xqilla/operators/Intersect.hpp>
#include <xqilla/operators/Except.hpp>
#include <xqilla/operators/Union.hpp>

#include <xqilla/functions/FunctionBaseURI.hpp>
#include <xqilla/functions/FunctionCollection.hpp>
#include <xqilla/functions/FunctionDeepEqual.hpp>
#include <xqilla/functions/FunctionDoc.hpp>
#include <xqilla/functions/FunctionExactlyOne.hpp>
#include <xqilla/functions/FunctionId.hpp>
#include <xqilla/functions/FunctionIdref.hpp>
#include <xqilla/functions/FunctionInsertBefore.hpp>
#include <xqilla/functions/FunctionLang.hpp>
#include <xqilla/functions/FunctionNormalizeSpace.hpp>
#include <xqilla/functions/FunctionNumber.hpp>
#include <xqilla/functions/FunctionOneOrMore.hpp>
#include <xqilla/functions/FunctionParseXML.hpp>
#include <xqilla/functions/FunctionParseJSON.hpp>
#include <xqilla/functions/FunctionRemove.hpp>
#include <xqilla/functions/FunctionReverse.hpp>
#include <xqilla/functions/FunctionRoot.hpp>
#include <xqilla/functions/FunctionString.hpp>
#include <xqilla/functions/FunctionStringLength.hpp>
#include <xqilla/functions/FunctionSubsequence.hpp>
#include <xqilla/functions/FunctionTrace.hpp>
#include <xqilla/functions/FunctionUnordered.hpp>
#include <xqilla/functions/FunctionZeroOrOne.hpp>

#include <xqilla/update/FunctionPut.hpp>

#include <xercesc/util/XMLUri.hpp>

XERCES_CPP_NAMESPACE_USE;
using namespace std;

static const XMLCh XMLChDot[] = { chColon, chColon, chLatin_d, chLatin_o, chLatin_t, chNull };

QueryPathTreeGenerator::QueryPathTreeGenerator(DynamicContext *context, Optimizer *parent)
  : Optimizer(parent),
    mm_(context->getMemoryManager()),
    context_(context),
    varStore_(&varStoreMemMgr_)
{
  resetInternal();
}

void QueryPathTreeGenerator::createAnyNodeResult(PathResult &result)
{
  NodeTest *nt = new (mm_) NodeTest(Node::document_string);
  QueryPathNode *root = new (mm_) QueryPathNode(nt, QueryPathNode::ROOT, mm_);
  result.join(root);

  QueryPathNode *pisn = root->appendChild(new (mm_) QueryPathNode(new (mm_) NodeTest((XMLCh*)0),
                                                                  QueryPathNode::DESCENDANT, mm_));
  result.join(pisn);

  QueryPathNode *cisn = pisn->appendChild(new (mm_) QueryPathNode(new (mm_) NodeTest(Node::attribute_string),
                                                                  QueryPathNode::ATTRIBUTE, mm_));
  result.join(cisn);
}

void QueryPathTreeGenerator::resetInternal()
{
  varStore_.clear();

  // The initial context item could be a node of any type from anywhere -
  // set up a set of paths that reflect that
  PathResult contextResult;
  createAnyNodeResult(contextResult);
  varStore_.setGlobalVar(XMLChDot, XMLChDot, contextResult);
}

ASTNode *QueryPathTreeGenerator::optimize(ASTNode *item)
{
  generate(item).markSubtreeResult();
  return item;
}

void QueryPathTreeGenerator::optimize(XQQuery *query)
{
  // Generate the imported module's global variables
  ImportedModules &modules = const_cast<ImportedModules&>(query->getImportedModules());
  for(ImportedModules::const_iterator it2 = modules.begin(); it2 != modules.end(); ++it2) {
    optimize(*it2);
  }

  for(UserFunctions::const_iterator it = query->getFunctions().begin();
      it != query->getFunctions().end(); ++it) {
    generateFunctionDef(*it);
  }

  for(GlobalVariables::const_iterator it3 = query->getVariables().begin();
      it3 != query->getVariables().end(); ++it3) {
    generateGlobalVar(*it3);
  }

  if(query->getQueryBody() != 0) {
    generate(query->getQueryBody()).markSubtreeResult();
  }
}

void QueryPathTreeGenerator::generateFunctionDef(XQUserFunction *item)
{
  if(item->getFunctionBody() != 0) {
    const XQUserFunction::ArgumentSpecs *params = item->getArgumentSpecs();
    if(params) {
      varStore_.addScope(VarStore::MyScope::LOCAL_SCOPE);

      for(XQUserFunction::ArgumentSpecs::const_iterator it = params->begin();
          it != params->end(); ++it) {
          PathResult paramRes;
          if((*it)->getStaticAnalysis().getStaticType().containsType(StaticType::NODE_TYPE))
            createAnyNodeResult(paramRes);
          setVariable((*it)->getURI(), (*it)->getName(), paramRes);
      }
    }

    generate(const_cast<ASTNode*>(item->getFunctionBody()));

    if(params) {
      delete varStore_.popScope();
    }
  }
}

void QueryPathTreeGenerator::generateGlobalVar(XQGlobalVariable *item)
{
  PathResult result;

  if(item->getVariableExpr()) {
    result.join(generate(const_cast<ASTNode *>(item->getVariableExpr())));
  } else {
    if(item->getStaticAnalysis().getStaticType().containsType(StaticType::NODE_TYPE))
      createAnyNodeResult(result);
  }

  varStore_.setGlobalVar(item->getVariableURI(), item->getVariableLocalName(), result);
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generate(ASTNode *item)
{
  PathResult result;
  switch(item->getType()) {
  case ASTNode::LITERAL: {
    result = generateLiteral((XQLiteral *)item);
    break;
  }
  case ASTNode::SEQUENCE: {
    result = generateSequence((XQSequence *)item);
    break;
  }
  case ASTNode::FUNCTION: {
    result = generateFunction((XQFunction *)item);
    break;
  }
  case ASTNode::NAVIGATION: {
    result = generateNav((XQNav *)item);
    break;
  }
  case ASTNode::VARIABLE: {
    result = generateVariable((XQVariable *)item);
    break;
  }
  case ASTNode::STEP: {
    result = generateStep((XQStep *)item);
    break;
  }
  case ASTNode::IF: {
    result = generateIf((XQIf *)item);
    break;
  }
  case ASTNode::INSTANCE_OF: {
    result = generateInstanceOf((XQInstanceOf *)item);
    break;
  }
  case ASTNode::CASTABLE_AS: {
    result = generateCastableAs((XQCastableAs *)item);
    break;
  }
  case ASTNode::CAST_AS: {
    result = generateCastAs((XQCastAs *)item);
    break;
  }
  case ASTNode::TREAT_AS: {
    result = generateTreatAs((XQTreatAs *)item);
    break;
  }
  case ASTNode::PARENTHESIZED: {
    result = generateParenthesizedExpr((XQParenthesizedExpr *)item);
    break;
  }
  case ASTNode::OPERATOR: {
    result = generateOperator((XQOperator *)item);
    break;
  }
  case ASTNode::CONTEXT_ITEM: {
    result = generateContextItem((XQContextItem *)item);
    break;
  }
  case ASTNode::RETURN: {
    result = generateReturn((XQReturn *)item);
    break;
  }
  case ASTNode::QUANTIFIED: {
    result = generateQuantified((XQQuantified *)item);
    break;
  }
  case ASTNode::TYPESWITCH: {
    result = generateTypeswitch((XQTypeswitch *)item);
    break;
  }
  case ASTNode::VALIDATE: {
    result = generateValidate((XQValidate *)item);
    break;
  }
  case ASTNode::DOM_CONSTRUCTOR: {
    result = generateDOMConstructor((XQDOMConstructor *)item);
    break;
  }
  case ASTNode::NAME_EXPRESSION: {
    result = generateNameExpression((XQNameExpression *)item);
    break;
  }
  case ASTNode::CONTENT_SEQUENCE: {
    result = generateContentSequence((XQContentSequence *)item);
    break;
  }
  case ASTNode::DIRECT_NAME: {
    result = generateDirectName((XQDirectName *)item);
    break;
  }
  case ASTNode::ORDERING_CHANGE: {
    result = generateOrderingChange((XQOrderingChange *)item);
    break;
  }
  case ASTNode::ATOMIZE: {
    result = generateAtomize((XQAtomize *)item);
    break;
  }
  case ASTNode::PROMOTE_UNTYPED: {
    result = generatePromoteUntyped((XQPromoteUntyped *)item);
    break;
  }
  case ASTNode::PROMOTE_NUMERIC: {
    result = generatePromoteNumeric((XQPromoteNumeric *)item);
    break;
  }
  case ASTNode::PROMOTE_ANY_URI: {
    result = generatePromoteAnyURI((XQPromoteAnyURI *)item);
    break;
  }
  case ASTNode::DOCUMENT_ORDER: {
    result = generateDocumentOrder((XQDocumentOrder *)item);
    break;
  }
  case ASTNode::PREDICATE: {
    result = generatePredicate((XQPredicate *)item);
    break;
  }
  case ASTNode::USER_FUNCTION: {
    result = generateUserFunction((XQUserFunction::Instance *)item);
    break;
  }
  case ASTNode::UDELETE: {
    result = generateUDelete((UDelete *)item);
    break;
  }
  case ASTNode::URENAME: {
    result = generateURename((URename *)item);
    break;
  }
  case ASTNode::UREPLACE: {
    result = generateUReplace((UReplace *)item);
    break;
  }
  case ASTNode::UREPLACE_VALUE_OF: {
    result = generateUReplaceValueOf((UReplaceValueOf *)item);
    break;
  }
  case ASTNode::UINSERT_AS_FIRST: {
    result = generateUInsertAsFirst((UInsertAsFirst *)item);
    break;
  }
  case ASTNode::UINSERT_AS_LAST: {
    result = generateUInsertAsLast((UInsertAsLast *)item);
    break;
  }
  case ASTNode::UINSERT_INTO: {
    result = generateUInsertInto((UInsertInto *)item);
    break;
  }
  case ASTNode::UINSERT_AFTER: {
    result = generateUInsertAfter((UInsertAfter *)item);
    break;
  }
  case ASTNode::UINSERT_BEFORE: {
    result = generateUInsertBefore((UInsertBefore *)item);
    break;
  }
  case ASTNode::UTRANSFORM: {
    result = generateUTransform((UTransform *)item);
    break;
  }
  case ASTNode::UAPPLY_UPDATES: {
    result = generateUApplyUpdates((UApplyUpdates *)item);
    break;
  }
  case ASTNode::FUNCTION_CALL: {
    result = generateFunctionCall((XQFunctionCall *)item);
    break;
  }
  case ASTNode::XPATH1_CONVERT: {
    result = generateXPath1CompatConvertFunctionArg((XPath1CompatConvertFunctionArg *)item);
    break;
  }
  case ASTNode::FTCONTAINS: {
    result = generateFTContains((FTContains *)item);
    break;
  }
  }
  return result;
}

static QueryPathNode::Type getTypeFromAxis(XQStep::Axis axis)
{
  QueryPathNode::Type result = (QueryPathNode::Type)-1;
  switch(axis) {
  case XQStep::CHILD: {
    result = QueryPathNode::CHILD;
    break;
  }
  case XQStep::ATTRIBUTE: {
    result = QueryPathNode::ATTRIBUTE;
    break;
  }
  case XQStep::DESCENDANT_OR_SELF:
  case XQStep::DESCENDANT: {
    result = QueryPathNode::DESCENDANT;
    break;
  }
  default: {
    // Do nothing
    break;
  }
  }
  return result;
}

const QueryPathTreeGenerator::PathResult &QueryPathTreeGenerator::getCurrentContext() const
{
  return varStore_.getVar(XMLChDot, XMLChDot)->getValue();
}

void QueryPathTreeGenerator::setCurrentContext(const PathResult &value)
{
  setVariable(XMLChDot, XMLChDot, value);
}

void QueryPathTreeGenerator::setVariable(const XMLCh *uri, const XMLCh *name, const PathResult &value)
{
  varStore_.declareVar(uri, name, value);
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateStep(XQStep *item)
{
  XQStep::Axis axis = item->getAxis();
  const NodeTest *nodeTest = item->getNodeTest();

  PathResult result;

  QueryPathNode dummy(nodeTest, getTypeFromAxis(axis), mm_);

  const PathResult &currentContext = getCurrentContext();
  for(QueryPathNode::Vector::const_iterator it = currentContext.returnPaths.begin();
      it != currentContext.returnPaths.end(); ++it) {

    switch(axis) {
    case XQStep::PARENT: {
      generateParentStep(*it, dummy, result);
      break;
    }
    case XQStep::DESCENDANT_OR_SELF: {
      generateSelfStep(*it, dummy, result);
      generateBuiltInStep(*it, dummy, result);
      break;
    }
    case XQStep::SELF: {
      generateSelfStep(*it, dummy, result);
      break;
    }
    case XQStep::ANCESTOR: {
      generateAncestorStep(*it, dummy, result);
      break;
    }
    case XQStep::ANCESTOR_OR_SELF: {
      generateAncestorOrSelfStep(*it, dummy, result);
      break;
    }
    case XQStep::FOLLOWING: {
      generateFollowingStep(*it, dummy, result);
      break;
    }
    case XQStep::PRECEDING: {
      generatePrecedingStep(*it, dummy, result);
      break;
    }
    case XQStep::PRECEDING_SIBLING:
    case XQStep::FOLLOWING_SIBLING: {
      generateSiblingStep(*it, dummy, result);
      break;
    }
    case XQStep::ATTRIBUTE:
    case XQStep::CHILD:
    case XQStep::DESCENDANT: {
      generateBuiltInStep(*it, dummy, result);
      break;
    }
    case XQStep::NAMESPACE:
    default: {
      // Do nothing
      break;
    }
    }
  }

  return result;
}

QueryPathNode *QueryPathTreeGenerator::createQueryPathNode(const NodeTest *nodeTest, QueryPathNode::Type type)
{
  return new (mm_) QueryPathNode(nodeTest, type, mm_);
}

void QueryPathTreeGenerator::generateBuiltInStep(QueryPathNode *target, QueryPathNode &node, PathResult &result)
{
  switch(target->getType()) {
  case QueryPathNode::ATTRIBUTE: {
    // Does nothing
    break;
  }
  case QueryPathNode::CHILD:
  case QueryPathNode::DESCENDANT:
  case QueryPathNode::ROOT: {
    QueryPathNode *newNode = createQueryPathNode(node.getNodeTest(), node.getType());
    result.join(target->appendChild(newNode));
    break;
  }
  default: break;
  }
}

void QueryPathTreeGenerator::generateParentStep(QueryPathNode *target, QueryPathNode &node, PathResult &result)
{
  QueryPathNode *parent = target->getParent();
  if(parent == 0) return;

  switch(target->getType()) {
  case QueryPathNode::ATTRIBUTE:
  case QueryPathNode::CHILD: {
    if(parent->isSubsetOf(&node)) {
      result.join(parent);
    } else if(node.isSubsetOf(parent)) {
      QueryPathNode *parent_parent = parent->getParent();
      if(parent_parent != 0) {
        QueryPathNode *newNode = createQueryPathNode(node.getNodeTest(), parent->getType());
        result.join(parent_parent->appendChild(newNode));
      }
    }
    break;
  }
  case QueryPathNode::DESCENDANT: {
    if(parent->isSubsetOf(&node)) {
      result.join(parent);
    }

    QueryPathNode *newNode = createQueryPathNode(node.getNodeTest(), QueryPathNode::DESCENDANT);
    result.join(parent->appendChild(newNode));
    break;
  }
  case QueryPathNode::ROOT: {
    // There is no parent
    break;
  }
  default: break;
  }
}

void QueryPathTreeGenerator::generateSelfStep(QueryPathNode *target, QueryPathNode &node, PathResult &result)
{
  if(target->isSubsetOf(&node)) {
    result.join(target);
  } else if(node.isSubsetOf(target)) {
    QueryPathNode *parent = target->getParent();
    if(parent != 0) {
      QueryPathNode *newNode = createQueryPathNode(node.getNodeTest(), target->getType());
      result.join(parent->appendChild(newNode));
    }
  }
}

void QueryPathTreeGenerator::generateAncestorStep(QueryPathNode *target, QueryPathNode &node, PathResult &result)
{
  QueryPathNode *parent = target->getParent();
  if(parent == 0) return;

  switch(target->getType()) {
  case QueryPathNode::ATTRIBUTE:
  case QueryPathNode::CHILD: {
    if(parent->isSubsetOf(&node)) {
      result.join(parent);
    } else if(node.isSubsetOf(parent)) {
      QueryPathNode *parent_parent = parent->getParent();
      if(parent_parent != 0) {
        QueryPathNode *newNode = createQueryPathNode(node.getNodeTest(), parent->getType());
        result.join(parent_parent->appendChild(newNode));
      }
    }
    generateAncestorStep(parent, node, result);
    break;
  }
  case QueryPathNode::DESCENDANT: {
    if(parent->isSubsetOf(&node)) {
      result.join(parent);
    }

    QueryPathNode *newNode = createQueryPathNode(node.getNodeTest(), QueryPathNode::DESCENDANT);
    result.join(parent->appendChild(newNode));

    generateAncestorStep(parent, node, result);
    break;
  }
  case QueryPathNode::ROOT: {
    // Has no ancestors
    break;
  }
  default: break;
  }
}

void QueryPathTreeGenerator::generateAncestorOrSelfStep(QueryPathNode *target, QueryPathNode &node, PathResult &result)
{
  generateSelfStep(target, node, result);
  generateAncestorStep(target, node, result);
}

void QueryPathTreeGenerator::generateFollowingStep(QueryPathNode *target, QueryPathNode &node, PathResult &result)
{
  QueryPathNode *newNode = createQueryPathNode(node.getNodeTest(), QueryPathNode::DESCENDANT);
  result.join(target->getRoot()->appendChild(newNode));
}

void QueryPathTreeGenerator::generatePrecedingStep(QueryPathNode *target, QueryPathNode &node, PathResult &result)
{
  QueryPathNode *root = target->getRoot();

  if(root->isSubsetOf(&node)) {
    result.join(root);
  }

  QueryPathNode *newNode = createQueryPathNode(node.getNodeTest(), QueryPathNode::DESCENDANT);
  result.join(root->appendChild(newNode));
}

void QueryPathTreeGenerator::generateSiblingStep(QueryPathNode *target, QueryPathNode &node, PathResult &result)
{
  QueryPathNode *parent = target->getParent();
  if(parent == 0) return;

  switch(target->getType()) {
  case QueryPathNode::CHILD:
  case QueryPathNode::DESCENDANT: {
    QueryPathNode *newNode = createQueryPathNode(node.getNodeTest(), target->getType());
    result.join(parent->appendChild(newNode));
    break;
  }
  case QueryPathNode::ATTRIBUTE:
  case QueryPathNode::ROOT: {
    // Have no siblings
    break;
  }
  default: break;
  }
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateNav(XQNav *item)
{
  PathResult result = getCurrentContext();

  bool setContext = false;
  XQNav::Steps &args = const_cast<XQNav::Steps &>(item->getSteps());
  for(XQNav::Steps::iterator i = args.begin(); i != args.end(); ++i) {
    if(setContext) {
      varStore_.addScope(VarStore::MyScope::LOGICAL_BLOCK_SCOPE);
      setCurrentContext(result);
    }

    result = generate(i->step);

    if(setContext) {
      delete varStore_.popScope();
    }
    setContext = true;
  }

  return result;
}

static const XMLCh *resolveURIArg(const ASTNode *arg, DynamicContext *context, bool &defaultCollection)
{
  if(!arg->isConstant()) return 0;

  Item::Ptr item = arg->createResult(context)->next(context);
  if(item.isNull()) {
    defaultCollection = true;
    return 0;
  }

  const XMLCh *uriArg = item->asString(context);
  if(uriArg == 0) return 0;

  const XMLCh *baseUri = context->getBaseURI();

  try {
    XMLUri uri;
    if(baseUri != 0 && *baseUri != 0) {
      XMLUri base(baseUri);
      uri = XMLUri(&base, uriArg);
    } else {
      uri = XMLUri(uriArg);
    }
    return context->getMemoryManager()->getPooledString(uri.getUriText());
  }
  catch(...)  {
    // don't throw; it's just that the URI isn't valid.
  }

  return 0;
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateFunction(XQFunction *item)
{
  VectorOfASTNodes &args = const_cast<VectorOfASTNodes &>(item->getArguments());
  const XMLCh *uri = item->getFunctionURI();
  const XMLCh *name = item->getFunctionName();

  PathResult result;

  if(uri == XQFunction::XMLChFunctionURI) {

    // fn:root()
    if(name == FunctionRoot::name) {
      const PathResult &currentContext = getCurrentContext();

      // root() gets the root of it's argument, if it has one.
      // Otherwise it gets the root of the current context
      PathResult ret;
      if(args.empty()) {
        ret = currentContext;
      }
      else {
        ret = generate(args[0]);
      }

      for(QueryPathNode::Vector::iterator it = ret.returnPaths.begin();
          it != ret.returnPaths.end(); ++it) {
        result.join((*it)->getRoot());
      }
    }

    else if(name == FunctionDoc::name) {
      ASTNode *arg = args[0];
      generate(arg);

      QueryPathNode *root = ((FunctionDoc*)item)->getQueryPathTree();
      if(!root) {
        // Check criteria for safe document projection
        if(!arg->isConstant()) context_->setProjection(false);

        // Check to see if this document URI has already been accessed
        bool defaultCollection = false;
        const XMLCh *uriArg = resolveURIArg(arg, context_, defaultCollection);
        if(uriArg != 0) root = projectionMap_[uriArg];

        // If we've not found a root QueryPathNode, create a new one
        if(!root) {
          NodeTest *nt = new (mm_) NodeTest(Node::document_string);
          root = new (mm_) QueryPathNode(nt, QueryPathNode::ROOT, mm_);
          if(uriArg != 0) projectionMap_[uriArg] = root;
        }

        ((FunctionDoc*)item)->setQueryPathTree(root);
      }

      result.join(root);
    }

    else if(name == FunctionCollection::name) {
      ASTNode *arg = 0;
      if(!args.empty()) {
        arg = args[0];
        generate(arg);
      }

      QueryPathNode *root = ((FunctionCollection*)item)->getQueryPathTree();
      if(!root) {
        const XMLCh *uriArg = 0;
        bool defaultCollection = false;
        if(arg != 0) {
          // Check criteria for safe document projection
          if(!arg->isConstant()) context_->setProjection(false);

          // Check to see if this document URI has already been accessed
          uriArg = resolveURIArg(arg, context_, defaultCollection);
        }
        else defaultCollection = true;

        if(uriArg != 0 || defaultCollection) root = projectionMap_[uriArg];

        // If we've not found a root QueryPathNode, create a new one
        if(!root) {
          NodeTest *nt = new (mm_) NodeTest(Node::document_string);
          root = new (mm_) QueryPathNode(nt, QueryPathNode::ROOT, mm_);
          if(uriArg != 0 || defaultCollection) projectionMap_[uriArg] = root;
        }

        ((FunctionCollection*)item)->setQueryPathTree(root);
      }

      result.join(root);
    }

    else if(name == FunctionPut::name) {
      generate(args[0]).markSubtreeResult();
      if(args.size() > 1)
        generate(args[1]).markSubtreeValue();
    }
    else if(name == FunctionTrace::name) {
      // trace() returns it's first argument, and prints the string
      // value of it's second argument.

      result = generate(args[0]);
      generate(args[1]);
    }
    else if(name == FunctionZeroOrOne::name ||
            name == FunctionOneOrMore::name ||
            name == FunctionExactlyOne::name ||
            name == FunctionReverse::name ||
            name == FunctionUnordered::name) {
      // return their argument
      result = generate(args[0]);
    }
    else if(name == FunctionInsertBefore::name) {
      // behaves a bit like union
      PathResult ret = generate(args[0]);
      result.join(ret);

      generate(args[1]);

      PathResult ret2 = generate(args[2]);
      result.join(ret2);
    }
    else if(name == FunctionRemove::name) {
      result = generate(args[0]);
      generate(args[1]);
    }
    else if(name == FunctionSubsequence::name) {
      result = generate(args[0]);
      generate(args[1]);
      if(args.size() > 2) {
        generate(args[2]);
      }
    }
    else if(name == FunctionDeepEqual::name) {
      generate(args[0]).markSubtreeResult();
      generate(args[1]).markSubtreeResult();
      if(args.size() > 2) {
        generate(args[2]);
      }
    }
    else if(name == FunctionId::name ||
            name == FunctionIdref::name) {
      PathResult nodes;
      if(args.size() == 1) {
        const PathResult &currentContext = getCurrentContext();
        nodes = currentContext;
      }
      else {
        nodes = generate(args[1]);
      }

      // We don't handle these, so we mark the trees as unoptimisable
      nodes.markRoot();

      generate(args[0]);
    }
    else if(name == FunctionLang::name) {
      generate(args[0]);

      PathResult nodeResult;
      if(args.size() == 1) nodeResult = getCurrentContext();
      else nodeResult = generate(args[1]);

      // We want all the xml:lang attributes from all our lookup node's ancestors

      NodeTest *nt = new (mm_) NodeTest(Node::element_string);
      QueryPathNode dummy(nt, QueryPathNode::CHILD, mm_);
      PathResult ancestorResult;
      QueryPathNode::Vector::const_iterator it;
      for(it = nodeResult.returnPaths.begin(); it != nodeResult.returnPaths.end(); ++it) {
        generateAncestorOrSelfStep(*it, dummy, ancestorResult);
      }

      NodeTest *nt2 = new (mm_) NodeTest(Node::attribute_string, XMLUni::fgXMLURIName, mm_->getPooledString("lang"));
      QueryPathNode dummy2(nt2, QueryPathNode::ATTRIBUTE, mm_);
      PathResult attrResult;
      for(it = ancestorResult.returnPaths.begin(); it != ancestorResult.returnPaths.end(); ++it) {
        generateBuiltInStep(*it, dummy2, attrResult);
      }

      attrResult.markSubtreeValue();
    }
    else if(name == FunctionBaseURI::name) {
      PathResult nodeResult;
      if(args.size() == 0) nodeResult = getCurrentContext();
      else nodeResult = generate(args[0]);

      // We want all the xml:base attributes from all our lookup node's ancestors

      NodeTest *nt = new (mm_) NodeTest(Node::element_string);
      QueryPathNode dummy(nt, QueryPathNode::CHILD, mm_);
      PathResult ancestorResult;
      QueryPathNode::Vector::const_iterator it;
      for(it = nodeResult.returnPaths.begin(); it != nodeResult.returnPaths.end(); ++it) {
        generateAncestorOrSelfStep(*it, dummy, ancestorResult);
      }

      NodeTest *nt2 = new (mm_) NodeTest(Node::attribute_string, XMLUni::fgXMLURIName, mm_->getPooledString("base"));
      QueryPathNode dummy2(nt2, QueryPathNode::ATTRIBUTE, mm_);
      PathResult attrResult;
      for(it = ancestorResult.returnPaths.begin(); it != ancestorResult.returnPaths.end(); ++it) {
        generateBuiltInStep(*it, dummy2, attrResult);
      }

      attrResult.markSubtreeValue();
    }

    // These implicitly use the value of the current context if they have no parameters
    else if((name == FunctionStringLength::name ||
             name == FunctionNormalizeSpace::name ||
             name == FunctionNumber::name ||
             name == FunctionString::name) &&
            args.empty()) {
      const PathResult &currentContext = getCurrentContext();
      currentContext.markSubtreeValue();
    }

    else if(name == FunctionString::name) {
      generate(args[0]).markSubtreeValue();
    }

    else {
      for(VectorOfASTNodes::iterator i = args.begin(); i != args.end(); ++i) {
        generate(*i);
      }
    }

  }

  else if(uri == XQillaFunction::XMLChFunctionURI) {
    if(name == FunctionParseXML::name) {
      // Returns a document, much the same as fn:doc()
      generate(args[0]);

      QueryPathNode *root = ((FunctionParseXML*)item)->getQueryPathTree();
      if(!root) {
        NodeTest *nt = new (mm_) NodeTest(Node::document_string);
        root = new (mm_) QueryPathNode(nt, QueryPathNode::ROOT, mm_);
        ((FunctionParseXML*)item)->setQueryPathTree(root);
      }

      result.join(root);
    }

    else if(name == FunctionParseJSON::name) {
      // Returns a sequence of elements
      generate(args[0]);

      QueryPathNode *root = ((FunctionParseJSON*)item)->getQueryPathTree();
      if(!root) {
        NodeTest *nt = new (mm_) NodeTest(Node::element_string);
        root = new (mm_) QueryPathNode(nt, QueryPathNode::CHILD, mm_);
        ((FunctionParseJSON*)item)->setQueryPathTree(root);
      }

      result.join(root);
    }

    else {
      // We don't know about this function, assume it will only need the descendants of it's node arguments
      for(VectorOfASTNodes::iterator i = args.begin(); i != args.end(); ++i) {
        generate(*i).markSubtreeResult();
      }
    }
  }

  else {
    // We don't know about this function, assume it will only need the descendants of it's node arguments
    for(VectorOfASTNodes::iterator i = args.begin(); i != args.end(); ++i) {
      generate(*i).markSubtreeResult();
    }
  }

  return result;
}

class ArgHolder {
public:
  ArgHolder(const XMLCh *u, const XMLCh *n, const QueryPathTreeGenerator::PathResult &v)
    : uri(u), name(n), value(v) {}
  
  const XMLCh *uri, *name;
  QueryPathTreeGenerator::PathResult value;
};

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateUserFunction(XQUserFunction::Instance *item)
{
  PathResult result;

  VectorOfASTNodes &args = const_cast<VectorOfASTNodes &>(item->getArguments());
  const XQUserFunction *functionDef = item->getFunctionDefinition();

  // Evaluate the arguments in the current scope, declare them in the function's scope
  vector<ArgHolder> evaluatedArgs;
  if(functionDef->getArgumentSpecs()) {
    XQUserFunction::ArgumentSpecs::const_iterator binding = functionDef->getArgumentSpecs()->begin();
    for(VectorOfASTNodes::iterator arg = args.begin(); arg != args.end() && binding != functionDef->getArgumentSpecs()->end(); ++arg, ++binding) {

      PathResult r = generate(*arg);

      if((*binding)->isUsed()) {
        evaluatedArgs.push_back(ArgHolder((*binding)->getURI(), (*binding)->getName(), r));
      }
    }
  }

  if(functionDef->getFunctionBody() != 0) {
    // Check to see if this user function is recursing into a user function
    // that has already been called.
    pair<set<const ASTNode*>::iterator, bool> ins = userFunctionStack_.insert(functionDef->getFunctionBody());
    if(ins.second) {
      varStore_.addScope(VarStore::MyScope::LOCAL_SCOPE);

      for(vector<ArgHolder>::iterator it = evaluatedArgs.begin(); it != evaluatedArgs.end(); ++it) {
        setVariable(it->uri, it->name, it->value);
      }

      PathResult ret = generate(const_cast<ASTNode *>(functionDef->getFunctionBody()));
      result.join(ret);

      delete varStore_.popScope();

      userFunctionStack_.erase(ins.first);
      return result;
    }
  }

  // All we can really do if it is recursive is to mark the entire tree as needed
  // TBD see if we can handle recursive user functions better - jpcs
  for(vector<ArgHolder>::iterator it = evaluatedArgs.begin(); it != evaluatedArgs.end(); ++it) {
    it->value.markRoot();
  }

  return result;
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateOperator(XQOperator *item)
{
  PathResult result;

  VectorOfASTNodes &args = const_cast<VectorOfASTNodes &>(item->getArguments());
  const XMLCh *name = item->getOperatorName();

  if(name == Union::name) {
    PathResult ret = generate(args[0]);
    result.join(ret);

    ret = generate(args[1]);
    result.join(ret);
  }

  else if(name == Intersect::name) {
    PathResult ret = generate(args[0]);
    result.join(ret);

    ret = generate(args[1]);
    result.join(ret);
  }

  else if(name == Except::name) {
    result = generate(args[0]);
    generate(args[1]);
  }

  else {
    for(VectorOfASTNodes::iterator i = args.begin(); i != args.end(); ++i) {
      generate(*i);
    }
  }

  return result;
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateParenthesizedExpr(XQParenthesizedExpr *item)
{
  VectorOfASTNodes &args = const_cast<VectorOfASTNodes &>(item->getChildren());
  PathResult result;
  for(VectorOfASTNodes::iterator i = args.begin(); i != args.end(); ++i) {
    PathResult ret = generate(*i);
    result.join(ret);
  }

  return result;
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateVariable(XQVariable *item)
{
  VarStoreRef *ref = varStore_.getVar(item->getURI(), item->getName());

  PathResult result;
  if(ref != 0) {
    result = ref->getValue();
  } else {
    // Undeclared global variable - we'll declare it here
    createAnyNodeResult(result);
    varStore_.setGlobalVar(item->getURI(), item->getName(), result);
  }

  return result;
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateIf(XQIf *item)
{
  PathResult result;

  PathResult test = generate(const_cast<ASTNode *>(item->getTest()));

  PathResult ret = generate(const_cast<ASTNode *>(item->getWhenTrue()));
  result.join(ret);

  ret = generate(const_cast<ASTNode *>(item->getWhenFalse()));
  result.join(ret);

  return result;
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateInstanceOf(XQInstanceOf *item)
{
  return generate(const_cast<ASTNode *>(item->getExpression()));
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateCastableAs(XQCastableAs *item)
{
  return generate(const_cast<ASTNode *>(item->getExpression()));
}

void QueryPathTreeGenerator::generateTupleNode(TupleNode *item)
{
  switch(item->getType()) {
  case TupleNode::CONTEXT_TUPLE: {
    break;
  }
  case TupleNode::FOR: {
    generateForTuple((ForTuple*)item);
    break;
  }
  case TupleNode::LET: {
    generateLetTuple((LetTuple*)item);
    break;
  }
  case TupleNode::WHERE: {
    generateWhereTuple((WhereTuple*)item);
    break;
  }
  case TupleNode::ORDER_BY: {
    generateOrderByTuple((OrderByTuple*)item);
    break;
  }
  default: break;
  }
}

void QueryPathTreeGenerator::generateForTuple(ForTuple *item)
{
  generateTupleNode(const_cast<TupleNode*>(item->getParent()));

  PathResult r = generate(item->getExpression());

  if(item->getVarName()) {
    setVariable(item->getVarURI(), item->getVarName(), r);
  }
  if(item->getPosName()) {
    setVariable(item->getPosURI(), item->getPosName(), PathResult());
  }
}

void QueryPathTreeGenerator::generateLetTuple(LetTuple *item)
{
  generateTupleNode(const_cast<TupleNode*>(item->getParent()));

  PathResult r = generate(item->getExpression());

  if(item->getVarName()) {
    setVariable(item->getVarURI(), item->getVarName(), r);
  }
}

void QueryPathTreeGenerator::generateWhereTuple(WhereTuple *item)
{
  generateTupleNode(const_cast<TupleNode*>(item->getParent()));

  generate(item->getExpression());
}

void QueryPathTreeGenerator::generateOrderByTuple(OrderByTuple *item)
{
  generateTupleNode(const_cast<TupleNode*>(item->getParent()));

  generate(item->getExpression());
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateReturn(XQReturn *item)
{
  varStore_.addScope(VarStore::MyScope::LOGICAL_BLOCK_SCOPE);

  generateTupleNode(const_cast<TupleNode*>(item->getParent()));
  PathResult result = generate(item->getExpression());
  
  delete varStore_.popScope();

  return result;
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateQuantified(XQQuantified *item)
{
  varStore_.addScope(VarStore::MyScope::LOGICAL_BLOCK_SCOPE);

  generateTupleNode(const_cast<TupleNode*>(item->getParent()));
  generate(item->getExpression());
  
  delete varStore_.popScope();

  return PathResult();
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateTypeswitch(XQTypeswitch *item)
{
  PathResult result;

  PathResult expr = generate(const_cast<ASTNode *>(item->getExpression()));

  XQTypeswitch::Cases *clauses = const_cast<XQTypeswitch::Cases *>(item->getCases());
  for(XQTypeswitch::Cases::iterator i = clauses->begin(); i != clauses->end(); ++i) {

    if((*i)->isVariableUsed()) {
      varStore_.addScope(VarStore::MyScope::LOGICAL_BLOCK_SCOPE);
      setVariable((*i)->getURI(), (*i)->getName(), expr);
    }

    PathResult ret = generate((*i)->getExpression());
    result.join(ret);

    if((*i)->isVariableUsed()) {
      delete varStore_.popScope();
    }
  }

  XQTypeswitch::Case *def = const_cast<XQTypeswitch::Case *>(item->getDefaultCase());
  if(def->isVariableUsed()) {
    varStore_.addScope(VarStore::MyScope::LOGICAL_BLOCK_SCOPE);
    setVariable(def->getURI(), def->getName(), expr);
  }

  PathResult ret = generate(def->getExpression());
  result.join(ret);

  if(def->isVariableUsed()) {
    delete varStore_.popScope();
  }

  return result;
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateDOMConstructor(XQDOMConstructor *item)
{
  PathResult result;

  if(item->getName()) {
    generate(const_cast<ASTNode *>(item->getName()));
  }

  VectorOfASTNodes *attrs = const_cast<VectorOfASTNodes *>(item->getAttributes());
  if(attrs) {
    for(VectorOfASTNodes::iterator i = attrs->begin(); i != attrs->end(); ++i) {
      generate(*i).markSubtreeResult();
    }
  }

  VectorOfASTNodes *children = const_cast<VectorOfASTNodes *>(item->getChildren());
  if(children) {
    for(VectorOfASTNodes::iterator j = children->begin(); j != children->end(); ++j) {
      generate(*j).markSubtreeResult();
    }
  }

  if(item->getValue()) {
    generate(const_cast<ASTNode *>(item->getValue()));
  }

  if(!item->getQueryPathTree()) {
    if(item->getNodeType() == Node::document_string) {
      item->setQueryPathTree(new (mm_) QueryPathNode(new (mm_) NodeTest(Node::document_string), QueryPathNode::ROOT, mm_));
    }
    else if(item->getNodeType() == Node::element_string) {
      item->setQueryPathTree(new (mm_) QueryPathNode(new (mm_) NodeTest(Node::element_string), QueryPathNode::CHILD, mm_));
    }
    else if(item->getNodeType() == Node::attribute_string) {
      item->setQueryPathTree(new (mm_) QueryPathNode(new (mm_) NodeTest(Node::attribute_string), QueryPathNode::ATTRIBUTE, mm_));
    }
    else {
      item->setQueryPathTree(new (mm_) QueryPathNode(new (mm_) NodeTest((XMLCh*)0), QueryPathNode::CHILD, mm_));
    }
  }

  result.join(item->getQueryPathTree());
  return result;
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateNameExpression(XQNameExpression *item)
{
  return generate(const_cast<ASTNode *>(item->getExpression()));
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::copyNodes(const PathResult &r)
{
  // Emulate copying the nodes
  PathResult copyResult;

  r.markSubtreeResult();

  NodeTest *nt = new (mm_) NodeTest(Node::document_string);
  QueryPathNode *root = new (mm_) QueryPathNode(nt, QueryPathNode::ROOT, mm_);

  QueryPathNode::Vector::const_iterator j = r.returnPaths.begin();
  for(; j != r.returnPaths.end(); ++j) {
    switch((*j)->getType()) {
    case QueryPathNode::ATTRIBUTE: {
      QueryPathNode *pisn = new (mm_) QueryPathNode(new (mm_) NodeTest(Node::element_string),
                                                    QueryPathNode::DESCENDANT, mm_);
      pisn = root->appendChild(pisn);
      copyResult.join(pisn->appendChild(new (mm_) QueryPathNode((*j)->getNodeTest(),
                                                                QueryPathNode::ATTRIBUTE, mm_)));
      break;
    }
    case QueryPathNode::CHILD:
    case QueryPathNode::DESCENDANT: {
      copyResult.join(root->appendChild(new (mm_) QueryPathNode((*j)->getNodeTest(),
                                                                QueryPathNode::DESCENDANT, mm_)));
      break;
    }
    case QueryPathNode::ROOT: {
      copyResult.join(root);
      break;
    }
    default: break;
    }
  }

  return copyResult;
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateContentSequence(XQContentSequence *item)
{
  return copyNodes(generate(const_cast<ASTNode *>(item->getExpression())));
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateDirectName(XQDirectName *item)
{
  return PathResult();
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateContextItem(XQContextItem *item)
{
  return getCurrentContext();
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateLiteral(XQLiteral *item)
{
  return PathResult();
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateSequence(XQSequence *item)
{
  return PathResult();
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateCastAs(XQCastAs *item)
{
  return generate(const_cast<ASTNode*>(item->getExpression()));
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateTreatAs(XQTreatAs *item)
{
  return generate(const_cast<ASTNode *>(item->getExpression()));
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateOrderingChange(XQOrderingChange *item)
{
  return generate(item->getExpr());
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateAtomize(XQAtomize *item)
{
  generate(const_cast<ASTNode *>(item->getExpression())).markSubtreeValue();
  return PathResult();
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generatePromoteUntyped(XQPromoteUntyped *item)
{
  return generate(const_cast<ASTNode *>(item->getExpression()));
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generatePromoteNumeric(XQPromoteNumeric *item)
{
  return generate(const_cast<ASTNode *>(item->getExpression()));
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generatePromoteAnyURI(XQPromoteAnyURI *item)
{
  return generate(const_cast<ASTNode *>(item->getExpression()));
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateDocumentOrder(XQDocumentOrder *item)
{
  return generate(const_cast<ASTNode *>(item->getExpression()));
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateValidate(XQValidate *item)
{
  return copyNodes(generate(const_cast<ASTNode *>(item->getExpression())));
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generatePredicate(XQPredicate *item)
{
  PathResult result = generate(const_cast<ASTNode *>(item->getExpression()));

  varStore_.addScope(VarStore::MyScope::LOGICAL_BLOCK_SCOPE);
  setCurrentContext(result);

  generate(const_cast<ASTNode *>(item->getPredicate()));

  delete varStore_.popScope();
  return result;
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateUDelete(UDelete *item)
{
  // Any tree that is updated can't be document projected
  generate(const_cast<ASTNode *>(item->getExpression())).markRoot();
  return PathResult();
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateURename(URename *item)
{
  // Any tree that is updated can't be document projected
  generate(const_cast<ASTNode *>(item->getTarget())).markRoot();
  generate(const_cast<ASTNode *>(item->getName()));
  return PathResult();
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateUReplace(UReplace *item)
{
  // Any tree that is updated can't be document projected
  generate(const_cast<ASTNode *>(item->getTarget())).markRoot();
  generate(const_cast<ASTNode *>(item->getExpression())).markSubtreeResult();
  return PathResult();
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateUReplaceValueOf(UReplaceValueOf *item)
{
  // Any tree that is updated can't be document projected
  generate(const_cast<ASTNode *>(item->getTarget())).markRoot();
  generate(const_cast<ASTNode *>(item->getExpression()));
  return PathResult();
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateUInsertAsFirst(UInsertAsFirst *item)
{
  // Any tree that is updated can't be document projected
  generate(const_cast<ASTNode *>(item->getTarget())).markRoot();
  generate(const_cast<ASTNode *>(item->getSource())).markSubtreeResult();
  return PathResult();
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateUInsertAsLast(UInsertAsLast *item)
{
  // Any tree that is updated can't be document projected
  generate(const_cast<ASTNode *>(item->getTarget())).markRoot();
  generate(const_cast<ASTNode *>(item->getSource())).markSubtreeResult();
  return PathResult();
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateUInsertInto(UInsertInto *item)
{
  // Any tree that is updated can't be document projected
  generate(const_cast<ASTNode *>(item->getTarget())).markRoot();
  generate(const_cast<ASTNode *>(item->getSource())).markSubtreeResult();
  return PathResult();
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateUInsertAfter(UInsertAfter *item)
{
  // Any tree that is updated can't be document projected
  generate(const_cast<ASTNode *>(item->getTarget())).markRoot();
  generate(const_cast<ASTNode *>(item->getSource())).markSubtreeResult();
  return PathResult();
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateUInsertBefore(UInsertBefore *item)
{
  // Any tree that is updated can't be document projected
  generate(const_cast<ASTNode *>(item->getTarget())).markRoot();
  generate(const_cast<ASTNode *>(item->getSource())).markSubtreeResult();
  return PathResult();
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateUTransform(UTransform *item)
{
  varStore_.addScope(VarStore::MyScope::LOGICAL_BLOCK_SCOPE);

  VectorOfCopyBinding *bindings = const_cast<VectorOfCopyBinding*>(item->getBindings());
  for(VectorOfCopyBinding::iterator i = bindings->begin(); i != bindings->end(); ++i) {
    setVariable((*i)->uri_, (*i)->name_, generate((*i)->expr_));
  }

  generate(const_cast<ASTNode *>(item->getModifyExpr()));
  PathResult result = generate(const_cast<ASTNode *>(item->getReturnExpr()));

  delete varStore_.popScope();

  return result;
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateUApplyUpdates(UApplyUpdates *item)
{
  return generate(const_cast<ASTNode *>(item->getExpression()));
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateFunctionCall(XQFunctionCall *item)
{
  // Shouldn't happen
  VectorOfASTNodes *args = const_cast<VectorOfASTNodes*>(item->getArguments());
  for(VectorOfASTNodes::iterator i = args->begin(); i != args->end(); ++i) {
    generate(*i);
  }
  return PathResult();
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateXPath1CompatConvertFunctionArg(XPath1CompatConvertFunctionArg *item)
{
  return generate(const_cast<ASTNode *>(item->getExpression()));
}

QueryPathTreeGenerator::PathResult QueryPathTreeGenerator::generateFTContains(FTContains *item)
{
  // TBD implement optimization of FTSelection objects - jpcs
  PathResult result = generate(item->getArgument());
  //   item->setSelection(optimizeFTSelection(item->getSelection()));
  if(item->getIgnore())
    generate(item->getIgnore());
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

void QueryPathTreeGenerator::PathResult::join(const QueryPathNode::MVector &o)
{
  returnPaths.insert(returnPaths.begin(), o.begin(), o.end());
}

void QueryPathTreeGenerator::PathResult::join(const PathResult &o)
{
  returnPaths.insert(returnPaths.begin(), o.returnPaths.begin(), o.returnPaths.end());
}

void QueryPathTreeGenerator::PathResult::join(QueryPathNode *o)
{
  returnPaths.push_back(o);
}

void QueryPathTreeGenerator::PathResult::markSubtreeValue() const
{
  // Mark the paths as needing the subtree
  for(QueryPathNode::Vector::const_iterator it = returnPaths.begin(); it != returnPaths.end(); ++it) {
    (*it)->markSubtreeValue();
  }
}

void QueryPathTreeGenerator::PathResult::markSubtreeResult() const
{
  // Mark the paths as needing the subtree
  for(QueryPathNode::Vector::const_iterator it = returnPaths.begin(); it != returnPaths.end(); ++it) {
    (*it)->markSubtreeResult();
  }
}

void QueryPathTreeGenerator::PathResult::markRoot() const
{
  // Mark the paths as needing the entire tree
  for(QueryPathNode::Vector::const_iterator it = returnPaths.begin(); it != returnPaths.end(); ++it) {
    (*it)->getRoot()->markSubtreeResult();
  }
}

