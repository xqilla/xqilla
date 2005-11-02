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

/*
  Utility class used by FOR and SOME/EVERY
*/

#ifndef _VARIABLEBINDING_HPP
#define _VARIABLEBINDING_HPP

#include <xqilla/framework/Pathan.hpp>
#include <xercesc/util/XercesDefs.hpp>

class DataItem;

class PATHAN_EXPORT VariableBinding 
{
public:
  VariableBinding(const XMLCh* const variable, DataItem* allValues);

  const XMLCh *getVariable() const;
  const DataItem *getValue() const;
  DataItem *getValue();

  void setValue(DataItem *item);

private:
  const XMLCh* _variable;
  DataItem* _allValues;
};

#endif    
