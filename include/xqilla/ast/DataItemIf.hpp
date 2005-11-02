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

#ifndef _DATAITEMIF_HPP
#define _DATAITEMIF_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/DataItemImpl.hpp>

/** If function. */
class PATHAN_EXPORT DataItemIf : public DataItemImpl
{
public:
  DataItemIf(DataItem* test, DataItem* whenTrue, DataItem* whenFalse, XPath2MemoryManager* memMgr);
  
  virtual Result createResult(DynamicContext* context, int flags=0) const;
  virtual DataItem* staticResolution(StaticContext *context);

  const DataItem *getTest() const;
  const DataItem *getWhenTrue() const;
  const DataItem *getWhenFalse() const;

  void setTest(DataItem *item);
  void setWhenTrue(DataItem *item);
  void setWhenFalse(DataItem *item);

protected:
  class IfResult : public ResultImpl
  {
  public:
    IfResult(const DataItemIf *di, int flags, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;

  private:
    int _flags;
    const DataItemIf *_di;
    Result _results;
  };

  DataItem* _test,* _whenTrue,* _whenFalse;
};

#endif // _DATAITEMIF_HPP


