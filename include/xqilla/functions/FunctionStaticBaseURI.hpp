/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
 */

/*
   static-base-uri function
*/

#ifndef _FUNCTIONSTATICBASEURI_HPP
#define _FUNCTIONSTATICBASEURI_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/DataItemFunction.hpp>

class PATHAN_EXPORT FunctionStaticBaseURI : public DataItemFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionStaticBaseURI(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  
  virtual DataItem* staticResolution(StaticContext *context);

  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif
