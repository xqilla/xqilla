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

  lang function

*/

#ifndef _FUNCTIONLANG_HPP
#define _FUNCTIONLANG_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/DataItemFunction.hpp>

/** lang function. */
class PATHAN_EXPORT FunctionLang : public DataItemFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionLang(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  
  virtual DataItem* staticResolution(StaticContext *context);

  /** The lang function returns true or false depending on whether the language of
      the context node as specified by xml:lang attributes is the same as or is a
      sublanguage of the language specified by the argument string. The language of 
      the context node is determined by the value of the xml:lang attribute on the 
      context node, or, if the context node has no xml:lang attribute, by the value 
      of the xml:lang attribute on the nearest ancestor of the context node that has 
      an xml:lang attribute.**/

  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

};

#endif // _FUNCTIONLANG_HPP

