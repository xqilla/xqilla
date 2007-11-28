/*
 * Copyright (c) 2001-2007
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2007
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

#ifndef _CONVERTFUNCTIONARG_HPP
#define _CONVERTFUNCTIONARG_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/ASTNodeImpl.hpp>

class XQILLA_API XQPromoteUntyped : public ASTNodeImpl
{
public:
  XQPromoteUntyped(ASTNode* expr, const XMLCh *uri, const XMLCh *name, XPath2MemoryManager* memMgr);

  virtual Result createResult(DynamicContext* context, int flags=0) const;
  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  const ASTNode *getExpression() const { return expr_; }
  void setExpression(ASTNode *expr) { expr_ = expr; }
  const XMLCh *getTypeURI() const { return uri_; }
  const XMLCh *getTypeName() const { return name_; }
  bool isPrimitive() const { return isPrimitive_; }
  AnyAtomicType::AtomicObjectType getTypeIndex() const { return typeIndex_; }  

protected:
  class PromoteUntypedResult : public ResultImpl
  {
  public:
    PromoteUntypedResult(const XQPromoteUntyped *di, const Result &parent)
      : ResultImpl(di), parent_(parent), di_(di) {}

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const { return "promoteuntypedresult"; }
  private:
    Result parent_;
    const XQPromoteUntyped *di_;
  };

  ASTNode* expr_;
  const XMLCh *uri_, *name_;
  bool isPrimitive_;
  AnyAtomicType::AtomicObjectType typeIndex_;
};

////////////////////////////////////////////////////////////////////////////////////////////////////

class XQILLA_API XQPromoteNumeric : public ASTNodeImpl
{
public:
  XQPromoteNumeric(ASTNode* expr, const XMLCh *uri, const XMLCh *name, XPath2MemoryManager* memMgr);

  virtual Result createResult(DynamicContext* context, int flags=0) const;
  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  const ASTNode *getExpression() const { return expr_; }
  void setExpression(ASTNode *expr) { expr_ = expr; }
  const XMLCh *getTypeURI() const { return uri_; }
  const XMLCh *getTypeName() const { return name_; }
  AnyAtomicType::AtomicObjectType getTypeIndex() const { return typeIndex_; }

protected:
  class PromoteNumericResult : public ResultImpl
  {
  public:
    PromoteNumericResult(const XQPromoteNumeric *di, const Result &parent)
      : ResultImpl(di), parent_(parent), di_(di) {}

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const { return "promotenumericresult"; }
  private:
    Result parent_;
    const XQPromoteNumeric *di_;
  };

  ASTNode* expr_;
  const XMLCh *uri_, *name_;
  AnyAtomicType::AtomicObjectType typeIndex_;
};

////////////////////////////////////////////////////////////////////////////////////////////////////

class XQILLA_API XQPromoteAnyURI : public ASTNodeImpl
{
public:
  XQPromoteAnyURI(ASTNode* expr, const XMLCh *uri, const XMLCh *name, XPath2MemoryManager* memMgr);

  virtual Result createResult(DynamicContext* context, int flags=0) const;
  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  const ASTNode *getExpression() const { return expr_; }
  void setExpression(ASTNode *expr) { expr_ = expr; }
  const XMLCh *getTypeURI() const { return uri_; }
  const XMLCh *getTypeName() const { return name_; }

protected:
  class PromoteAnyURIResult : public ResultImpl
  {
  public:
    PromoteAnyURIResult(const XQPromoteAnyURI *di, const Result &parent)
      : ResultImpl(di), parent_(parent) {}

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const { return "promoteanyuriresult"; }
  private:
    Result parent_;
  };

  ASTNode* expr_;
  const XMLCh *uri_, *name_;
};

#endif
