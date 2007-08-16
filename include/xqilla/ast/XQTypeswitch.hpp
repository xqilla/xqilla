/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Oracle. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#ifndef XQTYPESWITCH_HPP
#define XQTYPESWITCH_HPP

#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/context/impl/VarStoreImpl.hpp>

class SequenceType;
class ResultBuffer;
template<class TYPE> class Scope;

class XQILLA_API XQTypeswitch : public ASTNodeImpl
{
public:
  class Case : public LocationInfo
  {
  public:
    Case(const XMLCh *qname, SequenceType *seqType, ASTNode *expr);

    void staticResolution(StaticContext* context);
    void staticTyping(const StaticAnalysis &var_src, StaticContext* context,
                      StaticAnalysis &src, bool &possiblyUpdating);

    const XMLCh *getQName() const { return qname_; }
    const XMLCh *getURI() const { return uri_; }
    const XMLCh *getName() const { return name_; }

    bool isVariableUsed() const { return qname_ != 0; }
    void setVariableNotUsed() { qname_ = 0; }

    SequenceType *getSequenceType() const { return seqType_; }
    void setSequenceType(SequenceType *s) { seqType_ = s; }

    ASTNode *getExpression() const { return expr_; }
    void setExpression(ASTNode *expr) { expr_ = expr; }

  private:
    const XMLCh *qname_;
    const XMLCh *uri_;
    const XMLCh *name_;
    SequenceType *seqType_;
    ASTNode *expr_;
  };

  typedef std::vector<Case*, XQillaAllocator<Case*> > Cases;

  XQTypeswitch(ASTNode *expr, Cases *cases, Case *defaultCase, XPath2MemoryManager *mm);

  virtual ASTNode *staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  virtual Result createResult(DynamicContext* context, int flags=0) const;
  virtual void generateEvents(EventHandler *events, DynamicContext *context,
                              bool preserveNS, bool preserveType) const;
  virtual PendingUpdateList createUpdateList(DynamicContext *context) const;

  const Case *chooseCase(DynamicContext *context, Sequence &resultSeq) const;

  const ASTNode *getExpression() const { return expr_; }
  void setExpression(ASTNode *expr) { expr_ = expr; }

  const Case *getDefaultCase() const { return default_; }
  const Cases *getCases() const { return cases_; }

private:
  class TypeswitchResult : public ResultImpl
  {
  public:
    TypeswitchResult(const XQTypeswitch *di);

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;

  private:
    const XQTypeswitch *_di;

    SingleVarStore _scope;
    bool _scopeUsed;
    Result _result;
  };

  ASTNode *expr_;
  Cases *cases_;
  Case *default_;
};

#endif
