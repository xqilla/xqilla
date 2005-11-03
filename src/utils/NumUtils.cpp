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
#include <xqilla/utils/NumUtils.hpp>
#include <stdlib.h>

int NumUtils::MAPMtoInt(MAPM m) {
  char tmpout[1024];
  m.toIntegerString(tmpout);
  int result = atoi(tmpout);
  return result; 
}   
    
double NumUtils::MAPMtoDouble(MAPM m) {
  char tmpdouble[1024];
  m.toFixPtString(tmpdouble,1000);
  double result = atof(tmpdouble);
  return result;
}   
