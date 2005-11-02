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
#include <xqilla/items/Item.hpp>
#include <xqilla/framework/Pathan.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xercesc/util/XMLUniDefs.hpp>

const XMLCh Item::gPathan[] =   // Points to "Pathan"
{
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P,
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a,
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t,
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_h,
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a,
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n,
  XERCES_CPP_NAMESPACE_QUALIFIER chNull
};
