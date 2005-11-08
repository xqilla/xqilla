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
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
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
