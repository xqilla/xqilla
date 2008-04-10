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

#ifndef _XQSEQUENCE_HPP
#define _XQSEQUENCE_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/items/ItemConstructor.hpp>

class XPath2MemoryManager;
class DynamicContext;

/** deals with the numeric data type */
class XQILLA_API XQSequence : public ASTNodeImpl
{
public:
  XQSequence(const Item::Ptr &item, DynamicContext *context, XPath2MemoryManager* memMgr);
  XQSequence(ItemConstructor *ic, XPath2MemoryManager* memMgr);
  XQSequence(XPath2MemoryManager* memMgr);

  ~XQSequence();

  virtual bool isDateOrTimeAndHasNoTimezone(StaticContext* context) const;
  virtual bool isSingleNumericConstant(StaticContext *context) const;

  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);
  virtual Result createResult(DynamicContext* context, int flags=0) const;
  virtual EventGenerator::Ptr generateEvents(EventHandler *events, DynamicContext *context,
                              bool preserveNS, bool preserveType) const;

  const ItemConstructor::Vector &getItemConstructors() const
  {
    return _itemConstructors;
  }

  static XQSequence *constantFold(Result &result, DynamicContext *context, XPath2MemoryManager* memMgr,
                                  const LocationInfo *location);

private:
  class SequenceResult : public ResultImpl {
  public:
    SequenceResult(const XQSequence *seq);

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;
  private:
    const XQSequence *_seq;
    ItemConstructor::Vector::const_iterator _it;
  };

  ItemConstructor::Vector _itemConstructors;
};

#endif
