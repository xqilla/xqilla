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

#ifndef _DATAITEMSEQUENCE_HPP
#define _DATAITEMSEQUENCE_HPP

#include <xqilla/framework/Pathan.hpp>
#include <xqilla/ast/DataItemImpl.hpp>
#include <xqilla/items/ItemConstructor.hpp>

class XPath2MemoryManager;
class DynamicContext;

/** deals with the numeric data type */
class PATHAN_EXPORT DataItemSequence : public DataItemImpl
{
public:
  DataItemSequence(Result &result, DynamicContext *context, XPath2MemoryManager* memMgr);
  DataItemSequence(const Item::Ptr &item, DynamicContext *context, XPath2MemoryManager* memMgr);
  DataItemSequence(ItemConstructor *ic, XPath2MemoryManager* memMgr);
  DataItemSequence(XPath2MemoryManager* memMgr);

  ~DataItemSequence();

  virtual bool isConstantAndHasTimezone(StaticContext* context) const;
  virtual bool isSingleNumericConstant(StaticContext *context) const;

  virtual DataItem* staticResolution(StaticContext *context);
  virtual DataItemImpl *resolvePredicate(Predicates::reverse_iterator it, Predicates &newPreds, DynamicContext *context);

  virtual Result createResult(DynamicContext* context, int flags=0) const;

  const ItemConstructor::Vector &getItemConstructors() const
  {
    return _itemConstructors;
  }

private:
  class SequenceResult : public ResultImpl {
  public:
    SequenceResult(const DataItemSequence *seq, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;
  private:
    const DataItemSequence *_seq;
    ItemConstructor::Vector::const_iterator _it;
  };

  ItemConstructor::Vector _itemConstructors;
};

#endif
