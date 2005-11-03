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

/*
   current-dateTime function
*/

#ifndef _FUNCTIONCURRENT_DATETIME_HPP
#define _FUNCTIONCURRENT_DATETIME_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/XQFunction.hpp>

/** Current-dateTime function*/
class PATHAN_EXPORT FunctionCurrentDateTime : public XQFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionCurrentDateTime(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  virtual ASTNode* staticResolution(StaticContext *context);

  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONCURRENT_DATETIME_HPP


