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

/*
  Factory template class
*/

#ifndef _FUNCFACTORYTEMPLATE_HPP
#define _FUNCFACTORYTEMPLATE_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/functions/FuncFactory.hpp>

///Macro used to facilitate the creation of functions
template<class TYPE>
class FuncFactoryTemplate : public FuncFactory
{
public:

  FuncFactoryTemplate()
  {
  }

  virtual ASTNode *createInstance(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr) const
  {
	  return new (memMgr) TYPE(args, memMgr);
  }

  virtual const XMLCh *getName() const
  {
    return TYPE::name;
  }

  virtual const XMLCh *getURI() const
  {
    return TYPE::XMLChFunctionURI;
  }

  virtual unsigned int getMinArgs() const
  {
    return TYPE::minArgs;
  }

  virtual unsigned int getMaxArgs() const
  {
    return TYPE::maxArgs;
  }
};

#endif
