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
#include <xqilla/parser/VariableBinding.hpp>
#include <xercesc/util/XMLString.hpp>

VariableBinding::VariableBinding(const XMLCh* const variable, DataItem* allValues)
: _variable(variable),
  _allValues(allValues)
{
}

const XMLCh *VariableBinding::getVariable() const {
  return _variable;
}

const DataItem *VariableBinding::getValue() const {
  return _allValues;
}

DataItem *VariableBinding::getValue()
{
  return _allValues;
}

void VariableBinding::setValue(DataItem *item) {
  _allValues = item;
}
