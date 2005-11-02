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

#ifndef _DATAITEMCASTABLEAS_HPP
#define _DATAITEMCASTABLEAS_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/DataItemImpl.hpp>
#include <xqilla/runtime/SingleResult.hpp>

class SequenceType;

class PATHAN_EXPORT DataItemCastableAs : public DataItemImpl
{
public:
	DataItemCastableAs(DataItem* expr, SequenceType* exprType, XPath2MemoryManager* memMgr);

  virtual Result createResult(DynamicContext* context, int flags=0) const;
	virtual DataItem* staticResolution(StaticContext *context);

  const DataItem *getExpression() const;
  const SequenceType *getSequenceType() const;

  void setExpression(DataItem *item);

protected:
  class CastableAsResult : public SingleResult
  {
  public:
    CastableAsResult(const DataItemCastableAs *di, DynamicContext *context);

    Item::Ptr getSingleResult(DynamicContext *context) const;
    std::string asString(DynamicContext *context, int indent) const;

  private:
    const DataItemCastableAs *_di;
  };

	DataItem* _expr;
	SequenceType* _exprType;
};

#endif // _DATAITEMCASTABLEAS_HPP
