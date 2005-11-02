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

#ifndef _NUMUTILS_HPP
#define _NUMUTILS_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/mapm/m_apm.h>

class XPath2MemoryManager;

/** class with static methods for dealing with floating point numbers */
class PATHAN_EXPORT NumUtils
{
public:
  /** return MAPM to int */
  static int MAPMtoInt(MAPM m);

  /** return MAPM to double */
  static double MAPMtoDouble(MAPM m);
};

#endif // _NUMUTILS_HPP

