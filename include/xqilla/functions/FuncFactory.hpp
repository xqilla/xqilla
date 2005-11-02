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
  Factory base class
*/

#ifndef _FUNCFACTORY_HPP
#define _FUNCFACTORY_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/DataItem.hpp>

class PATHAN_EXPORT FuncFactory
{
public:
  FuncFactory();
  virtual ~FuncFactory();

  ///Create instance of a function, using FuncFactoryTemplate to determine type
  virtual DataItem *createInstance(const VectorOfDataItems &args, XPath2MemoryManager* memMgr) const = 0;

  virtual const XMLCh *getName() const = 0;
  virtual const XMLCh *getURI() const = 0;
  virtual unsigned int getMinArgs() const = 0;
  virtual unsigned int getMaxArgs() const = 0;
};

#endif

