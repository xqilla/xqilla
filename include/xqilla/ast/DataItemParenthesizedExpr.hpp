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

#ifndef _DATAITEMPARENTHESIZEDEXPR_HPP
#define _DATAITEMPARENTHESIZEDEXPR_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/DataItemImpl.hpp>

class PATHAN_EXPORT DataItemParenthesizedExpr : public DataItemImpl
{

public:
  DataItemParenthesizedExpr(XPath2MemoryManager* memMgr);	

  ///adds a dataitem to this DataItemParenthesizedExpr
  void addItem(DataItem* di);

  virtual Result createResult(DynamicContext* context, int flags=0) const;
  virtual DataItem* staticResolution(StaticContext *context);

  const VectorOfDataItems &getChildren() const;

private:
  class ParenthesizedResult : public ResultImpl
  {
  public:
    ParenthesizedResult(const DataItemParenthesizedExpr *di, int flags, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;

  private:
    int _flags;
    const DataItemParenthesizedExpr *_di;
    VectorOfDataItems::const_iterator _i;
    Result _result;
  };

	VectorOfDataItems _dataItems;
};

#endif
