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

#include "../config/pathan_config.h"
#include <xqilla/utils/ContextUtils.hpp>
#include "DateUtils.hpp"

#include <string.h>

int ContextUtils::getTimezone()
{
	time_t tt;
	time(&tt);

	struct tm tm;
	struct tm *tm_p = DateUtils::threadsafe_gmtime(&tt, &tm);

	return (int)mktime(tm_p) - (int)tt;
}
