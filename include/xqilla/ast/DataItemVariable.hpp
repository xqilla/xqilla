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

#ifndef _DATAITEMVARIABLE_HPP
#define _DATAITEMVARIABLE_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/DataItemImpl.hpp>
#include <xqilla/runtime/Sequence.hpp>

/** Deals with all the simple variable stuff.*/
class PATHAN_EXPORT DataItemVariable : public DataItemImpl
{
public:
  DataItemVariable(const XMLCh *qualifiedName, XPath2MemoryManager* memMgr);
  DataItemVariable(const XMLCh *prefix, const XMLCh *name, XPath2MemoryManager* memMgr);
  ~DataItemVariable();

  virtual Result createResult(DynamicContext* context, int flags=0) const;
  virtual DataItem* staticResolution(StaticContext *context);

  const XMLCh *getPrefix() const;
  const XMLCh *getURI() const;
  const XMLCh *getName() const;

private:
  const XMLCh* _prefix;
  const XMLCh* _uri;
  const XMLCh* _name;
  unsigned int _staticProperties;
};

#endif


