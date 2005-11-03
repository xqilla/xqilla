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

//////////////////////////////////////////////////////////////////////
// XQFunctionCall.hpp: interface for the XQFunctionCall class.
//////////////////////////////////////////////////////////////////////

#if !defined(AFXQ_XQFUNCTIONCALL_H__2B6902E9_A4FA_4AB3_9C69_08A8E77E70DA__INCLUDED_)
#define AFXQ_XQFUNCTIONCALL_H__2B6902E9_A4FA_4AB3_9C69_08A8E77E70DA__INCLUDED_

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/ASTNodeImpl.hpp>

class QualifiedName;

/** placeholder for function calls. */
class XQILLA_API XQFunctionCall : public ASTNodeImpl
{
public:
  XQFunctionCall(QualifiedName* qname, const VectorOfASTNodes &args, XPath2MemoryManager* expr);

  /** always throws an exception **/
  Result createResult(DynamicContext* context, int flags=0) const;

  /**
   *  Will perform the binding with the real function body
   */
  virtual ASTNode* staticResolution(StaticContext *context);

  const QualifiedName *getName() const;
  const VectorOfASTNodes &getArguments() const;

protected:
  VectorOfASTNodes _args;
  QualifiedName* _qname;
};

#endif // !defined(AFXQ_XQFUNCTIONCALL_H__2B6902E9_A4FA_4AB3_9C69_08A8E77E70DA__INCLUDED_)
