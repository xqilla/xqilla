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

#include "../config/xqilla_config.h"
#include <xqilla/utils/ContextUtils.hpp>
#include "DateUtils.hpp"

#include <string.h>

int ContextUtils::getTimezone()
{
	time_t tt;
	time(&tt);

	struct tm tm;
	DateUtils::threadsafe_gmtime(&tt, &tm);

	struct tm ltm;
	DateUtils::threadsafe_localtime(&tt, &ltm);

	return (int)tt - (int)mktime(&tm) +
		/*daylight saving time*/(ltm.tm_isdst > 0 ? 1 * 60 * 60 : 0);
}
