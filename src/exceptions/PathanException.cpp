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
#include <xqilla/framework/Pathan.hpp>
#include <xqilla/exceptions/PathanException.hpp>

bool PathanException::_debug = false;

PathanException::PathanException(const PathanException &other): XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException(other.code, XERCES_CPP_NAMESPACE_QUALIFIER XMLString::replicate(other.msg)) 
{
  // nothing to do
}


PathanException::~PathanException() {
    msg = 0;
}

/*static*/ void PathanException::setDebug(bool flag)
{
    _debug = flag;
}

/*static*/ bool PathanException::getDebug(void)
{
    return _debug;
}

XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::ExceptionCode PathanException::getCode(void) const 
{
  return code;
}//getCode

const XMLCh* PathanException::getString(void) const 
{
  return msg;
}//getString
