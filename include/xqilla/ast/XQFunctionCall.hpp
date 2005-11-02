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

#if !defined(AFX_XQFUNCTIONCALL_H__2B6902E9_A4FA_4AB3_9C69_08A8E77E70DA__INCLUDED_)
#define AFX_XQFUNCTIONCALL_H__2B6902E9_A4FA_4AB3_9C69_08A8E77E70DA__INCLUDED_

#include <xqilla/framework/XQEngine.hpp>
#include <xqilla/ast/DataItemImpl.hpp>

class QualifiedName;

/** placeholder for function calls. */
class XQENGINE_API XQFunctionCall : public DataItemImpl
{
public:
  XQFunctionCall(QualifiedName* qname, const VectorOfDataItems &args, XPath2MemoryManager* expr);

  /** always throws an exception **/
  Result createResult(DynamicContext* context, int flags=0) const;

  /**
   *  Will perform the binding with the real function body
   */
  virtual DataItem* staticResolution(StaticContext *context);

  const QualifiedName *getName() const;
  const VectorOfDataItems &getArguments() const;

protected:
  VectorOfDataItems _args;
  QualifiedName* _qname;
};

#endif // !defined(AFX_XQFUNCTIONCALL_H__2B6902E9_A4FA_4AB3_9C69_08A8E77E70DA__INCLUDED_)
