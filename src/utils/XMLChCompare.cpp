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
#include <xqilla/utils/XMLChCompare.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xercesc/util/XMLString.hpp>

bool QNameSort::operator() (const std::pair<XMLCh*, XMLCh *> lhs, const std::pair<XMLCh*, XMLCh *> rhs) const {
    return XPath2Utils::equals(lhs.first, rhs.first) ? XERCES_CPP_NAMESPACE_QUALIFIER XMLString::compareString(lhs.second, rhs.second) < 0: XERCES_CPP_NAMESPACE_QUALIFIER XMLString::compareString(lhs.first, rhs.first) < 0;
}

bool XMLChSort::operator() (const XMLCh* lhs, const XMLCh* rhs) const {
    return XERCES_CPP_NAMESPACE_QUALIFIER XMLString::compareString(lhs, rhs) < 0;
}
