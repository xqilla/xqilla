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

#ifndef _EMPTYRESULT_HPP
#define _EMPTYRESULT_HPP

#include <xqilla/runtime/ResultImpl.hpp>

class XQILLA_API EmptyResult : public ResultImpl
{
public:
  EmptyResult(DynamicContext *context);

  Item::Ptr next(DynamicContext *context);

  std::string asString(DynamicContext *context, int indent) const;
};

#endif
