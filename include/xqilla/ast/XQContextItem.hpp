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

#ifndef _XQCONTEXTITEM_HPP
#define _XQCONTEXTITEM_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/runtime/SingleResult.hpp>

/** Returns the context item. Raises [err:XP0002] if the context item is null. */
class PATHAN_EXPORT XQContextItem : public ASTNodeImpl
{

public:
  XQContextItem(XPath2MemoryManager* memMgr);
  ~XQContextItem();

  /**
   * Called during static analysis of expression to determine is statically
   * correct.  If not an appropriate error is thrown.
   */
  virtual ASTNode* staticResolution(StaticContext *context);

	virtual Result createResult(DynamicContext* context, int flags=0) const;

  class PATHAN_EXPORT ContextItemResult : public SingleResult
  {
  public:
		ContextItemResult(DynamicContext *context);
		Item::Ptr getSingleResult(DynamicContext *context) const;
		std::string asString(DynamicContext *context, int indent) const;    
  };
};

#endif

