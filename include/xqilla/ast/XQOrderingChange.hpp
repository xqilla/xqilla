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

//////////////////////////////////////////////////////////////////////
// XQOrderingChange.hpp: interface for the XQOrderingChange class.
//////////////////////////////////////////////////////////////////////

#if !defined(AFXQ_XQORDERINGCHANGE_H__A97FA5AE_5355_45CD_9092_ED94F5CD035B__INCLUDED_)
#define AFXQ_XQORDERINGCHANGE_H__A97FA5AE_5355_45CD_9092_ED94F5CD035B__INCLUDED_

#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/context/StaticContext.hpp>

class XQILLA_API XQOrderingChange : public ASTNodeImpl
{
public:
  XQOrderingChange(StaticContext::NodeSetOrdering ordering, ASTNode* astNode, XPath2MemoryManager* expr);

	virtual Result createResult(DynamicContext *context, int flags=0) const;
	virtual ASTNode* staticResolution(StaticContext *context);

	StaticContext::NodeSetOrdering getOrderingValue() const;
  ASTNode* getExpr() const;
  void setExpr(ASTNode *expr);

protected:
  class OrderingChangeResult : public ResultImpl
  {
  public:
    OrderingChangeResult(const XQOrderingChange* orderChange, int flags, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;

  private:
    const XQOrderingChange* _oc;
    int _flags;
    Result _innerExpr;
  };

  StaticContext::NodeSetOrdering m_nOrdering;
  ASTNode* m_pExpr;
};

#endif // !defined(AFXQ_XQORDERINGCHANGE_H__A97FA5AE_5355_45CD_9092_ED94F5CD035B__INCLUDED_)
