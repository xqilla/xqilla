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
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <xqilla/items/ATUntypedAtomic.hpp>
#include <xercesc/util/XMLUniDefs.hpp>

/* untypedAtomic */
const XMLCh ATUntypedAtomic::fgDT_UNTYPEDATOMIC[] = {
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t,
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_y, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_p, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e,
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_d, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_A, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t,
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i,
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, XERCES_CPP_NAMESPACE_QUALIFIER chNull
};

/* http://www.w3.org/2005/xpath-datatypes,untypedAtomic */
const XMLCh ATUntypedAtomic::fgDT_UNTYPEDATOMIC_XERCESHASH[] = 
{
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_h,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, 
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_p,       XERCES_CPP_NAMESPACE_QUALIFIER chColon,         XERCES_CPP_NAMESPACE_QUALIFIER chForwardSlash, 
    XERCES_CPP_NAMESPACE_QUALIFIER chForwardSlash,  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_w,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_w, 
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_w,       XERCES_CPP_NAMESPACE_QUALIFIER chPeriod,        XERCES_CPP_NAMESPACE_QUALIFIER chLatin_w,
    XERCES_CPP_NAMESPACE_QUALIFIER chDigit_3,       XERCES_CPP_NAMESPACE_QUALIFIER chPeriod,        XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, 
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_g,       XERCES_CPP_NAMESPACE_QUALIFIER chForwardSlash, 
    XERCES_CPP_NAMESPACE_QUALIFIER chDigit_2,       XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0,       XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0, 
    XERCES_CPP_NAMESPACE_QUALIFIER chDigit_5,       XERCES_CPP_NAMESPACE_QUALIFIER chForwardSlash,  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_x,
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_p,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t,
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_h,       XERCES_CPP_NAMESPACE_QUALIFIER chDash,          XERCES_CPP_NAMESPACE_QUALIFIER chLatin_d,
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a,
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_y,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_p,
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s,       XERCES_CPP_NAMESPACE_QUALIFIER chComma,
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t,
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_y,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_p,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e,
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_d,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_A,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t,
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m,       XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i,
    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c,       XERCES_CPP_NAMESPACE_QUALIFIER chNull
};

