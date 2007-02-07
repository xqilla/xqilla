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

#ifndef _FUNCTIONID_HPP
#define _FUNCTIONID_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/XQFunction.hpp>
#include <xqilla/runtime/Sequence.hpp>

#include <vector>

/** 
 * Id function 
 *
 * fn:id(string* $srcval) => element*
 */
class XQILLA_API FunctionId : public XQFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  /**
   * Constructor.
   */
  FunctionId(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  /** 
   * Returns the sequence of element nodes with ID values matching the value 
   * of one of the IDREF values supplied in $srcval. 
   */
  Sequence createSequence(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONID_HPP

