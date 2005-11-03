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

#ifndef _XQSEQUENCE_HPP
#define _XQSEQUENCE_HPP

#include <xqilla/framework/Pathan.hpp>
#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/items/ItemConstructor.hpp>

class XPath2MemoryManager;
class DynamicContext;

/** deals with the numeric data type */
class PATHAN_EXPORT XQSequence : public ASTNodeImpl
{
public:
  XQSequence(Result &result, DynamicContext *context, XPath2MemoryManager* memMgr);
  XQSequence(const Item::Ptr &item, DynamicContext *context, XPath2MemoryManager* memMgr);
  XQSequence(ItemConstructor *ic, XPath2MemoryManager* memMgr);
  XQSequence(XPath2MemoryManager* memMgr);

  ~XQSequence();

  virtual bool isConstantAndHasTimezone(StaticContext* context) const;
  virtual bool isSingleNumericConstant(StaticContext *context) const;

  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNodeImpl *resolvePredicate(Predicates::reverse_iterator it, Predicates &newPreds, DynamicContext *context);

  virtual Result createResult(DynamicContext* context, int flags=0) const;

  const ItemConstructor::Vector &getItemConstructors() const
  {
    return _itemConstructors;
  }

private:
  class SequenceResult : public ResultImpl {
  public:
    SequenceResult(const XQSequence *seq, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;
  private:
    const XQSequence *_seq;
    ItemConstructor::Vector::const_iterator _it;
  };

  ItemConstructor::Vector _itemConstructors;
};

#endif
