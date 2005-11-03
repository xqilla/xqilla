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

#include "../config/xqilla_config.h"
#include <xqilla/runtime/SingleResult.hpp>

SingleResult::SingleResult(DynamicContext *context)
  : ResultImpl(context),
    toDo_(true)
{
}

Item::Ptr SingleResult::next(DynamicContext *context)
{
  if(toDo_) {
    toDo_ = false;
    return getSingleResult(context);
  }
  else {
    return 0;
  }
}
