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

#ifndef _XQLITERAL_HPP
#define _XQLITERAL_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/ASTNodeImpl.hpp>

class ItemConstructor;

/** defines the behaviour for the literal  types*/
class XQILLA_API XQLiteral : public ASTNodeImpl
{
public:
  XQLiteral(ItemConstructor *ic, XPath2MemoryManager* memMgr);

  virtual bool isDateOrTimeAndHasNoTimezone(StaticContext* context) const;
  virtual bool isSingleNumericConstant(StaticContext *context) const;
  virtual ASTNode *staticTyping(StaticContext *context);

  virtual ASTNode* staticResolution(StaticContext *context);
  virtual Result createResult(DynamicContext* context, int flags=0) const;

  const ItemConstructor *getItemConstructor() const
  {
    return _itemConstructor;
  }

  void setItemConstructor(ItemConstructor *i)
  {
    _itemConstructor = i;
  }

private:
  ItemConstructor *_itemConstructor;
};

#endif

