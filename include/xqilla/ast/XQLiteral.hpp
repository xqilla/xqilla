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

