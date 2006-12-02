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
#include <xqilla/update/PendingUpdateList.hpp>

void PendingUpdateList::addUpdate(const PendingUpdate &update)
{
  updates_.push_back(update);
}

void PendingUpdateList::mergeUpdates(const PendingUpdateList &pul)
{
  for(const_iterator i = pul.begin(); i != pul.end(); ++i) {
    updates_.push_back(*i);
  }
}

