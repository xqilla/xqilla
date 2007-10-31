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

  FuncFactoryTemplate(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr)
    : uriname(1023, memMgr)
  {
    uriname.set(getName());
    uriname.append(getURI());
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

  virtual const XMLCh *getURINameHash() const
  {
    return uriname.getRawBuffer();
  }
  
  virtual size_t getMinArgs() const
  {
    return TYPE::minArgs;
  }

  virtual size_t getMaxArgs() const
  {
    return TYPE::maxArgs;
  }

private:
  XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer uriname;
};

#endif
