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
// XQDynamicContext.h: interface for the XQuery dynamic context.
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_XQDYNAMICCONTEXT_H__D608B994_F090_4206_9473_81F3D7350410__INCLUDED_)
#define AFX_XQDYNAMICCONTEXT_H__D608B994_F090_4206_9473_81F3D7350410__INCLUDED_

#include <xqilla/context/XQStaticContext.hpp>
#include <xqilla/context/DynamicContext.hpp>

class XQDebugCallback;

class XQENGINE_API XQDynamicContext : public XQStaticContext
{
public:
  virtual ~XQDynamicContext() {};

  /** Set the object to be used for debugging callbacks */
  virtual void setDebugCallback(XQDebugCallback* callback) = 0;
  /** Get the object to be used for debugging callbacks */
  virtual XQDebugCallback* getDebugCallback() const = 0;
};

#endif // !defined(AFX_XQDYNAMICCONTEXT_H__D608B994_F090_4206_9473_81F3D7350410__INCLUDED_)
