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

#ifndef _XMLCHCOMPARE_HPP
#define _XMLCHCOMPARE_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <algorithm>
#include <xercesc/util/XercesDefs.hpp>

class XQILLA_API QNameSort {
public:
    bool operator() (const std::pair<XMLCh*, XMLCh *> lhs, const std::pair<XMLCh*, XMLCh *> rhs) const;
};

class XQILLA_API XMLChSort {
public:
    bool operator() (const XMLCh* lhs, const XMLCh* rhs) const;
};

#endif
