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

#include <sstream>

#include "../config/xqilla_config.h"
#include <assert.h>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/ast/ASTNode.hpp>

#if defined(WIN32) && !defined(__CYGWIN__)
#define snprintf _snprintf
#endif

#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/runtime/SequenceResult.hpp>
#include <xqilla/items/AnyAtomicTypeConstructor.hpp>
#include <xqilla/items/ATQNameConstructor.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/items/ATQNameOrDerived.hpp>
#include <xqilla/items/DateOrTimeType.hpp>
#include <xqilla/exceptions/IllegalArgumentException.hpp>

#include <xercesc/validators/schema/SchemaSymbols.hpp>

inline ItemConstructor *itemToItemConstructor(const Item::Ptr &item, DynamicContext *context, XPath2MemoryManager *memMgr)
{
  if(item->isNode()) {
    XQThrow(IllegalArgumentException, X("itemToItemConstructor"), X("Cannot create an ItemConstructor for a Node"));
  }
  else {
    const AnyAtomicType *atom = (const AnyAtomicType*)(const Item*)item;

    if(XPath2Utils::equals(atom->getPrimitiveTypeName(),
                           XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_QNAME) &&
       XPath2Utils::equals(atom->getPrimitiveTypeURI(),
                           XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA)) {
      const ATQNameOrDerived *qname = (const ATQNameOrDerived*)atom;
      return new (memMgr) ATQNameConstructor(atom->getTypeURI(),
                                             atom->getTypeName(),
                                             qname->getURI(),
                                             qname->getPrefix(),
                                             qname->getName());
    }
    else {
      bool numeric = false;
      switch(atom->getPrimitiveTypeIndex()) {
      case AnyAtomicType::DECIMAL:
      case AnyAtomicType::DOUBLE:
      case AnyAtomicType::FLOAT: {
        numeric = true;
        break;
      }
      default: break;
      }      

      return new (memMgr) AnyAtomicTypeConstructor(atom->getTypeURI(),
                                                   atom->getTypeName(),
                                                   atom->asString(context),
                                                   numeric);
    }
  }
}

inline void resultToItemConstructors(Result &result, DynamicContext *context, ItemConstructor::Vector &ics, XPath2MemoryManager *memMgr)
{
  Item::Ptr item;
  while((item = result.next(context)) != NULLRCP) {
    ics.push_back(itemToItemConstructor(item, context, memMgr));
  }
}

XQSequence::XQSequence(Result &result, DynamicContext *context, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr), _itemConstructors(XQillaAllocator<ItemConstructor*>(memMgr))
{
  setType(ASTNode::SEQUENCE);
  resultToItemConstructors(result, context, _itemConstructors, memMgr);
}

XQSequence::XQSequence(const Item::Ptr &item, DynamicContext *context, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr), _itemConstructors(XQillaAllocator<ItemConstructor*>(memMgr))
{
  setType(ASTNode::SEQUENCE);
  _itemConstructors.push_back(itemToItemConstructor(item, context, memMgr));
}

XQSequence::XQSequence(ItemConstructor *ic, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr), _itemConstructors(XQillaAllocator<ItemConstructor*>(memMgr))
{
  setType(ASTNode::SEQUENCE);
  _itemConstructors.push_back(ic);
}

XQSequence::XQSequence(XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr), _itemConstructors(XQillaAllocator<ItemConstructor*>(memMgr))
{
  setType(ASTNode::SEQUENCE);
}

XQSequence::~XQSequence()
{
  //no-op
}

ASTNodeImpl *XQSequence::resolvePredicate(Predicates::reverse_iterator it, Predicates &newPreds, DynamicContext *context)
{
  if(it != _predList.rend()) {
    resolvePredicate(it + 1, newPreds, context);

    if(_itemConstructors.empty()) {
      newPreds.clear();
    }
    else {
      ASTNode *pred = it->pred->staticResolution(context);
      const StaticResolutionContext &newSrc = pred->getStaticResolutionContext();
      PredInfo p_info(pred);

      if(newSrc.isUsedExceptContextFlags() || !newPreds.empty()) {
        // We can't constant fold, so just return
        newPreds.push_back(p_info);
        _src.addExceptContextFlags(newSrc);
      }
      else {
        // Constant fold
        Result parent(createResult(context));
        Result result = createPredicateResult(parent, p_info, context).toSequence(context);
        _itemConstructors.clear();
        resultToItemConstructors(result, context, _itemConstructors, getMemoryManager());
      }
    }
  }

  return this;
}

ASTNode* XQSequence::staticResolution(StaticContext *context)
{
  _src.getStaticType().flags = 0;

  ItemConstructor::Vector::iterator it = _itemConstructors.begin();
  for(; it != _itemConstructors.end(); ++it) {
    if((*it)->isNumeric()) {
      _src.getStaticType().flags |= StaticType::NUMERIC_TYPE;
    } else {
      _src.getStaticType().flags |= StaticType::OTHER_TYPE;
    }
  }

  return resolvePredicates(context);
}

Result XQSequence::createResult(DynamicContext* context, int flags) const
{
  return new SequenceResult(this, context);
}

/** Returns true if this XQ has no predicates, and is an instance of
    XQSequence or XQLiteral. If the literal value of this XQ
    is a single DateOrTimeType, then hasTimezone() on it must return true,
    otherwise this method will return false. */
bool XQSequence::isConstantAndHasTimezone(StaticContext *context) const
{
  if(isConstant() && _itemConstructors.size() == 1) {
    AutoDelete<DynamicContext> dContext(context->createDynamicContext());
    dContext->setMemoryManager(context->getMemoryManager());

    Item::Ptr item = _itemConstructors[0]->createItem(dContext);
    if(item->isAtomicValue() &&
       ((const AnyAtomicType::Ptr)item)->isDateOrTimeTypeValue() &&
       ((const DateOrTimeType::Ptr)item)->hasTimezone()) {
      return true;
    }
  }
  return false;
}

bool XQSequence::isSingleNumericConstant(StaticContext *context) const
{
  if(isConstant() && _itemConstructors.size() == 1) {
    AutoDelete<DynamicContext> dContext(context->createDynamicContext());
    dContext->setMemoryManager(context->getMemoryManager());

    Item::Ptr item = _itemConstructors[0]->createItem(dContext);
    if(item->isAtomicValue() &&
       ((const AnyAtomicType::Ptr)item)->isNumericValue()) {
      return true;
    }
  }
  return false;
}

XQSequence::SequenceResult::SequenceResult(const XQSequence *seq, DynamicContext *context)
  : ResultImpl(context),
    _seq(seq),
    _it(seq->getItemConstructors().begin())
{
}

Item::Ptr XQSequence::SequenceResult::next(DynamicContext *context)
{
  Item::Ptr item;
  if(_it != _seq->getItemConstructors().end()) {
    item = (*_it)->createItem(context);
    ++_it;
  }
  return item;
}

std::string XQSequence::SequenceResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<sequence/>" << std::endl;

  return oss.str();
}
