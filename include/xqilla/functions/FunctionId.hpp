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

#ifndef _FUNCTIONID_HPP
#define _FUNCTIONID_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xercesc/dom/DOMNodeFilter.hpp>

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

  /** 
   * Returns the sequence of element nodes with ID values matching the value 
   * of one of the IDREF values supplied in $srcval. 
   */
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONID_HPP

