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
#include <xqilla/items/Numeric.hpp>
#include <xercesc/util/XMLUniDefs.hpp>

const XMLCh Numeric::NaN_string[] = 
{ XERCES_CPP_NAMESPACE_QUALIFIER chLatin_N, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_N, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

const XMLCh Numeric::NAN_string[] = 
{ XERCES_CPP_NAMESPACE_QUALIFIER chLatin_N, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_A, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_N, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

const XMLCh Numeric::INF_string[] = 
{ XERCES_CPP_NAMESPACE_QUALIFIER chLatin_I, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_N, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_F, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

const XMLCh Numeric::NegINF_string[] =
{ XERCES_CPP_NAMESPACE_QUALIFIER chDash, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_I, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_N, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_F, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

const XMLCh Numeric::NegZero_string[] =
{ XERCES_CPP_NAMESPACE_QUALIFIER chDash, XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

const XMLCh Numeric::PosZero_string[] =
{ XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

