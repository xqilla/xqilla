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
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <sstream>

#include <xqilla/utils/PrintAST.hpp>
#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/utils/NumUtils.hpp>
#include <xqilla/ast/ASTNode.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/exceptions/XPath2TypeCastException.hpp>
#include <xqilla/items/Numeric.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/DateOrTimeType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/runtime/SequenceResult.hpp>
#include <xqilla/context/XQillaFactory.hpp>

ASTNodeImpl::ASTNodeImpl(XPath2MemoryManager* memMgr)
  : _predList(XQillaAllocator<PredInfo>(memMgr)),
    _src(memMgr),
    _memMgr(memMgr)
{
  // Nothing to do
}

ASTNodeImpl::~ASTNodeImpl(void)
{
  //no-op
}

void ASTNodeImpl::addPredicates(const VectorOfASTNodes &steps)
{
    for(VectorOfASTNodes::const_iterator i=steps.begin();i!=steps.end();i++)
        _predList.push_back(PredInfo(*i));
}

void ASTNodeImpl::addPredicates(const Predicates &steps)
{
    _predList.insert(_predList.end(),steps.begin(),steps.end());
}

const ASTNodeImpl::Predicates& ASTNodeImpl::getPredicates(void) const
{
  return _predList;
}


/** Returns true if this XQ has no predicates, and is an instance of
    XQSequence or XQLiteral */
bool ASTNodeImpl::isConstant() const
{
  return (_type == ASTNode::SEQUENCE || _type == ASTNode::LITERAL) && _predList.empty();
}

/** Overridden in XQSequence and XQLiteral */
bool ASTNodeImpl::isConstantAndHasTimezone(StaticContext *context) const
{
  return false;
}

ASTNode::whichType ASTNodeImpl::getType(void) const
{
  return _type;
}

void ASTNodeImpl::setType(ASTNode::whichType t)
{
  _type = t;
}

bool ASTNodeImpl::isSingleNumericConstant(StaticContext *context) const
{
  return false;
}

Result ASTNodeImpl::createPredicateResult(Result &parent, const PredInfo &p, DynamicContext *context) const
{
  const StaticResolutionContext &src = p.pred->getStaticResolutionContext();

  unsigned int contextSize = 0;
  if(src.isContextSizeUsed()) {
    // We need the context size, so convert to a Sequence to work it out
    Sequence seq(parent.toSequence(context));
    contextSize = seq.getLength();
    parent = new SequenceResult(seq);
  }
  if(src.getStaticType().flags == StaticResolutionContext::NUMERIC_TYPE &&
     !src.isContextItemUsed() && !src.isContextPositionUsed()) {
    // It only contains numeric type results, and doesn't use the context
    // item or position
    return new NumericPredicateFilterResult(parent, p, contextSize, context);
  }
  else if((src.getStaticType().flags & StaticResolutionContext::NUMERIC_TYPE) == 0) {
    // It only contains non-numeric results
    return new NonNumericPredicateFilterResult(parent, p, contextSize, context);
  }
  else {
    return new PredicateFilterResult(parent, p, contextSize, context);
  }
}

Result ASTNodeImpl::collapseTree(DynamicContext* context, int flags) const
{
  Result result = createResult(context, flags);

  for(Predicates::const_iterator it = _predList.begin(); it != _predList.end(); ++it) {
    result = createPredicateResult(result, *it, context);
  }

  return postPredicateResultHook(result, context, flags);
}

Result ASTNodeImpl::postPredicateResultHook(Result &result, DynamicContext* context, int flags) const
{
  return result;
}

Result ASTNodeImpl::createResult(DynamicContext* context, int flags) const
{
  return new CollapseTreeInternalResult(this, flags, context);
}

Sequence ASTNodeImpl::collapseTreeInternal(DynamicContext* context, int flags) const
{
  return Sequence(context->getMemoryManager());
}

/** Calls staticResolution on the XQ, then if isConstant() is true for
    it, and constantFold is true, returns the result of the
    constantFold() method, otherwise returns the result of the resolvePredicates()
    method. */
ASTNode *ASTNodeImpl::resolveASTNode(ASTNode *&di, StaticContext *context, bool cf)
{
  di = di->staticResolution(context);
  _src.getStaticType() = di->getStaticResolutionContext().getStaticType();
  _src.add(di->getStaticResolutionContext());
  if(di->isConstant() && cf) {
    return constantFold(context);
  }
  else {
    return resolvePredicates(context);
  }
}

/** Calls staticResolution on the XQs, then if isConstant() is true for
    all of them, and constantFold is true, returns the result of the
    constantFold() method, otherwise returns the result of the resolvePredicates()
    method. */
ASTNode *ASTNodeImpl::resolveASTNodes(VectorOfASTNodes &dis, StaticContext *context, bool cf)
{
  bool allConstant = true;
  for(VectorOfASTNodes::iterator i = dis.begin(); i != dis.end(); ++i) {
    *i = (*i)->staticResolution(context);
    _src.add((*i)->getStaticResolutionContext());
    if(!(*i)->isConstant()) {
      allConstant = false;
    }
  }

  if(allConstant && cf) {
    return constantFold(context);
  }
  else {
    return resolvePredicates(context);
  }
}

/** Calls staticResolution on the XQs, then if isConstantAndHasTimezone() is true for
    all of them, and constantFold is true, returns the result of the
    constantFold() method, otherwise returns the result of the resolvePredicates()
    method. */
ASTNode *ASTNodeImpl::resolveASTNodesForDateOrTime(VectorOfASTNodes &dis, StaticContext *context, bool cf)
{
  bool allConstant = true;
  for(VectorOfASTNodes::iterator i = dis.begin(); i != dis.end(); ++i) {
    *i = (*i)->staticResolution(context);
    _src.add((*i)->getStaticResolutionContext());
    if(!(*i)->isConstantAndHasTimezone(context)) {
      allConstant = false;
      if((*i)->isConstant()) {
        _src.implicitTimezoneUsed(true);
      }
    }
  }

  if(allConstant && cf) {
    return constantFold(context);
  }
  else {
    return resolvePredicates(context);
  }
}

/** Calls staticResolution on the predicates of this XQ, constant folding
    if possible */
ASTNode *ASTNodeImpl::resolvePredicates(StaticContext *context)
{
  Predicates newPreds(XQillaAllocator<PredInfo>(context->getMemoryManager()));
  ASTNodeImpl *result = resolvePredicate(_predList.rbegin(), newPreds, context);
  result->_predList = newPreds;

  return result;
}

/** Calls staticResolution on the predicates of this XQ, constant folding
    if possible */
ASTNodeImpl *ASTNodeImpl::resolvePredicate(Predicates::reverse_iterator it, Predicates &newPreds, StaticContext *context)
{
  if(it == _predList.rend()) {
    return this;
  }
  else {
    ASTNodeImpl *newDI = resolvePredicate(it + 1, newPreds, context);

    // A predicate before us has short circuited the predicate resolving,
    // so we'll just pass back it's result.
    if(newDI != this) {
      return newDI;
    }

    ASTNode *pred = it->pred->staticResolution(context);
    const StaticResolutionContext &newSrc = pred->getStaticResolutionContext();

    if(!newSrc.isUsed() && !pred->isSingleNumericConstant(context)) {
      // It's not a numeric constant
      AutoRelease<DynamicContext> dContext(context->createDynamicContext());
      dContext->setMemoryManager(context->getMemoryManager());
      if(pred->collapseTree(dContext).getEffectiveBooleanValue(dContext)) {
        // We have a true predicate, so don't add it to the new predicate list
        return this;
      }
      else {
        // We have a false predicate, which is constant folded to an empty sequence,
        // short circuiting the subsequent predicate resolutions
        newPreds.clear();
        return new (getMemoryManager()) XQSequence(getMemoryManager());
      }
    }
    else {
      // It's not constant, or it's numeric, so add it to the new predicate list, and return
      newPreds.push_back(pred);

      // Remove context item usage
      _src.addExceptContextFlags(newSrc);

      return this;
    }
  }
  return this;  // not reached; shut up compiler
}

/** Performs constant folding on this XQ, transfering any predicates to
    the returned ASTNode */
ASTNode *ASTNodeImpl::constantFold(StaticContext *context) const
{
  AutoRelease<DynamicContext> dContext(context->createDynamicContext());
  dContext->setMemoryManager(context->getMemoryManager());
  Result result = createResult(dContext);
  ASTNode* newBlock = new (getMemoryManager()) XQSequence(result, dContext, getMemoryManager());
  newBlock->addPredicates(_predList);
  return newBlock->staticResolution(context);
}

XPath2MemoryManager* ASTNodeImpl::getMemoryManager(void) const {

  return _memMgr;
}

const StaticResolutionContext &ASTNodeImpl::getStaticResolutionContext() const
{
  return _src;
}

/////////////////////////////////////
// CollapseTreeInternalResult
/////////////////////////////////////

ASTNodeImpl::CollapseTreeInternalResult::CollapseTreeInternalResult(const ASTNodeImpl *di, int flags, DynamicContext *context)
  : LazySequenceResult(context),
    _flags(flags),
    _di(di)
{
}

void ASTNodeImpl::CollapseTreeInternalResult::getResult(Sequence &toFill, DynamicContext *context) const
{
  const Sequence &tarts = _di->collapseTreeInternal(context, _flags);
  toFill = tarts;
}

std::string ASTNodeImpl::CollapseTreeInternalResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<collapsetreeinternal/>" << std::endl;

  return oss.str();
}

/////////////////////////////////////
// PredicateFilterResult
/////////////////////////////////////

class AutoContextInfoReset
{
public:
  AutoContextInfoReset(DynamicContext* context)
    : oldContextItem(context->getContextItem()),
      oldContextPosition(context->getContextPosition()),
      oldContextSize(context->getContextSize()),
      context_(context)
  {
  }

  ~AutoContextInfoReset()
  {
    resetContextInfo();
  }

  void resetContextInfo()
  {
    context_->setContextItem(oldContextItem);
    context_->setContextPosition(oldContextPosition);
    context_->setContextSize(oldContextSize);
  }

  Item::Ptr oldContextItem;
  unsigned int oldContextPosition;
  unsigned int oldContextSize;

private:
  DynamicContext* context_;
};

ASTNodeImpl::PredicateFilterResult::PredicateFilterResult(const Result &parent, const PredInfo &pred, unsigned int contextSize, DynamicContext *context)
  : ResultImpl(context),
    todo_(true),
    parent_(parent),
    pred_(pred),
    contextPos_(0),
    contextSize_(contextSize)
{
}

Item::Ptr ASTNodeImpl::PredicateFilterResult::next(DynamicContext *context)
{
  AutoContextInfoReset autoReset(context);

  bool contextUsed = pred_.pred->getStaticResolutionContext().isContextItemUsed() ||
    pred_.pred->getStaticResolutionContext().isContextPositionUsed();

  Item::Ptr result = 0;
  while(result == NULLRCP) {
    result = parent_.next(context);
    if(result == NULLRCP) {
      parent_ = 0;
      return 0;
    }

    ++contextPos_;

    if(todo_ || contextUsed) {
      todo_ = false;

      context->setContextSize(contextSize_);
      context->setContextPosition(contextPos_);
      context->setContextItem(result);

      Result pred_result = pred_.pred->collapseTree(context, ASTNode::UNORDERED);
      first_ = pred_result.next(context);
      if(first_ != NULLRCP) {
        second_ = pred_result.next(context);
      }

      autoReset.resetContextInfo();
    }

    // 3.2.2 ...
    // The predicate truth value is derived by applying the following rules, in order:
    // 1) If the value of the predicate expression is an atomic value of a numeric type, the predicate truth
    // value is true if and only if the value of the predicate expression is equal to the context position.
    if(first_ != NULLRCP && second_ == NULLRCP && first_->isAtomicValue() &&
       ((const AnyAtomicType::Ptr)first_)->isNumericValue()) {
      const Numeric::Ptr num = (const Numeric::Ptr)first_;
      if(!num->equals((const AnyAtomicType::Ptr)context->getXQillaFactory()->createInteger((long)contextPos_, context), context)) {
        result = 0;
      }
      else if(!contextUsed) {
        parent_ = 0;
      }
    }
    else {
      // 2) Otherwise, the predicate truth value is the effective boolean value of the predicate expression
      if(!ResultImpl::getEffectiveBooleanValue(first_, second_, context)) {
        result = 0;
      }
    }
  }

  return result;
}

void ASTNodeImpl::PredicateFilterResult::skip()
{
  parent_.skip();
}

std::string ASTNodeImpl::PredicateFilterResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<predicate contextSize=\"" << contextSize_ << "\">" << std::endl;
  if(!parent_.isNull()) {
    oss << in << "  <parent>" << std::endl;
    oss << parent_.asString(context, indent + 2);
    oss << in << "  </parent>" << std::endl;
  }
  oss << PrintAST::print(pred_.pred, context, indent + 1);
  oss << in << "</predicate>" << std::endl;

  return oss.str();
}

/////////////////////////////////////
// NonNumericPredicateFilterResult
/////////////////////////////////////

ASTNodeImpl::NonNumericPredicateFilterResult::NonNumericPredicateFilterResult(const Result &parent, const PredInfo &pred, unsigned int contextSize, DynamicContext *context)
  : ResultImpl(context),
    todo_(true),
    parent_(parent),
    pred_(pred),
    contextPos_(0),
    contextSize_(contextSize)
{
}

Item::Ptr ASTNodeImpl::NonNumericPredicateFilterResult::next(DynamicContext *context)
{
  AutoContextInfoReset autoReset(context);

  bool contextUsed = pred_.pred->getStaticResolutionContext().isContextItemUsed() ||
    pred_.pred->getStaticResolutionContext().isContextPositionUsed();

  Item::Ptr result = 0;
  while(result == NULLRCP) {
    result = parent_.next(context);
    if(result == NULLRCP) {
      parent_ = 0;
      return 0;
    }

    ++contextPos_;

    if(todo_ || contextUsed) {
      todo_ = false;

      context->setContextSize(contextSize_);
      context->setContextPosition(contextPos_);
      context->setContextItem(result);

      // 2) Otherwise, the predicate truth value is the effective boolean value of the predicate expression
      if(!pred_.pred->collapseTree(context, ASTNode::UNORDERED).getEffectiveBooleanValue(context)) {
        result = 0;
        if(!contextUsed) {
          parent_ = 0;
        }
      }

      autoReset.resetContextInfo();
    }
  }

  return result;
}

void ASTNodeImpl::NonNumericPredicateFilterResult::skip()
{
  parent_.skip();
}

std::string ASTNodeImpl::NonNumericPredicateFilterResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<nonnumeric_predicate contextSize=\"" << contextSize_ << "\">" << std::endl;
  if(!parent_.isNull()) {
    oss << in << "  <parent>" << std::endl;
    oss << parent_.asString(context, indent + 2);
    oss << in << "  </parent>" << std::endl;
  }
  oss << PrintAST::print(pred_.pred, context, indent + 1);
  oss << in << "</nonnumeric_predicate>" << std::endl;

  return oss.str();
}

/////////////////////////////////////
// NumericPredicateFilterResult
/////////////////////////////////////

ASTNodeImpl::NumericPredicateFilterResult::NumericPredicateFilterResult(const Result &parent, const PredInfo &pred, unsigned int contextSize, DynamicContext *context)
  : ResultImpl(context),
    todo_(true),
    parent_(parent),
    pred_(pred),
    contextSize_(contextSize)
{
}

Item::Ptr ASTNodeImpl::NumericPredicateFilterResult::next(DynamicContext *context)
{
  if(todo_) {
    todo_ = false;

    Numeric::Ptr one = context->getXQillaFactory()->createInteger(1, context);

    AutoContextInfoReset autoReset(context);
    context->setContextSize(contextSize_);

    // Set the context item to something other than null,
    // since fn:last() checks to see that there is actually
    // a context item
    context->setContextItem(one);

    Result pred_result = pred_.pred->collapseTree(context);
    Numeric::Ptr first = (Numeric::Ptr)pred_result.next(context);
    if(first == NULLRCP) {
      // The effective boolean value is therefore false
      parent_ = 0;
      return 0;
    }

    Item::Ptr second = pred_result.next(context);
    if(second != NULLRCP) {
      // The effective boolean value causes an error -
      // so call it to get the correct error
      parent_ = 0;
      ResultImpl::getEffectiveBooleanValue(first, second, context);
      return 0;
    }

    autoReset.resetContextInfo();

    Numeric::Ptr pos = one;
    while(pos->lessThan(first, context) && parent_.next(context) != NULLRCP) {
      pos = pos->add(one, context);
    }

    if(pos->equals(first, context)) {
      Item::Ptr result = parent_.next(context);
      parent_ = 0;
      return result;
    }

    parent_ = 0;
  }

  return 0;
}

void ASTNodeImpl::NumericPredicateFilterResult::skip()
{
  parent_.skip();
}

std::string ASTNodeImpl::NumericPredicateFilterResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<numeric_predicate>" << std::endl;
  if(!parent_.isNull()) {
    oss << in << "  <parent>" << std::endl;
    oss << parent_.asString(context, indent + 2);
    oss << in << "  </parent>" << std::endl;
  }
  oss << PrintAST::print(pred_.pred, context, indent + 1);
  oss << in << "</numeric_predicate>" << std::endl;

  return oss.str();
}

