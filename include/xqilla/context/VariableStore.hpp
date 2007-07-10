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

#ifndef _VARIABLESTORE_HPP
#define _VARIABLESTORE_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xercesc/util/XercesDefs.hpp>

class Result;

/** The pure virtual base class for accessing variables at runtime. */
class XQILLA_API VariableStore
{
public:
  /** default destructor */
  virtual ~VariableStore() {};

  /** Looks up the value of a variable by namespace URI and localname pair. */
  virtual Result getVar(const XMLCh *namespaceURI, const XMLCh *name) const = 0;
};

#endif
