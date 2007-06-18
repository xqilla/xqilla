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

#include "../config/xqilla_config.h"
#include <xqilla/functions/ExternalFunction.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/runtime/Result.hpp>
#include <xqilla/update/PendingUpdateList.hpp>

XERCES_CPP_NAMESPACE_USE;

ExternalFunction::ExternalFunction(const XMLCh *uri, const XMLCh *name, unsigned int numberOfArgs, XPath2MemoryManager *mm)
  : uri_(mm->getPooledString(uri)),
    name_(mm->getPooledString(name)),
    uriName_(0),
    numArgs_(numberOfArgs)
{
  XMLBuffer buf;
  buf.set(name);
  buf.append(uri);
  uriName_ = mm->getPooledString(buf.getRawBuffer());
}

Result ExternalFunction::execute(const Arguments *args, DynamicContext *context) const
{
  return 0;
}

PendingUpdateList ExternalFunction::executeUpdate(const Arguments *args, DynamicContext *context) const
{
  return PendingUpdateList();
}

